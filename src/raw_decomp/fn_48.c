// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00480110  BuildingClass::CalcDrawPos  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::CalcDrawPos(BuildingClass *this, _DWORD *a2)
{
  int *v3; // eax
  int v4; // edx
  int v5; // ecx
  unsigned __int8 v6; // al
  char *v8; // ecx
  _DWORD v9[2]; // [esp+4h] [ebp-8h] BYREF

  v3 = globalHelper_0FDCC0(v9, this->?[2]); /*0x48011d*/
  v4 = *v3; /*0x480122*/
  v5 = v3[1]; /*0x480124*/
  if ( SLOBYTE(this->?) >= 0 ) /*0x48012f*/
  {
    if ( this->?[2] == 239 ) /*0x48014b*/
LABEL_6:
      v5 -= 15; /*0x48014d*/
  }
  else
  {
    v6 = BYTE2(this->?); /*0x480131*/
    v5 -= 16; /*0x480137*/
    if ( v6 >= 9u && v6 <= 0x11u ) /*0x480140*/
      goto LABEL_6; /*0x480140*/
  }
  v8 = (char *)DSurface_ViewBounds.field_4 + v5 + -15 * SHIBYTE(this->?[1]); /*0x480150*/
  *a2 = v4 + 30; /*0x480172*/
  a2[1] = v8 + 15; /*0x480174*/
  return a2; /*0x48016e*/
}



// ==== 0x00480180  DSurface::Process  this=CellClass  sig=csp ====
void __thiscall sub_480180(int this, int *a2, int *a3)
{
  TerrainClass::GenerateTexture( /*0x4801de*/
    *(_DWORD **)dword_A8ED2C,
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



// ==== 0x004801F0  TacticalClass::RenderCellFogOfWar  this=CellClass  sig=csp ====
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
  if ( (*(_DWORD *)dword_A8B230 & 0x1000) != 0 && !*((_BYTE *)dword_A83D4C + 501) ) /*0x48025c*/
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
void __thiscall TacticalClass::DrawCellTerrainOverlay(TacticalClass *this, int *a2, int *a3)
{
  int field38; // eax
  int v5; // ebx
  int v6; // esi

  field38 = this->field38; /*0x4802a6*/
  if ( field38 == 0xFFFF ) /*0x4802ae*/
  {
    v5 = 0; /*0x4802df*/
    v6 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * dword_AA10B0); /*0x4802e1*/
  }
  else
  {
    v5 = BYTE2(this->visibleCells[13]); /*0x4802b8*/
    v6 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * field38); /*0x4802be*/
    if ( *(int *)(v6 + 752) > 1 ) /*0x4802c8*/
      CellClass::GetTerrainFlag((CellClass *)v6, BYTE2(this->visibleCells[13])); /*0x4802cd*/
  }
  if ( *(_BYTE *)(v6 + 737) ) /*0x4802e4*/
    TacticalClass::DrawCellOverlay( /*0x480339*/
      v6,
      v5,
      (int)g_DSurface_Hidden_2,
      *a2,
      a2[1] - 15 * SHIBYTE(this->visibleCells[13]),
      *a3,
      a3[1],
      a3[2],
      a3[3],
      58 - 15 * SHIBYTE(this->visibleCells[13]));
}



// ==== 0x00480350  TacticalClass::CheckCellVisibility  this=CellClass  sig=csp ====
int __thiscall TacticalClass::CheckCellVisibility(int *this, _DWORD *a2, _DWORD *a3, char a4)
{
  int result; // eax
  int v6; // eax
  int *v7; // edi
  unsigned int inited; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // [esp+10h] [ebp-Ch]
  int v15[2]; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+28h] [ebp+Ch]

  LOBYTE(result) = a4; /*0x480350*/
  if ( a4 ) /*0x48035f*/
    return result; /*0x48035f*/
  if ( !this->attached3 ) /*0x480365*/
    TacticalClass::SetView(this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x480384*/
  v6 = this->q038; /*0x480389*/
  v16 = 0; /*0x48038c*/
  if ( v6 == 0xFFFF ) /*0x480395*/
  {
    v14 = 0; /*0x4803e9*/
    v7 = (int *)*((_DWORD *)dword_A8ED2C + dword_AA10B0); /*0x4803ed*/
    inited = CellClass::InitRandomOffsets(this, dword_AA10B0, v7[188]); /*0x4803fa*/
LABEL_10:
    v16 = inited; /*0x4803ff*/
    goto LABEL_11; /*0x4803ff*/
  }
  v7 = (int *)*((_DWORD *)dword_A8ED2C + v6); /*0x48039d*/
  v14 = *((unsigned __int8 *)this + 282); /*0x4803ae*/
  if ( v7[188] > 1 ) /*0x4803b5*/
  {
    if ( (unsigned __int8)CellClass::GetTerrainFlag(v7, *((unsigned __int8 *)this + 282)) ) /*0x4803ba*/
      inited = ((unsigned int)this->wallOwnerIndex >> 13) & 1; /*0x4803cc*/
    else
      inited = CellClass::InitRandomOffsets(this, this->q038, v7[188]); /*0x4803dc*/
    goto LABEL_10; /*0x4803cf*/
  }
LABEL_11:
  ++dword_A83ECC; /*0x480403*/
  v9 = *((char *)this + 283); /*0x480416*/
  v10 = a2[1]; /*0x48041d*/
  v15[0] = *a2; /*0x480420*/
  v11 = v10 - 15 * v9; /*0x48042e*/
  result = (*(int (__thiscall **)(int *))(*v7 + 156))(v7); /*0x480430*/
  if ( result ) /*0x48043c*/
    TerrainClass::GenerateTexture( /*0x480499*/
      v7,
      this->attached3,
      v14,
      (int)g_DSurface_Hidden_2,
      v15[0],
      v11 + dword_886FA4,
      *a3,
      a3[1],
      a3[2],
      a3[3],
      *((char *)this + 283),
      *((__int16 *)this + 134),
      1,
      v16,
      0,
      0,
      0,
      0);
  if ( this->unknown30 != -1 ) /*0x4804a2*/
  {
    v12 = a3[1]; /*0x4804b1*/
    v15[0] = v15[0] + 30 - *a3; /*0x4804bd*/
    v13 = this->unknown30; /*0x4804c1*/
    v15[1] = v11 + dword_886FA4 - v12; /*0x4804c4*/
    return (*(int (__thiscall **)(_DWORD, int *, _DWORD *, _DWORD, int, int *))(**((_DWORD **)dword_A8EC1C + v13) + 160))( /*0x4804f5*/
             *((_DWORD *)dword_A8EC1C + v13),
             v15,
             a3,
             *((unsigned __int8 *)this + 287),
             dword_89E7C0 * *((char *)this + 283),
             this + 9);
  }
  return result; /*0x4804fb*/
}



// ==== 0x00480510  BuildingPlacement::ValidateType  this=BuildingPlacement  sig=csp ====
int __thiscall BuildingPlacement::ValidateType(BuildingPlacement *this, int a2, int a3)
{
  int result; // eax
  _DWORD *i; // esi
  _DWORD *j; // esi

  result = *((_DWORD *)this + 17); /*0x48051a*/
  if ( result == a2 && result != -1 ) /*0x480524*/
  {
    LOBYTE(result) = 1; /*0x480529*/
    return result; /*0x48052c*/
  }
  if ( a2 == -1 ) /*0x480532*/
  {
    if ( result == 2 || result == 26 || result == 243 ) /*0x480543*/
    {
LABEL_8:
      LOBYTE(result) = 1; /*0x480549*/
      return result; /*0x48054f*/
    }
  }
  else
  {
    if ( a2 == 2 || !a2 ) /*0x48055d*/
    {
      for ( i = (_DWORD *)*((_DWORD *)this + 57); i; i = (_DWORD *)i[12] ) /*0x480567*/
      {
        result = (*(int (__thiscall **)(_DWORD *))(*i + 44))(i); /*0x48056d*/
        if ( result == 6 ) /*0x480573*/
        {
          result = i[328]; /*0x480578*/
          if ( (int)i[27] > 0 /*0x4805b1*/
            && (result == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2156) && (a3 == 2 || a3 == 6)
             || result == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2160) && (!a3 || a3 == 4)
             || result == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2172)) )
          {
            goto LABEL_8; /*0x4805b1*/
          }
        }
      }
    }
    if ( a2 == 26 ) /*0x4805bd*/
    {
      for ( j = (_DWORD *)*((_DWORD *)this + 57); j; j = (_DWORD *)j[12] ) /*0x4805c7*/
      {
        result = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x4805cd*/
        if ( result == 6 ) /*0x4805d3*/
        {
          result = j[328]; /*0x4805d8*/
          if ( (int)j[27] > 0 /*0x480615*/
            && (result == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2164) && (a3 == 2 || a3 == 6)
             || result == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2168) && (!a3 || a3 == 4)) )
          {
            goto LABEL_8; /*0x480615*/
          }
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x480622*/
  return result; /*0x480526*/
}



// ==== 0x00480630  BuildingClass::ValidatePlacement  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::ValidatePlacement(BuildingClass *this, char a2)
{
  int *v2; // edi
  int v3; // eax
  char *v4; // esi
  int *StartCoords; // edi
  int *PlacementRect; // eax
  int v7; // ebx
  int v8; // eax
  int *v9; // edi
  int v10; // eax
  char v11; // bl
  int v12; // ecx
  int *v13; // eax
  int *v14; // eax
  char *v15; // edi
  int v16; // eax
  int *v17; // ebp
  BuildingPlacement *v18; // eax
  int v19; // eax
  __int16 v20; // dx
  int v21; // edx
  char v22; // bl
  char v23; // al
  int v24; // ecx
  char v25; // al
  char v26; // bl
  int v27; // eax
  char v28; // al
  unsigned int i; // esi
  int v30; // eax
  __int16 v31; // dx
  _BYTE *v32; // eax
  int v33; // [esp-Ch] [ebp-E8h]
  struct tagRECT *v34; // [esp-8h] [ebp-E4h]
  int v35; // [esp-8h] [ebp-E4h]
  const RECT *v36; // [esp-4h] [ebp-E0h]
  LPRECT v37; // [esp-4h] [ebp-E0h]
  __int16 *v38; // [esp-4h] [ebp-E0h]
  const RECT *v39; // [esp+0h] [ebp-DCh]
  const RECT *v40; // [esp+0h] [ebp-DCh]
  const RECT *v41; // [esp+4h] [ebp-D8h]
  __int16 v42[2]; // [esp+10h] [ebp-CCh] BYREF
  __int16 v43[2]; // [esp+14h] [ebp-C8h] BYREF
  char *v44; // [esp+18h] [ebp-C4h]
  int v45; // [esp+1Ch] [ebp-C0h]
  int v46; // [esp+20h] [ebp-BCh]
  int occupant; // [esp+24h] [ebp-B8h] BYREF
  __int16 v48[2]; // [esp+28h] [ebp-B4h] BYREF
  BuildingClass *v49; // [esp+2Ch] [ebp-B0h]
  Coord2D v50; // [esp+30h] [ebp-ACh] BYREF
  _DWORD v51[2]; // [esp+38h] [ebp-A4h] BYREF
  int v52; // [esp+40h] [ebp-9Ch] BYREF
  char v53[8]; // [esp+44h] [ebp-98h] BYREF
  int v54; // [esp+4Ch] [ebp-90h]
  int v55; // [esp+50h] [ebp-8Ch]
  int v56[4]; // [esp+5Ch] [ebp-80h] BYREF
  char v57[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v58[4]; // [esp+7Ch] [ebp-60h] BYREF
  int v59[4]; // [esp+9Ch] [ebp-40h] BYREF
  int v60[4]; // [esp+BCh] [ebp-20h] BYREF
  Rect v61; // [esp+CCh] [ebp-10h] BYREF

  v2 = (int *)&unk_81CC70; /*0x48063a*/
  v49 = this; /*0x48063f*/
  v44 = (char *)&unk_81CC70; /*0x480643*/
  while ( 1 ) /*0x48064d*/
  {
    v3 = *v2; /*0x48064d*/
    if ( (unsigned int)*v2 < 8 ) /*0x480652*/
    {
      occupant = this->?; /*0x48065e*/
      *(_DWORD *)v48 = *CellStruct::Add((CellStruct *)&occupant, &v52, (_WORD *)(4 * (v3 & 7) + 9041544)); /*0x480684*/
      v4 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x48068d*/
    }
    else
    {
      v4 = (char *)this; /*0x480654*/
    }
    if ( !a2 || *v2 != -1 ) /*0x48069d*/
    {
      StartCoords = House::GetStartCoords((House *)v4, v58); /*0x4806ab*/
      PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)v4, v56); /*0x4806b4*/
      if ( StartCoords[2] > 0 && StartCoords[3] > 0 && PlacementRect[2] > 0 && PlacementRect[3] > 0 ) /*0x4806d3*/
      {
        v7 = StartCoords[1]; /*0x4806d9*/
        if ( *StartCoords > *PlacementRect ) /*0x4806e4*/
          v54 = *PlacementRect; /*0x4806e8*/
        v8 = PlacementRect[1]; /*0x4806ee*/
        if ( v7 > v8 ) /*0x4806f3*/
          v55 = v8; /*0x4806f7*/
      }
    }
    v36 = (const RECT *)BuildingClass::GetPlacementRect((BuildingClass *)v4, v60); /*0x480713*/
    v34 = (struct tagRECT *)House::GetStartCoords((House *)v4, v59); /*0x48071c*/
    CellClass::GetScreenRect((CellClass *)v4, (int *)v57); /*0x480724*/
    Rect::Union(v34, v36, v39); /*0x480732*/
    v9 = (int *)Rect::Union(v37, v40, v41); /*0x480745*/
    v51[1] = DSurface_ViewBounds.field_4; /*0x480753*/
    v10 = *v9; /*0x480757*/
    v11 = 0; /*0x480759*/
    v51[0] = DSurface_ViewBounds.field_0; /*0x48075c*/
    v12 = v9[1]; /*0x480760*/
    *(_DWORD *)v50.__pad_0 = v10; /*0x480763*/
    v50.Coord2D_field_0x04 = v12; /*0x480767*/
    v35 = v9[3]; /*0x480775*/
    v33 = v9[2]; /*0x480776*/
    v13 = Coord2D::Sub(&v50, (int *)v53, v51); /*0x480781*/
    v14 = Rect::Construct(&v61, v13, v33, v35); /*0x48078e*/
    Cell::CreateCrater(*v14, v14[1], v14[2], v14[3], 0); /*0x4807b4*/
    v15 = v4 + 36; /*0x4807b9*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)(v4 + 36)); /*0x4807c2*/
    v16 = *((_DWORD *)v4 + 17); /*0x4807c7*/
    if ( v16 != -1 && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v16) + 680) ) /*0x4807dc*/
    {
      *(_DWORD *)v42 = 0; /*0x4807ea*/
      v17 = (int *)&unk_81CC70; /*0x4807ee*/
      do /*0x48086e*/
      {
        if ( (unsigned int)*v17 < 8 ) /*0x4807f9*/
        {
          v19 = *v17 & 7; /*0x480801*/
          *(_DWORD *)v43 = *(_DWORD *)v15; /*0x480804*/
          v20 = g_DDrawSurfaceManager.scenario[v19 + 82]; /*0x480808*/
          LOWORD(v19) = HIWORD(g_DDrawSurfaceManager.scenario[v19 + 82]); /*0x48081a*/
          LOWORD(v46) = v43[0] + v20; /*0x48081e*/
          HIWORD(v46) = v43[1] + v19; /*0x48082d*/
          *(_DWORD *)v43 = v46; /*0x480836*/
          v18 = (BuildingPlacement *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v43); /*0x48083f*/
        }
        else
        {
          v18 = (BuildingPlacement *)v4; /*0x4807fb*/
        }
        if ( (unsigned __int8)BuildingPlacement::ValidateType(v18, *((_DWORD *)v4 + 17), *v17) ) /*0x48084e*/
          *(_DWORD *)v42 |= 1 << v11; /*0x480860*/
        ++v17; /*0x480864*/
        ++v11; /*0x480867*/
      }
      while ( v17 < &dword_81CC80 ); /*0x48086e*/
      v22 = v42[0]; /*0x480879*/
      v23 = v4[286] & 0xF0; /*0x48087d*/
      *(_DWORD *)v42 = *((_DWORD *)v4 + 19); /*0x48087f*/
      v24 = *((_DWORD *)v4 + 17); /*0x480883*/
      v25 = v22 | v23; /*0x480886*/
      v26 = 0; /*0x480888*/
      v4[286] = v25; /*0x48088d*/
      if ( (v24 == 2 || v24 == 26) && (v25 == 48 || v25 == 32) ) /*0x4808a0*/
      {
        LOBYTE(v21) = 1; /*0x4808a5*/
        *((_DWORD *)v4 + 17) = -1; /*0x4808a9*/
        v4[286] = 0; /*0x4808ac*/
        AbstractClass::AnnounceExpiredPointer((void **)v4, v21); /*0x4808b3*/
        v26 = 1; /*0x4808b8*/
      }
      if ( !*((_DWORD *)v4 + 17) ) /*0x4808bf*/
      {
        v27 = (unsigned __int8)v4[286]; /*0x4808c6*/
        if ( (_BYTE)v27 == 16 || (_BYTE)v27 == 32 ) /*0x4808d2*/
        {
          LOBYTE(v21) = 1; /*0x4808d4*/
          *((_DWORD *)v4 + 17) = -1; /*0x4808d8*/
          v4[286] = 0; /*0x4808db*/
          *((_DWORD *)v4 + 20) = -1; /*0x4808e2*/
          AbstractClass::AnnounceExpiredPointer((void **)v4, v21); /*0x4808e5*/
          v26 = 1; /*0x4808ea*/
        }
      }
      if ( *((_DWORD *)v4 + 17) == 1 && v4[286] == 32 ) /*0x4808f9*/
      {
        LOBYTE(v21) = 1; /*0x4808fb*/
        *((_DWORD *)v4 + 17) = -1; /*0x4808ff*/
        v4[286] = 0; /*0x480902*/
        *((_DWORD *)v4 + 20) = -1; /*0x480909*/
        AbstractClass::AnnounceExpiredPointer((void **)v4, v21); /*0x48090c*/
        v26 = 1; /*0x480911*/
      }
      if ( *((_DWORD *)v4 + 17) == 22 ) /*0x480917*/
      {
        v28 = v4[286]; /*0x480919*/
        if ( v28 == 16 || v28 == 32 ) /*0x480925*/
        {
          LOBYTE(v21) = 1; /*0x480927*/
          *((_DWORD *)v4 + 17) = -1; /*0x48092b*/
          v4[286] = 0; /*0x48092e*/
          *((_DWORD *)v4 + 20) = -1; /*0x480935*/
          AbstractClass::AnnounceExpiredPointer((void **)v4, v21); /*0x480938*/
          v26 = 1; /*0x48093d*/
        }
      }
      if ( *((_DWORD *)v4 + 17) == 3 && v4[286] == 16 ) /*0x48094c*/
      {
        LOBYTE(v21) = 1; /*0x48094e*/
        *((_DWORD *)v4 + 17) = -1; /*0x480952*/
        v4[286] = 0; /*0x480955*/
        *((_DWORD *)v4 + 20) = -1; /*0x48095c*/
        AbstractClass::AnnounceExpiredPointer((void **)v4, v21); /*0x48095f*/
        v26 = 1; /*0x480964*/
      }
      House::AnnounceUpgrade((int)v4, -1); /*0x480969*/
      if ( *((_DWORD *)v4 + 19) != *(_DWORD *)v42 ) /*0x480977*/
      {
        v38 = (__int16 *)(v4 + 36); /*0x48097f*/
        if ( v26 ) /*0x480985*/
        {
          Cell::SetRadar((Cell *)&stru_87F5F0.__pad_58[416], v38); /*0x480987*/
          Radar::Update((Radar *)&stru_87F5F0.__pad_58[416], (__int16 *)v4 + 18); /*0x480992*/
          for ( i = 0; i < 8; ++i ) /*0x480997*/
          {
            v30 = i & 7; /*0x48099e*/
            v31 = *((_WORD *)v15 + 1) + HIWORD(g_DDrawSurfaceManager.scenario[v30 + 82]); /*0x4809b1*/
            LOWORD(v45) = LOWORD(g_DDrawSurfaceManager.scenario[v30 + 82]) + *(_WORD *)v15; /*0x4809bc*/
            HIWORD(v45) = v31; /*0x4809c5*/
            *(_DWORD *)v42 = v45; /*0x4809d4*/
            v32 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v42); /*0x4809d8*/
            --v32[290]; /*0x4809e9*/
          }
        }
        else
        {
          CellClass::DetermineTileConnectivity((CellClass *)&stru_87F5F0.__pad_58[416], v38); /*0x4809f3*/
          Radar::Update((Radar *)&stru_87F5F0.__pad_58[416], (__int16 *)v4 + 18); /*0x4809fe*/
        }
      }
    }
    v2 = (int *)(v44 + 4); /*0x480a07*/
    v44 += 4; /*0x480a10*/
    if ( v44 >= byte_81CC84 ) /*0x480a14*/
      break; /*0x480a14*/
    this = v49; /*0x480649*/
  }
}



// ==== 0x00480A30  CellClass::GetCoords  this=CellClass  sig=csp ====
int *__thiscall CellClass::GetCoords(CellClass *this, int *a2)
{
  int smudgeTypeIndex; // eax
  int v3; // esi
  int v4; // edi
  int inited; // eax
  _DWORD v7[2]; // [esp+8h] [ebp-8h] BYREF

  smudgeTypeIndex = this->smudgeTypeIndex; /*0x480a33*/
  v3 = ((__int16)smudgeTypeIndex << 8) + 128; /*0x480a4f*/
  v4 = (SHIWORD(smudgeTypeIndex) << 8) + 128; /*0x480a51*/
  v7[0] = 128; /*0x480a53*/
  v7[1] = 128; /*0x480a57*/
  inited = Isometric::InitTables((int)this, v7); /*0x480a60*/
  *a2 = v3; /*0x480a6b*/
  a2[1] = v4; /*0x480a6d*/
  a2[2] = inited; /*0x480a72*/
  return a2; /*0x480a70*/
}



// ==== 0x00480A80  CellClass::ReduceTiberium  this=ObjectClass  sig=csp ====
int __thiscall CellClass::ReduceTiberium(int *this, int a2)
{
  int *PlacementRect; // edi
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
  CellClass *v17; // ebp
  int *v18; // esi
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

  PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)this, (int *)v31); /*0x480a97*/
  StartCoords = House::GetStartCoords((House *)this, v32); /*0x480a9c*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x480ab1*/
  {
    v12 = *PlacementRect; /*0x480b44*/
    v13 = PlacementRect[1]; /*0x480b46*/
    v14 = PlacementRect[2]; /*0x480b49*/
    v9 = PlacementRect[3]; /*0x480b4c*/
  }
  else
  {
    v22 = PlacementRect[2]; /*0x480abc*/
    if ( v22 <= 0 || (v25 = PlacementRect[3], v25 <= 0) ) /*0x480acb*/
    {
      v12 = *StartCoords; /*0x480b37*/
      v13 = StartCoords[1]; /*0x480b39*/
      v14 = StartCoords[2]; /*0x480b3c*/
      v9 = StartCoords[3]; /*0x480b3f*/
    }
    else
    {
      v5 = *StartCoords; /*0x480acd*/
      v6 = *PlacementRect; /*0x480acf*/
      v7 = StartCoords[2]; /*0x480ad1*/
      v8 = StartCoords[1]; /*0x480ad4*/
      v9 = StartCoords[3]; /*0x480ad7*/
      v28 = v7; /*0x480adc*/
      if ( v5 > *PlacementRect ) /*0x480ae0*/
      {
        v7 += v5 - v6; /*0x480ae4*/
        v5 = *PlacementRect; /*0x480ae6*/
        v28 = v7; /*0x480ae8*/
      }
      v10 = PlacementRect[1]; /*0x480aec*/
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
  v27 = v13 - (unsigned int)DSurface_ViewBounds.field_4; /*0x480b5f*/
  v29 = v14; /*0x480b66*/
  v30 = v9; /*0x480b6a*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(this->q011); /*0x480b6e*/
  v16 = a2; /*0x480b73*/
  if ( a2 <= 0 || BuildingByTiberiumType == -1 ) /*0x480b82*/
    return 0; /*0x480ca3*/
  v17 = *(CellClass **)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType); /*0x480b8e*/
  if ( *((_BYTE *)this + 286) == 11 ) /*0x480b99*/
    CellClass::RegisterForRedraw(v17, (__int16 *)this + 18); /*0x480ba1*/
  if ( *((unsigned __int8 *)this + 286) + 1 <= v16 ) /*0x480bb9*/
  {
    v16 = *((unsigned __int8 *)this + 286); /*0x480bc8*/
    this->q011 = -1; /*0x480bce*/
    *((_BYTE *)this + 286) = 0; /*0x480bd5*/
    House::AnnounceUpgrade((int)this, -1); /*0x480bdc*/
    v18 = this + 9; /*0x480be1*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v18); /*0x480bea*/
    CellClass::ClearCrateStateForAll((CellClass *)v18); /*0x480bf1*/
    for ( i = 0; i < 8; ++i ) /*0x480bf6*/
    {
      v20 = i & 7; /*0x480bfa*/
      LOWORD(v23) = *(_WORD *)v18 + LOWORD(g_DDrawSurfaceManager.scenario[v20 + 82]); /*0x480c1b*/
      HIWORD(v23) = *((_WORD *)v18 + 1) + HIWORD(g_DDrawSurfaceManager.scenario[v20 + 82]); /*0x480c24*/
      a2 = v23; /*0x480c33*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) ) /*0x480c37*/
      {
        if ( !*((_BYTE *)&v17->radSite->AbstractClass + Cell::PosToIndex((Cell *)&a2)) ) /*0x480c4f*/
          BuildingClass::AddOccupancy(v17->mapCoords, (__int16 *)&a2); /*0x480c5c*/
      }
    }
  }
  else
  {
    *((_BYTE *)this + 286) -= v16; /*0x480bbd*/
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
  v4 = *((_DWORD *)dword_A83D84 + v3); /*0x480ccb*/
  *(_DWORD *)v40 = v4; /*0x480cce*/
  if ( !*(_BYTE *)(v4 + 680) ) /*0x480cd2*/
    return 0; /*0x480cd2*/
  v5 = a2; /*0x480ce0*/
  if ( a2 != -1 ) /*0x480ce7*/
  {
    v6 = *(_DWORD *)(v4 + 676); /*0x480ce9*/
    if ( a2 < v6 && !dword_A8E7AC && Random::Range((_DWORD *)dword_A8B230 + 134, 0, v6) >= v5 ) /*0x480d18*/
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
  Cell::CreateCrater(v9, v17 - dword_886FA4, v18, v13, 0); /*0x480e0c*/
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
        v23 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v39); /*0x480e7c*/
      }
      else
      {
        v23 = (_DWORD *)this; /*0x480e46*/
      }
      v24 = v23[17]; /*0x480e81*/
      if ( v24 != -1 /*0x480ea6*/
        && *(_BYTE *)(*((_DWORD *)dword_A83D84 + v24) + 680)
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
  Cell::SetRadar((int *)&dword_87F7E8, (__int16 *)(this + 36)); /*0x480f11*/
  Radar::Update(&dword_87F7E8, (__int16 *)(this + 36)); /*0x480f1c*/
  BuildingClass::AddUpgrade((int)&dword_87F7E8, this + 36); /*0x480f27*/
  a2 = *(_DWORD *)(this + 36); /*0x480f3c*/
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, dword_89F688); /*0x480f51*/
  v27 = (void **)CellCoord::To_CellObj(&dword_87F7E8, v40); /*0x480f55*/
  BuildingClass::ValidatePlacement(v27, 0); /*0x480f5e*/
  a2 = *(_DWORD *)(this + 36); /*0x480f73*/
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, &dword_89F6A0); /*0x480f88*/
  v28 = (void **)CellCoord::To_CellObj(&dword_87F7E8, v40); /*0x480f8c*/
  BuildingClass::ValidatePlacement(v28, 0); /*0x480f95*/
  a2 = *(_DWORD *)(this + 36); /*0x480faa*/
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, &dword_89F698); /*0x480fbf*/
  v29 = (void **)CellCoord::To_CellObj(&dword_87F7E8, v40); /*0x480fc3*/
  BuildingClass::ValidatePlacement(v29, 0); /*0x480fcc*/
  *(_DWORD *)v40 = *(_DWORD *)(this + 36); /*0x480fd9*/
  LOWORD(a2) = dword_89F690 + v40[0]; /*0x480fef*/
  HIWORD(a2) = HIWORD(dword_89F690) + v40[1]; /*0x480ff4*/
  v30 = (void **)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x481007*/
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
      v35 = v40[1] + HIWORD(dword_89F688[v34]); /*0x481047*/
      LOWORD(a2) = v40[0] + LOWORD(dword_89F688[v34]); /*0x48104f*/
      HIWORD(a2) = v35; /*0x481058*/
      *(_DWORD *)v40 = a2; /*0x481061*/
      v33 = CellCoord::To_CellObj(&dword_87F7E8, v40); /*0x48106b*/
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



// ==== 0x004810A0  Input::OffsetToDirection  this=Input  sig=csp ====
int __thiscall Input::OffsetToDirection(Input *this)
{
  double v1; // st7
  int v2; // edi
  int Input_field_00; // esi
  int v4; // eax
  int result; // eax
  double v6; // [esp+0h] [ebp-18h]
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  v2 = (unsigned __int8)*((_DWORD *)this + 1); /*0x4810aa*/
  Input_field_00 = (unsigned __int8)this->Input_field_00; /*0x4810b0*/
  v8 = v2 - 128; /*0x4810bf*/
  v7 = Input_field_00 - 128; /*0x4810c3*/
  __asm /*0x4810c7*/
  {
    fild [esp+18h+var_4]
    fild [esp+18h+var_8]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+18h+var_18]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v6); /*0x4810e0*/
  LOWORD(v4) = Math::RoundToInt(v1); /*0x4810e8*/
  if ( v4 < 60 ) /*0x4810f0*/
    return 0; /*0x4810f3*/
  result = Input_field_00 > 128; /*0x481104*/
  if ( v2 > 128 ) /*0x48110f*/
    LOBYTE(result) = result | 2; /*0x481111*/
  if ( result ) /*0x481115*/
    ++result; /*0x48111e*/
  return result; /*0x4810f2*/
}



// ==== 0x00481130  BuildingPlacement::IsPlacementFlagSet  this=BuildingPlacement  sig=csp ====
bool __thiscall BuildingPlacement::IsPlacementFlagSet(BuildingPlacement *this, unsigned int a2, char a3)
{
  unsigned __int8 v3; // al

  if ( a2 < 2 ) /*0x481137*/
    return 0; /*0x48117a*/
  if ( a3 ) /*0x481144*/
    v3 = *((_BYTE *)this + 296); /*0x481146*/
  else
    v3 = *((_BYTE *)this + 292); /*0x481160*/
  return ((unsigned __int8)(1 << a2) & v3) == 0; /*0x481153*/
}



// ==== 0x00481180  ObjectPlacement::CalcPosition  this=ObjectPlacement  sig=csp ====
int *__thiscall ObjectPlacement::CalcPosition(ObjectPlacement *this, int *a2, _DWORD *a3, char a4, char a5, char a6)
{
  double v6; // st7
  int v8; // ecx
  int v10; // eax
  int v11; // edi
  _DWORD *v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // ebx
  int v18; // eax
  bool v19; // al
  _DWORD *v20; // eax
  BuildingClass *v21; // eax
  bool v23; // zf
  unsigned __int8 *v24; // edi
  unsigned int v25; // ecx
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // esi
  int v30; // edi
  int GroundHeight; // eax
  int v32; // ecx
  int v33; // eax
  double v34; // [esp+0h] [ebp-34h]
  Coord2D v35; // [esp+18h] [ebp-1Ch] BYREF
  _DWORD v36[2]; // [esp+20h] [ebp-14h] BYREF
  char v37[4]; // [esp+28h] [ebp-Ch] BYREF
  int v38; // [esp+2Ch] [ebp-8h]
  int v39; // [esp+30h] [ebp-4h]
  int v40; // [esp+48h] [ebp+14h]

  v8 = (unsigned __int8)a3[1]; /*0x48119b*/
  *(_DWORD *)v35.__pad_0 = (unsigned __int8)*a3; /*0x4811a1*/
  v35.Coord2D_field_0x04 = v8; /*0x4811aa*/
  v36[0] = 128; /*0x4811b9*/
  v36[1] = 128; /*0x4811bd*/
  _EAX = Coord2D::Sub(&v35, (int *)v37, v36); /*0x4811c1*/
  __asm /*0x4811c6*/
  {
    fild dword ptr [eax+4]
    fild dword ptr [eax]
  }
  __asm
  {
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+34h+var_34]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v34); /*0x4811df*/
  LOWORD(v10) = Math::RoundToInt(v6); /*0x4811e7*/
  if ( v10 >= 60 ) /*0x4811ef*/
  {
    v11 = *(_DWORD *)v35.__pad_0 > 128; /*0x4811ff*/
    if ( v35.Coord2D_field_0x04 > 128 ) /*0x481208*/
      v11 |= 2u; /*0x48120a*/
    if ( v11 ) /*0x48120f*/
      ++v11; /*0x481211*/
  }
  else
  {
    v11 = 0; /*0x4811f1*/
  }
  if ( a6 ) /*0x481218*/
  {
    v12 = (_DWORD *)(*(int (__thiscall **)(ObjectPlacement *, char *))(*(_DWORD *)this->__pad_0 + 72))(this, v37); /*0x481226*/
    v13 = v12[1]; /*0x48122c*/
    v14 = *v12 - (unsigned __int8)*v12; /*0x481235*/
    v15 = v12[2]; /*0x481239*/
    v16 = v13 - (unsigned __int8)v13; /*0x481242*/
  }
  else
  {
    v14 = *a3 - (unsigned __int8)*a3; /*0x481251*/
    v16 = a3[1] - (unsigned __int8)a3[1]; /*0x48125e*/
    v15 = a3[2]; /*0x481260*/
  }
  v17 = v14; /*0x481263*/
  v38 = v16; /*0x48126b*/
  v39 = v15; /*0x48126f*/
  if ( a5 ) /*0x481273*/
    v18 = *((_DWORD *)this + 74); /*0x481275*/
  else
    v18 = *((_DWORD *)this + 73); /*0x48127d*/
  v19 = (v18 & 0x20) != 0; /*0x48128a*/
  if ( !a4 )
  {
    if ( v19 ) /*0x481296*/
      goto LABEL_22; /*0x481296*/
    if ( (*((_BYTE *)this + 292) & 0x40) != 0 ) /*0x48129f*/
    {
      v20 = PlacementList::FindByID((PlacementList *)this, 6, 0); /*0x4812a7*/
      if ( !v20 || !*(_BYTE *)(v20[328] + 5815) ) /*0x4812b6*/
        goto LABEL_22; /*0x4812b6*/
      v21 = (BuildingClass *)PlacementList::FindByID((PlacementList *)this, 6, 0); /*0x4812c6*/
      if ( v21 && !v21->Type->Gate ) /*0x4812d5*/
        v21 = 0; /*0x4812df*/
      if ( !(unsigned __int8)BuildingClass::IsPoweredOn(v21) ) /*0x4812e3*/
      {
LABEL_22:
        *a2 = dword_89E778; /*0x4812fb*/
        a2[1] = dword_89E77C; /*0x481304*/
        a2[2] = dword_89E780; /*0x48130d*/
        return a2; /*0x481313*/
      }
    }
    if ( !v11 ) /*0x481318*/
    {
      v24 = (unsigned __int8 *)(4 * Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 3) + 8506520); /*0x48139f*/
      goto LABEL_30; /*0x4813a6*/
    }
    if ( v11 == 1
      || (!a5
        ? (v23 = ((unsigned __int8)(1 << v11) & *((_BYTE *)this + 292)) == 0)
        : (v23 = (*(_BYTE *)(this + 37) & (unsigned __int8)(1 << v11)) == 0),
          !v23) )
    {
      v24 = (unsigned __int8 *)(4 * v11 + 8506500); /*0x481356*/
LABEL_30:
      v40 = 0; /*0x48135d*/
      while ( 1 ) /*0x481367*/
      {
        v25 = *v24++; /*0x481367*/
        if ( v25 >= 2 ) /*0x48136c*/
        {
          if ( a5 ) /*0x481379*/
          {
            LOBYTE(v26) = *((_BYTE *)this + 296); /*0x48137b*/
            v27 = 1 << v25; /*0x481386*/
          }
          else
          {
            LOBYTE(v27) = *((_BYTE *)this + 292); /*0x4813a8*/
            v26 = 1 << v25; /*0x4813b3*/
          }
          if ( ((unsigned __int8)v26 & (unsigned __int8)v27) == 0 ) /*0x4813bc*/
            break; /*0x4813bc*/
        }
        if ( ++v40 >= 4 ) /*0x4813ca*/
        {
          *a2 = dword_89E778; /*0x4813db*/
          a2[1] = dword_89E77C; /*0x4813e4*/
          a2[2] = dword_89E780; /*0x4813ed*/
          return a2; /*0x4813f3*/
        }
      }
      v28 = 3 * v25; /*0x4813fa*/
      v29 = v17 + dword_89E9F0[v28]; /*0x48141b*/
      v30 = v38 + dword_89E9F4[v28]; /*0x481422*/
      v39 += dword_89E9F8[v28]; /*0x481424*/
      GroundHeight = Cell::GetGroundHeight(a3); /*0x481428*/
      if ( !a5 ) /*0x481433*/
        goto LABEL_43; /*0x481433*/
      goto LABEL_42; /*0x481433*/
    }
  }
  v32 = dword_89E9F0[3 * v11]; /*0x481443*/
  v33 = dword_89E9F8[3 * v11]; /*0x48145c*/
  v30 = v38 + dword_89E9F4[3 * v11]; /*0x48145f*/
  v29 = v17 + v32; /*0x481463*/
  v39 += v33; /*0x48146a*/
  GroundHeight = Cell::GetGroundHeight(a3); /*0x48146e*/
  if ( a5 ) /*0x481479*/
LABEL_42:
    GroundHeight += dword_89E7B4; /*0x48147b*/
LABEL_43:
  *a2 = v29; /*0x481481*/
  a2[1] = v30; /*0x481489*/
  a2[2] = GroundHeight; /*0x48148f*/
  return a2; /*0x4812f8*/
}



// ==== 0x004814F0  CellClass::InitRandomOffsets  this=CellClass  sig=csp ====
int __thiscall CellClass::InitRandomOffsets(int *this, int a2, int a3)
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
          if ( (int)v8 >= (int)byte_81CD28 ) /*0x48155a*/
            goto LABEL_11; /*0x48155a*/
        }
      }
LABEL_11:
      *v5++ = v7; /*0x481564*/
      ++v4; /*0x481569*/
    }
    while ( (int)v5 < (int)&dbl_89E720 );
  }
  v11 = this->smudgeTypeIndex; /*0x481572*/
  v12 = v11; /*0x48157b*/
  LOBYTE(v16) = BYTE2(v11); /*0x481583*/
  if ( this->height ) /*0x481575*/
  {
    v13 = *((_DWORD *)dword_A8ED2C + a2); /*0x481596*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 156))(v13); /*0x48159d*/
    if ( !result ) /*0x4815a5*/
      return result; /*0x4815a5*/
    v15 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 156))(v13); /*0x4815bd*/
    v16 = (__int16)(HIWORD(v11) - *((unsigned __int8 *)this + 282) / v15) /*0x48161b*/
        / *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 156))(v13) + 4);
    v12 = (__int16)v11 / v15; /*0x481620*/
  }
  if ( a3 > 4 ) /*0x481629*/
    return dword_89E620[8 * (v16 & 7) + (v12 & 7)]; /*0x48165c*/
  else
    return dword_81CCA8[v12 & 3 | (4 * (v16 & 3))]; /*0x48163e*/
}



// ==== 0x00481670  Cell::ApplyDamage  this=Cell  sig=csp ====
void __thiscall Cell::ApplyDamage(Cell *this, int a2, int a3, int a4, char a5)
{
  AbstractClass *Cell_field_0xE4; // esi
  int *v7; // eax
  _DWORD *v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int *v13; // esi
  char v14; // [esp+13h] [ebp-19h]
  void **v15; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  char v18; // [esp+20h] [ebp-Ch]
  char v19; // [esp+21h] [ebp-Bh]
  int v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+28h] [ebp-4h]

  if ( a5 ) /*0x48167e*/
    Cell_field_0xE4 = *(AbstractClass **)this->__pad_E8; /*0x481680*/
  else
    Cell_field_0xE4 = (AbstractClass *)this->Cell_field_0xE4; /*0x481688*/
  v14 = 0; /*0x481692*/
  if ( !(_BYTE)a4 && Cell_field_0xE4 ) /*0x48169f*/
  {
    while ( 1 ) /*0x4816a3*/
    {
      v7 = (int *)AbstractClass::IsTechnoType(Cell_field_0xE4); /*0x4816a3*/
      if ( v7 ) /*0x4816aa*/
      {
        if ( (unsigned __int8)Audio::IsLoud(v7 + 84) ) /*0x4816b2*/
          break; /*0x4816b2*/
      }
      Cell_field_0xE4 = (AbstractClass *)Cell_field_0xE4[1].vtable3; /*0x4816bb*/
      if ( !Cell_field_0xE4 ) /*0x4816c0*/
        goto LABEL_11; /*0x4816c0*/
    }
    v14 = 1; /*0x4816c4*/
  }
LABEL_11:
  if ( a5 ) /*0x4816ce*/
    v8 = *(_DWORD **)this->__pad_E8; /*0x4816d0*/
  else
    v8 = this->Cell_field_0xE4; /*0x4816d8*/
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
      v8 = (_DWORD *)v8[12]; /*0x481750*/
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
      v13 = (int *)AbstractClass::IsTechnoType(*((AbstractClass **)Block + v9)); /*0x481776*/
      if ( v14 /*0x4817c1*/
        || (_BYTE)a4
        || *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6125)
        || v13
        && ((unsigned __int8)TechnoTypeClass::HasVoiceResponse(v13, 3)
         || *(_DWORD *)(v13[135] + 588) >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5196)) )
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
void *__thiscall Cell::GetNeighbourContent(Cell *this, unsigned int a2)
{
  void *result; // eax
  __int16 v3; // ax
  int v4; // [esp+0h] [ebp-4h]

  result = this; /*0x481815*/
  if ( a2 < 8 ) /*0x48181a*/
  {
    v4 = *(_DWORD *)&this->__pad_1C[8]; /*0x481822*/
    v3 = HIWORD(v4) + HIWORD(g_DDrawSurfaceManager.scenario[(a2 & 7) + 82]); /*0x481839*/
    LOWORD(a2) = v4 + LOWORD(g_DDrawSurfaceManager.scenario[(a2 & 7) + 82]); /*0x481841*/
    HIWORD(a2) = v3; /*0x48184a*/
    return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x48185d*/
  }
  return result; /*0x481863*/
}



// ==== 0x00481870  CellClass::SetThreatBounds  this=CellClass  sig=csp ====
int __thiscall CellClass::SetThreatBounds(CellClass *this, int a2, int a3)
{
  int v3; // ebx
  int result; // eax
  int i; // edi
  HouseClass *v6; // esi
  int smudgeTypeIndex; // [esp+8h] [ebp-4h] BYREF

  smudgeTypeIndex = this->smudgeTypeIndex; /*0x481880*/
  v3 = Cell::PosToLinearIndex((__int16 *)&smudgeTypeIndex); /*0x481889*/
  result = stru_A80220.?; /*0x48188b*/
  for ( i = 0; i < stru_A80220.?; ++i ) /*0x481894*/
  {
    v6 = (HouseClass *)*((_DWORD *)stru_A80220.? + i); /*0x4818a2*/
    if ( v6 && v6->relatedTagsCount != a2 && !(unsigned __int8)HouseClass::IsAllied(v6, a2) ) /*0x4818b7*/
      HouseClass::SetThreat_Bounds((char *)v6, v3, a3); /*0x4818c4*/
    result = stru_A80220.?; /*0x4818c9*/
  }
  return result; /*0x4818d5*/
}



// ==== 0x004818E0  ObjectClass::UpdateTiberiumGrowth  this=BuildingClass  sig=csp ====
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
  v7 = *(_DWORD **)&dword_B0F4EC->TechnoClass[4 * BuildingByTiberiumType]; /*0x48190c*/
  v15 = v7[46]; /*0x481915*/
  if ( a2 ) /*0x48191f*/
    *(_DWORD *)(this + 68) = Random::Range((_DWORD *)dword_A8B230 + 134, v7[56], v7[56] + 700 * v7[58] - 700); /*0x481955*/
  v8 = 0; /*0x481958*/
  v9 = 1; /*0x48195a*/
  do /*0x4819bc*/
  {
    if ( v9 ) /*0x48195d*/
    {
      v11 = v8 & 7; /*0x481968*/
      v14 = *(_DWORD *)(this + 36); /*0x48196b*/
      LOWORD(v16) = v14 + LOWORD(dword_89F688[v11]); /*0x48198a*/
      HIWORD(v16) = HIWORD(v14) + HIWORD(dword_89F688[v11]); /*0x481993*/
      v14 = v16; /*0x48199c*/
      v10 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v14); /*0x4819a6*/
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
  v12 = byte_81CD28[4 * (v6 % *(_DWORD *)(*(_DWORD *)&dword_B0F4EC->TechnoClass[4 * v5] + 228))]; /*0x4819d1*/
  *(_BYTE *)(this + 286) = v12; /*0x4819d8*/
  return v15 * (v12 + 1); /*0x4819e4*/
}



// ==== 0x00481A00  CrateClass::ProcessPickup  this=CrateClass  sig=csp ====
int __thiscall CrateClass::ProcessPickup(CrateClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  int *v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // edi
  int *v10; // ecx
  int v11; // ebx
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // edi
  int v16; // eax
  double v17; // st7
  int v18; // ebx
  _BYTE *v19; // eax
  int v20; // edx
  int v21; // edi
  _DWORD *v22; // eax
  int v23; // edi
  bool v24; // cf
  void *v25; // eax
  _DWORD *v26; // eax
  int v27; // edi
  int v28; // ecx
  int v29; // ebx
  int *v30; // eax
  int *v31; // eax
  CellClass *v32; // eax
  _BYTE *v33; // edi
  int v34; // ebx
  int v35; // eax
  int v36; // ecx
  _DWORD *v37; // edx
  char v38; // bl
  _DWORD *v39; // edi
  void *inited; // eax
  void *v41; // eax
  int v42; // eax
  int v43; // edi
  int v44; // ebx
  int v45; // eax
  int v46; // edi
  int v47; // eax
  __int64 v48; // st7
  _BYTE *v49; // eax
  int v50; // edi
  int v51; // ebx
... [55375 chars total]



// ==== 0x00483410  HouseClass::MarkCellBuildable  this=HouseClass  sig=csp ====
char __thiscall HouseClass::MarkCellBuildable(HouseClass *this, int a2)
{
  int v3; // eax

  if ( (this->__pad_13C[4] & 0x10) != 0 || !(unsigned __int8)Cell::IsBuildable((bool *)this, 1, 0, 0, -1, 0, -1, 1) ) /*0x48342a*/
    return 0; /*0x48344e*/
  v3 = *(_DWORD *)&this->__pad_13C[4]; /*0x483433*/
  LOBYTE(v3) = v3 | 0x10; /*0x483439*/
  *(_DWORD *)&this->__pad_13C[4] = v3; /*0x48343b*/
  this->unitRepairStations[0] = a2; /*0x483445*/
  return 1; /*0x48344a*/
}



// ==== 0x00483460  HouseClass::checkAutoProduction  this=HouseClass  sig=csp ====
char __thiscall HouseClass::checkAutoProduction(HouseClass *this)
{
  int v1; // eax

  v1 = *(_DWORD *)&this->__pad_13C[4]; /*0x483460*/
  if ( (v1 & 0x10) == 0 ) /*0x483468*/
    return 0; /*0x48347c*/
  LOBYTE(v1) = v1 & 0xEF; /*0x48346a*/
  this->unitRepairStations[0] = -1; /*0x48346c*/
  *(_DWORD *)&this->__pad_13C[4] = v1; /*0x483473*/
  return 1; /*0x48347b*/
}



// ==== 0x00483480  CellClass::DamageAllObjects  this=CellClass  sig=csp ====
int __thiscall CellClass::DamageAllObjects(CellClass *this)
{
  ObjectClass *i; // esi
  int result; // eax

  for ( i = this->firstObject; i; i = i->nextObject ) /*0x483489*/
    result = (*((int (__thiscall **)(ObjectClass *))i->AbstractClass + 63))(i); /*0x48348f*/
  return result; /*0x48349c*/
}



// ==== 0x004834A0  Cell::IsBuildable  this=IUnknown  sig=csp ====
int __thiscall Cell::IsBuildable(bool *this, int a2, char a3, char a4, int a5, int a6, int a7, char a8)
{
  int result; // eax
  int v10; // ecx
  char v11; // cl
  int v12; // esi
  int v13; // esi
  char v14; // fps^1
  double v15; // st7
  bool v16; // c0
  char v17; // c2
  bool v18; // c3

  result = a2; /*0x4834a0*/
  if ( a2 == 4 ) /*0x4834ad*/
    goto LABEL_39; /*0x4834ad*/
  if ( a5 != -1 ) /*0x4834c2*/
  {
    result = MapClass::GetTileIndex((MapClass *)&dword_87F7E8, (__int16 *)this + 18, a6, a8); /*0x4834cf*/
    if ( a5 != result ) /*0x4834d6*/
    {
      LOBYTE(result) = 0; /*0x4834db*/
      return result; /*0x4834de*/
    }
  }
  result = a7; /*0x4834e1*/
  if ( a7 != -1 ) /*0x4834ed*/
  {
    v10 = this->u32_11B; /*0x4834ef*/
    if ( a7 == v10 ) /*0x4834f8*/
    {
      if ( (this->q050 & 0x100) != 0 && !a8 ) /*0x48351c*/
      {
        LOBYTE(result) = 0; /*0x483521*/
        return result; /*0x483524*/
      }
    }
    else if ( (this->q050 & 0x100) == 0 || a7 != v10 + 4 ) /*0x483507*/
    {
      LOBYTE(result) = 0; /*0x48350c*/
      return result; /*0x48350f*/
    }
  }
  v11 = 0; /*0x483527*/
  if ( (a7 == -1 || a7 == this->u32_11B + 4) && (this->q050 & 0x100) != 0 ) /*0x483542*/
  {
    v11 = 1; /*0x483546*/
    result = this->q128; /*0x483548*/
  }
  else
  {
    result = this->q124; /*0x483552*/
  }
  if ( a3 ) /*0x48355e*/
    result &= 0xE0u; /*0x483560*/
  if ( a4 ) /*0x48356b*/
    result &= 0x5Fu; /*0x48356d*/
  if ( result ) /*0x483572*/
  {
    LOBYTE(result) = 0; /*0x483577*/
    return result; /*0x48357a*/
  }
  result = this->q03B; /*0x48357d*/
  v12 = this->u8_11; /*0x483583*/
  if ( v12 != -1 ) /*0x483589*/
  {
    v13 = *(&dword_A83D84->vtable0 + v12); /*0x483591*/
    if ( v13 ) /*0x483596*/
    {
      if ( *(_BYTE *)(v13 + 680) ) /*0x483598*/
      {
        if ( a6 != 2 && a6 != 3 && a6 != 8 && (a6 != 1 && a6 != 4 || !*(_BYTE *)(v13 + 557)) && a6 != 12 ) /*0x4835c8*/
        {
          LOBYTE(result) = 0; /*0x4835cd*/
          return result; /*0x4835d0*/
        }
        result = 0; /*0x4835d3*/
      }
    }
  }
  result += a2 + 8 * result; /*0x4835dc*/
  v15 = flt_89EA40[result]; /*0x4835de*/
  v16 = v15 < 0.0; /*0x4835e5*/
  v17 = 0; /*0x4835e5*/
  v18 = v15 == 0.0; /*0x4835e5*/
  BYTE1(result) = v14; /*0x4835eb*/
  if ( v15 != 0.0 || v11 ) /*0x4835f4*/
LABEL_39:
    LOBYTE(result) = 1; /*0x483602*/
  else
    LOBYTE(result) = 0; /*0x4835f9*/
  return result; /*0x4834d8*/
}



// ==== 0x00483610  ObjectClass::processPointerInvalid  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::processPointerInvalid(ObjectClass *this)
{
  return (this->customSound_controller >> 8) & 1; /*0x48361c*/
}



// ==== 0x00483620  BuildingClass::IsTiberiumCollectorEligible  this=BuildingClass  sig=csp ====
bool __thiscall BuildingClass::IsTiberiumCollectorEligible(BuildingClass *this)
{
  int BuildingByTiberiumType; // eax
  int v4; // eax

  if ( !BYTE2(dword_A8B230[374].vtable3) ) /*0x483628*/
    return 0; /*0x483632*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(this->?[2]); /*0x483639*/
  if ( BuildingByTiberiumType == -1 ) /*0x483641*/
    return 0; /*0x483643*/
  v4 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType); /*0x48364d*/
  if ( LOBYTE(this->?) ) /*0x483650*/
    return 0; /*0x48365a*/
  if ( BYTE2(this->?) < *(_DWORD *)(v4 + 228) - 1 ) /*0x48366f*/
    return *(double *)(v4 + 176) >= 0.00001; /*0x483686*/
  return 0; /*0x483634*/
}



// ==== 0x00483690  BuildingClass::IsTiberiumSiloEligible  this=BuildingClass  sig=csp ====
bool __thiscall BuildingClass::IsTiberiumSiloEligible(BuildingClass *this)
{
  int BuildingByTiberiumType; // edi

  if ( SLOBYTE(dword_A8B230->vtable0) >= 0 ) /*0x48369c*/
    return 0; /*0x48369f*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(this->?[2]); /*0x4836ab*/
  if ( BuildingByTiberiumType == -1 ) /*0x4836b0*/
    return 0; /*0x4836b3*/
  if ( BYTE2(this->?) <= BuildingByTiberiumType / 2 ) /*0x4836c8*/
    return 0; /*0x4836cb*/
  if ( LOBYTE(this->?) ) /*0x4836cf*/
    return 0; /*0x4836da*/
  if ( *(double *)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType) + 160) >= 0.00001 ) /*0x4836f8*/
    return this->?[1] == 0; /*0x483708*/
  return 0; /*0x48369e*/
}



// ==== 0x00483710  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_483710(ObjectClass *this)
{
  int BuildingByTiberiumType; // eax
  int v3; // eax
  int v4; // eax

  if ( !BYTE2(dword_A8B230[374].vtable3) ) /*0x483718*/
    return 0; /*0x483718*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(this->ambientSoundController[2]); /*0x483725*/
  if ( BuildingByTiberiumType == -1 ) /*0x48372d*/
    return 0; /*0x48372d*/
  v3 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType); /*0x483735*/
  if ( this->u32_47 /*0x483766*/
    || *((unsigned __int8 *)this + 286) >= *(_DWORD *)(v3 + 228) - 1
    || *(double *)(v3 + 176) < 0.00001 )
  {
    return 0; /*0x48377c*/
  }
  v4 = FindBuildingByTiberiumType(this->ambientSoundController[2]); /*0x48376b*/
  return Crate::FindPlacement((int)this, v4, 1); /*0x48377a*/
}



// ==== 0x00483780  CellClass::SpawnTiberiumTree  this=CellClass  sig=csp ====
char __thiscall CellClass::SpawnTiberiumTree(CellClass *this, char a2)
{
  int BuildingByTiberiumType; // eax
  int v5; // eax
  char v7; // bp
  int v8; // ebx
  unsigned int v9; // eax
  void *v10; // esi
  int v11; // [esp+10h] [ebp-Ch]
  __int16 v12[2]; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h]
  int v14; // [esp+20h] [ebp+4h]

  if ( !a2 ) /*0x48378f*/
  {
    if ( SLOBYTE(dword_A8B230->vtable0) >= 0 ) /*0x483799*/
      return 0; /*0x483799*/
    BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)&this->__pad_28[28]); /*0x48379e*/
    if ( BuildingByTiberiumType == -1 /*0x4837e1*/
      || (unsigned __int8)this->powerup <= BuildingByTiberiumType / 2
      || this->slopeIndex
      || *(double *)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType) + 160) < 0.00001
      || this->firstObject )
    {
      return 0; /*0x4837e9*/
    }
  }
  v5 = FindBuildingByTiberiumType(*(_DWORD *)&this->__pad_28[28]); /*0x4837ee*/
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
  v13 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * v5); /*0x48382f*/
  v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x48383e*/
  v8 = 0; /*0x483840*/
  while ( 1 ) /*0x483845*/
  {
    v9 = ((_BYTE)v8 + v7) & 7; /*0x483845*/
    if ( v9 < 8 ) /*0x48384b*/
    {
      *(_DWORD *)v12 = this->smudgeTypeIndex; /*0x483857*/
      LOWORD(v11) = LOWORD(g_DDrawSurfaceManager.scenario[v9 + 82]) + v12[0]; /*0x48386a*/
      HIWORD(v11) = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[v9 + 82]); /*0x48387d*/
      *(_DWORD *)v12 = v11; /*0x48388b*/
      v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x483894*/
    }
    else
    {
      v10 = this; /*0x48384d*/
    }
    if ( v10 && (unsigned __int8)IsCoordValidMap((int)v10, v13) ) /*0x4838a1*/
      break; /*0x4838a1*/
    if ( ++v8 >= 8 ) /*0x4838ae*/
      return 0; /*0x4838b9*/
  }
  return Crate::FindPlacement((int)v10, v14, 3); /*0x483800*/
}



// ==== 0x004838E0  ObjectClass::IsCoordValidMap  this=ObjectClass  sig=csp ====
int __thiscall IsCoordValidMap(int this, int a2)
{
  int result; // eax
  _DWORD *v4; // esi
  int v5; // esi
  _DWORD *v6; // esi

  result = LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)(this + 36), 1); /*0x4838ef*/
  if ( (_BYTE)result ) /*0x4838f6*/
  {
    result = *(_DWORD *)(this + 320); /*0x4838fc*/
    if ( (result & 0x500) == 0 ) /*0x483905*/
    {
      if ( !byte_A8E9A0 ) /*0x483912*/
        goto LABEL_17; /*0x483912*/
      v4 = *(_DWORD **)(this + 228); /*0x483918*/
      if ( v4 ) /*0x483920*/
      {
        while ( (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 6 ) /*0x48392c*/
        {
          v4 = (_DWORD *)v4[12]; /*0x48392e*/
          if ( !v4 ) /*0x483933*/
            goto LABEL_11; /*0x483933*/
        }
        result = v4[27]; /*0x48393b*/
        if ( result > 0 ) /*0x483940*/
        {
          v5 = v4[328]; /*0x483942*/
          if ( !*(_BYTE *)(v5 + 3226) && !*(_BYTE *)(v5 + 5889) ) /*0x48395a*/
            goto LABEL_24; /*0x48395a*/
        }
      }
LABEL_11:
      if ( !byte_A8E9A0 ) /*0x483967*/
        goto LABEL_17; /*0x483967*/
      v6 = *(_DWORD **)(this + 228); /*0x483969*/
      if ( !v6 ) /*0x483971*/
        goto LABEL_17; /*0x483971*/
      while ( 1 ) /*0x483977*/
      {
        result = (*(int (__thiscall **)(_DWORD *))(*v6 + 44))(v6); /*0x483977*/
        if ( result == 36 ) /*0x48397d*/
          break; /*0x48397d*/
        v6 = (_DWORD *)v6[12]; /*0x48397f*/
        if ( !v6 ) /*0x483984*/
          goto LABEL_17; /*0x483984*/
      }
      if ( !*(_BYTE *)(v6[50] + 689) ) /*0x483992*/
      {
LABEL_17:
        result = *(_DWORD *)(this + 236); /*0x48399c*/
        if ( byte_89EA60[36 * result] ) /*0x4839a5*/
        {
          if ( *(_DWORD *)(this + 68) == -1 && !*(_BYTE *)(this + 284) ) /*0x4839b6*/
          {
            result = *(_DWORD *)(this + 56); /*0x4839c0*/
            if ( result < 0 || result >= dword_A8ED38 || *(_BYTE *)(*((_DWORD *)dword_A8ED2C + result) + 774) ) /*0x4839d8*/
            {
              LOBYTE(result) = 1; /*0x4839e3*/
              return result; /*0x4839e6*/
            }
          }
        }
      }
    }
  }
LABEL_24:
  LOBYTE(result) = 0; /*0x4839e9*/
  return result; /*0x4839e2*/
}



// ==== 0x004839F0  CellClass::SaveLoad_Prefix  this=CellClass  sig=csp ====
int __thiscall CellClass::SaveLoad_Prefix(CellClass *this)
{
  int v1; // ebp
  AbstractClass *v2; // esi
  int result; // eax
  CellClass *v4; // eax
  CellClass *v5; // edi
  int v6; // eax
  _DWORD *vtable1; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  int j; // edi
  int vtable0_low; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  void *NeedsSaveOrLink; // eax
  int v20; // [esp+28h] [ebp-4h] BYREF
  AbstractClass *v21; // [esp+30h] [ebp+4h]
  AbstractClass *i; // [esp+30h] [ebp+4h]
  int v23; // [esp+34h] [ebp+8h] BYREF

  v1 = v23; /*0x4839f3*/
  v2 = v21; /*0x4839f8*/
  result = AbstractClass::SaveLoad_Prefix_0(v21, v23); /*0x4839ff*/
  if ( result >= 0 ) /*0x483a08*/
  {
    if ( v21 ) /*0x483a10*/
    {
      AbstractClass::InitVtables(v21, (int)&v23); /*0x483a19*/
      v21[1].uniqueId = 0; /*0x483a1e*/
      v21[2].vtable1 = 0; /*0x483a21*/
      v21->vtable0 = &CellClass::`vftable'; /*0x483a24*/
      v21->vtable1 = &CellClass::`vftable'; /*0x483a2a*/
      v21->vtable2 = &CellClass::`vftable'; /*0x483a31*/
      v21->vtable3 = &CellClass::`vftable'; /*0x483a38*/
    }
    if ( !v21[1].vtable1 ) /*0x483a42*/
      goto LABEL_20; /*0x483a42*/
    v4 = (CellClass *)__2_YAPAXI_Z(0x18u); /*0x483a4a*/
    v5 = v4; /*0x483a4f*/
    if ( v4 ) /*0x483a56*/
    {
      CellClass::clearOccupationFlags(v4, 0, 0); /*0x483a5c*/
      v5->mapCoords[0] = (int)&DynamicVectorClass<FoggedObjectClass *>::`vftable'; /*0x483a61*/
      v5->isoTileTypeIndex = 10; /*0x483a67*/
      v5->lightConvert = 0; /*0x483a6e*/
    }
    else
    {
      v5 = 0; /*0x483a73*/
    }
    v21[1].vtable1 = v5; /*0x483a7a*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v1 + 12))(v1, &v20, 4, 0); /*0x483a84*/
    if ( result >= 0 ) /*0x483a89*/
    {
      for ( i = 0; (int)i < v20; i = (AbstractClass *)((char *)i + 1) ) /*0x483a99*/
      {
        v6 = *(_DWORD *)v1; /*0x483a9b*/
        v23 = 0; /*0x483aa7*/
        if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 12))(v1, &v23, 4, 0) < 0 ) /*0x483ab0*/
          return 0; /*0x483ab0*/
        vtable1 = v2[1].vtable1; /*0x483ab6*/
        v8 = vtable1[2]; /*0x483ab9*/
        if ( vtable1[4] >= v8 ) /*0x483ac1*/
        {
          if ( !*((_BYTE *)vtable1 + 13) && v8 ) /*0x483aca*/
            continue; /*0x483aca*/
          v9 = vtable1[5]; /*0x483acc*/
          if ( v9 <= 0 /*0x483adb*/
            || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*vtable1 + 8))(vtable1, v8 + v9, 0) )
          {
            continue; /*0x483adb*/
          }
        }
        v10 = vtable1[4]; /*0x483ae2*/
        v11 = vtable1[1]; /*0x483ae5*/
        vtable1[4] = v10 + 1; /*0x483aeb*/
        *(_DWORD *)(v11 + 4 * v10) = v23; /*0x483af2*/
      }
      v12 = v2[1].vtable1; /*0x483b06*/
      for ( j = 0; j < v12[4]; ++j ) /*0x483b0e*/
      {
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v12[1] + 4 * j)); /*0x483b1c*/
        v12 = v2[1].vtable1; /*0x483b21*/
      }
LABEL_20:
      vtable0_low = SLOWORD(v2[1].vtable0); /*0x483b2a*/
      v15 = SHIWORD(v2[1].vtable0) << 9; /*0x483b32*/
      v2[7].vtable0 = 0; /*0x483b35*/
      v16 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x483b3b*/
      v17 = vtable0_low + v15; /*0x483b40*/
      v18 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v17); /*0x483b42*/
      if ( v18 ) /*0x483b47*/
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 32))(v18, 1); /*0x483b51*/
        *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v17) = 0; /*0x483b59*/
        v16 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x483b5c*/
      }
      *(_DWORD *)(v16 + 4 * v17) = v2; /*0x483b61*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2[1].vtable2); /*0x483b6d*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2[1].vtable3); /*0x483b7b*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2[1].nextArrayIndex); /*0x483b89*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2[6].vtable2); /*0x483b9a*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2[6].vtable3); /*0x483bab*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2[6].uniqueId); /*0x483bbc*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2[6].NeedsSaveOrLink); /*0x483bcd*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2[1].referenceCount); /*0x483bdb*/
      NeedsSaveOrLink = v2[1].NeedsSaveOrLink; /*0x483be0*/
      if ( NeedsSaveOrLink == (void *)179 || NeedsSaveOrLink == (void *)242 ) /*0x483bef*/
      {
        v2[1].NeedsSaveOrLink = (void *)-1; /*0x483bf1*/
        BYTE2(v2[7].NeedsSaveOrLink) = 0; /*0x483bf8*/
      }
      return 0; /*0x483bfe*/
    }
  }
  return result; /*0x483c00*/
}



// ==== 0x00483C10  CellClass::SaveLoad_Prefix_0  this=CellClass  sig=csp ====
int __thiscall CellClass::SaveLoad_Prefix_0(CellClass *this)
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
void __thiscall BuildingClass::DetermineVisualState(BuildingClass *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax

  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea( /*0x483c90*/
                           (LayerClass *)&stru_87F5F0.__pad_58[416],
                           (__int16 *)&this->?,
                           1) )
  {
    this->?[4] = 7; /*0x483c99*/
    return; /*0x483ca3*/
  }
  v2 = this->?[2]; /*0x483ca4*/
  if ( v2 != -1 ) /*0x483caa*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v2); /*0x483cb2*/
    if ( *(_BYTE *)(v3 + 557) ) /*0x483cb5*/
    {
      this->?[4] = 1; /*0x483cbf*/
      return; /*0x483cc9*/
    }
    if ( *(_BYTE *)(v3 + 680) ) /*0x483cca*/
      goto LABEL_7; /*0x483cd2*/
    if ( flt_89EA48[9 * *(_DWORD *)(v3 + 664)] == 0.0 ) /*0x483cfa*/
    {
      this->?[4] = 6; /*0x483cfc*/
      return; /*0x483d06*/
    }
    if ( *(_BYTE *)(v3 + 693) ) /*0x483d07*/
    {
      this->?[4] = 6; /*0x483d11*/
      return; /*0x483d1b*/
    }
    if ( *(_BYTE *)(v3 + 692) ) /*0x483d1c*/
      goto LABEL_31; /*0x483d1c*/
  }
  v4 = this->?[3]; /*0x483d2a*/
  if ( v4 == 2 ) /*0x483d33*/
  {
    this->?[4] = 4; /*0x483d35*/
    return; /*0x483d3f*/
  }
  if ( v4 == 6 ) /*0x483d47*/
  {
    this->?[4] = 3; /*0x483d49*/
    return; /*0x483d53*/
  }
  if ( flt_89EA48[9 * v4] <= 0.01 ) /*0x483d69*/
  {
LABEL_18:
    this->?[4] = 6; /*0x483d6b*/
    return; /*0x483d71*/
  }
  v5 = (_DWORD *)this->?[1]; /*0x483d72*/
  if ( !v5 ) /*0x483d7a*/
  {
LABEL_31:
    this->?[4] = 0; /*0x483dd4*/
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
          this->?[4] = 6; /*0x483dca*/
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
  if ( dword_A8B230[130].uniqueId == 1 ) /*0x483df3*/
  {
    if ( *(_DWORD *)(v5[50] + 684) == 7 ) /*0x483e18*/
      goto LABEL_7; /*0x483e18*/
  }
  else if ( *(_DWORD *)(v5[50] + 680) == 7 ) /*0x483e01*/
  {
LABEL_7:
    this->?[4] = 2; /*0x483cd4*/
    return; /*0x483cde*/
  }
  this->?[4] = 5; /*0x483e1e*/
}



// ==== 0x00483E30  TacticalClass::SetView  this=IUnknown  sig=csp ====
int __thiscall TacticalClass::SetView(int *this, int a2, int a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7)
{
  int v7; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int SurfaceClassPrimary; // eax
  __int16 v13; // cx
  __int16 v14; // dx
  __int16 v15; // cx
  __int16 v16; // dx
  int result; // eax
  __int16 v18; // cx
  __int64 v19; // [esp-8h] [ebp-20h]
  __int64 v20; // [esp+4h] [ebp-14h] BYREF
  int v21; // [esp+Ch] [ebp-Ch] BYREF
  __int64 v22; // [esp+10h] [ebp-8h] BYREF

  v7 = a2; /*0x483e30*/
  if ( a2 ) /*0x483e3c*/
  {
    v9 = this->u8_D; /*0x483e3e*/
    if ( v9 ) /*0x483e43*/
    {
      if ( byte_A8E9A0 ) /*0x483e4d*/
        --*(_DWORD *)(v9 + 404); /*0x483e4f*/
    }
    this->u8_D = v7; /*0x483e55*/
    ++*(_DWORD *)(v7 + 404); /*0x483e5f*/
    v10 = this->u8_D; /*0x483e65*/
    a2 = *(_DWORD *)(v10 + 408); /*0x483e6e*/
    v20 = *(_QWORD *)(v10 + 412); /*0x483e78*/
LABEL_19:
    HIWORD(result) = HIWORD(a3); /*0x483f7a*/
    v13 = a4; /*0x483f7e*/
    v14 = a5; /*0x483f83*/
    this->q104 = a3; /*0x483f88*/
    LOWORD(result) = a6; /*0x483f8e*/
    this->q084 = v13; /*0x483f93*/
    v15 = a7; /*0x483f9a*/
    this->u32_214 = v14; /*0x483f9f*/
    v16 = a2; /*0x483fa6*/
    *((_WORD *)this + 134) = result; /*0x483fab*/
    LOWORD(result) = v20; /*0x483fb2*/
    this->q21C = v15; /*0x483fb7*/
    v18 = WORD2(v20); /*0x483fbe*/
    this->q088 = v16; /*0x483fc3*/
    *((_WORD *)this + 137) = result; /*0x483fca*/
    this->q228 = v18; /*0x483fd1*/
    return result; /*0x483fdc*/
  }
  if ( (this->q048 || this->q04C) /*0x483eaa*/
    && (this->q048 != 0xFFFF || this->q04C != 0xFFFF) )
  {
    HIDWORD(v19) = (char *)&v20 + 4; /*0x483eb8*/
    LODWORD(v19) = &v20; /*0x483ebd*/
    Tactical::CalculateTacticalLighting((Tactical *)this, &a3, &a4, (int *)&a5, (int *)&a6, (int *)&a7, &a2, v19); /*0x483eda*/
    if ( !this->u8_D ) /*0x483edf*/
      goto LABEL_17; /*0x483edf*/
    v21 = a2; /*0x483ef2*/
    v22 = v20; /*0x483efa*/
    QuantizeColorRGB(&v21, (int *)&v22, (int *)&v22 + 1); /*0x483f0b*/
    v11 = this->u8_D; /*0x483f10*/
    if ( *(_DWORD *)(v11 + 408) != v21 || *(_QWORD *)(v11 + 412) != v22 ) /*0x483f2d*/
    {
      if ( byte_A8E9A0 ) /*0x483f45*/
        --*(_DWORD *)(v11 + 404); /*0x483f47*/
      this->u8_D = 0; /*0x483f4d*/
    }
    if ( !this->u8_D ) /*0x483f54*/
    {
LABEL_17:
      SurfaceClassPrimary = CreateSurfaceClassPrimary(a2, v20, SHIDWORD(v20)); /*0x483f68*/
      this->u8_D = SurfaceClassPrimary; /*0x483f6f*/
      if ( SurfaceClassPrimary ) /*0x483f72*/
        ++*(_DWORD *)(SurfaceClassPrimary + 404); /*0x483f74*/
    }
    goto LABEL_19; /*0x483f74*/
  }
  result = CreateSurfaceClassPrimary(1000, 1000, 1000); /*0x483fea*/
  this->u8_D = result; /*0x483ff1*/
  if ( result ) /*0x483ff4*/
    ++*(_DWORD *)(result + 404); /*0x483ff6*/
  this->u32_214 = 1000; /*0x483ffc*/
  *((_WORD *)this + 134) = 1000; /*0x484003*/
  this->q21C = 1000; /*0x48400a*/
  this->q088 = 1000; /*0x484011*/
  *((_WORD *)this + 137) = 1000; /*0x484018*/
  this->q228 = 1000; /*0x48401f*/
  this->q104 = 0x10000; /*0x484026*/
  this->q084 = 0; /*0x484030*/
  return result; /*0x483fd8*/
}



// ==== 0x00484050  Tactical::CreateTacticalLightSurface  this=Tactical  sig=csp ====
int __thiscall Tactical::CreateTacticalLightSurface(
        Tactical *this,
        int *a2,
        _DWORD *a3,
        _DWORD *a4,
        int *a5,
        int a6,
        int a7)
{
  _DWORD *v7; // eax
  int *v8; // edx
  int *v9; // ebx
  _DWORD *v11; // ecx
  int *v12; // edi
  int v13; // esi
  int result; // eax
  __int64 v15; // [esp-8h] [ebp-1Ch]
  int v16; // [esp+10h] [ebp-4h] BYREF

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
  if ( !*(_WORD *)&this->__pad_10[20] && !*(_WORD *)&this->__pad_10[22] /*0x4840a8*/
    || *(_WORD *)&this->__pad_10[20] == 0xFFFF && *(_WORD *)&this->__pad_10[22] == 0xFFFF )
  {
    result = CreateSurfaceClassPrimary(1000, 1000, 1000); /*0x484161*/
    *a2 = result; /*0x48416d*/
  }
  else
  {
    HIDWORD(v15) = &a6; /*0x4840b2*/
    LODWORD(v15) = &a7; /*0x4840b7*/
    Tactical::CalculateTacticalLighting(this, v7, v11, v8, v12, v9, &v16, v15); /*0x4840c4*/
    if ( *(_DWORD *)this->__pad_34 /*0x484125*/
      && (a3 = (_DWORD *)v16,
          a4 = (_DWORD *)a7,
          a5 = (int *)a6,
          QuantizeColorRGB((int *)&a3, (int *)&a4, (int *)&a5),
          v13 = *(_DWORD *)this->__pad_34,
          *(_DWORD **)(v13 + 408) == a3)
      && *(_DWORD **)(v13 + 412) == a4
      && (result = *(_DWORD *)(v13 + 416), (int *)result == a5) )
    {
      *a2 = v13; /*0x48412c*/
    }
    else
    {
      result = CreateSurfaceClassPrimary(v16, a7, a6); /*0x484142*/
      *a2 = result; /*0x48414e*/
    }
  }
  return result; /*0x48412b*/
}



// ==== 0x00484180  Tactical::CalculateTacticalLighting  this=Tactical  sig=csp ====
int __thiscall Tactical::CalculateTacticalLighting(
        Tactical *this,
        _DWORD *a2,
        _DWORD *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7,
        __int64 a8)
{
  double v8; // st7
  Tactical *v9; // edi
  int *v10; // ebx
  int v11; // eax
  int v12; // esi
  int v13; // ebx
  int v14; // ebp
  int *v15; // eax
  int v16; // edx
  unsigned int v17; // edi
  int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // eax
  int referenceCount; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int result; // eax
  double v28; // [esp+0h] [ebp-44h]
  int v29; // [esp+18h] [ebp-2Ch]
  int v30; // [esp+18h] [ebp-2Ch]
  int v31; // [esp+18h] [ebp-2Ch]
  int v32; // [esp+18h] [ebp-2Ch]
  int v34; // [esp+20h] [ebp-24h]
  _DWORD v35[2]; // [esp+24h] [ebp-20h] BYREF
  int v36; // [esp+2Ch] [ebp-18h]
  int v37; // [esp+30h] [ebp-14h]
  int v38; // [esp+34h] [ebp-10h]
  int v39; // [esp+38h] [ebp-Ch]
  int v40; // [esp+3Ch] [ebp-8h]
  int v41; // [esp+40h] [ebp-4h]

  v9 = this; /*0x484184*/
  if ( !*(_WORD *)&this->__pad_10[20] && !*(_WORD *)&this->__pad_10[22] /*0x4841a9*/
    || *(_WORD *)&this->__pad_10[20] == 0xFFFF && *(_WORD *)&this->__pad_10[22] == 0xFFFF )
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
  v10 = a4; /*0x4841b5*/
  *a4 = 1000 * (int)dword_A8B230[378].vtable1 / 100; /*0x4841de*/
  *a7 = 1000 * (int)dword_A8B230[378].vtable3 / 100; /*0x48420d*/
  *(_DWORD *)a8 = 1000 * dword_A8B230[378].uniqueId / 100; /*0x48423c*/
  v11 = 0; /*0x48426b*/
  *(_DWORD *)HIDWORD(a8) = 1000 * dword_A8B230[378].abstractFlags / 100; /*0x48426d*/
  v34 = 0; /*0x484273*/
  for ( *a3 = 0; v34 < g_MissionQueueFrame.random[133]; ++v34 ) /*0x484285*/
  {
    v12 = *(_DWORD *)(g_MissionQueueFrame.random[130] + 4 * v11); /*0x484291*/
    if ( *(_BYTE *)(v12 + 72) && stru_A8EB00.ObjectTypeClass[30] >= *(_DWORD *)(v12 + 52) ) /*0x4842aa*/
    {
      v29 = *(_DWORD *)&v9->__pad_10[20]; /*0x4842b5*/
      v13 = ((__int16)v29 << 8) + 128; /*0x4842cc*/
      v14 = (SHIWORD(v29) << 8) + 128; /*0x4842ce*/
      v35[0] = 128; /*0x4842d0*/
      v35[1] = 128; /*0x4842d4*/
      Isometric::InitTables((int)v9, v35); /*0x4842dd*/
      v15 = (int *)(v12 + 56); /*0x4842e2*/
      v16 = *(_DWORD *)(v12 + 56); /*0x4842e7*/
      v40 = *(_DWORD *)(v12 + 60); /*0x4842ec*/
      v17 = *(_DWORD *)(v12 + 68); /*0x4842f0*/
      v41 = *(_DWORD *)(v12 + 64); /*0x4842f6*/
      v30 = v13 - v16; /*0x4842fe*/
      v39 = *(_DWORD *)(v12 + 56); /*0x484306*/
      v18 = *(_DWORD *)(v12 + 60); /*0x48430a*/
      v41 = *(_DWORD *)(v12 + 64); /*0x484310*/
      if ( v30 * v30 + (v14 - v18) * (v14 - v18) <= v17 * v17 ) /*0x48432d*/
      {
        v36 = *v15; /*0x48433a*/
        v37 = *(_DWORD *)(v12 + 60); /*0x484341*/
        v39 = *v15; /*0x48434d*/
        v31 = v13 - v36; /*0x484354*/
        __asm { fild [esp+44h+var_2C] } /*0x48435a*/
        v32 = v14 - *(_DWORD *)(v12 + 60); /*0x48435e*/
        __asm { fild [esp+44h+var_2C] } /*0x484365*/
        v38 = *(_DWORD *)(v12 + 64); /*0x484369*/
        v41 = *(_DWORD *)(v12 + 64); /*0x484370*/
        __asm /*0x484374*/
        {
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+44h+var_44]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v28); /*0x484385*/
        LOWORD(v19) = Math::RoundToInt(v8); /*0x48438d*/
        if ( v19 <= v17 ) /*0x484394*/
        {
          v20 = (1000 * v17 - 1000 * v19) / v17; /*0x4843bd*/
          *a3 += (int)(v20 * *(_DWORD *)(v12 + 36)) / 1000; /*0x4843db*/
          *a7 += (int)(v20 * *(_DWORD *)(v12 + 40)) / 1000; /*0x4843fc*/
          *(_DWORD *)a8 += (int)(v20 * *(_DWORD *)(v12 + 44)) / 1000; /*0x48441d*/
          *(_DWORD *)HIDWORD(a8) += (int)(v20 * *(_DWORD *)(v12 + 48)) / 1000; /*0x48443e*/
        }
      }
      v9 = this; /*0x484440*/
      v10 = a4; /*0x484444*/
    }
    v11 = v34 + 1; /*0x484452*/
  }
  v21 = *a3 + *v10; /*0x48446b*/
  *v10 = v21; /*0x48446f*/
  *a6 = v21; /*0x484471*/
  if ( !(unsigned __int8)LightningStorm::IsActive() ) /*0x48447a*/
  {
    if ( (unsigned __int8)PsyDom::IsActive() ) /*0x4844c4*/
    {
      *v10 += v9->Tactical_field_0x11B[0] * (int)dword_A8B230[380].vtable1 - dword_A8B230[380].referenceCount; /*0x4844ec*/
      referenceCount = dword_A8B230[380].referenceCount; /*0x4844fa*/
      v24 = (int)dword_A8B230[380].NeedsSaveOrLink * (v9->Tactical_field_0x11B[0] + 4); /*0x484503*/
    }
    else
    {
      if ( NukeFlash::IsActive() ) /*0x48450f*/
      {
        *v10 += v9->Tactical_field_0x11B[0] * (int)dword_A8B230[380].vtable1 - (unsigned int)dword_A8B230[380].vtable0; /*0x484537*/
        v22 = (int)dword_A8B230[380].vtable1 * (v9->Tactical_field_0x11B[0] + 4) /*0x484559*/
            - (unsigned int)dword_A8B230[380].vtable0
            + *a6;
        goto LABEL_21; /*0x48455b*/
      }
      *v10 += v9->Tactical_field_0x11B[0] * dword_A8B230[378].referenceCount - dword_A8B230[378].nextArrayIndex; /*0x48457c*/
      referenceCount = dword_A8B230[378].nextArrayIndex; /*0x48458a*/
      v24 = dword_A8B230[378].referenceCount * (v9->Tactical_field_0x11B[0] + 4); /*0x484593*/
    }
    v22 = v24 - referenceCount + *a6; /*0x48459e*/
    goto LABEL_21; /*0x48459e*/
  }
  *v10 += v9->Tactical_field_0x11B[0] * dword_A8B230[379].uniqueId - (unsigned int)dword_A8B230[379].vtable3; /*0x48449b*/
  v22 = dword_A8B230[379].uniqueId * (v9->Tactical_field_0x11B[0] + 4) - (unsigned int)dword_A8B230[379].vtable3 + *a6; /*0x4844bd*/
LABEL_21:
  *a6 = v22; /*0x4845a0*/
  v25 = *v10; /*0x4845a2*/
  if ( *v10 >= 2000 ) /*0x4845a9*/
    v25 = 2000; /*0x4845ab*/
  *v10 = v25; /*0x4845c0*/
  *a5 = v25; /*0x4845c2*/
  Map_Calc(a2, a5, a7, (int *)a8, (int *)HIDWORD(a8)); /*0x4845cf*/
  v26 = (*a2 * *a6) >> 16; /*0x4845da*/
  *a6 = v26; /*0x4845e2*/
  if ( v26 >= 2000 ) /*0x4845e4*/
    v26 = 2000; /*0x4845e6*/
  *a6 = v26; /*0x4845eb*/
  *v10 = *v10 <= 0 ? 0 : *v10;
  *a5 = *a5 <= 0 ? 0 : *a5;
  result = *a6 <= 0 ? 0 : *a6;
  *a6 = result; /*0x484615*/
  return result; /*0x48461a*/
}



// ==== 0x00484680  TacticalMap::ComputeScreenTint  this=TacticalMap  sig=csp ====
int __thiscall TacticalMap::ComputeScreenTint(TacticalMap *this)
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

  v2 = *((_WORD *)this + 132) + (__int16)(1000 * LOWORD(dword_A8B230[378].vtable1)) / 100; /*0x4846ab*/
  *((_WORD *)this + 133) = v2; /*0x4846b2*/
  *((_WORD *)this + 135) = v2; /*0x4846b9*/
  if ( (unsigned __int8)LightningStorm::IsActive() ) /*0x4846c0*/
  {
    v3 = *((char *)this + 283); /*0x4846cf*/
    *((_WORD *)this + 133) += v3 * LOWORD(dword_A8B230[379].uniqueId) - LOWORD(dword_A8B230[379].vtable3); /*0x4846ec*/
    v4 = (v3 + 4) * LOWORD(dword_A8B230[379].uniqueId) - LOWORD(dword_A8B230[379].vtable3); /*0x484703*/
  }
  else if ( (unsigned __int8)PsyDom::IsActive() ) /*0x48470f*/
  {
    v5 = *((char *)this + 283); /*0x48471e*/
    *((_WORD *)this + 133) += v5 * LOWORD(dword_A8B230[380].NeedsSaveOrLink) - LOWORD(dword_A8B230[380].referenceCount); /*0x48473b*/
    v4 = (v5 + 4) * LOWORD(dword_A8B230[380].NeedsSaveOrLink) - LOWORD(dword_A8B230[380].referenceCount); /*0x484752*/
  }
  else
  {
    v6 = !NukeFlash::IsActive(); /*0x484766*/
    v7 = *((char *)this + 283); /*0x484768*/
    if ( v6 ) /*0x484770*/
    {
      *((_WORD *)this + 133) += v7 * LOWORD(dword_A8B230[378].referenceCount) - LOWORD(dword_A8B230[378].nextArrayIndex); /*0x4847bc*/
      v4 = (v7 + 4) * LOWORD(dword_A8B230[378].referenceCount) - LOWORD(dword_A8B230[378].nextArrayIndex); /*0x4847d3*/
    }
    else
    {
      *((_WORD *)this + 133) += v7 * LOWORD(dword_A8B230[380].vtable1) - LOWORD(dword_A8B230[380].vtable0); /*0x484787*/
      v4 = (v7 + 4) * LOWORD(dword_A8B230[380].vtable1) - LOWORD(dword_A8B230[380].vtable0); /*0x48479e*/
    }
  }
  v8 = *((__int16 *)this + 133); /*0x4847da*/
  v9 = *((_DWORD *)this + 65); /*0x4847e1*/
  *((_WORD *)this + 135) += v4; /*0x4847e7*/
  *((_WORD *)this + 134) = (unsigned int)(v9 * v8) >> 16; /*0x4847f4*/
  v10 = v9 * *((__int16 *)this + 135); /*0x484802*/
  v11 = *((_WORD *)this + 133); /*0x484805*/
  v12 = v10 >> 16; /*0x48480c*/
  *((_WORD *)this + 135) = v12; /*0x484814*/
  if ( v11 >= 2000 ) /*0x48481e*/
    v11 = 2000; /*0x484820*/
  *((_WORD *)this + 133) = v11; /*0x484825*/
  v13 = *((_WORD *)this + 134); /*0x484838*/
  if ( v13 >= 2000 ) /*0x48483b*/
    v13 = 2000; /*0x48483d*/
  *((_WORD *)this + 134) = v13; /*0x484846*/
  v14 = v12; /*0x48484d*/
  if ( (__int16)v12 >= 2000 ) /*0x484850*/
    v14 = 2000; /*0x484852*/
  v15 = *((_WORD *)this + 133); /*0x484857*/
  *((_WORD *)this + 135) = v14; /*0x48485e*/
  if ( v15 <= 0 ) /*0x484868*/
    v15 = 0; /*0x48486f*/
  *((_WORD *)this + 133) = v15; /*0x484874*/
  if ( v13 <= 0 ) /*0x48487b*/
    v16 = 0; /*0x484882*/
  else
    v16 = v13; /*0x48487d*/
  *((_WORD *)this + 134) = v16; /*0x484887*/
  if ( v14 <= 0 ) /*0x48488e*/
  {
    *((_WORD *)this + 135) = 0; /*0x48489e*/
    return 0; /*0x48489c*/
  }
  else
  {
    *((_WORD *)this + 135) = v14; /*0x484893*/
    return v14; /*0x484890*/
  }
}



// ==== 0x004848B0  JumpjetLocomotionClass::AdjustClimbFacing  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall JumpjetLocomotionClass::AdjustClimbFacing(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int smudgeTypeIndex; // ebp
  int Crash_low; // eax
  int Crash_high; // esi
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
  __int16 v20[2]; // [esp+14h] [ebp-Ch] BYREF
  int v21; // [esp+18h] [ebp-8h]

  v2 = a2; /*0x4848b4*/
  smudgeTypeIndex = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->smudgeTypeIndex; /*0x4848c8*/
  Crash_low = SLOWORD(this->Crash); /*0x4848cb*/
  Crash_high = SHIWORD(this->Crash); /*0x4848cf*/
  v21 = smudgeTypeIndex; /*0x4848d3*/
  v7 = Crash_high - SHIWORD(smudgeTypeIndex); /*0x4848de*/
  v8 = Crash_low - (__int16)smudgeTypeIndex; /*0x4848e6*/
  v9 = Crash_low == (__int16)smudgeTypeIndex; /*0x4848ec*/
  result = dword_81CD5C[Crash_low + 3 * v7 - (__int16)smudgeTypeIndex]; /*0x4848ee*/
  v19 = result; /*0x4848f5*/
  if ( !v9 && v7 ) /*0x484901*/
  {
    if ( v8 == v7 ) /*0x484909*/
    {
      LOWORD(a2) = smudgeTypeIndex + v8; /*0x484916*/
      HIWORD(a2) = HIWORD(v21); /*0x48491b*/
      v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v2)->level + 2; /*0x484944*/
      LOBYTE(a2) = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) >= v11; /*0x484959*/
      v20[0] = smudgeTypeIndex; /*0x484960*/
      v20[1] = HIWORD(v21) + v7; /*0x484965*/
      v12 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v2)->level + 2; /*0x48498e*/
      v13 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20) + 283); /*0x484996*/
      v15 = __OFSUB__(v13, v12); /*0x48499d*/
      v14 = v13 - v12 < 0; /*0x48499d*/
    }
    else
    {
      LOWORD(a2) = smudgeTypeIndex + v7; /*0x4849ab*/
      HIWORD(a2) = HIWORD(v21); /*0x4849b0*/
      v16 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v2)->level + 2; /*0x4849d3*/
      LOBYTE(a2) = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) >= v16; /*0x4849ee*/
      v20[0] = smudgeTypeIndex; /*0x4849f5*/
      v20[1] = HIWORD(v21) + v8; /*0x4849fa*/
      v17 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v2)->level + 2; /*0x484a23*/
      v18 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20) + 283); /*0x484a2b*/
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
int __thiscall InfantryClass::IsInBounds(InfantryClass *this)
{
  __int16 v1; // ax

  v1 = HIWORD(this->?[0]); /*0x484ab0*/
  return v1 >= 0 && v1 < FootClass_Array.?[0] && this->?[3] == 10; /*0x484ad7*/
}



// ==== 0x00484AE0  InfantryClass::ValidateAttackPosition  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::ValidateAttackPosition(InfantryClass *this)
{
  __int16 v2; // ax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  void *v6; // edi
  __int16 v7; // ax
  __int16 v8; // ax
  _WORD *v9; // eax
  __int16 v10; // cx
  __int16 v11; // cx
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  InfantryClass *v14; // edi
  __int16 v15; // ax
  __int16 v16; // ax
  InfantryClass *v17; // esi
  int occupant; // [esp+10h] [ebp-14h] BYREF
  __int16 v19[2]; // [esp+14h] [ebp-10h] BYREF
  __int16 v20[2]; // [esp+18h] [ebp-Ch] BYREF
  __int16 v21[2]; // [esp+1Ch] [ebp-8h] BYREF
  int v22; // [esp+20h] [ebp-4h] BYREF

  v2 = HIWORD(this->?[0]); /*0x484ae8*/
  if ( v2 >= 0 && v2 < FootClass_Array.?[0] && this->?[3] == 10 ) /*0x484b0d*/
    return 1; /*0x484b18*/
  occupant = this->?; /*0x484b20*/
  *(_DWORD *)v19 = *CellStruct::Add((CellStruct *)&occupant, v21, &g_DDrawSurfaceManager.scenario[82]); /*0x484b3a*/
  v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x484b43*/
  v5 = v4; /*0x484b48*/
  if ( v4 ) /*0x484b4c*/
  {
    occupant = v4[9]; /*0x484b59*/
    *(_DWORD *)v20 = *CellStruct::Add((CellStruct *)&occupant, v21, &g_DDrawSurfaceManager.scenario[82]); /*0x484b73*/
    v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x484b81*/
    if ( v6 ) /*0x484b85*/
    {
      v7 = *((_WORD *)v5 + 139); /*0x484b8b*/
      if ( v7 >= 0 && v7 < FootClass_Array.?[0] && v5[59] == 10 ) /*0x484baa*/
      {
        v8 = *((_WORD *)v6 + 139); /*0x484bac*/
        if ( v8 < 0 || v8 >= FootClass_Array.?[0] || *((_DWORD *)v6 + 59) != 10 ) /*0x484bc5*/
          return 1; /*0x484bd0*/
      }
      occupant = *((_DWORD *)v6 + 9); /*0x484bd6*/
      *(_DWORD *)v21 = *NeighborCoord(&v22, &occupant, 0); /*0x484bf3*/
      v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x484bf7*/
      if ( v9 ) /*0x484bfe*/
      {
        v10 = *((_WORD *)v6 + 139); /*0x484c00*/
        if ( v10 >= 0 && v10 < FootClass_Array.?[0] && *((_DWORD *)v6 + 59) == 10 ) /*0x484c1f*/
        {
          v11 = v9[139]; /*0x484c21*/
          if ( v11 < 0 || v11 >= FootClass_Array.?[0] || *((_DWORD *)v9 + 59) != 10 ) /*0x484c3a*/
            return 1; /*0x484c45*/
        }
      }
    }
  }
  *(_DWORD *)v21 = this->?; /*0x484c4b*/
  *(_DWORD *)v20 = *NeighborCoord(&v22, v21, 6); /*0x484c68*/
  v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x484c6c*/
  v13 = v12; /*0x484c71*/
  if ( !v12 ) /*0x484c75*/
    return 0; /*0x484c75*/
  *(_DWORD *)v21 = v12[9]; /*0x484c80*/
  *(_DWORD *)v19 = *NeighborCoord(&v22, v21, 6); /*0x484c9d*/
  v14 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x484ca6*/
  if ( !v14 ) /*0x484caa*/
    return 0; /*0x484caa*/
  v15 = *((_WORD *)v13 + 139); /*0x484cb0*/
  if ( v15 >= 0 && v15 < FootClass_Array.?[0] && v13[59] == 10 ) /*0x484ccf*/
  {
    v16 = HIWORD(v14->?[0]); /*0x484cd1*/
    if ( v16 < 0 || v16 >= FootClass_Array.?[0] || v14->?[3] != 10 ) /*0x484cea*/
      return 1; /*0x484cf5*/
  }
  *(_DWORD *)v21 = v14->?; /*0x484cfb*/
  *(_DWORD *)v20 = *NeighborCoord(&v22, v21, 6); /*0x484d18*/
  v17 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x484d21*/
  return v17 && (unsigned __int8)InfantryClass::IsInBounds(v14) && !(unsigned __int8)InfantryClass::IsInBounds(v17); /*0x484d40*/
}



// ==== 0x00484D60  InfantryClass::CanMoveThroughCell  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::CanMoveThroughCell(InfantryClass *this)
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
  int occupant; // [esp+Ch] [ebp-14h] BYREF
  __int16 v14[2]; // [esp+10h] [ebp-10h] BYREF
  __int16 v15[2]; // [esp+14h] [ebp-Ch] BYREF
  __int16 v16[2]; // [esp+18h] [ebp-8h] BYREF
  int v17; // [esp+1Ch] [ebp-4h] BYREF

  v1 = HIWORD(this->?[0]); /*0x484d60*/
  if ( v1 >= 0 && v1 < FootClass_Array.?[0] && this->?[3] == 10 ) /*0x484d8a*/
    return 1; /*0x484d8e*/
  occupant = this->?; /*0x484d9c*/
  *(_DWORD *)v14 = *CellStruct::Add((CellStruct *)&occupant, v16, &g_DDrawSurfaceManager.scenario[85]); /*0x484db6*/
  v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x484dbf*/
  v4 = v3; /*0x484dc4*/
  if ( !v3 ) /*0x484dc8*/
    return 0; /*0x484dc8*/
  occupant = v3[9]; /*0x484dd5*/
  *(_DWORD *)v15 = *CellStruct::Add((CellStruct *)&occupant, v16, &g_DDrawSurfaceManager.scenario[85]); /*0x484def*/
  v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x484df8*/
  if ( !v5 ) /*0x484dff*/
    return 0; /*0x484dff*/
  v6 = *((_WORD *)v4 + 139); /*0x484e05*/
  if ( v6 >= 0 && v6 < FootClass_Array.?[0] && v4[59] == 10 ) /*0x484e24*/
    return 1; /*0x484e24*/
  v7 = v5[139]; /*0x484e2a*/
  if ( v7 >= 0 && v7 < FootClass_Array.?[0] && *((_DWORD *)v5 + 59) == 10 ) /*0x484e43*/
    return 1; /*0x484e43*/
  v8 = v4[9]; /*0x484e49*/
  LOWORD(occupant) = LOWORD(g_DDrawSurfaceManager.scenario[86]) + v8; /*0x484e58*/
  HIWORD(occupant) = HIWORD(v8) + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x484e6d*/
  *(_DWORD *)v15 = occupant; /*0x484e76*/
  v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x484e88*/
  occupant = v4[9]; /*0x484e97*/
  *(_DWORD *)v16 = *CellStruct::Add((CellStruct *)&occupant, &v17, &g_DDrawSurfaceManager.scenario[84]); /*0x484eac*/
  v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x484eb0*/
  if ( !v9 || !v10 ) /*0x484ebb*/
    return 0; /*0x484ebb*/
  v11 = v9[139]; /*0x484ebd*/
  if ( v11 >= 0 && v11 < FootClass_Array.?[0] && *((_DWORD *)v9 + 59) == 10 ) /*0x484edc*/
    return 1; /*0x484edc*/
  v12 = v10[139]; /*0x484ede*/
  return v12 >= 0 && v12 < FootClass_Array.?[0] && *((_DWORD *)v10 + 59) == 10; /*0x484efb*/
}



// ==== 0x00484F10  globalHelper_084F10  this=InfantryClass  sig=csp ====
char __stdcall sub_484F10(int a1)
{
  return 1; /*0x484f12*/
}



// ==== 0x00484F20  InfantryClass::GetType  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::GetType(InfantryClass *this)
{
  __int16 v1; // ax

  v1 = HIWORD(this->?[0]); /*0x484f20*/
  if ( v1 < 0 || v1 >= FootClass_Array.?[0] ) /*0x484f37*/
    return 0; /*0x484f43*/
  else
    return *(_DWORD *)(FootClass_Array.?[3] + 4 * v1); /*0x484f3f*/
}



// ==== 0x00484F50  ObjectClass::method_484F50  this=ObjectClass  sig=csp ====
int __thiscall sub_484F50(ObjectClass *this)
{
  int v2; // ecx
  int result; // eax
  _DWORD *v4; // edx
  _DWORD *v5; // edi
  int v6; // ebx
  _DWORD *v7; // esi
  _BYTE v8[40]; // [esp+4h] [ebp-28h] BYREF

  v2 = 0; /*0x484f56*/
  result = this->u32_39; /*0x484f58*/
  if ( result ) /*0x484f60*/
  {
    v4 = v8; /*0x484f62*/
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
                   *((unsigned __int8 *)this + 284));
      }
      ++v5; /*0x484fd4*/
      --v6; /*0x484fd7*/
    }
    while ( v6 ); /*0x484fd8*/
  }
  return result; /*0x484fdd*/
}



// ==== 0x00484FF0  CellClass::GetUIName  this=CellClass  sig=csp ====
const wchar_t *__thiscall CellClass::GetUIName(CellClass *this)
{
  int BuildingByTiberiumType; // eax

  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)&this->__pad_28[28]); /*0x484ff3*/
  if ( BuildingByTiberiumType == -1 ) /*0x484ffb*/
    return 0; /*0x48500a*/
  else
    return *(const wchar_t **)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType) + 96); /*0x485006*/
}



// ==== 0x00485010  BuildingClass::FindByCellHash  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::FindByCellHash(BuildingClass *this)
{
  return FindBuildingByTiberiumType(this->?[2]);
}



// ==== 0x00485020  Building::GetNthOfType  this=Building  sig=csp ====
int __thiscall Building::GetNthOfType(Building *this)
{
  int BuildingByTiberiumType; // eax

  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)&this->__pad_C[56]); /*0x485026*/
  if ( BuildingByTiberiumType == -1 ) /*0x48502e*/
    return 0; /*0x485030*/
  else
    return ((unsigned __int8)this->__pad_A4[122] + 1) /*0x48504f*/
         * *(_DWORD *)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType) + 184);
}



// ==== 0x00485060  Cell::IsValidHeight  this=Cell  sig=csp ====
int __thiscall Cell::IsValidHeight(Cell *this)
{
  int Cell_field_0x38; // eax

  Cell_field_0x38 = this->Cell_field_0x38; /*0x485060*/
  return Cell_field_0x38 >= g_CellPassabilityLUT && Cell_field_0x38 < g_CellPassabilityLUT + 14; /*0x485079*/
}



// ==== 0x00485080  JumpjetLocomotionClass::FindClosestOccupiableCell  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall JumpjetLocomotionClass::FindClosestOccupiableCell(JumpjetLocomotionClass *this)
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
  if ( byte_A8E9A0 && (v3 = this->q039) != 0 ) /*0x4850b6*/
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
    if ( Object::FindClosestObjectCell((Object *)this, &v6, 0, 0) ) /*0x4850e6*/
      inited += 85; /*0x4850ef*/
    return inited; /*0x4850f3*/
  }
}



// ==== 0x00485130  MapClass::RemoveCellReference  this=MapClass  sig=csp ====
int __thiscall MapClass::RemoveCellReference(MapClass *this, int a2)
{
  void *v3; // edi
  int v4; // eax
  int v5; // eax
  int result; // eax
  _DWORD *MapClass_field_0x28; // esi
  int v8; // ecx
  int v9; // ecx

  v3 = (void *)a2; /*0x485134*/
  v4 = *(_DWORD *)&this->__pad_30[12]; /*0x485138*/
  if ( v4 == a2 ) /*0x48513d*/
  {
    if ( v4 ) /*0x485141*/
      --*(_DWORD *)(v4 + 44); /*0x485143*/
    *(_DWORD *)&this->__pad_30[12] = 0; /*0x485146*/
    v5 = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)&stru_87F5F0.__pad_E12[1346] + 16))( /*0x48515c*/
           &stru_87F5F0.__pad_E12[1346],
           &this->__pad_18[12]);
    if ( v5 != -1 && v5 < *(int *)&stru_87F5F0.__pad_E12[1362] ) /*0x48516c*/
    {
      --*(_DWORD *)&stru_87F5F0.__pad_E12[1362]; /*0x485171*/
      for ( ; /*0x485177*/
            v5 < *(int *)&stru_87F5F0.__pad_E12[1362];
            *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1350] + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1350]
                                                                                          + 4 * v5) )
      {
        ++v5; /*0x48517f*/
      }
    }
  }
  if ( this->MapClass_field_0x2C == v3 ) /*0x485194*/
    this->MapClass_field_0x2C = 0; /*0x485196*/
  if ( *(void **)this->__pad_30 == v3 ) /*0x4851a0*/
    *(_DWORD *)this->__pad_30 = 0; /*0x4851a2*/
  result = (int)this->MapClass_field_0x28; /*0x4851a9*/
  if ( result ) /*0x4851ae*/
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 44))(v3); /*0x4851b4*/
    if ( result == 61 ) /*0x4851ba*/
    {
      MapClass_field_0x28 = this->MapClass_field_0x28; /*0x4851bc*/
      a2 = (int)v3; /*0x4851bf*/
      result = (*(int (__thiscall **)(_DWORD *, int *))(*MapClass_field_0x28 + 16))(MapClass_field_0x28, &a2); /*0x4851cc*/
      if ( result != -1 ) /*0x4851d2*/
      {
        v8 = MapClass_field_0x28[4]; /*0x4851d4*/
        if ( result < v8 ) /*0x4851d9*/
        {
          v9 = v8 - 1; /*0x4851db*/
          for ( MapClass_field_0x28[4] = v9; /*0x4851e1*/
                result < MapClass_field_0x28[4];
                *(_DWORD *)(MapClass_field_0x28[1] + 4 * result - 4) = *(_DWORD *)(MapClass_field_0x28[1] + 4 * result) )
          {
            ++result; /*0x4851e6*/
          }
        }
      }
    }
  }
  return result; /*0x4851f5*/
}



// ==== 0x00485200  CellClass::ddtor  this=CellClass  sig=csp ====
int __thiscall CellClass::ddtor(CellClass *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x485206*/
    return -2147467261; /*0x485208*/
  *v2 = -1044407858; /*0x485216*/
  v2[1] = 298982028; /*0x48521e*/
  v2[2] = 1610642817; /*0x485227*/
  v2[3] = unk_7E993C; /*0x485230*/
  return 0; /*0x48520d*/
}



// ==== 0x00485240  ObjectClass::SetMember09  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::SetMember09(ObjectClass *this, _DWORD *a2)
{
  this->occupant = *a2; /*0x485246*/
  return a2; /*0x485249*/
}



// ==== 0x00485250  ObjectClass::SetTriggerTarget  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::SetTriggerTarget(ObjectClass *this, int a2)
{
  int v3; // eax
  int result; // eax

  v3 = this->ambientSoundController[0]; /*0x485253*/
  if ( v3 ) /*0x485258*/
    --*(_DWORD *)(v3 + 44); /*0x48525a*/
  result = a2; /*0x48525d*/
  this->ambientSoundController[0] = a2; /*0x485263*/
  if ( a2 ) /*0x485266*/
  {
    result = *(_DWORD *)&stru_87F5F0.__pad_E12[1354]; /*0x485268*/
    if ( *(int *)&stru_87F5F0.__pad_E12[1362] < *(int *)&stru_87F5F0.__pad_E12[1354] /*0x4852a3*/
      || (stru_87F5F0.__pad_E12[1359] || !*(_DWORD *)&stru_87F5F0.__pad_E12[1354])
      && *(int *)&stru_87F5F0.__pad_E12[1366] > 0
      && (result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87F5F0.__pad_E12[1346] + 8))(
                     &stru_87F5F0.__pad_E12[1346],
                     *(_DWORD *)&stru_87F5F0.__pad_E12[1354] + *(_DWORD *)&stru_87F5F0.__pad_E12[1366],
                     0),
          (_BYTE)result) )
    {
      result = (*(_DWORD *)&stru_87F5F0.__pad_E12[1362])++; /*0x4852b1*/
      *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1350] + 4 * result) = this->occupant; /*0x4852bd*/
    }
    ++*(_DWORD *)(this->ambientSoundController[0] + 44); /*0x4852c3*/
  }
  return result; /*0x4852c6*/
}



// ==== 0x004852D0  BuildingClass::CreateDestructionCrater  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::CreateDestructionCrater(BuildingClass *this)
{
  int v2; // kr04_4
  int v3; // kr00_4
  int v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (SLOWORD(this->?) << 8) + 128; /*0x4852f9*/
  v3 = (SHIWORD(this->?) << 8) + 128; /*0x485306*/
  v6[2] = 0; /*0x485308*/
  v6[1] = (v3 / 256) << 8; /*0x485312*/
  v6[0] = (v2 / 256) << 8; /*0x48532c*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x485330*/
  return Cell::CreateCrater( /*0x485389*/
           v5[0] - 30,
           (int)DSurface_ViewBounds.field_4 + v5[1] + -15 * SHIBYTE(this->?[1]) - 15,
           60,
           30,
           0);
}



// ==== 0x00485390  CellClass::GetBridgeBitfield  this=CellClass  sig=csp ====
int __thiscall CellClass::GetBridgeBitfield(CellClass *this)
{
  int v1; // edx
  int v2; // ebp
  int i; // edi
  _DWORD *mapCoords; // eax
  int v6; // eax
  int v7; // ecx
  int v9; // [esp+10h] [ebp-8h]
  __int16 v10[2]; // [esp+14h] [ebp-4h] BYREF

  v1 = *(_DWORD *)stru_A83D50.__pad_34; /*0x485390*/
  v2 = 0; /*0x48539d*/
  for ( i = 0; i < 4; ++i ) /*0x4853a1*/
  {
    if ( (unsigned int)(2 * i) < 8 ) /*0x4853a9*/
    {
      v6 = (2 * (_BYTE)i) & 7; /*0x4853b2*/
      *(_DWORD *)v10 = this->smudgeTypeIndex; /*0x4853b5*/
      LOWORD(v9) = v10[0] + LOWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x4853cf*/
      HIWORD(v9) = v10[1] + HIWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x4853de*/
      *(_DWORD *)v10 = v9; /*0x4853e7*/
      mapCoords = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x4853f0*/
      v1 = *(_DWORD *)stru_A83D50.__pad_34; /*0x4853f5*/
    }
    else
    {
      mapCoords = this->mapCoords; /*0x4853ab*/
    }
    v7 = mapCoords[17]; /*0x4853fb*/
    if ( v7 != -1 && (!*((_BYTE *)mapCoords + 284) || *(_BYTE *)(*(_DWORD *)(v1 + 4 * v7) + 686)) ) /*0x485410*/
    {
      if ( v7 == 126 ) /*0x48541c*/
      {
        if ( *((_BYTE *)mapCoords + 286) < 0x30u ) /*0x485436*/
          continue; /*0x485436*/
LABEL_12:
        v2 |= 1 << i; /*0x485441*/
        continue; /*0x485441*/
      }
      if ( *(_BYTE *)(*(_DWORD *)(v1 + 4 * v7) + 686) ) /*0x485421*/
        goto LABEL_12; /*0x485428*/
    }
  }
  return v2; /*0x48544d*/
}



// ==== 0x00485460  BuildingClass::CheckAdjacentCells  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckAdjacentCells(int this)
{
  int result; // eax
  int v3; // eax
  BuildingTypeClass *v4; // edx
  int v5; // esi
  bool v6; // cf
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // [esp+8h] [ebp-8h]
  int v11; // [esp+Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 284) <= 4u ) /*0x48546e*/
  {
    result = *(_DWORD *)(this + 236); /*0x485474*/
    if ( result != 2 && result != 3 && result != 8 && result != 6 ) /*0x485498*/
    {
      v3 = *(_DWORD *)(this + 68); /*0x48549e*/
      v4 = dword_A83D84; /*0x4854a1*/
      if ( v3 == -1 || (result = *(_DWORD *)&dword_A83D84->TechnoTypeClass[4 * v3], *(_BYTE *)(result + 686)) ) /*0x4854af*/
      {
        v5 = 0; /*0x4854bd*/
        v6 = 1; /*0x4854bf*/
        while ( 1 ) /*0x4854c2*/
        {
          if ( v6 ) /*0x4854c2*/
          {
            v7 = v5 & 7; /*0x4854cd*/
            v11 = *(_DWORD *)(this + 36); /*0x4854d0*/
            LOWORD(v10) = v11 + LOWORD(dword_89F688[v7]); /*0x4854ef*/
            HIWORD(v10) = HIWORD(v11) + HIWORD(dword_89F688[v7]); /*0x4854f8*/
            v11 = v10; /*0x485501*/
            result = (int)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v11); /*0x48550b*/
            v4 = dword_A83D84; /*0x485510*/
          }
          else
          {
            result = this; /*0x4854c4*/
          }
          if ( *(_BYTE *)(result + 284) > 4u && !*(_BYTE *)(this + 284) ) /*0x48551f*/
          {
            v8 = *(_DWORD *)(result + 68); /*0x485529*/
            if ( v8 == -1 || !*(_BYTE *)(*(_DWORD *)&v4->TechnoTypeClass[4 * v8] + 686) ) /*0x485534*/
              break; /*0x485534*/
          }
          v9 = *(_DWORD *)(result + 236); /*0x48553d*/
          if ( v9 == 2 ) /*0x485546*/
            break; /*0x485546*/
          if ( v9 == 3 ) /*0x48554b*/
            break; /*0x48554b*/
          if ( v9 == 8 ) /*0x485550*/
            break; /*0x485550*/
          if ( v9 == 6 ) /*0x485555*/
            break; /*0x485555*/
          result = *(_DWORD *)(result + 68); /*0x485557*/
          if ( result != -1 ) /*0x48555d*/
          {
            result = *(_DWORD *)&v4->TechnoTypeClass[4 * result]; /*0x48555f*/
            if ( !*(_BYTE *)(result + 686) ) /*0x485562*/
              break; /*0x485562*/
          }
          v5 += 2; /*0x48556c*/
          v6 = (unsigned int)v5 < 8; /*0x48556f*/
          if ( v5 >= 8 ) /*0x485572*/
          {
            LOBYTE(result) = 1; /*0x485579*/
            return result; /*0x48557f*/
          }
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x485581*/
  return result; /*0x485578*/
}



// ==== 0x00485590  CellClass::ProcessBridgeRepair  this=CellClass  sig=csp ====
void __thiscall CellClass::ProcessBridgeRepair(CellClass *this)
{
  CellClass *v1; // ebp
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
  CellClass *NeighbourContent; // esi
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
  int v31; // eax
  Coord2D *v32; // eax
  int *v33; // eax
  int *v34; // eax
  struct tagRECT *v35; // eax
  Bounds *v36; // eax
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
  CellClass *v66; // [esp+4Ch] [ebp-B4h]
  int v67; // [esp+50h] [ebp-B0h]
  int v68; // [esp+54h] [ebp-ACh]
  _DWORD v69[2]; // [esp+58h] [ebp-A8h] BYREF
  int v70; // [esp+60h] [ebp-A0h] BYREF
  LONG v71; // [esp+68h] [ebp-98h]
  int v72[2]; // [esp+70h] [ebp-90h] BYREF
  int v73[4]; // [esp+78h] [ebp-88h] BYREF
  int v74[4]; // [esp+88h] [ebp-78h] BYREF
  int v75; // [esp+98h] [ebp-68h] BYREF
  _DWORD v76[4]; // [esp+A0h] [ebp-60h] BYREF
  RECT rcSrc1; // [esp+B0h] [ebp-50h] BYREF
  int v78[4]; // [esp+C0h] [ebp-40h] BYREF
  int v79[4]; // [esp+E0h] [ebp-20h] BYREF
  _DWORD v80[4]; // [esp+F0h] [ebp-10h] BYREF

  v1 = this; /*0x48559e*/
  v66 = this; /*0x4855a3*/
  v56 = 0; /*0x4855a7*/
  v57 = 0; /*0x4855ab*/
  v58 = 0; /*0x4855af*/
  v59 = 0; /*0x4855b3*/
  PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)this, &v70); /*0x4855c0*/
  StartCoords = House::GetStartCoords((House *)v1, &rcDst); /*0x4855c5*/
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
  v1->powerup = 0; /*0x48571a*/
  BridgeBitfield = CellClass::GetBridgeBitfield(v1); /*0x485721*/
  if ( !BridgeBitfield || v1->slopeIndex ) /*0x48572c*/
    *(_DWORD *)&v1->__pad_28[28] = -1; /*0x485768*/
  else
    v1->powerup = 3 * BridgeBitfield + abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 3); /*0x485760*/
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v1->smudgeTypeIndex); /*0x485778*/
  v16 = 0; /*0x48577d*/
  v60 = 0; /*0x48577f*/
  do /*0x485a30*/
  {
    NeighbourContent = (CellClass *)Cell::GetNeighbourContent((Cell *)v1, v16); /*0x48578b*/
    if ( !NeighbourContent->slopeIndex /*0x4857ac*/
      && *(_DWORD *)&NeighbourContent->__pad_28[28] == 126
      && NeighbourContent->powerup < 0x30u )
    {
      v18 = CellClass::GetBridgeBitfield(NeighbourContent); /*0x4857c0*/
      v67 = v18; /*0x4857c7*/
      v61 = 0; /*0x4857cb*/
      v62 = 0; /*0x4857cf*/
      v63 = 0; /*0x4857d3*/
      v64 = 0; /*0x4857d7*/
      v19 = (struct tagRECT *)BuildingClass::GetPlacementRect((BuildingClass *)NeighbourContent, v79); /*0x4857ea*/
      v20 = (struct tagRECT *)House::GetStartCoords((House *)NeighbourContent, v80); /*0x4857ec*/
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
        NeighbourContent->powerup = 3 * v18 + abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 3); /*0x48593d*/
      else
        *(_DWORD *)&NeighbourContent->__pad_28[28] = -1; /*0x48590b*/
      House::AnnounceUpgrade((int)NeighbourContent, -1); /*0x485947*/
      v69[0] = DSurface_ViewBounds.field_0; /*0x485957*/
      v69[1] = DSurface_ViewBounds.field_4; /*0x48595f*/
      v42 = (struct tagRECT *)BuildingClass::GetPlacementRect((BuildingClass *)NeighbourContent, v73); /*0x485972*/
      House::GetStartCoords((House *)NeighbourContent, v74); /*0x485976*/
      v30 = (struct tagRECT *)Rect::Union(v42, v48, v51); /*0x485984*/
      v31 = Rect::Union(v30, v49, v52); /*0x485995*/
      v43 = *(_DWORD *)(v31 + 12); /*0x4859a0*/
      v39 = *(_DWORD *)(v31 + 8); /*0x4859a5*/
      v32 = (Coord2D *)CellStruct::Copy((CellStruct *)v31, v72); /*0x4859b6*/
      v33 = Coord2D::Sub(v32, &v75, v69); /*0x4859bd*/
      v34 = Rect::Construct((Rect *)&rcSrc1, v33, v39, v43); /*0x4859ca*/
      v61 = *v34; /*0x4859d8*/
      v62 = v34[1]; /*0x4859df*/
      v63 = v34[2]; /*0x4859e6*/
      v64 = v34[3]; /*0x4859ef*/
      Cell::CreateCrater(*v34, v34[1], v34[2], v34[3], 0); /*0x485a0f*/
      BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&NeighbourContent->smudgeTypeIndex); /*0x485a1d*/
      v1 = v66; /*0x485a22*/
    }
    v16 += 2; /*0x485a26*/
    v60 = v16; /*0x485a2c*/
  }
  while ( v16 < 8 ); /*0x485a30*/
  v44 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v72); /*0x485a45*/
  v38 = (struct tagRECT *)BuildingClass::GetPlacementRect((BuildingClass *)v1, v78); /*0x485a64*/
  House::GetStartCoords((House *)v1, v76); /*0x485a68*/
  v35 = (struct tagRECT *)Rect::Union(v38, &rcSrc1, v44); /*0x485a76*/
  v36 = (Bounds *)Rect::Union(v35, v40, v45); /*0x485a87*/
  v37 = Bounds::Subtract(v36, v41, v46); /*0x485a8e*/
  v56 = *v37; /*0x485a9c*/
  v57 = v37[1]; /*0x485aa3*/
  v58 = v37[2]; /*0x485aaa*/
  v59 = v37[3]; /*0x485ab3*/
  Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x485ad3*/
  House::AnnounceUpgrade((int)v1, -1); /*0x485adc*/
}



// ==== 0x00485AF0  BuildingClass::VisualizePlacement  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::VisualizePlacement(BuildingClass *this)
{
  BuildingClass *v1; // ebp
  int *PlacementRect; // esi
  _DWORD *StartCoords; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  char transporter; // al
  signed int v9; // ebx
  BuildingClass *NeighbourContent; // esi
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
  int v34; // eax
  Coord2D *v35; // eax
  int *v36; // eax
  int *v37; // eax
  struct tagRECT *v38; // eax
  int *v39; // eax
  int v40; // edx
  struct tagRECT *v41; // eax
  Bounds *v42; // eax
  Rect *v43; // eax
  struct tagRECT *v44; // eax
  Bounds *v45; // eax
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
  Rect v69; // [esp+38h] [ebp-180h] BYREF
  int v70; // [esp+48h] [ebp-170h]
  int v71; // [esp+4Ch] [ebp-16Ch]
  int v72; // [esp+50h] [ebp-168h]
  BuildingClass *v73; // [esp+54h] [ebp-164h]
  struct tagRECT rcDst; // [esp+58h] [ebp-160h] BYREF
  int v75; // [esp+74h] [ebp-144h]
  int v76; // [esp+80h] [ebp-138h]
  int v77; // [esp+84h] [ebp-134h]
  _DWORD v78[2]; // [esp+88h] [ebp-130h] BYREF
  int v79; // [esp+90h] [ebp-128h] BYREF
  int v80; // [esp+98h] [ebp-120h]
  int v81; // [esp+A0h] [ebp-118h] BYREF
  LONG v82; // [esp+A8h] [ebp-110h]
  _DWORD v83[2]; // [esp+B0h] [ebp-108h] BYREF
  int v84; // [esp+B8h] [ebp-100h] BYREF
  RECT rcSrc1; // [esp+C0h] [ebp-F8h] BYREF
  int v86[4]; // [esp+D0h] [ebp-E8h] BYREF
  RECT v87; // [esp+E0h] [ebp-D8h] BYREF
  int v88[4]; // [esp+F0h] [ebp-C8h] BYREF
  int v89; // [esp+100h] [ebp-B8h] BYREF
  int v90[4]; // [esp+108h] [ebp-B0h] BYREF
  Rect v91; // [esp+118h] [ebp-A0h] BYREF
  int v92[4]; // [esp+128h] [ebp-90h] BYREF
  int v93[4]; // [esp+138h] [ebp-80h] BYREF
  int v94[4]; // [esp+148h] [ebp-70h] BYREF
  int v95[4]; // [esp+168h] [ebp-50h] BYREF
  int v96[4]; // [esp+178h] [ebp-40h] BYREF
  int v97[4]; // [esp+1A8h] [ebp-10h] BYREF

  v1 = this; /*0x485afa*/
  v73 = this; /*0x485afe*/
  if ( !(unsigned __int8)BuildingClass::CheckAdjacentCells((int)this) ) /*0x485b19*/
    return; /*0x485b19*/
  PlacementRect = BuildingClass::GetPlacementRect(v1, &v81); /*0x485b35*/
  StartCoords = House::GetStartCoords((House *)v1, &v79); /*0x485b3a*/
  if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 ) /*0x485b4b*/
  {
    v7 = PlacementRect[3]; /*0x485bdb*/
  }
  else
  {
    if ( PlacementRect[2] > 0 ) /*0x485b5a*/
    {
      v72 = PlacementRect[3]; /*0x485b61*/
      if ( v72 > 0 ) /*0x485b65*/
      {
        v4 = StartCoords[1]; /*0x485b6b*/
        v5 = StartCoords[3]; /*0x485b71*/
        v6 = PlacementRect[1]; /*0x485b7e*/
        if ( v4 > v6 ) /*0x485b87*/
        {
          v5 += v4 - v6; /*0x485b8b*/
          v4 = v6; /*0x485b8d*/
        }
        if ( v5 + v4 < v72 + v6 ) /*0x485bb5*/
          v5 = v72 + v6 - v4 + 1; /*0x485bba*/
        v1 = v73; /*0x485bbc*/
        v75 = v5; /*0x485bc0*/
        goto LABEL_14; /*0x485bc4*/
      }
    }
    v7 = StartCoords[3]; /*0x485bce*/
  }
  v75 = v7; /*0x485bde*/
LABEL_14:
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v1->?); /*0x485c7d*/
  transporter = (char)v1->?; /*0x485c9b*/
  v1->?[2] = 126; /*0x485ca1*/
  if ( !transporter ) /*0x485caa*/
  {
    v9 = 0; /*0x485cd0*/
    BYTE2(v1->?) = (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 3 + 48; /*0x485cd2*/
    v68 = 0; /*0x485cd8*/
    while ( 1 ) /*0x485ce4*/
    {
      NeighbourContent = (BuildingClass *)Cell::GetNeighbourContent((Cell *)v1, v9); /*0x485ce4*/
      v11 = NeighbourContent->?[2]; /*0x485ce6*/
      if ( v11 == 126 ) /*0x485cec*/
      {
        if ( BYTE2(NeighbourContent->?) < 0x30u ) /*0x485cf5*/
          goto LABEL_21; /*0x485cf5*/
      }
      else if ( v11 == -1 || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v11) + 686) ) /*0x485d0d*/
      {
LABEL_21:
        if ( LOBYTE(NeighbourContent->?) ) /*0x485d1b*/
        {
          Rect::Set(&v69, 0, 0, 0, 0); /*0x486142*/
          v55 = (struct tagRECT *)BuildingClass::GetPlacementRect(NeighbourContent, v93); /*0x48615d*/
          House::GetStartCoords((House *)NeighbourContent, v96); /*0x486161*/
          v38 = (struct tagRECT *)Rect::Union(v55, v62, v64); /*0x48616f*/
          v39 = (int *)Rect::Union(v38, v63, v65); /*0x486180*/
          v69.X = *v39; /*0x486187*/
          v69.Y = v39[1]; /*0x48618e*/
          v69.Width = v39[2]; /*0x486195*/
          v40 = v39[3]; /*0x486199*/
          NeighbourContent->?[2] = 126; /*0x48619c*/
          v69.Height = v40; /*0x4861a8*/
          BYTE2(NeighbourContent->?) = 2 * LOBYTE(NeighbourContent->?) /*0x4861d7*/
                                     + (abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 1)
                                     + 51;
          v56 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v83); /*0x4861e2*/
          v47 = (struct tagRECT *)BuildingClass::GetPlacementRect(NeighbourContent, v86); /*0x486201*/
          House::GetStartCoords((House *)NeighbourContent, v88); /*0x486205*/
          v41 = (struct tagRECT *)Rect::Union(v47, &rcSrc1, v56); /*0x486213*/
          v42 = (Bounds *)Rect::Union(v41, v50, v57); /*0x486224*/
          v43 = (Rect *)Bounds::Subtract(v42, v51, v58); /*0x48622b*/
          v69 = *v43; /*0x486239*/
          Cell::CreateCrater(v43->X, v43->Y, v43->Width, v43->Height, 0); /*0x486270*/
        }
        else
        {
          BridgeBitfield = CellClass::GetBridgeBitfield((CellClass *)NeighbourContent); /*0x485d30*/
          v13 = NeighbourContent->?[2]; /*0x485d32*/
          v70 = BridgeBitfield; /*0x485d38*/
          if ( v13 == -1 || BridgeBitfield <= 15 && BYTE2(NeighbourContent->?) / 3 != BridgeBitfield ) /*0x485d5f*/
          {
            v14 = BuildingClass::GetPlacementRect(NeighbourContent, v97); /*0x485d86*/
            v15 = House::GetStartCoords((House *)NeighbourContent, v92); /*0x485d92*/
            if ( v15[2] <= 0 || v15[3] <= 0 ) /*0x485da7*/
            {
              v76 = v14[2]; /*0x485e60*/
              v20 = v14[3]; /*0x485e67*/
            }
            else
            {
              v66 = v14[2]; /*0x485db2*/
              if ( v66 <= 0 || (v71 = v14[3], v71 <= 0) ) /*0x485dc5*/
              {
                v23 = v15[2]; /*0x485e43*/
                v20 = v15[3]; /*0x485e4b*/
                v76 = v23; /*0x485e4e*/
              }
              else
              {
                v16 = *v15; /*0x485dc7*/
                v17 = *v14; /*0x485dc9*/
                v18 = v15[2]; /*0x485dcc*/
                v19 = v15[1]; /*0x485dcf*/
                v20 = v15[3]; /*0x485dd2*/
                v21 = v16 <= *v14; /*0x485dd5*/
                v80 = v18; /*0x485dd7*/
                if ( !v21 ) /*0x485dde*/
                {
                  v18 += v16 - v17; /*0x485de2*/
                  v16 = v17; /*0x485de4*/
                  v80 = v18; /*0x485de6*/
                }
                v22 = v14[1]; /*0x485ded*/
                v72 = v22; /*0x485df2*/
                if ( v19 > v22 ) /*0x485df6*/
                {
                  v20 += v19 - v22; /*0x485dfa*/
                  v19 = v22; /*0x485dfc*/
                }
                if ( v16 + v18 < v17 + v66 ) /*0x485e08*/
                  v80 = v17 - v16 + v66 + 1; /*0x485e14*/
                if ( v20 + v19 < v71 + v72 ) /*0x485e2a*/
                  v20 = v71 + v72 - v19 + 1; /*0x485e2f*/
                v76 = v80; /*0x485e3a*/
              }
            }
            v77 = v20; /*0x485e6e*/
            NeighbourContent->?[2] = 126; /*0x485f28*/
            v24 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x485f47*/
            BYTE2(NeighbourContent->?) = 3 * v70 + abs32(v24 % 3); /*0x485f69*/
            House::AnnounceUpgrade((int)NeighbourContent, -1); /*0x485f71*/
            v78[0] = DSurface_ViewBounds.field_0; /*0x485f81*/
            v78[1] = DSurface_ViewBounds.field_4; /*0x485f8f*/
            v25 = (struct tagRECT *)House::GetStartCoords((House *)NeighbourContent, v94); /*0x485fa5*/
            v26 = (struct tagRECT *)BuildingClass::GetPlacementRect(NeighbourContent, v95); /*0x485faa*/
            if ( v25->right <= 0 || v25->bottom <= 0 ) /*0x485fbf*/
            {
              rcDst = *v26; /*0x48607b*/
            }
            else
            {
              right = v26->right; /*0x485fca*/
              if ( right <= 0 || (v70 = v26->bottom, v70 <= 0) ) /*0x485fdd*/
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
                v82 = v29; /*0x485fee*/
                if ( !v21 ) /*0x485ff5*/
                {
                  v29 += left - v28; /*0x485ff9*/
                  left = v28; /*0x485ffb*/
                  v82 = v29; /*0x485ffd*/
                }
                v32 = v26->top; /*0x486004*/
                v71 = v32; /*0x486009*/
                if ( top > v32 ) /*0x48600d*/
                {
                  bottom += top - v32; /*0x486011*/
                  top = v32; /*0x486013*/
                }
                if ( left + v29 >= v28 + right ) /*0x48601f*/
                  v33 = v82; /*0x48602d*/
                else
                  v33 = v28 - left + right + 1; /*0x486027*/
                if ( bottom + top < v71 + v70 ) /*0x486043*/
                  bottom = v71 + v70 - top + 1; /*0x486048*/
                rcDst.left = left; /*0x48604a*/
                rcDst.top = top; /*0x48604e*/
                rcDst.right = v33; /*0x486052*/
                rcDst.bottom = bottom; /*0x486056*/
              }
            }
            v34 = Rect::Union(&rcDst, v62, v64); /*0x4860a4*/
            v54 = *(_DWORD *)(v34 + 12); /*0x4860af*/
            v49 = *(_DWORD *)(v34 + 8); /*0x4860b7*/
            v35 = (Coord2D *)CellStruct::Copy((CellStruct *)v34, &v84); /*0x4860cb*/
            v36 = Coord2D::Sub(v35, &v89, v78); /*0x4860d2*/
            v37 = Rect::Construct(&v91, v36, v49, v54); /*0x4860df*/
            Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x486124*/
            v9 = v68; /*0x486129*/
            v1 = v73; /*0x48612d*/
          }
        }
        BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&NeighbourContent->?); /*0x48627e*/
      }
      v9 += 2; /*0x486283*/
      v68 = v9; /*0x486289*/
      if ( v9 >= 8 ) /*0x48628d*/
      {
        BuildingClass::CreateIdleAnim(v1); /*0x486295*/
        goto LABEL_62; /*0x48629a*/
      }
    }
  }
  BYTE2(v1->?) = 2 * LOBYTE(v1->?) + (abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 1) + 51; /*0x4862c0*/
LABEL_62:
  v59 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v83); /*0x4862c6*/
  v48 = (struct tagRECT *)BuildingClass::GetPlacementRect(v1, v90); /*0x4862f0*/
  House::GetStartCoords((House *)v1, v88); /*0x4862fb*/
  v44 = (struct tagRECT *)Rect::Union(v48, &v87, v59); /*0x486309*/
  v45 = (Bounds *)Rect::Union(v44, v52, v60); /*0x48631a*/
  v46 = Bounds::Subtract(v45, v53, v61); /*0x486321*/
  Cell::CreateCrater(*v46, v46[1], v46[2], v46[3], 0); /*0x486366*/
  House::AnnounceUpgrade((int)v1, -1); /*0x48636f*/
}



// ==== 0x00486380  Cell::IsEmpty  this=Cell  sig=csp ====
int __thiscall Cell::IsEmpty(Cell *this)
{
  int result; // eax

  result = this->Cell_field_0x38; /*0x486380*/
  LOBYTE(result) = result == 0xFFFF || !result; /*0x486391*/
  return result; /*0x486390*/
}



// ==== 0x004863A0  ObjectClass::method_4863A0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4863A0(ObjectClass *this)
{
  BombClass *attachedBomb; // eax

  attachedBomb = this->attachedBomb; /*0x4863a0*/
  return (int)attachedBomb >= g_CellTileLookup && (int)attachedBomb < g_CellTileLookup + 20 /*0x4863c7*/
      || (int)attachedBomb >= dword_AA1058 && (int)attachedBomb < dword_AA1058 + 12;
}



// ==== 0x004863D0  CellLand::IsBuildable  this=CellLand  sig=csp ====
int __thiscall CellLand::IsBuildable(CellLand *this)
{
  int result; // eax
  char v2; // cl
  char v3; // cl
  char v4; // cl
  int v5; // ecx

  if ( g_TerrainBuildConfig != -1 ) /*0x4863da*/
  {
    result = *((_DWORD *)this + 14); /*0x4863dc*/
    if ( result >= g_TerrainBuildConfig && result < g_TerrainBuildConfig + 40 ) /*0x4863e8*/
    {
      LOBYTE(result) = 1; /*0x4863ea*/
      return result; /*0x4863ed*/
    }
  }
  if ( dword_AA073C == -1 || (result = *((_DWORD *)this + 14), result < dword_AA073C) || result >= dword_AA073C + 4 ) /*0x486405*/
  {
    if ( dword_ABB110 == -1 || (result = *((_DWORD *)this + 14), result < dword_ABB110) || result >= dword_ABB110 + 4 ) /*0x486448*/
    {
      if ( dword_AA1050 == -1 || (result = *((_DWORD *)this + 14), result < dword_AA1050) || result >= dword_AA1050 + 4 ) /*0x48648c*/
      {
        if ( dword_AA10A0 == -1 /*0x4864cf*/
          || (result = *((_DWORD *)this + 14), result < dword_AA10A0)
          || result >= dword_AA10A0 + 4 )
        {
          if ( dword_ABBEBC != -1 ) /*0x486505*/
          {
            result = *((_DWORD *)this + 14); /*0x486507*/
            if ( result >= dword_ABBEBC && result < dword_ABBEBC + 20 ) /*0x486513*/
            {
              LOBYTE(result) = 1; /*0x486515*/
              return result; /*0x486518*/
            }
          }
          if ( dword_ABAD24 != -1 ) /*0x486522*/
          {
            result = *((_DWORD *)this + 14); /*0x486524*/
            if ( result >= dword_ABAD24 && result < dword_ABAD24 + 4 ) /*0x486530*/
            {
              LOBYTE(result) = 1; /*0x486532*/
              return result; /*0x486535*/
            }
          }
          if ( g_Cell_BuildabilityLUT != -1 ) /*0x48653f*/
          {
            result = *((_DWORD *)this + 14); /*0x486541*/
            if ( result >= g_Cell_BuildabilityLUT && result < g_Cell_BuildabilityLUT + 16 ) /*0x48654d*/
            {
              LOBYTE(result) = 1; /*0x48654f*/
              return result; /*0x486552*/
            }
          }
          if ( g_TerrainBridgeIndex != -1 ) /*0x48655c*/
          {
            result = *((_DWORD *)this + 14); /*0x48655e*/
            if ( result >= g_TerrainBridgeIndex && result < g_TerrainBridgeIndex + 16 ) /*0x48656a*/
            {
              LOBYTE(result) = 1; /*0x48656c*/
              return result; /*0x48656f*/
            }
          }
          if ( dword_ABC2C8 != -1 ) /*0x486579*/
          {
            result = *((_DWORD *)this + 14); /*0x48657b*/
            if ( result >= dword_ABC2C8 && result < dword_ABC2C8 + 2 ) /*0x486587*/
            {
              LOBYTE(result) = 1; /*0x486589*/
              return result; /*0x48658c*/
            }
          }
          result = dword_AA101C; /*0x48658d*/
          if ( dword_AA101C == -1 ) /*0x486595*/
            goto LABEL_60; /*0x486595*/
          v5 = *((_DWORD *)this + 14); /*0x486597*/
          if ( v5 < dword_AA101C ) /*0x48659c*/
            goto LABEL_60; /*0x48659c*/
          result = dword_AA101C + 28; /*0x48659e*/
          if ( v5 >= dword_AA101C + 28 ) /*0x4865a3*/
            goto LABEL_60; /*0x4865a3*/
        }
        else if ( result == dword_AA10A0 || result == dword_AA10A0 + 3 ) /*0x4864da*/
        {
          v4 = *((_BYTE *)this + 282); /*0x4864e0*/
          if ( v4 != 2 && v4 != 3 ) /*0x4864f2*/
          {
            LOBYTE(result) = 1; /*0x4864f8*/
            return result; /*0x4864fb*/
          }
          goto LABEL_60; /*0x4864f2*/
        }
      }
      else if ( result == dword_AA1050 || result == dword_AA1050 + 3 ) /*0x486497*/
      {
        if ( *((_BYTE *)this + 282) >= 2u ) /*0x4864a5*/
        {
          LOBYTE(result) = 1; /*0x4864b4*/
          return result; /*0x4864b7*/
        }
        goto LABEL_60; /*0x4864a5*/
      }
    }
    else if ( result == dword_ABB110 || result == dword_ABB110 + 3 ) /*0x486453*/
    {
      v3 = *((_BYTE *)this + 282); /*0x486459*/
      if ( v3 != 1 && v3 != 3 ) /*0x48646b*/
      {
        LOBYTE(result) = 1; /*0x486471*/
        return result; /*0x486474*/
      }
      goto LABEL_60; /*0x48646b*/
    }
LABEL_59:
    LOBYTE(result) = 1; /*0x4865a5*/
    return result; /*0x4865a8*/
  }
  if ( result != dword_AA073C && result != dword_AA073C + 3 ) /*0x486410*/
    goto LABEL_59; /*0x486410*/
  v2 = *((_BYTE *)this + 282); /*0x486416*/
  if ( v2 && v2 != 4 ) /*0x486427*/
  {
    LOBYTE(result) = 1; /*0x48642d*/
    return result; /*0x486430*/
  }
LABEL_60:
  LOBYTE(result) = 0; /*0x4865a9*/
  return result; /*0x4863ec*/
}



// ==== 0x004865B0  CellClass::IsTerrainType  this=CellClass  sig=csp ====
int __thiscall CellClass::IsTerrainType(CellClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->__pad_28[16]; /*0x4865b0*/
  LOBYTE(result) = result >= dword_ABAD28 && result < dword_ABAD28 + 42; /*0x4865c7*/
  return result; /*0x4865c6*/
}



// ==== 0x004865D0  Cell::IsGroundTypeRange  this=Cell  sig=csp ====
int __thiscall Cell::IsGroundTypeRange(Cell *this)
{
  int result; // eax

  result = this->Cell_field_0x38; /*0x4865d0*/
  LOBYTE(result) = result >= dword_ABAD28 && result < dword_ABAD28 + 42 /*0x4865e7*/
                || result >= g_CellPassabilityLUT && result < g_CellPassabilityLUT + 14
                || result >= dword_AA073C && result < dword_AA073C + 4
                || result >= dword_ABB110 && result < dword_ABB110 + 4
                || result >= dword_AA1050 && result < dword_AA1050 + 4
                || result >= dword_AA10A0 && result < dword_AA10A0 + 4;
  return result; /*0x4865e6*/
}



// ==== 0x00486650  CellClass::InMapDataRange  this=CellClass  sig=csp ====
int __thiscall CellClass::InMapDataRange(CellClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->__pad_28[16]; /*0x486650*/
  LOBYTE(result) = result >= dword_AA10A4 && result < dword_AA10A4 + 14; /*0x486667*/
  return result; /*0x486666*/
}



// ==== 0x00486670  CellClass::InBounds  this=CellClass  sig=csp ====
int __thiscall CellClass::InBounds(CellClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->__pad_28[16]; /*0x486670*/
  LOBYTE(result) = result >= dword_ABC2B0 && result < dword_ABC2B0 + 16; /*0x486687*/
  return result; /*0x486686*/
}



// ==== 0x004866D0  ObjectClass::method_4866D0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4866D0(ObjectClass *this)
{
  BombClass *attachedBomb; // eax

  attachedBomb = this->attachedBomb; /*0x4866d0*/
  return (int)attachedBomb >= g_CellTileTypeCache && (int)attachedBomb < g_CellTileTypeCache + 15; /*0x4866e6*/
}



// ==== 0x004866F0  ObjectClass::method_4866F0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4866F0(ObjectClass *this)
{
  BombClass *attachedBomb; // eax

  attachedBomb = this->attachedBomb; /*0x4866f0*/
  return (int)attachedBomb >= dword_ABBEC4 && (int)attachedBomb < dword_ABBEC4 + 4; /*0x486706*/
}



// ==== 0x00486730  Value::InRange  this=Value  sig=csp ====
bool __thiscall Value::InRange(Value *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14); /*0x486730*/
  return v1 >= dword_AA0E20 && v1 < dword_AA0E20 + 14; /*0x486746*/
}



// ==== 0x00486750  Cell::IsInRange  this=Cell  sig=csp ====
int __thiscall Cell::IsInRange(Cell *this)
{
  int result; // eax

  LOBYTE(result) = g_Cell_BuildabilityLUT != -1 /*0x48676c*/
                && (result = this->Cell_field_0x38, result >= g_Cell_BuildabilityLUT)
                && result < g_Cell_BuildabilityLUT + 16;
  return result; /*0x48676b*/
}



// ==== 0x00486770  Cell::IsInRange2  this=Cell  sig=csp ====
int __thiscall Cell::IsInRange2(Cell *this)
{
  int result; // eax

  LOBYTE(result) = g_TerrainBridgeIndex != -1 /*0x48678c*/
                && (result = this->Cell_field_0x38, result >= g_TerrainBridgeIndex)
                && result < g_TerrainBridgeIndex + 16;
  return result; /*0x48678b*/
}



// ==== 0x00486790  RandomMap::Check  this=RandomMap  sig=csp ====
bool __thiscall RandomMap::Check(RandomMap *this)
{
  int v1; // eax

  v1 = this->RandomMap_field_0x38[0]; /*0x486790*/
  return v1 >= dword_AA0E24 && v1 < dword_AA0E24 + 16; /*0x4867a6*/
}



// ==== 0x004867B0  Cell::IsShore  this=Cell  sig=csp ====
int __thiscall Cell::IsShore(Cell *this)
{
  int result; // eax

  result = this->Cell_field_0x38; /*0x4867b0*/
  LOBYTE(result) = result == dword_AA0E18 || result >= dword_AA0748 && result < dword_AA0748 + 16; /*0x4867d1*/
  return result; /*0x4867d0*/
}



// ==== 0x004867E0  CellClass::GetCellType  this=CellClass  sig=csp ====
int __thiscall CellClass::GetCellType(CellClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->__pad_28[16]; /*0x4867e0*/
  LOBYTE(result) = result < g_CellPassabilityLUT || result >= g_CellPassabilityLUT + 14; /*0x4867f7*/
  return result; /*0x4867f6*/
}



// ==== 0x00486840  CellClass::GetOccupier  this=CellClass  sig=csp ====
int __thiscall CellClass::GetOccupier(CellClass *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF
  _DWORD *v6; // [esp+14h] [ebp+4h]

  v2 = (SHIWORD(this->smudgeTypeIndex) << 8) + 128; /*0x48685d*/
  v5[0] = (SLOWORD(this->smudgeTypeIndex) << 8) + 128; /*0x486864*/
  v1 = v5[0]; /*0x486857*/
  v5[1] = v2; /*0x486868*/
  inited = Isometric::InitTables((int)this, v5); /*0x48686c*/
  *v6 = v1; /*0x486877*/
  v6[1] = v2; /*0x486879*/
  v6[2] = inited; /*0x48687e*/
  return (int)v6; /*0x48687c*/
}



// ==== 0x00486890  CellClass::CheckProperty  this=CellClass  sig=csp ====
int __thiscall CellClass::CheckProperty(CellClass *this)
{
  int v1; // esi
  int *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  _DWORD *v7; // ecx
  _BYTE v8[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v9; // [esp+14h] [ebp+4h]

  if ( (this->flags[0] & 0x100) != 0 ) /*0x48689d*/
  {
    v1 = dword_89E7B4; /*0x4868a1*/
    v2 = (int *)(*(int (__thiscall **)(CellClass *, _BYTE *))(this->mapCoords[0] + 72))(this, v8); /*0x4868ad*/
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
    v7 = (_DWORD *)(*(int (__thiscall **)(CellClass *, _BYTE *))(this->mapCoords[0] + 72))(this, v8); /*0x4868dc*/
    *v9 = *v7; /*0x4868e6*/
    v9[1] = v7[1]; /*0x4868eb*/
    v9[2] = v7[2]; /*0x4868f2*/
    return (int)v9; /*0x4868de*/
  }
}



// ==== 0x00486900  CellClass::IsActiveOrNext  this=CellClass  sig=csp ====
int __thiscall CellClass::IsActiveOrNext(CellClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->__pad_28[16]; /*0x486900*/
  LOBYTE(result) = result == dword_ABC2C8 || result == dword_ABC2C8 + 1; /*0x48690d*/
  return result; /*0x48690f*/
}



// ==== 0x00486920  BuildingClass::CreateIdleAnim  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::CreateIdleAnim(BuildingClass *this)
{
  int *v2; // esi
  AnimClass *v3; // ebp
  int inited; // eax
  int *v5; // [esp+Ch] [ebp-1Ch]
  int occupant; // [esp+10h] [ebp-18h]
  _DWORD v7[2]; // [esp+14h] [ebp-14h] BYREF
  int v8[3]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( this->?[2] == 126 && BYTE2(this->?) >= 0x30u && !LOBYTE(this->?) && (this->? & 0x20000) == 0 ) /*0x486956*/
  {
    v2 = (int *)this->?[1]; /*0x48695c*/
    v5 = v2; /*0x486964*/
    if ( v2 ) /*0x486968*/
    {
      while ( 1 ) /*0x486976*/
      {
        if ( (*(int (__thiscall **)(int *))(*v2 + 456))(v2) <= 5 /*0x4869bd*/
          && (v2[5] & 1) != 0
          && !*(_BYTE *)((*(int (__thiscall **)(int *))(*v2 + 132))(v2) + 3217)
          && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse(v2, 8) )
        {
          v3 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4869d4*/
          if ( v3 ) /*0x4869db*/
          {
            occupant = this->?; /*0x4869e2*/
            v7[0] = 128; /*0x4869fd*/
            v7[1] = 128; /*0x486a01*/
            inited = Isometric::InitTables((int)this, v7); /*0x486a0a*/
            v8[1] = SHIWORD(occupant) << 8; /*0x486a15*/
            v8[0] = (__int16)occupant << 8; /*0x486a23*/
            v8[2] = inited; /*0x486a2c*/
            AnimClass::ctor( /*0x486a42*/
              v3,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 232),
              v8,
              0,
              1,
              (void *)0x600,
              0,
              0);
            v2 = v5; /*0x486a47*/
          }
          this->? |= 0x20000u; /*0x486a4b*/
        }
        v5 = (int *)v2[12]; /*0x486a5a*/
        if ( !v5 ) /*0x486a5e*/
          break; /*0x486a5e*/
        v2 = (int *)v2[12]; /*0x486972*/
      }
    }
  }
}



// ==== 0x00486A70  CellClass::CreateFoggedObjects  this=CellClass  sig=csp ====
char __thiscall CellClass::CreateFoggedObjects(CellClass *this)
{
  int v1; // eax
  int v2; // esi
  _DWORD *v3; // ebp
  int v4; // eax
  int *v5; // edi
  ObjectClass *v6; // esi
  char v7; // al
  __int16 v9[2]; // [esp+10h] [ebp-10h] BYREF
  char v10[4]; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  _BYTE v12[4]; // [esp+1Ch] [ebp-4h] BYREF

  LOBYTE(v1) = (_BYTE)dword_A8B230; /*0x486a70*/
  if ( ((int)dword_A8B230->vtable0 & 0x1000) != 0 ) /*0x486a7d*/
  {
    v2 = 1; /*0x486a89*/
    *(_DWORD *)v9 = this->smudgeTypeIndex; /*0x486a8f*/
    for ( i = 1; i <= 15; i += 2 ) /*0x486a93*/
    {
      v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x486aa8*/
      v1 = *((char *)v3 + 283); /*0x486aad*/
      if ( v1 >= v2 - 2 && v1 <= v2 ) /*0x486abe*/
      {
        v1 = v3[80]; /*0x486ac4*/
        if ( (v1 & 0x400000) == 0 ) /*0x486ad1*/
        {
          v4 = __2_YAPAXI_Z(0x18u); /*0x486ad9*/
          if ( v4 ) /*0x486ae3*/
          {
            *(_DWORD *)(v4 + 4) = 0; /*0x486ae5*/
            *(_DWORD *)(v4 + 8) = 0; /*0x486ae8*/
            *(_BYTE *)(v4 + 12) = 1; /*0x486aeb*/
            *(_BYTE *)(v4 + 13) = 0; /*0x486aef*/
            *(_DWORD *)v4 = &DynamicVectorClass<FoggedObjectClass *>::`vftable'; /*0x486af2*/
            *(_DWORD *)(v4 + 20) = 10; /*0x486af8*/
            *(_DWORD *)(v4 + 16) = 0; /*0x486aff*/
            v5 = (int *)v4; /*0x486b02*/
          }
          else
          {
            v5 = 0; /*0x486b06*/
          }
          LOBYTE(v1) = (*(int (__thiscall **)(int *, int, _DWORD))(*v5 + 8))(v5, 1, 0); /*0x486b0f*/
          v5[5] = 1; /*0x486b12*/
          v6 = (ObjectClass *)v3[57]; /*0x486b21*/
          for ( v3[80] |= 0x400000u; v6; v6 = v6->nextObject ) /*0x486b2f*/
          {
            v1 = (*((int (__stdcall **)(void **))v6->? + 3))(&v6->?); /*0x486b38*/
            if ( v1 == 6 ) /*0x486b3e*/
            {
              (*((void (__thiscall **)(ObjectClass *, _BYTE *))v6->AbstractClass + 110))(v6, v12); /*0x486b49*/
              LOBYTE(v1) = sub_457A10(v6); /*0x486b51*/
              if ( (_BYTE)v1 ) /*0x486b58*/
              {
                if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *))v6->AbstractClass + 32))(v6) /*0x486b75*/
                  || (v7 = BYTE1(v6[10].attachedTag), v10[0] = 1, v7 == 15) )
                {
                  v10[0] = 0; /*0x486b77*/
                }
                LOBYTE(v1) = BuildingClass::CreateFoggedObjects((BuildingClass *)v6, (int)v5, v3, v10[0]); /*0x486b84*/
              }
            }
            else if ( v1 == 1 || v1 == 2 || v1 == 15 ) /*0x486b98*/
            {
              LOBYTE(v1) = (*((int (__thiscall **)(ObjectClass *))v6->AbstractClass + 84))(v6); /*0x486b9e*/
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
      ++v9[0]; /*0x486bc5*/
      ++v9[1]; /*0x486bca*/
      v2 = i + 2; /*0x486bcf*/
    }
  }
  return v1; /*0x486be3*/
}



// ==== 0x00486BF0  CellClass::UpdateZone  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::UpdateZone(CellClass *this)
{
  int i; // esi
  _DWORD *result; // eax
  int v3; // ecx
  __int16 v4[2]; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v4 = this->smudgeTypeIndex; /*0x486bf5*/
  for ( i = 1; i < 15; i += 2 ) /*0x486bf9*/
  {
    result = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4); /*0x486c08*/
    v3 = *((char *)result + 283); /*0x486c0d*/
    if ( v3 >= i - 2 && v3 <= i ) /*0x486c1d*/
    {
      result[80] &= ~0x400000u; /*0x486c2b*/
      result = (_DWORD *)CellClass::ClearCellContents((CellClass *)result); /*0x486c33*/
    }
    ++v4[0]; /*0x486c38*/
    ++v4[1]; /*0x486c3d*/
  }
  return result; /*0x486c4a*/
}



// ==== 0x00486C50  CellClass::ClearCellContents  this=CellClass  sig=csp ====
int __thiscall CellClass::ClearCellContents(CellClass *this)
{
  int result; // eax
  int i; // ebp
  __int16 *j; // edi
  __int16 v5; // si
  int v6; // eax
  int v7; // ecx
  __int16 v8; // dx
  CellClass *v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int (__thiscall ***v14)(_DWORD, int); // ecx
  _DWORD *v15; // [esp+4h] [ebp-1Ch] BYREF
  __int16 v16; // [esp+8h] [ebp-18h]
  __int16 v17; // [esp+Ah] [ebp-16h]
  int v18; // [esp+Ch] [ebp-14h]
  __int16 v19[6]; // [esp+10h] [ebp-10h] BYREF
  int v20; // [esp+1Ch] [ebp-4h]

  result = *(_DWORD *)this->__pad_28; /*0x486c56*/
  if ( result ) /*0x486c5b*/
  {
    for ( i = *(_DWORD *)(result + 16) - 1; i >= 0; --i ) /*0x486c66*/
    {
      v15 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)this->__pad_28 + 4) + 4 * i); /*0x486c77*/
      if ( CellClass::recalcPassability((int)v15) ) /*0x486c7b*/
      {
        for ( j = (__int16 *)CellClass::recalcPassability((int)v15); ; j += 2 ) /*0x486c91*/
        {
          v5 = *j; /*0x486c93*/
          if ( *j == 0x7FFF && j[1] == 0x7FFF ) /*0x486ca1*/
            break; /*0x486ca1*/
          v6 = v15[13]; /*0x486cae*/
          v7 = v15[14]; /*0x486cb0*/
          v20 = v15[15]; /*0x486cb6*/
          v16 = v6 / 256; /*0x486cc6*/
          v8 = j[1]; /*0x486cd6*/
          v17 = v7 / 256; /*0x486cdd*/
          LOWORD(v18) = v16 + v5; /*0x486cef*/
          HIWORD(v18) = v17 + v8; /*0x486cf4*/
          *(_DWORD *)v19 = v18; /*0x486d03*/
          v9 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x486d07*/
          if ( v9 != this ) /*0x486d0e*/
          {
            v10 = *(_DWORD **)v9->__pad_28; /*0x486d10*/
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
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 12))(*(_DWORD *)this->__pad_28); /*0x486d6e*/
    v14 = *(int (__thiscall ****)(_DWORD, int))this->__pad_28; /*0x486d71*/
    if ( v14 ) /*0x486d77*/
      result = (**v14)(v14, 1); /*0x486d7d*/
    *(_DWORD *)this->__pad_28 = 0; /*0x486d7f*/
  }
  return result; /*0x486d86*/
}



// ==== 0x00486D90  ObjectClass::method_486D90  this=ObjectClass  sig=csp ====
int __thiscall sub_486D90(ObjectClass *this, char a2)
{
  int v3; // ebx
  int v5; // esi
  int v6; // ebp
  bool v7; // cf
  _DWORD *p_vtable0; // eax
  int v9; // ecx
  __int16 v10[2]; // [esp+8h] [ebp-4h] BYREF
  int v11; // [esp+10h] [ebp+4h]

  v3 = 1 << a2; /*0x486da4*/
  if ( (*((_DWORD *)this + 55) & (1 << a2)) == 0 ) /*0x486da8*/
    return -1; /*0x486dab*/
  v5 = 0; /*0x486db5*/
  v6 = 0; /*0x486db7*/
  v7 = 1; /*0x486db9*/
  do /*0x486e22*/
  {
    if ( v7 ) /*0x486dbc*/
    {
      v9 = v5 & 7; /*0x486dc7*/
      *(_DWORD *)v10 = this->occupant; /*0x486dca*/
      LOWORD(v11) = LOWORD(g_DDrawSurfaceManager.scenario[v9 + 82]) + v10[0]; /*0x486dee*/
      HIWORD(v11) = v10[1] + HIWORD(g_DDrawSurfaceManager.scenario[v9 + 82]); /*0x486df3*/
      *(_DWORD *)v10 = v11; /*0x486e02*/
      p_vtable0 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x486e06*/
    }
    else
    {
      p_vtable0 = &this->AbstractClass; /*0x486dbe*/
    }
    if ( (v3 & p_vtable0[55]) != 0 ) /*0x486e11*/
      v6 |= 1 << v5; /*0x486e1c*/
    v7 = (unsigned int)++v5 < 8; /*0x486e1f*/
  }
  while ( v5 < 8 ); /*0x486e22*/
  return v6; /*0x486daa*/
}



// ==== 0x00486E30  ObjectClass::Helper_486E30  this=ObjectClass  sig=csp ====
int __thiscall Helper_486E30(ObjectClass *this)
{
  __int16 *p_occupant; // edi
  RandomMap *v3; // eax
  CellClass *v5; // eax

  p_occupant = (__int16 *)&this->occupant; /*0x486e34*/
  v3 = (RandomMap *)Helper_486E30_Helper((ObjectClass *)&this->occupant); /*0x486e39*/
  if ( v3 ) /*0x486e40*/
  {
    RandomMap::RemoveMatching(v3, (int)this); /*0x486e45*/
  }
  else
  {
    v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], p_occupant); /*0x486e55*/
    CellClass::ProcessBridgeRepair(v5); /*0x486e5c*/
  }
  return 0; /*0x486e4a*/
}



// ==== 0x00486E70  BuildingClass::CreatePlacementCrater  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CreatePlacementCrater(BuildingClass *this)
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

  ScreenRect = CellClass::GetScreenRect((CellClass *)this, v21); /*0x486e8b*/
  StartCoords = House::GetStartCoords((House *)this, v22); /*0x486e90*/
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
  PlacementRect = BuildingClass::GetPlacementRect(this, v23); /*0x486f2d*/
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
  Cell::CreateCrater(v5 - DSurface_ViewBounds.field_0, v15 - (unsigned int)DSurface_ViewBounds.field_4, v8, v16, 0); /*0x486fd1*/
  return BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&this->?); /*0x486fe8*/
}



// ==== 0x00486FF0  Cell::IsBuildableAdvanced  this=Cell  sig=csp ====
int __thiscall Cell::IsBuildableAdvanced(Cell *this)
{
  int result; // eax
  _DWORD *i; // esi
  _DWORD *Cell_field_0xE4; // esi

  result = Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], (int)this, 1); /*0x486ffc*/
  if ( !(_BYTE)result ) /*0x487003*/
  {
    LOBYTE(result) = 1; /*0x487006*/
    return result; /*0x487009*/
  }
  result = this->Cell_field_0x38; /*0x48700a*/
  if ( result >= 0 /*0x487022*/
    && result < *(int *)&stru_A8EB00.?[340]
    && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * result) + 773) )
  {
    goto LABEL_21; /*0x487022*/
  }
  if ( this->Cell_field_0x11B[1] ) /*0x48702c*/
    goto LABEL_21; /*0x48702c*/
  result = (int)this->Cell_field_0x140; /*0x487036*/
  if ( (result & 0x500) != 0 ) /*0x48703f*/
    goto LABEL_21; /*0x48703f*/
  if ( !byte_A8E9A0 ) /*0x487048*/
    goto LABEL_20; /*0x487048*/
  for ( i = this->Cell_field_0xE4; i; i = (_DWORD *)i[12] ) /*0x487052*/
  {
    result = (*(int (__thiscall **)(_DWORD *))(*i + 44))(i); /*0x487058*/
    if ( result == 6 ) /*0x48705e*/
      goto LABEL_21; /*0x48705e*/
  }
  if ( !byte_A8E9A0 || (Cell_field_0xE4 = this->Cell_field_0xE4) == 0 ) /*0x48707e*/
  {
LABEL_20:
    LOBYTE(result) = 1; /*0x48709d*/
    return result; /*0x4870a0*/
  }
  while ( 1 ) /*0x487084*/
  {
    result = (*(int (__thiscall **)(_DWORD *))(*Cell_field_0xE4 + 44))(Cell_field_0xE4); /*0x487084*/
    if ( result == 36 ) /*0x48708a*/
      break; /*0x48708a*/
    Cell_field_0xE4 = (_DWORD *)Cell_field_0xE4[12]; /*0x48708c*/
    if ( !Cell_field_0xE4 ) /*0x487091*/
    {
      LOBYTE(result) = 1; /*0x487094*/
      return result; /*0x487097*/
    }
  }
LABEL_21:
  LOBYTE(result) = 0; /*0x4870a1*/
  return result; /*0x487005*/
}



// ==== 0x004870B0  Cell::HasOccupierBit  this=Cell  sig=csp ====
int __thiscall Cell::HasOccupierBit(Cell *this, char a2)
{
  return ((1 << a2) & *(_DWORD *)&this->__pad_70[8]) != 0; /*0x4870c8*/
}



// ==== 0x004870D0  Cell::IsPassableOffset  this=Cell  sig=csp ====
int __thiscall Cell::IsPassableOffset(Cell *this, int a2)
{
  return *(_WORD *)&this->__pad_70[2 * a2 + 12] > 0; /*0x4870de*/
}



// ==== 0x004870F0  HouseClass::HasType  this=HouseClass  sig=csp ====
int __thiscall HouseClass::HasType(HouseClass *this, int a2)
{
  return *((_WORD *)&this->psychicDetectionCapacity + a2) > 0; /*0x487101*/
}



// ==== 0x00487110  BuildingClass::checkOccupant  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::checkOccupant(BuildingClass *this, char a2)
{
  this->? |= 1 << a2; /*0x48711d*/
  return &this->TechnoClass; /*0x487120*/
}



// ==== 0x00487130  BuildingClass::updateOccupiedState  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::updateOccupiedState(BuildingClass *this, char a2)
{
  this->? &= ~(1 << a2); /*0x487144*/
  return &this->TechnoClass; /*0x487147*/
}



// ==== 0x00487150  FootClass::checkTerrainSpeed  this=FootClass  sig=csp ====
int __thiscall FootClass::checkTerrainSpeed(FootClass *this, int a2)
{
  ++*((_WORD *)&this->? + a2); /*0x487154*/
  return a2; /*0x487159*/
}



// ==== 0x00487160  FootClass::updateLocomotion  this=FootClass  sig=csp ====
int __thiscall FootClass::updateLocomotion(FootClass *this, int a2)
{
  --*((_WORD *)&this->? + a2); /*0x487164*/
  return a2; /*0x487169*/
}



// ==== 0x00487170  BuildingClass::processGarrison  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::processGarrison(BuildingClass *this, int a2)
{
  ++*((_WORD *)&this->? + a2); /*0x487174*/
  return a2; /*0x48717c*/
}



// ==== 0x00487180  BuildingClass::evaulateDefense  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::evaulateDefense(BuildingClass *this, int a2)
{
  --*((_WORD *)&this->? + a2); /*0x487184*/
  return a2; /*0x48718c*/
}



// ==== 0x00487190  Crate::FindPlacement  this=IUnknown  sig=csp ====
char __thiscall Crate::FindPlacement(int this, int a2, int a3)
{
  CellClass *v4; // edi
  #374 *v5; // ebp
  int v6; // eax
  #374 *v7; // ebp
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // ecx
  Coord2D *v11; // eax
  int *v12; // eax
  int *v13; // eax
  int BuildingByTiberiumType; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  ObjectClass *firstObject; // edi
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
  _DWORD v47[2]; // [esp+14h] [ebp-80h] BYREF
  int v48; // [esp+1Ch] [ebp-78h]
  int v49; // [esp+20h] [ebp-74h]
  int v50; // [esp+24h] [ebp-70h] BYREF
  int v51; // [esp+28h] [ebp-6Ch]
  int v52[4]; // [esp+34h] [ebp-60h] BYREF
  Bounds v53; // [esp+44h] [ebp-50h] BYREF
  int v54; // [esp+48h] [ebp-4Ch]
  int v55; // [esp+4Ch] [ebp-48h]
  int v56; // [esp+50h] [ebp-44h]
  int *v57[4]; // [esp+54h] [ebp-40h] BYREF
  Rect v58; // [esp+64h] [ebp-30h] BYREF
  int v59[4]; // [esp+74h] [ebp-20h] BYREF
  _DWORD v60[4]; // [esp+84h] [ebp-10h] BYREF

  v4 = *(CellClass **)(g_BuildingLoadQueue_Array.?[2] + 4 * a2); /*0x4871af*/
  v57[0] = (int *)v4; /*0x4871b2*/
  if ( a3 >= (int)v4->firstObject ) /*0x4871bc*/
    return 0; /*0x4871bc*/
  if ( (unsigned __int8)IsCoordValidMap(this, (int)v4) ) /*0x4871c3*/
  {
    if ( *(_BYTE *)(this + 284) ) /*0x4871d0*/
    {
      v5 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x4871e4*/
      if ( v5 ) /*0x4871eb*/
      {
        v46 = *(_DWORD *)(this + 36); /*0x4871fa*/
        v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x487208*/
        Object::SpawnAtCell( /*0x48723f*/
          v5,
          *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34
                    + 4
                    * ((int)v4->altObject + (unsigned int)v4->jumpjet->? + 2 * *(unsigned __int8 *)(this + 284) + v6)
                    - 8),
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
        v8 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 11); /*0x487266*/
        Object::SpawnAtCell( /*0x48728c*/
          v7,
          *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * ((int)v4->jumpjet->? + v8)),
          (__int16 *)&v46,
          -1);
      }
    }
    CellClass::RegisterForRedraw(v4, (__int16 *)(this + 36)); /*0x487297*/
    *(_BYTE *)(this + 286) = a3; /*0x4872a0*/
    PlacementRect = (const RECT *)BuildingClass::GetPlacementRect((BuildingClass *)this, &v53.Bounds_field_00); /*0x4872b2*/
    StartCoords = (struct tagRECT *)House::GetStartCoords((House *)this, v57); /*0x4872bb*/
    CellClass::GetScreenRect((CellClass *)this, v52); /*0x4872c3*/
    Rect::Union(StartCoords, PlacementRect, v43); /*0x4872ce*/
    v9 = (_DWORD *)Rect::Union(v42, v44, v45); /*0x4872d9*/
    v47[0] = *v9; /*0x4872ea*/
    v47[1] = v9[1]; /*0x4872f7*/
    v48 = v9[2]; /*0x4872fe*/
    v10 = v9[3]; /*0x487302*/
    v57[0] = (int *)DSurface_ViewBounds.field_0; /*0x487305*/
    v49 = v10; /*0x487309*/
    v40 = v10; /*0x48730d*/
    v38 = v48; /*0x487312*/
    v57[1] = (int *)DSurface_ViewBounds.field_4; /*0x487322*/
    v11 = (Coord2D *)CellStruct::Copy((CellStruct *)v47, &v50); /*0x487326*/
    v12 = Coord2D::Sub(v11, v52, v57); /*0x48732d*/
    v13 = Rect::Construct(&v58, v12, v38, v40); /*0x487337*/
    Cell::CreateCrater(*v13, v13[1], v13[2], v13[3], 0); /*0x48735d*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], this + 36); /*0x487368*/
    return 1; /*0x487379*/
  }
  if ( !BYTE2(dword_A8B230[374].vtable3) ) /*0x487382*/
    return 0; /*0x487382*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x487393*/
  if ( BuildingByTiberiumType == -1 ) /*0x48739b*/
    return 0; /*0x48739b*/
  v16 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType); /*0x4873af*/
  if ( *(_BYTE *)(this + 284) /*0x4873f0*/
    || *(unsigned __int8 *)(this + 286) >= *(_DWORD *)(v16 + 228) - 1
    || *(double *)(v16 + 176) < 0.00001
    || FindBuildingByTiberiumType(*(_DWORD *)(this + 68)) != a2 )
  {
    return 0; /*0x487621*/
  }
  v17 = a3 + *(_BYTE *)(this + 286); /*0x4873fc*/
  *(_BYTE *)(this + 286) = v17; /*0x4873fe*/
  firstObject = v4->firstObject; /*0x487404*/
  if ( v17 >= (int)&firstObject[-1].lineTrailer + 3 ) /*0x487414*/
    v17 = (_BYTE)firstObject - 1; /*0x487416*/
  *(_BYTE *)(this + 286) = v17; /*0x487418*/
  ScreenRect = CellClass::GetScreenRect((CellClass *)this, &v58.X); /*0x487431*/
  v20 = House::GetStartCoords((House *)this, v60); /*0x487436*/
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
  v31 = BuildingClass::GetPlacementRect((BuildingClass *)this, v59); /*0x4874f8*/
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
  v54 = v36; /*0x4875a4*/
  v52[1] = (int)DSurface_ViewBounds.field_4; /*0x4875ae*/
  v56 = v35; /*0x4875b6*/
  v53.Bounds_field_00 = v21; /*0x4875cb*/
  v55 = v29; /*0x4875cf*/
  v52[0] = DSurface_ViewBounds.field_0; /*0x4875d3*/
  v37 = Bounds::Subtract(&v53, v59, v52); /*0x4875d7*/
  Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x4875fd*/
  BuildingClass::AddOccupancy(v57[0], (__int16 *)(this + 36)); /*0x48760a*/
  return 1; /*0x48736f*/
}



// ==== 0x00487630  DisplayClass::UpdateDisplayTimer  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::UpdateDisplayTimer(DisplayClass *this)
{
  char *v1; // eax
  int v2; // edx
  void *DisplayClass_field_0x12C; // eax

  if ( this->DisplayClass_field_0x130 == (void *)1 ) /*0x487637*/
    this->DisplayClass_field_0x130 = 0; /*0x487639*/
  v1 = (char *)this->DisplayClass_field_0x130 - 1; /*0x487649*/
  this->DisplayClass_field_0x130 = v1; /*0x48764a*/
  v2 = (int)v1; /*0x487650*/
  DisplayClass_field_0x12C = this->DisplayClass_field_0x12C; /*0x487652*/
  if ( ((unsigned __int8)DisplayClass_field_0x12C & 8) != 0 && ((unsigned __int8)DisplayClass_field_0x12C & 0x10) != 0 ) /*0x48765e*/
  {
    if ( v2 <= 0 ) /*0x48766f*/
    {
      DisplayClass_field_0x12C = this->DisplayClass_field_0x140; /*0x487671*/
      if ( ((int)this->DisplayClass_field_0x140 & 0x20) == 0x20 ) /*0x48767f*/
      {
        LOBYTE(DisplayClass_field_0x12C) = (unsigned __int8)DisplayClass_field_0x12C & 0xDF; /*0x487681*/
        this->DisplayClass_field_0x140 = DisplayClass_field_0x12C; /*0x487683*/
      }
    }
  }
  else if ( v2 <= 0 ) /*0x487662*/
  {
    LOBYTE(DisplayClass_field_0x12C) = (unsigned __int8)DisplayClass_field_0x12C | 0x18; /*0x487664*/
    this->DisplayClass_field_0x12C = DisplayClass_field_0x12C; /*0x487666*/
  }
  return (char)DisplayClass_field_0x12C; /*0x48766c*/
}



// ==== 0x00487690  DisplayClass::AdvanceFrameCounter  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::AdvanceFrameCounter(DisplayClass *this)
{
  void *DisplayClass_field_0x130; // esi
  char *v2; // eax
  int v3; // edx
  int result; // eax

  DisplayClass_field_0x130 = this->DisplayClass_field_0x130; /*0x487691*/
  if ( DisplayClass_field_0x130 == (void *)-1 ) /*0x48769a*/
    this->DisplayClass_field_0x130 = 0; /*0x48769c*/
  v2 = (char *)this->DisplayClass_field_0x130 + 1; /*0x4876ac*/
  this->DisplayClass_field_0x130 = v2; /*0x4876ad*/
  v3 = (int)v2; /*0x4876b3*/
  result = (int)this->DisplayClass_field_0x134; /*0x4876b5*/
  if ( v3 > result ) /*0x4876bd*/
    this->DisplayClass_field_0x130 = (void *)result; /*0x4876bf*/
  if ( (int)DisplayClass_field_0x130 <= 0 ) /*0x4876c8*/
  {
    result = (int)this->DisplayClass_field_0x130; /*0x4876ca*/
    if ( result > 0 ) /*0x4876d2*/
    {
      result = (int)this->DisplayClass_field_0x140; /*0x4876d4*/
      LOBYTE(result) = result | 0x20; /*0x4876da*/
      this->DisplayClass_field_0x140 = (void *)result; /*0x4876dc*/
    }
  }
  return result; /*0x4876c7*/
}



// ==== 0x004876F0  CellClass::Unshroud  this=CellClass  sig=csp ====
int __thiscall CellClass::Unshroud(CellClass *this)
{
  int copyFlags; // eax
  int result; // eax

  copyFlags = this->copyFlags; /*0x4876f0*/
  LOBYTE(copyFlags) = copyFlags | 0x18; /*0x4876f6*/
  this->copyFlags = copyFlags; /*0x4876f8*/
  result = this->shroudCounter; /*0x4876fe*/
  if ( result > 0 ) /*0x487706*/
  {
    result = this->flags[0]; /*0x487708*/
    LOBYTE(result) = result | 0x20; /*0x48770e*/
    this->flags[0] = result; /*0x487710*/
  }
  return result; /*0x487716*/
}



// ==== 0x00487720  TechnoClass::ApplySplashDamageToNeighbors  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::ApplySplashDamageToNeighbors(TechnoClass *this)
{
  TechnoClass *v1; // edi
  char result; // al
  int v3; // ecx
  __int16 v4; // ax
  TechnoClass *v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // esi
  int v9; // edx
  int v10; // [esp+58h] [ebp-2Ch]
  int v11; // [esp+58h] [ebp-2Ch]
  int v12; // [esp+5Ch] [ebp-28h]
  int v13; // [esp+60h] [ebp-24h]
  int v15; // [esp+68h] [ebp-1Ch]
  __int16 v16[2]; // [esp+6Ch] [ebp-18h] BYREF
  int v17; // [esp+70h] [ebp-14h] BYREF
  TechnoClass *v18; // [esp+74h] [ebp-10h] BYREF
  int v19; // [esp+78h] [ebp-Ch] BYREF
  int v20; // [esp+7Ch] [ebp-8h]
  int v21; // [esp+80h] [ebp-4h]

  v1 = this; /*0x487727*/
  result = this->secondaryTurretIndex; /*0x48772d*/
  if ( result ) /*0x487735*/
  {
    v3 = SHIWORD(this->?) << 8; /*0x48774d*/
    v19 = (SLOWORD(v1->?) << 8) + 128; /*0x487756*/
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
        HIWORD(v13) = v4 + HIWORD(v1->?); /*0x48779e*/
        LOWORD(v13) = v12 + LOWORD(v1->?); /*0x4877a3*/
        *(_DWORD *)v16 = v13; /*0x4877b0*/
        v5 = (TechnoClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x4877ba*/
        v18 = v5; /*0x4877c1*/
        if ( v5 != v1 ) /*0x4877c5*/
        {
          v6 = v5->?[2]; /*0x4877cb*/
          if ( v6 ) /*0x4877d3*/
          {
            do /*0x487864*/
            {
              v10 = *(_DWORD *)(v6 + 48); /*0x4877de*/
              if ( v6 && (*(_BYTE *)(v6 + 20) & 4) != 0 ) /*0x4877f0*/
              {
                if ( !*(_DWORD *)(v6 + 1652) ) /*0x4877f2*/
                  WinAPI::Wrapper(-2147467261); /*0x48780d*/
                if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(v6 + 1652) + 160))( /*0x487828*/
                       *(_DWORD *)(v6 + 1652),
                       v19,
                       v20,
                       v21) )
                {
                  v7 = *(_DWORD *)v6; /*0x487835*/
                  v17 = *(_DWORD *)(v6 + 108); /*0x487837*/
                  (*(void (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v7 + 364))( /*0x487858*/
                    v6,
                    &v17,
                    0,
                    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
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
            v1 = this; /*0x48786e*/
          }
          v8 = v5->?[1]; /*0x487872*/
          if ( v8 ) /*0x48787a*/
          {
            do /*0x48790c*/
            {
              v11 = *(_DWORD *)(v8 + 48); /*0x487885*/
              if ( v8 && (*(_BYTE *)(v8 + 20) & 4) != 0 ) /*0x487898*/
              {
                if ( !*(_DWORD *)(v8 + 1652) ) /*0x48789a*/
                  WinAPI::Wrapper(-2147467261); /*0x4878b5*/
                if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(v8 + 1652) + 160))( /*0x4878d0*/
                       *(_DWORD *)(v8 + 1652),
                       v19,
                       v20,
                       v21) )
                {
                  v9 = *(_DWORD *)v8; /*0x4878dd*/
                  v18 = *(TechnoClass **)(v8 + 108); /*0x4878df*/
                  (*(void (__thiscall **)(int, TechnoClass **, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v9 + 364))( /*0x487900*/
                    v8,
                    &v18,
                    0,
                    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                    0,
                    1,
                    1,
                    0);
                }
              }
              v8 = v11; /*0x487906*/
            }
            while ( v11 ); /*0x48790c*/
            v1 = this; /*0x487912*/
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



// ==== 0x00487950  CellClass::QuickPassable  this=CellClass  sig=csp ====
int __thiscall CellClass::QuickPassable(CellClass *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = ((__int16)this->smudgeTypeIndex << 8) + 128; /*0x48796f*/
  v2 = ((__int16)HIWORD(this->smudgeTypeIndex) << 8) + 128; /*0x487971*/
  v5[0] = 128; /*0x487973*/
  v5[1] = 128; /*0x487977*/
  inited = Isometric::InitTables((int)this, v5); /*0x487980*/
  v6[0] = v1; /*0x487989*/
  v6[1] = v2; /*0x487993*/
  v6[2] = inited; /*0x487997*/
  return Cell::IsPassable(v6); /*0x4879a0*/
}



// ==== 0x004879B0  ObjectClass::method_4879B0  this=ObjectClass  sig=csp ====
char __thiscall sub_4879B0(ObjectClass *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-14h] BYREF
  int v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = ((__int16)this->occupant << 8) + 128; /*0x4879cf*/
  v2 = ((__int16)HIWORD(this->occupant) << 8) + 128; /*0x4879d1*/
  v5[0] = 128; /*0x4879d3*/
  v5[1] = 128; /*0x4879d7*/
  inited = Isometric::InitTables((int)this, v5); /*0x4879e0*/
  v6[0] = v1; /*0x4879e9*/
  v6[1] = v2; /*0x4879f3*/
  v6[2] = inited; /*0x4879f7*/
  return Game::Stub3((int)v6); /*0x487a00*/
}



// ==== 0x00487A10  Cell::SearchEnemies  this=IUnknown  sig=csp ====
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
      *((_DWORD *)dword_8871E0 + 1002),
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
      v9 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x487b28*/
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
                    *((_DWORD *)dword_8871E0 + 1002),
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
int __thiscall BuildingClass::CheckC4Active(BuildingClass *this)
{
  int result; // eax
  _DWORD *v3; // esi

  if ( LOBYTE(this->?) ) /*0x487c14*/
  {
    LOBYTE(result) = 0; /*0x487c1f*/
  }
  else if ( byte_A8E9A0 && (v3 = (_DWORD *)this->?[1]) != 0 ) /*0x487c34*/
  {
    while ( 1 ) /*0x487c3a*/
    {
      result = (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3); /*0x487c3a*/
      if ( result == 6 ) /*0x487c40*/
        break; /*0x487c40*/
      v3 = (_DWORD *)v3[12]; /*0x487c42*/
      if ( !v3 ) /*0x487c47*/
        goto LABEL_7; /*0x487c47*/
    }
    LOBYTE(result) = 0; /*0x487c61*/
  }
  else
  {
LABEL_7:
    result = this->?[3]; /*0x487c49*/
    LOBYTE(result) = byte_89EA60[36 * result]; /*0x487c54*/
  }
  return result; /*0x487c1e*/
}



// ==== 0x00487C70  TerrainClass::SetFieldF8  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::SetFieldF8(TerrainClass *this, int a2)
{
  *((_DWORD *)this + 62) = a2; /*0x487c74*/
  return a2; /*0x487c7a*/
}



// ==== 0x00487C80  ObjectClass::?GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ  this=ObjectClass  sig=csp ====
unsigned int __thiscall _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(
        Concurrency::details::SchedulerBase *this)
{
  return *((_DWORD *)this + 62); /*0x487c86*/
}



// ==== 0x00487CB0  Cell::GetTraversability  this=Cell  sig=csp ====
__int64 __thiscall Cell_GetTraversability(double *this)
{
  double v1; // st7

  v1 = (double)*((int *)dword_8871E0 + 1539); /*0x487cb5*/
  if ( this->q01E < v1 ) /*0x487cc8*/
    v1 = this->q01E; /*0x487ccc*/
  return Math::RoundToInt(v1);
}



// ==== 0x00487CE0  CellClass::RadLevel_Increase  this=CellClass  sig=csp ====
void __thiscall CellClass::RadLevel_Increase(double *this, double a2)
{
  this->cloakedByHouses = a2 + this->cloakedByHouses; /*0x487cea*/
}



// ==== 0x00487D00  CellClass::RadLevel_Decrease  this=CellClass  sig=csp ====
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



// ==== 0x00487D50  Cell::GetSlopeIndex  this=SpeedType  sig=csp ====
int __thiscall Cell::GetSlopeIndex(int this)
{
  return *(char *)(this + 283) + 4 * ((*(_DWORD *)(this + 320) >> 7) & 1); /*0x487d66*/
}



// ==== 0x00487D70  CellClass::AttachObject  this=CellClass  sig=csp ====
int __thiscall CellClass::AttachObject(CellClass *this, int a2)
{
  int result; // eax

  result = (int)this->jumpjet; /*0x487d77*/
  if ( a2 )
  {
    if ( !result || result == a2 ) /*0x487dc0*/
    {
      this->jumpjet = (FootClass *)a2; /*0x487dc8*/
      if ( (*(_BYTE *)(a2 + 20) & 4) != 0 ) /*0x487dd3*/
        result = (int)FootClass::Jumpjet_OccupyCell((FootClass *)a2, this->smudgeTypeIndex); /*0x487dd9*/
      LOBYTE(result) = 1; /*0x487dde*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x487dc2*/
    }
  }
  else
  {
    if ( result )
    {
      if ( (*(_BYTE *)(result + 20) & 4) != 0 )
        result = (int)FootClass::Jumpjet_OccupyCell(
                        (*(_BYTE *)(result + 20) & 4) != 0 ? (FootClass *)result : 0,
                        dword_89E748);
    }
    this->jumpjet = 0; /*0x487daa*/
    LOBYTE(result) = 1; /*0x487db4*/
  }
  return result; /*0x487db6*/
}



// ==== 0x00487DF0  Cell::IsBridge2  this=Cell  sig=csp ====
int __thiscall Cell::IsBridge2(Cell *this)
{
  int result; // eax

  LOBYTE(result) = *(_DWORD *)&this->__pad_E8[4] == 5; /*0x487df7*/
  return result; /*0x487dfa*/
}



// ==== 0x00487E00  MovementAI::IsPathMovementAllowed  this=MovementAI  sig=csp ====
bool __thiscall MovementAI::IsPathMovementAllowed(MovementAI *this)
{
  _DWORD *v2; // esi
  BOOL v3; // eax

  if ( !byte_A8E9A0 ) /*0x487e0b*/
    return this->u32_10 != 0; /*0x487e0b*/
  v2 = (_DWORD *)*((_DWORD *)this + 57); /*0x487e0d*/
  if ( !v2 ) /*0x487e15*/
    return this->u32_10 != 0; /*0x487e15*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 6 ) /*0x487e21*/
  {
    v2 = (_DWORD *)v2[12]; /*0x487e23*/
    if ( !v2 ) /*0x487e28*/
      return this->u32_10 != 0; /*0x487e28*/
  }
  if ( this->u32_10 == 1 ) /*0x487e45*/
    LOBYTE(v3) = 0; /*0x487e48*/
  else
    return this->u32_10 != 0; /*0x487e2a*/
  return v3; /*0x487e34*/
}



// ==== 0x00487E50  AbstractClass::compareType  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::compareType(AbstractClass *this)
{
  return 11; /*0x487e55*/
}



// ==== 0x00487E60  CellClass::StubReturn11  this=CellClass  sig=csp ====
int __thiscall CellClass::StubReturn11(CellClass *this)
{
  return 11; /*0x487e65*/
}



// ==== 0x00487E70  CellClass::StubReturn328  this=CellClass  sig=csp ====
int __thiscall CellClass::StubReturn328(CellClass *this)
{
  return 328; /*0x487e75*/
}



// ==== 0x00487E80  CellClass::CopyTo  this=CellClass  sig=csp ====
int __thiscall CellClass::CopyTo(CellClass *this)
{
  char v3; // [esp+8h] [ebp+4h]

  CellClass::DTOR(this); /*0x487e83*/
  if ( (v3 & 1) != 0 ) /*0x487e8d*/
    __3_YAXPAX_Z(this); /*0x487e90*/
  return (int)this->mapCoords; /*0x487e9a*/
}



// ==== 0x00487EA0  NeighborCoord  this=-  sig=csp ====
_DWORD *__fastcall Coord_Neighbor(_DWORD *a1, _WORD *a2, char a3)
{
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // [esp+8h] [ebp+4h]

  result = a1; /*0x487ea0*/
  v4 = a3 & 7; /*0x487ea7*/
  LOWORD(v5) = *a2 + LOWORD(dword_89F688[v4]); /*0x487ec4*/
  HIWORD(v5) = a2[1] + HIWORD(dword_89F688[v4]); /*0x487eca*/
  *result = v5; /*0x487ed3*/
  return result; /*0x487ec9*/
}



// ==== 0x00487EE0  Bounds::Subtract  this=Bounds  sig=csp ====
_DWORD *__thiscall Bounds::Subtract(Bounds *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // edx
  int Bounds_field_00; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // edx

  v3 = *((_DWORD *)this + 1); /*0x487ee0*/
  Bounds_field_00 = this->Bounds_field_00; /*0x487ee3*/
  v5 = *((_DWORD *)this + 2); /*0x487ef1*/
  v6 = *((_DWORD *)this + 3); /*0x487ef4*/
  v7 = v3 - a3[1]; /*0x487ef7*/
  *a2 = Bounds_field_00 - *a3; /*0x487f01*/
  a2[1] = v7; /*0x487f06*/
  a2[2] = v5; /*0x487f09*/
  a2[3] = v6; /*0x487f0d*/
  return a2; /*0x487f05*/
}



// ==== 0x00487F20  Coord2D::Sub  this=Coord2D  sig=csp ====
int *__thiscall Coord2D::Sub(Coord2D *this, int *a2, _DWORD *a3)
{
  int v3; // edx
  int v5; // ecx

  v3 = *(_DWORD *)this->__pad_0; /*0x487f24*/
  v5 = this->Coord2D_field_0x04 - a3[1]; /*0x487f35*/
  *a2 = v3 - *a3; /*0x487f38*/
  a2[1] = v5; /*0x487f3a*/
  return a2; /*0x487f37*/
}



// ==== 0x00487F40  Rect::Union  this=IUnknown  sig=csp ====
int __stdcall Rect::Union(LPRECT lprcDst, const RECT *lprcSrc1, const RECT *lprcSrc2)
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
    return (int)v4; /*0x488026*/
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
      return (int)v5; /*0x487fec*/
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
      return (int)v15; /*0x487fcf*/
    }
  }
}



// ==== 0x00488030  _DynamicVectorClass_PAVObjectClass::Constructor_VectorClass_ObjectClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall Buffer::Constructor_VectorClass_ObjectClass___(_DynamicVectorClass_PAVObjectClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x488033*/
  *(_DWORD *)this = &VectorClass<ObjectClass *>::`vftable'; /*0x488036*/
  if ( v3 && this->IsAllocated ) /*0x488040*/
  {
    __3_YAXPAX_Z(v3); /*0x488048*/
    this->Items = 0; /*0x488050*/
  }
  this->IsAllocated = 0; /*0x48805b*/
  this->q008 = 0; /*0x488061*/
  if ( (a2 & 1) != 0 ) /*0x488068*/
    __3_YAXPAX_Z(this); /*0x48806b*/
  return this; /*0x488075*/
}



// ==== 0x00488080  CellClass::clearOccupationFlags  this=VectorClass  sig=csp ====
_DWORD *__thiscall CellClass::clearOccupationFlags(CellClass *this, int a2, int a3)
{
  this->foggedObjects = 0; /*0x48808b*/
  this->bridgeOwnerCell = (CellClass *)a2; /*0x48808e*/
  LOBYTE(this->unknown30) = 1; /*0x488091*/
  BYTE1(this->unknown30) = 0; /*0x488095*/
  this->mapCoords[0] = (int)&VectorClass<FoggedObjectClass *>::`vftable'; /*0x488098*/
  if ( a2 ) /*0x48809e*/
  {
    if ( a3 ) /*0x4880a6*/
    {
      this->foggedObjects = (void *)a3; /*0x4880a8*/
      return this->mapCoords; /*0x4880ae*/
    }
    this->foggedObjects = (void *)__2_YAPAXI_Z(4 * a2); /*0x4880bd*/
    BYTE1(this->unknown30) = 1; /*0x4880c0*/
  }
  return this->mapCoords; /*0x4880ad*/
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
int __thiscall sub_4880F0(ObjectClass *this, int a2)
{
  int uniqueId; // ecx
  int abstractFlags; // edx
  int nextArrayIndex; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  void *vtable3; // [esp+8h] [ebp-10h] BYREF
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  if ( !Control::DispatchClick((ControlClass *)this, a2) ) /*0x4880fb*/
    return 0; /*0x488204*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x488110*/
  uniqueId = this->?; /*0x488116*/
  abstractFlags = this->?; /*0x488119*/
  vtable3 = this->?; /*0x48811c*/
  nextArrayIndex = this->?; /*0x488120*/
  v16 = uniqueId; /*0x488123*/
  v17 = abstractFlags; /*0x488127*/
  v18 = nextArrayIndex; /*0x488133*/
  DrawBuildingTilesSHP((int *)&vtable3, 0, 0); /*0x488137*/
  if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x488145*/
    v6 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 13); /*0x48814f*/
  else
    v6 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 26); /*0x48815c*/
  v7 = this->? + 1; /*0x488167*/
  vtable3 = (char *)this->? + 1; /*0x488168*/
  v8 = this->?; /*0x48816c*/
  v16 = v7; /*0x48816f*/
  v9 = this->? - 1; /*0x488177*/
  v17 = v8 - 1; /*0x488178*/
  v18 = v9; /*0x488183*/
  (*(void (__thiscall **)(AudioStream *, void **, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x48818e*/
    g_DSurface_Hidden_2,
    &vtable3,
    v6);
  if ( BYTE1(this->fallRate) ) /*0x488191*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4881a1*/
      v10 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 4); /*0x4881ab*/
    else
      v10 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 8); /*0x4881b8*/
    v11 = this->? + 1; /*0x4881c3*/
    vtable3 = (char *)this->? + 1; /*0x4881c4*/
    v12 = this->?; /*0x4881c8*/
    v16 = v11; /*0x4881cb*/
    v13 = this->? - 1; /*0x4881d3*/
    v17 = v12 - 1; /*0x4881d4*/
    v18 = v13; /*0x4881df*/
    (*(void (__thiscall **)(AudioStream *, void **, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4881ea*/
      g_DSurface_Hidden_2,
      &vtable3,
      v10);
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4881f5*/
  return 1; /*0x4881fd*/
}



// ==== 0x00488210  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_488210(ObjectClass *this, unsigned int a2, _DWORD *a3, int a4)
{
  if ( (a2 & 4) != 0 ) /*0x48821b*/
  {
    if ( BYTE1(this->fallRate) ) /*0x48821d*/
    {
      GadgetClass::Hide((GadgetClass *)this); /*0x488224*/
      return GadgetClass::ProcessMouseOver((ToggleClass *)this, a2, a3, 0); /*0x48823a*/
    }
    GadgetClass::Show((GadgetClass *)this); /*0x48823d*/
  }
  return GadgetClass::ProcessMouseOver((ToggleClass *)this, a2, a3, 0); /*0x488238*/
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
_BYTE *__thiscall sub_488280(CheckListClass *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  ListClass::Construct((int)this, a2, a3, a4, a5, a6, a7, a8, a9); /*0x4882ad*/
  *((_BYTE *)this + 372) = 0; /*0x4882b2*/
  *(_DWORD *)this->__pad_0 = &CheckListClass::`vftable'; /*0x4882b9*/
  return this->__pad_0; /*0x4882c1*/
}



// ==== 0x00488310  CheckListClass::?  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::g_var_1d7b82(CheckListClass *this, int a2)
{
  int v3; // eax

  v3 = __2_YAPAXI_Z(8u); /*0x488315*/
  if ( !v3 ) /*0x48831f*/
    return ListClass::AddItem((ListClass *)this, 0); /*0x48833c*/
  *(_DWORD *)v3 = a2; /*0x488326*/
  *(_BYTE *)(v3 + 4) = 0; /*0x48832a*/
  return ListClass::AddItem((ListClass *)this, v3); /*0x488333*/
}



// ==== 0x00488350  CheckListClass::Clear  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::Clear(CheckListClass *this)
{
  int *v1; // eax

  v1 = (int *)ColorListClass::SetColor((ListClass *)this); /*0x488350*/
  if ( v1 ) /*0x488357*/
    return *v1; /*0x488359*/
  else
    return 0; /*0x48835c*/
}



// ==== 0x00488360  CheckListClass::ScrollUp  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::ScrollUp(CheckListClass *this, int a2)
{
  int *Clamped; // eax

  Clamped = (int *)Array::GetClamped((ListClass *)this, a2); /*0x488365*/
  if ( Clamped ) /*0x48836c*/
    return *Clamped; /*0x48836e*/
  else
    return 0; /*0x488373*/
}



// ==== 0x00488380  CheckListClass::GetSelected  this=CheckListClass  sig=csp ====
void __thiscall CheckListClass::GetSelected(CheckListClass *this, wchar_t *String2)
{
  int v3; // ebx
  const wchar_t **Clamped; // eax
  const wchar_t **v5; // edi

  v3 = 0; /*0x488386*/
  if ( (*(int (__thiscall **)(CheckListClass *))(*(_DWORD *)this->__pad_0 + 148))(this) > 0 ) /*0x488392*/
  {
    while ( 1 ) /*0x48839b*/
    {
      Clamped = (const wchar_t **)Array::GetClamped((ListClass *)this, v3); /*0x48839b*/
      v5 = Clamped; /*0x4883a0*/
      if ( Clamped ) /*0x4883a4*/
      {
        if ( !_wcsicmp(*Clamped, String2) ) /*0x4883aa*/
          break; /*0x4883aa*/
      }
      if ( ++v3 >= (*(int (__thiscall **)(CheckListClass *))(*(_DWORD *)this->__pad_0 + 148))(this) ) /*0x4883c3*/
        return; /*0x4883c3*/
    }
    ListClass::RemoveItem((ListClass *)this, v3); /*0x4883cf*/
    __3_YAXPAX_Z(v5); /*0x4883d5*/
  }
}



// ==== 0x004883F0  CheckListClass::SetItemData  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::SetItemData(CheckListClass *this, wchar_t *String2)
{
  int v3; // edi
  int result; // eax
  const wchar_t **Clamped; // eax

  v3 = 0; /*0x4883f5*/
  result = (*(int (__thiscall **)(CheckListClass *))(*(_DWORD *)this->__pad_0 + 148))(this); /*0x4883f9*/
  if ( result > 0 ) /*0x488401*/
  {
    while ( 1 ) /*0x48840a*/
    {
      Clamped = (const wchar_t **)Array::GetClamped((ListClass *)this, v3); /*0x48840a*/
      if ( Clamped ) /*0x488411*/
      {
        if ( !_wcsicmp(*Clamped, String2) ) /*0x488417*/
          break; /*0x488417*/
      }
      ++v3; /*0x488427*/
      result = (*(int (__thiscall **)(CheckListClass *))(*(_DWORD *)this->__pad_0 + 148))(this); /*0x488428*/
      if ( v3 >= result ) /*0x488430*/
        return result; /*0x488430*/
    }
    return (*(int (__thiscall **)(CheckListClass *, int))(*(_DWORD *)this->__pad_0 + 184))(this, v3); /*0x48843d*/
  }
  return result; /*0x488432*/
}



// ==== 0x004884A0  CheckListClass::GetItem  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::GetItem(CheckListClass *this, int a2, _DWORD *a3, int a4)
{
  int v6; // edi
  int Clamped; // eax
  char v8; // al
  char v9; // bl
  int v10; // eax

  if ( *((_BYTE *)this + 372) ) /*0x4884a3*/
    return 0; /*0x4884ad*/
  v6 = CellClass::DrawWithFlags((ListClass *)this, a2, a3, 0); /*0x4884cb*/
  if ( (a2 & 1) != 0 ) /*0x4884cd*/
  {
    Clamped = Array::GetClamped((ListClass *)this, *((_DWORD *)this + 91)); /*0x4884d8*/
    if ( Clamped ) /*0x4884df*/
      v8 = *(_BYTE *)(Clamped + 4); /*0x4884e1*/
    else
      v8 = 0; /*0x4884e6*/
    v9 = v8 == 0; /*0x4884f3*/
    v10 = Array::GetClamped((ListClass *)this, *((_DWORD *)this + 91)); /*0x4884f6*/
    if ( v10 ) /*0x4884fd*/
    {
      if ( *(_BYTE *)(v10 + 4) != v9 ) /*0x488502*/
      {
        *(_BYTE *)(v10 + 4) = v9; /*0x488504*/
        (*(void (__thiscall **)(CheckListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x48850b*/
      }
    }
  }
  return v6; /*0x4884af*/
}



// ==== 0x00488520  CheckListClass::OnClick  this=CheckListClass  sig=csp ====
size_t *__userpurge CheckListClass::OnClick@<eax>(
        CheckListClass *this,
        const wchar_t *a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  ListClass *v7; // ecx
  ListClass *v8; // esi
  size_t *result; // eax
  int ListClass_field_0x0C; // edi
  int Type; // ebx
  int v12; // ecx
  int v13; // eax
  int ListClass_field_0x10; // eax
  int v15; // eax
  int v16; // [esp-20h] [ebp-114h]
  size_t v17; // [esp-10h] [ebp-104h]
  int v18; // [esp-10h] [ebp-104h]
  _DWORD v19[4]; // [esp+4h] [ebp-F0h] BYREF
  _DWORD v20[2]; // [esp+14h] [ebp-E0h] BYREF
  _BYTE v21[16]; // [esp+1Ch] [ebp-D8h] BYREF
  _WORD v22[100]; // [esp+2Ch] [ebp-C8h] BYREF

  v8 = v7; /*0x488527*/
  result = (size_t *)(*(int (**)(void))(*(_DWORD *)v7->__pad_0 + 148))(); /*0x48852b*/
  if ( (int)this < (int)result )
  {
    result = (size_t *)Array::GetClamped(v8, (int)this); /*0x488543*/
    if ( result )
    {
      memset(&v22[1], 0, 198); /*0x488560*/
      v17 = *result; /*0x48856b*/
      v22[0] = *((_BYTE *)result + 4) != 0 ? 3 : 32;
      v22[1] = 32; /*0x48857e*/
      swprintf(&v22[2], v17, a2); /*0x488585*/
      ListClass_field_0x0C = v8[1].ListClass_field_0x0C; /*0x48858a*/
      Type = BuildingAnim::GetType(); /*0x48859c*/
      if ( a6 ) /*0x4885a7*/
      {
        ListClass_field_0x0C |= 0x2000u; /*0x4885b4*/
        v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * Type) + 796); /*0x4885bd*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4885c9*/
          v13 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v12); /*0x4885d6*/
        else
          v13 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v12); /*0x4885e2*/
        v19[0] = a3; /*0x4885f4*/
        v19[3] = v8[2].ListClass_field_0x0C; /*0x4885fb*/
        v19[1] = a4; /*0x488606*/
        v19[2] = a5; /*0x48860a*/
        (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x488615*/
          g_DSurface_Hidden_2,
          v19,
          v13);
      }
      else if ( (ListClass_field_0x0C & 0x4000) == 0 ) /*0x488620*/
      {
        ListClass_field_0x0C |= 0x1000u; /*0x488622*/
      }
      ListClass_field_0x10 = v8[1].ListClass_field_0x10; /*0x48862f*/
      v20[0] = a3; /*0x488639*/
      v18 = ListClass_field_0x10; /*0x488643*/
      v20[1] = a4; /*0x488644*/
      v16 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * Type); /*0x488659*/
      v15 = (*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x488662*/
              g_DSurface_Hidden_2,
              v21);
      return FillRectangle( /*0x488675*/
               v19,
               (int)v22,
               (int)g_DSurface_Hidden_2,
               v15,
               (int)v20,
               v16,
               0,
               ListClass_field_0x0C,
               a5,
               v18);
    }
  }
  return result; /*0x48867d*/
}



// ==== 0x00488690  GadgetClass::DetachPrimary  this=GadgetClass  sig=csp ====
void COMObject::DetachPrimary(GadgetClass *this)
{
  FootClass_Array.?[1] = 0; /*0x488690*/
}



// ==== 0x004886A0  GadgetClass::GetStateFlag  this=GadgetClass  sig=csp ====
char __thiscall ObjectClass::GetStateFlag(ShpButtonClass *this)
{
  return this->Image; /*0x4886a3*/
}



// ==== 0x004886B0  ListClass::COMStub  this=ListClass  sig=csp ====
int __thiscall CheckListClass::COMStub(ListClass *this)
{
  return *((_DWORD *)this + 17); /*0x4886b3*/
}



// ==== 0x004886C0  CheckListClass::SelectItem  this=CheckListClass  sig=csp ====
char __thiscall CheckListClass::SelectItem(CheckListClass *this, signed int a2)
{
  return ListClass::RemoveItem((ListClass *)this, a2); /*0x4886ca*/
}



// ==== 0x004886D0  CheckListClass::SetFocus  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::SetFocus(CheckListClass *this, unsigned int a2)
{
  return ColorListClass::Clear((ListClass *)this, a2); /*0x4886da*/
}



// ==== 0x004886E0  CheckListClass::QueryInterface  this=CheckListClass  sig=csp ====
unsigned int *__thiscall CheckListClass::QueryInterface(CheckListClass *this, char a2)
{
  void *Clamped; // edi

  *(_DWORD *)this->__pad_0 = &CheckListClass::`vftable'; /*0x4886e3*/
  while ( this->CheckListClass_field_0x44 ) /*0x4886e9*/
  {
    Clamped = (void *)Array::GetClamped((ListClass *)this, 0); /*0x4886fe*/
    ListClass::RemoveItem((ListClass *)this, 0); /*0x488700*/
    __3_YAXPAX_Z(Clamped); /*0x488706*/
  }
  ListClass::Destruct((ListClass *)this); /*0x488718*/
  if ( (a2 & 1) != 0 ) /*0x488722*/
    __3_YAXPAX_Z(this); /*0x488725*/
  return (unsigned int *)this; /*0x48872f*/
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
_DWORD *__thiscall sub_488760(ColorListClass *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  ListClass::Construct((int)this, a2, a3, a4, a5, a6, a7, a8, a9); /*0x48878d*/
  *((_DWORD *)this + 94) = 0; /*0x488799*/
  *((_DWORD *)this + 95) = 0; /*0x48879f*/
  *((_BYTE *)this + 384) = 1; /*0x4887a5*/
  *((_BYTE *)this + 385) = 0; /*0x4887ab*/
  *((_DWORD *)this + 93) = &DynamicVectorClass<int>::`vftable'; /*0x4887b1*/
  *((_DWORD *)this + 98) = 10; /*0x4887bb*/
  *((_DWORD *)this + 97) = 0; /*0x4887c5*/
  this->q019 = 0; /*0x4887cb*/
  *((_DWORD *)this + 99) = 1; /*0x4887d1*/
  *(_DWORD *)this->__pad_0 = &ColorListClass::`vftable'; /*0x4887d7*/
  return this->__pad_0; /*0x4887df*/
}



// ==== 0x004887F0  ColorListClass::method_4887F0  this=ColorListClass  sig=csp ====
int __thiscall sub_4887F0(ColorListClass *this)
{
  int v2; // eax
  char *v3; // esi
  void *v4; // eax

  v2 = *((_DWORD *)this + 93); /*0x4887f5*/
  v3 = (char *)this + 372; /*0x4887fb*/
  *(_DWORD *)this->__pad_0 = &ColorListClass::`vftable'; /*0x488803*/
  (*(void (__thiscall **)(char *))(v2 + 12))((char *)this + 372); /*0x488809*/
  this->q019 = 0; /*0x48880e*/
  v4 = (void *)*((_DWORD *)v3 + 1); /*0x488814*/
  *(_DWORD *)v3 = &VectorClass<int>::`vftable'; /*0x488819*/
  if ( v4 && v3[13] ) /*0x488821*/
  {
    __3_YAXPAX_Z(v4); /*0x488827*/
    *((_DWORD *)v3 + 1) = 0; /*0x48882f*/
  }
  v3[13] = 0; /*0x488834*/
  *((_DWORD *)v3 + 2) = 0; /*0x488837*/
  return ListClass::Destruct((ListClass *)this); /*0x48883f*/
}



// ==== 0x00488850  ColorListClass::GetIndex  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::GetIndex(ColorListClass *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx

  v4 = *((_DWORD *)this + 95); /*0x488854*/
  if ( *((_DWORD *)this + 97) < v4 /*0x488885*/
    || (*((_BYTE *)this + 385) || !v4)
    && (v5 = *((_DWORD *)this + 98), v5 > 0)
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)this + 93) + 8))(
         (char *)this + 372,
         v4 + v5,
         0) )
  {
    v6 = *((_DWORD *)this + 97); /*0x48888c*/
    v7 = *((_DWORD *)this + 94); /*0x48888f*/
    *((_DWORD *)this + 97) = v6 + 1; /*0x488895*/
    *(_DWORD *)(v7 + 4 * v6) = a3; /*0x48889c*/
  }
  return ListClass::AddItem((ListClass *)this, a2); /*0x4888ab*/
}



// ==== 0x004888B0  ColorListClass::AddColor  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::AddColor(ColorListClass *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  result = (*(int (__thiscall **)(char *, int *))(*((_DWORD *)this + 13) + 16))((char *)this + 52, &a2); /*0x4888be*/
  if ( result != -1 ) /*0x4888c4*/
  {
    v4 = *((_DWORD *)this + 97); /*0x4888c6*/
    if ( result < v4 ) /*0x4888ce*/
    {
      v5 = v4 - 1; /*0x4888d0*/
      for ( *((_DWORD *)this + 97) = v5; /*0x4888d9*/
            result < *((_DWORD *)this + 97);
            *(_DWORD *)(*((_DWORD *)this + 94) + 4 * result - 4) = *(_DWORD *)(*((_DWORD *)this + 94) + 4 * result) )
      {
        ++result; /*0x4888e1*/
      }
    }
    return ListClass::Destru_vt43((ListClass *)this, a2); /*0x4888fa*/
  }
  return result; /*0x4888ff*/
}



// ==== 0x00488910  ColorListClass::GetCount  this=ColorListClass  sig=csp ====
void __thiscall ColorListClass::GetCount(ColorListClass *this, signed int a2)
{
  signed int v2; // eax
  int v3; // edx
  signed int v4; // eax

  if ( a2 != -1 ) /*0x488918*/
  {
    v2 = *((_DWORD *)this + 97); /*0x48891a*/
    if ( a2 < v2 ) /*0x488922*/
    {
      v3 = v2 - 1; /*0x488924*/
      v4 = a2; /*0x488927*/
      for ( *((_DWORD *)this + 97) = v3; /*0x488931*/
            v4 < *((_DWORD *)this + 97);
            *(_DWORD *)(*((_DWORD *)this + 94) + 4 * v4 - 4) = *(_DWORD *)(*((_DWORD *)this + 94) + 4 * v4) )
      {
        ++v4; /*0x48893a*/
      }
    }
    ListClass::RemoveItem((ListClass *)this, a2); /*0x48894e*/
  }
}



// ==== 0x00488960  ColorListClass::SetIndex  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::SetIndex(ColorListClass *this, int a2, int a3)
{
  *((_DWORD *)this + 99) = a2; /*0x488968*/
  this->q019 = a3; /*0x48896e*/
  return a2; /*0x488974*/
}



// ==== 0x00488980  ColorListClass::DrawColorRect  this=ColorListClass  sig=csp ====
_DWORD *__thiscall ColorListClass::DrawColorRect(ColorListClass *this, int a2, int a3, int a4, int a5, int a6)
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
    v10 = this->q019; /*0x488a1b*/
    if ( !v10 ) /*0x488a2a*/
      v10 = a2; /*0x488a2c*/
    result = (_DWORD *)*((_DWORD *)this + 99); /*0x488a2e*/
    switch ( (unsigned int)result ) /*0x488a3d*/
    {
      case 0u: /*0x488a3d*/
        v11 = this->q00C; /*0x488a52*/
        v65 = a3; /*0x488a55*/
        v66 = a4; /*0x488a60*/
        v62 = v11; /*0x488a67*/
        v55 = *((_DWORD *)this + 11); /*0x488a72*/
        v12 = (int *)(4 * a2 + *((_DWORD *)this + 14)); /*0x488a80*/
        v48 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(*((_DWORD *)this + 94) + 4 * a2)); /*0x488a89*/
        v13 = (*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x488a9b*/
                g_DSurface_Hidden_2,
                v83);
        result = FillRectangle(&v82, *v12, (int)g_DSurface_Hidden_2, v13, (int)&v65, v48, 0, v55, a5, v62); /*0x488aae*/
        break; /*0x488abd*/
      case 1u: /*0x488a3d*/
        v14 = *((_DWORD *)this + 11); /*0x488ac0*/
        if ( (v14 & 6) != 0 ) /*0x488acc*/
        {
          v72[0] = a3; /*0x488ace*/
          v72[1] = a4; /*0x488ad9*/
          BYTE1(v14) |= 0x20u; /*0x488ae0*/
          v15 = (int *)(*((_DWORD *)this + 14) + 4 * a2); /*0x488ae3*/
          v63 = this->q00C; /*0x488ae9*/
          v56 = v14; /*0x488af2*/
          v49 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v10); /*0x488b01*/
          v16 = (*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x488b13*/
                  g_DSurface_Hidden_2,
                  v85);
          result = FillRectangle(&v81, *v15, (int)g_DSurface_Hidden_2, v16, (int)v72, v49, 0, v56, a5, v63); /*0x488b26*/
        }
        else
        {
          v70[0] = a3; /*0x488b38*/
          v70[1] = a4; /*0x488b43*/
          v17 = (int *)(*((_DWORD *)this + 14) + 4 * a2); /*0x488b4a*/
          v64 = this->q00C; /*0x488b50*/
          v57 = v14; /*0x488b59*/
          v50 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v10); /*0x488b68*/
          v18 = (*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x488b7a*/
                  g_DSurface_Hidden_2,
                  v87);
          result = FillRectangle(&v78, *v17, (int)g_DSurface_Hidden_2, v18, (int)v70, v50, 0, v57, a5, v64); /*0x488b8d*/
        }
        break; /*0x488b35*/
      case 2u: /*0x488a3d*/
        v19 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v10) + 788); /*0x488ba8*/
        v20 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x488bb9*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x488bbf*/
          v21 = *(unsigned __int8 *)(v20 + v19); /*0x488bc3*/
        else
          v21 = *(unsigned __int16 *)(v20 + 2 * v19); /*0x488bca*/
        v22 = *((_DWORD *)this + 19); /*0x488be8*/
        v74[2] = a3 + a5 - 2; /*0x488beb*/
        v74[0] = a3; /*0x488bef*/
        v74[1] = a4; /*0x488bfd*/
        v74[3] = v22 + a4 - 2; /*0x488c01*/
        (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x488c0c*/
          g_DSurface_Hidden_2,
          v74,
          v21);
        v23 = *((_DWORD *)this + 11); /*0x488c1a*/
        v24 = *((_DWORD *)this + 14); /*0x488c24*/
        v25 = *((_DWORD *)this + 94); /*0x488c28*/
        v71 = a3; /*0x488c2e*/
        v72[0] = a4; /*0x488c32*/
        v58 = v23; /*0x488c3b*/
        v51 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v25 + 4 * a2)); /*0x488c51*/
        v26 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x488c5d*/
        result = FillRectangle( /*0x488c71*/
                   &v80,
                   *(_DWORD *)(4 * a2 + v24),
                   (int)g_DSurface_Hidden_2,
                   v26,
                   (int)v84,
                   (int)&v71,
                   v51,
                   0,
                   v58,
                   a6);
        break; /*0x488c80*/
      case 3u: /*0x488a3d*/
        v27 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v10) + 788); /*0x488c91*/
        v28 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4); /*0x488c9c*/
        if ( (*((_BYTE *)this + 44) & 6) != 0 ) /*0x488c9f*/
        {
          v29 = v28 == 1; /*0x488ca5*/
          v30 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x488ca8*/
          if ( v29 ) /*0x488cae*/
            v31 = *(unsigned __int8 *)(v30 + v27); /*0x488cb2*/
          else
            v31 = *(unsigned __int16 *)(v30 + 2 * v27); /*0x488cb9*/
          v32 = *((_DWORD *)this + 19); /*0x488cd2*/
          v75[2] = a5; /*0x488cd5*/
          v75[0] = a3; /*0x488ce0*/
          v75[1] = a4; /*0x488ce4*/
          v75[3] = v32; /*0x488ce8*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x488cf3*/
            g_DSurface_Hidden_2,
            v75,
            v31);
          v33 = *((_DWORD *)this + 11); /*0x488d01*/
          v34 = *((_DWORD *)this + 14); /*0x488d0b*/
          v35 = *((_DWORD *)this + 94); /*0x488d0f*/
          BYTE1(v33) |= 0x20u; /*0x488d15*/
          v69 = a3; /*0x488d18*/
          v70[0] = a4; /*0x488d1c*/
          v59 = v33; /*0x488d25*/
          v52 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v35 + 4 * a2)); /*0x488d3b*/
          v36 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x488d47*/
          result = FillRectangle( /*0x488d5b*/
                     &v77,
                     *(_DWORD *)(4 * a2 + v34),
                     (int)g_DSurface_Hidden_2,
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
          v37 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x488d70*/
          if ( v29 ) /*0x488d76*/
            v38 = *(unsigned __int8 *)(v37 + v27); /*0x488d7a*/
          else
            v38 = *(unsigned __int16 *)(v37 + 2 * v27); /*0x488d81*/
          v39 = *((_DWORD *)this + 19) - 1; /*0x488d9e*/
          v76[2] = a5 - 1; /*0x488d9f*/
          v76[0] = a3; /*0x488daa*/
          v76[1] = a4; /*0x488dae*/
          v76[3] = v39; /*0x488db2*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x488dc0*/
            g_DSurface_Hidden_2,
            v76,
            v38);
          v40 = *((_DWORD *)this + 11); /*0x488dce*/
          v41 = *((_DWORD *)this + 14); /*0x488dd8*/
          v42 = *((_DWORD *)this + 94); /*0x488ddc*/
          v68[0] = a3; /*0x488de2*/
          v68[1] = a4; /*0x488de6*/
          v60 = v40; /*0x488def*/
          v53 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v42 + 4 * a2)); /*0x488e05*/
          v43 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x488e11*/
          result = FillRectangle( /*0x488e25*/
                     &v79,
                     *(_DWORD *)(4 * a2 + v41),
                     (int)g_DSurface_Hidden_2,
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
        v44 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(*((_DWORD *)this + 94) + 4 * a2)) /*0x488e4e*/
                        + 788);
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x488e5a*/
          v45 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v44); /*0x488e67*/
        else
          v45 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v44); /*0x488e73*/
        v73[0] = a3; /*0x488e85*/
        v73[1] = a4; /*0x488e90*/
        v46 = *((_DWORD *)this + 19); /*0x488e94*/
        v73[2] = a5; /*0x488e97*/
        v73[3] = v46; /*0x488ea2*/
        result = (*(_DWORD *(__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x488ead*/
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
    v7 = *((_DWORD *)this + 14); /*0x4889ad*/
    v65 = a3; /*0x4889b0*/
    v66 = a4; /*0x4889b4*/
    v61 = this->q00C; /*0x4889c9*/
    v54 = *((_DWORD *)this + 11); /*0x4889d6*/
    v47 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(*((_DWORD *)this + 94) + 4 * a2)); /*0x4889ef*/
    v8 = (*(int (__thiscall **)(AudioStream *, _DWORD *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x4889f8*/
           g_DSurface_Hidden_2,
           v73);
    return FillRectangle(&v67, *(_DWORD *)(4 * a2 + v7), (int)g_DSurface_Hidden_2, v8, (int)&v65, v47, 0, v54, a5, v61); /*0x488a09*/
  }
  return result; /*0x488a0e*/
}



// ==== 0x00488EE0  ColorListClass::GetColor  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::GetColor(ColorListClass *this, int a2)
{
  return (*(int (__thiscall **)(ColorListClass *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 204))(this, a2, 0); /*0x488eef*/
}



// ==== 0x00488F00  ColorListClass::QueryInterface  this=ColorListClass  sig=csp ====
char *__thiscall ColorListClass::QueryInterface(ColorListClass *this, char a2)
{
  int v3; // eax
  char *v4; // esi
  void *v5; // eax

  v3 = *((_DWORD *)this + 93); /*0x488f05*/
  v4 = (char *)this + 372; /*0x488f0b*/
  *(_DWORD *)this->__pad_0 = &ColorListClass::`vftable'; /*0x488f13*/
  (*(void (__thiscall **)(char *))(v3 + 12))((char *)this + 372); /*0x488f19*/
  this->q019 = 0; /*0x488f1e*/
  v5 = (void *)*((_DWORD *)v4 + 1); /*0x488f24*/
  *(_DWORD *)v4 = &VectorClass<int>::`vftable'; /*0x488f29*/
  if ( v5 && v4[13] ) /*0x488f31*/
  {
    __3_YAXPAX_Z(v5); /*0x488f37*/
    *((_DWORD *)v4 + 1) = 0; /*0x488f3f*/
  }
  v4[13] = 0; /*0x488f44*/
  *((_DWORD *)v4 + 2) = 0; /*0x488f47*/
  ListClass::Destruct((ListClass *)this); /*0x488f4a*/
  if ( (a2 & 1) != 0 ) /*0x488f54*/
    __3_YAXPAX_Z(this); /*0x488f57*/
  return this->__pad_0; /*0x488f61*/
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
int __fastcall ComputeTechnoClassDamageFalloff(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax
  double v7; // st7
  int v8; // eax
  int v9; // eax
  float v10; // [esp+8h] [ebp-Ch]
  float v11; // [esp+Ch] [ebp-8h]

  v4 = a1; /*0x489184*/
  if ( !a1 || (dword_A8B230->vtable0 & 0x20) != 0 || !a2 ) /*0x4891a5*/
    return 0; /*0x489263*/
  if ( a1 < 0 )
    return a4 >= 8 ? 0 : a1;
  v7 = (double)a1; /*0x4891c6*/
  v10 = v7; /*0x4891ca*/
  v11 = v7 * *(float *)(a2 + 300); /*0x4891d4*/
  LOWORD(v8) = Math::RoundToInt(*(float *)(a2 + 292) * 256.0); /*0x4891e4*/
  if ( v11 != v10 && v8 ) /*0x489200*/
  {
    LOWORD(v9) = Math::RoundToInt((v10 - v11) * (double)(v8 - a4) / (double)v8 + v11); /*0x489220*/
    v4 = v9; /*0x489225*/
  }
  LOWORD(result) = Math::RoundToInt((double)(v4 <= 0 ? 0 : v4) * *(double *)(a2 + 8 * a3 + 160));
  if ( result >= dword_8871E0->IRepairRate[0] ) /*0x489257*/
    return dword_8871E0->IRepairRate[0]; /*0x48925a*/
  return result; /*0x4891b8*/
}



// ==== 0x00489270  ObjectClass::CellChainReact  this=ObjectClass  sig=csp ====
void CellChainReact(ObjectClass *this)
{
  ; /*0x489270*/
}



// ==== 0x00489280  PlaySoundEffectAt  this=-  sig=csp ====
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
  i... [26608 chars total]



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
    && (*((_DWORD *)Coord::To_Cell(&dword_87F7E8, a4) + 80) & 0x100) == 0
    && a4[2] < Cell::GetGroundHeight(a4) + 2 * dword_89E870 )
  {
    v6 = *((_DWORD *)dword_8871E0 + 756); /*0x48a557*/
    if ( v6 ) /*0x48a55f*/
    {
      v7 = 35 * v6 - 1; /*0x48a56e*/
      if ( v4 < v7 ) /*0x48a574*/
        v7 = v4; /*0x48a576*/
      return *(_DWORD *)(*((_DWORD *)dword_8871E0 + 753) + 4 * (v7 / 35)); /*0x48a597*/
    }
    return 0; /*0x48a61a*/
  }
  if ( a2 == *((_DWORD *)dword_8871E0 + 1517) ) /*0x48a5a5*/
    return *((_DWORD *)dword_8871E0 + 189); /*0x48a5b0*/
  v9 = *(_DWORD *)(a2 + 276); /*0x48a5b3*/
  if ( !v9 ) /*0x48a5bb*/
    return 0; /*0x48a5bb*/
  if ( *(_BYTE *)(a2 + 340) ) /*0x48a5bd*/
    return *(_DWORD *)(*(_DWORD *)(a2 + 264) + 4 * Random::Range((_DWORD *)dword_A8B230 + 134, 0, v9 - 1)); /*0x48a5e4*/
  v10 = 25 * v9 - 1; /*0x48a5ee*/
  if ( v4 >= v10 ) /*0x48a5f4*/
    v4 = v10; /*0x48a5f6*/
  return *(_DWORD *)(*(_DWORD *)(a2 + 264) + 4 * (v4 / 25)); /*0x48a57d*/
}



// ==== 0x0048A620  CreateSmokeEffectAt  this=Coord  sig=csp ====
char __fastcall CreateSmokeEffectAt(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  wchar_t *v7; // eax
  double v10; // st7
  int v11; // eax
  int v12; // esi
  ObjectClass *v13; // eax

  LOBYTE(v7) = dword_A8EB78; /*0x48a620*/
  if ( dword_A8EB78 && (v7 = (wchar_t *)PingPongBuffer::GetWriteOffset(), dword_ABCD44 >= v7) || (a7 & 0xF) != 0 ) /*0x48a644*/
  {
    LOBYTE(v7) = a6; /*0x48a64a*/
    if ( a6 || a2 && (LOBYTE(v7) = *(_BYTE *)(a2 + 336), (_BYTE)v7) ) /*0x48a662*/
    {
      v10 = *(float *)(a2 + 316); /*0x48a668*/
      if ( v10 <= 0.0 ) /*0x48a679*/
      {
        v12 = (char)(a1 >> 2); /*0x48a6a2*/
        if ( v12 < 63 ) /*0x48a6aa*/
        {
          if ( v12 <= 21 ) /*0x48a6b6*/
            v12 = 21; /*0x48a6b8*/
        }
        else
        {
          v12 = 63; /*0x48a6ac*/
        }
      }
      else
      {
        if ( v10 > 1.0 ) /*0x48a686*/
          v10 = 1.0; /*0x48a68a*/
        LOWORD(v11) = Math::RoundToInt(v10 * 63.0); /*0x48a696*/
        v12 = v11; /*0x48a69b*/
      }
      v13 = (ObjectClass *)__2_YAPAXI_Z(0x18u); /*0x48a6bf*/
      if ( v13 ) /*0x48a6c9*/
      {
        v7 = (wchar_t *)ObjectClass::RegisterInArray(v13, a3, a4, a5, v12); /*0x48a6e7*/
        *((_DWORD *)v7 + 5) |= a7; /*0x48a6ec*/
      }
      else
      {
        MEMORY[0x14] |= a7; /*0x48a6f7*/
        LOBYTE(v7) = 0; /*0x48a6f5*/
      }
    }
  }
  return (char)v7; /*0x48a6ef*/
}



// ==== 0x0048A8D0  ComputeMathFacingAngle  this=-  sig=csp ====
int __fastcall ComputeMathFacingAngle(char a1, int a2, int a3, int a4, double a5, _DWORD *a6)
{
  double v6; // kr00_8
  int result; // eax
  char v11; // c0
  int v12[2]; // [esp+10h] [ebp-8h] BYREF

  v6 = a5; /*0x48a8df*/
  if ( SolveMathTrajectory(a1, a2, a3, a4, a5, (int)&a5) ) /*0x48a8f8*/
  {
    if ( a1 ) /*0x48a907*/
    {
      LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a91e*/
      result = (int)a6; /*0x48a923*/
      *a6 = a4; /*0x48a92d*/
      LOBYTE(result) = 1; /*0x48a930*/
    }
    else
    {
      SolveMathTrajectory(0, a2, a3 + 1, a4, v6, (int)v12); /*0x48a94f*/
      if ( v11 ) /*0x48a965*/
      {
        LOWORD(a4) = Math::RoundToInt((-a5 - 1.570796326794897) * -10430.06004058427); /*0x48a97e*/
        result = a4; /*0x48a983*/
      }
      else
      {
        LOWORD(result) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a9a1*/
        LOWORD(a4) = result; /*0x48a9aa*/
      }
      *a6 = a4; /*0x48a989*/
      LOBYTE(result) = 1; /*0x48a98c*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x48a9c4*/
  }
  return result; /*0x48a92b*/
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
__int64 __thiscall TechnoClass::ComputeScanRange(TechnoClass *this, double a2)
{
  double v2; // st7
  __int64 result; // rax
  int v4; // kr00_4
  double v5; // [esp+0h] [ebp-Ch]
  TechnoClass *v6; // [esp+8h] [ebp-4h]

  v6 = this; /*0x48ab91*/
  __asm /*0x48ab98*/
  {
    fild [esp+0Ch+var_4]
    fmul [esp+0Ch+arg_0]
    fmul ds:dbl_7E5190
    fstp [esp+0Ch+var_C]; double
  }
  Math::Sqrt(v5); /*0x48aba9*/
  v4 = Math::RoundToInt(v2); /*0x48abae*/
  WORD2(result) = HIWORD(v4); /*0x48abae*/
  LOWORD(result) = v4; /*0x48abae*/
  return result; /*0x48abb6*/
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
  return (double)*((int *)dword_8871E0 + 1454) * 0.5; /*0x48ad01*/
}



// ==== 0x0048AD10  _DynamicVectorClass_PAUDamageGroup::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_DamageGroup::Destroy(_DynamicVectorClass_PAUDamageGroup *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x48ad16*/
  this->m_10 = 0; /*0x48ad19*/
  if ( v2 && BYTE1(this->m_C) ) /*0x48ad20*/
  {
    __3_YAXPAX_Z(v2); /*0x48ad26*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x48ad2e*/
  }
  BYTE1(this->m_C) = 0; /*0x48ad31*/
  this->m_8 = 0; /*0x48ad34*/
}



// ==== 0x0048AD40  _DynamicVectorClass_PAUDamageGroup::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_DamageGroup::GetItemIndex(_DynamicVectorClass_PAUDamageGroup *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x48ad40*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x48ad55*/
  else
    return 0; /*0x48ad47*/
}



// ==== 0x0048AD60  _VectorClass_PAUDamageGroup::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_DamageGroup::Clear(_VectorClass_PAUDamageGroup *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x48ad6a*/
}



// ==== 0x0048AD70  _VectorClass_PAUDamageGroup::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_DamageGroup::AddRef(_VectorClass_PAUDamageGroup *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x48ad72*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x48ad7d*/
  {
    v3 = 0; /*0x48ad7f*/
    if ( m_8 <= 0 ) /*0x48ad83*/
      return 1; /*0x48ada3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x48ad85*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x48ad8b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x48ad94*/
    {
      ++v3; /*0x48ad96*/
      ++v4; /*0x48ad97*/
      if ( v3 >= m_8 ) /*0x48ad9c*/
        return 1; /*0x48ad9c*/
    }
  }
  return 0; /*0x48ad9e*/
}



// ==== 0x0048ADB0  _VectorClass_PAUDamageGroup::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_DamageGroup::Remove(_VectorClass_PAUDamageGroup *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x48adbc*/
  {
    LOBYTE(this->m_C) = 0; /*0x48adc6*/
    if ( a3 ) /*0x48adcc*/
      v4 = a3; /*0x48ade2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x48adde*/
    LOBYTE(this->m_C) = 1; /*0x48ade6*/
    if ( v4 ) /*0x48adea*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x48adf5*/
      {
        m_8 = this->m_8; /*0x48adfc*/
        if ( a2 < m_8 ) /*0x48ae01*/
          m_8 = a2; /*0x48ae03*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x48ae09*/
          ++i; /*0x48ae0e*/
        if ( BYTE1(this->m_C) ) /*0x48ae1b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x48ae26*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x48ae2e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x48ae37*/
      this->m_8 = a2; /*0x48ae3f*/
      BYTE1(this->m_C) = a3 == 0; /*0x48ae42*/
      return 1; /*0x48ae48*/
    }
    else
    {
      return 0; /*0x48adef*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUDamageGroup *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x48ae52*/
    return 1; /*0x48ae58*/
  }
}



// ==== 0x0048AE60  _VectorClass_PAUDamageGroup::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_DamageGroup::ddtor(_VectorClass_PAUDamageGroup *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x48ae6d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x48ae73*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x48ae7b*/
  }
  BYTE1(this->m_C) = 0; /*0x48ae7e*/
  this->m_8 = 0; /*0x48ae81*/
}



// ==== 0x0048AE90  _VectorClass_PAUDamageGroup::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_DamageGroup::GetSize(_VectorClass_PAUDamageGroup *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x48ae90*/
    return 0; /*0x48ae98*/
  m_8 = this->m_8; /*0x48ae9e*/
  result = 0; /*0x48aea1*/
  if ( m_8 <= 0 ) /*0x48aea5*/
    return -1; /*0x48aebc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x48aeab*/
  {
    if ( ++result >= m_8 ) /*0x48aeba*/
      return -1; /*0x48aeba*/
  }
  return result; /*0x48ae9a*/
}



// ==== 0x0048AED0  _VectorClass_PAUDamageGroup::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_DamageGroup::Get(_VectorClass_PAUDamageGroup *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x48aed0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x48aee5*/
  else
    return 0; /*0x48aed7*/
}



// ==== 0x0048AEF0  _DynamicVectorClass_PAUDamageGroup::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_DamageGroup::SetCapacity(_DynamicVectorClass_PAUDamageGroup *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x48aefc*/
  {
    LOBYTE(this->m_C) = 0; /*0x48af02*/
    if ( a3 ) /*0x48af08*/
      v4 = a3; /*0x48af1e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x48af1a*/
    LOBYTE(this->m_C) = 1; /*0x48af22*/
    if ( !v4 ) /*0x48af26*/
      return 0; /*0x48af9a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x48af28*/
    {
      m_8 = this->m_8; /*0x48af2f*/
      if ( a2 < m_8 ) /*0x48af34*/
        m_8 = a2; /*0x48af36*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x48af3c*/
        ++i; /*0x48af41*/
      if ( BYTE1(this->m_C) ) /*0x48af4e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x48af59*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x48af61*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x48af6a*/
    this->m_8 = a2; /*0x48af72*/
    BYTE1(this->m_C) = a3 == 0; /*0x48af75*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUDamageGroup *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x48af7e*/
  }
  v7 = this->m_8; /*0x48af81*/
  if ( v7 < this->m_10 ) /*0x48af89*/
    this->m_10 = v7; /*0x48af8b*/
  return 1; /*0x48af8e*/
}



// ==== 0x0048AFA0  _DynamicVectorClass_PAUDamageGroup::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_DamageGroup::FindItemIndex(_DynamicVectorClass_PAUDamageGroup *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x48afa0*/
  result = 0; /*0x48afa3*/
  if ( m_10 <= 0 ) /*0x48afa8*/
    return -1; /*0x48afbf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x48afae*/
  {
    if ( ++result >= m_10 ) /*0x48afbd*/
      return -1; /*0x48afbd*/
  }
  return result; /*0x48afc2*/
}



// ==== 0x0048AFD0  _VectorClass_PAUDamageGroup::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_DamageGroup::Add(_VectorClass_PAUDamageGroup *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x48afd3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DamageGroup *>::`vftable'; /*0x48afd6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x48afe0*/
  {
    __3_YAXPAX_Z(v3); /*0x48afe8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x48aff0*/
  }
  BYTE1(this->m_C) = 0; /*0x48affb*/
  this->m_8 = 0; /*0x48b001*/
  if ( (a2 & 1) != 0 ) /*0x48b008*/
    __3_YAXPAX_Z(this); /*0x48b00b*/
  return this->__pad_0; /*0x48b015*/
}



// ==== 0x0048B020  _DynamicVectorClass_PAUDamageGroup::Constructor_VectorClass_DamageGroup___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_DamageGroup::Constructor_VectorClass_DamageGroup___(
        _DynamicVectorClass_PAUDamageGroup *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x48b023*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DamageGroup *>::`vftable'; /*0x48b026*/
  if ( v3 && BYTE1(this->m_C) ) /*0x48b030*/
  {
    __3_YAXPAX_Z(v3); /*0x48b038*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x48b040*/
  }
  BYTE1(this->m_C) = 0; /*0x48b04b*/
  this->m_8 = 0; /*0x48b051*/
  if ( (a2 & 1) != 0 ) /*0x48b058*/
    __3_YAXPAX_Z(this); /*0x48b05b*/
  return this->__pad_0; /*0x48b065*/
}



// ==== 0x0048B070  VectorClass::sub_48B070  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_48B070(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x48b07b*/
  this->Capacity = a2; /*0x48b07e*/
  this->IsInitialized = 1; /*0x48b081*/
  this->IsAllocated = 0; /*0x48b085*/
  this->vtable0 = &VectorClass<DamageGroup *>::`vftable'; /*0x48b088*/
  if ( a2 ) /*0x48b08e*/
  {
    if ( a3 ) /*0x48b096*/
    {
      this->Items = (void *)a3; /*0x48b098*/
      return &this->vtable0; /*0x48b09e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x48b0ad*/
    this->IsAllocated = 1; /*0x48b0b0*/
  }
  return &this->vtable0; /*0x48b09d*/
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
_DWORD *__thiscall sub_48B0E0(CommBufferClass *this, int a2, int a3, size_t Size, int a5)
{
  int v6; // ebx
  int v7; // edi
  int v8; // ebx
  int v9; // edi

  *(_DWORD *)this->__pad_0 = &CommBufferClass::`vftable'; /*0x48b0fd*/
  *(_DWORD *)&this->__pad_0[4] = a2; /*0x48b103*/
  this->CommBufferClass_field_0x8 = a3; /*0x48b106*/
  *(_DWORD *)this->__pad_C = Size; /*0x48b109*/
  this->CommBufferClass_field_0x10 = (AbstractClass *)a5; /*0x48b10c*/
  this->CommBufferClass_field_0x24 = __2_YAPAXI_Z(36 * a2); /*0x48b117*/
  this->CommBufferClass_field_0x34 = __2_YAPAXI_Z(24 * a3); /*0x48b123*/
  *(_DWORD *)&this->__pad_28[8] = __2_YAPAXI_Z(4 * a2); /*0x48b13a*/
  this->q010 = __2_YAPAXI_Z(4 * a3); /*0x48b143*/
  v6 = 0; /*0x48b14c*/
  if ( *(int *)&this->__pad_0[4] > 0 ) /*0x48b150*/
  {
    v7 = 0; /*0x48b152*/
    do /*0x48b191*/
    {
      *(_DWORD *)(this->CommBufferClass_field_0x24 + v7 + 20) = __2_YAPAXI_Z(Size); /*0x48b160*/
      if ( (int)this->CommBufferClass_field_0x10 <= 0 ) /*0x48b169*/
        *(_DWORD *)(this->CommBufferClass_field_0x24 + v7 + 28) = 0; /*0x48b180*/
      else
        *(_DWORD *)(this->CommBufferClass_field_0x24 + v7 + 28) = __2_YAPAXI_Z((size_t)this->CommBufferClass_field_0x10); /*0x48b177*/
      ++v6; /*0x48b18b*/
      v7 += 36; /*0x48b18c*/
    }
    while ( v6 < *(_DWORD *)&this->__pad_0[4] ); /*0x48b191*/
  }
  v8 = 0; /*0x48b196*/
  if ( this->CommBufferClass_field_0x8 > 0 ) /*0x48b19a*/
  {
    v9 = 0; /*0x48b19c*/
    do /*0x48b1db*/
    {
      *(_DWORD *)(v9 + this->CommBufferClass_field_0x34 + 12) = __2_YAPAXI_Z(Size); /*0x48b1aa*/
      if ( (int)this->CommBufferClass_field_0x10 <= 0 ) /*0x48b1b3*/
        *(_DWORD *)(v9 + this->CommBufferClass_field_0x34 + 20) = 0; /*0x48b1ca*/
      else
        *(_DWORD *)(v9 + this->CommBufferClass_field_0x34 + 20) = __2_YAPAXI_Z((size_t)this->CommBufferClass_field_0x10); /*0x48b1c1*/
      ++v8; /*0x48b1d5*/
      v9 += 24; /*0x48b1d6*/
    }
    while ( v8 < this->CommBufferClass_field_0x8 ); /*0x48b1db*/
  }
  Struct::ClearAllMemberFlags((Struct *)this); /*0x48b1df*/
  return this->__pad_0; /*0x48b1e6*/
}



// ==== 0x0048B1F0  CommBufferClass::method_48B1F0  this=CommBufferClass  sig=csp ====
void __thiscall sub_48B1F0(CommBufferClass *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int CommBufferClass_field_0x24; // edx
  int v6; // ebx
  int v7; // edi
  int CommBufferClass_field_0x34; // edx

  v2 = 0; /*0x48b1f4*/
  v3 = *(_DWORD *)&this->__pad_0[4]; /*0x48b1f7*/
  *(_DWORD *)this->__pad_0 = &CommBufferClass::`vftable'; /*0x48b1fa*/
  if ( v3 > 0 ) /*0x48b202*/
  {
    v4 = 0; /*0x48b204*/
    do /*0x48b233*/
    {
      __3_YAXPAX_Z(*(void **)(this->CommBufferClass_field_0x24 + v4 + 20)); /*0x48b20e*/
      CommBufferClass_field_0x24 = this->CommBufferClass_field_0x24; /*0x48b213*/
      if ( *(_DWORD *)(CommBufferClass_field_0x24 + v4 + 28) ) /*0x48b219*/
        __3_YAXPAX_Z(*(void **)(CommBufferClass_field_0x24 + v4 + 28)); /*0x48b222*/
      ++v2; /*0x48b22d*/
      v4 += 36; /*0x48b22e*/
    }
    while ( v2 < *(_DWORD *)&this->__pad_0[4] ); /*0x48b233*/
  }
  v6 = 0; /*0x48b238*/
  if ( this->CommBufferClass_field_0x8 > 0 ) /*0x48b23c*/
  {
    v7 = 0; /*0x48b23e*/
    do /*0x48b26d*/
    {
      __3_YAXPAX_Z(*(void **)(this->CommBufferClass_field_0x34 + v7 + 12)); /*0x48b248*/
      CommBufferClass_field_0x34 = this->CommBufferClass_field_0x34; /*0x48b24d*/
      if ( *(_DWORD *)(CommBufferClass_field_0x34 + v7 + 20) ) /*0x48b253*/
        __3_YAXPAX_Z(*(void **)(CommBufferClass_field_0x34 + v7 + 20)); /*0x48b25c*/
      ++v6; /*0x48b267*/
      v7 += 24; /*0x48b268*/
    }
    while ( v6 < this->CommBufferClass_field_0x8 ); /*0x48b26d*/
  }
  __3_YAXPAX_Z((void *)this->CommBufferClass_field_0x24); /*0x48b273*/
  __3_YAXPAX_Z((void *)this->CommBufferClass_field_0x34); /*0x48b27c*/
  __3_YAXPAX_Z(*(void **)&this->__pad_28[8]); /*0x48b285*/
  __3_YAXPAX_Z(*((void **)this + 16)); /*0x48b28e*/
}



// ==== 0x0048B2A0  Struct::ClearAllMemberFlags  this=Struct  sig=csp ====
int __thiscall Struct::ClearAllMemberFlags(Struct *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // edi
  int result; // eax
  int v6; // esi
  _DWORD *v7; // edi

  v1 = *((_DWORD *)this + 1); /*0x48b2a0*/
  v2 = 0; /*0x48b2a7*/
  *((_DWORD *)this + 11) = 0; /*0x48b2ac*/
  *((_DWORD *)this + 15) = 0; /*0x48b2af*/
  *((_DWORD *)this + 5) = 0; /*0x48b2b2*/
  *((_DWORD *)this + 6) = 0; /*0x48b2b5*/
  *((_DWORD *)this + 7) = 0; /*0x48b2b8*/
  *((_DWORD *)this + 8) = 0; /*0x48b2bb*/
  *((_DWORD *)this + 10) = 0; /*0x48b2be*/
  *((_DWORD *)this + 14) = 0; /*0x48b2c1*/
  if ( v1 > 0 ) /*0x48b2c4*/
  {
    v3 = 0; /*0x48b2c6*/
    do /*0x48b327*/
    {
      *(_DWORD *)(v3 + *((_DWORD *)this + 9)) &= ~1u; /*0x48b2d2*/
      *(_DWORD *)(v3 + *((_DWORD *)this + 9)) &= ~2u; /*0x48b2de*/
      v4 = (_DWORD *)(v3 + *((_DWORD *)this + 9)); /*0x48b2e3*/
      v3 += 36; /*0x48b2e5*/
      ++v2; /*0x48b2ed*/
      *v4 &= ~4u; /*0x48b2ee*/
      *(_DWORD *)(v3 + *((_DWORD *)this + 9) - 32) = 0; /*0x48b2f3*/
      *(_DWORD *)(v3 + *((_DWORD *)this + 9) - 28) = 0; /*0x48b2fa*/
      *(_DWORD *)(v3 + *((_DWORD *)this + 9) - 24) = 0; /*0x48b301*/
      *(_DWORD *)(v3 + *((_DWORD *)this + 9) - 20) = 0; /*0x48b308*/
      *(_DWORD *)(v3 + *((_DWORD *)this + 9) - 12) = 0; /*0x48b30f*/
      *(_WORD *)(v3 + *((_DWORD *)this + 9) - 4) = 0; /*0x48b316*/
      *(_DWORD *)(*((_DWORD *)this + 12) + 4 * v2 - 4) = 0; /*0x48b31e*/
    }
    while ( v2 < *((_DWORD *)this + 1) ); /*0x48b327*/
  }
  result = *((_DWORD *)this + 2); /*0x48b329*/
  v6 = 0; /*0x48b32c*/
  if ( result > 0 ) /*0x48b330*/
  {
    result = 0; /*0x48b332*/
    do /*0x48b37d*/
    {
      *(_DWORD *)(result + *((_DWORD *)this + 13)) &= ~1u; /*0x48b33e*/
      *(_DWORD *)(result + *((_DWORD *)this + 13)) &= ~2u; /*0x48b34a*/
      v7 = (_DWORD *)(result + *((_DWORD *)this + 13)); /*0x48b34f*/
      result += 24; /*0x48b351*/
      ++v6; /*0x48b359*/
      *v7 &= ~4u; /*0x48b35a*/
      *(_DWORD *)(*((_DWORD *)this + 13) + result - 20) = 0; /*0x48b35f*/
      *(_DWORD *)(*((_DWORD *)this + 13) + result - 16) = 0; /*0x48b366*/
      *(_DWORD *)(*((_DWORD *)this + 13) + result - 8) = 0; /*0x48b36d*/
      *(_DWORD *)(*((_DWORD *)this + 16) + 4 * v6 - 4) = 0; /*0x48b374*/
    }
    while ( v6 < *((_DWORD *)this + 2) ); /*0x48b37d*/
  }
  *((_DWORD *)this + 17) = 0; /*0x48b381*/
  *((_DWORD *)this + 18) = 0; /*0x48b384*/
  *((_DWORD *)this + 19) = 0; /*0x48b387*/
  *((_DWORD *)this + 21) = 0; /*0x48b38a*/
  return result; /*0x48b37f*/
}



// ==== 0x0048B390  EventClass::serializeEvent  this=EventClass  sig=csp ====
int __thiscall EventClass::serializeEvent(EventClass *this)
{
  int result; // eax
  int v2; // esi
  _DWORD *v3; // edx

  result = (int)this->EventClass_field_0x4; /*0x48b390*/
  v2 = 0; /*0x48b397*/
  this->EventClass_field_0x28 = 0; /*0x48b39b*/
  if ( result > 0 ) /*0x48b39e*/
  {
    result = 0; /*0x48b3a1*/
    do /*0x48b402*/
    {
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result) &= ~1u; /*0x48b3ad*/
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result) &= ~2u; /*0x48b3b9*/
      v3 = (char *)this->EventClass_field_0x24 + result; /*0x48b3be*/
      result += 36; /*0x48b3c0*/
      ++v2; /*0x48b3c8*/
      *v3 &= ~4u; /*0x48b3c9*/
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result - 32) = 0; /*0x48b3ce*/
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result - 28) = 0; /*0x48b3d5*/
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result - 24) = 0; /*0x48b3dc*/
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result - 20) = 0; /*0x48b3e3*/
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result - 12) = 0; /*0x48b3ea*/
      *(_WORD *)((char *)this->EventClass_field_0x24 + result - 4) = 0; /*0x48b3f1*/
      *((_DWORD *)this->EventClass_field_0x30 + v2 - 1) = 0; /*0x48b3f9*/
    }
    while ( v2 < (int)this->EventClass_field_0x4 ); /*0x48b402*/
  }
  return result; /*0x48b405*/
}



// ==== 0x0048B410  ConnectionClass::queueSendPacket  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::queueSendPacket(
        ModemConnectionClass *this,
        const void *a2,
        signed int a3,
        const void *a4,
        signed int a5,
        __int16 a6)
{
  int PlayerIndex; // eax
  int v8; // esi
  int v9; // ebx
  _BYTE *i; // edi
  int v12; // eax
  int v13; // ecx

  PlayerIndex = this->PlayerIndex; /*0x48b418*/
  v8 = this->PhoneNumber[4]; /*0x48b41c*/
  if ( v8 == PlayerIndex || a3 > this->LastPacketTime ) /*0x48b42b*/
  {
    if ( v8 == PlayerIndex ) /*0x48b52f*/
    {
      Debug::Log(); /*0x48b536*/
      return 0; /*0x48b544*/
    }
    Debug::Log(); /*0x48b552*/
    return 0; /*0x48b552*/
  }
  v9 = 0; /*0x48b433*/
  if ( PlayerIndex <= 0 ) /*0x48b437*/
    return 0; /*0x48b437*/
  for ( i = (_BYTE *)this->PhoneNumber[3]; (*i & 1) != 0; i += 36 ) /*0x48b440*/
  {
    if ( ++v9 >= PlayerIndex ) /*0x48b44d*/
      return 0; /*0x48b455*/
  }
  if ( v9 == -1 ) /*0x48b45b*/
    return 0; /*0x48b55d*/
  v12 = 36 * v9; /*0x48b464*/
  *(_DWORD *)(this->PhoneNumber[3] + v12) = *(_DWORD *)(this->PhoneNumber[3] + 36 * v9) | 1; /*0x48b46d*/
  *(_DWORD *)(36 * v9 + this->PhoneNumber[3]) &= ~2u; /*0x48b47a*/
  *(_DWORD *)(36 * v9 + this->PhoneNumber[3]) &= ~4u; /*0x48b486*/
  *(_DWORD *)(v12 + this->PhoneNumber[3] + 4) = 0; /*0x48b490*/
  *(_DWORD *)(v12 + this->PhoneNumber[3] + 8) = 0; /*0x48b497*/
  *(_DWORD *)(v12 + this->PhoneNumber[3] + 12) = 0; /*0x48b49e*/
  *(_DWORD *)(v12 + this->PhoneNumber[3] + 16) = a3; /*0x48b4a5*/
  *(_WORD *)(v12 + this->PhoneNumber[3] + 32) = a6; /*0x48b4ae*/
  qmemcpy(*(void **)(36 * v9 + this->PhoneNumber[3] + 20), a2, a3); /*0x48b4c1*/
  if ( a4 && a5 > 0 && a5 <= this->PacketsSent ) /*0x48b4dd*/
  {
    qmemcpy(*(void **)(v12 + this->PhoneNumber[3] + 28), a4, a5); /*0x48b4eb*/
    *(_DWORD *)(v12 + this->PhoneNumber[3] + 24) = a5; /*0x48b4f9*/
  }
  else
  {
    *(_DWORD *)(v12 + this->PhoneNumber[3] + 24) = 0; /*0x48b502*/
  }
  *(_DWORD *)(this->PhoneNumber[6] + 4 * this->PhoneNumber[4]) = v9; /*0x48b512*/
  v13 = this->PhoneNumber[4] + 1; /*0x48b51b*/
  ++this->PhoneNumber[5]; /*0x48b51e*/
  this->PhoneNumber[4] = v13; /*0x48b521*/
  return 1; /*0x48b44f*/
}



// ==== 0x0048B570  PacketQueue::ExtractEntry  this=PacketQueue  sig=csp ====
int __thiscall PacketQueue::ExtractEntry(
        PacketQueue *this,
        void *a2,
        _DWORD *a3,
        int a4,
        void *a5,
        _DWORD *a6,
        _WORD *a7)
{
  int v8; // esi
  int v9; // esi
  _DWORD *v10; // ecx
  int i; // ecx

  if ( !*((_DWORD *)this + 10) ) /*0x48b576*/
    return 0; /*0x48b576*/
  v8 = *((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4); /*0x48b58f*/
  if ( (*(_BYTE *)v8 & 1) == 0 ) /*0x48b595*/
    return 0; /*0x48b712*/
  if ( a2 ) /*0x48b5a3*/
  {
    qmemcpy(a2, *(const void **)(v8 + 20), *(_DWORD *)(v8 + 16)); /*0x48b5b0*/
    *a3 = *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 16); /*0x48b5cd*/
  }
  if ( a5 && a6 ) /*0x48b5db*/
  {
    v9 = *((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4); /*0x48b5e9*/
    qmemcpy(a5, *(const void **)(v9 + 28), *(_DWORD *)(v9 + 24)); /*0x48b5f7*/
    *a6 = *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 24); /*0x48b614*/
  }
  if ( a7 ) /*0x48b61c*/
    *a7 = *(_WORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 32); /*0x48b62f*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4)) &= ~1u; /*0x48b647*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4)) &= ~2u; /*0x48b65e*/
  v10 = (_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4)); /*0x48b66e*/
  *v10 &= ~4u; /*0x48b676*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 4) = 0; /*0x48b684*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 8) = 0; /*0x48b694*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 12) = 0; /*0x48b6a4*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 16) = 0; /*0x48b6b4*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 24) = 0; /*0x48b6c4*/
  *(_WORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 32) = 0; /*0x48b6d4*/
  for ( i = a4; /*0x48b6e1*/
        i < *((_DWORD *)this + 10) - 1;
        *(_DWORD *)(*((_DWORD *)this + 12) + 4 * i - 4) = *(_DWORD *)(*((_DWORD *)this + 12) + 4 * i) )
  {
    ++i; /*0x48b6e6*/
  }
  *(_DWORD *)(*((_DWORD *)this + 12) + 4 * (*((_DWORD *)this + 10))-- - 4) = 0; /*0x48b6fd*/
  return 1; /*0x48b6fc*/
}



// ==== 0x0048B720  Terrain::GetTileIndex  this=Terrain  sig=csp ====
int __thiscall Terrain::GetTileIndex(Terrain *this, int a2)
{
  return (*((_DWORD *)this->Terrain_field_0x24 + 9 * *((_DWORD *)this->Terrain_field_0x30 + a2)) & 1) != 0
       ? (int)this->Terrain_field_0x24 + 36 * *((_DWORD *)this->Terrain_field_0x30 + a2)
       : 0;
}



// ==== 0x0048B750  ConnectionClass::allocPacketSlot  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::allocPacketSlot(
        ModemConnectionClass *this,
        const void *a2,
        signed int a3,
        const void *a4,
        signed int a5)
{
  int v6; // edx
  signed int v8; // ebx
  int v9; // eax
  _BYTE *v10; // ecx
  int v12; // ebx
  int v13; // esi
  int v14; // eax
  signed int v15; // [esp+14h] [ebp+8h]

  v6 = *(_DWORD *)this->Active; /*0x48b755*/
  if ( this->PhoneNumber[8] == v6 || a3 > this->LastPacketTime ) /*0x48b768*/
    return 0; /*0x48b768*/
  v8 = 0; /*0x48b76a*/
  if ( v6 <= 0 ) /*0x48b772*/
    goto LABEL_9; /*0x48b772*/
  v9 = this->PhoneNumber[7]; /*0x48b774*/
  v10 = (_BYTE *)v9; /*0x48b777*/
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
  *(_DWORD *)(v9 + v12) |= 1u; /*0x48b7b7*/
  *(_DWORD *)(v12 + this->PhoneNumber[7]) &= ~2u; /*0x48b7c4*/
  *(_DWORD *)(this->PhoneNumber[7] + v12) &= ~4u; /*0x48b7d2*/
  v13 = dword_887340; /*0x48b7d9*/
  if ( dword_887338 != -1 ) /*0x48b7e2*/
    v13 += Timer::GetTicks() - dword_887338; /*0x48b7f4*/
  *(_DWORD *)(this->PhoneNumber[7] + v12 + 4) = v13; /*0x48b7fb*/
  *(_DWORD *)(this->PhoneNumber[7] + v12 + 8) = a3; /*0x48b806*/
  qmemcpy(*(void **)(this->PhoneNumber[7] + v12 + 12), a2, a3); /*0x48b816*/
  if ( a4 && a5 > 0 && a5 <= this->PacketsSent ) /*0x48b832*/
  {
    qmemcpy(*(void **)(this->PhoneNumber[7] + v12 + 20), a4, a5); /*0x48b842*/
    *(_DWORD *)(this->PhoneNumber[7] + v12 + 16) = a5; /*0x48b84e*/
  }
  else
  {
    *(_DWORD *)(this->PhoneNumber[7] + v12 + 16) = 0; /*0x48b857*/
  }
  *(_DWORD *)(this->PhoneNumber[10] + 4 * this->PhoneNumber[8]) = v15; /*0x48b86a*/
  v14 = this->PhoneNumber[9] + 1; /*0x48b874*/
  ++this->PhoneNumber[8]; /*0x48b875*/
  this->PhoneNumber[9] = v14; /*0x48b878*/
  return 1; /*0x48b7a2*/
}



// ==== 0x0048B890  PacketQueue::ReleaseEntry  this=PacketQueue  sig=csp ====
int __thiscall PacketQueue::ReleaseEntry(PacketQueue *this, void *a2, _DWORD *a3, int a4, void *a5, _DWORD *a6)
{
  int v7; // esi
  int v8; // esi
  _DWORD *v9; // ecx
  int i; // ecx

  if ( !*((_DWORD *)this + 14) ) /*0x48b896*/
    return 0; /*0x48b896*/
  v7 = *((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4); /*0x48b8af*/
  if ( (*(_BYTE *)v7 & 1) == 0 ) /*0x48b8b5*/
    return 0; /*0x48b9d5*/
  if ( a2 ) /*0x48b8c3*/
  {
    qmemcpy(a2, *(const void **)(v7 + 12), *(_DWORD *)(v7 + 8)); /*0x48b8d0*/
    *a3 = *(_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4) + 8); /*0x48b8ed*/
  }
  if ( a5 && a6 ) /*0x48b8fd*/
  {
    v8 = *((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4); /*0x48b90b*/
    qmemcpy(a5, *(const void **)(v8 + 20), *(_DWORD *)(v8 + 16)); /*0x48b919*/
    *a6 = *(_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4) + 16); /*0x48b934*/
  }
  *(_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4)) &= ~1u; /*0x48b94b*/
  *(_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4)) &= ~2u; /*0x48b962*/
  v9 = (_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4)); /*0x48b972*/
  *v9 &= ~4u; /*0x48b97a*/
  *(_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4) + 8) = 0; /*0x48b988*/
  *(_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4) + 16) = 0; /*0x48b998*/
  for ( i = a4; /*0x48b9a4*/
        i < *((_DWORD *)this + 14) - 1;
        *(_DWORD *)(this->q004 + 4 * i - 4) = *(_DWORD *)(this->q004 + 4 * i) )
  {
    ++i; /*0x48b9a9*/
  }
  *(_DWORD *)(this->q004 + 4 * (*((_DWORD *)this + 14))-- - 4) = 0; /*0x48b9c0*/
  return 1; /*0x48b9bf*/
}



// ==== 0x0048B9E0  Terrain::GetTileType  this=Terrain  sig=csp ====
int __thiscall Terrain::GetTileType(Terrain *this, int a2)
{
  return (*((_DWORD *)this->Terrain_field_0x34 + 6 * *((_DWORD *)this->Terrain_field_0x40 + a2)) & 1) != 0
       ? (int)this->Terrain_field_0x34 + 24 * *((_DWORD *)this->Terrain_field_0x40 + a2)
       : 0;
}



// ==== 0x0048BA10  ConnectionClass::initQueue  this=ConnectionClass  sig=csp ====
unsigned int __thiscall ConnectionClass::initQueue(ConnectionClass *this, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int result; // eax

  v2 = *((_DWORD *)this + 6); /*0x48ba10*/
  if ( v2 == 256 ) /*0x48ba1c*/
  {
    v3 = a2 - *((_DWORD *)this + 7) + this->PacketsReceived; /*0x48ba2c*/
    this->PacketsReceived = v3; /*0x48ba2e*/
    v4 = ((unsigned __int8)v3 > 0x7Fu) + (v3 >> 8); /*0x48ba46*/
  }
  else
  {
    v5 = v2 + 1; /*0x48ba4e*/
    v6 = a2 + this->PacketsReceived; /*0x48ba56*/
    *((_DWORD *)this + 6) = v5; /*0x48ba58*/
    this->PacketsReceived = v6; /*0x48ba5b*/
    v4 = v6 / v5; /*0x48ba5e*/
  }
  *((_DWORD *)this + 7) = v4; /*0x48ba60*/
  result = this->Active; /*0x48ba63*/
  if ( a2 > result ) /*0x48ba68*/
    this->Active = a2; /*0x48ba6a*/
  return result; /*0x48ba6d*/
}



// ==== 0x0048BA80  CellClass::GetBridgeIndex  this=CellClass  sig=csp ====
int __thiscall CellClass::GetBridgeIndex(CellClass *this)
{
  return (int)this->rubble; /*0x48ba83*/
}



// ==== 0x0048BA90  IPXManagerClass::init  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::init(IPXManagerClass *this)
{
  return *((_DWORD *)this + 8); /*0x48ba93*/
}



// ==== 0x0048BAA0  Rect::SetRedraw  this=Rect  sig=csp ====
int __thiscall Rect::SetRedraw(Rect *this, char a2)
{
  int result; // eax

  result = 0; /*0x48baa4*/
  if ( a2 ) /*0x48baa8*/
  {
    *((_DWORD *)this + 5) = 0; /*0x48baaa*/
    *((_DWORD *)this + 6) = 0; /*0x48baad*/
    *((_DWORD *)this + 7) = 0; /*0x48bab0*/
  }
  else
  {
    result = *((_DWORD *)this + 7); /*0x48bab9*/
    *((_DWORD *)this + 6) = 1; /*0x48babc*/
    *((_DWORD *)this + 5) = result; /*0x48bac3*/
  }
  this->Width = result; /*0x48bab3*/
  return result; /*0x48bab6*/
}



// ==== 0x0048BAD0  EventClass::SetData  this=EventClass  sig=csp ====
int __thiscall EventClass::SetData(EventClass *this, int a2, int a3, int a4, int a5, int a6)
{
  this->EventClass_field_0x44 = (void *)a2; /*0x48bad8*/
  this->EventClass_field_0x48 = (void *)a3; /*0x48badf*/
  this->EventClass_field_0x4C[0] = a4; /*0x48bae6*/
  this->EventClass_field_0x50 = (void *)a5; /*0x48baed*/
  this->EventClass_field_0x54 = (void *)a6; /*0x48baf0*/
  return a6; /*0x48baf3*/
}



// ==== 0x0048BB00  ObjectClass::method_48BB00  this=ObjectClass  sig=csp ====
void *__thiscall sub_48BB00(ObjectClass *this, char a2)
{
  sub_48B1F0((CommBufferClass *)this); /*0x48bb03*/
  if ( (a2 & 1) != 0 ) /*0x48bb0d*/
    __3_YAXPAX_Z(this); /*0x48bb10*/
  return this; /*0x48bb1a*/
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
  v2 = dword_87F684; /*0x48bb68*/
  v3 = a1; /*0x48bb6e*/
  BYTE1(v3) = BYTE1(a1) & 0xE8; /*0x48bb71*/
  if ( !dword_87F684 ) /*0x48bb76*/
    goto LABEL_12; /*0x48bb76*/
  v4 = dword_87F690; /*0x48bb78*/
  if ( dword_87F690 && *(_DWORD *)dword_87F690 == v3 ) /*0x48bb84*/
  {
LABEL_17:
    v7 = (_DWORD *)(v4 + 4); /*0x48bc0b*/
    return !*v7 || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v1) == 0; /*0x48bc0e*/
  }
  if ( !byte_87F68C ) /*0x48bb91*/
  {
    qsort(dword_87F680, dword_87F684, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x48bba1*/
    v2 = dword_87F684; /*0x48bba6*/
    dword_87F690 = 0; /*0x48bbaf*/
    byte_87F68C = 1; /*0x48bbb9*/
  }
  v5 = dword_87F680; /*0x48bbc0*/
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
    dword_87F690 = (int)&v5[2 * (v2 / 2)]; /*0x48bc05*/
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
void *__thiscall IPXConnClass::initConnection(
        ModemConnectionClass *this,
        int a2,
        int a3,
        int a4,
        __int16 a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  CommBufferClass *v10; // eax

  LOWORD(this->PhoneNumber[3]) = a5; /*0x48be73*/
  this->PhoneNumber[4] = a6; /*0x48be7b*/
  *(_DWORD *)this->__pad_0 = &ConnectionClass::`vftable'; /*0x48be83*/
  this->PhoneNumber[1] = a4 + 14; /*0x48be89*/
  this->PhoneNumber[5] = a7; /*0x48be8c*/
  this->PhoneNumber[6] = a8; /*0x48be8f*/
  this->PhoneNumber[2] = __2_YAPAXI_Z(a4 + 14); /*0x48be99*/
  v10 = (CommBufferClass *)__2_YAPAXI_Z(0x58u); /*0x48be9c*/
  if ( v10 ) /*0x48bea6*/
    this->PlayerIndex = (int)sub_48B0E0(v10, a2, a3, this->PhoneNumber[1], a9); /*0x48bec2*/
  else
    this->PlayerIndex = 0; /*0x48becd*/
  return this; /*0x48bec7*/
}



// ==== 0x0048BEE0  ConnectionClass::dtor  this=ConnectionClass  sig=csp ====
void __thiscall ConnectionClass::dtor(ConnectionClass *this)
{
  void *v2; // eax
  void (__thiscall ***PlayerIndex)(_DWORD, int); // ecx

  v2 = (void *)this->Active; /*0x48bee3*/
  *(_DWORD *)this->__pad_0 = &ConnectionClass::`vftable'; /*0x48bee6*/
  __3_YAXPAX_Z(v2); /*0x48beed*/
  PlayerIndex = (void (__thiscall ***)(_DWORD, int))this->PlayerIndex; /*0x48bef2*/
  if ( PlayerIndex ) /*0x48befb*/
    (**PlayerIndex)(PlayerIndex, 1); /*0x48bf01*/
}



// ==== 0x0048BF10  ConnectionClass::ZeroInitAndSetup  this=ConnectionClass  sig=csp ====
int __thiscall Struct::ZeroInitAndSetup(ModemConnectionClass *this)
{
  this->PhoneNumber[7] = 0; /*0x48bf12*/
  this->PhoneNumber[8] = 0; /*0x48bf15*/
  this->PhoneNumber[9] = 0; /*0x48bf18*/
  this->PhoneNumber[10] = 0; /*0x48bf1b*/
  *(_DWORD *)this->Active = 0; /*0x48bf1e*/
  this->LastPacketTime = 0; /*0x48bf21*/
  this->PacketsSent = 0; /*0x48bf24*/
  this->PacketsReceived = 0; /*0x48bf27*/
  this->PhoneNumber[0] = 0; /*0x48bf2a*/
  this->PhoneNumber[11] = -1; /*0x48bf30*/
  this->PhoneNumber[12] = -1; /*0x48bf33*/
  return Struct::ClearAllMemberFlags((Struct *)this->PlayerIndex);
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
  if ( dword_A8B238[0] == 4 && byte_A8DBA0 ) /*0x48bf99*/
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
int __thiscall ConnectionClass::receivePacket(ModemConnectionClass *this, int a2, int a3)
{
  char v5; // al
  int v6; // ecx
  int v7; // edi
  _DWORD *TileIndex; // eax
  int v9; // ecx
  int PlayerIndex; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  Terrain *v14; // ecx
  int v15; // edi
  int TileType; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  Terrain *v21; // ecx
  int v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int16 v27; // [esp+10h] [ebp-10h] BYREF
  char v28; // [esp+12h] [ebp-Eh]
  _BYTE v29[13]; // [esp+13h] [ebp-Dh]

  if ( *(_WORD *)a2 != LOWORD(this->PhoneNumber[3]) ) /*0x48c054*/
  {
    ++this->PhoneNumber[0]; /*0x48c05b*/
    return 0; /*0x48c066*/
  }
  v5 = *(_BYTE *)(a2 + 2); /*0x48c069*/
  if ( v5 != 2 ) /*0x48c06e*/
  {
    if ( v5 == 1 ) /*0x48c0d5*/
    {
      PlayerIndex = this->PlayerIndex; /*0x48c0db*/
      if ( *(_DWORD *)(PlayerIndex + 8) - *(_DWORD *)(PlayerIndex + 56) > 1 ) /*0x48c0e9*/
      {
        if ( ConnectionClass::allocPacketSlot((ModemConnectionClass *)PlayerIndex, (const void *)a2, a3, 0, 0) ) /*0x48c115*/
        {
          v11 = this->PhoneNumber[7] + 1; /*0x48c14b*/
          this->PhoneNumber[7] = v11; /*0x48c14c*/
          this->LastPacketTime = *(_DWORD *)(a2 + 4) - v11 + 1; /*0x48c155*/
          v12 = *(_DWORD *)(a2 + 4); /*0x48c158*/
          if ( v12 ) /*0x48c15d*/
            this->PacketsSent = 100 - 100 * v11 / (unsigned int)(v12 + 1); /*0x48c174*/
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
      v13 = this->PhoneNumber[11]; /*0x48c18e*/
      if ( *(_DWORD *)(a2 + 4) <= v13 && v13 != -1 ) /*0x48c19b*/
      {
LABEL_40:
        v25 = *(_DWORD *)(a2 + 4); /*0x48c288*/
        v27 = this->PhoneNumber[3]; /*0x48c28f*/
        v28 = 2; /*0x48c29c*/
        *(_DWORD *)&v29[1] = v25; /*0x48c2a1*/
        if ( byte_A8DBA0 ) /*0x48c2a5*/
          v29[0] = *(_BYTE *)(a2 + 3); /*0x48c2aa*/
        else
          v29[0] = 0; /*0x48c2b0*/
        Debug::Log(); /*0x48c2c6*/
        v26 = dword_A8EA0C; /*0x48c2cb*/
        LOBYTE(v26) = this == (ModemConnectionClass *)dword_A8EA0C; /*0x48c2d7*/
        (*(void (__thiscall **)(ModemConnectionClass *, __int16 *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this->__pad_0 + 36))( /*0x48c2ea*/
          this,
          &v27,
          14,
          0,
          0,
          v26,
          0);
        return 1; /*0x48c2f9*/
      }
      v14 = (Terrain *)this->PlayerIndex; /*0x48c1a1*/
      v15 = 0; /*0x48c1a4*/
      if ( v14->Terrain_field_0x38 > 0 ) /*0x48c1ab*/
      {
        do /*0x48c1ae*/
        {
          TileType = Terrain::GetTileType(v14, v15); /*0x48c1ae*/
          if ( TileType ) /*0x48c1b5*/
          {
            v17 = *(_DWORD *)(TileType + 12); /*0x48c1b7*/
            if ( !*(_BYTE *)(v17 + 2) && *(_DWORD *)(v17 + 4) == *(_DWORD *)(a2 + 4) ) /*0x48c1c9*/
              goto LABEL_40; /*0x48c1c9*/
          }
          v14 = (Terrain *)this->PlayerIndex; /*0x48c1cf*/
        }
        while ( ++v15 < v14->Terrain_field_0x38 ); /*0x48c1ae*/
      }
      v18 = this->PlayerIndex; /*0x48c1d8*/
      if ( (*(_DWORD *)(v18 + 8) - *(_DWORD *)(v18 + 56) > 1 || *(_DWORD *)(a2 + 4) == this->PhoneNumber[11] + 1) /*0x48c216*/
        && ConnectionClass::allocPacketSlot((ModemConnectionClass *)v18, (const void *)a2, a3, 0, 0) )
      {
        v19 = this->PhoneNumber[11] + 1; /*0x48c23f*/
        ++this->PhoneNumber[8]; /*0x48c240*/
        v20 = *(_DWORD *)(a2 + 4); /*0x48c243*/
        if ( v20 == v19 ) /*0x48c248*/
        {
          while ( 1 ) /*0x48c24a*/
          {
            v21 = (Terrain *)this->PlayerIndex; /*0x48c24a*/
            this->PhoneNumber[11] = v20; /*0x48c24d*/
            v22 = 0; /*0x48c250*/
            if ( v21->Terrain_field_0x38 <= 0 ) /*0x48c257*/
              break; /*0x48c257*/
            while ( 1 ) /*0x48c25a*/
            {
              v23 = Terrain::GetTileType(v21, v22); /*0x48c25a*/
              if ( v23 ) /*0x48c261*/
              {
                v24 = *(_DWORD *)(v23 + 12); /*0x48c263*/
                if ( !*(_BYTE *)(v24 + 2) && *(_DWORD *)(v24 + 4) == this->PhoneNumber[11] + 1 ) /*0x48c276*/
                  break; /*0x48c276*/
              }
              v21 = (Terrain *)this->PlayerIndex; /*0x48c278*/
              if ( ++v22 >= v21->Terrain_field_0x38 ) /*0x48c27f*/
                goto LABEL_40; /*0x48c27f*/
            }
            v20 = *(_DWORD *)(v24 + 4); /*0x48c283*/
          }
        }
        goto LABEL_40; /*0x48c257*/
      }
    }
    Debug::Log(); /*0x48c301*/
    return 0; /*0x48c309*/
  }
  Debug::Log(); /*0x48c079*/
  v6 = this->PlayerIndex; /*0x48c07e*/
  v7 = 0; /*0x48c084*/
  if ( *(int *)(v6 + 40) > 0 ) /*0x48c08b*/
  {
    while ( 1 ) /*0x48c08e*/
    {
      TileIndex = (_DWORD *)Terrain::GetTileIndex((Terrain *)v6, v7); /*0x48c08e*/
      if ( TileIndex ) /*0x48c095*/
      {
        v9 = TileIndex[5]; /*0x48c097*/
        if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v9 + 4) && !*(_BYTE *)(v9 + 2) ) /*0x48c0a2*/
          break; /*0x48c0a2*/
      }
      v6 = this->PlayerIndex; /*0x48c0a9*/
      if ( ++v7 >= *(_DWORD *)(v6 + 40) ) /*0x48c0b0*/
        return 1; /*0x48c0be*/
    }
    *TileIndex |= 2u; /*0x48c0c1*/
  }
  return 1; /*0x48c059*/
}



// ==== 0x0048C320  ConnectionClass::processTileUpdate  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::processTileUpdate(ModemConnectionClass *this, void *a2, signed int *a3)
{
  int v4; // esi
  Terrain *PlayerIndex; // ecx
  int TileType; // eax
  int v7; // ecx
  char v8; // dl
  int v10; // edx
  bool v11; // zf

  v4 = 0; /*0x48c326*/
  PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c328*/
  if ( PlayerIndex->Terrain_field_0x38 <= 0 ) /*0x48c330*/
    return 0; /*0x48c36a*/
  while ( 1 ) /*0x48c333*/
  {
    TileType = Terrain::GetTileType(PlayerIndex, v4); /*0x48c333*/
    if ( !TileType || (*(_BYTE *)TileType & 2) != 0 ) /*0x48c33f*/
      goto LABEL_7; /*0x48c33f*/
    v7 = *(_DWORD *)(TileType + 12); /*0x48c341*/
    v8 = *(_BYTE *)(v7 + 2); /*0x48c344*/
    if ( !v8 && *(_DWORD *)(v7 + 4) == this->PhoneNumber[12] + 1 ) /*0x48c354*/
      break; /*0x48c354*/
    if ( v8 == 1 ) /*0x48c359*/
      goto LABEL_10; /*0x48c359*/
LABEL_7:
    PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c35b*/
    if ( ++v4 >= PlayerIndex->Terrain_field_0x38 ) /*0x48c362*/
      return 0; /*0x48c362*/
  }
  this->PhoneNumber[12] = *(_DWORD *)(v7 + 4); /*0x48c370*/
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
BOOL __thiscall COMObject::IsValid(ConnectionClass *this)
{
  return (*(int (__thiscall **)(ConnectionClass *))(*(_DWORD *)this->__pad_0 + 28))(this) /*0x48c3cc*/
      && (*(int (__thiscall **)(ConnectionClass *))(*(_DWORD *)this->__pad_0 + 32))(this);
}



// ==== 0x0048C3E0  ConnectionClass::serviceSendQueue  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::serviceSendQueue(ModemConnectionClass *this)
{
  int v2; // esi
  int PlayerIndex; // ecx
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
  PlayerIndex = this->PlayerIndex; /*0x48c3f3*/
  if ( *(int *)(PlayerIndex + 40) > 0 ) /*0x48c3fb*/
  {
    do /*0x48c45f*/
    {
      TileIndex = Terrain::GetTileIndex((Terrain *)PlayerIndex, v2); /*0x48c3fe*/
      v5 = TileIndex; /*0x48c403*/
      if ( (*(_BYTE *)TileIndex & 2) != 0 ) /*0x48c408*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(TileIndex + 20) + 2) ) /*0x48c40d*/
        {
          v6 = dword_887340; /*0x48c419*/
          if ( dword_887338 != -1 ) /*0x48c422*/
            v6 += Timer::GetTicks() - dword_887338; /*0x48c434*/
          ConnectionClass::initQueue((ConnectionClass *)this->PlayerIndex, v6 - *(_DWORD *)(v5 + 4)); /*0x48c43f*/
        }
        PacketQueue::ExtractEntry((PacketQueue *)this->PlayerIndex, 0, 0, v2--, 0, 0, 0); /*0x48c452*/
      }
      PlayerIndex = this->PlayerIndex; /*0x48c458*/
      ++v2; /*0x48c45b*/
    }
    while ( v2 < *(_DWORD *)(PlayerIndex + 40) ); /*0x48c45f*/
  }
  v7 = 0; /*0x48c464*/
  v22 = *(_DWORD *)(this->PlayerIndex + 40); /*0x48c46b*/
  if ( v22 <= 0 ) /*0x48c46f*/
    return 1; /*0x48c46f*/
  do /*0x48c552*/
  {
    v8 = Terrain::GetTileIndex((Terrain *)this->PlayerIndex, v7); /*0x48c47e*/
    if ( (*(_BYTE *)v8 & 2) == 0 ) /*0x48c483*/
    {
      v9 = dword_887340; /*0x48c48e*/
      if ( dword_887338 != -1 ) /*0x48c497*/
        v9 += Timer::GetTicks() - dword_887338; /*0x48c4a9*/
      v10 = *(_DWORD *)(v8 + 8); /*0x48c4ab*/
      if ( (unsigned int)(v9 - v10) > this->PhoneNumber[4] ) /*0x48c4b7*/
      {
        v11 = dword_A8EA0C; /*0x48c4bd*/
        LOWORD(v10) = *(_WORD *)(v8 + 32); /*0x48c4c3*/
        LOBYTE(v11) = this == (ModemConnectionClass *)dword_A8EA0C; /*0x48c4cb*/
        (*(void (__thiscall **)(ModemConnectionClass *, _DWORD, _DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)this->__pad_0 /*0x48c4e2*/
                                                                                                 + 36))(
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
          ++*(_DWORD *)this->Active; /*0x48c503*/
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
        v16 = this->PhoneNumber[5]; /*0x48c50d*/
        if ( v16 != -1 && v15 > v16 ) /*0x48c519*/
        {
          v17 = *(_DWORD *)v8; /*0x48c51b*/
          v21 = 1; /*0x48c51d*/
          LOBYTE(v17) = *(_DWORD *)v8 | 4; /*0x48c525*/
          *(_DWORD *)v8 = v17; /*0x48c527*/
        }
        v18 = this->PhoneNumber[6]; /*0x48c529*/
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
int ConnectionClass::StubReturnFalse(ConnectionClass *this)
{
  return 0; /*0x48c592*/
}



// ==== 0x0048C5A0  ConnectionClass::connect  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::connect(ModemConnectionClass *this)
{
  int v2; // esi
  Terrain *PlayerIndex; // ecx
  int TileType; // eax
  int v5; // eax

  v2 = 0; /*0x48c5a4*/
  PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c5a6*/
  if ( PlayerIndex->Terrain_field_0x38 > 0 ) /*0x48c5ae*/
  {
    do /*0x48c5e7*/
    {
      TileType = Terrain::GetTileType(PlayerIndex, v2); /*0x48c5b1*/
      if ( (*(_BYTE *)TileType & 2) != 0 ) /*0x48c5b9*/
      {
        v5 = *(_DWORD *)(TileType + 12); /*0x48c5bb*/
        if ( *(_BYTE *)(v5 + 2) == 1 || *(_DWORD *)(v5 + 4) < this->PhoneNumber[11] ) /*0x48c5cc*/
          PacketQueue::ReleaseEntry((PacketQueue *)this->PlayerIndex, 0, 0, v2--, 0, 0); /*0x48c5da*/
      }
      PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c5e0*/
      ++v2; /*0x48c5e3*/
    }
    while ( v2 < PlayerIndex->Terrain_field_0x38 ); /*0x48c5e7*/
  }
  return 1; /*0x48c5e9*/
}



// ==== 0x0048C650  ConnectionClass::QueryInterface  this=ConnectionClass  sig=csp ====
_DWORD *__thiscall ConnectionClass::QueryInterface(ConnectionClass *this, char a2)
{
  void *v3; // eax
  void (__thiscall ***PlayerIndex)(_DWORD, int); // ecx

  v3 = (void *)this->Active; /*0x48c653*/
  *(_DWORD *)this->__pad_0 = &ConnectionClass::`vftable'; /*0x48c656*/
  __3_YAXPAX_Z(v3); /*0x48c65d*/
  PlayerIndex = (void (__thiscall ***)(_DWORD, int))this->PlayerIndex; /*0x48c662*/
  if ( PlayerIndex ) /*0x48c66a*/
    (**PlayerIndex)(PlayerIndex, 1); /*0x48c670*/
  if ( (a2 & 1) != 0 ) /*0x48c677*/
    __3_YAXPAX_Z(this); /*0x48c67a*/
  return this->__pad_0; /*0x48c684*/
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
// positive sp value has been detected, the output may be wrong!
int MainGameFrame(ObjectClass *this)
{
  Network *v1; // edi
  int result; // eax
  int v3; // eax
  bool v4; // zf
  char *v5; // eax
  char *v6; // eax
  int *StringCSF; // eax
  char *v8; // eax
  Network *v9; // [esp-8h] [ebp-164h]
  ScenarioClass *v10; // [esp-4h] [ebp-160h]
  ObjectClass *v11; // [esp+0h] [ebp-15Ch]
  Main v12; // [esp+8h] [ebp-154h] BYREF
  Main v13; // [esp+Ch] [ebp-150h] BYREF
  char v14[112]; // [esp+7Ch] [ebp-E0h] BYREF
  char v15[112]; // [esp+ECh] [ebp-70h] BYREF

  result = *(_DWORD *)&stru_A8EB00.?[444]; /*0x48c8b0*/
  if ( !*(_DWORD *)&stru_A8EB00.?[444] ) /*0x48c8c0*/
    return result; /*0x48c8c0*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x48c8cc*/
  {
    result = (int)dword_A83D4C; /*0x48c8ce*/
    if ( dword_A83D4C->__pad_140[184] || dword_A83D4C->__pad_140[183] || dword_A83D4C->__pad_140[182] ) /*0x48c8ef*/
      goto LABEL_15; /*0x48c8f7*/
    if ( !g_GameLoopActive ) /*0x48c905*/
    {
      if ( dword_A83D4C->__pad_140[181] ) /*0x48c907*/
      {
        g_GameLoopActive = 1; /*0x48c911*/
        goto LABEL_9; /*0x48c911*/
      }
LABEL_15:
      *(_DWORD *)&stru_A8EB00.?[444] = 0; /*0x48c98a*/
      return result; /*0x48c997*/
    }
  }
LABEL_9:
  ScenarioClass::CleanupTemporary(v10); /*0x48c918*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x48c925*/
  while ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ) /*0x48c930*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x48c93f*/
  v3 = *(_DWORD *)&stru_A8EB00.?[444]; /*0x48c951*/
  v9 = v1; /*0x48c959*/
  if ( *(_DWORD *)&stru_A8EB00.?[444] ) /*0x48c95a*/
  {
    while ( 2 ) /*0x48c968*/
    {
      switch ( v3 ) /*0x48c968*/
      {
        case 1: /*0x48c968*/
          OpenGameUI(); /*0x48c9ba*/
          v3 = *(_DWORD *)&stru_A8EB00.?[444]; /*0x48c9bf*/
          v4 = *(_DWORD *)&stru_A8EB00.?[444] == 1; /*0x48c9c4*/
          goto LABEL_17; /*0x48c9c7*/
        case 2: /*0x48c968*/
          if ( g_MenuStateFlags ) /*0x48cb40*/
          {
LABEL_34:
            Network::AddFrameEvent(v9); /*0x48cb42*/
          }
          else if ( !dword_A83D4C->__pad_140[181] /*0x48cb7b*/
                 && !dword_A83D4C->__pad_140[183]
                 && !dword_A83D4C->__pad_140[184]
                 && !dword_A83D4C->__pad_140[182] )
          {
            StringCSF = (int *)GetStringCSF(aTxtSurrender, 0, g_Str_File_Conquer_CPP, 487); /*0x48cb9a*/
            if ( ShowConfirmDialog(StringCSF) ) /*0x48cba1*/
            {
              v8 = EventClass::AddEvent(v15, (int)dword_A83D4C->Object_field_0x30, 8u); /*0x48cbc0*/
              if ( (int)stru_A80220.lineTrailer < 128 ) /*0x48cbcf*/
              {
                qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v8, 0x6Fu); /*0x48cbeb*/
                dword_A83A54[dword_A802D0] = timeGetTime(); /*0x48cbfc*/
                dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x48cc13*/
                ++stru_A80220.lineTrailer; /*0x48cc19*/
              }
              Network::AddFrameEvent(v9); /*0x48cc1e*/
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
              v5 = EventClass::AddEvent((char *)&v13, (int)dword_A83D4C->Object_field_0x30, 8u); /*0x48ca43*/
              if ( (int)stru_A80220.lineTrailer < 128 ) /*0x48ca52*/
              {
                qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v5, 0x6Fu); /*0x48ca6e*/
                dword_A83A54[dword_A802D0] = timeGetTime(); /*0x48ca7f*/
                dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x48ca96*/
                ++stru_A80220.lineTrailer; /*0x48ca9c*/
              }
              g_GameLoopActive = 0; /*0x48caa1*/
              goto LABEL_34; /*0x48caa8*/
            case 4: /*0x48ca2d*/
              v6 = EventClass::AddEvent(v14, (int)dword_A83D4C->Object_field_0x30, 8u); /*0x48cac4*/
              if ( (int)stru_A80220.lineTrailer < 128 ) /*0x48cad3*/
              {
                qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v6, 0x6Fu); /*0x48caef*/
                dword_A83A54[dword_A802D0] = timeGetTime(); /*0x48cb00*/
                dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x48cb17*/
                ++stru_A80220.lineTrailer; /*0x48cb1d*/
              }
              g_GameLoopActive = 0; /*0x48cb22*/
              break; /*0x48cb29*/
            case 5: /*0x48ca2d*/
              LOBYTE(FootClass_Array.?[2]) = 1; /*0x48cb2e*/
              break; /*0x48cb35*/
            default:
              goto LABEL_44;
          }
          goto LABEL_44;
        case 4: /*0x48c968*/
          ShowHotkeyOptionsDialog(); /*0x48ca08*/
          v3 = 5; /*0x48ca0d*/
          *(_DWORD *)&stru_A8EB00.?[444] = 5; /*0x48ca12*/
          continue; /*0x48ca17*/
        case 5: /*0x48c968*/
          Main::CreateDialog(&v12); /*0x48c9cd*/
          v3 = *(_DWORD *)&stru_A8EB00.?[444]; /*0x48c9d2*/
          if ( *(_DWORD *)&stru_A8EB00.?[444] != 5 ) /*0x48c9da*/
            goto LABEL_18; /*0x48c9da*/
          v3 = 1; /*0x48c9dc*/
          *(_DWORD *)&stru_A8EB00.?[444] = 1; /*0x48c9e1*/
          continue; /*0x48c9e6*/
        case 6: /*0x48c968*/
          ShowAudioSettingsDialog(); /*0x48c9ef*/
          v3 = 5; /*0x48c9f4*/
          *(_DWORD *)&stru_A8EB00.?[444] = 5; /*0x48c9f9*/
          continue; /*0x48c9fe*/
        case 7: /*0x48c968*/
          ShowWOLLobbyDialog(); /*0x48cc2c*/
          goto LABEL_44; /*0x48cc2c*/
        case 8: /*0x48c968*/
          ShowDiplomacyDialog((ObjectClass *)v9); /*0x48c99d*/
          v3 = *(_DWORD *)&stru_A8EB00.?[444]; /*0x48c9a2*/
          v4 = *(_DWORD *)&stru_A8EB00.?[444] == 8; /*0x48c9a7*/
LABEL_17:
          if ( !v4 ) /*0x48c9aa*/
            goto LABEL_18; /*0x48c9aa*/
          goto LABEL_44; /*0x48c9aa*/
        case 9: /*0x48c968*/
          ScenarioClass::ShowMissionBriefing((ScenarioClass *)dword_A8B230); /*0x48c975*/
          v3 = *(_DWORD *)&stru_A8EB00.?[444]; /*0x48c97a*/
          if ( *(_DWORD *)&stru_A8EB00.?[444] != 9 ) /*0x48c982*/
            goto LABEL_18; /*0x48c982*/
LABEL_44:
          *(_DWORD *)&stru_A8EB00.?[444] = 0; /*0x48cc31*/
          goto LABEL_45; /*0x48cc31*/
        default:
LABEL_18:
          if ( v3 ) /*0x48c9b2*/
            continue; /*0x48c9b2*/
          goto LABEL_45; /*0x48c9b2*/
      }
    }
  }
LABEL_45:
  UpdateWindow(g_hWnd); /*0x48cc37*/
  if ( BYTE2(dword_A8B230[381].vtable3) ) /*0x48cc4b*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x48cc5d*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 24))(stru_887598.lineTrailer); /*0x48cc68*/
  WTFMode::Init((WTFMode *)&dword_A8B238); /*0x48cc70*/
  return PostFrameCleanup(v11); /*0x48c990*/
}



// ==== 0x0048CCC0  ObjectClass::MainGame  this=ObjectClass  sig=csp ====
char MainGame(ObjectClass *this)
{
  int inited; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v3; // eax
  char v4; // cl
  TechnoTypeClass *v5; // ecx
  int v6; // eax
  int v7; // eax
  ObjectClass *v9; // [esp+0h] [ebp-1C30h] BYREF
  CHAR MultiByteStr[5120]; // [esp+8h] [ebp-1C28h] BYREF
  CHAR v11[2048]; // [esp+1408h] [ebp-828h] BYREF
  MSGBOXPARAMSA mbp; // [esp+1C08h] [ebp-28h] BYREF
  int savedregs; // [esp+1C30h] [ebp+0h] BYREF

  inited = ((int (__stdcall *)())InitGame)(); /*0x48cccf*/
  if ( inited ) /*0x48ccd8*/
  {
    if ( inited < 0 ) /*0x48ccde*/
    {
      StringCSF = GetStringCSF(aTxtInitgameFai, 0, g_Str_File_Conquer_CPP, 566); /*0x48cd05*/
      WideCharToMultiByte(0, 0, StringCSF, -1, MultiByteStr, 5120, 0, 0); /*0x48cd13*/
      v3 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, g_Str_File_Conquer_CPP, 567); /*0x48cd36*/
      WideCharToMultiByte(0, 0, v3, -1, v11, 2048, 0, 0); /*0x48cd3e*/
      mbp.hInstance = g_hInstance; /*0x48cd4b*/
      mbp.hwndOwner = g_hWnd; /*0x48cd4e*/
      mbp.cbSize = 40; /*0x48cd61*/
      mbp.lpszText = MultiByteStr; /*0x48cd68*/
      mbp.lpszCaption = v11; /*0x48cd6b*/
      mbp.dwStyle = 327696; /*0x48cd6e*/
      memset(&mbp.lpszIcon, 0, 12); /*0x48cd75*/
      mbp.dwLanguageId = 1024; /*0x48cd7e*/
      LOBYTE(inited) = MessageBoxIndirectA(&mbp); /*0x48cd85*/
    }
    return inited; /*0x48cd90*/
  }
  g_ExceptionReturnStack = (int)&v9; /*0x48cd91*/
  g_ExceptionReturnFrame = (int)&savedregs; /*0x48cd97*/
  g_ExceptionReturnAddr = (int)&loc_48CDA8; /*0x48cda3*/
  Debug::Log(); /*0x48cdb4*/
  Debug::Log(); /*0x48cdc5*/
  LOBYTE(inited) = MenuSelect(v9); /*0x48cdd3*/
  while ( (_BYTE)inited ) /*0x48cdda*/
  {
    dword_A8E7AC = 0; /*0x48cdf0*/
    g_MenuReturnState = 1; /*0x48cdf6*/
    FadePalette(&FileSystem_TEMPERAT_PAL, 15, 0); /*0x48cdfd*/
    Timer::PumpMessages((Timer *)dword_87F770); /*0x48ce08*/
    if ( (dword_A8D5F8 & 2) != 0 ) /*0x48ce14*/
    {
      (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x48ce1e*/
      dword_ABCDFC = 0; /*0x48ce21*/
      dword_ABCE00 = 0; /*0x48ce27*/
    }
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x48ce33*/
    {
      InitSkirmishSettings(); /*0x48ce35*/
      byte_A8F900 = 0; /*0x48ce3a*/
      dword_B0BDB8 = 0; /*0x48ce40*/
      byte_B0BD78 = 0; /*0x48ce46*/
    }
    if ( dword_887368 ) /*0x48ce54*/
      Tooltip::Enable(dword_887368, byte_A8EB80); /*0x48ce5d*/
    v4 = BYTE2(dword_A8B230[381].vtable3); /*0x48ce67*/
    dword_A8EDA0 = 0; /*0x48ce6d*/
    byte_A8ED9C = v4; /*0x48ce73*/
    g_GameLoopActive = 1; /*0x48ce7e*/
    WTFMode::Init(&dword_A8B238); /*0x48ce85*/
    do /*0x48cea8*/
    {
      if ( (unsigned __int8)GameFrameLoop(v9) && GameFrameCheck(v9) ) /*0x48ce93*/
        break; /*0x48ce9a*/
      MainGameFrame(v9); /*0x48ce9c*/
    }
    while ( !GameFrameCheck(v9) ); /*0x48cea8*/
    InitLoadingScreenResources(); /*0x48ceaa*/
    WTFMode::Shutdown(&dword_A8B238); /*0x48ceb4*/
    byte_A8ED5C = 0; /*0x48cebf*/
    byte_A8E378 = 0; /*0x48cec7*/
    Debug::Log(); /*0x48cee2*/
    DumpNetworkStats(v9); /*0x48ceea*/
    if ( !g_Is16BitMode ) /*0x48cef5*/
      FadePalette(&word_884E80, 30, 0); /*0x48cf02*/
    LOBYTE(v5) = 1; /*0x48cf07*/
    ScreenSaver::Process(v5, v9); /*0x48cf09*/
    if ( (dword_A8D5F8 & 3) != 0 ) /*0x48cf15*/
      CCFileClass::Reset(&dword_A8D58C); /*0x48cf1c*/
    v6 = *(_DWORD *)&dword_A8B238; /*0x48cf21*/
    if ( *(_DWORD *)&dword_A8B238 == 2 || *(_DWORD *)&dword_A8B238 == 1 ) /*0x48cf2e*/
    {
      if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf4c*/
        goto LABEL_27; /*0x48cf4c*/
      CleanupCampaignResources(); /*0x48cf4e*/
    }
    else
    {
      if ( *(_DWORD *)&dword_A8B238 != 3 ) /*0x48cf33*/
        goto LABEL_28; /*0x48cf33*/
      if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf3c*/
        goto LABEL_34; /*0x48cf3c*/
      Network::ShutdownInterface((Network *)v9); /*0x48cf3e*/
    }
    v6 = *(_DWORD *)&dword_A8B238; /*0x48cf53*/
LABEL_27:
    if ( v6 == 3 ) /*0x48cf5b*/
      goto LABEL_31; /*0x48cf5b*/
LABEL_28:
    if ( v6 == 4 || v6 == 2 || v6 == 1 ) /*0x48cf69*/
    {
LABEL_31:
      if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf72*/
        goto LABEL_34; /*0x48cf72*/
      ScenarioClass::SaveMultiplayerSettings((char *)&dword_A8B238); /*0x48cf79*/
    }
    if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf85*/
    {
LABEL_34:
      v7 = dword_A8D5F8; /*0x48cf87*/
      LOBYTE(v7) = dword_A8D5F8 & 0xFD; /*0x48cf92*/
      *(_DWORD *)&dword_A8B238 = 0; /*0x48cf94*/
      dword_A8D5F8 = v7; /*0x48cf9a*/
      (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 16))(dword_887640); /*0x48cfa1*/
    }
    LOBYTE(inited) = MenuSelect(v9); /*0x48cfa4*/
  }
  if ( dword_887640 ) /*0x48cfbf*/
    LOBYTE(inited) = (*(char (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 20))(dword_887640); /*0x48cfc3*/
  return inited; /*0x48cd8b*/
}



// ==== 0x0048D080  Event::Dispatch  this=Event  sig=csp ====
int Event::Dispatch()
{
  int result; // eax
  _BYTE v1[4]; // [esp+10h] [ebp-100h] BYREF
  _DWORD v2[6]; // [esp+14h] [ebp-FCh] BYREF
  _BYTE v3[228]; // [esp+2Ch] [ebp-E4h]

  UpdateAudioVideo(); /*0x48d08c*/
  if ( g_AsyncIOState > 0 && *(_DWORD *)AsyncIO_Instance ) /*0x48d09f*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)AsyncIO_Instance + 8))(*(_DWORD *)AsyncIO_Instance); /*0x48d0a7*/
  result = dword_A8B238[0]; /*0x48d0aa*/
  if ( dword_A8B238[0] == 3 || dword_A8B238[0] == 4 ) /*0x48d0b7*/
  {
    Network::Dispatch(); /*0x48d0b9*/
    result = dword_A8B238[0]; /*0x48d0be*/
  }
  if ( result == 1 ) /*0x48d0c6*/
  {
    if ( (dword_A8DAB8 & 1) == 0 ) /*0x48d0da*/
      return result; /*0x48d0da*/
    goto LABEL_11; /*0x48d0da*/
  }
  if ( result == 2 ) /*0x48d0cb*/
  {
LABEL_11:
    Stream::ReadPacket((int)&unk_A8EA70); /*0x48d0e0*/
    if ( dword_A8B230[13720] && ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v2, (int)v1) > 0 ) /*0x48d10f*/
    {
      do /*0x48d15f*/
      {
        if ( v2[0] == 108 && v3[0] != dword_A8DB30 ) /*0x48d129*/
          Network::UpdateLatencyDisplay((int)dword_AC4F58, 1, (double)*(int *)&v3[1], NAN); /*0x48d144*/
      }
      while ( ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v2, (int)v1) > 0 ); /*0x48d15f*/
    }
    result = dword_A8B238[0]; /*0x48d161*/
  }
  if ( result == 4 ) /*0x48d169*/
  {
    LOBYTE(result) = byte_B77DC2; /*0x48d16b*/
    if ( !byte_B77DC2 ) /*0x48d172*/
    {
      result = time(0); /*0x48d176*/
      if ( result != dword_89E9B0 ) /*0x48d186*/
      {
        if ( ppv && !dword_B77DCC ) /*0x48d199*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 12))(ppv); /*0x48d19e*/
        if ( g_UIPointerTable ) /*0x48d1a8*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)g_UIPointerTable + 28))(g_UIPointerTable); /*0x48d1ad*/
        result = time(0); /*0x48d1b2*/
        dword_89E9B0 = result; /*0x48d1ba*/
      }
    }
  }
  return result; /*0x48d1bf*/
}



// ==== 0x0048D1D0  Event_Dispatch::Return0  this=Event_Dispatch  sig=ida-proto ====
char Event_Dispatch_Return0()
{
  Event::Dispatch(); /*0x48d1d0*/
  return 0; /*0x48d1d7*/
}



// ==== 0x0048D1E0  Network::Dispatch  this=Network  sig=csp ====
char Network::Dispatch(Network *this)
{
  int v1; // esi
  int i; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // esi
  bool v7; // zf
  char **v8; // edi
  char *v9; // ebx
  char *v10; // ebp
  char *v11; // eax
  int v12; // edi
  int v13; // ecx
  unsigned __int16 v14; // ax
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  int v18; // eax
  int v19; // esi
  int v20; // ecx
  int v21; // esi
  char *Class; // eax
  int v23; // ebx
  char *v24; // eax
  char **v25; // esi
  char *v26; // edi
  char *v27; // ebp
  char *v28; // eax
  int v29; // esi
  __int16 v30; // si
  int j; // esi
  int ConnectionSpeed; // edi
  int PlayerByID; // eax
  char *v34; // eax
  char *v35; // esi
  int v36; // eax
  int PlayerColorScheme; // eax
  int v38; // esi
  char *v39; // eax
  int v41; // [esp+8h] [ebp-208h]
  int v42; // [esp+20h] [ebp-1F0h]
  unsigned __int16 *v43; // [esp+20h] [ebp-1F0h]
  _WORD *v44; // [esp+24h] [ebp-1ECh]
  int v45; // [esp+24h] [ebp-1ECh]
  int v46; // [esp+28h] [ebp-1E8h] BYREF
  int Ticks; // [esp+2Ch] [ebp-1E4h] BYREF
  int v48; // [esp+34h] [ebp-1DCh]
  char v49[8]; // [esp+38h] [ebp-1D8h] BYREF
  int v50; // [esp+40h] [ebp-1D0h]
  int v51[22]; // [esp+48h] [ebp-1C8h] BYREF
  __int16 v52; // [esp+A0h] [ebp-170h]
  char v53; // [esp+A2h] [ebp-16Eh]

  if ( (byte_89E950 & 1) == 0 ) /*0x48d1fc*/
  {
    v1 = dword_81D4E4; /*0x48d1fe*/
    byte_89E950 |= 1u; /*0x48d20d*/
    dword_89E920 = Timer::GetTicks(); /*0x48d218*/
    dword_89E928 = v1; /*0x48d21d*/
    atexit(nullsub_8); /*0x48d228*/
  }
  MessageLoop(); /*0x48d230*/
  Network::ReceiveLoop(&unk_A8E9C0); /*0x48d23a*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x48d24b*/
  {
    LOBYTE(i) = BYTE2(stru_A8D600.Network_field_0xC); /*0x48d251*/
    if ( BYTE2(stru_A8D600.Network_field_0xC) ) /*0x48d258*/
      return i; /*0x48d258*/
    v3 = dword_89E928; /*0x48d263*/
    if ( dword_89E920 != -1 ) /*0x48d26c*/
    {
      v4 = Timer::GetTicks() - dword_89E920; /*0x48d278*/
      if ( v4 >= v3 ) /*0x48d280*/
        goto LABEL_10; /*0x48d280*/
      v3 -= v4; /*0x48d282*/
    }
    if ( !v3 || byte_A8E2A4 ) /*0x48d28f*/
    {
LABEL_10:
      if ( dword_A8DA84 ) /*0x48d29c*/
      {
        MessageLoop(); /*0x48d2a2*/
        Network::ReceiveLoop(&unk_A8E9C0); /*0x48d2ac*/
        if ( !Network::GetQueueCount(&unk_A8E9C0) ) /*0x48d2b6*/
        {
          memset(v51, 0, sizeof(v51)); /*0x48d2cc*/
          v52 = 0; /*0x48d2ce*/
          v53 = 0; /*0x48d2d0*/
          v51[0] = 41; /*0x48d2d6*/
          CopyWideToChar(&v51[1], (char *)*dword_A8DA78, -1); /*0x48d2e6*/
          Network_Disconnect(); /*0x48d2eb*/
          Debug::Log(); /*0x48d2f5*/
          HIWORD(v5) = HIWORD(dword_A8DA84); /*0x48d2fa*/
          v6 = 1; /*0x48d304*/
          if ( dword_A8DA84 > 1 ) /*0x48d306*/
          {
            v44 = &MEMORY[0xA8E2B4]; /*0x48d30c*/
            do /*0x48d484*/
            {
              LOWORD(v5) = *v44; /*0x48d318*/
              v7 = *v44 == 0; /*0x48d31b*/
              v46 = v5; /*0x48d31e*/
              if ( !v7 ) /*0x48d322*/
              {
                ToWideStringChar((char *)dword_A8DA78[v6]); /*0x48d331*/
                Debug::Log(); /*0x48d33c*/
                Network::SendMessage(&unk_A8E9C0.Socket, (int)v51, 91, 0, dword_A8DA78[v6] + 40, v46, 0); /*0x48d366*/
                MessageLoop(); /*0x48d36b*/
                Network::ReceiveLoop(&unk_A8E9C0); /*0x48d375*/
                v42 = 0; /*0x48d37a*/
                v8 = (char **)dword_A8DA90; /*0x48d382*/
                while ( 1 ) /*0x48d38d*/
                {
                  v9 = (char *)dword_A8DA78[v6]; /*0x48d38d*/
                  v10 = ToWideStringChar(*v8); /*0x48d399*/
                  v11 = ToWideStringChar(v9); /*0x48d39b*/
                  if ( !_strcmpi(v10, v11) ) /*0x48d3a2*/
                    break; /*0x48d3a2*/
                  ++v8; /*0x48d3b2*/
                  ++v42; /*0x48d3bc*/
                  if ( (int)v8 >= (int)&dword_A8DAB0 ) /*0x48d3c0*/
                    goto LABEL_25; /*0x48d3c0*/
                }
                v12 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x48d3cc*/
                if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x48d3d5*/
                  v12 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x48d3e7*/
                if ( v12 - dword_A8E284[v42] > 2400 ) /*0x48d3fa*/
                {
                  ToWideStringChar((char *)dword_A8DA78[v6]); /*0x48d404*/
                  Debug::Log(); /*0x48d40f*/
                  v13 = dword_A8DA78[v6]; /*0x48d41d*/
                  v14 = *(_WORD *)(v13 + 131); /*0x48d420*/
                  if ( v14 != (_WORD)v46 && v14 >= 0x400u ) /*0x48d432*/
                  {
                    ToWideStringChar((char *)v13); /*0x48d434*/
                    Debug::Log(); /*0x48d43f*/
                    v15 = dword_A8DA78[v6]; /*0x48d44d*/
                    LOWORD(v16) = *(_WORD *)(v15 + 131); /*0x48d456*/
                    Network::SendMessage(&unk_A8E9C0.Socket, (int)v51, 91, 0, v15 + 40, v16, 0); /*0x48d46c*/
                  }
                }
              }
LABEL_25:
              HIWORD(v5) = HIWORD(dword_A8DA84); /*0x48d471*/
              ++v6; /*0x48d47a*/
              ++v44; /*0x48d480*/
            }
            while ( v6 < dword_A8DA84 ); /*0x48d484*/
          }
          Ticks = Timer::GetTicks(); /*0x48d49d*/
          v48 = 120; /*0x48d4a1*/
          while ( Network::GetQueueCount(&unk_A8E9C0) > 0 ) /*0x48d4b0*/
          {
            v17 = v48; /*0x48d4b6*/
            if ( Ticks != -1 ) /*0x48d4bd*/
            {
              v18 = Timer::GetTicks() - Ticks; /*0x48d4c8*/
              if ( v18 >= v48 ) /*0x48d4ce*/
                break; /*0x48d4ce*/
              v17 = v48 - v18; /*0x48d4d0*/
            }
            if ( v17 <= 0 ) /*0x48d4d4*/
              break; /*0x48d4d4*/
            MessageLoop(); /*0x48d4d6*/
            Network::ReceiveLoop(&unk_A8E9C0); /*0x48d4e0*/
          }
          v19 = dword_81D4E4; /*0x48d4f3*/
          dword_89E920 = Timer::GetTicks(); /*0x48d502*/
          dword_89E924 = v50; /*0x48d510*/
          dword_89E928 = v19; /*0x48d515*/
          byte_A8E2A4 = 0; /*0x48d51b*/
          Connection::Close((Connection *)&unk_A8E9C0); /*0x48d522*/
        }
      }
    }
  }
  LOBYTE(i) = BYTE2(stru_A8D600.Network_field_0xC); /*0x48d527*/
  if ( !BYTE2(stru_A8D600.Network_field_0xC) ) /*0x48d52e*/
  {
    for ( i = Network::Send( /*0x48d554*/
                (Network *)&unk_A8E9C0,
                (int)&stru_A8D600.__pad_34[4],
                (int)&unk_A8D800,
                (int)dword_A8D804,
                (int)&word_A8D810);
          i;
          i = Network::Send(
                (Network *)&unk_A8E9C0,
                (int)&stru_A8D600.__pad_34[4],
                (int)&unk_A8D800,
                (int)dword_A8D804,
                (int)&word_A8D810) )
    {
      if ( word_A8D810 == 0xAA04 ) /*0x48d563*/
      {
        v20 = *(_DWORD *)&stru_A8D600.__pad_34[4]; /*0x48d569*/
        switch ( *(_DWORD *)&stru_A8D600.__pad_34[4] ) /*0x48d583*/
        {
          case 0xA: /*0x48d583*/
            for ( j = 0; j < Network::GetSendCount(&unk_A8E9C0); ++j ) /*0x48d828*/
            {
              ConnectionSpeed = Network::GetConnectionSpeed(&unk_A8E9C0, j); /*0x48d839*/
              PlayerByID = Network::FindPlayerByID((Network *)&unk_A8E9C0, ConnectionSpeed); /*0x48d841*/
              if ( (unsigned __int8)GUID::Compare(dword_A8D804, PlayerByID) ) /*0x48d84c*/
                HandleNetworkPlayerDisconnect(ConnectionSpeed, 0); /*0x48d859*/
            }
            break; /*0x48d86b*/
          case 0xC: /*0x48d583*/
            if ( (!BYTE1(stru_A8D600.Network_field_0xC) /*0x48d925*/
               || *(_DWORD *)&stru_A8D600.__pad_87[197] == WideString::Hash((wchar_t *)&stru_A8D600.Network_field_0x10))
              && (!byte_A8DBA0
               || ((unsigned __int8)Factory::GetLinkedIndex(
                                      (Factory *)&stru_B052C0.__pad_0[16],
                                      *(_DWORD *)(*dword_A8DA78 + 111))
                 & stru_A8D600.__pad_64[3]) != 0) )
            {
              v35 = CharToWideString(&stru_A8D600.__pad_34[8]); /*0x48d935*/
              LOWORD(v36) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x48d94a*/
              v41 = v36; /*0x48d955*/
              PlayerColorScheme = SessionClass::GetPlayerColorScheme(*(unsigned int *)&stru_A8D600.__pad_87[193]); /*0x48d961*/
              MessageListClass::AddMessage( /*0x48d979*/
                (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                (wchar_t *)v35,
                *(int *)&stru_A8D600.__pad_87[193],
                (wchar_t *)&stru_A8D600.__pad_64[4],
                PlayerColorScheme,
                16454,
                v41,
                0);
              PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x48d995*/
              MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x48d9a1*/
              wcscpy(MEMORY[0xA8D112], (const wchar_t *)&stru_A8D600.__pad_64[4]); /*0x48d9b0*/
            }
            break; /*0x48d9b8*/
          case 0xF: /*0x48d583*/
            Debug::Log(); /*0x48da4a*/
            v38 = 0; /*0x48da57*/
            if ( dword_A8DA84 > 0 ) /*0x48da5b*/
            {
              while ( 1 ) /*0x48da6e*/
              {
                if ( (unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[v38] + 40), (int)dword_A8D804) ) /*0x48da6e*/
                {
                  v39 = ToWideStringChar((char *)dword_A8DA78[v38]); /*0x48da85*/
                  if ( !_strcmpi(v39, &stru_A8D600.__pad_34[8]) ) /*0x48da8b*/
                    break; /*0x48da8b*/
                }
                if ( ++v38 >= dword_A8DA84 ) /*0x48da9f*/
                  goto LABEL_95; /*0x48da9f*/
              }
              Network::UpdateLatencyDisplay( /*0x48dabd*/
                (int)&stru_AC4B30.__pad_EC[828],
                v38,
                (double)*(int *)&stru_A8D600.__pad_64[3],
                NAN);
            }
            break; /*0x48dac2*/
          case 0x10: /*0x48d583*/
          case 0x13: /*0x48d583*/
            break;
          case 0x1C: /*0x48d583*/
            Network::syncGameState((Network *)&stru_A8D600.__pad_34[4]); /*0x48d594*/
            break; /*0x48d599*/
          case 0x1D: /*0x48d583*/
            if ( (!BYTE1(stru_A8D600.Network_field_0xC) /*0x48da2f*/
               || *(_DWORD *)&stru_A8D600.__pad_64[9] == WideString::Hash((wchar_t *)&stru_A8D600.Network_field_0x10))
              && (!byte_A8DBA0
               || ((unsigned __int8)Factory::GetLinkedIndex(
                                      (Factory *)&stru_B052C0.__pad_0[16],
                                      *(_DWORD *)(*dword_A8DA78 + 111))
                 & stru_A8D600.__pad_64[3]) != 0)
              && (dword_A8D110 && *(_DWORD *)&dword_A8B238 == 3 || MEMORY[0xA8D111] && *(_DWORD *)&dword_A8B238 == 4) )
            {
              LOBYTE(v20) = stru_A8D600.__pad_64[4]; /*0x48da35*/
              PlayTauntClass(v20); /*0x48da3b*/
            }
            break; /*0x48da40*/
          case 0x20: /*0x48d583*/
            PlacePlayerBeacon( /*0x48d7cb*/
              &g_VisibilitySystem,
              stru_A8D600.__pad_73[1],
              *(int *)&stru_A8D600.__pad_64[3],
              *(int *)&stru_A8D600.__pad_64[7],
              *(int *)stru_A8D600.Network_field_0x6F,
              stru_A8D600.__pad_73[0]);
            break; /*0x48d7d0*/
          case 0x21: /*0x48d583*/
            Network::SendBeaconDelete((Network *)&g_VisibilitySystem, stru_A8D600.__pad_73[1], stru_A8D600.__pad_73[0]); /*0x48d7ea*/
            break; /*0x48d7ef*/
          case 0x22: /*0x48d583*/
            Network::SendBeacon( /*0x48d810*/
              (Network *)&g_VisibilitySystem,
              (wchar_t *)&stru_A8D600.__pad_64[5],
              stru_A8D600.__pad_64[4],
              stru_A8D600.__pad_64[3],
              0);
            break; /*0x48d815*/
          case 0x27: /*0x48d583*/
            if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x48d5a4*/
            {
              if ( byte_A8DBA0 ) /*0x48d5b1*/
              {
                v21 = 0; /*0x48d5bc*/
                if ( Network::GetSendCount(&unk_A8E9C0) > 0 ) /*0x48d5c5*/
                {
                  while ( Network::GetConnectionSpeed(&unk_A8E9C0, v21) != *(_DWORD *)&stru_A8D600.__pad_64[3] ) /*0x48d5de*/
                  {
                    if ( ++v21 >= Network::GetSendCount(&unk_A8E9C0) ) /*0x48d5ed*/
                      goto LABEL_95; /*0x48d5ed*/
                  }
                  Class = (char *)Network::GetClass((Network *)&unk_A8E9C0, *(int *)&stru_A8D600.__pad_64[3]); /*0x48d5fa*/
                  ToWideStringChar(Class); /*0x48d601*/
                  Debug::Log(); /*0x48d60c*/
                  Network_Helper_646DF0(v21); /*0x48d616*/
                }
              }
            }
            break; /*0x48d61b*/
          case 0x29: /*0x48d583*/
            Debug::Log(); /*0x48d635*/
            v23 = 0; /*0x48d642*/
            if ( dword_A8DA84 > 0 ) /*0x48d646*/
            {
              v43 = &dword_A8E2B2; /*0x48d64c*/
              do /*0x48d788*/
              {
                if ( (unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[v23] + 40), (int)dword_A8D804) ) /*0x48d665*/
                {
                  v24 = ToWideStringChar((char *)dword_A8DA78[v23]); /*0x48d680*/
                  if ( !_strcmpi(v24, &stru_A8D600.__pad_34[8]) ) /*0x48d686*/
                  {
                    v45 = 0; /*0x48d696*/
                    v25 = (char **)dword_A8DA90; /*0x48d69a*/
                    while ( 1 ) /*0x48d6a6*/
                    {
                      v26 = (char *)dword_A8DA78[v23]; /*0x48d6a6*/
                      v27 = ToWideStringChar(*v25); /*0x48d6b0*/
                      v28 = ToWideStringChar(v26); /*0x48d6b2*/
                      if ( !_strcmpi(v27, v28) ) /*0x48d6b9*/
                        break; /*0x48d6b9*/
                      ++v25; /*0x48d6c9*/
                      ++v45; /*0x48d6d3*/
                      if ( (int)v25 >= (int)&dword_A8DAB0 ) /*0x48d6d7*/
                        goto LABEL_56; /*0x48d6d7*/
                    }
                    v29 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x48d6e0*/
                    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x48d6e9*/
                      v29 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x48d6fb*/
                    dword_A8E284[v45] = v29; /*0x48d701*/
LABEL_56:
                    v30 = *(_WORD *)dword_A8D804; /*0x48d708*/
                    if ( *(_WORD *)dword_A8D804 != *(_WORD *)(dword_A8DA78[v23] + 40) || *(_WORD *)dword_A8D804 != *v43 ) /*0x48d724*/
                    {
                      Debug::Log(); /*0x48d72b*/
                      if ( !v30 ) /*0x48d73f*/
                        v30 = 1234; /*0x48d741*/
                      *v43 = v30; /*0x48d746*/
                      Network::SetPort((Network *)(dword_A8DA78[v23] + 40), v30); /*0x48d756*/
                      Debug::Log(); /*0x48d76d*/
                    }
                  }
                }
                ++v23; /*0x48d77e*/
                ++v43; /*0x48d784*/
              }
              while ( v23 < dword_A8DA84 ); /*0x48d788*/
            }
            break; /*0x48d788*/
          case 0x2F: /*0x48d583*/
            Debug::Log(); /*0x48d87c*/
            if ( *(_DWORD *)&dword_A8B238 == 4 && *(_DWORD *)&stru_887598.isAliveFlag ) /*0x48d898*/
            {
              v34 = Network::processAcknowledgment((Network *)&stru_B052C0.__pad_0[16], &stru_A8D600.__pad_34[8]); /*0x48d8a8*/
              Network::GetAddress((Network *)v34, v49, (int)&Ticks, &v46); /*0x48d8be*/
              (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&stru_887598.isAliveFlag + 120))( /*0x48d8d5*/
                *(_DWORD *)&stru_887598.isAliveFlag,
                &Ticks,
                v46);
            }
            break; /*0x48d8d8*/
          default:
            SendNetworkPlayerOptions(&stru_A8D600.__pad_34[4], (int)dword_A8D804); /*0x48dace*/
            break; /*0x48dace*/
        }
      }
LABEL_95:
      MessageLoop(); /*0x48dad3*/
      Network::ReceiveLoop(&unk_A8E9C0); /*0x48dadd*/
    }
  }
  return i; /*0x48db08*/
}



// ==== 0x0048DB70  nullsub_8  this=-  sig=ida-proto ====
void __cdecl nullsub_8()
{
  ; /*0x48db70*/
}



// ==== 0x0048DB80  HouseClass::FindHouseIndexByName  this=HouseClass  sig=csp ====
int __thiscall HouseClass::FindHouseIndexByName(HouseClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x48db87*/
    return -1; /*0x48dbac*/
  v2 = 0; /*0x48db89*/
  v3 = (char **)&off_7E1B60; /*0x48db8b*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x48db9e*/
  {
    ++v3; /*0x48dba0*/
    ++v2; /*0x48dba3*/
    if ( (int)v3 >= (int)&dword_7E1B74 ) /*0x48dbaa*/
      return -1; /*0x48dbaa*/
  }
  return v2; /*0x48dbac*/
}



// ==== 0x0048DBE0  ScenarioClass::FindTerrainTypeIndex  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::FindTerrainTypeIndex(ScenarioClass *this)
{
  int v2; // edi
  char *v3; // esi

  v2 = 0; /*0x48dbe5*/
  v3 = "TEMPERATE"; /*0x48dbe7*/
  while ( _strcmpi((char *)this, v3) ) /*0x48dbf8*/
  {
    v3 += 112; /*0x48dbfa*/
    ++v2; /*0x48dbfd*/
    if ( (int)v3 >= (int)&dbl_7E1E18 ) /*0x48dc04*/
      return -1; /*0x48dc0c*/
  }
  return v2; /*0x48dc06*/
}



// ==== 0x0048DC90  MapClass::UnselectAll_ClearLimboLaunchers  this=MapClass  sig=csp ====
int MapClass::UnselectAll_ClearLimboLaunchers(MapClass *this)
{
  int result; // eax
  int v2; // esi
  int v3; // edx
  int *v4; // ecx

  while ( *(_DWORD *)&stru_A8EB00.?[228] ) /*0x48dc97*/
    (*(void (__thiscall **)(_DWORD))(***(_DWORD ***)&stru_A8EB00.?[216] + 336))(**(_DWORD **)&stru_A8EB00.?[216]); /*0x48dca2*/
  Selection::SetCurrent(0); /*0x48dcb3*/
  v4 = (int *)&g_VisibilitySystem; /*0x48dcb8*/
  result = g_VisibilitySystem.customSound_controller[4]; /*0x431060*/
  if ( result ) /*0x431065*/
  {
    v2 = 8; /*0x431069*/
    do /*0x431085*/
    {
      v3 = 3; /*0x431070*/
      do /*0x431082*/
      {
        result = *v4; /*0x431075*/
        if ( *v4 ) /*0x431075*/
          *(_BYTE *)(result + 12) &= ~2u; /*0x43107b*/
        ++v4; /*0x43107e*/
        --v3; /*0x431081*/
      }
      while ( v3 ); /*0x431082*/
      --v2; /*0x431084*/
    }
    while ( v2 ); /*0x431085*/
  }
  return result; /*0x431089*/
}



// ==== 0x0048DCD0  TechnoTypeClass::GetByTypeAndIndex  this=IUnknown  sig=csp ====
int __fastcall FactoryClass_LookupType(int a1, int a2)
{
  int result; // eax

  switch ( a1 ) /*0x48dce0*/
  {
    case 1: /*0x48dce0*/
    case 40: /*0x48dce0*/
      result = *((_DWORD *)dword_A83CE4 + a2); /*0x48dcec*/
      break; /*0x48dcef*/
    case 2: /*0x48dce0*/
    case 3: /*0x48dce0*/
      result = *((_DWORD *)dword_A8B21C + a2); /*0x48dd09*/
      break; /*0x48dd0c*/
    case 6: /*0x48dce0*/
    case 7: /*0x48dce0*/
      result = *((_DWORD *)dword_A83C6C + a2); /*0x48dcf6*/
      break; /*0x48dcf9*/
    case 15: /*0x48dce0*/
    case 16: /*0x48dce0*/
      result = *((_DWORD *)dword_A8E34C + a2); /*0x48dcff*/
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
int __thiscall INIClass::readSection(INIClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x48de77*/
    return 0; /*0x48de9c*/
  v2 = 0; /*0x48de79*/
  v3 = (char **)&off_7E523C; /*0x48de7b*/
  while ( _strcmpi(this->__pad_0, *v3) ) /*0x48de8e*/
  {
    ++v3; /*0x48de90*/
    ++v2; /*0x48de93*/
    if ( (int)v3 >= (int)&off_7E5288 ) /*0x48de9a*/
      return 0; /*0x48de9a*/
  }
  return v2; /*0x48de9c*/
}



// ==== 0x0048DEB0  ObjectClass::COMStub_48DEB0  this=ObjectClass  sig=csp ====
int __thiscall COMStub_48DEB0(ObjectClass *this)
{
  int v1; // eax

  v1 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)this); /*0x48deb3*/
  if ( v1 == -1 ) /*0x48debd*/
    return 0; /*0x48dec8*/
  else
    return 1 << v1; /*0x48dec5*/
}



// ==== 0x0048DED0  ObjectClass::nullsub_51  this=ObjectClass  sig=csp ====
void nullsub_51(ObjectClass *this)
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
int __thiscall LookupNameIndex(ObjectClass *this)
{
  int v2; // esi

  if ( !this ) /*0x48df36*/
    return -1; /*0x48df36*/
  if ( !_strcmpi(g_Str__none_, (char *)this) ) /*0x48df3e*/
    return -1; /*0x48df3e*/
  v2 = 0; /*0x48df4f*/
  if ( g_MissionQueueFrame.localVariables[583] <= 0 ) /*0x48df53*/
    return -1; /*0x48df75*/
  while ( _strcmpi((char *)this, *(char **)(g_MissionQueueFrame.localVariables[580] + 4 * v2)) ) /*0x48df69*/
  {
    if ( ++v2 >= g_MissionQueueFrame.localVariables[583] ) /*0x48df73*/
      return -1; /*0x48df73*/
  }
  return v2; /*0x48df75*/
}



// ==== 0x0048DF80  OverlayTypeClass::LookupByName  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::LookupByName(OverlayTypeClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !_strcmpi(g_Str__none_, (char *)this) || !this ) /*0x48df99*/
    return -1; /*0x48dfbe*/
  v2 = 0; /*0x48df9b*/
  v3 = off_81DA28; /*0x48df9d*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x48dfb0*/
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



// ==== 0x0048DFF0  ObjectTypeClass::loadTypeMember_48DFF0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_48DFF0(ObjectTypeClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x48dff7*/
    return -1; /*0x48e01c*/
  v2 = 0; /*0x48dff9*/
  v3 = off_81DA58; /*0x48dffb*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x48e00e*/
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



// ==== 0x0048E050  AnimTypeClass::LookupByName  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::LookupByName(AnimTypeClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x48e057*/
    return -1; /*0x48e07c*/
  v2 = 0; /*0x48e059*/
  v3 = off_81DA78; /*0x48e05b*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x48e06e*/
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
    return g_Str__none_; /*0x48e09d*/
  else
    return off_81DA78[a1]; /*0x48e095*/
}



// ==== 0x0048E0B0  ObjectClass::DumpNetworkStats  this=ObjectClass  sig=csp ====
FILE *DumpNetworkStats(ObjectClass *this)
{
  FILE *result; // eax
  FILE *v2; // esi
  int v3; // eax
  int i; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  char *v7; // eax

  result = *(FILE **)&dword_A8B238; /*0x48e0b1*/
  if ( *(_DWORD *)&dword_A8B238 == 4 )
  {
    result = fopen(aMpstatsTxt, Mode); /*0x48e0ca*/
    v2 = result; /*0x48e0cf*/
    if ( result )
    {
      fprintf(result, "Frames: %d\n", *(_DWORD *)&stru_A8EB00.?[416]);
      if ( *(_DWORD *)&g_MissionQueueFrame.waypoints[290] ) /*0x48e0f8*/
        v3 = *(_DWORD *)&g_MissionQueueFrame.waypoints[286] / *(_DWORD *)&g_MissionQueueFrame.waypoints[290]; /*0x48e101*/
      else
        v3 = 0; /*0x48e105*/
      fprintf(v2, "Average FPS: %d\n", v3);
      fprintf(v2, "Max MaxAhead: %d\n", dword_A8B568);
      fprintf(v2, "Latency setting: %d\n", dword_A8DB9C);
      fprintf(v2, "Game speed setting: %d\n", stru_A8EB00.ObjectTypeClass[24]);
      if ( *(_DWORD *)&stru_887598.isAliveFlag )
      {
        for ( i = 0;
              i < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 72))(*(_DWORD *)&stru_887598.isAliveFlag);
              ++i )
        {
          v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 76))( /*0x48e16a*/
                           *(_DWORD *)&stru_887598.isAliveFlag,
                           i);
          if ( v5 )
            fprintf(
              v2,
              "Local address: %d.%d.%d.%d\n",
              (unsigned __int8)*v5,
              BYTE1(*v5),
              (unsigned __int8)BYTE2(*v5),
              HIBYTE(*v5));
        }
      }
      v6 = &unk_A8B5C4; /*0x48e1ad*/
      do
      {
        if ( *((_BYTE *)v6 - 80) )
        {
          fprintf(v2, "\nName: %s\n", (const char *)v6 - 80);
          v7 = Network::FormatAddress((Network *)(v6 + 3), 0); /*0x48e1d4*/
          fprintf(v2, "Address: %s\n", v7);
          fprintf(v2, "Max avg round trip: %d\n", *v6);
          fprintf(v2, "Max round trip: %d\n", *(v6 - 4));
          fprintf(v2, "Resends: %d\n", *(v6 - 3));
          fprintf(v2, "Frame sync stalls: %d\n", v6[1]);
          fprintf(v2, "Command cound stalls: %d\n", v6[2]);
          fprintf(v2, "Lost: %d\n", *(v6 - 2));
          fprintf(v2, "Percent lost: %d\n", *(v6 - 1));
        }
        v6 += 26; /*0x48e253*/
      }
      while ( (int)v6 < (int)dword_A8B904 );
      return (FILE *)fclose(v2); /*0x48e263*/
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
_DWORD *__thiscall ControlClass::Construct(ControlClass *this, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  GadgetClass::Construct((ShpButtonClass *)this, a3, a4, a5, a6, a7, a8); /*0x48e543*/
  *((_DWORD *)this + 10) = 0; /*0x48e54c*/
  *((_DWORD *)this + 9) = a2; /*0x48e553*/
  *(_DWORD *)this->__pad_0 = &ControlClass::`vftable'; /*0x48e556*/
  return this->__pad_0; /*0x48e55e*/
}



// ==== 0x0048E570  ControlClass::CtorFromData  this=ControlClass  sig=csp ====
_DWORD *__thiscall ControlClass::CtorFromData(ControlClass *this, int a2)
{
  ControlClass::Constructor(this, a2); /*0x48e579*/
  *((_DWORD *)this + 9) = *(_DWORD *)(a2 + 36); /*0x48e581*/
  *((_DWORD *)this + 10) = *(_DWORD *)(a2 + 40); /*0x48e587*/
  *(_DWORD *)this->__pad_0 = &ControlClass::`vftable'; /*0x48e58a*/
  return this->__pad_0; /*0x48e592*/
}



// ==== 0x0048E5A0  ControlClass::Draw  this=ControlClass  sig=csp ====
int __thiscall CellClass::Draw(ControlClass *this, int a2, _DWORD *a3, int a4)
{
  int v5; // eax
  int v6; // ecx

  if ( a2 ) /*0x48e5af*/
  {
    v5 = *((_DWORD *)this + 9); /*0x48e5b1*/
    if ( v5 ) /*0x48e5b6*/
    {
      BYTE1(v5) |= 0x80u; /*0x48e5b8*/
      *a3 = v5; /*0x48e5be*/
      if ( (a2 & 0x40) != 0 && (*(_BYTE *)(this + 2) & 0x10) != 0 ) /*0x48e5c6*/
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
  v6 = *((_DWORD *)this + 10); /*0x48e5d5*/
  if ( v6 ) /*0x48e5da*/
    (*(void (__thiscall **)(int, int, _DWORD *, ControlClass *))(*(_DWORD *)v6 + 76))(v6, a2, a3, this); /*0x48e5e1*/
  return COMObject::ActivateThunk((GadgetClass *)this, a2, (int)a3, 0); /*0x48e5ef*/
}



// ==== 0x0048E600  ControlClass::SetMember10  this=ControlClass  sig=csp ====
int __thiscall MiniStub_48e600(_DWORD *this, int a2)
{
  *(this + 10) = a2; /*0x48e604*/
  return a2; /*0x48e607*/
}



// ==== 0x0048E610  ControlClass::GetMember09  this=ControlClass  sig=csp ====
int __thiscall COMObject::GetMember09(ControlClass *this)
{
  return *((_DWORD *)this + 9); /*0x48e613*/
}



// ==== 0x0048E620  ControlClass::DispatchClick  this=ControlClass  sig=csp ====
int __thiscall Control::DispatchClick(ControlClass *this, int a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 10); /*0x48e623*/
  if ( v3 ) /*0x48e628*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 108))(v3, 0); /*0x48e62e*/
  return GadgetClass::ClearState((ShpButtonClass *)this, a2); /*0x48e63d*/
}



// ==== 0x0048E650  GadgetClass::StubReturnFalse  this=GadgetClass  sig=csp ====
void __stdcall CheckListClass::StubReturnFalse(GadgetClass *this, int a2, int a3)
{
  ; /*0x48e650*/
}



// ==== 0x0048E660  ControlClass::QueryInterface  this=ControlClass  sig=csp ====
_DWORD *__thiscall ControlClass::QueryInterface(ControlClass *this, char a2)
{
  GadgetClass::Dtor((GadgetClass *)this); /*0x48e663*/
  if ( (a2 & 1) != 0 ) /*0x48e66d*/
    __3_YAXPAX_Z(this); /*0x48e670*/
  return this->__pad_0; /*0x48e67a*/
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
_DWORD *__thiscall ConvertClass::Construct(ConvertClass *this, int a2, int a3, int a4, int a5, char a6)
{
  int v7; // eax
  int v8; // edi
  bool v9; // cc
  CampaignClass *v10; // eax
  int v11; // eax
  __int16 v12; // cx
  int v13; // eax
  CampaignClass *v14; // eax
  CampaignClass *v15; // edi
  int v16; // eax
  _BYTE *v17; // edi
  int i; // ebp
  int j; // ebp
  int v20; // eax
  unsigned __int8 v21; // cl
  int v22; // eax
  int v23; // ecx
  CampaignClass *v24; // eax
  int v25; // edi
  int v26; // eax
  int v28; // [esp+Ch] [ebp-14h] BYREF
  Color v29; // [esp+10h] [ebp-10h] BYREF
  int v30; // [esp+14h] [ebp-Ch]
  int v31; // [esp+1Ah] [ebp-6h]

  *(_DWORD *)&this->ConvertClass_field_0x2[2] = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 112))(a4); /*0x48e753*/
  *(_DWORD *)&this->__pad_6[2] = 0; /*0x48e756*/
  *(_DWORD *)&this->__pad_6[6] = 0; /*0x48e759*/
  *(_DWORD *)&this->__pad_6[10] = 0; /*0x48e75c*/
  *(_DWORD *)&this->__pad_6[14] = 0; /*0x48e75f*/
  *(_DWORD *)&this->__pad_6[18] = 0; /*0x48e762*/
  *(_DWORD *)&this->__pad_6[22] = 0; /*0x48e765*/
  *(_DWORD *)&this->__pad_6[26] = 0; /*0x48e768*/
  *(_DWORD *)&this->__pad_6[30] = 0; /*0x48e76b*/
  *(_DWORD *)&this->__pad_6[34] = 0; /*0x48e76e*/
  *(_DWORD *)&this->__pad_6[38] = 0; /*0x48e771*/
  *(_DWORD *)&this->__pad_6[42] = 0; /*0x48e774*/
  *(_DWORD *)&this->__pad_6[46] = 0; /*0x48e777*/
  *(_DWORD *)&this->__pad_6[50] = 0; /*0x48e77a*/
  *(_DWORD *)&this->__pad_6[54] = 0; /*0x48e77d*/
  *(_DWORD *)&this->__pad_6[58] = 0; /*0x48e780*/
  *(_DWORD *)&this->__pad_6[62] = 0; /*0x48e783*/
  *(_DWORD *)&this->__pad_6[66] = 0; /*0x48e786*/
  *(_DWORD *)&this->__pad_6[70] = 0; /*0x48e789*/
  *(_DWORD *)&this->__pad_6[74] = 0; /*0x48e78c*/
  *(_DWORD *)&this->__pad_6[78] = 0; /*0x48e78f*/
  *(_DWORD *)&this->__pad_6[82] = 0; /*0x48e792*/
  *(_DWORD *)&this->__pad_6[86] = 0; /*0x48e795*/
  *(_DWORD *)&this->__pad_6[90] = 0; /*0x48e798*/
  *(_DWORD *)&this->__pad_6[94] = 0; /*0x48e79b*/
  *(_DWORD *)&this->__pad_6[98] = 0; /*0x48e79e*/
  *(_DWORD *)&this->__pad_6[102] = 0; /*0x48e7a1*/
  *(_DWORD *)&this->__pad_6[106] = 0; /*0x48e7a4*/
  *(_DWORD *)&this->__pad_6[110] = 0; /*0x48e7a7*/
  *(_DWORD *)&this->__pad_6[114] = 0; /*0x48e7aa*/
  *(_DWORD *)&this->__pad_6[118] = 0; /*0x48e7ad*/
  *(_DWORD *)&this->__pad_6[122] = 0; /*0x48e7b0*/
  *(_DWORD *)&this->__pad_6[126] = 0; /*0x48e7b6*/
  *(_DWORD *)&this->__pad_6[130] = 0; /*0x48e7bc*/
  *(_DWORD *)&this->__pad_6[134] = 0; /*0x48e7c2*/
  *(_DWORD *)&this->__pad_6[138] = 0; /*0x48e7c8*/
  *(_DWORD *)&this->__pad_6[142] = 0; /*0x48e7ce*/
  *(_DWORD *)&this->__pad_6[146] = 0; /*0x48e7d4*/
  *(_DWORD *)&this->__pad_6[150] = 0; /*0x48e7da*/
  *(_DWORD *)&this->__pad_6[154] = 0; /*0x48e7e0*/
  *(_DWORD *)&this->__pad_6[158] = 0; /*0x48e7e6*/
  *(_DWORD *)&this->__pad_6[162] = 0; /*0x48e7ec*/
  *(_DWORD *)&this->__pad_6[166] = 0; /*0x48e7f2*/
  *(_DWORD *)&this->__pad_6[170] = 0; /*0x48e7f8*/
  *(_DWORD *)&this->__pad_6[174] = 0; /*0x48e7fe*/
  *(_DWORD *)&this->__pad_6[178] = 0; /*0x48e804*/
  *(_DWORD *)&this->__pad_6[182] = 0; /*0x48e80a*/
  *(_DWORD *)&this->__pad_6[186] = 0; /*0x48e810*/
  *(_DWORD *)&this->__pad_6[190] = 0; /*0x48e816*/
  *(_DWORD *)&this->__pad_6[194] = 0; /*0x48e81c*/
  *(_DWORD *)&this->__pad_6[198] = 0; /*0x48e822*/
  *(_DWORD *)&this->__pad_6[202] = 0; /*0x48e828*/
  *(_DWORD *)&this->__pad_6[206] = 0; /*0x48e82e*/
  *(_DWORD *)&this->__pad_6[210] = 0; /*0x48e834*/
  *(_DWORD *)&this->__pad_6[214] = 0; /*0x48e83a*/
  *(_DWORD *)&this->__pad_6[218] = 0; /*0x48e840*/
  *(_DWORD *)&this->__pad_6[222] = 0; /*0x48e846*/
  *(_DWORD *)&this->__pad_6[226] = 0; /*0x48e84c*/
  *(_DWORD *)&this->__pad_6[230] = 0; /*0x48e852*/
  *(_DWORD *)&this->__pad_6[234] = 0; /*0x48e858*/
  *(_DWORD *)&this->__pad_6[238] = 0; /*0x48e85e*/
  *(_DWORD *)&this->__pad_6[242] = 0; /*0x48e864*/
  *(_DWORD *)&this->__pad_6[246] = 0; /*0x48e86a*/
  *(_DWORD *)&this->__pad_6[250] = 0; /*0x48e870*/
  *(_DWORD *)&this->__pad_6[254] = 0; /*0x48e876*/
  *(_DWORD *)&this->__pad_6[258] = 0; /*0x48e87c*/
  *(_DWORD *)&this->__pad_6[262] = 0; /*0x48e882*/
  *(_DWORD *)&this->__pad_6[266] = 0; /*0x48e888*/
  *(_DWORD *)&this->__pad_6[270] = 0; /*0x48e88e*/
  *(_DWORD *)&this->__pad_6[274] = 0; /*0x48e894*/
  *(_DWORD *)&this->__pad_6[278] = 0; /*0x48e89a*/
  *(_DWORD *)&this->__pad_6[282] = 0; /*0x48e8a0*/
  v7 = a5; /*0x48e8a6*/
  v8 = 1; /*0x48e8aa*/
  v9 = a5 < 1; /*0x48e8af*/
  *(_DWORD *)&this->__pad_6[286] = 0; /*0x48e8b1*/
  *(_DWORD *)&this->__pad_6[290] = 0; /*0x48e8b7*/
  *(_DWORD *)&this->__pad_6[294] = 0; /*0x48e8bd*/
  *(_DWORD *)&this->__pad_6[298] = 0; /*0x48e8c3*/
  *(_DWORD *)&this->__pad_6[302] = 0; /*0x48e8c9*/
  *(_DWORD *)&this->__pad_6[306] = 0; /*0x48e8cf*/
  *(_DWORD *)&this->__pad_6[310] = 0; /*0x48e8d5*/
  *(_DWORD *)&this->__pad_6[314] = 0; /*0x48e8db*/
  *(_DWORD *)&this->__pad_6[318] = 0; /*0x48e8e1*/
  *(_DWORD *)&this->__pad_6[322] = 0; /*0x48e8e7*/
  *(_DWORD *)&this->__pad_6[326] = 0; /*0x48e8ed*/
  *(_DWORD *)&this->__pad_6[330] = 0; /*0x48e8f3*/
  *(_DWORD *)&this->__pad_6[334] = 0; /*0x48e8f9*/
  *(_DWORD *)&this->__pad_6[338] = 0; /*0x48e8ff*/
  *(_DWORD *)&this->__pad_6[342] = 0; /*0x48e905*/
  *(_DWORD *)&this->__pad_6[346] = 0; /*0x48e90b*/
  *(_DWORD *)&this->__pad_6[350] = 0; /*0x48e911*/
  *(_DWORD *)&this->__pad_6[354] = 0; /*0x48e917*/
  *(_DWORD *)&this->__pad_6[358] = v7; /*0x48e91d*/
  this->ConvertClass_field_0x170 = 0; /*0x48e923*/
  *(_DWORD *)this->__pad_174 = 0; /*0x48e929*/
  this->ConvertClass_field_0x178 = 0; /*0x48e92f*/
  *((_DWORD *)this + 95) = 0; /*0x48e935*/
  *(_DWORD *)this->__pad_0 = &ConvertClass::`vftable'; /*0x48e93b*/
  if ( v9 ) /*0x48e941*/
    *(_DWORD *)&this->__pad_6[358] = 1; /*0x48e943*/
  if ( *(_DWORD *)&this->ConvertClass_field_0x2[2] == 1 ) /*0x48e94f*/
  {
    v10 = (CampaignClass *)__2_YAPAXI_Z(0x100u); /*0x48e95a*/
    this->ConvertClass_field_0x178 = v10; /*0x48e95f*/
    LOBYTE(v10->AbstractClass) = 0; /*0x48e968*/
    do /*0x48e9df*/
    {
      v11 = ComputeColorSaturation(a2 + 2 * (v8 % 256) + v8 % 256, a2 + 2 * (v8 % 256), (int)&a5); /*0x48e98b*/
      v12 = *(_WORD *)v11; /*0x48e990*/
      LOBYTE(v11) = *(_BYTE *)(v11 + 2); /*0x48e993*/
      LOWORD(v29.Color_field_00) = v12; /*0x48e996*/
      BYTE2(v29.Color_field_00) = (unsigned __int8)v11 >> 1; /*0x48e9a5*/
      v13 = Color::ConvertToRGB(&v29, (int)&v28); /*0x48e9ae*/
      LOWORD(a4) = *(_WORD *)v13; /*0x48e9b6*/
      BYTE2(a4) = *(_BYTE *)(v13 + 2); /*0x48e9c5*/
      *((_BYTE *)this->ConvertClass_field_0x178 + v8++) = Palette::FindClosestColor((char *)a2, (int)&a4); /*0x48e9db*/
    }
    while ( v8 < 256 ); /*0x48e9df*/
    v14 = (CampaignClass *)__2_YAPAXI_Z(*(_DWORD *)&this->__pad_6[358] << 8); /*0x48e9eb*/
    this->ConvertClass_field_0x170 = v14; /*0x48e9f0*/
    v15 = v14; /*0x48e9f6*/
    v16 = *(_DWORD *)&this->__pad_6[358]; /*0x48e9f8*/
    *(_DWORD *)this->__pad_174 = (char *)v15 + 256 * ((v16 - 1) >> 1); /*0x48ea10*/
    if ( v16 == 1 ) /*0x48ea16*/
    {
      LOBYTE(v15->AbstractClass) = 0; /*0x48ea18*/
      v17 = (char *)&v15->AbstractClass + 1; /*0x48ea1a*/
      for ( i = 1; i < 256; ++i ) /*0x48ea1b*/
        *v17++ = Palette::FindClosestColor((char *)a3, a2 + 2 * (i % 256) + i % 256); /*0x48ea40*/
    }
    else
    {
      v30 = 0; /*0x48ea53*/
      if ( v16 - 1 >= 0 ) /*0x48ea57*/
      {
        do /*0x48eb0a*/
        {
          LOBYTE(v15->AbstractClass) = 0; /*0x48ea5d*/
          v15 = (CampaignClass *)((char *)v15 + 1); /*0x48ea5f*/
          for ( j = 1; j < 256; ++j ) /*0x48ea60*/
          {
            v20 = ComputeColorSaturation(a2 + 2 * (j % 256) + j % 256, a2, (int)&a5); /*0x48ea85*/
            v21 = *(_BYTE *)(v20 + 2); /*0x48ea8f*/
            LOWORD(v29.Color_field_00) = *(_WORD *)v20; /*0x48ea92*/
            LOBYTE(v31) = v21; /*0x48ea97*/
            BYTE2(v29.Color_field_00) = v21; /*0x48eaa4*/
            BYTE2(v29.Color_field_00) = 2 * v30 * v21 / (*(_DWORD *)&this->__pad_6[358] - 1); /*0x48eac2*/
            v22 = Color::ConvertToRGB(&v29, (int)&v28); /*0x48eac6*/
            LOWORD(a4) = *(_WORD *)v22; /*0x48eace*/
            BYTE2(a4) = *(_BYTE *)(v22 + 2); /*0x48eadf*/
            LOBYTE(v15->AbstractClass) = Palette::FindClosestColor((char *)a3, (int)&a4); /*0x48eae8*/
            v15 = (CampaignClass *)((char *)v15 + 1); /*0x48eaea*/
          }
          v23 = *(_DWORD *)&this->__pad_6[358] - 1; /*0x48eb03*/
          ++v30; /*0x48eb06*/
        }
        while ( v30 <= v23 ); /*0x48eb0a*/
      }
    }
  }
  else
  {
    v24 = (CampaignClass *)__2_YAPAXI_Z(*(_DWORD *)&this->__pad_6[358] << 9); /*0x48eb1c*/
    v25 = *(_DWORD *)&this->__pad_6[358]; /*0x48eb21*/
    this->ConvertClass_field_0x170 = v24; /*0x48eb2a*/
    *(_DWORD *)this->__pad_174 = (char *)v24 + 512 * ((v25 - 1) >> 1); /*0x48eb3a*/
    if ( !a6 ) /*0x48eb46*/
      DSurface::BlitStretch((int)v24, v25, a2); /*0x48eb51*/
    this->q060 = (unsigned __int16)g_DDraw_Gray127; /*0x48eb60*/
    *((_DWORD *)this + 97) = HIWORD(g_DDraw_Gray127); /*0x48eb6d*/
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
  return this->__pad_0; /*0x48ebd8*/
}



// ==== 0x0048EBF0  ConvertClass::InitTables  this=ConvertClass  sig=csp ====
_DWORD *__thiscall ConvertClass::InitTables(ConvertClass *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax
  CampaignClass *ConvertClass_field_0x178; // ecx
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
  CampaignClass *v21; // ecx
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
  CampaignClass *v33; // ecx
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
  CampaignClass *v45; // ... [58756 chars total]



// ==== 0x00480110  BuildingClass::CalcDrawPos  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::CalcDrawPos(BuildingClass *this, _DWORD *a2)
{
  int *v3; // eax
  int v4; // edx
  int v5; // ecx
  unsigned __int8 v6; // al
  char *v8; // ecx
  _DWORD v9[2]; // [esp+4h] [ebp-8h] BYREF

  v3 = globalHelper_0FDCC0(v9, this->?[2]); /*0x48011d*/
  v4 = *v3; /*0x480122*/
  v5 = v3[1]; /*0x480124*/
  if ( SLOBYTE(this->?) >= 0 ) /*0x48012f*/
  {
    if ( this->?[2] == 239 ) /*0x48014b*/
LABEL_6:
      v5 -= 15; /*0x48014d*/
  }
  else
  {
    v6 = BYTE2(this->?); /*0x480131*/
    v5 -= 16; /*0x480137*/
    if ( v6 >= 9u && v6 <= 0x11u ) /*0x480140*/
      goto LABEL_6; /*0x480140*/
  }
  v8 = (char *)DSurface_ViewBounds.field_4 + v5 + -15 * SHIBYTE(this->?[1]); /*0x480150*/
  *a2 = v4 + 30; /*0x480172*/
  a2[1] = v8 + 15; /*0x480174*/
  return a2; /*0x48016e*/
}



// ==== 0x00480180  DSurface::Process  this=CellClass  sig=csp ====
void __thiscall sub_480180(int this, int *a2, int *a3)
{
  TerrainClass::GenerateTexture( /*0x4801de*/
    *(_DWORD **)dword_A8ED2C,
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



// ==== 0x004801F0  TacticalClass::RenderCellFogOfWar  this=CellClass  sig=csp ====
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
  if ( (*(_DWORD *)dword_A8B230 & 0x1000) != 0 && !*((_BYTE *)dword_A83D4C + 501) ) /*0x48025c*/
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
void __thiscall TacticalClass::DrawCellTerrainOverlay(TacticalClass *this, int *a2, int *a3)
{
  int field38; // eax
  int v5; // ebx
  int v6; // esi

  field38 = this->field38; /*0x4802a6*/
  if ( field38 == 0xFFFF ) /*0x4802ae*/
  {
    v5 = 0; /*0x4802df*/
    v6 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * dword_AA10B0); /*0x4802e1*/
  }
  else
  {
    v5 = BYTE2(this->visibleCells[13]); /*0x4802b8*/
    v6 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * field38); /*0x4802be*/
    if ( *(int *)(v6 + 752) > 1 ) /*0x4802c8*/
      CellClass::GetTerrainFlag((CellClass *)v6, BYTE2(this->visibleCells[13])); /*0x4802cd*/
  }
  if ( *(_BYTE *)(v6 + 737) ) /*0x4802e4*/
    TacticalClass::DrawCellOverlay( /*0x480339*/
      v6,
      v5,
      (int)g_DSurface_Hidden_2,
      *a2,
      a2[1] - 15 * SHIBYTE(this->visibleCells[13]),
      *a3,
      a3[1],
      a3[2],
      a3[3],
      58 - 15 * SHIBYTE(this->visibleCells[13]));
}



// ==== 0x00480350  TacticalClass::CheckCellVisibility  this=CellClass  sig=csp ====
int __thiscall TacticalClass::CheckCellVisibility(int *this, _DWORD *a2, _DWORD *a3, char a4)
{
  int result; // eax
  int v6; // eax
  int *v7; // edi
  unsigned int inited; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // [esp+10h] [ebp-Ch]
  int v15[2]; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+28h] [ebp+Ch]

  LOBYTE(result) = a4; /*0x480350*/
  if ( a4 ) /*0x48035f*/
    return result; /*0x48035f*/
  if ( !this->attached3 ) /*0x480365*/
    TacticalClass::SetView(this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x480384*/
  v6 = this->q038; /*0x480389*/
  v16 = 0; /*0x48038c*/
  if ( v6 == 0xFFFF ) /*0x480395*/
  {
    v14 = 0; /*0x4803e9*/
    v7 = (int *)*((_DWORD *)dword_A8ED2C + dword_AA10B0); /*0x4803ed*/
    inited = CellClass::InitRandomOffsets(this, dword_AA10B0, v7[188]); /*0x4803fa*/
LABEL_10:
    v16 = inited; /*0x4803ff*/
    goto LABEL_11; /*0x4803ff*/
  }
  v7 = (int *)*((_DWORD *)dword_A8ED2C + v6); /*0x48039d*/
  v14 = *((unsigned __int8 *)this + 282); /*0x4803ae*/
  if ( v7[188] > 1 ) /*0x4803b5*/
  {
    if ( (unsigned __int8)CellClass::GetTerrainFlag(v7, *((unsigned __int8 *)this + 282)) ) /*0x4803ba*/
      inited = ((unsigned int)this->wallOwnerIndex >> 13) & 1; /*0x4803cc*/
    else
      inited = CellClass::InitRandomOffsets(this, this->q038, v7[188]); /*0x4803dc*/
    goto LABEL_10; /*0x4803cf*/
  }
LABEL_11:
  ++dword_A83ECC; /*0x480403*/
  v9 = *((char *)this + 283); /*0x480416*/
  v10 = a2[1]; /*0x48041d*/
  v15[0] = *a2; /*0x480420*/
  v11 = v10 - 15 * v9; /*0x48042e*/
  result = (*(int (__thiscall **)(int *))(*v7 + 156))(v7); /*0x480430*/
  if ( result ) /*0x48043c*/
    TerrainClass::GenerateTexture( /*0x480499*/
      v7,
      this->attached3,
      v14,
      (int)g_DSurface_Hidden_2,
      v15[0],
      v11 + dword_886FA4,
      *a3,
      a3[1],
      a3[2],
      a3[3],
      *((char *)this + 283),
      *((__int16 *)this + 134),
      1,
      v16,
      0,
      0,
      0,
      0);
  if ( this->unknown30 != -1 ) /*0x4804a2*/
  {
    v12 = a3[1]; /*0x4804b1*/
    v15[0] = v15[0] + 30 - *a3; /*0x4804bd*/
    v13 = this->unknown30; /*0x4804c1*/
    v15[1] = v11 + dword_886FA4 - v12; /*0x4804c4*/
    return (*(int (__thiscall **)(_DWORD, int *, _DWORD *, _DWORD, int, int *))(**((_DWORD **)dword_A8EC1C + v13) + 160))( /*0x4804f5*/
             *((_DWORD *)dword_A8EC1C + v13),
             v15,
             a3,
             *((unsigned __int8 *)this + 287),
             dword_89E7C0 * *((char *)this + 283),
             this + 9);
  }
  return result; /*0x4804fb*/
}



// ==== 0x00480510  BuildingPlacement::ValidateType  this=BuildingPlacement  sig=csp ====
int __thiscall BuildingPlacement::ValidateType(BuildingPlacement *this, int a2, int a3)
{
  int result; // eax
  _DWORD *i; // esi
  _DWORD *j; // esi

  result = *((_DWORD *)this + 17); /*0x48051a*/
  if ( result == a2 && result != -1 ) /*0x480524*/
  {
    LOBYTE(result) = 1; /*0x480529*/
    return result; /*0x48052c*/
  }
  if ( a2 == -1 ) /*0x480532*/
  {
    if ( result == 2 || result == 26 || result == 243 ) /*0x480543*/
    {
LABEL_8:
      LOBYTE(result) = 1; /*0x480549*/
      return result; /*0x48054f*/
    }
  }
  else
  {
    if ( a2 == 2 || !a2 ) /*0x48055d*/
    {
      for ( i = (_DWORD *)*((_DWORD *)this + 57); i; i = (_DWORD *)i[12] ) /*0x480567*/
      {
        result = (*(int (__thiscall **)(_DWORD *))(*i + 44))(i); /*0x48056d*/
        if ( result == 6 ) /*0x480573*/
        {
          result = i[328]; /*0x480578*/
          if ( (int)i[27] > 0 /*0x4805b1*/
            && (result == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2156) && (a3 == 2 || a3 == 6)
             || result == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2160) && (!a3 || a3 == 4)
             || result == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2172)) )
          {
            goto LABEL_8; /*0x4805b1*/
          }
        }
      }
    }
    if ( a2 == 26 ) /*0x4805bd*/
    {
      for ( j = (_DWORD *)*((_DWORD *)this + 57); j; j = (_DWORD *)j[12] ) /*0x4805c7*/
      {
        result = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x4805cd*/
        if ( result == 6 ) /*0x4805d3*/
        {
          result = j[328]; /*0x4805d8*/
          if ( (int)j[27] > 0 /*0x480615*/
            && (result == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2164) && (a3 == 2 || a3 == 6)
             || result == *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2168) && (!a3 || a3 == 4)) )
          {
            goto LABEL_8; /*0x480615*/
          }
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x480622*/
  return result; /*0x480526*/
}



// ==== 0x00480630  BuildingClass::ValidatePlacement  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::ValidatePlacement(BuildingClass *this, char a2)
{
  int *v2; // edi
  int v3; // eax
  char *v4; // esi
  int *StartCoords; // edi
  int *PlacementRect; // eax
  int v7; // ebx
  int v8; // eax
  int *v9; // edi
  int v10; // eax
  char v11; // bl
  int v12; // ecx
  int *v13; // eax
  int *v14; // eax
  char *v15; // edi
  int v16; // eax
  int *v17; // ebp
  BuildingPlacement *v18; // eax
  int v19; // eax
  __int16 v20; // dx
  int v21; // edx
  char v22; // bl
  char v23; // al
  int v24; // ecx
  char v25; // al
  char v26; // bl
  int v27; // eax
  char v28; // al
  unsigned int i; // esi
  int v30; // eax
  __int16 v31; // dx
  _BYTE *v32; // eax
  int v33; // [esp-Ch] [ebp-E8h]
  struct tagRECT *v34; // [esp-8h] [ebp-E4h]
  int v35; // [esp-8h] [ebp-E4h]
  const RECT *v36; // [esp-4h] [ebp-E0h]
  LPRECT v37; // [esp-4h] [ebp-E0h]
  __int16 *v38; // [esp-4h] [ebp-E0h]
  const RECT *v39; // [esp+0h] [ebp-DCh]
  const RECT *v40; // [esp+0h] [ebp-DCh]
  const RECT *v41; // [esp+4h] [ebp-D8h]
  __int16 v42[2]; // [esp+10h] [ebp-CCh] BYREF
  __int16 v43[2]; // [esp+14h] [ebp-C8h] BYREF
  char *v44; // [esp+18h] [ebp-C4h]
  int v45; // [esp+1Ch] [ebp-C0h]
  int v46; // [esp+20h] [ebp-BCh]
  int occupant; // [esp+24h] [ebp-B8h] BYREF
  __int16 v48[2]; // [esp+28h] [ebp-B4h] BYREF
  BuildingClass *v49; // [esp+2Ch] [ebp-B0h]
  Coord2D v50; // [esp+30h] [ebp-ACh] BYREF
  _DWORD v51[2]; // [esp+38h] [ebp-A4h] BYREF
  int v52; // [esp+40h] [ebp-9Ch] BYREF
  char v53[8]; // [esp+44h] [ebp-98h] BYREF
  int v54; // [esp+4Ch] [ebp-90h]
  int v55; // [esp+50h] [ebp-8Ch]
  int v56[4]; // [esp+5Ch] [ebp-80h] BYREF
  char v57[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v58[4]; // [esp+7Ch] [ebp-60h] BYREF
  int v59[4]; // [esp+9Ch] [ebp-40h] BYREF
  int v60[4]; // [esp+BCh] [ebp-20h] BYREF
  Rect v61; // [esp+CCh] [ebp-10h] BYREF

  v2 = (int *)&unk_81CC70; /*0x48063a*/
  v49 = this; /*0x48063f*/
  v44 = (char *)&unk_81CC70; /*0x480643*/
  while ( 1 ) /*0x48064d*/
  {
    v3 = *v2; /*0x48064d*/
    if ( (unsigned int)*v2 < 8 ) /*0x480652*/
    {
      occupant = this->?; /*0x48065e*/
      *(_DWORD *)v48 = *CellStruct::Add((CellStruct *)&occupant, &v52, (_WORD *)(4 * (v3 & 7) + 9041544)); /*0x480684*/
      v4 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x48068d*/
    }
    else
    {
      v4 = (char *)this; /*0x480654*/
    }
    if ( !a2 || *v2 != -1 ) /*0x48069d*/
    {
      StartCoords = House::GetStartCoords((House *)v4, v58); /*0x4806ab*/
      PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)v4, v56); /*0x4806b4*/
      if ( StartCoords[2] > 0 && StartCoords[3] > 0 && PlacementRect[2] > 0 && PlacementRect[3] > 0 ) /*0x4806d3*/
      {
        v7 = StartCoords[1]; /*0x4806d9*/
        if ( *StartCoords > *PlacementRect ) /*0x4806e4*/
          v54 = *PlacementRect; /*0x4806e8*/
        v8 = PlacementRect[1]; /*0x4806ee*/
        if ( v7 > v8 ) /*0x4806f3*/
          v55 = v8; /*0x4806f7*/
      }
    }
    v36 = (const RECT *)BuildingClass::GetPlacementRect((BuildingClass *)v4, v60); /*0x480713*/
    v34 = (struct tagRECT *)House::GetStartCoords((House *)v4, v59); /*0x48071c*/
    CellClass::GetScreenRect((CellClass *)v4, (int *)v57); /*0x480724*/
    Rect::Union(v34, v36, v39); /*0x480732*/
    v9 = (int *)Rect::Union(v37, v40, v41); /*0x480745*/
    v51[1] = DSurface_ViewBounds.field_4; /*0x480753*/
    v10 = *v9; /*0x480757*/
    v11 = 0; /*0x480759*/
    v51[0] = DSurface_ViewBounds.field_0; /*0x48075c*/
    v12 = v9[1]; /*0x480760*/
    *(_DWORD *)v50.__pad_0 = v10; /*0x480763*/
    v50.Coord2D_field_0x04 = v12; /*0x480767*/
    v35 = v9[3]; /*0x480775*/
    v33 = v9[2]; /*0x480776*/
    v13 = Coord2D::Sub(&v50, (int *)v53, v51); /*0x480781*/
    v14 = Rect::Construct(&v61, v13, v33, v35); /*0x48078e*/
    Cell::CreateCrater(*v14, v14[1], v14[2], v14[3], 0); /*0x4807b4*/
    v15 = v4 + 36; /*0x4807b9*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)(v4 + 36)); /*0x4807c2*/
    v16 = *((_DWORD *)v4 + 17); /*0x4807c7*/
    if ( v16 != -1 && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v16) + 680) ) /*0x4807dc*/
    {
      *(_DWORD *)v42 = 0; /*0x4807ea*/
      v17 = (int *)&unk_81CC70; /*0x4807ee*/
      do /*0x48086e*/
      {
        if ( (unsigned int)*v17 < 8 ) /*0x4807f9*/
        {
          v19 = *v17 & 7; /*0x480801*/
          *(_DWORD *)v43 = *(_DWORD *)v15; /*0x480804*/
          v20 = g_DDrawSurfaceManager.scenario[v19 + 82]; /*0x480808*/
          LOWORD(v19) = HIWORD(g_DDrawSurfaceManager.scenario[v19 + 82]); /*0x48081a*/
          LOWORD(v46) = v43[0] + v20; /*0x48081e*/
          HIWORD(v46) = v43[1] + v19; /*0x48082d*/
          *(_DWORD *)v43 = v46; /*0x480836*/
          v18 = (BuildingPlacement *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v43); /*0x48083f*/
        }
        else
        {
          v18 = (BuildingPlacement *)v4; /*0x4807fb*/
        }
        if ( (unsigned __int8)BuildingPlacement::ValidateType(v18, *((_DWORD *)v4 + 17), *v17) ) /*0x48084e*/
          *(_DWORD *)v42 |= 1 << v11; /*0x480860*/
        ++v17; /*0x480864*/
        ++v11; /*0x480867*/
      }
      while ( v17 < &dword_81CC80 ); /*0x48086e*/
      v22 = v42[0]; /*0x480879*/
      v23 = v4[286] & 0xF0; /*0x48087d*/
      *(_DWORD *)v42 = *((_DWORD *)v4 + 19); /*0x48087f*/
      v24 = *((_DWORD *)v4 + 17); /*0x480883*/
      v25 = v22 | v23; /*0x480886*/
      v26 = 0; /*0x480888*/
      v4[286] = v25; /*0x48088d*/
      if ( (v24 == 2 || v24 == 26) && (v25 == 48 || v25 == 32) ) /*0x4808a0*/
      {
        LOBYTE(v21) = 1; /*0x4808a5*/
        *((_DWORD *)v4 + 17) = -1; /*0x4808a9*/
        v4[286] = 0; /*0x4808ac*/
        AbstractClass::AnnounceExpiredPointer((void **)v4, v21); /*0x4808b3*/
        v26 = 1; /*0x4808b8*/
      }
      if ( !*((_DWORD *)v4 + 17) ) /*0x4808bf*/
      {
        v27 = (unsigned __int8)v4[286]; /*0x4808c6*/
        if ( (_BYTE)v27 == 16 || (_BYTE)v27 == 32 ) /*0x4808d2*/
        {
          LOBYTE(v21) = 1; /*0x4808d4*/
          *((_DWORD *)v4 + 17) = -1; /*0x4808d8*/
          v4[286] = 0; /*0x4808db*/
          *((_DWORD *)v4 + 20) = -1; /*0x4808e2*/
          AbstractClass::AnnounceExpiredPointer((void **)v4, v21); /*0x4808e5*/
          v26 = 1; /*0x4808ea*/
        }
      }
      if ( *((_DWORD *)v4 + 17) == 1 && v4[286] == 32 ) /*0x4808f9*/
      {
        LOBYTE(v21) = 1; /*0x4808fb*/
        *((_DWORD *)v4 + 17) = -1; /*0x4808ff*/
        v4[286] = 0; /*0x480902*/
        *((_DWORD *)v4 + 20) = -1; /*0x480909*/
        AbstractClass::AnnounceExpiredPointer((void **)v4, v21); /*0x48090c*/
        v26 = 1; /*0x480911*/
      }
      if ( *((_DWORD *)v4 + 17) == 22 ) /*0x480917*/
      {
        v28 = v4[286]; /*0x480919*/
        if ( v28 == 16 || v28 == 32 ) /*0x480925*/
        {
          LOBYTE(v21) = 1; /*0x480927*/
          *((_DWORD *)v4 + 17) = -1; /*0x48092b*/
          v4[286] = 0; /*0x48092e*/
          *((_DWORD *)v4 + 20) = -1; /*0x480935*/
          AbstractClass::AnnounceExpiredPointer((void **)v4, v21); /*0x480938*/
          v26 = 1; /*0x48093d*/
        }
      }
      if ( *((_DWORD *)v4 + 17) == 3 && v4[286] == 16 ) /*0x48094c*/
      {
        LOBYTE(v21) = 1; /*0x48094e*/
        *((_DWORD *)v4 + 17) = -1; /*0x480952*/
        v4[286] = 0; /*0x480955*/
        *((_DWORD *)v4 + 20) = -1; /*0x48095c*/
        AbstractClass::AnnounceExpiredPointer((void **)v4, v21); /*0x48095f*/
        v26 = 1; /*0x480964*/
      }
      House::AnnounceUpgrade((int)v4, -1); /*0x480969*/
      if ( *((_DWORD *)v4 + 19) != *(_DWORD *)v42 ) /*0x480977*/
      {
        v38 = (__int16 *)(v4 + 36); /*0x48097f*/
        if ( v26 ) /*0x480985*/
        {
          Cell::SetRadar((Cell *)&stru_87F5F0.__pad_58[416], v38); /*0x480987*/
          Radar::Update((Radar *)&stru_87F5F0.__pad_58[416], (__int16 *)v4 + 18); /*0x480992*/
          for ( i = 0; i < 8; ++i ) /*0x480997*/
          {
            v30 = i & 7; /*0x48099e*/
            v31 = *((_WORD *)v15 + 1) + HIWORD(g_DDrawSurfaceManager.scenario[v30 + 82]); /*0x4809b1*/
            LOWORD(v45) = LOWORD(g_DDrawSurfaceManager.scenario[v30 + 82]) + *(_WORD *)v15; /*0x4809bc*/
            HIWORD(v45) = v31; /*0x4809c5*/
            *(_DWORD *)v42 = v45; /*0x4809d4*/
            v32 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v42); /*0x4809d8*/
            --v32[290]; /*0x4809e9*/
          }
        }
        else
        {
          CellClass::DetermineTileConnectivity((CellClass *)&stru_87F5F0.__pad_58[416], v38); /*0x4809f3*/
          Radar::Update((Radar *)&stru_87F5F0.__pad_58[416], (__int16 *)v4 + 18); /*0x4809fe*/
        }
      }
    }
    v2 = (int *)(v44 + 4); /*0x480a07*/
    v44 += 4; /*0x480a10*/
    if ( v44 >= byte_81CC84 ) /*0x480a14*/
      break; /*0x480a14*/
    this = v49; /*0x480649*/
  }
}



// ==== 0x00480A30  CellClass::GetCoords  this=CellClass  sig=csp ====
int *__thiscall CellClass::GetCoords(CellClass *this, int *a2)
{
  int smudgeTypeIndex; // eax
  int v3; // esi
  int v4; // edi
  int inited; // eax
  _DWORD v7[2]; // [esp+8h] [ebp-8h] BYREF

  smudgeTypeIndex = this->smudgeTypeIndex; /*0x480a33*/
  v3 = ((__int16)smudgeTypeIndex << 8) + 128; /*0x480a4f*/
  v4 = (SHIWORD(smudgeTypeIndex) << 8) + 128; /*0x480a51*/
  v7[0] = 128; /*0x480a53*/
  v7[1] = 128; /*0x480a57*/
  inited = Isometric::InitTables((int)this, v7); /*0x480a60*/
  *a2 = v3; /*0x480a6b*/
  a2[1] = v4; /*0x480a6d*/
  a2[2] = inited; /*0x480a72*/
  return a2; /*0x480a70*/
}



// ==== 0x00480A80  CellClass::ReduceTiberium  this=ObjectClass  sig=csp ====
int __thiscall CellClass::ReduceTiberium(int *this, int a2)
{
  int *PlacementRect; // edi
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
  CellClass *v17; // ebp
  int *v18; // esi
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

  PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)this, (int *)v31); /*0x480a97*/
  StartCoords = House::GetStartCoords((House *)this, v32); /*0x480a9c*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x480ab1*/
  {
    v12 = *PlacementRect; /*0x480b44*/
    v13 = PlacementRect[1]; /*0x480b46*/
    v14 = PlacementRect[2]; /*0x480b49*/
    v9 = PlacementRect[3]; /*0x480b4c*/
  }
  else
  {
    v22 = PlacementRect[2]; /*0x480abc*/
    if ( v22 <= 0 || (v25 = PlacementRect[3], v25 <= 0) ) /*0x480acb*/
    {
      v12 = *StartCoords; /*0x480b37*/
      v13 = StartCoords[1]; /*0x480b39*/
      v14 = StartCoords[2]; /*0x480b3c*/
      v9 = StartCoords[3]; /*0x480b3f*/
    }
    else
    {
      v5 = *StartCoords; /*0x480acd*/
      v6 = *PlacementRect; /*0x480acf*/
      v7 = StartCoords[2]; /*0x480ad1*/
      v8 = StartCoords[1]; /*0x480ad4*/
      v9 = StartCoords[3]; /*0x480ad7*/
      v28 = v7; /*0x480adc*/
      if ( v5 > *PlacementRect ) /*0x480ae0*/
      {
        v7 += v5 - v6; /*0x480ae4*/
        v5 = *PlacementRect; /*0x480ae6*/
        v28 = v7; /*0x480ae8*/
      }
      v10 = PlacementRect[1]; /*0x480aec*/
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
  v27 = v13 - (unsigned int)DSurface_ViewBounds.field_4; /*0x480b5f*/
  v29 = v14; /*0x480b66*/
  v30 = v9; /*0x480b6a*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(this->q011); /*0x480b6e*/
  v16 = a2; /*0x480b73*/
  if ( a2 <= 0 || BuildingByTiberiumType == -1 ) /*0x480b82*/
    return 0; /*0x480ca3*/
  v17 = *(CellClass **)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType); /*0x480b8e*/
  if ( *((_BYTE *)this + 286) == 11 ) /*0x480b99*/
    CellClass::RegisterForRedraw(v17, (__int16 *)this + 18); /*0x480ba1*/
  if ( *((unsigned __int8 *)this + 286) + 1 <= v16 ) /*0x480bb9*/
  {
    v16 = *((unsigned __int8 *)this + 286); /*0x480bc8*/
    this->q011 = -1; /*0x480bce*/
    *((_BYTE *)this + 286) = 0; /*0x480bd5*/
    House::AnnounceUpgrade((int)this, -1); /*0x480bdc*/
    v18 = this + 9; /*0x480be1*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v18); /*0x480bea*/
    CellClass::ClearCrateStateForAll((CellClass *)v18); /*0x480bf1*/
    for ( i = 0; i < 8; ++i ) /*0x480bf6*/
    {
      v20 = i & 7; /*0x480bfa*/
      LOWORD(v23) = *(_WORD *)v18 + LOWORD(g_DDrawSurfaceManager.scenario[v20 + 82]); /*0x480c1b*/
      HIWORD(v23) = *((_WORD *)v18 + 1) + HIWORD(g_DDrawSurfaceManager.scenario[v20 + 82]); /*0x480c24*/
      a2 = v23; /*0x480c33*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) ) /*0x480c37*/
      {
        if ( !*((_BYTE *)&v17->radSite->AbstractClass + Cell::PosToIndex((Cell *)&a2)) ) /*0x480c4f*/
          BuildingClass::AddOccupancy(v17->mapCoords, (__int16 *)&a2); /*0x480c5c*/
      }
    }
  }
  else
  {
    *((_BYTE *)this + 286) -= v16; /*0x480bbd*/
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
  v4 = *((_DWORD *)dword_A83D84 + v3); /*0x480ccb*/
  *(_DWORD *)v40 = v4; /*0x480cce*/
  if ( !*(_BYTE *)(v4 + 680) ) /*0x480cd2*/
    return 0; /*0x480cd2*/
  v5 = a2; /*0x480ce0*/
  if ( a2 != -1 ) /*0x480ce7*/
  {
    v6 = *(_DWORD *)(v4 + 676); /*0x480ce9*/
    if ( a2 < v6 && !dword_A8E7AC && Random::Range((_DWORD *)dword_A8B230 + 134, 0, v6) >= v5 ) /*0x480d18*/
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
  Cell::CreateCrater(v9, v17 - dword_886FA4, v18, v13, 0); /*0x480e0c*/
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
        v23 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v39); /*0x480e7c*/
      }
      else
      {
        v23 = (_DWORD *)this; /*0x480e46*/
      }
      v24 = v23[17]; /*0x480e81*/
      if ( v24 != -1 /*0x480ea6*/
        && *(_BYTE *)(*((_DWORD *)dword_A83D84 + v24) + 680)
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
  Cell::SetRadar((int *)&dword_87F7E8, (__int16 *)(this + 36)); /*0x480f11*/
  Radar::Update(&dword_87F7E8, (__int16 *)(this + 36)); /*0x480f1c*/
  BuildingClass::AddUpgrade((int)&dword_87F7E8, this + 36); /*0x480f27*/
  a2 = *(_DWORD *)(this + 36); /*0x480f3c*/
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, dword_89F688); /*0x480f51*/
  v27 = (void **)CellCoord::To_CellObj(&dword_87F7E8, v40); /*0x480f55*/
  BuildingClass::ValidatePlacement(v27, 0); /*0x480f5e*/
  a2 = *(_DWORD *)(this + 36); /*0x480f73*/
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, &dword_89F6A0); /*0x480f88*/
  v28 = (void **)CellCoord::To_CellObj(&dword_87F7E8, v40); /*0x480f8c*/
  BuildingClass::ValidatePlacement(v28, 0); /*0x480f95*/
  a2 = *(_DWORD *)(this + 36); /*0x480faa*/
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, &dword_89F698); /*0x480fbf*/
  v29 = (void **)CellCoord::To_CellObj(&dword_87F7E8, v40); /*0x480fc3*/
  BuildingClass::ValidatePlacement(v29, 0); /*0x480fcc*/
  *(_DWORD *)v40 = *(_DWORD *)(this + 36); /*0x480fd9*/
  LOWORD(a2) = dword_89F690 + v40[0]; /*0x480fef*/
  HIWORD(a2) = HIWORD(dword_89F690) + v40[1]; /*0x480ff4*/
  v30 = (void **)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x481007*/
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
      v35 = v40[1] + HIWORD(dword_89F688[v34]); /*0x481047*/
      LOWORD(a2) = v40[0] + LOWORD(dword_89F688[v34]); /*0x48104f*/
      HIWORD(a2) = v35; /*0x481058*/
      *(_DWORD *)v40 = a2; /*0x481061*/
      v33 = CellCoord::To_CellObj(&dword_87F7E8, v40); /*0x48106b*/
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



// ==== 0x004810A0  Input::OffsetToDirection  this=Input  sig=csp ====
int __thiscall Input::OffsetToDirection(Input *this)
{
  double v1; // st7
  int v2; // edi
  int Input_field_00; // esi
  int v4; // eax
  int result; // eax
  double v6; // [esp+0h] [ebp-18h]
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  v2 = (unsigned __int8)*((_DWORD *)this + 1); /*0x4810aa*/
  Input_field_00 = (unsigned __int8)this->Input_field_00; /*0x4810b0*/
  v8 = v2 - 128; /*0x4810bf*/
  v7 = Input_field_00 - 128; /*0x4810c3*/
  __asm /*0x4810c7*/
  {
    fild [esp+18h+var_4]
    fild [esp+18h+var_8]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+18h+var_18]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v6); /*0x4810e0*/
  LOWORD(v4) = Math::RoundToInt(v1); /*0x4810e8*/
  if ( v4 < 60 ) /*0x4810f0*/
    return 0; /*0x4810f3*/
  result = Input_field_00 > 128; /*0x481104*/
  if ( v2 > 128 ) /*0x48110f*/
    LOBYTE(result) = result | 2; /*0x481111*/
  if ( result ) /*0x481115*/
    ++result; /*0x48111e*/
  return result; /*0x4810f2*/
}



// ==== 0x00481130  BuildingPlacement::IsPlacementFlagSet  this=BuildingPlacement  sig=csp ====
bool __thiscall BuildingPlacement::IsPlacementFlagSet(BuildingPlacement *this, unsigned int a2, char a3)
{
  unsigned __int8 v3; // al

  if ( a2 < 2 ) /*0x481137*/
    return 0; /*0x48117a*/
  if ( a3 ) /*0x481144*/
    v3 = *((_BYTE *)this + 296); /*0x481146*/
  else
    v3 = *((_BYTE *)this + 292); /*0x481160*/
  return ((unsigned __int8)(1 << a2) & v3) == 0; /*0x481153*/
}



// ==== 0x00481180  ObjectPlacement::CalcPosition  this=ObjectPlacement  sig=csp ====
int *__thiscall ObjectPlacement::CalcPosition(ObjectPlacement *this, int *a2, _DWORD *a3, char a4, char a5, char a6)
{
  double v6; // st7
  int v8; // ecx
  int v10; // eax
  int v11; // edi
  _DWORD *v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // ebx
  int v18; // eax
  bool v19; // al
  _DWORD *v20; // eax
  BuildingClass *v21; // eax
  bool v23; // zf
  unsigned __int8 *v24; // edi
  unsigned int v25; // ecx
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // esi
  int v30; // edi
  int GroundHeight; // eax
  int v32; // ecx
  int v33; // eax
  double v34; // [esp+0h] [ebp-34h]
  Coord2D v35; // [esp+18h] [ebp-1Ch] BYREF
  _DWORD v36[2]; // [esp+20h] [ebp-14h] BYREF
  char v37[4]; // [esp+28h] [ebp-Ch] BYREF
  int v38; // [esp+2Ch] [ebp-8h]
  int v39; // [esp+30h] [ebp-4h]
  int v40; // [esp+48h] [ebp+14h]

  v8 = (unsigned __int8)a3[1]; /*0x48119b*/
  *(_DWORD *)v35.__pad_0 = (unsigned __int8)*a3; /*0x4811a1*/
  v35.Coord2D_field_0x04 = v8; /*0x4811aa*/
  v36[0] = 128; /*0x4811b9*/
  v36[1] = 128; /*0x4811bd*/
  _EAX = Coord2D::Sub(&v35, (int *)v37, v36); /*0x4811c1*/
  __asm /*0x4811c6*/
  {
    fild dword ptr [eax+4]
    fild dword ptr [eax]
  }
  __asm
  {
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+34h+var_34]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v34); /*0x4811df*/
  LOWORD(v10) = Math::RoundToInt(v6); /*0x4811e7*/
  if ( v10 >= 60 ) /*0x4811ef*/
  {
    v11 = *(_DWORD *)v35.__pad_0 > 128; /*0x4811ff*/
    if ( v35.Coord2D_field_0x04 > 128 ) /*0x481208*/
      v11 |= 2u; /*0x48120a*/
    if ( v11 ) /*0x48120f*/
      ++v11; /*0x481211*/
  }
  else
  {
    v11 = 0; /*0x4811f1*/
  }
  if ( a6 ) /*0x481218*/
  {
    v12 = (_DWORD *)(*(int (__thiscall **)(ObjectPlacement *, char *))(*(_DWORD *)this->__pad_0 + 72))(this, v37); /*0x481226*/
    v13 = v12[1]; /*0x48122c*/
    v14 = *v12 - (unsigned __int8)*v12; /*0x481235*/
    v15 = v12[2]; /*0x481239*/
    v16 = v13 - (unsigned __int8)v13; /*0x481242*/
  }
  else
  {
    v14 = *a3 - (unsigned __int8)*a3; /*0x481251*/
    v16 = a3[1] - (unsigned __int8)a3[1]; /*0x48125e*/
    v15 = a3[2]; /*0x481260*/
  }
  v17 = v14; /*0x481263*/
  v38 = v16; /*0x48126b*/
  v39 = v15; /*0x48126f*/
  if ( a5 ) /*0x481273*/
    v18 = *((_DWORD *)this + 74); /*0x481275*/
  else
    v18 = *((_DWORD *)this + 73); /*0x48127d*/
  v19 = (v18 & 0x20) != 0; /*0x48128a*/
  if ( !a4 )
  {
    if ( v19 ) /*0x481296*/
      goto LABEL_22; /*0x481296*/
    if ( (*((_BYTE *)this + 292) & 0x40) != 0 ) /*0x48129f*/
    {
      v20 = PlacementList::FindByID((PlacementList *)this, 6, 0); /*0x4812a7*/
      if ( !v20 || !*(_BYTE *)(v20[328] + 5815) ) /*0x4812b6*/
        goto LABEL_22; /*0x4812b6*/
      v21 = (BuildingClass *)PlacementList::FindByID((PlacementList *)this, 6, 0); /*0x4812c6*/
      if ( v21 && !v21->Type->Gate ) /*0x4812d5*/
        v21 = 0; /*0x4812df*/
      if ( !(unsigned __int8)BuildingClass::IsPoweredOn(v21) ) /*0x4812e3*/
      {
LABEL_22:
        *a2 = dword_89E778; /*0x4812fb*/
        a2[1] = dword_89E77C; /*0x481304*/
        a2[2] = dword_89E780; /*0x48130d*/
        return a2; /*0x481313*/
      }
    }
    if ( !v11 ) /*0x481318*/
    {
      v24 = (unsigned __int8 *)(4 * Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 3) + 8506520); /*0x48139f*/
      goto LABEL_30; /*0x4813a6*/
    }
    if ( v11 == 1
      || (!a5
        ? (v23 = ((unsigned __int8)(1 << v11) & *((_BYTE *)this + 292)) == 0)
        : (v23 = (*(_BYTE *)(this + 37) & (unsigned __int8)(1 << v11)) == 0),
          !v23) )
    {
      v24 = (unsigned __int8 *)(4 * v11 + 8506500); /*0x481356*/
LABEL_30:
      v40 = 0; /*0x48135d*/
      while ( 1 ) /*0x481367*/
      {
        v25 = *v24++; /*0x481367*/
        if ( v25 >= 2 ) /*0x48136c*/
        {
          if ( a5 ) /*0x481379*/
          {
            LOBYTE(v26) = *((_BYTE *)this + 296); /*0x48137b*/
            v27 = 1 << v25; /*0x481386*/
          }
          else
          {
            LOBYTE(v27) = *((_BYTE *)this + 292); /*0x4813a8*/
            v26 = 1 << v25; /*0x4813b3*/
          }
          if ( ((unsigned __int8)v26 & (unsigned __int8)v27) == 0 ) /*0x4813bc*/
            break; /*0x4813bc*/
        }
        if ( ++v40 >= 4 ) /*0x4813ca*/
        {
          *a2 = dword_89E778; /*0x4813db*/
          a2[1] = dword_89E77C; /*0x4813e4*/
          a2[2] = dword_89E780; /*0x4813ed*/
          return a2; /*0x4813f3*/
        }
      }
      v28 = 3 * v25; /*0x4813fa*/
      v29 = v17 + dword_89E9F0[v28]; /*0x48141b*/
      v30 = v38 + dword_89E9F4[v28]; /*0x481422*/
      v39 += dword_89E9F8[v28]; /*0x481424*/
      GroundHeight = Cell::GetGroundHeight(a3); /*0x481428*/
      if ( !a5 ) /*0x481433*/
        goto LABEL_43; /*0x481433*/
      goto LABEL_42; /*0x481433*/
    }
  }
  v32 = dword_89E9F0[3 * v11]; /*0x481443*/
  v33 = dword_89E9F8[3 * v11]; /*0x48145c*/
  v30 = v38 + dword_89E9F4[3 * v11]; /*0x48145f*/
  v29 = v17 + v32; /*0x481463*/
  v39 += v33; /*0x48146a*/
  GroundHeight = Cell::GetGroundHeight(a3); /*0x48146e*/
  if ( a5 ) /*0x481479*/
LABEL_42:
    GroundHeight += dword_89E7B4; /*0x48147b*/
LABEL_43:
  *a2 = v29; /*0x481481*/
  a2[1] = v30; /*0x481489*/
  a2[2] = GroundHeight; /*0x48148f*/
  return a2; /*0x4812f8*/
}



// ==== 0x004814F0  CellClass::InitRandomOffsets  this=CellClass  sig=csp ====
int __thiscall CellClass::InitRandomOffsets(int *this, int a2, int a3)
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
          if ( (int)v8 >= (int)byte_81CD28 ) /*0x48155a*/
            goto LABEL_11; /*0x48155a*/
        }
      }
LABEL_11:
      *v5++ = v7; /*0x481564*/
      ++v4; /*0x481569*/
    }
    while ( (int)v5 < (int)&dbl_89E720 );
  }
  v11 = this->smudgeTypeIndex; /*0x481572*/
  v12 = v11; /*0x48157b*/
  LOBYTE(v16) = BYTE2(v11); /*0x481583*/
  if ( this->height ) /*0x481575*/
  {
    v13 = *((_DWORD *)dword_A8ED2C + a2); /*0x481596*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 156))(v13); /*0x48159d*/
    if ( !result ) /*0x4815a5*/
      return result; /*0x4815a5*/
    v15 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 156))(v13); /*0x4815bd*/
    v16 = (__int16)(HIWORD(v11) - *((unsigned __int8 *)this + 282) / v15) /*0x48161b*/
        / *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 156))(v13) + 4);
    v12 = (__int16)v11 / v15; /*0x481620*/
  }
  if ( a3 > 4 ) /*0x481629*/
    return dword_89E620[8 * (v16 & 7) + (v12 & 7)]; /*0x48165c*/
  else
    return dword_81CCA8[v12 & 3 | (4 * (v16 & 3))]; /*0x48163e*/
}



// ==== 0x00481670  Cell::ApplyDamage  this=Cell  sig=csp ====
void __thiscall Cell::ApplyDamage(Cell *this, int a2, int a3, int a4, char a5)
{
  AbstractClass *Cell_field_0xE4; // esi
  int *v7; // eax
  _DWORD *v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int *v13; // esi
  char v14; // [esp+13h] [ebp-19h]
  void **v15; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  char v18; // [esp+20h] [ebp-Ch]
  char v19; // [esp+21h] [ebp-Bh]
  int v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+28h] [ebp-4h]

  if ( a5 ) /*0x48167e*/
    Cell_field_0xE4 = *(AbstractClass **)this->__pad_E8; /*0x481680*/
  else
    Cell_field_0xE4 = (AbstractClass *)this->Cell_field_0xE4; /*0x481688*/
  v14 = 0; /*0x481692*/
  if ( !(_BYTE)a4 && Cell_field_0xE4 ) /*0x48169f*/
  {
    while ( 1 ) /*0x4816a3*/
    {
      v7 = (int *)AbstractClass::IsTechnoType(Cell_field_0xE4); /*0x4816a3*/
      if ( v7 ) /*0x4816aa*/
      {
        if ( (unsigned __int8)Audio::IsLoud(v7 + 84) ) /*0x4816b2*/
          break; /*0x4816b2*/
      }
      Cell_field_0xE4 = (AbstractClass *)Cell_field_0xE4[1].vtable3; /*0x4816bb*/
      if ( !Cell_field_0xE4 ) /*0x4816c0*/
        goto LABEL_11; /*0x4816c0*/
    }
    v14 = 1; /*0x4816c4*/
  }
LABEL_11:
  if ( a5 ) /*0x4816ce*/
    v8 = *(_DWORD **)this->__pad_E8; /*0x4816d0*/
  else
    v8 = this->Cell_field_0xE4; /*0x4816d8*/
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
      v8 = (_DWORD *)v8[12]; /*0x481750*/
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
      v13 = (int *)AbstractClass::IsTechnoType(*((AbstractClass **)Block + v9)); /*0x481776*/
      if ( v14 /*0x4817c1*/
        || (_BYTE)a4
        || *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6125)
        || v13
        && ((unsigned __int8)TechnoTypeClass::HasVoiceResponse(v13, 3)
         || *(_DWORD *)(v13[135] + 588) >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5196)) )
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
void *__thiscall Cell::GetNeighbourContent(Cell *this, unsigned int a2)
{
  void *result; // eax
  __int16 v3; // ax
  int v4; // [esp+0h] [ebp-4h]

  result = this; /*0x481815*/
  if ( a2 < 8 ) /*0x48181a*/
  {
    v4 = *(_DWORD *)&this->__pad_1C[8]; /*0x481822*/
    v3 = HIWORD(v4) + HIWORD(g_DDrawSurfaceManager.scenario[(a2 & 7) + 82]); /*0x481839*/
    LOWORD(a2) = v4 + LOWORD(g_DDrawSurfaceManager.scenario[(a2 & 7) + 82]); /*0x481841*/
    HIWORD(a2) = v3; /*0x48184a*/
    return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x48185d*/
  }
  return result; /*0x481863*/
}



// ==== 0x00481870  CellClass::SetThreatBounds  this=CellClass  sig=csp ====
int __thiscall CellClass::SetThreatBounds(CellClass *this, int a2, int a3)
{
  int v3; // ebx
  int result; // eax
  int i; // edi
  HouseClass *v6; // esi
  int smudgeTypeIndex; // [esp+8h] [ebp-4h] BYREF

  smudgeTypeIndex = this->smudgeTypeIndex; /*0x481880*/
  v3 = Cell::PosToLinearIndex((__int16 *)&smudgeTypeIndex); /*0x481889*/
  result = stru_A80220.?; /*0x48188b*/
  for ( i = 0; i < stru_A80220.?; ++i ) /*0x481894*/
  {
    v6 = (HouseClass *)*((_DWORD *)stru_A80220.? + i); /*0x4818a2*/
    if ( v6 && v6->relatedTagsCount != a2 && !(unsigned __int8)HouseClass::IsAllied(v6, a2) ) /*0x4818b7*/
      HouseClass::SetThreat_Bounds((char *)v6, v3, a3); /*0x4818c4*/
    result = stru_A80220.?; /*0x4818c9*/
  }
  return result; /*0x4818d5*/
}



// ==== 0x004818E0  ObjectClass::UpdateTiberiumGrowth  this=BuildingClass  sig=csp ====
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
  v7 = *(_DWORD **)&dword_B0F4EC->TechnoClass[4 * BuildingByTiberiumType]; /*0x48190c*/
  v15 = v7[46]; /*0x481915*/
  if ( a2 ) /*0x48191f*/
    *(_DWORD *)(this + 68) = Random::Range((_DWORD *)dword_A8B230 + 134, v7[56], v7[56] + 700 * v7[58] - 700); /*0x481955*/
  v8 = 0; /*0x481958*/
  v9 = 1; /*0x48195a*/
  do /*0x4819bc*/
  {
    if ( v9 ) /*0x48195d*/
    {
      v11 = v8 & 7; /*0x481968*/
      v14 = *(_DWORD *)(this + 36); /*0x48196b*/
      LOWORD(v16) = v14 + LOWORD(dword_89F688[v11]); /*0x48198a*/
      HIWORD(v16) = HIWORD(v14) + HIWORD(dword_89F688[v11]); /*0x481993*/
      v14 = v16; /*0x48199c*/
      v10 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v14); /*0x4819a6*/
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
  v12 = byte_81CD28[4 * (v6 % *(_DWORD *)(*(_DWORD *)&dword_B0F4EC->TechnoClass[4 * v5] + 228))]; /*0x4819d1*/
  *(_BYTE *)(this + 286) = v12; /*0x4819d8*/
  return v15 * (v12 + 1); /*0x4819e4*/
}



// ==== 0x00481A00  CrateClass::ProcessPickup  this=CrateClass  sig=csp ====
int __thiscall CrateClass::ProcessPickup(CrateClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  int *v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // edi
  int *v10; // ecx
  int v11; // ebx
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // edi
  int v16; // eax
  double v17; // st7
  int v18; // ebx
  _BYTE *v19; // eax
  int v20; // edx
  int v21; // edi
  _DWORD *v22; // eax
  int v23; // edi
  bool v24; // cf
  void *v25; // eax
  _DWORD *v26; // eax
  int v27; // edi
  int v28; // ecx
  int v29; // ebx
  int *v30; // eax
  int *v31; // eax
  CellClass *v32; // eax
  _BYTE *v33; // edi
  int v34; // ebx
  int v35; // eax
  int v36; // ecx
  _DWORD *v37; // edx
  char v38; // bl
  _DWORD *v39; // edi
  void *inited; // eax
  void *v41; // eax
  int v42; // eax
  int v43; // edi
  int v44; // ebx
  int v45; // eax
  int v46; // edi
  int v47; // eax
  __int64 v48; // st7
  _BYTE *v49; // eax
  int v50; // edi
  int v51; // ebx
... [55375 chars total]



// ==== 0x00483410  HouseClass::MarkCellBuildable  this=HouseClass  sig=csp ====
char __thiscall HouseClass::MarkCellBuildable(HouseClass *this, int a2)
{
  int v3; // eax

  if ( (this->__pad_13C[4] & 0x10) != 0 || !(unsigned __int8)Cell::IsBuildable((bool *)this, 1, 0, 0, -1, 0, -1, 1) ) /*0x48342a*/
    return 0; /*0x48344e*/
  v3 = *(_DWORD *)&this->__pad_13C[4]; /*0x483433*/
  LOBYTE(v3) = v3 | 0x10; /*0x483439*/
  *(_DWORD *)&this->__pad_13C[4] = v3; /*0x48343b*/
  this->unitRepairStations[0] = a2; /*0x483445*/
  return 1; /*0x48344a*/
}



// ==== 0x00483460  HouseClass::checkAutoProduction  this=HouseClass  sig=csp ====
char __thiscall HouseClass::checkAutoProduction(HouseClass *this)
{
  int v1; // eax

  v1 = *(_DWORD *)&this->__pad_13C[4]; /*0x483460*/
  if ( (v1 & 0x10) == 0 ) /*0x483468*/
    return 0; /*0x48347c*/
  LOBYTE(v1) = v1 & 0xEF; /*0x48346a*/
  this->unitRepairStations[0] = -1; /*0x48346c*/
  *(_DWORD *)&this->__pad_13C[4] = v1; /*0x483473*/
  return 1; /*0x48347b*/
}



// ==== 0x00483480  CellClass::DamageAllObjects  this=CellClass  sig=csp ====
int __thiscall CellClass::DamageAllObjects(CellClass *this)
{
  ObjectClass *i; // esi
  int result; // eax

  for ( i = this->firstObject; i; i = i->nextObject ) /*0x483489*/
    result = (*((int (__thiscall **)(ObjectClass *))i->AbstractClass + 63))(i); /*0x48348f*/
  return result; /*0x48349c*/
}



// ==== 0x004834A0  Cell::IsBuildable  this=IUnknown  sig=csp ====
int __thiscall Cell::IsBuildable(bool *this, int a2, char a3, char a4, int a5, int a6, int a7, char a8)
{
  int result; // eax
  int v10; // ecx
  char v11; // cl
  int v12; // esi
  int v13; // esi
  char v14; // fps^1
  double v15; // st7
  bool v16; // c0
  char v17; // c2
  bool v18; // c3

  result = a2; /*0x4834a0*/
  if ( a2 == 4 ) /*0x4834ad*/
    goto LABEL_39; /*0x4834ad*/
  if ( a5 != -1 ) /*0x4834c2*/
  {
    result = MapClass::GetTileIndex((MapClass *)&dword_87F7E8, (__int16 *)this + 18, a6, a8); /*0x4834cf*/
    if ( a5 != result ) /*0x4834d6*/
    {
      LOBYTE(result) = 0; /*0x4834db*/
      return result; /*0x4834de*/
    }
  }
  result = a7; /*0x4834e1*/
  if ( a7 != -1 ) /*0x4834ed*/
  {
    v10 = this->u32_11B; /*0x4834ef*/
    if ( a7 == v10 ) /*0x4834f8*/
    {
      if ( (this->q050 & 0x100) != 0 && !a8 ) /*0x48351c*/
      {
        LOBYTE(result) = 0; /*0x483521*/
        return result; /*0x483524*/
      }
    }
    else if ( (this->q050 & 0x100) == 0 || a7 != v10 + 4 ) /*0x483507*/
    {
      LOBYTE(result) = 0; /*0x48350c*/
      return result; /*0x48350f*/
    }
  }
  v11 = 0; /*0x483527*/
  if ( (a7 == -1 || a7 == this->u32_11B + 4) && (this->q050 & 0x100) != 0 ) /*0x483542*/
  {
    v11 = 1; /*0x483546*/
    result = this->q128; /*0x483548*/
  }
  else
  {
    result = this->q124; /*0x483552*/
  }
  if ( a3 ) /*0x48355e*/
    result &= 0xE0u; /*0x483560*/
  if ( a4 ) /*0x48356b*/
    result &= 0x5Fu; /*0x48356d*/
  if ( result ) /*0x483572*/
  {
    LOBYTE(result) = 0; /*0x483577*/
    return result; /*0x48357a*/
  }
  result = this->q03B; /*0x48357d*/
  v12 = this->u8_11; /*0x483583*/
  if ( v12 != -1 ) /*0x483589*/
  {
    v13 = *(&dword_A83D84->vtable0 + v12); /*0x483591*/
    if ( v13 ) /*0x483596*/
    {
      if ( *(_BYTE *)(v13 + 680) ) /*0x483598*/
      {
        if ( a6 != 2 && a6 != 3 && a6 != 8 && (a6 != 1 && a6 != 4 || !*(_BYTE *)(v13 + 557)) && a6 != 12 ) /*0x4835c8*/
        {
          LOBYTE(result) = 0; /*0x4835cd*/
          return result; /*0x4835d0*/
        }
        result = 0; /*0x4835d3*/
      }
    }
  }
  result += a2 + 8 * result; /*0x4835dc*/
  v15 = flt_89EA40[result]; /*0x4835de*/
  v16 = v15 < 0.0; /*0x4835e5*/
  v17 = 0; /*0x4835e5*/
  v18 = v15 == 0.0; /*0x4835e5*/
  BYTE1(result) = v14; /*0x4835eb*/
  if ( v15 != 0.0 || v11 ) /*0x4835f4*/
LABEL_39:
    LOBYTE(result) = 1; /*0x483602*/
  else
    LOBYTE(result) = 0; /*0x4835f9*/
  return result; /*0x4834d8*/
}



// ==== 0x00483610  ObjectClass::processPointerInvalid  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::processPointerInvalid(ObjectClass *this)
{
  return (this->customSound_controller >> 8) & 1; /*0x48361c*/
}



// ==== 0x00483620  BuildingClass::IsTiberiumCollectorEligible  this=BuildingClass  sig=csp ====
bool __thiscall BuildingClass::IsTiberiumCollectorEligible(BuildingClass *this)
{
  int BuildingByTiberiumType; // eax
  int v4; // eax

  if ( !BYTE2(dword_A8B230[374].vtable3) ) /*0x483628*/
    return 0; /*0x483632*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(this->?[2]); /*0x483639*/
  if ( BuildingByTiberiumType == -1 ) /*0x483641*/
    return 0; /*0x483643*/
  v4 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType); /*0x48364d*/
  if ( LOBYTE(this->?) ) /*0x483650*/
    return 0; /*0x48365a*/
  if ( BYTE2(this->?) < *(_DWORD *)(v4 + 228) - 1 ) /*0x48366f*/
    return *(double *)(v4 + 176) >= 0.00001; /*0x483686*/
  return 0; /*0x483634*/
}



// ==== 0x00483690  BuildingClass::IsTiberiumSiloEligible  this=BuildingClass  sig=csp ====
bool __thiscall BuildingClass::IsTiberiumSiloEligible(BuildingClass *this)
{
  int BuildingByTiberiumType; // edi

  if ( SLOBYTE(dword_A8B230->vtable0) >= 0 ) /*0x48369c*/
    return 0; /*0x48369f*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(this->?[2]); /*0x4836ab*/
  if ( BuildingByTiberiumType == -1 ) /*0x4836b0*/
    return 0; /*0x4836b3*/
  if ( BYTE2(this->?) <= BuildingByTiberiumType / 2 ) /*0x4836c8*/
    return 0; /*0x4836cb*/
  if ( LOBYTE(this->?) ) /*0x4836cf*/
    return 0; /*0x4836da*/
  if ( *(double *)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType) + 160) >= 0.00001 ) /*0x4836f8*/
    return this->?[1] == 0; /*0x483708*/
  return 0; /*0x48369e*/
}



// ==== 0x00483710  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_483710(ObjectClass *this)
{
  int BuildingByTiberiumType; // eax
  int v3; // eax
  int v4; // eax

  if ( !BYTE2(dword_A8B230[374].vtable3) ) /*0x483718*/
    return 0; /*0x483718*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(this->ambientSoundController[2]); /*0x483725*/
  if ( BuildingByTiberiumType == -1 ) /*0x48372d*/
    return 0; /*0x48372d*/
  v3 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType); /*0x483735*/
  if ( this->u32_47 /*0x483766*/
    || *((unsigned __int8 *)this + 286) >= *(_DWORD *)(v3 + 228) - 1
    || *(double *)(v3 + 176) < 0.00001 )
  {
    return 0; /*0x48377c*/
  }
  v4 = FindBuildingByTiberiumType(this->ambientSoundController[2]); /*0x48376b*/
  return Crate::FindPlacement((int)this, v4, 1); /*0x48377a*/
}



// ==== 0x00483780  CellClass::SpawnTiberiumTree  this=CellClass  sig=csp ====
char __thiscall CellClass::SpawnTiberiumTree(CellClass *this, char a2)
{
  int BuildingByTiberiumType; // eax
  int v5; // eax
  char v7; // bp
  int v8; // ebx
  unsigned int v9; // eax
  void *v10; // esi
  int v11; // [esp+10h] [ebp-Ch]
  __int16 v12[2]; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h]
  int v14; // [esp+20h] [ebp+4h]

  if ( !a2 ) /*0x48378f*/
  {
    if ( SLOBYTE(dword_A8B230->vtable0) >= 0 ) /*0x483799*/
      return 0; /*0x483799*/
    BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)&this->__pad_28[28]); /*0x48379e*/
    if ( BuildingByTiberiumType == -1 /*0x4837e1*/
      || (unsigned __int8)this->powerup <= BuildingByTiberiumType / 2
      || this->slopeIndex
      || *(double *)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType) + 160) < 0.00001
      || this->firstObject )
    {
      return 0; /*0x4837e9*/
    }
  }
  v5 = FindBuildingByTiberiumType(*(_DWORD *)&this->__pad_28[28]); /*0x4837ee*/
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
  v13 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * v5); /*0x48382f*/
  v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x48383e*/
  v8 = 0; /*0x483840*/
  while ( 1 ) /*0x483845*/
  {
    v9 = ((_BYTE)v8 + v7) & 7; /*0x483845*/
    if ( v9 < 8 ) /*0x48384b*/
    {
      *(_DWORD *)v12 = this->smudgeTypeIndex; /*0x483857*/
      LOWORD(v11) = LOWORD(g_DDrawSurfaceManager.scenario[v9 + 82]) + v12[0]; /*0x48386a*/
      HIWORD(v11) = v12[1] + HIWORD(g_DDrawSurfaceManager.scenario[v9 + 82]); /*0x48387d*/
      *(_DWORD *)v12 = v11; /*0x48388b*/
      v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v12); /*0x483894*/
    }
    else
    {
      v10 = this; /*0x48384d*/
    }
    if ( v10 && (unsigned __int8)IsCoordValidMap((int)v10, v13) ) /*0x4838a1*/
      break; /*0x4838a1*/
    if ( ++v8 >= 8 ) /*0x4838ae*/
      return 0; /*0x4838b9*/
  }
  return Crate::FindPlacement((int)v10, v14, 3); /*0x483800*/
}



// ==== 0x004838E0  ObjectClass::IsCoordValidMap  this=ObjectClass  sig=csp ====
int __thiscall IsCoordValidMap(int this, int a2)
{
  int result; // eax
  _DWORD *v4; // esi
  int v5; // esi
  _DWORD *v6; // esi

  result = LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)(this + 36), 1); /*0x4838ef*/
  if ( (_BYTE)result ) /*0x4838f6*/
  {
    result = *(_DWORD *)(this + 320); /*0x4838fc*/
    if ( (result & 0x500) == 0 ) /*0x483905*/
    {
      if ( !byte_A8E9A0 ) /*0x483912*/
        goto LABEL_17; /*0x483912*/
      v4 = *(_DWORD **)(this + 228); /*0x483918*/
      if ( v4 ) /*0x483920*/
      {
        while ( (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 6 ) /*0x48392c*/
        {
          v4 = (_DWORD *)v4[12]; /*0x48392e*/
          if ( !v4 ) /*0x483933*/
            goto LABEL_11; /*0x483933*/
        }
        result = v4[27]; /*0x48393b*/
        if ( result > 0 ) /*0x483940*/
        {
          v5 = v4[328]; /*0x483942*/
          if ( !*(_BYTE *)(v5 + 3226) && !*(_BYTE *)(v5 + 5889) ) /*0x48395a*/
            goto LABEL_24; /*0x48395a*/
        }
      }
LABEL_11:
      if ( !byte_A8E9A0 ) /*0x483967*/
        goto LABEL_17; /*0x483967*/
      v6 = *(_DWORD **)(this + 228); /*0x483969*/
      if ( !v6 ) /*0x483971*/
        goto LABEL_17; /*0x483971*/
      while ( 1 ) /*0x483977*/
      {
        result = (*(int (__thiscall **)(_DWORD *))(*v6 + 44))(v6); /*0x483977*/
        if ( result == 36 ) /*0x48397d*/
          break; /*0x48397d*/
        v6 = (_DWORD *)v6[12]; /*0x48397f*/
        if ( !v6 ) /*0x483984*/
          goto LABEL_17; /*0x483984*/
      }
      if ( !*(_BYTE *)(v6[50] + 689) ) /*0x483992*/
      {
LABEL_17:
        result = *(_DWORD *)(this + 236); /*0x48399c*/
        if ( byte_89EA60[36 * result] ) /*0x4839a5*/
        {
          if ( *(_DWORD *)(this + 68) == -1 && !*(_BYTE *)(this + 284) ) /*0x4839b6*/
          {
            result = *(_DWORD *)(this + 56); /*0x4839c0*/
            if ( result < 0 || result >= dword_A8ED38 || *(_BYTE *)(*((_DWORD *)dword_A8ED2C + result) + 774) ) /*0x4839d8*/
            {
              LOBYTE(result) = 1; /*0x4839e3*/
              return result; /*0x4839e6*/
            }
          }
        }
      }
    }
  }
LABEL_24:
  LOBYTE(result) = 0; /*0x4839e9*/
  return result; /*0x4839e2*/
}



// ==== 0x004839F0  CellClass::SaveLoad_Prefix  this=CellClass  sig=csp ====
int __thiscall CellClass::SaveLoad_Prefix(CellClass *this)
{
  int v1; // ebp
  AbstractClass *v2; // esi
  int result; // eax
  CellClass *v4; // eax
  CellClass *v5; // edi
  int v6; // eax
  _DWORD *vtable1; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  int j; // edi
  int vtable0_low; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  void *NeedsSaveOrLink; // eax
  int v20; // [esp+28h] [ebp-4h] BYREF
  AbstractClass *v21; // [esp+30h] [ebp+4h]
  AbstractClass *i; // [esp+30h] [ebp+4h]
  int v23; // [esp+34h] [ebp+8h] BYREF

  v1 = v23; /*0x4839f3*/
  v2 = v21; /*0x4839f8*/
  result = AbstractClass::SaveLoad_Prefix_0(v21, v23); /*0x4839ff*/
  if ( result >= 0 ) /*0x483a08*/
  {
    if ( v21 ) /*0x483a10*/
    {
      AbstractClass::InitVtables(v21, (int)&v23); /*0x483a19*/
      v21[1].uniqueId = 0; /*0x483a1e*/
      v21[2].vtable1 = 0; /*0x483a21*/
      v21->vtable0 = &CellClass::`vftable'; /*0x483a24*/
      v21->vtable1 = &CellClass::`vftable'; /*0x483a2a*/
      v21->vtable2 = &CellClass::`vftable'; /*0x483a31*/
      v21->vtable3 = &CellClass::`vftable'; /*0x483a38*/
    }
    if ( !v21[1].vtable1 ) /*0x483a42*/
      goto LABEL_20; /*0x483a42*/
    v4 = (CellClass *)__2_YAPAXI_Z(0x18u); /*0x483a4a*/
    v5 = v4; /*0x483a4f*/
    if ( v4 ) /*0x483a56*/
    {
      CellClass::clearOccupationFlags(v4, 0, 0); /*0x483a5c*/
      v5->mapCoords[0] = (int)&DynamicVectorClass<FoggedObjectClass *>::`vftable'; /*0x483a61*/
      v5->isoTileTypeIndex = 10; /*0x483a67*/
      v5->lightConvert = 0; /*0x483a6e*/
    }
    else
    {
      v5 = 0; /*0x483a73*/
    }
    v21[1].vtable1 = v5; /*0x483a7a*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v1 + 12))(v1, &v20, 4, 0); /*0x483a84*/
    if ( result >= 0 ) /*0x483a89*/
    {
      for ( i = 0; (int)i < v20; i = (AbstractClass *)((char *)i + 1) ) /*0x483a99*/
      {
        v6 = *(_DWORD *)v1; /*0x483a9b*/
        v23 = 0; /*0x483aa7*/
        if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 12))(v1, &v23, 4, 0) < 0 ) /*0x483ab0*/
          return 0; /*0x483ab0*/
        vtable1 = v2[1].vtable1; /*0x483ab6*/
        v8 = vtable1[2]; /*0x483ab9*/
        if ( vtable1[4] >= v8 ) /*0x483ac1*/
        {
          if ( !*((_BYTE *)vtable1 + 13) && v8 ) /*0x483aca*/
            continue; /*0x483aca*/
          v9 = vtable1[5]; /*0x483acc*/
          if ( v9 <= 0 /*0x483adb*/
            || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*vtable1 + 8))(vtable1, v8 + v9, 0) )
          {
            continue; /*0x483adb*/
          }
        }
        v10 = vtable1[4]; /*0x483ae2*/
        v11 = vtable1[1]; /*0x483ae5*/
        vtable1[4] = v10 + 1; /*0x483aeb*/
        *(_DWORD *)(v11 + 4 * v10) = v23; /*0x483af2*/
      }
      v12 = v2[1].vtable1; /*0x483b06*/
      for ( j = 0; j < v12[4]; ++j ) /*0x483b0e*/
      {
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v12[1] + 4 * j)); /*0x483b1c*/
        v12 = v2[1].vtable1; /*0x483b21*/
      }
LABEL_20:
      vtable0_low = SLOWORD(v2[1].vtable0); /*0x483b2a*/
      v15 = SHIWORD(v2[1].vtable0) << 9; /*0x483b32*/
      v2[7].vtable0 = 0; /*0x483b35*/
      v16 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x483b3b*/
      v17 = vtable0_low + v15; /*0x483b40*/
      v18 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v17); /*0x483b42*/
      if ( v18 ) /*0x483b47*/
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 32))(v18, 1); /*0x483b51*/
        *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v17) = 0; /*0x483b59*/
        v16 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x483b5c*/
      }
      *(_DWORD *)(v16 + 4 * v17) = v2; /*0x483b61*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2[1].vtable2); /*0x483b6d*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2[1].vtable3); /*0x483b7b*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2[1].nextArrayIndex); /*0x483b89*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2[6].vtable2); /*0x483b9a*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2[6].vtable3); /*0x483bab*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2[6].uniqueId); /*0x483bbc*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2[6].NeedsSaveOrLink); /*0x483bcd*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2[1].referenceCount); /*0x483bdb*/
      NeedsSaveOrLink = v2[1].NeedsSaveOrLink; /*0x483be0*/
      if ( NeedsSaveOrLink == (void *)179 || NeedsSaveOrLink == (void *)242 ) /*0x483bef*/
      {
        v2[1].NeedsSaveOrLink = (void *)-1; /*0x483bf1*/
        BYTE2(v2[7].NeedsSaveOrLink) = 0; /*0x483bf8*/
      }
      return 0; /*0x483bfe*/
    }
  }
  return result; /*0x483c00*/
}



// ==== 0x00483C10  CellClass::SaveLoad_Prefix_0  this=CellClass  sig=csp ====
int __thiscall CellClass::SaveLoad_Prefix_0(CellClass *this)
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
void __thiscall BuildingClass::DetermineVisualState(BuildingClass *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax

  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea( /*0x483c90*/
                           (LayerClass *)&stru_87F5F0.__pad_58[416],
                           (__int16 *)&this->?,
                           1) )
  {
    this->?[4] = 7; /*0x483c99*/
    return; /*0x483ca3*/
  }
  v2 = this->?[2]; /*0x483ca4*/
  if ( v2 != -1 ) /*0x483caa*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v2); /*0x483cb2*/
    if ( *(_BYTE *)(v3 + 557) ) /*0x483cb5*/
    {
      this->?[4] = 1; /*0x483cbf*/
      return; /*0x483cc9*/
    }
    if ( *(_BYTE *)(v3 + 680) ) /*0x483cca*/
      goto LABEL_7; /*0x483cd2*/
    if ( flt_89EA48[9 * *(_DWORD *)(v3 + 664)] == 0.0 ) /*0x483cfa*/
    {
      this->?[4] = 6; /*0x483cfc*/
      return; /*0x483d06*/
    }
    if ( *(_BYTE *)(v3 + 693) ) /*0x483d07*/
    {
      this->?[4] = 6; /*0x483d11*/
      return; /*0x483d1b*/
    }
    if ( *(_BYTE *)(v3 + 692) ) /*0x483d1c*/
      goto LABEL_31; /*0x483d1c*/
  }
  v4 = this->?[3]; /*0x483d2a*/
  if ( v4 == 2 ) /*0x483d33*/
  {
    this->?[4] = 4; /*0x483d35*/
    return; /*0x483d3f*/
  }
  if ( v4 == 6 ) /*0x483d47*/
  {
    this->?[4] = 3; /*0x483d49*/
    return; /*0x483d53*/
  }
  if ( flt_89EA48[9 * v4] <= 0.01 ) /*0x483d69*/
  {
LABEL_18:
    this->?[4] = 6; /*0x483d6b*/
    return; /*0x483d71*/
  }
  v5 = (_DWORD *)this->?[1]; /*0x483d72*/
  if ( !v5 ) /*0x483d7a*/
  {
LABEL_31:
    this->?[4] = 0; /*0x483dd4*/
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
          this->?[4] = 6; /*0x483dca*/
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
  if ( dword_A8B230[130].uniqueId == 1 ) /*0x483df3*/
  {
    if ( *(_DWORD *)(v5[50] + 684) == 7 ) /*0x483e18*/
      goto LABEL_7; /*0x483e18*/
  }
  else if ( *(_DWORD *)(v5[50] + 680) == 7 ) /*0x483e01*/
  {
LABEL_7:
    this->?[4] = 2; /*0x483cd4*/
    return; /*0x483cde*/
  }
  this->?[4] = 5; /*0x483e1e*/
}



// ==== 0x00483E30  TacticalClass::SetView  this=IUnknown  sig=csp ====
int __thiscall TacticalClass::SetView(int *this, int a2, int a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7)
{
  int v7; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int SurfaceClassPrimary; // eax
  __int16 v13; // cx
  __int16 v14; // dx
  __int16 v15; // cx
  __int16 v16; // dx
  int result; // eax
  __int16 v18; // cx
  __int64 v19; // [esp-8h] [ebp-20h]
  __int64 v20; // [esp+4h] [ebp-14h] BYREF
  int v21; // [esp+Ch] [ebp-Ch] BYREF
  __int64 v22; // [esp+10h] [ebp-8h] BYREF

  v7 = a2; /*0x483e30*/
  if ( a2 ) /*0x483e3c*/
  {
    v9 = this->u8_D; /*0x483e3e*/
    if ( v9 ) /*0x483e43*/
    {
      if ( byte_A8E9A0 ) /*0x483e4d*/
        --*(_DWORD *)(v9 + 404); /*0x483e4f*/
    }
    this->u8_D = v7; /*0x483e55*/
    ++*(_DWORD *)(v7 + 404); /*0x483e5f*/
    v10 = this->u8_D; /*0x483e65*/
    a2 = *(_DWORD *)(v10 + 408); /*0x483e6e*/
    v20 = *(_QWORD *)(v10 + 412); /*0x483e78*/
LABEL_19:
    HIWORD(result) = HIWORD(a3); /*0x483f7a*/
    v13 = a4; /*0x483f7e*/
    v14 = a5; /*0x483f83*/
    this->q104 = a3; /*0x483f88*/
    LOWORD(result) = a6; /*0x483f8e*/
    this->q084 = v13; /*0x483f93*/
    v15 = a7; /*0x483f9a*/
    this->u32_214 = v14; /*0x483f9f*/
    v16 = a2; /*0x483fa6*/
    *((_WORD *)this + 134) = result; /*0x483fab*/
    LOWORD(result) = v20; /*0x483fb2*/
    this->q21C = v15; /*0x483fb7*/
    v18 = WORD2(v20); /*0x483fbe*/
    this->q088 = v16; /*0x483fc3*/
    *((_WORD *)this + 137) = result; /*0x483fca*/
    this->q228 = v18; /*0x483fd1*/
    return result; /*0x483fdc*/
  }
  if ( (this->q048 || this->q04C) /*0x483eaa*/
    && (this->q048 != 0xFFFF || this->q04C != 0xFFFF) )
  {
    HIDWORD(v19) = (char *)&v20 + 4; /*0x483eb8*/
    LODWORD(v19) = &v20; /*0x483ebd*/
    Tactical::CalculateTacticalLighting((Tactical *)this, &a3, &a4, (int *)&a5, (int *)&a6, (int *)&a7, &a2, v19); /*0x483eda*/
    if ( !this->u8_D ) /*0x483edf*/
      goto LABEL_17; /*0x483edf*/
    v21 = a2; /*0x483ef2*/
    v22 = v20; /*0x483efa*/
    QuantizeColorRGB(&v21, (int *)&v22, (int *)&v22 + 1); /*0x483f0b*/
    v11 = this->u8_D; /*0x483f10*/
    if ( *(_DWORD *)(v11 + 408) != v21 || *(_QWORD *)(v11 + 412) != v22 ) /*0x483f2d*/
    {
      if ( byte_A8E9A0 ) /*0x483f45*/
        --*(_DWORD *)(v11 + 404); /*0x483f47*/
      this->u8_D = 0; /*0x483f4d*/
    }
    if ( !this->u8_D ) /*0x483f54*/
    {
LABEL_17:
      SurfaceClassPrimary = CreateSurfaceClassPrimary(a2, v20, SHIDWORD(v20)); /*0x483f68*/
      this->u8_D = SurfaceClassPrimary; /*0x483f6f*/
      if ( SurfaceClassPrimary ) /*0x483f72*/
        ++*(_DWORD *)(SurfaceClassPrimary + 404); /*0x483f74*/
    }
    goto LABEL_19; /*0x483f74*/
  }
  result = CreateSurfaceClassPrimary(1000, 1000, 1000); /*0x483fea*/
  this->u8_D = result; /*0x483ff1*/
  if ( result ) /*0x483ff4*/
    ++*(_DWORD *)(result + 404); /*0x483ff6*/
  this->u32_214 = 1000; /*0x483ffc*/
  *((_WORD *)this + 134) = 1000; /*0x484003*/
  this->q21C = 1000; /*0x48400a*/
  this->q088 = 1000; /*0x484011*/
  *((_WORD *)this + 137) = 1000; /*0x484018*/
  this->q228 = 1000; /*0x48401f*/
  this->q104 = 0x10000; /*0x484026*/
  this->q084 = 0; /*0x484030*/
  return result; /*0x483fd8*/
}



// ==== 0x00484050  Tactical::CreateTacticalLightSurface  this=Tactical  sig=csp ====
int __thiscall Tactical::CreateTacticalLightSurface(
        Tactical *this,
        int *a2,
        _DWORD *a3,
        _DWORD *a4,
        int *a5,
        int a6,
        int a7)
{
  _DWORD *v7; // eax
  int *v8; // edx
  int *v9; // ebx
  _DWORD *v11; // ecx
  int *v12; // edi
  int v13; // esi
  int result; // eax
  __int64 v15; // [esp-8h] [ebp-1Ch]
  int v16; // [esp+10h] [ebp-4h] BYREF

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
  if ( !*(_WORD *)&this->__pad_10[20] && !*(_WORD *)&this->__pad_10[22] /*0x4840a8*/
    || *(_WORD *)&this->__pad_10[20] == 0xFFFF && *(_WORD *)&this->__pad_10[22] == 0xFFFF )
  {
    result = CreateSurfaceClassPrimary(1000, 1000, 1000); /*0x484161*/
    *a2 = result; /*0x48416d*/
  }
  else
  {
    HIDWORD(v15) = &a6; /*0x4840b2*/
    LODWORD(v15) = &a7; /*0x4840b7*/
    Tactical::CalculateTacticalLighting(this, v7, v11, v8, v12, v9, &v16, v15); /*0x4840c4*/
    if ( *(_DWORD *)this->__pad_34 /*0x484125*/
      && (a3 = (_DWORD *)v16,
          a4 = (_DWORD *)a7,
          a5 = (int *)a6,
          QuantizeColorRGB((int *)&a3, (int *)&a4, (int *)&a5),
          v13 = *(_DWORD *)this->__pad_34,
          *(_DWORD **)(v13 + 408) == a3)
      && *(_DWORD **)(v13 + 412) == a4
      && (result = *(_DWORD *)(v13 + 416), (int *)result == a5) )
    {
      *a2 = v13; /*0x48412c*/
    }
    else
    {
      result = CreateSurfaceClassPrimary(v16, a7, a6); /*0x484142*/
      *a2 = result; /*0x48414e*/
    }
  }
  return result; /*0x48412b*/
}



// ==== 0x00484180  Tactical::CalculateTacticalLighting  this=Tactical  sig=csp ====
int __thiscall Tactical::CalculateTacticalLighting(
        Tactical *this,
        _DWORD *a2,
        _DWORD *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7,
        __int64 a8)
{
  double v8; // st7
  Tactical *v9; // edi
  int *v10; // ebx
  int v11; // eax
  int v12; // esi
  int v13; // ebx
  int v14; // ebp
  int *v15; // eax
  int v16; // edx
  unsigned int v17; // edi
  int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // eax
  int referenceCount; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int result; // eax
  double v28; // [esp+0h] [ebp-44h]
  int v29; // [esp+18h] [ebp-2Ch]
  int v30; // [esp+18h] [ebp-2Ch]
  int v31; // [esp+18h] [ebp-2Ch]
  int v32; // [esp+18h] [ebp-2Ch]
  int v34; // [esp+20h] [ebp-24h]
  _DWORD v35[2]; // [esp+24h] [ebp-20h] BYREF
  int v36; // [esp+2Ch] [ebp-18h]
  int v37; // [esp+30h] [ebp-14h]
  int v38; // [esp+34h] [ebp-10h]
  int v39; // [esp+38h] [ebp-Ch]
  int v40; // [esp+3Ch] [ebp-8h]
  int v41; // [esp+40h] [ebp-4h]

  v9 = this; /*0x484184*/
  if ( !*(_WORD *)&this->__pad_10[20] && !*(_WORD *)&this->__pad_10[22] /*0x4841a9*/
    || *(_WORD *)&this->__pad_10[20] == 0xFFFF && *(_WORD *)&this->__pad_10[22] == 0xFFFF )
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
  v10 = a4; /*0x4841b5*/
  *a4 = 1000 * (int)dword_A8B230[378].vtable1 / 100; /*0x4841de*/
  *a7 = 1000 * (int)dword_A8B230[378].vtable3 / 100; /*0x48420d*/
  *(_DWORD *)a8 = 1000 * dword_A8B230[378].uniqueId / 100; /*0x48423c*/
  v11 = 0; /*0x48426b*/
  *(_DWORD *)HIDWORD(a8) = 1000 * dword_A8B230[378].abstractFlags / 100; /*0x48426d*/
  v34 = 0; /*0x484273*/
  for ( *a3 = 0; v34 < g_MissionQueueFrame.random[133]; ++v34 ) /*0x484285*/
  {
    v12 = *(_DWORD *)(g_MissionQueueFrame.random[130] + 4 * v11); /*0x484291*/
    if ( *(_BYTE *)(v12 + 72) && stru_A8EB00.ObjectTypeClass[30] >= *(_DWORD *)(v12 + 52) ) /*0x4842aa*/
    {
      v29 = *(_DWORD *)&v9->__pad_10[20]; /*0x4842b5*/
      v13 = ((__int16)v29 << 8) + 128; /*0x4842cc*/
      v14 = (SHIWORD(v29) << 8) + 128; /*0x4842ce*/
      v35[0] = 128; /*0x4842d0*/
      v35[1] = 128; /*0x4842d4*/
      Isometric::InitTables((int)v9, v35); /*0x4842dd*/
      v15 = (int *)(v12 + 56); /*0x4842e2*/
      v16 = *(_DWORD *)(v12 + 56); /*0x4842e7*/
      v40 = *(_DWORD *)(v12 + 60); /*0x4842ec*/
      v17 = *(_DWORD *)(v12 + 68); /*0x4842f0*/
      v41 = *(_DWORD *)(v12 + 64); /*0x4842f6*/
      v30 = v13 - v16; /*0x4842fe*/
      v39 = *(_DWORD *)(v12 + 56); /*0x484306*/
      v18 = *(_DWORD *)(v12 + 60); /*0x48430a*/
      v41 = *(_DWORD *)(v12 + 64); /*0x484310*/
      if ( v30 * v30 + (v14 - v18) * (v14 - v18) <= v17 * v17 ) /*0x48432d*/
      {
        v36 = *v15; /*0x48433a*/
        v37 = *(_DWORD *)(v12 + 60); /*0x484341*/
        v39 = *v15; /*0x48434d*/
        v31 = v13 - v36; /*0x484354*/
        __asm { fild [esp+44h+var_2C] } /*0x48435a*/
        v32 = v14 - *(_DWORD *)(v12 + 60); /*0x48435e*/
        __asm { fild [esp+44h+var_2C] } /*0x484365*/
        v38 = *(_DWORD *)(v12 + 64); /*0x484369*/
        v41 = *(_DWORD *)(v12 + 64); /*0x484370*/
        __asm /*0x484374*/
        {
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+44h+var_44]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v28); /*0x484385*/
        LOWORD(v19) = Math::RoundToInt(v8); /*0x48438d*/
        if ( v19 <= v17 ) /*0x484394*/
        {
          v20 = (1000 * v17 - 1000 * v19) / v17; /*0x4843bd*/
          *a3 += (int)(v20 * *(_DWORD *)(v12 + 36)) / 1000; /*0x4843db*/
          *a7 += (int)(v20 * *(_DWORD *)(v12 + 40)) / 1000; /*0x4843fc*/
          *(_DWORD *)a8 += (int)(v20 * *(_DWORD *)(v12 + 44)) / 1000; /*0x48441d*/
          *(_DWORD *)HIDWORD(a8) += (int)(v20 * *(_DWORD *)(v12 + 48)) / 1000; /*0x48443e*/
        }
      }
      v9 = this; /*0x484440*/
      v10 = a4; /*0x484444*/
    }
    v11 = v34 + 1; /*0x484452*/
  }
  v21 = *a3 + *v10; /*0x48446b*/
  *v10 = v21; /*0x48446f*/
  *a6 = v21; /*0x484471*/
  if ( !(unsigned __int8)LightningStorm::IsActive() ) /*0x48447a*/
  {
    if ( (unsigned __int8)PsyDom::IsActive() ) /*0x4844c4*/
    {
      *v10 += v9->Tactical_field_0x11B[0] * (int)dword_A8B230[380].vtable1 - dword_A8B230[380].referenceCount; /*0x4844ec*/
      referenceCount = dword_A8B230[380].referenceCount; /*0x4844fa*/
      v24 = (int)dword_A8B230[380].NeedsSaveOrLink * (v9->Tactical_field_0x11B[0] + 4); /*0x484503*/
    }
    else
    {
      if ( NukeFlash::IsActive() ) /*0x48450f*/
      {
        *v10 += v9->Tactical_field_0x11B[0] * (int)dword_A8B230[380].vtable1 - (unsigned int)dword_A8B230[380].vtable0; /*0x484537*/
        v22 = (int)dword_A8B230[380].vtable1 * (v9->Tactical_field_0x11B[0] + 4) /*0x484559*/
            - (unsigned int)dword_A8B230[380].vtable0
            + *a6;
        goto LABEL_21; /*0x48455b*/
      }
      *v10 += v9->Tactical_field_0x11B[0] * dword_A8B230[378].referenceCount - dword_A8B230[378].nextArrayIndex; /*0x48457c*/
      referenceCount = dword_A8B230[378].nextArrayIndex; /*0x48458a*/
      v24 = dword_A8B230[378].referenceCount * (v9->Tactical_field_0x11B[0] + 4); /*0x484593*/
    }
    v22 = v24 - referenceCount + *a6; /*0x48459e*/
    goto LABEL_21; /*0x48459e*/
  }
  *v10 += v9->Tactical_field_0x11B[0] * dword_A8B230[379].uniqueId - (unsigned int)dword_A8B230[379].vtable3; /*0x48449b*/
  v22 = dword_A8B230[379].uniqueId * (v9->Tactical_field_0x11B[0] + 4) - (unsigned int)dword_A8B230[379].vtable3 + *a6; /*0x4844bd*/
LABEL_21:
  *a6 = v22; /*0x4845a0*/
  v25 = *v10; /*0x4845a2*/
  if ( *v10 >= 2000 ) /*0x4845a9*/
    v25 = 2000; /*0x4845ab*/
  *v10 = v25; /*0x4845c0*/
  *a5 = v25; /*0x4845c2*/
  Map_Calc(a2, a5, a7, (int *)a8, (int *)HIDWORD(a8)); /*0x4845cf*/
  v26 = (*a2 * *a6) >> 16; /*0x4845da*/
  *a6 = v26; /*0x4845e2*/
  if ( v26 >= 2000 ) /*0x4845e4*/
    v26 = 2000; /*0x4845e6*/
  *a6 = v26; /*0x4845eb*/
  *v10 = *v10 <= 0 ? 0 : *v10;
  *a5 = *a5 <= 0 ? 0 : *a5;
  result = *a6 <= 0 ? 0 : *a6;
  *a6 = result; /*0x484615*/
  return result; /*0x48461a*/
}



// ==== 0x00484680  TacticalMap::ComputeScreenTint  this=TacticalMap  sig=csp ====
int __thiscall TacticalMap::ComputeScreenTint(TacticalMap *this)
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

  v2 = *((_WORD *)this + 132) + (__int16)(1000 * LOWORD(dword_A8B230[378].vtable1)) / 100; /*0x4846ab*/
  *((_WORD *)this + 133) = v2; /*0x4846b2*/
  *((_WORD *)this + 135) = v2; /*0x4846b9*/
  if ( (unsigned __int8)LightningStorm::IsActive() ) /*0x4846c0*/
  {
    v3 = *((char *)this + 283); /*0x4846cf*/
    *((_WORD *)this + 133) += v3 * LOWORD(dword_A8B230[379].uniqueId) - LOWORD(dword_A8B230[379].vtable3); /*0x4846ec*/
    v4 = (v3 + 4) * LOWORD(dword_A8B230[379].uniqueId) - LOWORD(dword_A8B230[379].vtable3); /*0x484703*/
  }
  else if ( (unsigned __int8)PsyDom::IsActive() ) /*0x48470f*/
  {
    v5 = *((char *)this + 283); /*0x48471e*/
    *((_WORD *)this + 133) += v5 * LOWORD(dword_A8B230[380].NeedsSaveOrLink) - LOWORD(dword_A8B230[380].referenceCount); /*0x48473b*/
    v4 = (v5 + 4) * LOWORD(dword_A8B230[380].NeedsSaveOrLink) - LOWORD(dword_A8B230[380].referenceCount); /*0x484752*/
  }
  else
  {
    v6 = !NukeFlash::IsActive(); /*0x484766*/
    v7 = *((char *)this + 283); /*0x484768*/
    if ( v6 ) /*0x484770*/
    {
      *((_WORD *)this + 133) += v7 * LOWORD(dword_A8B230[378].referenceCount) - LOWORD(dword_A8B230[378].nextArrayIndex); /*0x4847bc*/
      v4 = (v7 + 4) * LOWORD(dword_A8B230[378].referenceCount) - LOWORD(dword_A8B230[378].nextArrayIndex); /*0x4847d3*/
    }
    else
    {
      *((_WORD *)this + 133) += v7 * LOWORD(dword_A8B230[380].vtable1) - LOWORD(dword_A8B230[380].vtable0); /*0x484787*/
      v4 = (v7 + 4) * LOWORD(dword_A8B230[380].vtable1) - LOWORD(dword_A8B230[380].vtable0); /*0x48479e*/
    }
  }
  v8 = *((__int16 *)this + 133); /*0x4847da*/
  v9 = *((_DWORD *)this + 65); /*0x4847e1*/
  *((_WORD *)this + 135) += v4; /*0x4847e7*/
  *((_WORD *)this + 134) = (unsigned int)(v9 * v8) >> 16; /*0x4847f4*/
  v10 = v9 * *((__int16 *)this + 135); /*0x484802*/
  v11 = *((_WORD *)this + 133); /*0x484805*/
  v12 = v10 >> 16; /*0x48480c*/
  *((_WORD *)this + 135) = v12; /*0x484814*/
  if ( v11 >= 2000 ) /*0x48481e*/
    v11 = 2000; /*0x484820*/
  *((_WORD *)this + 133) = v11; /*0x484825*/
  v13 = *((_WORD *)this + 134); /*0x484838*/
  if ( v13 >= 2000 ) /*0x48483b*/
    v13 = 2000; /*0x48483d*/
  *((_WORD *)this + 134) = v13; /*0x484846*/
  v14 = v12; /*0x48484d*/
  if ( (__int16)v12 >= 2000 ) /*0x484850*/
    v14 = 2000; /*0x484852*/
  v15 = *((_WORD *)this + 133); /*0x484857*/
  *((_WORD *)this + 135) = v14; /*0x48485e*/
  if ( v15 <= 0 ) /*0x484868*/
    v15 = 0; /*0x48486f*/
  *((_WORD *)this + 133) = v15; /*0x484874*/
  if ( v13 <= 0 ) /*0x48487b*/
    v16 = 0; /*0x484882*/
  else
    v16 = v13; /*0x48487d*/
  *((_WORD *)this + 134) = v16; /*0x484887*/
  if ( v14 <= 0 ) /*0x48488e*/
  {
    *((_WORD *)this + 135) = 0; /*0x48489e*/
    return 0; /*0x48489c*/
  }
  else
  {
    *((_WORD *)this + 135) = v14; /*0x484893*/
    return v14; /*0x484890*/
  }
}



// ==== 0x004848B0  JumpjetLocomotionClass::AdjustClimbFacing  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall JumpjetLocomotionClass::AdjustClimbFacing(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int smudgeTypeIndex; // ebp
  int Crash_low; // eax
  int Crash_high; // esi
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
  __int16 v20[2]; // [esp+14h] [ebp-Ch] BYREF
  int v21; // [esp+18h] [ebp-8h]

  v2 = a2; /*0x4848b4*/
  smudgeTypeIndex = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->smudgeTypeIndex; /*0x4848c8*/
  Crash_low = SLOWORD(this->Crash); /*0x4848cb*/
  Crash_high = SHIWORD(this->Crash); /*0x4848cf*/
  v21 = smudgeTypeIndex; /*0x4848d3*/
  v7 = Crash_high - SHIWORD(smudgeTypeIndex); /*0x4848de*/
  v8 = Crash_low - (__int16)smudgeTypeIndex; /*0x4848e6*/
  v9 = Crash_low == (__int16)smudgeTypeIndex; /*0x4848ec*/
  result = dword_81CD5C[Crash_low + 3 * v7 - (__int16)smudgeTypeIndex]; /*0x4848ee*/
  v19 = result; /*0x4848f5*/
  if ( !v9 && v7 ) /*0x484901*/
  {
    if ( v8 == v7 ) /*0x484909*/
    {
      LOWORD(a2) = smudgeTypeIndex + v8; /*0x484916*/
      HIWORD(a2) = HIWORD(v21); /*0x48491b*/
      v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v2)->level + 2; /*0x484944*/
      LOBYTE(a2) = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) >= v11; /*0x484959*/
      v20[0] = smudgeTypeIndex; /*0x484960*/
      v20[1] = HIWORD(v21) + v7; /*0x484965*/
      v12 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v2)->level + 2; /*0x48498e*/
      v13 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20) + 283); /*0x484996*/
      v15 = __OFSUB__(v13, v12); /*0x48499d*/
      v14 = v13 - v12 < 0; /*0x48499d*/
    }
    else
    {
      LOWORD(a2) = smudgeTypeIndex + v7; /*0x4849ab*/
      HIWORD(a2) = HIWORD(v21); /*0x4849b0*/
      v16 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v2)->level + 2; /*0x4849d3*/
      LOBYTE(a2) = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) >= v16; /*0x4849ee*/
      v20[0] = smudgeTypeIndex; /*0x4849f5*/
      v20[1] = HIWORD(v21) + v8; /*0x4849fa*/
      v17 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v2)->level + 2; /*0x484a23*/
      v18 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20) + 283); /*0x484a2b*/
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
int __thiscall InfantryClass::IsInBounds(InfantryClass *this)
{
  __int16 v1; // ax

  v1 = HIWORD(this->?[0]); /*0x484ab0*/
  return v1 >= 0 && v1 < FootClass_Array.?[0] && this->?[3] == 10; /*0x484ad7*/
}



// ==== 0x00484AE0  InfantryClass::ValidateAttackPosition  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::ValidateAttackPosition(InfantryClass *this)
{
  __int16 v2; // ax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  void *v6; // edi
  __int16 v7; // ax
  __int16 v8; // ax
  _WORD *v9; // eax
  __int16 v10; // cx
  __int16 v11; // cx
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  InfantryClass *v14; // edi
  __int16 v15; // ax
  __int16 v16; // ax
  InfantryClass *v17; // esi
  int occupant; // [esp+10h] [ebp-14h] BYREF
  __int16 v19[2]; // [esp+14h] [ebp-10h] BYREF
  __int16 v20[2]; // [esp+18h] [ebp-Ch] BYREF
  __int16 v21[2]; // [esp+1Ch] [ebp-8h] BYREF
  int v22; // [esp+20h] [ebp-4h] BYREF

  v2 = HIWORD(this->?[0]); /*0x484ae8*/
  if ( v2 >= 0 && v2 < FootClass_Array.?[0] && this->?[3] == 10 ) /*0x484b0d*/
    return 1; /*0x484b18*/
  occupant = this->?; /*0x484b20*/
  *(_DWORD *)v19 = *CellStruct::Add((CellStruct *)&occupant, v21, &g_DDrawSurfaceManager.scenario[82]); /*0x484b3a*/
  v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x484b43*/
  v5 = v4; /*0x484b48*/
  if ( v4 ) /*0x484b4c*/
  {
    occupant = v4[9]; /*0x484b59*/
    *(_DWORD *)v20 = *CellStruct::Add((CellStruct *)&occupant, v21, &g_DDrawSurfaceManager.scenario[82]); /*0x484b73*/
    v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x484b81*/
    if ( v6 ) /*0x484b85*/
    {
      v7 = *((_WORD *)v5 + 139); /*0x484b8b*/
      if ( v7 >= 0 && v7 < FootClass_Array.?[0] && v5[59] == 10 ) /*0x484baa*/
      {
        v8 = *((_WORD *)v6 + 139); /*0x484bac*/
        if ( v8 < 0 || v8 >= FootClass_Array.?[0] || *((_DWORD *)v6 + 59) != 10 ) /*0x484bc5*/
          return 1; /*0x484bd0*/
      }
      occupant = *((_DWORD *)v6 + 9); /*0x484bd6*/
      *(_DWORD *)v21 = *NeighborCoord(&v22, &occupant, 0); /*0x484bf3*/
      v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x484bf7*/
      if ( v9 ) /*0x484bfe*/
      {
        v10 = *((_WORD *)v6 + 139); /*0x484c00*/
        if ( v10 >= 0 && v10 < FootClass_Array.?[0] && *((_DWORD *)v6 + 59) == 10 ) /*0x484c1f*/
        {
          v11 = v9[139]; /*0x484c21*/
          if ( v11 < 0 || v11 >= FootClass_Array.?[0] || *((_DWORD *)v9 + 59) != 10 ) /*0x484c3a*/
            return 1; /*0x484c45*/
        }
      }
    }
  }
  *(_DWORD *)v21 = this->?; /*0x484c4b*/
  *(_DWORD *)v20 = *NeighborCoord(&v22, v21, 6); /*0x484c68*/
  v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x484c6c*/
  v13 = v12; /*0x484c71*/
  if ( !v12 ) /*0x484c75*/
    return 0; /*0x484c75*/
  *(_DWORD *)v21 = v12[9]; /*0x484c80*/
  *(_DWORD *)v19 = *NeighborCoord(&v22, v21, 6); /*0x484c9d*/
  v14 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x484ca6*/
  if ( !v14 ) /*0x484caa*/
    return 0; /*0x484caa*/
  v15 = *((_WORD *)v13 + 139); /*0x484cb0*/
  if ( v15 >= 0 && v15 < FootClass_Array.?[0] && v13[59] == 10 ) /*0x484ccf*/
  {
    v16 = HIWORD(v14->?[0]); /*0x484cd1*/
    if ( v16 < 0 || v16 >= FootClass_Array.?[0] || v14->?[3] != 10 ) /*0x484cea*/
      return 1; /*0x484cf5*/
  }
  *(_DWORD *)v21 = v14->?; /*0x484cfb*/
  *(_DWORD *)v20 = *NeighborCoord(&v22, v21, 6); /*0x484d18*/
  v17 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x484d21*/
  return v17 && (unsigned __int8)InfantryClass::IsInBounds(v14) && !(unsigned __int8)InfantryClass::IsInBounds(v17); /*0x484d40*/
}



// ==== 0x00484D60  InfantryClass::CanMoveThroughCell  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass::CanMoveThroughCell(InfantryClass *this)
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
  int occupant; // [esp+Ch] [ebp-14h] BYREF
  __int16 v14[2]; // [esp+10h] [ebp-10h] BYREF
  __int16 v15[2]; // [esp+14h] [ebp-Ch] BYREF
  __int16 v16[2]; // [esp+18h] [ebp-8h] BYREF
  int v17; // [esp+1Ch] [ebp-4h] BYREF

  v1 = HIWORD(this->?[0]); /*0x484d60*/
  if ( v1 >= 0 && v1 < FootClass_Array.?[0] && this->?[3] == 10 ) /*0x484d8a*/
    return 1; /*0x484d8e*/
  occupant = this->?; /*0x484d9c*/
  *(_DWORD *)v14 = *CellStruct::Add((CellStruct *)&occupant, v16, &g_DDrawSurfaceManager.scenario[85]); /*0x484db6*/
  v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14); /*0x484dbf*/
  v4 = v3; /*0x484dc4*/
  if ( !v3 ) /*0x484dc8*/
    return 0; /*0x484dc8*/
  occupant = v3[9]; /*0x484dd5*/
  *(_DWORD *)v15 = *CellStruct::Add((CellStruct *)&occupant, v16, &g_DDrawSurfaceManager.scenario[85]); /*0x484def*/
  v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x484df8*/
  if ( !v5 ) /*0x484dff*/
    return 0; /*0x484dff*/
  v6 = *((_WORD *)v4 + 139); /*0x484e05*/
  if ( v6 >= 0 && v6 < FootClass_Array.?[0] && v4[59] == 10 ) /*0x484e24*/
    return 1; /*0x484e24*/
  v7 = v5[139]; /*0x484e2a*/
  if ( v7 >= 0 && v7 < FootClass_Array.?[0] && *((_DWORD *)v5 + 59) == 10 ) /*0x484e43*/
    return 1; /*0x484e43*/
  v8 = v4[9]; /*0x484e49*/
  LOWORD(occupant) = LOWORD(g_DDrawSurfaceManager.scenario[86]) + v8; /*0x484e58*/
  HIWORD(occupant) = HIWORD(v8) + HIWORD(g_DDrawSurfaceManager.scenario[86]); /*0x484e6d*/
  *(_DWORD *)v15 = occupant; /*0x484e76*/
  v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x484e88*/
  occupant = v4[9]; /*0x484e97*/
  *(_DWORD *)v16 = *CellStruct::Add((CellStruct *)&occupant, &v17, &g_DDrawSurfaceManager.scenario[84]); /*0x484eac*/
  v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x484eb0*/
  if ( !v9 || !v10 ) /*0x484ebb*/
    return 0; /*0x484ebb*/
  v11 = v9[139]; /*0x484ebd*/
  if ( v11 >= 0 && v11 < FootClass_Array.?[0] && *((_DWORD *)v9 + 59) == 10 ) /*0x484edc*/
    return 1; /*0x484edc*/
  v12 = v10[139]; /*0x484ede*/
  return v12 >= 0 && v12 < FootClass_Array.?[0] && *((_DWORD *)v10 + 59) == 10; /*0x484efb*/
}



// ==== 0x00484F10  globalHelper_084F10  this=InfantryClass  sig=csp ====
char __stdcall sub_484F10(int a1)
{
  return 1; /*0x484f12*/
}



// ==== 0x00484F20  InfantryClass::GetType  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass::GetType(InfantryClass *this)
{
  __int16 v1; // ax

  v1 = HIWORD(this->?[0]); /*0x484f20*/
  if ( v1 < 0 || v1 >= FootClass_Array.?[0] ) /*0x484f37*/
    return 0; /*0x484f43*/
  else
    return *(_DWORD *)(FootClass_Array.?[3] + 4 * v1); /*0x484f3f*/
}



// ==== 0x00484F50  ObjectClass::method_484F50  this=ObjectClass  sig=csp ====
int __thiscall sub_484F50(ObjectClass *this)
{
  int v2; // ecx
  int result; // eax
  _DWORD *v4; // edx
  _DWORD *v5; // edi
  int v6; // ebx
  _DWORD *v7; // esi
  _BYTE v8[40]; // [esp+4h] [ebp-28h] BYREF

  v2 = 0; /*0x484f56*/
  result = this->u32_39; /*0x484f58*/
  if ( result ) /*0x484f60*/
  {
    v4 = v8; /*0x484f62*/
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
                   *((unsigned __int8 *)this + 284));
      }
      ++v5; /*0x484fd4*/
      --v6; /*0x484fd7*/
    }
    while ( v6 ); /*0x484fd8*/
  }
  return result; /*0x484fdd*/
}



// ==== 0x00484FF0  CellClass::GetUIName  this=CellClass  sig=csp ====
const wchar_t *__thiscall CellClass::GetUIName(CellClass *this)
{
  int BuildingByTiberiumType; // eax

  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)&this->__pad_28[28]); /*0x484ff3*/
  if ( BuildingByTiberiumType == -1 ) /*0x484ffb*/
    return 0; /*0x48500a*/
  else
    return *(const wchar_t **)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType) + 96); /*0x485006*/
}



// ==== 0x00485010  BuildingClass::FindByCellHash  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::FindByCellHash(BuildingClass *this)
{
  return FindBuildingByTiberiumType(this->?[2]);
}



// ==== 0x00485020  Building::GetNthOfType  this=Building  sig=csp ====
int __thiscall Building::GetNthOfType(Building *this)
{
  int BuildingByTiberiumType; // eax

  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)&this->__pad_C[56]); /*0x485026*/
  if ( BuildingByTiberiumType == -1 ) /*0x48502e*/
    return 0; /*0x485030*/
  else
    return ((unsigned __int8)this->__pad_A4[122] + 1) /*0x48504f*/
         * *(_DWORD *)(*(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType) + 184);
}



// ==== 0x00485060  Cell::IsValidHeight  this=Cell  sig=csp ====
int __thiscall Cell::IsValidHeight(Cell *this)
{
  int Cell_field_0x38; // eax

  Cell_field_0x38 = this->Cell_field_0x38; /*0x485060*/
  return Cell_field_0x38 >= g_CellPassabilityLUT && Cell_field_0x38 < g_CellPassabilityLUT + 14; /*0x485079*/
}



// ==== 0x00485080  JumpjetLocomotionClass::FindClosestOccupiableCell  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall JumpjetLocomotionClass::FindClosestOccupiableCell(JumpjetLocomotionClass *this)
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
  if ( byte_A8E9A0 && (v3 = this->q039) != 0 ) /*0x4850b6*/
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
    if ( Object::FindClosestObjectCell((Object *)this, &v6, 0, 0) ) /*0x4850e6*/
      inited += 85; /*0x4850ef*/
    return inited; /*0x4850f3*/
  }
}



// ==== 0x00485130  MapClass::RemoveCellReference  this=MapClass  sig=csp ====
int __thiscall MapClass::RemoveCellReference(MapClass *this, int a2)
{
  void *v3; // edi
  int v4; // eax
  int v5; // eax
  int result; // eax
  _DWORD *MapClass_field_0x28; // esi
  int v8; // ecx
  int v9; // ecx

  v3 = (void *)a2; /*0x485134*/
  v4 = *(_DWORD *)&this->__pad_30[12]; /*0x485138*/
  if ( v4 == a2 ) /*0x48513d*/
  {
    if ( v4 ) /*0x485141*/
      --*(_DWORD *)(v4 + 44); /*0x485143*/
    *(_DWORD *)&this->__pad_30[12] = 0; /*0x485146*/
    v5 = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)&stru_87F5F0.__pad_E12[1346] + 16))( /*0x48515c*/
           &stru_87F5F0.__pad_E12[1346],
           &this->__pad_18[12]);
    if ( v5 != -1 && v5 < *(int *)&stru_87F5F0.__pad_E12[1362] ) /*0x48516c*/
    {
      --*(_DWORD *)&stru_87F5F0.__pad_E12[1362]; /*0x485171*/
      for ( ; /*0x485177*/
            v5 < *(int *)&stru_87F5F0.__pad_E12[1362];
            *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1350] + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1350]
                                                                                          + 4 * v5) )
      {
        ++v5; /*0x48517f*/
      }
    }
  }
  if ( this->MapClass_field_0x2C == v3 ) /*0x485194*/
    this->MapClass_field_0x2C = 0; /*0x485196*/
  if ( *(void **)this->__pad_30 == v3 ) /*0x4851a0*/
    *(_DWORD *)this->__pad_30 = 0; /*0x4851a2*/
  result = (int)this->MapClass_field_0x28; /*0x4851a9*/
  if ( result ) /*0x4851ae*/
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 44))(v3); /*0x4851b4*/
    if ( result == 61 ) /*0x4851ba*/
    {
      MapClass_field_0x28 = this->MapClass_field_0x28; /*0x4851bc*/
      a2 = (int)v3; /*0x4851bf*/
      result = (*(int (__thiscall **)(_DWORD *, int *))(*MapClass_field_0x28 + 16))(MapClass_field_0x28, &a2); /*0x4851cc*/
      if ( result != -1 ) /*0x4851d2*/
      {
        v8 = MapClass_field_0x28[4]; /*0x4851d4*/
        if ( result < v8 ) /*0x4851d9*/
        {
          v9 = v8 - 1; /*0x4851db*/
          for ( MapClass_field_0x28[4] = v9; /*0x4851e1*/
                result < MapClass_field_0x28[4];
                *(_DWORD *)(MapClass_field_0x28[1] + 4 * result - 4) = *(_DWORD *)(MapClass_field_0x28[1] + 4 * result) )
          {
            ++result; /*0x4851e6*/
          }
        }
      }
    }
  }
  return result; /*0x4851f5*/
}



// ==== 0x00485200  CellClass::ddtor  this=CellClass  sig=csp ====
int __thiscall CellClass::ddtor(CellClass *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x485206*/
    return -2147467261; /*0x485208*/
  *v2 = -1044407858; /*0x485216*/
  v2[1] = 298982028; /*0x48521e*/
  v2[2] = 1610642817; /*0x485227*/
  v2[3] = unk_7E993C; /*0x485230*/
  return 0; /*0x48520d*/
}



// ==== 0x00485240  ObjectClass::SetMember09  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::SetMember09(ObjectClass *this, _DWORD *a2)
{
  this->occupant = *a2; /*0x485246*/
  return a2; /*0x485249*/
}



// ==== 0x00485250  ObjectClass::SetTriggerTarget  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::SetTriggerTarget(ObjectClass *this, int a2)
{
  int v3; // eax
  int result; // eax

  v3 = this->ambientSoundController[0]; /*0x485253*/
  if ( v3 ) /*0x485258*/
    --*(_DWORD *)(v3 + 44); /*0x48525a*/
  result = a2; /*0x48525d*/
  this->ambientSoundController[0] = a2; /*0x485263*/
  if ( a2 ) /*0x485266*/
  {
    result = *(_DWORD *)&stru_87F5F0.__pad_E12[1354]; /*0x485268*/
    if ( *(int *)&stru_87F5F0.__pad_E12[1362] < *(int *)&stru_87F5F0.__pad_E12[1354] /*0x4852a3*/
      || (stru_87F5F0.__pad_E12[1359] || !*(_DWORD *)&stru_87F5F0.__pad_E12[1354])
      && *(int *)&stru_87F5F0.__pad_E12[1366] > 0
      && (result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87F5F0.__pad_E12[1346] + 8))(
                     &stru_87F5F0.__pad_E12[1346],
                     *(_DWORD *)&stru_87F5F0.__pad_E12[1354] + *(_DWORD *)&stru_87F5F0.__pad_E12[1366],
                     0),
          (_BYTE)result) )
    {
      result = (*(_DWORD *)&stru_87F5F0.__pad_E12[1362])++; /*0x4852b1*/
      *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_E12[1350] + 4 * result) = this->occupant; /*0x4852bd*/
    }
    ++*(_DWORD *)(this->ambientSoundController[0] + 44); /*0x4852c3*/
  }
  return result; /*0x4852c6*/
}



// ==== 0x004852D0  BuildingClass::CreateDestructionCrater  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::CreateDestructionCrater(BuildingClass *this)
{
  int v2; // kr04_4
  int v3; // kr00_4
  int v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (SLOWORD(this->?) << 8) + 128; /*0x4852f9*/
  v3 = (SHIWORD(this->?) << 8) + 128; /*0x485306*/
  v6[2] = 0; /*0x485308*/
  v6[1] = (v3 / 256) << 8; /*0x485312*/
  v6[0] = (v2 / 256) << 8; /*0x48532c*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x485330*/
  return Cell::CreateCrater( /*0x485389*/
           v5[0] - 30,
           (int)DSurface_ViewBounds.field_4 + v5[1] + -15 * SHIBYTE(this->?[1]) - 15,
           60,
           30,
           0);
}



// ==== 0x00485390  CellClass::GetBridgeBitfield  this=CellClass  sig=csp ====
int __thiscall CellClass::GetBridgeBitfield(CellClass *this)
{
  int v1; // edx
  int v2; // ebp
  int i; // edi
  _DWORD *mapCoords; // eax
  int v6; // eax
  int v7; // ecx
  int v9; // [esp+10h] [ebp-8h]
  __int16 v10[2]; // [esp+14h] [ebp-4h] BYREF

  v1 = *(_DWORD *)stru_A83D50.__pad_34; /*0x485390*/
  v2 = 0; /*0x48539d*/
  for ( i = 0; i < 4; ++i ) /*0x4853a1*/
  {
    if ( (unsigned int)(2 * i) < 8 ) /*0x4853a9*/
    {
      v6 = (2 * (_BYTE)i) & 7; /*0x4853b2*/
      *(_DWORD *)v10 = this->smudgeTypeIndex; /*0x4853b5*/
      LOWORD(v9) = v10[0] + LOWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x4853cf*/
      HIWORD(v9) = v10[1] + HIWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x4853de*/
      *(_DWORD *)v10 = v9; /*0x4853e7*/
      mapCoords = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x4853f0*/
      v1 = *(_DWORD *)stru_A83D50.__pad_34; /*0x4853f5*/
    }
    else
    {
      mapCoords = this->mapCoords; /*0x4853ab*/
    }
    v7 = mapCoords[17]; /*0x4853fb*/
    if ( v7 != -1 && (!*((_BYTE *)mapCoords + 284) || *(_BYTE *)(*(_DWORD *)(v1 + 4 * v7) + 686)) ) /*0x485410*/
    {
      if ( v7 == 126 ) /*0x48541c*/
      {
        if ( *((_BYTE *)mapCoords + 286) < 0x30u ) /*0x485436*/
          continue; /*0x485436*/
LABEL_12:
        v2 |= 1 << i; /*0x485441*/
        continue; /*0x485441*/
      }
      if ( *(_BYTE *)(*(_DWORD *)(v1 + 4 * v7) + 686) ) /*0x485421*/
        goto LABEL_12; /*0x485428*/
    }
  }
  return v2; /*0x48544d*/
}



// ==== 0x00485460  BuildingClass::CheckAdjacentCells  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckAdjacentCells(int this)
{
  int result; // eax
  int v3; // eax
  BuildingTypeClass *v4; // edx
  int v5; // esi
  bool v6; // cf
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // [esp+8h] [ebp-8h]
  int v11; // [esp+Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 284) <= 4u ) /*0x48546e*/
  {
    result = *(_DWORD *)(this + 236); /*0x485474*/
    if ( result != 2 && result != 3 && result != 8 && result != 6 ) /*0x485498*/
    {
      v3 = *(_DWORD *)(this + 68); /*0x48549e*/
      v4 = dword_A83D84; /*0x4854a1*/
      if ( v3 == -1 || (result = *(_DWORD *)&dword_A83D84->TechnoTypeClass[4 * v3], *(_BYTE *)(result + 686)) ) /*0x4854af*/
      {
        v5 = 0; /*0x4854bd*/
        v6 = 1; /*0x4854bf*/
        while ( 1 ) /*0x4854c2*/
        {
          if ( v6 ) /*0x4854c2*/
          {
            v7 = v5 & 7; /*0x4854cd*/
            v11 = *(_DWORD *)(this + 36); /*0x4854d0*/
            LOWORD(v10) = v11 + LOWORD(dword_89F688[v7]); /*0x4854ef*/
            HIWORD(v10) = HIWORD(v11) + HIWORD(dword_89F688[v7]); /*0x4854f8*/
            v11 = v10; /*0x485501*/
            result = (int)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v11); /*0x48550b*/
            v4 = dword_A83D84; /*0x485510*/
          }
          else
          {
            result = this; /*0x4854c4*/
          }
          if ( *(_BYTE *)(result + 284) > 4u && !*(_BYTE *)(this + 284) ) /*0x48551f*/
          {
            v8 = *(_DWORD *)(result + 68); /*0x485529*/
            if ( v8 == -1 || !*(_BYTE *)(*(_DWORD *)&v4->TechnoTypeClass[4 * v8] + 686) ) /*0x485534*/
              break; /*0x485534*/
          }
          v9 = *(_DWORD *)(result + 236); /*0x48553d*/
          if ( v9 == 2 ) /*0x485546*/
            break; /*0x485546*/
          if ( v9 == 3 ) /*0x48554b*/
            break; /*0x48554b*/
          if ( v9 == 8 ) /*0x485550*/
            break; /*0x485550*/
          if ( v9 == 6 ) /*0x485555*/
            break; /*0x485555*/
          result = *(_DWORD *)(result + 68); /*0x485557*/
          if ( result != -1 ) /*0x48555d*/
          {
            result = *(_DWORD *)&v4->TechnoTypeClass[4 * result]; /*0x48555f*/
            if ( !*(_BYTE *)(result + 686) ) /*0x485562*/
              break; /*0x485562*/
          }
          v5 += 2; /*0x48556c*/
          v6 = (unsigned int)v5 < 8; /*0x48556f*/
          if ( v5 >= 8 ) /*0x485572*/
          {
            LOBYTE(result) = 1; /*0x485579*/
            return result; /*0x48557f*/
          }
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x485581*/
  return result; /*0x485578*/
}



// ==== 0x00485590  CellClass::ProcessBridgeRepair  this=CellClass  sig=csp ====
void __thiscall CellClass::ProcessBridgeRepair(CellClass *this)
{
  CellClass *v1; // ebp
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
  CellClass *NeighbourContent; // esi
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
  int v31; // eax
  Coord2D *v32; // eax
  int *v33; // eax
  int *v34; // eax
  struct tagRECT *v35; // eax
  Bounds *v36; // eax
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
  CellClass *v66; // [esp+4Ch] [ebp-B4h]
  int v67; // [esp+50h] [ebp-B0h]
  int v68; // [esp+54h] [ebp-ACh]
  _DWORD v69[2]; // [esp+58h] [ebp-A8h] BYREF
  int v70; // [esp+60h] [ebp-A0h] BYREF
  LONG v71; // [esp+68h] [ebp-98h]
  int v72[2]; // [esp+70h] [ebp-90h] BYREF
  int v73[4]; // [esp+78h] [ebp-88h] BYREF
  int v74[4]; // [esp+88h] [ebp-78h] BYREF
  int v75; // [esp+98h] [ebp-68h] BYREF
  _DWORD v76[4]; // [esp+A0h] [ebp-60h] BYREF
  RECT rcSrc1; // [esp+B0h] [ebp-50h] BYREF
  int v78[4]; // [esp+C0h] [ebp-40h] BYREF
  int v79[4]; // [esp+E0h] [ebp-20h] BYREF
  _DWORD v80[4]; // [esp+F0h] [ebp-10h] BYREF

  v1 = this; /*0x48559e*/
  v66 = this; /*0x4855a3*/
  v56 = 0; /*0x4855a7*/
  v57 = 0; /*0x4855ab*/
  v58 = 0; /*0x4855af*/
  v59 = 0; /*0x4855b3*/
  PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)this, &v70); /*0x4855c0*/
  StartCoords = House::GetStartCoords((House *)v1, &rcDst); /*0x4855c5*/
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
  v1->powerup = 0; /*0x48571a*/
  BridgeBitfield = CellClass::GetBridgeBitfield(v1); /*0x485721*/
  if ( !BridgeBitfield || v1->slopeIndex ) /*0x48572c*/
    *(_DWORD *)&v1->__pad_28[28] = -1; /*0x485768*/
  else
    v1->powerup = 3 * BridgeBitfield + abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 3); /*0x485760*/
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v1->smudgeTypeIndex); /*0x485778*/
  v16 = 0; /*0x48577d*/
  v60 = 0; /*0x48577f*/
  do /*0x485a30*/
  {
    NeighbourContent = (CellClass *)Cell::GetNeighbourContent((Cell *)v1, v16); /*0x48578b*/
    if ( !NeighbourContent->slopeIndex /*0x4857ac*/
      && *(_DWORD *)&NeighbourContent->__pad_28[28] == 126
      && NeighbourContent->powerup < 0x30u )
    {
      v18 = CellClass::GetBridgeBitfield(NeighbourContent); /*0x4857c0*/
      v67 = v18; /*0x4857c7*/
      v61 = 0; /*0x4857cb*/
      v62 = 0; /*0x4857cf*/
      v63 = 0; /*0x4857d3*/
      v64 = 0; /*0x4857d7*/
      v19 = (struct tagRECT *)BuildingClass::GetPlacementRect((BuildingClass *)NeighbourContent, v79); /*0x4857ea*/
      v20 = (struct tagRECT *)House::GetStartCoords((House *)NeighbourContent, v80); /*0x4857ec*/
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
        NeighbourContent->powerup = 3 * v18 + abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 3); /*0x48593d*/
      else
        *(_DWORD *)&NeighbourContent->__pad_28[28] = -1; /*0x48590b*/
      House::AnnounceUpgrade((int)NeighbourContent, -1); /*0x485947*/
      v69[0] = DSurface_ViewBounds.field_0; /*0x485957*/
      v69[1] = DSurface_ViewBounds.field_4; /*0x48595f*/
      v42 = (struct tagRECT *)BuildingClass::GetPlacementRect((BuildingClass *)NeighbourContent, v73); /*0x485972*/
      House::GetStartCoords((House *)NeighbourContent, v74); /*0x485976*/
      v30 = (struct tagRECT *)Rect::Union(v42, v48, v51); /*0x485984*/
      v31 = Rect::Union(v30, v49, v52); /*0x485995*/
      v43 = *(_DWORD *)(v31 + 12); /*0x4859a0*/
      v39 = *(_DWORD *)(v31 + 8); /*0x4859a5*/
      v32 = (Coord2D *)CellStruct::Copy((CellStruct *)v31, v72); /*0x4859b6*/
      v33 = Coord2D::Sub(v32, &v75, v69); /*0x4859bd*/
      v34 = Rect::Construct((Rect *)&rcSrc1, v33, v39, v43); /*0x4859ca*/
      v61 = *v34; /*0x4859d8*/
      v62 = v34[1]; /*0x4859df*/
      v63 = v34[2]; /*0x4859e6*/
      v64 = v34[3]; /*0x4859ef*/
      Cell::CreateCrater(*v34, v34[1], v34[2], v34[3], 0); /*0x485a0f*/
      BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&NeighbourContent->smudgeTypeIndex); /*0x485a1d*/
      v1 = v66; /*0x485a22*/
    }
    v16 += 2; /*0x485a26*/
    v60 = v16; /*0x485a2c*/
  }
  while ( v16 < 8 ); /*0x485a30*/
  v44 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v72); /*0x485a45*/
  v38 = (struct tagRECT *)BuildingClass::GetPlacementRect((BuildingClass *)v1, v78); /*0x485a64*/
  House::GetStartCoords((House *)v1, v76); /*0x485a68*/
  v35 = (struct tagRECT *)Rect::Union(v38, &rcSrc1, v44); /*0x485a76*/
  v36 = (Bounds *)Rect::Union(v35, v40, v45); /*0x485a87*/
  v37 = Bounds::Subtract(v36, v41, v46); /*0x485a8e*/
  v56 = *v37; /*0x485a9c*/
  v57 = v37[1]; /*0x485aa3*/
  v58 = v37[2]; /*0x485aaa*/
  v59 = v37[3]; /*0x485ab3*/
  Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x485ad3*/
  House::AnnounceUpgrade((int)v1, -1); /*0x485adc*/
}



// ==== 0x00485AF0  BuildingClass::VisualizePlacement  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::VisualizePlacement(BuildingClass *this)
{
  BuildingClass *v1; // ebp
  int *PlacementRect; // esi
  _DWORD *StartCoords; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  char transporter; // al
  signed int v9; // ebx
  BuildingClass *NeighbourContent; // esi
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
  int v34; // eax
  Coord2D *v35; // eax
  int *v36; // eax
  int *v37; // eax
  struct tagRECT *v38; // eax
  int *v39; // eax
  int v40; // edx
  struct tagRECT *v41; // eax
  Bounds *v42; // eax
  Rect *v43; // eax
  struct tagRECT *v44; // eax
  Bounds *v45; // eax
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
  Rect v69; // [esp+38h] [ebp-180h] BYREF
  int v70; // [esp+48h] [ebp-170h]
  int v71; // [esp+4Ch] [ebp-16Ch]
  int v72; // [esp+50h] [ebp-168h]
  BuildingClass *v73; // [esp+54h] [ebp-164h]
  struct tagRECT rcDst; // [esp+58h] [ebp-160h] BYREF
  int v75; // [esp+74h] [ebp-144h]
  int v76; // [esp+80h] [ebp-138h]
  int v77; // [esp+84h] [ebp-134h]
  _DWORD v78[2]; // [esp+88h] [ebp-130h] BYREF
  int v79; // [esp+90h] [ebp-128h] BYREF
  int v80; // [esp+98h] [ebp-120h]
  int v81; // [esp+A0h] [ebp-118h] BYREF
  LONG v82; // [esp+A8h] [ebp-110h]
  _DWORD v83[2]; // [esp+B0h] [ebp-108h] BYREF
  int v84; // [esp+B8h] [ebp-100h] BYREF
  RECT rcSrc1; // [esp+C0h] [ebp-F8h] BYREF
  int v86[4]; // [esp+D0h] [ebp-E8h] BYREF
  RECT v87; // [esp+E0h] [ebp-D8h] BYREF
  int v88[4]; // [esp+F0h] [ebp-C8h] BYREF
  int v89; // [esp+100h] [ebp-B8h] BYREF
  int v90[4]; // [esp+108h] [ebp-B0h] BYREF
  Rect v91; // [esp+118h] [ebp-A0h] BYREF
  int v92[4]; // [esp+128h] [ebp-90h] BYREF
  int v93[4]; // [esp+138h] [ebp-80h] BYREF
  int v94[4]; // [esp+148h] [ebp-70h] BYREF
  int v95[4]; // [esp+168h] [ebp-50h] BYREF
  int v96[4]; // [esp+178h] [ebp-40h] BYREF
  int v97[4]; // [esp+1A8h] [ebp-10h] BYREF

  v1 = this; /*0x485afa*/
  v73 = this; /*0x485afe*/
  if ( !(unsigned __int8)BuildingClass::CheckAdjacentCells((int)this) ) /*0x485b19*/
    return; /*0x485b19*/
  PlacementRect = BuildingClass::GetPlacementRect(v1, &v81); /*0x485b35*/
  StartCoords = House::GetStartCoords((House *)v1, &v79); /*0x485b3a*/
  if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 ) /*0x485b4b*/
  {
    v7 = PlacementRect[3]; /*0x485bdb*/
  }
  else
  {
    if ( PlacementRect[2] > 0 ) /*0x485b5a*/
    {
      v72 = PlacementRect[3]; /*0x485b61*/
      if ( v72 > 0 ) /*0x485b65*/
      {
        v4 = StartCoords[1]; /*0x485b6b*/
        v5 = StartCoords[3]; /*0x485b71*/
        v6 = PlacementRect[1]; /*0x485b7e*/
        if ( v4 > v6 ) /*0x485b87*/
        {
          v5 += v4 - v6; /*0x485b8b*/
          v4 = v6; /*0x485b8d*/
        }
        if ( v5 + v4 < v72 + v6 ) /*0x485bb5*/
          v5 = v72 + v6 - v4 + 1; /*0x485bba*/
        v1 = v73; /*0x485bbc*/
        v75 = v5; /*0x485bc0*/
        goto LABEL_14; /*0x485bc4*/
      }
    }
    v7 = StartCoords[3]; /*0x485bce*/
  }
  v75 = v7; /*0x485bde*/
LABEL_14:
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v1->?); /*0x485c7d*/
  transporter = (char)v1->?; /*0x485c9b*/
  v1->?[2] = 126; /*0x485ca1*/
  if ( !transporter ) /*0x485caa*/
  {
    v9 = 0; /*0x485cd0*/
    BYTE2(v1->?) = (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 3 + 48; /*0x485cd2*/
    v68 = 0; /*0x485cd8*/
    while ( 1 ) /*0x485ce4*/
    {
      NeighbourContent = (BuildingClass *)Cell::GetNeighbourContent((Cell *)v1, v9); /*0x485ce4*/
      v11 = NeighbourContent->?[2]; /*0x485ce6*/
      if ( v11 == 126 ) /*0x485cec*/
      {
        if ( BYTE2(NeighbourContent->?) < 0x30u ) /*0x485cf5*/
          goto LABEL_21; /*0x485cf5*/
      }
      else if ( v11 == -1 || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v11) + 686) ) /*0x485d0d*/
      {
LABEL_21:
        if ( LOBYTE(NeighbourContent->?) ) /*0x485d1b*/
        {
          Rect::Set(&v69, 0, 0, 0, 0); /*0x486142*/
          v55 = (struct tagRECT *)BuildingClass::GetPlacementRect(NeighbourContent, v93); /*0x48615d*/
          House::GetStartCoords((House *)NeighbourContent, v96); /*0x486161*/
          v38 = (struct tagRECT *)Rect::Union(v55, v62, v64); /*0x48616f*/
          v39 = (int *)Rect::Union(v38, v63, v65); /*0x486180*/
          v69.X = *v39; /*0x486187*/
          v69.Y = v39[1]; /*0x48618e*/
          v69.Width = v39[2]; /*0x486195*/
          v40 = v39[3]; /*0x486199*/
          NeighbourContent->?[2] = 126; /*0x48619c*/
          v69.Height = v40; /*0x4861a8*/
          BYTE2(NeighbourContent->?) = 2 * LOBYTE(NeighbourContent->?) /*0x4861d7*/
                                     + (abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 1)
                                     + 51;
          v56 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v83); /*0x4861e2*/
          v47 = (struct tagRECT *)BuildingClass::GetPlacementRect(NeighbourContent, v86); /*0x486201*/
          House::GetStartCoords((House *)NeighbourContent, v88); /*0x486205*/
          v41 = (struct tagRECT *)Rect::Union(v47, &rcSrc1, v56); /*0x486213*/
          v42 = (Bounds *)Rect::Union(v41, v50, v57); /*0x486224*/
          v43 = (Rect *)Bounds::Subtract(v42, v51, v58); /*0x48622b*/
          v69 = *v43; /*0x486239*/
          Cell::CreateCrater(v43->X, v43->Y, v43->Width, v43->Height, 0); /*0x486270*/
        }
        else
        {
          BridgeBitfield = CellClass::GetBridgeBitfield((CellClass *)NeighbourContent); /*0x485d30*/
          v13 = NeighbourContent->?[2]; /*0x485d32*/
          v70 = BridgeBitfield; /*0x485d38*/
          if ( v13 == -1 || BridgeBitfield <= 15 && BYTE2(NeighbourContent->?) / 3 != BridgeBitfield ) /*0x485d5f*/
          {
            v14 = BuildingClass::GetPlacementRect(NeighbourContent, v97); /*0x485d86*/
            v15 = House::GetStartCoords((House *)NeighbourContent, v92); /*0x485d92*/
            if ( v15[2] <= 0 || v15[3] <= 0 ) /*0x485da7*/
            {
              v76 = v14[2]; /*0x485e60*/
              v20 = v14[3]; /*0x485e67*/
            }
            else
            {
              v66 = v14[2]; /*0x485db2*/
              if ( v66 <= 0 || (v71 = v14[3], v71 <= 0) ) /*0x485dc5*/
              {
                v23 = v15[2]; /*0x485e43*/
                v20 = v15[3]; /*0x485e4b*/
                v76 = v23; /*0x485e4e*/
              }
              else
              {
                v16 = *v15; /*0x485dc7*/
                v17 = *v14; /*0x485dc9*/
                v18 = v15[2]; /*0x485dcc*/
                v19 = v15[1]; /*0x485dcf*/
                v20 = v15[3]; /*0x485dd2*/
                v21 = v16 <= *v14; /*0x485dd5*/
                v80 = v18; /*0x485dd7*/
                if ( !v21 ) /*0x485dde*/
                {
                  v18 += v16 - v17; /*0x485de2*/
                  v16 = v17; /*0x485de4*/
                  v80 = v18; /*0x485de6*/
                }
                v22 = v14[1]; /*0x485ded*/
                v72 = v22; /*0x485df2*/
                if ( v19 > v22 ) /*0x485df6*/
                {
                  v20 += v19 - v22; /*0x485dfa*/
                  v19 = v22; /*0x485dfc*/
                }
                if ( v16 + v18 < v17 + v66 ) /*0x485e08*/
                  v80 = v17 - v16 + v66 + 1; /*0x485e14*/
                if ( v20 + v19 < v71 + v72 ) /*0x485e2a*/
                  v20 = v71 + v72 - v19 + 1; /*0x485e2f*/
                v76 = v80; /*0x485e3a*/
              }
            }
            v77 = v20; /*0x485e6e*/
            NeighbourContent->?[2] = 126; /*0x485f28*/
            v24 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x485f47*/
            BYTE2(NeighbourContent->?) = 3 * v70 + abs32(v24 % 3); /*0x485f69*/
            House::AnnounceUpgrade((int)NeighbourContent, -1); /*0x485f71*/
            v78[0] = DSurface_ViewBounds.field_0; /*0x485f81*/
            v78[1] = DSurface_ViewBounds.field_4; /*0x485f8f*/
            v25 = (struct tagRECT *)House::GetStartCoords((House *)NeighbourContent, v94); /*0x485fa5*/
            v26 = (struct tagRECT *)BuildingClass::GetPlacementRect(NeighbourContent, v95); /*0x485faa*/
            if ( v25->right <= 0 || v25->bottom <= 0 ) /*0x485fbf*/
            {
              rcDst = *v26; /*0x48607b*/
            }
            else
            {
              right = v26->right; /*0x485fca*/
              if ( right <= 0 || (v70 = v26->bottom, v70 <= 0) ) /*0x485fdd*/
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
                v82 = v29; /*0x485fee*/
                if ( !v21 ) /*0x485ff5*/
                {
                  v29 += left - v28; /*0x485ff9*/
                  left = v28; /*0x485ffb*/
                  v82 = v29; /*0x485ffd*/
                }
                v32 = v26->top; /*0x486004*/
                v71 = v32; /*0x486009*/
                if ( top > v32 ) /*0x48600d*/
                {
                  bottom += top - v32; /*0x486011*/
                  top = v32; /*0x486013*/
                }
                if ( left + v29 >= v28 + right ) /*0x48601f*/
                  v33 = v82; /*0x48602d*/
                else
                  v33 = v28 - left + right + 1; /*0x486027*/
                if ( bottom + top < v71 + v70 ) /*0x486043*/
                  bottom = v71 + v70 - top + 1; /*0x486048*/
                rcDst.left = left; /*0x48604a*/
                rcDst.top = top; /*0x48604e*/
                rcDst.right = v33; /*0x486052*/
                rcDst.bottom = bottom; /*0x486056*/
              }
            }
            v34 = Rect::Union(&rcDst, v62, v64); /*0x4860a4*/
            v54 = *(_DWORD *)(v34 + 12); /*0x4860af*/
            v49 = *(_DWORD *)(v34 + 8); /*0x4860b7*/
            v35 = (Coord2D *)CellStruct::Copy((CellStruct *)v34, &v84); /*0x4860cb*/
            v36 = Coord2D::Sub(v35, &v89, v78); /*0x4860d2*/
            v37 = Rect::Construct(&v91, v36, v49, v54); /*0x4860df*/
            Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x486124*/
            v9 = v68; /*0x486129*/
            v1 = v73; /*0x48612d*/
          }
        }
        BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&NeighbourContent->?); /*0x48627e*/
      }
      v9 += 2; /*0x486283*/
      v68 = v9; /*0x486289*/
      if ( v9 >= 8 ) /*0x48628d*/
      {
        BuildingClass::CreateIdleAnim(v1); /*0x486295*/
        goto LABEL_62; /*0x48629a*/
      }
    }
  }
  BYTE2(v1->?) = 2 * LOBYTE(v1->?) + (abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 1) + 51; /*0x4862c0*/
LABEL_62:
  v59 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v83); /*0x4862c6*/
  v48 = (struct tagRECT *)BuildingClass::GetPlacementRect(v1, v90); /*0x4862f0*/
  House::GetStartCoords((House *)v1, v88); /*0x4862fb*/
  v44 = (struct tagRECT *)Rect::Union(v48, &v87, v59); /*0x486309*/
  v45 = (Bounds *)Rect::Union(v44, v52, v60); /*0x48631a*/
  v46 = Bounds::Subtract(v45, v53, v61); /*0x486321*/
  Cell::CreateCrater(*v46, v46[1], v46[2], v46[3], 0); /*0x486366*/
  House::AnnounceUpgrade((int)v1, -1); /*0x48636f*/
}



// ==== 0x00486380  Cell::IsEmpty  this=Cell  sig=csp ====
int __thiscall Cell::IsEmpty(Cell *this)
{
  int result; // eax

  result = this->Cell_field_0x38; /*0x486380*/
  LOBYTE(result) = result == 0xFFFF || !result; /*0x486391*/
  return result; /*0x486390*/
}



// ==== 0x004863A0  ObjectClass::method_4863A0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4863A0(ObjectClass *this)
{
  BombClass *attachedBomb; // eax

  attachedBomb = this->attachedBomb; /*0x4863a0*/
  return (int)attachedBomb >= g_CellTileLookup && (int)attachedBomb < g_CellTileLookup + 20 /*0x4863c7*/
      || (int)attachedBomb >= dword_AA1058 && (int)attachedBomb < dword_AA1058 + 12;
}



// ==== 0x004863D0  CellLand::IsBuildable  this=CellLand  sig=csp ====
int __thiscall CellLand::IsBuildable(CellLand *this)
{
  int result; // eax
  char v2; // cl
  char v3; // cl
  char v4; // cl
  int v5; // ecx

  if ( g_TerrainBuildConfig != -1 ) /*0x4863da*/
  {
    result = *((_DWORD *)this + 14); /*0x4863dc*/
    if ( result >= g_TerrainBuildConfig && result < g_TerrainBuildConfig + 40 ) /*0x4863e8*/
    {
      LOBYTE(result) = 1; /*0x4863ea*/
      return result; /*0x4863ed*/
    }
  }
  if ( dword_AA073C == -1 || (result = *((_DWORD *)this + 14), result < dword_AA073C) || result >= dword_AA073C + 4 ) /*0x486405*/
  {
    if ( dword_ABB110 == -1 || (result = *((_DWORD *)this + 14), result < dword_ABB110) || result >= dword_ABB110 + 4 ) /*0x486448*/
    {
      if ( dword_AA1050 == -1 || (result = *((_DWORD *)this + 14), result < dword_AA1050) || result >= dword_AA1050 + 4 ) /*0x48648c*/
      {
        if ( dword_AA10A0 == -1 /*0x4864cf*/
          || (result = *((_DWORD *)this + 14), result < dword_AA10A0)
          || result >= dword_AA10A0 + 4 )
        {
          if ( dword_ABBEBC != -1 ) /*0x486505*/
          {
            result = *((_DWORD *)this + 14); /*0x486507*/
            if ( result >= dword_ABBEBC && result < dword_ABBEBC + 20 ) /*0x486513*/
            {
              LOBYTE(result) = 1; /*0x486515*/
              return result; /*0x486518*/
            }
          }
          if ( dword_ABAD24 != -1 ) /*0x486522*/
          {
            result = *((_DWORD *)this + 14); /*0x486524*/
            if ( result >= dword_ABAD24 && result < dword_ABAD24 + 4 ) /*0x486530*/
            {
              LOBYTE(result) = 1; /*0x486532*/
              return result; /*0x486535*/
            }
          }
          if ( g_Cell_BuildabilityLUT != -1 ) /*0x48653f*/
          {
            result = *((_DWORD *)this + 14); /*0x486541*/
            if ( result >= g_Cell_BuildabilityLUT && result < g_Cell_BuildabilityLUT + 16 ) /*0x48654d*/
            {
              LOBYTE(result) = 1; /*0x48654f*/
              return result; /*0x486552*/
            }
          }
          if ( g_TerrainBridgeIndex != -1 ) /*0x48655c*/
          {
            result = *((_DWORD *)this + 14); /*0x48655e*/
            if ( result >= g_TerrainBridgeIndex && result < g_TerrainBridgeIndex + 16 ) /*0x48656a*/
            {
              LOBYTE(result) = 1; /*0x48656c*/
              return result; /*0x48656f*/
            }
          }
          if ( dword_ABC2C8 != -1 ) /*0x486579*/
          {
            result = *((_DWORD *)this + 14); /*0x48657b*/
            if ( result >= dword_ABC2C8 && result < dword_ABC2C8 + 2 ) /*0x486587*/
            {
              LOBYTE(result) = 1; /*0x486589*/
              return result; /*0x48658c*/
            }
          }
          result = dword_AA101C; /*0x48658d*/
          if ( dword_AA101C == -1 ) /*0x486595*/
            goto LABEL_60; /*0x486595*/
          v5 = *((_DWORD *)this + 14); /*0x486597*/
          if ( v5 < dword_AA101C ) /*0x48659c*/
            goto LABEL_60; /*0x48659c*/
          result = dword_AA101C + 28; /*0x48659e*/
          if ( v5 >= dword_AA101C + 28 ) /*0x4865a3*/
            goto LABEL_60; /*0x4865a3*/
        }
        else if ( result == dword_AA10A0 || result == dword_AA10A0 + 3 ) /*0x4864da*/
        {
          v4 = *((_BYTE *)this + 282); /*0x4864e0*/
          if ( v4 != 2 && v4 != 3 ) /*0x4864f2*/
          {
            LOBYTE(result) = 1; /*0x4864f8*/
            return result; /*0x4864fb*/
          }
          goto LABEL_60; /*0x4864f2*/
        }
      }
      else if ( result == dword_AA1050 || result == dword_AA1050 + 3 ) /*0x486497*/
      {
        if ( *((_BYTE *)this + 282) >= 2u ) /*0x4864a5*/
        {
          LOBYTE(result) = 1; /*0x4864b4*/
          return result; /*0x4864b7*/
        }
        goto LABEL_60; /*0x4864a5*/
      }
    }
    else if ( result == dword_ABB110 || result == dword_ABB110 + 3 ) /*0x486453*/
    {
      v3 = *((_BYTE *)this + 282); /*0x486459*/
      if ( v3 != 1 && v3 != 3 ) /*0x48646b*/
      {
        LOBYTE(result) = 1; /*0x486471*/
        return result; /*0x486474*/
      }
      goto LABEL_60; /*0x48646b*/
    }
LABEL_59:
    LOBYTE(result) = 1; /*0x4865a5*/
    return result; /*0x4865a8*/
  }
  if ( result != dword_AA073C && result != dword_AA073C + 3 ) /*0x486410*/
    goto LABEL_59; /*0x486410*/
  v2 = *((_BYTE *)this + 282); /*0x486416*/
  if ( v2 && v2 != 4 ) /*0x486427*/
  {
    LOBYTE(result) = 1; /*0x48642d*/
    return result; /*0x486430*/
  }
LABEL_60:
  LOBYTE(result) = 0; /*0x4865a9*/
  return result; /*0x4863ec*/
}



// ==== 0x004865B0  CellClass::IsTerrainType  this=CellClass  sig=csp ====
int __thiscall CellClass::IsTerrainType(CellClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->__pad_28[16]; /*0x4865b0*/
  LOBYTE(result) = result >= dword_ABAD28 && result < dword_ABAD28 + 42; /*0x4865c7*/
  return result; /*0x4865c6*/
}



// ==== 0x004865D0  Cell::IsGroundTypeRange  this=Cell  sig=csp ====
int __thiscall Cell::IsGroundTypeRange(Cell *this)
{
  int result; // eax

  result = this->Cell_field_0x38; /*0x4865d0*/
  LOBYTE(result) = result >= dword_ABAD28 && result < dword_ABAD28 + 42 /*0x4865e7*/
                || result >= g_CellPassabilityLUT && result < g_CellPassabilityLUT + 14
                || result >= dword_AA073C && result < dword_AA073C + 4
                || result >= dword_ABB110 && result < dword_ABB110 + 4
                || result >= dword_AA1050 && result < dword_AA1050 + 4
                || result >= dword_AA10A0 && result < dword_AA10A0 + 4;
  return result; /*0x4865e6*/
}



// ==== 0x00486650  CellClass::InMapDataRange  this=CellClass  sig=csp ====
int __thiscall CellClass::InMapDataRange(CellClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->__pad_28[16]; /*0x486650*/
  LOBYTE(result) = result >= dword_AA10A4 && result < dword_AA10A4 + 14; /*0x486667*/
  return result; /*0x486666*/
}



// ==== 0x00486670  CellClass::InBounds  this=CellClass  sig=csp ====
int __thiscall CellClass::InBounds(CellClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->__pad_28[16]; /*0x486670*/
  LOBYTE(result) = result >= dword_ABC2B0 && result < dword_ABC2B0 + 16; /*0x486687*/
  return result; /*0x486686*/
}



// ==== 0x004866D0  ObjectClass::method_4866D0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4866D0(ObjectClass *this)
{
  BombClass *attachedBomb; // eax

  attachedBomb = this->attachedBomb; /*0x4866d0*/
  return (int)attachedBomb >= g_CellTileTypeCache && (int)attachedBomb < g_CellTileTypeCache + 15; /*0x4866e6*/
}



// ==== 0x004866F0  ObjectClass::method_4866F0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4866F0(ObjectClass *this)
{
  BombClass *attachedBomb; // eax

  attachedBomb = this->attachedBomb; /*0x4866f0*/
  return (int)attachedBomb >= dword_ABBEC4 && (int)attachedBomb < dword_ABBEC4 + 4; /*0x486706*/
}



// ==== 0x00486730  Value::InRange  this=Value  sig=csp ====
bool __thiscall Value::InRange(Value *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14); /*0x486730*/
  return v1 >= dword_AA0E20 && v1 < dword_AA0E20 + 14; /*0x486746*/
}



// ==== 0x00486750  Cell::IsInRange  this=Cell  sig=csp ====
int __thiscall Cell::IsInRange(Cell *this)
{
  int result; // eax

  LOBYTE(result) = g_Cell_BuildabilityLUT != -1 /*0x48676c*/
                && (result = this->Cell_field_0x38, result >= g_Cell_BuildabilityLUT)
                && result < g_Cell_BuildabilityLUT + 16;
  return result; /*0x48676b*/
}



// ==== 0x00486770  Cell::IsInRange2  this=Cell  sig=csp ====
int __thiscall Cell::IsInRange2(Cell *this)
{
  int result; // eax

  LOBYTE(result) = g_TerrainBridgeIndex != -1 /*0x48678c*/
                && (result = this->Cell_field_0x38, result >= g_TerrainBridgeIndex)
                && result < g_TerrainBridgeIndex + 16;
  return result; /*0x48678b*/
}



// ==== 0x00486790  RandomMap::Check  this=RandomMap  sig=csp ====
bool __thiscall RandomMap::Check(RandomMap *this)
{
  int v1; // eax

  v1 = this->RandomMap_field_0x38[0]; /*0x486790*/
  return v1 >= dword_AA0E24 && v1 < dword_AA0E24 + 16; /*0x4867a6*/
}



// ==== 0x004867B0  Cell::IsShore  this=Cell  sig=csp ====
int __thiscall Cell::IsShore(Cell *this)
{
  int result; // eax

  result = this->Cell_field_0x38; /*0x4867b0*/
  LOBYTE(result) = result == dword_AA0E18 || result >= dword_AA0748 && result < dword_AA0748 + 16; /*0x4867d1*/
  return result; /*0x4867d0*/
}



// ==== 0x004867E0  CellClass::GetCellType  this=CellClass  sig=csp ====
int __thiscall CellClass::GetCellType(CellClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->__pad_28[16]; /*0x4867e0*/
  LOBYTE(result) = result < g_CellPassabilityLUT || result >= g_CellPassabilityLUT + 14; /*0x4867f7*/
  return result; /*0x4867f6*/
}



// ==== 0x00486840  CellClass::GetOccupier  this=CellClass  sig=csp ====
int __thiscall CellClass::GetOccupier(CellClass *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF
  _DWORD *v6; // [esp+14h] [ebp+4h]

  v2 = (SHIWORD(this->smudgeTypeIndex) << 8) + 128; /*0x48685d*/
  v5[0] = (SLOWORD(this->smudgeTypeIndex) << 8) + 128; /*0x486864*/
  v1 = v5[0]; /*0x486857*/
  v5[1] = v2; /*0x486868*/
  inited = Isometric::InitTables((int)this, v5); /*0x48686c*/
  *v6 = v1; /*0x486877*/
  v6[1] = v2; /*0x486879*/
  v6[2] = inited; /*0x48687e*/
  return (int)v6; /*0x48687c*/
}



// ==== 0x00486890  CellClass::CheckProperty  this=CellClass  sig=csp ====
int __thiscall CellClass::CheckProperty(CellClass *this)
{
  int v1; // esi
  int *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  _DWORD *v7; // ecx
  _BYTE v8[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v9; // [esp+14h] [ebp+4h]

  if ( (this->flags[0] & 0x100) != 0 ) /*0x48689d*/
  {
    v1 = dword_89E7B4; /*0x4868a1*/
    v2 = (int *)(*(int (__thiscall **)(CellClass *, _BYTE *))(this->mapCoords[0] + 72))(this, v8); /*0x4868ad*/
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
    v7 = (_DWORD *)(*(int (__thiscall **)(CellClass *, _BYTE *))(this->mapCoords[0] + 72))(this, v8); /*0x4868dc*/
    *v9 = *v7; /*0x4868e6*/
    v9[1] = v7[1]; /*0x4868eb*/
    v9[2] = v7[2]; /*0x4868f2*/
    return (int)v9; /*0x4868de*/
  }
}



// ==== 0x00486900  CellClass::IsActiveOrNext  this=CellClass  sig=csp ====
int __thiscall CellClass::IsActiveOrNext(CellClass *this)
{
  int result; // eax

  result = *(_DWORD *)&this->__pad_28[16]; /*0x486900*/
  LOBYTE(result) = result == dword_ABC2C8 || result == dword_ABC2C8 + 1; /*0x48690d*/
  return result; /*0x48690f*/
}



// ==== 0x00486920  BuildingClass::CreateIdleAnim  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::CreateIdleAnim(BuildingClass *this)
{
  int *v2; // esi
  AnimClass *v3; // ebp
  int inited; // eax
  int *v5; // [esp+Ch] [ebp-1Ch]
  int occupant; // [esp+10h] [ebp-18h]
  _DWORD v7[2]; // [esp+14h] [ebp-14h] BYREF
  int v8[3]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( this->?[2] == 126 && BYTE2(this->?) >= 0x30u && !LOBYTE(this->?) && (this->? & 0x20000) == 0 ) /*0x486956*/
  {
    v2 = (int *)this->?[1]; /*0x48695c*/
    v5 = v2; /*0x486964*/
    if ( v2 ) /*0x486968*/
    {
      while ( 1 ) /*0x486976*/
      {
        if ( (*(int (__thiscall **)(int *))(*v2 + 456))(v2) <= 5 /*0x4869bd*/
          && (v2[5] & 1) != 0
          && !*(_BYTE *)((*(int (__thiscall **)(int *))(*v2 + 132))(v2) + 3217)
          && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse(v2, 8) )
        {
          v3 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4869d4*/
          if ( v3 ) /*0x4869db*/
          {
            occupant = this->?; /*0x4869e2*/
            v7[0] = 128; /*0x4869fd*/
            v7[1] = 128; /*0x486a01*/
            inited = Isometric::InitTables((int)this, v7); /*0x486a0a*/
            v8[1] = SHIWORD(occupant) << 8; /*0x486a15*/
            v8[0] = (__int16)occupant << 8; /*0x486a23*/
            v8[2] = inited; /*0x486a2c*/
            AnimClass::ctor( /*0x486a42*/
              v3,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 232),
              v8,
              0,
              1,
              (void *)0x600,
              0,
              0);
            v2 = v5; /*0x486a47*/
          }
          this->? |= 0x20000u; /*0x486a4b*/
        }
        v5 = (int *)v2[12]; /*0x486a5a*/
        if ( !v5 ) /*0x486a5e*/
          break; /*0x486a5e*/
        v2 = (int *)v2[12]; /*0x486972*/
      }
    }
  }
}



// ==== 0x00486A70  CellClass::CreateFoggedObjects  this=CellClass  sig=csp ====
char __thiscall CellClass::CreateFoggedObjects(CellClass *this)
{
  int v1; // eax
  int v2; // esi
  _DWORD *v3; // ebp
  int v4; // eax
  int *v5; // edi
  ObjectClass *v6; // esi
  char v7; // al
  __int16 v9[2]; // [esp+10h] [ebp-10h] BYREF
  char v10[4]; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  _BYTE v12[4]; // [esp+1Ch] [ebp-4h] BYREF

  LOBYTE(v1) = (_BYTE)dword_A8B230; /*0x486a70*/
  if ( ((int)dword_A8B230->vtable0 & 0x1000) != 0 ) /*0x486a7d*/
  {
    v2 = 1; /*0x486a89*/
    *(_DWORD *)v9 = this->smudgeTypeIndex; /*0x486a8f*/
    for ( i = 1; i <= 15; i += 2 ) /*0x486a93*/
    {
      v3 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x486aa8*/
      v1 = *((char *)v3 + 283); /*0x486aad*/
      if ( v1 >= v2 - 2 && v1 <= v2 ) /*0x486abe*/
      {
        v1 = v3[80]; /*0x486ac4*/
        if ( (v1 & 0x400000) == 0 ) /*0x486ad1*/
        {
          v4 = __2_YAPAXI_Z(0x18u); /*0x486ad9*/
          if ( v4 ) /*0x486ae3*/
          {
            *(_DWORD *)(v4 + 4) = 0; /*0x486ae5*/
            *(_DWORD *)(v4 + 8) = 0; /*0x486ae8*/
            *(_BYTE *)(v4 + 12) = 1; /*0x486aeb*/
            *(_BYTE *)(v4 + 13) = 0; /*0x486aef*/
            *(_DWORD *)v4 = &DynamicVectorClass<FoggedObjectClass *>::`vftable'; /*0x486af2*/
            *(_DWORD *)(v4 + 20) = 10; /*0x486af8*/
            *(_DWORD *)(v4 + 16) = 0; /*0x486aff*/
            v5 = (int *)v4; /*0x486b02*/
          }
          else
          {
            v5 = 0; /*0x486b06*/
          }
          LOBYTE(v1) = (*(int (__thiscall **)(int *, int, _DWORD))(*v5 + 8))(v5, 1, 0); /*0x486b0f*/
          v5[5] = 1; /*0x486b12*/
          v6 = (ObjectClass *)v3[57]; /*0x486b21*/
          for ( v3[80] |= 0x400000u; v6; v6 = v6->nextObject ) /*0x486b2f*/
          {
            v1 = (*((int (__stdcall **)(void **))v6->? + 3))(&v6->?); /*0x486b38*/
            if ( v1 == 6 ) /*0x486b3e*/
            {
              (*((void (__thiscall **)(ObjectClass *, _BYTE *))v6->AbstractClass + 110))(v6, v12); /*0x486b49*/
              LOBYTE(v1) = sub_457A10(v6); /*0x486b51*/
              if ( (_BYTE)v1 ) /*0x486b58*/
              {
                if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *))v6->AbstractClass + 32))(v6) /*0x486b75*/
                  || (v7 = BYTE1(v6[10].attachedTag), v10[0] = 1, v7 == 15) )
                {
                  v10[0] = 0; /*0x486b77*/
                }
                LOBYTE(v1) = BuildingClass::CreateFoggedObjects((BuildingClass *)v6, (int)v5, v3, v10[0]); /*0x486b84*/
              }
            }
            else if ( v1 == 1 || v1 == 2 || v1 == 15 ) /*0x486b98*/
            {
              LOBYTE(v1) = (*((int (__thiscall **)(ObjectClass *))v6->AbstractClass + 84))(v6); /*0x486b9e*/
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
      ++v9[0]; /*0x486bc5*/
      ++v9[1]; /*0x486bca*/
      v2 = i + 2; /*0x486bcf*/
    }
  }
  return v1; /*0x486be3*/
}



// ==== 0x00486BF0  CellClass::UpdateZone  this=CellClass  sig=csp ====
_DWORD *__thiscall CellClass::UpdateZone(CellClass *this)
{
  int i; // esi
  _DWORD *result; // eax
  int v3; // ecx
  __int16 v4[2]; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v4 = this->smudgeTypeIndex; /*0x486bf5*/
  for ( i = 1; i < 15; i += 2 ) /*0x486bf9*/
  {
    result = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4); /*0x486c08*/
    v3 = *((char *)result + 283); /*0x486c0d*/
    if ( v3 >= i - 2 && v3 <= i ) /*0x486c1d*/
    {
      result[80] &= ~0x400000u; /*0x486c2b*/
      result = (_DWORD *)CellClass::ClearCellContents((CellClass *)result); /*0x486c33*/
    }
    ++v4[0]; /*0x486c38*/
    ++v4[1]; /*0x486c3d*/
  }
  return result; /*0x486c4a*/
}



// ==== 0x00486C50  CellClass::ClearCellContents  this=CellClass  sig=csp ====
int __thiscall CellClass::ClearCellContents(CellClass *this)
{
  int result; // eax
  int i; // ebp
  __int16 *j; // edi
  __int16 v5; // si
  int v6; // eax
  int v7; // ecx
  __int16 v8; // dx
  CellClass *v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int (__thiscall ***v14)(_DWORD, int); // ecx
  _DWORD *v15; // [esp+4h] [ebp-1Ch] BYREF
  __int16 v16; // [esp+8h] [ebp-18h]
  __int16 v17; // [esp+Ah] [ebp-16h]
  int v18; // [esp+Ch] [ebp-14h]
  __int16 v19[6]; // [esp+10h] [ebp-10h] BYREF
  int v20; // [esp+1Ch] [ebp-4h]

  result = *(_DWORD *)this->__pad_28; /*0x486c56*/
  if ( result ) /*0x486c5b*/
  {
    for ( i = *(_DWORD *)(result + 16) - 1; i >= 0; --i ) /*0x486c66*/
    {
      v15 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)this->__pad_28 + 4) + 4 * i); /*0x486c77*/
      if ( CellClass::recalcPassability((int)v15) ) /*0x486c7b*/
      {
        for ( j = (__int16 *)CellClass::recalcPassability((int)v15); ; j += 2 ) /*0x486c91*/
        {
          v5 = *j; /*0x486c93*/
          if ( *j == 0x7FFF && j[1] == 0x7FFF ) /*0x486ca1*/
            break; /*0x486ca1*/
          v6 = v15[13]; /*0x486cae*/
          v7 = v15[14]; /*0x486cb0*/
          v20 = v15[15]; /*0x486cb6*/
          v16 = v6 / 256; /*0x486cc6*/
          v8 = j[1]; /*0x486cd6*/
          v17 = v7 / 256; /*0x486cdd*/
          LOWORD(v18) = v16 + v5; /*0x486cef*/
          HIWORD(v18) = v17 + v8; /*0x486cf4*/
          *(_DWORD *)v19 = v18; /*0x486d03*/
          v9 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x486d07*/
          if ( v9 != this ) /*0x486d0e*/
          {
            v10 = *(_DWORD **)v9->__pad_28; /*0x486d10*/
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
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 12))(*(_DWORD *)this->__pad_28); /*0x486d6e*/
    v14 = *(int (__thiscall ****)(_DWORD, int))this->__pad_28; /*0x486d71*/
    if ( v14 ) /*0x486d77*/
      result = (**v14)(v14, 1); /*0x486d7d*/
    *(_DWORD *)this->__pad_28 = 0; /*0x486d7f*/
  }
  return result; /*0x486d86*/
}



// ==== 0x00486D90  ObjectClass::method_486D90  this=ObjectClass  sig=csp ====
int __thiscall sub_486D90(ObjectClass *this, char a2)
{
  int v3; // ebx
  int v5; // esi
  int v6; // ebp
  bool v7; // cf
  _DWORD *p_vtable0; // eax
  int v9; // ecx
  __int16 v10[2]; // [esp+8h] [ebp-4h] BYREF
  int v11; // [esp+10h] [ebp+4h]

  v3 = 1 << a2; /*0x486da4*/
  if ( (*((_DWORD *)this + 55) & (1 << a2)) == 0 ) /*0x486da8*/
    return -1; /*0x486dab*/
  v5 = 0; /*0x486db5*/
  v6 = 0; /*0x486db7*/
  v7 = 1; /*0x486db9*/
  do /*0x486e22*/
  {
    if ( v7 ) /*0x486dbc*/
    {
      v9 = v5 & 7; /*0x486dc7*/
      *(_DWORD *)v10 = this->occupant; /*0x486dca*/
      LOWORD(v11) = LOWORD(g_DDrawSurfaceManager.scenario[v9 + 82]) + v10[0]; /*0x486dee*/
      HIWORD(v11) = v10[1] + HIWORD(g_DDrawSurfaceManager.scenario[v9 + 82]); /*0x486df3*/
      *(_DWORD *)v10 = v11; /*0x486e02*/
      p_vtable0 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x486e06*/
    }
    else
    {
      p_vtable0 = &this->AbstractClass; /*0x486dbe*/
    }
    if ( (v3 & p_vtable0[55]) != 0 ) /*0x486e11*/
      v6 |= 1 << v5; /*0x486e1c*/
    v7 = (unsigned int)++v5 < 8; /*0x486e1f*/
  }
  while ( v5 < 8 ); /*0x486e22*/
  return v6; /*0x486daa*/
}



// ==== 0x00486E30  ObjectClass::Helper_486E30  this=ObjectClass  sig=csp ====
int __thiscall Helper_486E30(ObjectClass *this)
{
  __int16 *p_occupant; // edi
  RandomMap *v3; // eax
  CellClass *v5; // eax

  p_occupant = (__int16 *)&this->occupant; /*0x486e34*/
  v3 = (RandomMap *)Helper_486E30_Helper((ObjectClass *)&this->occupant); /*0x486e39*/
  if ( v3 ) /*0x486e40*/
  {
    RandomMap::RemoveMatching(v3, (int)this); /*0x486e45*/
  }
  else
  {
    v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], p_occupant); /*0x486e55*/
    CellClass::ProcessBridgeRepair(v5); /*0x486e5c*/
  }
  return 0; /*0x486e4a*/
}



// ==== 0x00486E70  BuildingClass::CreatePlacementCrater  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CreatePlacementCrater(BuildingClass *this)
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

  ScreenRect = CellClass::GetScreenRect((CellClass *)this, v21); /*0x486e8b*/
  StartCoords = House::GetStartCoords((House *)this, v22); /*0x486e90*/
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
  PlacementRect = BuildingClass::GetPlacementRect(this, v23); /*0x486f2d*/
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
  Cell::CreateCrater(v5 - DSurface_ViewBounds.field_0, v15 - (unsigned int)DSurface_ViewBounds.field_4, v8, v16, 0); /*0x486fd1*/
  return BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&this->?); /*0x486fe8*/
}



// ==== 0x00486FF0  Cell::IsBuildableAdvanced  this=Cell  sig=csp ====
int __thiscall Cell::IsBuildableAdvanced(Cell *this)
{
  int result; // eax
  _DWORD *i; // esi
  _DWORD *Cell_field_0xE4; // esi

  result = Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], (int)this, 1); /*0x486ffc*/
  if ( !(_BYTE)result ) /*0x487003*/
  {
    LOBYTE(result) = 1; /*0x487006*/
    return result; /*0x487009*/
  }
  result = this->Cell_field_0x38; /*0x48700a*/
  if ( result >= 0 /*0x487022*/
    && result < *(int *)&stru_A8EB00.?[340]
    && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * result) + 773) )
  {
    goto LABEL_21; /*0x487022*/
  }
  if ( this->Cell_field_0x11B[1] ) /*0x48702c*/
    goto LABEL_21; /*0x48702c*/
  result = (int)this->Cell_field_0x140; /*0x487036*/
  if ( (result & 0x500) != 0 ) /*0x48703f*/
    goto LABEL_21; /*0x48703f*/
  if ( !byte_A8E9A0 ) /*0x487048*/
    goto LABEL_20; /*0x487048*/
  for ( i = this->Cell_field_0xE4; i; i = (_DWORD *)i[12] ) /*0x487052*/
  {
    result = (*(int (__thiscall **)(_DWORD *))(*i + 44))(i); /*0x487058*/
    if ( result == 6 ) /*0x48705e*/
      goto LABEL_21; /*0x48705e*/
  }
  if ( !byte_A8E9A0 || (Cell_field_0xE4 = this->Cell_field_0xE4) == 0 ) /*0x48707e*/
  {
LABEL_20:
    LOBYTE(result) = 1; /*0x48709d*/
    return result; /*0x4870a0*/
  }
  while ( 1 ) /*0x487084*/
  {
    result = (*(int (__thiscall **)(_DWORD *))(*Cell_field_0xE4 + 44))(Cell_field_0xE4); /*0x487084*/
    if ( result == 36 ) /*0x48708a*/
      break; /*0x48708a*/
    Cell_field_0xE4 = (_DWORD *)Cell_field_0xE4[12]; /*0x48708c*/
    if ( !Cell_field_0xE4 ) /*0x487091*/
    {
      LOBYTE(result) = 1; /*0x487094*/
      return result; /*0x487097*/
    }
  }
LABEL_21:
  LOBYTE(result) = 0; /*0x4870a1*/
  return result; /*0x487005*/
}



// ==== 0x004870B0  Cell::HasOccupierBit  this=Cell  sig=csp ====
int __thiscall Cell::HasOccupierBit(Cell *this, char a2)
{
  return ((1 << a2) & *(_DWORD *)&this->__pad_70[8]) != 0; /*0x4870c8*/
}



// ==== 0x004870D0  Cell::IsPassableOffset  this=Cell  sig=csp ====
int __thiscall Cell::IsPassableOffset(Cell *this, int a2)
{
  return *(_WORD *)&this->__pad_70[2 * a2 + 12] > 0; /*0x4870de*/
}



// ==== 0x004870F0  HouseClass::HasType  this=HouseClass  sig=csp ====
int __thiscall HouseClass::HasType(HouseClass *this, int a2)
{
  return *((_WORD *)&this->psychicDetectionCapacity + a2) > 0; /*0x487101*/
}



// ==== 0x00487110  BuildingClass::checkOccupant  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::checkOccupant(BuildingClass *this, char a2)
{
  this->? |= 1 << a2; /*0x48711d*/
  return &this->TechnoClass; /*0x487120*/
}



// ==== 0x00487130  BuildingClass::updateOccupiedState  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::updateOccupiedState(BuildingClass *this, char a2)
{
  this->? &= ~(1 << a2); /*0x487144*/
  return &this->TechnoClass; /*0x487147*/
}



// ==== 0x00487150  FootClass::checkTerrainSpeed  this=FootClass  sig=csp ====
int __thiscall FootClass::checkTerrainSpeed(FootClass *this, int a2)
{
  ++*((_WORD *)&this->? + a2); /*0x487154*/
  return a2; /*0x487159*/
}



// ==== 0x00487160  FootClass::updateLocomotion  this=FootClass  sig=csp ====
int __thiscall FootClass::updateLocomotion(FootClass *this, int a2)
{
  --*((_WORD *)&this->? + a2); /*0x487164*/
  return a2; /*0x487169*/
}



// ==== 0x00487170  BuildingClass::processGarrison  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::processGarrison(BuildingClass *this, int a2)
{
  ++*((_WORD *)&this->? + a2); /*0x487174*/
  return a2; /*0x48717c*/
}



// ==== 0x00487180  BuildingClass::evaulateDefense  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::evaulateDefense(BuildingClass *this, int a2)
{
  --*((_WORD *)&this->? + a2); /*0x487184*/
  return a2; /*0x48718c*/
}



// ==== 0x00487190  Crate::FindPlacement  this=IUnknown  sig=csp ====
char __thiscall Crate::FindPlacement(int this, int a2, int a3)
{
  CellClass *v4; // edi
  #374 *v5; // ebp
  int v6; // eax
  #374 *v7; // ebp
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // ecx
  Coord2D *v11; // eax
  int *v12; // eax
  int *v13; // eax
  int BuildingByTiberiumType; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  ObjectClass *firstObject; // edi
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
  _DWORD v47[2]; // [esp+14h] [ebp-80h] BYREF
  int v48; // [esp+1Ch] [ebp-78h]
  int v49; // [esp+20h] [ebp-74h]
  int v50; // [esp+24h] [ebp-70h] BYREF
  int v51; // [esp+28h] [ebp-6Ch]
  int v52[4]; // [esp+34h] [ebp-60h] BYREF
  Bounds v53; // [esp+44h] [ebp-50h] BYREF
  int v54; // [esp+48h] [ebp-4Ch]
  int v55; // [esp+4Ch] [ebp-48h]
  int v56; // [esp+50h] [ebp-44h]
  int *v57[4]; // [esp+54h] [ebp-40h] BYREF
  Rect v58; // [esp+64h] [ebp-30h] BYREF
  int v59[4]; // [esp+74h] [ebp-20h] BYREF
  _DWORD v60[4]; // [esp+84h] [ebp-10h] BYREF

  v4 = *(CellClass **)(g_BuildingLoadQueue_Array.?[2] + 4 * a2); /*0x4871af*/
  v57[0] = (int *)v4; /*0x4871b2*/
  if ( a3 >= (int)v4->firstObject ) /*0x4871bc*/
    return 0; /*0x4871bc*/
  if ( (unsigned __int8)IsCoordValidMap(this, (int)v4) ) /*0x4871c3*/
  {
    if ( *(_BYTE *)(this + 284) ) /*0x4871d0*/
    {
      v5 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x4871e4*/
      if ( v5 ) /*0x4871eb*/
      {
        v46 = *(_DWORD *)(this + 36); /*0x4871fa*/
        v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x487208*/
        Object::SpawnAtCell( /*0x48723f*/
          v5,
          *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34
                    + 4
                    * ((int)v4->altObject + (unsigned int)v4->jumpjet->? + 2 * *(unsigned __int8 *)(this + 284) + v6)
                    - 8),
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
        v8 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 11); /*0x487266*/
        Object::SpawnAtCell( /*0x48728c*/
          v7,
          *(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * ((int)v4->jumpjet->? + v8)),
          (__int16 *)&v46,
          -1);
      }
    }
    CellClass::RegisterForRedraw(v4, (__int16 *)(this + 36)); /*0x487297*/
    *(_BYTE *)(this + 286) = a3; /*0x4872a0*/
    PlacementRect = (const RECT *)BuildingClass::GetPlacementRect((BuildingClass *)this, &v53.Bounds_field_00); /*0x4872b2*/
    StartCoords = (struct tagRECT *)House::GetStartCoords((House *)this, v57); /*0x4872bb*/
    CellClass::GetScreenRect((CellClass *)this, v52); /*0x4872c3*/
    Rect::Union(StartCoords, PlacementRect, v43); /*0x4872ce*/
    v9 = (_DWORD *)Rect::Union(v42, v44, v45); /*0x4872d9*/
    v47[0] = *v9; /*0x4872ea*/
    v47[1] = v9[1]; /*0x4872f7*/
    v48 = v9[2]; /*0x4872fe*/
    v10 = v9[3]; /*0x487302*/
    v57[0] = (int *)DSurface_ViewBounds.field_0; /*0x487305*/
    v49 = v10; /*0x487309*/
    v40 = v10; /*0x48730d*/
    v38 = v48; /*0x487312*/
    v57[1] = (int *)DSurface_ViewBounds.field_4; /*0x487322*/
    v11 = (Coord2D *)CellStruct::Copy((CellStruct *)v47, &v50); /*0x487326*/
    v12 = Coord2D::Sub(v11, v52, v57); /*0x48732d*/
    v13 = Rect::Construct(&v58, v12, v38, v40); /*0x487337*/
    Cell::CreateCrater(*v13, v13[1], v13[2], v13[3], 0); /*0x48735d*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], this + 36); /*0x487368*/
    return 1; /*0x487379*/
  }
  if ( !BYTE2(dword_A8B230[374].vtable3) ) /*0x487382*/
    return 0; /*0x487382*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x487393*/
  if ( BuildingByTiberiumType == -1 ) /*0x48739b*/
    return 0; /*0x48739b*/
  v16 = *(_DWORD *)(g_BuildingLoadQueue_Array.?[2] + 4 * BuildingByTiberiumType); /*0x4873af*/
  if ( *(_BYTE *)(this + 284) /*0x4873f0*/
    || *(unsigned __int8 *)(this + 286) >= *(_DWORD *)(v16 + 228) - 1
    || *(double *)(v16 + 176) < 0.00001
    || FindBuildingByTiberiumType(*(_DWORD *)(this + 68)) != a2 )
  {
    return 0; /*0x487621*/
  }
  v17 = a3 + *(_BYTE *)(this + 286); /*0x4873fc*/
  *(_BYTE *)(this + 286) = v17; /*0x4873fe*/
  firstObject = v4->firstObject; /*0x487404*/
  if ( v17 >= (int)&firstObject[-1].lineTrailer + 3 ) /*0x487414*/
    v17 = (_BYTE)firstObject - 1; /*0x487416*/
  *(_BYTE *)(this + 286) = v17; /*0x487418*/
  ScreenRect = CellClass::GetScreenRect((CellClass *)this, &v58.X); /*0x487431*/
  v20 = House::GetStartCoords((House *)this, v60); /*0x487436*/
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
  v31 = BuildingClass::GetPlacementRect((BuildingClass *)this, v59); /*0x4874f8*/
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
  v54 = v36; /*0x4875a4*/
  v52[1] = (int)DSurface_ViewBounds.field_4; /*0x4875ae*/
  v56 = v35; /*0x4875b6*/
  v53.Bounds_field_00 = v21; /*0x4875cb*/
  v55 = v29; /*0x4875cf*/
  v52[0] = DSurface_ViewBounds.field_0; /*0x4875d3*/
  v37 = Bounds::Subtract(&v53, v59, v52); /*0x4875d7*/
  Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x4875fd*/
  BuildingClass::AddOccupancy(v57[0], (__int16 *)(this + 36)); /*0x48760a*/
  return 1; /*0x48736f*/
}



// ==== 0x00487630  DisplayClass::UpdateDisplayTimer  this=DisplayClass  sig=csp ====
char __thiscall DisplayClass::UpdateDisplayTimer(DisplayClass *this)
{
  char *v1; // eax
  int v2; // edx
  void *DisplayClass_field_0x12C; // eax

  if ( this->DisplayClass_field_0x130 == (void *)1 ) /*0x487637*/
    this->DisplayClass_field_0x130 = 0; /*0x487639*/
  v1 = (char *)this->DisplayClass_field_0x130 - 1; /*0x487649*/
  this->DisplayClass_field_0x130 = v1; /*0x48764a*/
  v2 = (int)v1; /*0x487650*/
  DisplayClass_field_0x12C = this->DisplayClass_field_0x12C; /*0x487652*/
  if ( ((unsigned __int8)DisplayClass_field_0x12C & 8) != 0 && ((unsigned __int8)DisplayClass_field_0x12C & 0x10) != 0 ) /*0x48765e*/
  {
    if ( v2 <= 0 ) /*0x48766f*/
    {
      DisplayClass_field_0x12C = this->DisplayClass_field_0x140; /*0x487671*/
      if ( ((int)this->DisplayClass_field_0x140 & 0x20) == 0x20 ) /*0x48767f*/
      {
        LOBYTE(DisplayClass_field_0x12C) = (unsigned __int8)DisplayClass_field_0x12C & 0xDF; /*0x487681*/
        this->DisplayClass_field_0x140 = DisplayClass_field_0x12C; /*0x487683*/
      }
    }
  }
  else if ( v2 <= 0 ) /*0x487662*/
  {
    LOBYTE(DisplayClass_field_0x12C) = (unsigned __int8)DisplayClass_field_0x12C | 0x18; /*0x487664*/
    this->DisplayClass_field_0x12C = DisplayClass_field_0x12C; /*0x487666*/
  }
  return (char)DisplayClass_field_0x12C; /*0x48766c*/
}



// ==== 0x00487690  DisplayClass::AdvanceFrameCounter  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::AdvanceFrameCounter(DisplayClass *this)
{
  void *DisplayClass_field_0x130; // esi
  char *v2; // eax
  int v3; // edx
  int result; // eax

  DisplayClass_field_0x130 = this->DisplayClass_field_0x130; /*0x487691*/
  if ( DisplayClass_field_0x130 == (void *)-1 ) /*0x48769a*/
    this->DisplayClass_field_0x130 = 0; /*0x48769c*/
  v2 = (char *)this->DisplayClass_field_0x130 + 1; /*0x4876ac*/
  this->DisplayClass_field_0x130 = v2; /*0x4876ad*/
  v3 = (int)v2; /*0x4876b3*/
  result = (int)this->DisplayClass_field_0x134; /*0x4876b5*/
  if ( v3 > result ) /*0x4876bd*/
    this->DisplayClass_field_0x130 = (void *)result; /*0x4876bf*/
  if ( (int)DisplayClass_field_0x130 <= 0 ) /*0x4876c8*/
  {
    result = (int)this->DisplayClass_field_0x130; /*0x4876ca*/
    if ( result > 0 ) /*0x4876d2*/
    {
      result = (int)this->DisplayClass_field_0x140; /*0x4876d4*/
      LOBYTE(result) = result | 0x20; /*0x4876da*/
      this->DisplayClass_field_0x140 = (void *)result; /*0x4876dc*/
    }
  }
  return result; /*0x4876c7*/
}



// ==== 0x004876F0  CellClass::Unshroud  this=CellClass  sig=csp ====
int __thiscall CellClass::Unshroud(CellClass *this)
{
  int copyFlags; // eax
  int result; // eax

  copyFlags = this->copyFlags; /*0x4876f0*/
  LOBYTE(copyFlags) = copyFlags | 0x18; /*0x4876f6*/
  this->copyFlags = copyFlags; /*0x4876f8*/
  result = this->shroudCounter; /*0x4876fe*/
  if ( result > 0 ) /*0x487706*/
  {
    result = this->flags[0]; /*0x487708*/
    LOBYTE(result) = result | 0x20; /*0x48770e*/
    this->flags[0] = result; /*0x487710*/
  }
  return result; /*0x487716*/
}



// ==== 0x00487720  TechnoClass::ApplySplashDamageToNeighbors  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::ApplySplashDamageToNeighbors(TechnoClass *this)
{
  TechnoClass *v1; // edi
  char result; // al
  int v3; // ecx
  __int16 v4; // ax
  TechnoClass *v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // esi
  int v9; // edx
  int v10; // [esp+58h] [ebp-2Ch]
  int v11; // [esp+58h] [ebp-2Ch]
  int v12; // [esp+5Ch] [ebp-28h]
  int v13; // [esp+60h] [ebp-24h]
  int v15; // [esp+68h] [ebp-1Ch]
  __int16 v16[2]; // [esp+6Ch] [ebp-18h] BYREF
  int v17; // [esp+70h] [ebp-14h] BYREF
  TechnoClass *v18; // [esp+74h] [ebp-10h] BYREF
  int v19; // [esp+78h] [ebp-Ch] BYREF
  int v20; // [esp+7Ch] [ebp-8h]
  int v21; // [esp+80h] [ebp-4h]

  v1 = this; /*0x487727*/
  result = this->secondaryTurretIndex; /*0x48772d*/
  if ( result ) /*0x487735*/
  {
    v3 = SHIWORD(this->?) << 8; /*0x48774d*/
    v19 = (SLOWORD(v1->?) << 8) + 128; /*0x487756*/
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
        HIWORD(v13) = v4 + HIWORD(v1->?); /*0x48779e*/
        LOWORD(v13) = v12 + LOWORD(v1->?); /*0x4877a3*/
        *(_DWORD *)v16 = v13; /*0x4877b0*/
        v5 = (TechnoClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x4877ba*/
        v18 = v5; /*0x4877c1*/
        if ( v5 != v1 ) /*0x4877c5*/
        {
          v6 = v5->?[2]; /*0x4877cb*/
          if ( v6 ) /*0x4877d3*/
          {
            do /*0x487864*/
            {
              v10 = *(_DWORD *)(v6 + 48); /*0x4877de*/
              if ( v6 && (*(_BYTE *)(v6 + 20) & 4) != 0 ) /*0x4877f0*/
              {
                if ( !*(_DWORD *)(v6 + 1652) ) /*0x4877f2*/
                  WinAPI::Wrapper(-2147467261); /*0x48780d*/
                if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(v6 + 1652) + 160))( /*0x487828*/
                       *(_DWORD *)(v6 + 1652),
                       v19,
                       v20,
                       v21) )
                {
                  v7 = *(_DWORD *)v6; /*0x487835*/
                  v17 = *(_DWORD *)(v6 + 108); /*0x487837*/
                  (*(void (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v7 + 364))( /*0x487858*/
                    v6,
                    &v17,
                    0,
                    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
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
            v1 = this; /*0x48786e*/
          }
          v8 = v5->?[1]; /*0x487872*/
          if ( v8 ) /*0x48787a*/
          {
            do /*0x48790c*/
            {
              v11 = *(_DWORD *)(v8 + 48); /*0x487885*/
              if ( v8 && (*(_BYTE *)(v8 + 20) & 4) != 0 ) /*0x487898*/
              {
                if ( !*(_DWORD *)(v8 + 1652) ) /*0x48789a*/
                  WinAPI::Wrapper(-2147467261); /*0x4878b5*/
                if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)(v8 + 1652) + 160))( /*0x4878d0*/
                       *(_DWORD *)(v8 + 1652),
                       v19,
                       v20,
                       v21) )
                {
                  v9 = *(_DWORD *)v8; /*0x4878dd*/
                  v18 = *(TechnoClass **)(v8 + 108); /*0x4878df*/
                  (*(void (__thiscall **)(int, TechnoClass **, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v9 + 364))( /*0x487900*/
                    v8,
                    &v18,
                    0,
                    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                    0,
                    1,
                    1,
                    0);
                }
              }
              v8 = v11; /*0x487906*/
            }
            while ( v11 ); /*0x48790c*/
            v1 = this; /*0x487912*/
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



// ==== 0x00487950  CellClass::QuickPassable  this=CellClass  sig=csp ====
int __thiscall CellClass::QuickPassable(CellClass *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = ((__int16)this->smudgeTypeIndex << 8) + 128; /*0x48796f*/
  v2 = ((__int16)HIWORD(this->smudgeTypeIndex) << 8) + 128; /*0x487971*/
  v5[0] = 128; /*0x487973*/
  v5[1] = 128; /*0x487977*/
  inited = Isometric::InitTables((int)this, v5); /*0x487980*/
  v6[0] = v1; /*0x487989*/
  v6[1] = v2; /*0x487993*/
  v6[2] = inited; /*0x487997*/
  return Cell::IsPassable(v6); /*0x4879a0*/
}



// ==== 0x004879B0  ObjectClass::method_4879B0  this=ObjectClass  sig=csp ====
char __thiscall sub_4879B0(ObjectClass *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-14h] BYREF
  int v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = ((__int16)this->occupant << 8) + 128; /*0x4879cf*/
  v2 = ((__int16)HIWORD(this->occupant) << 8) + 128; /*0x4879d1*/
  v5[0] = 128; /*0x4879d3*/
  v5[1] = 128; /*0x4879d7*/
  inited = Isometric::InitTables((int)this, v5); /*0x4879e0*/
  v6[0] = v1; /*0x4879e9*/
  v6[1] = v2; /*0x4879f3*/
  v6[2] = inited; /*0x4879f7*/
  return Game::Stub3((int)v6); /*0x487a00*/
}



// ==== 0x00487A10  Cell::SearchEnemies  this=IUnknown  sig=csp ====
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
      *((_DWORD *)dword_8871E0 + 1002),
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
      v9 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x487b28*/
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
                    *((_DWORD *)dword_8871E0 + 1002),
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
int __thiscall BuildingClass::CheckC4Active(BuildingClass *this)
{
  int result; // eax
  _DWORD *v3; // esi

  if ( LOBYTE(this->?) ) /*0x487c14*/
  {
    LOBYTE(result) = 0; /*0x487c1f*/
  }
  else if ( byte_A8E9A0 && (v3 = (_DWORD *)this->?[1]) != 0 ) /*0x487c34*/
  {
    while ( 1 ) /*0x487c3a*/
    {
      result = (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3); /*0x487c3a*/
      if ( result == 6 ) /*0x487c40*/
        break; /*0x487c40*/
      v3 = (_DWORD *)v3[12]; /*0x487c42*/
      if ( !v3 ) /*0x487c47*/
        goto LABEL_7; /*0x487c47*/
    }
    LOBYTE(result) = 0; /*0x487c61*/
  }
  else
  {
LABEL_7:
    result = this->?[3]; /*0x487c49*/
    LOBYTE(result) = byte_89EA60[36 * result]; /*0x487c54*/
  }
  return result; /*0x487c1e*/
}



// ==== 0x00487C70  TerrainClass::SetFieldF8  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::SetFieldF8(TerrainClass *this, int a2)
{
  *((_DWORD *)this + 62) = a2; /*0x487c74*/
  return a2; /*0x487c7a*/
}



// ==== 0x00487C80  ObjectClass::?GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ  this=ObjectClass  sig=csp ====
unsigned int __thiscall _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(
        Concurrency::details::SchedulerBase *this)
{
  return *((_DWORD *)this + 62); /*0x487c86*/
}



// ==== 0x00487CB0  Cell::GetTraversability  this=Cell  sig=csp ====
__int64 __thiscall Cell_GetTraversability(double *this)
{
  double v1; // st7

  v1 = (double)*((int *)dword_8871E0 + 1539); /*0x487cb5*/
  if ( this->q01E < v1 ) /*0x487cc8*/
    v1 = this->q01E; /*0x487ccc*/
  return Math::RoundToInt(v1);
}



// ==== 0x00487CE0  CellClass::RadLevel_Increase  this=CellClass  sig=csp ====
void __thiscall CellClass::RadLevel_Increase(double *this, double a2)
{
  this->cloakedByHouses = a2 + this->cloakedByHouses; /*0x487cea*/
}



// ==== 0x00487D00  CellClass::RadLevel_Decrease  this=CellClass  sig=csp ====
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



// ==== 0x00487D50  Cell::GetSlopeIndex  this=SpeedType  sig=csp ====
int __thiscall Cell::GetSlopeIndex(int this)
{
  return *(char *)(this + 283) + 4 * ((*(_DWORD *)(this + 320) >> 7) & 1); /*0x487d66*/
}



// ==== 0x00487D70  CellClass::AttachObject  this=CellClass  sig=csp ====
int __thiscall CellClass::AttachObject(CellClass *this, int a2)
{
  int result; // eax

  result = (int)this->jumpjet; /*0x487d77*/
  if ( a2 )
  {
    if ( !result || result == a2 ) /*0x487dc0*/
    {
      this->jumpjet = (FootClass *)a2; /*0x487dc8*/
      if ( (*(_BYTE *)(a2 + 20) & 4) != 0 ) /*0x487dd3*/
        result = (int)FootClass::Jumpjet_OccupyCell((FootClass *)a2, this->smudgeTypeIndex); /*0x487dd9*/
      LOBYTE(result) = 1; /*0x487dde*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x487dc2*/
    }
  }
  else
  {
    if ( result )
    {
      if ( (*(_BYTE *)(result + 20) & 4) != 0 )
        result = (int)FootClass::Jumpjet_OccupyCell(
                        (*(_BYTE *)(result + 20) & 4) != 0 ? (FootClass *)result : 0,
                        dword_89E748);
    }
    this->jumpjet = 0; /*0x487daa*/
    LOBYTE(result) = 1; /*0x487db4*/
  }
  return result; /*0x487db6*/
}



// ==== 0x00487DF0  Cell::IsBridge2  this=Cell  sig=csp ====
int __thiscall Cell::IsBridge2(Cell *this)
{
  int result; // eax

  LOBYTE(result) = *(_DWORD *)&this->__pad_E8[4] == 5; /*0x487df7*/
  return result; /*0x487dfa*/
}



// ==== 0x00487E00  MovementAI::IsPathMovementAllowed  this=MovementAI  sig=csp ====
bool __thiscall MovementAI::IsPathMovementAllowed(MovementAI *this)
{
  _DWORD *v2; // esi
  BOOL v3; // eax

  if ( !byte_A8E9A0 ) /*0x487e0b*/
    return this->u32_10 != 0; /*0x487e0b*/
  v2 = (_DWORD *)*((_DWORD *)this + 57); /*0x487e0d*/
  if ( !v2 ) /*0x487e15*/
    return this->u32_10 != 0; /*0x487e15*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 6 ) /*0x487e21*/
  {
    v2 = (_DWORD *)v2[12]; /*0x487e23*/
    if ( !v2 ) /*0x487e28*/
      return this->u32_10 != 0; /*0x487e28*/
  }
  if ( this->u32_10 == 1 ) /*0x487e45*/
    LOBYTE(v3) = 0; /*0x487e48*/
  else
    return this->u32_10 != 0; /*0x487e2a*/
  return v3; /*0x487e34*/
}



// ==== 0x00487E50  AbstractClass::compareType  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::compareType(AbstractClass *this)
{
  return 11; /*0x487e55*/
}



// ==== 0x00487E60  CellClass::StubReturn11  this=CellClass  sig=csp ====
int __thiscall CellClass::StubReturn11(CellClass *this)
{
  return 11; /*0x487e65*/
}



// ==== 0x00487E70  CellClass::StubReturn328  this=CellClass  sig=csp ====
int __thiscall CellClass::StubReturn328(CellClass *this)
{
  return 328; /*0x487e75*/
}



// ==== 0x00487E80  CellClass::CopyTo  this=CellClass  sig=csp ====
int __thiscall CellClass::CopyTo(CellClass *this)
{
  char v3; // [esp+8h] [ebp+4h]

  CellClass::DTOR(this); /*0x487e83*/
  if ( (v3 & 1) != 0 ) /*0x487e8d*/
    __3_YAXPAX_Z(this); /*0x487e90*/
  return (int)this->mapCoords; /*0x487e9a*/
}



// ==== 0x00487EA0  NeighborCoord  this=-  sig=csp ====
_DWORD *__fastcall Coord_Neighbor(_DWORD *a1, _WORD *a2, char a3)
{
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // [esp+8h] [ebp+4h]

  result = a1; /*0x487ea0*/
  v4 = a3 & 7; /*0x487ea7*/
  LOWORD(v5) = *a2 + LOWORD(dword_89F688[v4]); /*0x487ec4*/
  HIWORD(v5) = a2[1] + HIWORD(dword_89F688[v4]); /*0x487eca*/
  *result = v5; /*0x487ed3*/
  return result; /*0x487ec9*/
}



// ==== 0x00487EE0  Bounds::Subtract  this=Bounds  sig=csp ====
_DWORD *__thiscall Bounds::Subtract(Bounds *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // edx
  int Bounds_field_00; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // edx

  v3 = *((_DWORD *)this + 1); /*0x487ee0*/
  Bounds_field_00 = this->Bounds_field_00; /*0x487ee3*/
  v5 = *((_DWORD *)this + 2); /*0x487ef1*/
  v6 = *((_DWORD *)this + 3); /*0x487ef4*/
  v7 = v3 - a3[1]; /*0x487ef7*/
  *a2 = Bounds_field_00 - *a3; /*0x487f01*/
  a2[1] = v7; /*0x487f06*/
  a2[2] = v5; /*0x487f09*/
  a2[3] = v6; /*0x487f0d*/
  return a2; /*0x487f05*/
}



// ==== 0x00487F20  Coord2D::Sub  this=Coord2D  sig=csp ====
int *__thiscall Coord2D::Sub(Coord2D *this, int *a2, _DWORD *a3)
{
  int v3; // edx
  int v5; // ecx

  v3 = *(_DWORD *)this->__pad_0; /*0x487f24*/
  v5 = this->Coord2D_field_0x04 - a3[1]; /*0x487f35*/
  *a2 = v3 - *a3; /*0x487f38*/
  a2[1] = v5; /*0x487f3a*/
  return a2; /*0x487f37*/
}



// ==== 0x00487F40  Rect::Union  this=IUnknown  sig=csp ====
int __stdcall Rect::Union(LPRECT lprcDst, const RECT *lprcSrc1, const RECT *lprcSrc2)
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
    return (int)v4; /*0x488026*/
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
      return (int)v5; /*0x487fec*/
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
      return (int)v15; /*0x487fcf*/
    }
  }
}



// ==== 0x00488030  _DynamicVectorClass_PAVObjectClass::Constructor_VectorClass_ObjectClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall Buffer::Constructor_VectorClass_ObjectClass___(_DynamicVectorClass_PAVObjectClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x488033*/
  *(_DWORD *)this = &VectorClass<ObjectClass *>::`vftable'; /*0x488036*/
  if ( v3 && this->IsAllocated ) /*0x488040*/
  {
    __3_YAXPAX_Z(v3); /*0x488048*/
    this->Items = 0; /*0x488050*/
  }
  this->IsAllocated = 0; /*0x48805b*/
  this->q008 = 0; /*0x488061*/
  if ( (a2 & 1) != 0 ) /*0x488068*/
    __3_YAXPAX_Z(this); /*0x48806b*/
  return this; /*0x488075*/
}



// ==== 0x00488080  CellClass::clearOccupationFlags  this=VectorClass  sig=csp ====
_DWORD *__thiscall CellClass::clearOccupationFlags(CellClass *this, int a2, int a3)
{
  this->foggedObjects = 0; /*0x48808b*/
  this->bridgeOwnerCell = (CellClass *)a2; /*0x48808e*/
  LOBYTE(this->unknown30) = 1; /*0x488091*/
  BYTE1(this->unknown30) = 0; /*0x488095*/
  this->mapCoords[0] = (int)&VectorClass<FoggedObjectClass *>::`vftable'; /*0x488098*/
  if ( a2 ) /*0x48809e*/
  {
    if ( a3 ) /*0x4880a6*/
    {
      this->foggedObjects = (void *)a3; /*0x4880a8*/
      return this->mapCoords; /*0x4880ae*/
    }
    this->foggedObjects = (void *)__2_YAPAXI_Z(4 * a2); /*0x4880bd*/
    BYTE1(this->unknown30) = 1; /*0x4880c0*/
  }
  return this->mapCoords; /*0x4880ad*/
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
int __thiscall sub_4880F0(ObjectClass *this, int a2)
{
  int uniqueId; // ecx
  int abstractFlags; // edx
  int nextArrayIndex; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  void *vtable3; // [esp+8h] [ebp-10h] BYREF
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  if ( !Control::DispatchClick((ControlClass *)this, a2) ) /*0x4880fb*/
    return 0; /*0x488204*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x488110*/
  uniqueId = this->?; /*0x488116*/
  abstractFlags = this->?; /*0x488119*/
  vtable3 = this->?; /*0x48811c*/
  nextArrayIndex = this->?; /*0x488120*/
  v16 = uniqueId; /*0x488123*/
  v17 = abstractFlags; /*0x488127*/
  v18 = nextArrayIndex; /*0x488133*/
  DrawBuildingTilesSHP((int *)&vtable3, 0, 0); /*0x488137*/
  if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x488145*/
    v6 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 13); /*0x48814f*/
  else
    v6 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 26); /*0x48815c*/
  v7 = this->? + 1; /*0x488167*/
  vtable3 = (char *)this->? + 1; /*0x488168*/
  v8 = this->?; /*0x48816c*/
  v16 = v7; /*0x48816f*/
  v9 = this->? - 1; /*0x488177*/
  v17 = v8 - 1; /*0x488178*/
  v18 = v9; /*0x488183*/
  (*(void (__thiscall **)(AudioStream *, void **, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x48818e*/
    g_DSurface_Hidden_2,
    &vtable3,
    v6);
  if ( BYTE1(this->fallRate) ) /*0x488191*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4881a1*/
      v10 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 4); /*0x4881ab*/
    else
      v10 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 8); /*0x4881b8*/
    v11 = this->? + 1; /*0x4881c3*/
    vtable3 = (char *)this->? + 1; /*0x4881c4*/
    v12 = this->?; /*0x4881c8*/
    v16 = v11; /*0x4881cb*/
    v13 = this->? - 1; /*0x4881d3*/
    v17 = v12 - 1; /*0x4881d4*/
    v18 = v13; /*0x4881df*/
    (*(void (__thiscall **)(AudioStream *, void **, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4881ea*/
      g_DSurface_Hidden_2,
      &vtable3,
      v10);
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4881f5*/
  return 1; /*0x4881fd*/
}



// ==== 0x00488210  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_488210(ObjectClass *this, unsigned int a2, _DWORD *a3, int a4)
{
  if ( (a2 & 4) != 0 ) /*0x48821b*/
  {
    if ( BYTE1(this->fallRate) ) /*0x48821d*/
    {
      GadgetClass::Hide((GadgetClass *)this); /*0x488224*/
      return GadgetClass::ProcessMouseOver((ToggleClass *)this, a2, a3, 0); /*0x48823a*/
    }
    GadgetClass::Show((GadgetClass *)this); /*0x48823d*/
  }
  return GadgetClass::ProcessMouseOver((ToggleClass *)this, a2, a3, 0); /*0x488238*/
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
_BYTE *__thiscall sub_488280(CheckListClass *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  ListClass::Construct((int)this, a2, a3, a4, a5, a6, a7, a8, a9); /*0x4882ad*/
  *((_BYTE *)this + 372) = 0; /*0x4882b2*/
  *(_DWORD *)this->__pad_0 = &CheckListClass::`vftable'; /*0x4882b9*/
  return this->__pad_0; /*0x4882c1*/
}



// ==== 0x00488310  CheckListClass::?  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::g_var_1d7b82(CheckListClass *this, int a2)
{
  int v3; // eax

  v3 = __2_YAPAXI_Z(8u); /*0x488315*/
  if ( !v3 ) /*0x48831f*/
    return ListClass::AddItem((ListClass *)this, 0); /*0x48833c*/
  *(_DWORD *)v3 = a2; /*0x488326*/
  *(_BYTE *)(v3 + 4) = 0; /*0x48832a*/
  return ListClass::AddItem((ListClass *)this, v3); /*0x488333*/
}



// ==== 0x00488350  CheckListClass::Clear  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::Clear(CheckListClass *this)
{
  int *v1; // eax

  v1 = (int *)ColorListClass::SetColor((ListClass *)this); /*0x488350*/
  if ( v1 ) /*0x488357*/
    return *v1; /*0x488359*/
  else
    return 0; /*0x48835c*/
}



// ==== 0x00488360  CheckListClass::ScrollUp  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::ScrollUp(CheckListClass *this, int a2)
{
  int *Clamped; // eax

  Clamped = (int *)Array::GetClamped((ListClass *)this, a2); /*0x488365*/
  if ( Clamped ) /*0x48836c*/
    return *Clamped; /*0x48836e*/
  else
    return 0; /*0x488373*/
}



// ==== 0x00488380  CheckListClass::GetSelected  this=CheckListClass  sig=csp ====
void __thiscall CheckListClass::GetSelected(CheckListClass *this, wchar_t *String2)
{
  int v3; // ebx
  const wchar_t **Clamped; // eax
  const wchar_t **v5; // edi

  v3 = 0; /*0x488386*/
  if ( (*(int (__thiscall **)(CheckListClass *))(*(_DWORD *)this->__pad_0 + 148))(this) > 0 ) /*0x488392*/
  {
    while ( 1 ) /*0x48839b*/
    {
      Clamped = (const wchar_t **)Array::GetClamped((ListClass *)this, v3); /*0x48839b*/
      v5 = Clamped; /*0x4883a0*/
      if ( Clamped ) /*0x4883a4*/
      {
        if ( !_wcsicmp(*Clamped, String2) ) /*0x4883aa*/
          break; /*0x4883aa*/
      }
      if ( ++v3 >= (*(int (__thiscall **)(CheckListClass *))(*(_DWORD *)this->__pad_0 + 148))(this) ) /*0x4883c3*/
        return; /*0x4883c3*/
    }
    ListClass::RemoveItem((ListClass *)this, v3); /*0x4883cf*/
    __3_YAXPAX_Z(v5); /*0x4883d5*/
  }
}



// ==== 0x004883F0  CheckListClass::SetItemData  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::SetItemData(CheckListClass *this, wchar_t *String2)
{
  int v3; // edi
  int result; // eax
  const wchar_t **Clamped; // eax

  v3 = 0; /*0x4883f5*/
  result = (*(int (__thiscall **)(CheckListClass *))(*(_DWORD *)this->__pad_0 + 148))(this); /*0x4883f9*/
  if ( result > 0 ) /*0x488401*/
  {
    while ( 1 ) /*0x48840a*/
    {
      Clamped = (const wchar_t **)Array::GetClamped((ListClass *)this, v3); /*0x48840a*/
      if ( Clamped ) /*0x488411*/
      {
        if ( !_wcsicmp(*Clamped, String2) ) /*0x488417*/
          break; /*0x488417*/
      }
      ++v3; /*0x488427*/
      result = (*(int (__thiscall **)(CheckListClass *))(*(_DWORD *)this->__pad_0 + 148))(this); /*0x488428*/
      if ( v3 >= result ) /*0x488430*/
        return result; /*0x488430*/
    }
    return (*(int (__thiscall **)(CheckListClass *, int))(*(_DWORD *)this->__pad_0 + 184))(this, v3); /*0x48843d*/
  }
  return result; /*0x488432*/
}



// ==== 0x004884A0  CheckListClass::GetItem  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::GetItem(CheckListClass *this, int a2, _DWORD *a3, int a4)
{
  int v6; // edi
  int Clamped; // eax
  char v8; // al
  char v9; // bl
  int v10; // eax

  if ( *((_BYTE *)this + 372) ) /*0x4884a3*/
    return 0; /*0x4884ad*/
  v6 = CellClass::DrawWithFlags((ListClass *)this, a2, a3, 0); /*0x4884cb*/
  if ( (a2 & 1) != 0 ) /*0x4884cd*/
  {
    Clamped = Array::GetClamped((ListClass *)this, *((_DWORD *)this + 91)); /*0x4884d8*/
    if ( Clamped ) /*0x4884df*/
      v8 = *(_BYTE *)(Clamped + 4); /*0x4884e1*/
    else
      v8 = 0; /*0x4884e6*/
    v9 = v8 == 0; /*0x4884f3*/
    v10 = Array::GetClamped((ListClass *)this, *((_DWORD *)this + 91)); /*0x4884f6*/
    if ( v10 ) /*0x4884fd*/
    {
      if ( *(_BYTE *)(v10 + 4) != v9 ) /*0x488502*/
      {
        *(_BYTE *)(v10 + 4) = v9; /*0x488504*/
        (*(void (__thiscall **)(CheckListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x48850b*/
      }
    }
  }
  return v6; /*0x4884af*/
}



// ==== 0x00488520  CheckListClass::OnClick  this=CheckListClass  sig=csp ====
size_t *__userpurge CheckListClass::OnClick@<eax>(
        CheckListClass *this,
        const wchar_t *a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  ListClass *v7; // ecx
  ListClass *v8; // esi
  size_t *result; // eax
  int ListClass_field_0x0C; // edi
  int Type; // ebx
  int v12; // ecx
  int v13; // eax
  int ListClass_field_0x10; // eax
  int v15; // eax
  int v16; // [esp-20h] [ebp-114h]
  size_t v17; // [esp-10h] [ebp-104h]
  int v18; // [esp-10h] [ebp-104h]
  _DWORD v19[4]; // [esp+4h] [ebp-F0h] BYREF
  _DWORD v20[2]; // [esp+14h] [ebp-E0h] BYREF
  _BYTE v21[16]; // [esp+1Ch] [ebp-D8h] BYREF
  _WORD v22[100]; // [esp+2Ch] [ebp-C8h] BYREF

  v8 = v7; /*0x488527*/
  result = (size_t *)(*(int (**)(void))(*(_DWORD *)v7->__pad_0 + 148))(); /*0x48852b*/
  if ( (int)this < (int)result )
  {
    result = (size_t *)Array::GetClamped(v8, (int)this); /*0x488543*/
    if ( result )
    {
      memset(&v22[1], 0, 198); /*0x488560*/
      v17 = *result; /*0x48856b*/
      v22[0] = *((_BYTE *)result + 4) != 0 ? 3 : 32;
      v22[1] = 32; /*0x48857e*/
      swprintf(&v22[2], v17, a2); /*0x488585*/
      ListClass_field_0x0C = v8[1].ListClass_field_0x0C; /*0x48858a*/
      Type = BuildingAnim::GetType(); /*0x48859c*/
      if ( a6 ) /*0x4885a7*/
      {
        ListClass_field_0x0C |= 0x2000u; /*0x4885b4*/
        v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * Type) + 796); /*0x4885bd*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4885c9*/
          v13 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v12); /*0x4885d6*/
        else
          v13 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v12); /*0x4885e2*/
        v19[0] = a3; /*0x4885f4*/
        v19[3] = v8[2].ListClass_field_0x0C; /*0x4885fb*/
        v19[1] = a4; /*0x488606*/
        v19[2] = a5; /*0x48860a*/
        (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x488615*/
          g_DSurface_Hidden_2,
          v19,
          v13);
      }
      else if ( (ListClass_field_0x0C & 0x4000) == 0 ) /*0x488620*/
      {
        ListClass_field_0x0C |= 0x1000u; /*0x488622*/
      }
      ListClass_field_0x10 = v8[1].ListClass_field_0x10; /*0x48862f*/
      v20[0] = a3; /*0x488639*/
      v18 = ListClass_field_0x10; /*0x488643*/
      v20[1] = a4; /*0x488644*/
      v16 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * Type); /*0x488659*/
      v15 = (*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x488662*/
              g_DSurface_Hidden_2,
              v21);
      return FillRectangle( /*0x488675*/
               v19,
               (int)v22,
               (int)g_DSurface_Hidden_2,
               v15,
               (int)v20,
               v16,
               0,
               ListClass_field_0x0C,
               a5,
               v18);
    }
  }
  return result; /*0x48867d*/
}



// ==== 0x00488690  GadgetClass::DetachPrimary  this=GadgetClass  sig=csp ====
void COMObject::DetachPrimary(GadgetClass *this)
{
  FootClass_Array.?[1] = 0; /*0x488690*/
}



// ==== 0x004886A0  GadgetClass::GetStateFlag  this=GadgetClass  sig=csp ====
char __thiscall ObjectClass::GetStateFlag(ShpButtonClass *this)
{
  return this->Image; /*0x4886a3*/
}



// ==== 0x004886B0  ListClass::COMStub  this=ListClass  sig=csp ====
int __thiscall CheckListClass::COMStub(ListClass *this)
{
  return *((_DWORD *)this + 17); /*0x4886b3*/
}



// ==== 0x004886C0  CheckListClass::SelectItem  this=CheckListClass  sig=csp ====
char __thiscall CheckListClass::SelectItem(CheckListClass *this, signed int a2)
{
  return ListClass::RemoveItem((ListClass *)this, a2); /*0x4886ca*/
}



// ==== 0x004886D0  CheckListClass::SetFocus  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::SetFocus(CheckListClass *this, unsigned int a2)
{
  return ColorListClass::Clear((ListClass *)this, a2); /*0x4886da*/
}



// ==== 0x004886E0  CheckListClass::QueryInterface  this=CheckListClass  sig=csp ====
unsigned int *__thiscall CheckListClass::QueryInterface(CheckListClass *this, char a2)
{
  void *Clamped; // edi

  *(_DWORD *)this->__pad_0 = &CheckListClass::`vftable'; /*0x4886e3*/
  while ( this->CheckListClass_field_0x44 ) /*0x4886e9*/
  {
    Clamped = (void *)Array::GetClamped((ListClass *)this, 0); /*0x4886fe*/
    ListClass::RemoveItem((ListClass *)this, 0); /*0x488700*/
    __3_YAXPAX_Z(Clamped); /*0x488706*/
  }
  ListClass::Destruct((ListClass *)this); /*0x488718*/
  if ( (a2 & 1) != 0 ) /*0x488722*/
    __3_YAXPAX_Z(this); /*0x488725*/
  return (unsigned int *)this; /*0x48872f*/
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
_DWORD *__thiscall sub_488760(ColorListClass *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  ListClass::Construct((int)this, a2, a3, a4, a5, a6, a7, a8, a9); /*0x48878d*/
  *((_DWORD *)this + 94) = 0; /*0x488799*/
  *((_DWORD *)this + 95) = 0; /*0x48879f*/
  *((_BYTE *)this + 384) = 1; /*0x4887a5*/
  *((_BYTE *)this + 385) = 0; /*0x4887ab*/
  *((_DWORD *)this + 93) = &DynamicVectorClass<int>::`vftable'; /*0x4887b1*/
  *((_DWORD *)this + 98) = 10; /*0x4887bb*/
  *((_DWORD *)this + 97) = 0; /*0x4887c5*/
  this->q019 = 0; /*0x4887cb*/
  *((_DWORD *)this + 99) = 1; /*0x4887d1*/
  *(_DWORD *)this->__pad_0 = &ColorListClass::`vftable'; /*0x4887d7*/
  return this->__pad_0; /*0x4887df*/
}



// ==== 0x004887F0  ColorListClass::method_4887F0  this=ColorListClass  sig=csp ====
int __thiscall sub_4887F0(ColorListClass *this)
{
  int v2; // eax
  char *v3; // esi
  void *v4; // eax

  v2 = *((_DWORD *)this + 93); /*0x4887f5*/
  v3 = (char *)this + 372; /*0x4887fb*/
  *(_DWORD *)this->__pad_0 = &ColorListClass::`vftable'; /*0x488803*/
  (*(void (__thiscall **)(char *))(v2 + 12))((char *)this + 372); /*0x488809*/
  this->q019 = 0; /*0x48880e*/
  v4 = (void *)*((_DWORD *)v3 + 1); /*0x488814*/
  *(_DWORD *)v3 = &VectorClass<int>::`vftable'; /*0x488819*/
  if ( v4 && v3[13] ) /*0x488821*/
  {
    __3_YAXPAX_Z(v4); /*0x488827*/
    *((_DWORD *)v3 + 1) = 0; /*0x48882f*/
  }
  v3[13] = 0; /*0x488834*/
  *((_DWORD *)v3 + 2) = 0; /*0x488837*/
  return ListClass::Destruct((ListClass *)this); /*0x48883f*/
}



// ==== 0x00488850  ColorListClass::GetIndex  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::GetIndex(ColorListClass *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx

  v4 = *((_DWORD *)this + 95); /*0x488854*/
  if ( *((_DWORD *)this + 97) < v4 /*0x488885*/
    || (*((_BYTE *)this + 385) || !v4)
    && (v5 = *((_DWORD *)this + 98), v5 > 0)
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)this + 93) + 8))(
         (char *)this + 372,
         v4 + v5,
         0) )
  {
    v6 = *((_DWORD *)this + 97); /*0x48888c*/
    v7 = *((_DWORD *)this + 94); /*0x48888f*/
    *((_DWORD *)this + 97) = v6 + 1; /*0x488895*/
    *(_DWORD *)(v7 + 4 * v6) = a3; /*0x48889c*/
  }
  return ListClass::AddItem((ListClass *)this, a2); /*0x4888ab*/
}



// ==== 0x004888B0  ColorListClass::AddColor  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::AddColor(ColorListClass *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  result = (*(int (__thiscall **)(char *, int *))(*((_DWORD *)this + 13) + 16))((char *)this + 52, &a2); /*0x4888be*/
  if ( result != -1 ) /*0x4888c4*/
  {
    v4 = *((_DWORD *)this + 97); /*0x4888c6*/
    if ( result < v4 ) /*0x4888ce*/
    {
      v5 = v4 - 1; /*0x4888d0*/
      for ( *((_DWORD *)this + 97) = v5; /*0x4888d9*/
            result < *((_DWORD *)this + 97);
            *(_DWORD *)(*((_DWORD *)this + 94) + 4 * result - 4) = *(_DWORD *)(*((_DWORD *)this + 94) + 4 * result) )
      {
        ++result; /*0x4888e1*/
      }
    }
    return ListClass::Destru_vt43((ListClass *)this, a2); /*0x4888fa*/
  }
  return result; /*0x4888ff*/
}



// ==== 0x00488910  ColorListClass::GetCount  this=ColorListClass  sig=csp ====
void __thiscall ColorListClass::GetCount(ColorListClass *this, signed int a2)
{
  signed int v2; // eax
  int v3; // edx
  signed int v4; // eax

  if ( a2 != -1 ) /*0x488918*/
  {
    v2 = *((_DWORD *)this + 97); /*0x48891a*/
    if ( a2 < v2 ) /*0x488922*/
    {
      v3 = v2 - 1; /*0x488924*/
      v4 = a2; /*0x488927*/
      for ( *((_DWORD *)this + 97) = v3; /*0x488931*/
            v4 < *((_DWORD *)this + 97);
            *(_DWORD *)(*((_DWORD *)this + 94) + 4 * v4 - 4) = *(_DWORD *)(*((_DWORD *)this + 94) + 4 * v4) )
      {
        ++v4; /*0x48893a*/
      }
    }
    ListClass::RemoveItem((ListClass *)this, a2); /*0x48894e*/
  }
}



// ==== 0x00488960  ColorListClass::SetIndex  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::SetIndex(ColorListClass *this, int a2, int a3)
{
  *((_DWORD *)this + 99) = a2; /*0x488968*/
  this->q019 = a3; /*0x48896e*/
  return a2; /*0x488974*/
}



// ==== 0x00488980  ColorListClass::DrawColorRect  this=ColorListClass  sig=csp ====
_DWORD *__thiscall ColorListClass::DrawColorRect(ColorListClass *this, int a2, int a3, int a4, int a5, int a6)
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
    v10 = this->q019; /*0x488a1b*/
    if ( !v10 ) /*0x488a2a*/
      v10 = a2; /*0x488a2c*/
    result = (_DWORD *)*((_DWORD *)this + 99); /*0x488a2e*/
    switch ( (unsigned int)result ) /*0x488a3d*/
    {
      case 0u: /*0x488a3d*/
        v11 = this->q00C; /*0x488a52*/
        v65 = a3; /*0x488a55*/
        v66 = a4; /*0x488a60*/
        v62 = v11; /*0x488a67*/
        v55 = *((_DWORD *)this + 11); /*0x488a72*/
        v12 = (int *)(4 * a2 + *((_DWORD *)this + 14)); /*0x488a80*/
        v48 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(*((_DWORD *)this + 94) + 4 * a2)); /*0x488a89*/
        v13 = (*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x488a9b*/
                g_DSurface_Hidden_2,
                v83);
        result = FillRectangle(&v82, *v12, (int)g_DSurface_Hidden_2, v13, (int)&v65, v48, 0, v55, a5, v62); /*0x488aae*/
        break; /*0x488abd*/
      case 1u: /*0x488a3d*/
        v14 = *((_DWORD *)this + 11); /*0x488ac0*/
        if ( (v14 & 6) != 0 ) /*0x488acc*/
        {
          v72[0] = a3; /*0x488ace*/
          v72[1] = a4; /*0x488ad9*/
          BYTE1(v14) |= 0x20u; /*0x488ae0*/
          v15 = (int *)(*((_DWORD *)this + 14) + 4 * a2); /*0x488ae3*/
          v63 = this->q00C; /*0x488ae9*/
          v56 = v14; /*0x488af2*/
          v49 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v10); /*0x488b01*/
          v16 = (*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x488b13*/
                  g_DSurface_Hidden_2,
                  v85);
          result = FillRectangle(&v81, *v15, (int)g_DSurface_Hidden_2, v16, (int)v72, v49, 0, v56, a5, v63); /*0x488b26*/
        }
        else
        {
          v70[0] = a3; /*0x488b38*/
          v70[1] = a4; /*0x488b43*/
          v17 = (int *)(*((_DWORD *)this + 14) + 4 * a2); /*0x488b4a*/
          v64 = this->q00C; /*0x488b50*/
          v57 = v14; /*0x488b59*/
          v50 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v10); /*0x488b68*/
          v18 = (*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x488b7a*/
                  g_DSurface_Hidden_2,
                  v87);
          result = FillRectangle(&v78, *v17, (int)g_DSurface_Hidden_2, v18, (int)v70, v50, 0, v57, a5, v64); /*0x488b8d*/
        }
        break; /*0x488b35*/
      case 2u: /*0x488a3d*/
        v19 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v10) + 788); /*0x488ba8*/
        v20 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x488bb9*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x488bbf*/
          v21 = *(unsigned __int8 *)(v20 + v19); /*0x488bc3*/
        else
          v21 = *(unsigned __int16 *)(v20 + 2 * v19); /*0x488bca*/
        v22 = *((_DWORD *)this + 19); /*0x488be8*/
        v74[2] = a3 + a5 - 2; /*0x488beb*/
        v74[0] = a3; /*0x488bef*/
        v74[1] = a4; /*0x488bfd*/
        v74[3] = v22 + a4 - 2; /*0x488c01*/
        (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 88))( /*0x488c0c*/
          g_DSurface_Hidden_2,
          v74,
          v21);
        v23 = *((_DWORD *)this + 11); /*0x488c1a*/
        v24 = *((_DWORD *)this + 14); /*0x488c24*/
        v25 = *((_DWORD *)this + 94); /*0x488c28*/
        v71 = a3; /*0x488c2e*/
        v72[0] = a4; /*0x488c32*/
        v58 = v23; /*0x488c3b*/
        v51 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v25 + 4 * a2)); /*0x488c51*/
        v26 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x488c5d*/
        result = FillRectangle( /*0x488c71*/
                   &v80,
                   *(_DWORD *)(4 * a2 + v24),
                   (int)g_DSurface_Hidden_2,
                   v26,
                   (int)v84,
                   (int)&v71,
                   v51,
                   0,
                   v58,
                   a6);
        break; /*0x488c80*/
      case 3u: /*0x488a3d*/
        v27 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * v10) + 788); /*0x488c91*/
        v28 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4); /*0x488c9c*/
        if ( (*((_BYTE *)this + 44) & 6) != 0 ) /*0x488c9f*/
        {
          v29 = v28 == 1; /*0x488ca5*/
          v30 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x488ca8*/
          if ( v29 ) /*0x488cae*/
            v31 = *(unsigned __int8 *)(v30 + v27); /*0x488cb2*/
          else
            v31 = *(unsigned __int16 *)(v30 + 2 * v27); /*0x488cb9*/
          v32 = *((_DWORD *)this + 19); /*0x488cd2*/
          v75[2] = a5; /*0x488cd5*/
          v75[0] = a3; /*0x488ce0*/
          v75[1] = a4; /*0x488ce4*/
          v75[3] = v32; /*0x488ce8*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x488cf3*/
            g_DSurface_Hidden_2,
            v75,
            v31);
          v33 = *((_DWORD *)this + 11); /*0x488d01*/
          v34 = *((_DWORD *)this + 14); /*0x488d0b*/
          v35 = *((_DWORD *)this + 94); /*0x488d0f*/
          BYTE1(v33) |= 0x20u; /*0x488d15*/
          v69 = a3; /*0x488d18*/
          v70[0] = a4; /*0x488d1c*/
          v59 = v33; /*0x488d25*/
          v52 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v35 + 4 * a2)); /*0x488d3b*/
          v36 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x488d47*/
          result = FillRectangle( /*0x488d5b*/
                     &v77,
                     *(_DWORD *)(4 * a2 + v34),
                     (int)g_DSurface_Hidden_2,
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
          v37 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x488d70*/
          if ( v29 ) /*0x488d76*/
            v38 = *(unsigned __int8 *)(v37 + v27); /*0x488d7a*/
          else
            v38 = *(unsigned __int16 *)(v37 + 2 * v27); /*0x488d81*/
          v39 = *((_DWORD *)this + 19) - 1; /*0x488d9e*/
          v76[2] = a5 - 1; /*0x488d9f*/
          v76[0] = a3; /*0x488daa*/
          v76[1] = a4; /*0x488dae*/
          v76[3] = v39; /*0x488db2*/
          (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x488dc0*/
            g_DSurface_Hidden_2,
            v76,
            v38);
          v40 = *((_DWORD *)this + 11); /*0x488dce*/
          v41 = *((_DWORD *)this + 14); /*0x488dd8*/
          v42 = *((_DWORD *)this + 94); /*0x488ddc*/
          v68[0] = a3; /*0x488de2*/
          v68[1] = a4; /*0x488de6*/
          v60 = v40; /*0x488def*/
          v53 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(v42 + 4 * a2)); /*0x488e05*/
          v43 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))(g_DSurface_Hidden_2); /*0x488e11*/
          result = FillRectangle( /*0x488e25*/
                     &v79,
                     *(_DWORD *)(4 * a2 + v41),
                     (int)g_DSurface_Hidden_2,
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
        v44 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(*((_DWORD *)this + 94) + 4 * a2)) /*0x488e4e*/
                        + 788);
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x488e5a*/
          v45 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v44); /*0x488e67*/
        else
          v45 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v44); /*0x488e73*/
        v73[0] = a3; /*0x488e85*/
        v73[1] = a4; /*0x488e90*/
        v46 = *((_DWORD *)this + 19); /*0x488e94*/
        v73[2] = a5; /*0x488e97*/
        v73[3] = v46; /*0x488ea2*/
        result = (*(_DWORD *(__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x488ead*/
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
    v7 = *((_DWORD *)this + 14); /*0x4889ad*/
    v65 = a3; /*0x4889b0*/
    v66 = a4; /*0x4889b4*/
    v61 = this->q00C; /*0x4889c9*/
    v54 = *((_DWORD *)this + 11); /*0x4889d6*/
    v47 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * *(_DWORD *)(*((_DWORD *)this + 94) + 4 * a2)); /*0x4889ef*/
    v8 = (*(int (__thiscall **)(AudioStream *, _DWORD *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x4889f8*/
           g_DSurface_Hidden_2,
           v73);
    return FillRectangle(&v67, *(_DWORD *)(4 * a2 + v7), (int)g_DSurface_Hidden_2, v8, (int)&v65, v47, 0, v54, a5, v61); /*0x488a09*/
  }
  return result; /*0x488a0e*/
}



// ==== 0x00488EE0  ColorListClass::GetColor  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::GetColor(ColorListClass *this, int a2)
{
  return (*(int (__thiscall **)(ColorListClass *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 204))(this, a2, 0); /*0x488eef*/
}



// ==== 0x00488F00  ColorListClass::QueryInterface  this=ColorListClass  sig=csp ====
char *__thiscall ColorListClass::QueryInterface(ColorListClass *this, char a2)
{
  int v3; // eax
  char *v4; // esi
  void *v5; // eax

  v3 = *((_DWORD *)this + 93); /*0x488f05*/
  v4 = (char *)this + 372; /*0x488f0b*/
  *(_DWORD *)this->__pad_0 = &ColorListClass::`vftable'; /*0x488f13*/
  (*(void (__thiscall **)(char *))(v3 + 12))((char *)this + 372); /*0x488f19*/
  this->q019 = 0; /*0x488f1e*/
  v5 = (void *)*((_DWORD *)v4 + 1); /*0x488f24*/
  *(_DWORD *)v4 = &VectorClass<int>::`vftable'; /*0x488f29*/
  if ( v5 && v4[13] ) /*0x488f31*/
  {
    __3_YAXPAX_Z(v5); /*0x488f37*/
    *((_DWORD *)v4 + 1) = 0; /*0x488f3f*/
  }
  v4[13] = 0; /*0x488f44*/
  *((_DWORD *)v4 + 2) = 0; /*0x488f47*/
  ListClass::Destruct((ListClass *)this); /*0x488f4a*/
  if ( (a2 & 1) != 0 ) /*0x488f54*/
    __3_YAXPAX_Z(this); /*0x488f57*/
  return this->__pad_0; /*0x488f61*/
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
int __fastcall ComputeTechnoClassDamageFalloff(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax
  double v7; // st7
  int v8; // eax
  int v9; // eax
  float v10; // [esp+8h] [ebp-Ch]
  float v11; // [esp+Ch] [ebp-8h]

  v4 = a1; /*0x489184*/
  if ( !a1 || (dword_A8B230->vtable0 & 0x20) != 0 || !a2 ) /*0x4891a5*/
    return 0; /*0x489263*/
  if ( a1 < 0 )
    return a4 >= 8 ? 0 : a1;
  v7 = (double)a1; /*0x4891c6*/
  v10 = v7; /*0x4891ca*/
  v11 = v7 * *(float *)(a2 + 300); /*0x4891d4*/
  LOWORD(v8) = Math::RoundToInt(*(float *)(a2 + 292) * 256.0); /*0x4891e4*/
  if ( v11 != v10 && v8 ) /*0x489200*/
  {
    LOWORD(v9) = Math::RoundToInt((v10 - v11) * (double)(v8 - a4) / (double)v8 + v11); /*0x489220*/
    v4 = v9; /*0x489225*/
  }
  LOWORD(result) = Math::RoundToInt((double)(v4 <= 0 ? 0 : v4) * *(double *)(a2 + 8 * a3 + 160));
  if ( result >= dword_8871E0->IRepairRate[0] ) /*0x489257*/
    return dword_8871E0->IRepairRate[0]; /*0x48925a*/
  return result; /*0x4891b8*/
}



// ==== 0x00489270  ObjectClass::CellChainReact  this=ObjectClass  sig=csp ====
void CellChainReact(ObjectClass *this)
{
  ; /*0x489270*/
}



// ==== 0x00489280  PlaySoundEffectAt  this=-  sig=csp ====
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
  i... [26608 chars total]



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
    && (*((_DWORD *)Coord::To_Cell(&dword_87F7E8, a4) + 80) & 0x100) == 0
    && a4[2] < Cell::GetGroundHeight(a4) + 2 * dword_89E870 )
  {
    v6 = *((_DWORD *)dword_8871E0 + 756); /*0x48a557*/
    if ( v6 ) /*0x48a55f*/
    {
      v7 = 35 * v6 - 1; /*0x48a56e*/
      if ( v4 < v7 ) /*0x48a574*/
        v7 = v4; /*0x48a576*/
      return *(_DWORD *)(*((_DWORD *)dword_8871E0 + 753) + 4 * (v7 / 35)); /*0x48a597*/
    }
    return 0; /*0x48a61a*/
  }
  if ( a2 == *((_DWORD *)dword_8871E0 + 1517) ) /*0x48a5a5*/
    return *((_DWORD *)dword_8871E0 + 189); /*0x48a5b0*/
  v9 = *(_DWORD *)(a2 + 276); /*0x48a5b3*/
  if ( !v9 ) /*0x48a5bb*/
    return 0; /*0x48a5bb*/
  if ( *(_BYTE *)(a2 + 340) ) /*0x48a5bd*/
    return *(_DWORD *)(*(_DWORD *)(a2 + 264) + 4 * Random::Range((_DWORD *)dword_A8B230 + 134, 0, v9 - 1)); /*0x48a5e4*/
  v10 = 25 * v9 - 1; /*0x48a5ee*/
  if ( v4 >= v10 ) /*0x48a5f4*/
    v4 = v10; /*0x48a5f6*/
  return *(_DWORD *)(*(_DWORD *)(a2 + 264) + 4 * (v4 / 25)); /*0x48a57d*/
}



// ==== 0x0048A620  CreateSmokeEffectAt  this=Coord  sig=csp ====
char __fastcall CreateSmokeEffectAt(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  wchar_t *v7; // eax
  double v10; // st7
  int v11; // eax
  int v12; // esi
  ObjectClass *v13; // eax

  LOBYTE(v7) = dword_A8EB78; /*0x48a620*/
  if ( dword_A8EB78 && (v7 = (wchar_t *)PingPongBuffer::GetWriteOffset(), dword_ABCD44 >= v7) || (a7 & 0xF) != 0 ) /*0x48a644*/
  {
    LOBYTE(v7) = a6; /*0x48a64a*/
    if ( a6 || a2 && (LOBYTE(v7) = *(_BYTE *)(a2 + 336), (_BYTE)v7) ) /*0x48a662*/
    {
      v10 = *(float *)(a2 + 316); /*0x48a668*/
      if ( v10 <= 0.0 ) /*0x48a679*/
      {
        v12 = (char)(a1 >> 2); /*0x48a6a2*/
        if ( v12 < 63 ) /*0x48a6aa*/
        {
          if ( v12 <= 21 ) /*0x48a6b6*/
            v12 = 21; /*0x48a6b8*/
        }
        else
        {
          v12 = 63; /*0x48a6ac*/
        }
      }
      else
      {
        if ( v10 > 1.0 ) /*0x48a686*/
          v10 = 1.0; /*0x48a68a*/
        LOWORD(v11) = Math::RoundToInt(v10 * 63.0); /*0x48a696*/
        v12 = v11; /*0x48a69b*/
      }
      v13 = (ObjectClass *)__2_YAPAXI_Z(0x18u); /*0x48a6bf*/
      if ( v13 ) /*0x48a6c9*/
      {
        v7 = (wchar_t *)ObjectClass::RegisterInArray(v13, a3, a4, a5, v12); /*0x48a6e7*/
        *((_DWORD *)v7 + 5) |= a7; /*0x48a6ec*/
      }
      else
      {
        MEMORY[0x14] |= a7; /*0x48a6f7*/
        LOBYTE(v7) = 0; /*0x48a6f5*/
      }
    }
  }
  return (char)v7; /*0x48a6ef*/
}



// ==== 0x0048A8D0  ComputeMathFacingAngle  this=-  sig=csp ====
int __fastcall ComputeMathFacingAngle(char a1, int a2, int a3, int a4, double a5, _DWORD *a6)
{
  double v6; // kr00_8
  int result; // eax
  char v11; // c0
  int v12[2]; // [esp+10h] [ebp-8h] BYREF

  v6 = a5; /*0x48a8df*/
  if ( SolveMathTrajectory(a1, a2, a3, a4, a5, (int)&a5) ) /*0x48a8f8*/
  {
    if ( a1 ) /*0x48a907*/
    {
      LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a91e*/
      result = (int)a6; /*0x48a923*/
      *a6 = a4; /*0x48a92d*/
      LOBYTE(result) = 1; /*0x48a930*/
    }
    else
    {
      SolveMathTrajectory(0, a2, a3 + 1, a4, v6, (int)v12); /*0x48a94f*/
      if ( v11 ) /*0x48a965*/
      {
        LOWORD(a4) = Math::RoundToInt((-a5 - 1.570796326794897) * -10430.06004058427); /*0x48a97e*/
        result = a4; /*0x48a983*/
      }
      else
      {
        LOWORD(result) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a9a1*/
        LOWORD(a4) = result; /*0x48a9aa*/
      }
      *a6 = a4; /*0x48a989*/
      LOBYTE(result) = 1; /*0x48a98c*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x48a9c4*/
  }
  return result; /*0x48a92b*/
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
__int64 __thiscall TechnoClass::ComputeScanRange(TechnoClass *this, double a2)
{
  double v2; // st7
  __int64 result; // rax
  int v4; // kr00_4
  double v5; // [esp+0h] [ebp-Ch]
  TechnoClass *v6; // [esp+8h] [ebp-4h]

  v6 = this; /*0x48ab91*/
  __asm /*0x48ab98*/
  {
    fild [esp+0Ch+var_4]
    fmul [esp+0Ch+arg_0]
    fmul ds:dbl_7E5190
    fstp [esp+0Ch+var_C]; double
  }
  Math::Sqrt(v5); /*0x48aba9*/
  v4 = Math::RoundToInt(v2); /*0x48abae*/
  WORD2(result) = HIWORD(v4); /*0x48abae*/
  LOWORD(result) = v4; /*0x48abae*/
  return result; /*0x48abb6*/
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
  return (double)*((int *)dword_8871E0 + 1454) * 0.5; /*0x48ad01*/
}



// ==== 0x0048AD10  _DynamicVectorClass_PAUDamageGroup::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_DamageGroup::Destroy(_DynamicVectorClass_PAUDamageGroup *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x48ad16*/
  this->m_10 = 0; /*0x48ad19*/
  if ( v2 && BYTE1(this->m_C) ) /*0x48ad20*/
  {
    __3_YAXPAX_Z(v2); /*0x48ad26*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x48ad2e*/
  }
  BYTE1(this->m_C) = 0; /*0x48ad31*/
  this->m_8 = 0; /*0x48ad34*/
}



// ==== 0x0048AD40  _DynamicVectorClass_PAUDamageGroup::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_DamageGroup::GetItemIndex(_DynamicVectorClass_PAUDamageGroup *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x48ad40*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x48ad55*/
  else
    return 0; /*0x48ad47*/
}



// ==== 0x0048AD60  _VectorClass_PAUDamageGroup::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_DamageGroup::Clear(_VectorClass_PAUDamageGroup *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x48ad6a*/
}



// ==== 0x0048AD70  _VectorClass_PAUDamageGroup::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_DamageGroup::AddRef(_VectorClass_PAUDamageGroup *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x48ad72*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x48ad7d*/
  {
    v3 = 0; /*0x48ad7f*/
    if ( m_8 <= 0 ) /*0x48ad83*/
      return 1; /*0x48ada3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x48ad85*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x48ad8b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x48ad94*/
    {
      ++v3; /*0x48ad96*/
      ++v4; /*0x48ad97*/
      if ( v3 >= m_8 ) /*0x48ad9c*/
        return 1; /*0x48ad9c*/
    }
  }
  return 0; /*0x48ad9e*/
}



// ==== 0x0048ADB0  _VectorClass_PAUDamageGroup::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_DamageGroup::Remove(_VectorClass_PAUDamageGroup *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x48adbc*/
  {
    LOBYTE(this->m_C) = 0; /*0x48adc6*/
    if ( a3 ) /*0x48adcc*/
      v4 = a3; /*0x48ade2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x48adde*/
    LOBYTE(this->m_C) = 1; /*0x48ade6*/
    if ( v4 ) /*0x48adea*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x48adf5*/
      {
        m_8 = this->m_8; /*0x48adfc*/
        if ( a2 < m_8 ) /*0x48ae01*/
          m_8 = a2; /*0x48ae03*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x48ae09*/
          ++i; /*0x48ae0e*/
        if ( BYTE1(this->m_C) ) /*0x48ae1b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x48ae26*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x48ae2e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x48ae37*/
      this->m_8 = a2; /*0x48ae3f*/
      BYTE1(this->m_C) = a3 == 0; /*0x48ae42*/
      return 1; /*0x48ae48*/
    }
    else
    {
      return 0; /*0x48adef*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUDamageGroup *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x48ae52*/
    return 1; /*0x48ae58*/
  }
}



// ==== 0x0048AE60  _VectorClass_PAUDamageGroup::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_DamageGroup::ddtor(_VectorClass_PAUDamageGroup *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x48ae6d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x48ae73*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x48ae7b*/
  }
  BYTE1(this->m_C) = 0; /*0x48ae7e*/
  this->m_8 = 0; /*0x48ae81*/
}



// ==== 0x0048AE90  _VectorClass_PAUDamageGroup::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_DamageGroup::GetSize(_VectorClass_PAUDamageGroup *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x48ae90*/
    return 0; /*0x48ae98*/
  m_8 = this->m_8; /*0x48ae9e*/
  result = 0; /*0x48aea1*/
  if ( m_8 <= 0 ) /*0x48aea5*/
    return -1; /*0x48aebc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x48aeab*/
  {
    if ( ++result >= m_8 ) /*0x48aeba*/
      return -1; /*0x48aeba*/
  }
  return result; /*0x48ae9a*/
}



// ==== 0x0048AED0  _VectorClass_PAUDamageGroup::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_DamageGroup::Get(_VectorClass_PAUDamageGroup *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x48aed0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x48aee5*/
  else
    return 0; /*0x48aed7*/
}



// ==== 0x0048AEF0  _DynamicVectorClass_PAUDamageGroup::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_DamageGroup::SetCapacity(_DynamicVectorClass_PAUDamageGroup *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x48aefc*/
  {
    LOBYTE(this->m_C) = 0; /*0x48af02*/
    if ( a3 ) /*0x48af08*/
      v4 = a3; /*0x48af1e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x48af1a*/
    LOBYTE(this->m_C) = 1; /*0x48af22*/
    if ( !v4 ) /*0x48af26*/
      return 0; /*0x48af9a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x48af28*/
    {
      m_8 = this->m_8; /*0x48af2f*/
      if ( a2 < m_8 ) /*0x48af34*/
        m_8 = a2; /*0x48af36*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x48af3c*/
        ++i; /*0x48af41*/
      if ( BYTE1(this->m_C) ) /*0x48af4e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x48af59*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x48af61*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x48af6a*/
    this->m_8 = a2; /*0x48af72*/
    BYTE1(this->m_C) = a3 == 0; /*0x48af75*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUDamageGroup *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x48af7e*/
  }
  v7 = this->m_8; /*0x48af81*/
  if ( v7 < this->m_10 ) /*0x48af89*/
    this->m_10 = v7; /*0x48af8b*/
  return 1; /*0x48af8e*/
}



// ==== 0x0048AFA0  _DynamicVectorClass_PAUDamageGroup::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_DamageGroup::FindItemIndex(_DynamicVectorClass_PAUDamageGroup *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x48afa0*/
  result = 0; /*0x48afa3*/
  if ( m_10 <= 0 ) /*0x48afa8*/
    return -1; /*0x48afbf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x48afae*/
  {
    if ( ++result >= m_10 ) /*0x48afbd*/
      return -1; /*0x48afbd*/
  }
  return result; /*0x48afc2*/
}



// ==== 0x0048AFD0  _VectorClass_PAUDamageGroup::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_DamageGroup::Add(_VectorClass_PAUDamageGroup *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x48afd3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DamageGroup *>::`vftable'; /*0x48afd6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x48afe0*/
  {
    __3_YAXPAX_Z(v3); /*0x48afe8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x48aff0*/
  }
  BYTE1(this->m_C) = 0; /*0x48affb*/
  this->m_8 = 0; /*0x48b001*/
  if ( (a2 & 1) != 0 ) /*0x48b008*/
    __3_YAXPAX_Z(this); /*0x48b00b*/
  return this->__pad_0; /*0x48b015*/
}



// ==== 0x0048B020  _DynamicVectorClass_PAUDamageGroup::Constructor_VectorClass_DamageGroup___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_DamageGroup::Constructor_VectorClass_DamageGroup___(
        _DynamicVectorClass_PAUDamageGroup *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x48b023*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DamageGroup *>::`vftable'; /*0x48b026*/
  if ( v3 && BYTE1(this->m_C) ) /*0x48b030*/
  {
    __3_YAXPAX_Z(v3); /*0x48b038*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x48b040*/
  }
  BYTE1(this->m_C) = 0; /*0x48b04b*/
  this->m_8 = 0; /*0x48b051*/
  if ( (a2 & 1) != 0 ) /*0x48b058*/
    __3_YAXPAX_Z(this); /*0x48b05b*/
  return this->__pad_0; /*0x48b065*/
}



// ==== 0x0048B070  VectorClass::sub_48B070  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_48B070(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x48b07b*/
  this->Capacity = a2; /*0x48b07e*/
  this->IsInitialized = 1; /*0x48b081*/
  this->IsAllocated = 0; /*0x48b085*/
  this->vtable0 = &VectorClass<DamageGroup *>::`vftable'; /*0x48b088*/
  if ( a2 ) /*0x48b08e*/
  {
    if ( a3 ) /*0x48b096*/
    {
      this->Items = (void *)a3; /*0x48b098*/
      return &this->vtable0; /*0x48b09e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x48b0ad*/
    this->IsAllocated = 1; /*0x48b0b0*/
  }
  return &this->vtable0; /*0x48b09d*/
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
_DWORD *__thiscall sub_48B0E0(CommBufferClass *this, int a2, int a3, size_t Size, int a5)
{
  int v6; // ebx
  int v7; // edi
  int v8; // ebx
  int v9; // edi

  *(_DWORD *)this->__pad_0 = &CommBufferClass::`vftable'; /*0x48b0fd*/
  *(_DWORD *)&this->__pad_0[4] = a2; /*0x48b103*/
  this->CommBufferClass_field_0x8 = a3; /*0x48b106*/
  *(_DWORD *)this->__pad_C = Size; /*0x48b109*/
  this->CommBufferClass_field_0x10 = (AbstractClass *)a5; /*0x48b10c*/
  this->CommBufferClass_field_0x24 = __2_YAPAXI_Z(36 * a2); /*0x48b117*/
  this->CommBufferClass_field_0x34 = __2_YAPAXI_Z(24 * a3); /*0x48b123*/
  *(_DWORD *)&this->__pad_28[8] = __2_YAPAXI_Z(4 * a2); /*0x48b13a*/
  this->q010 = __2_YAPAXI_Z(4 * a3); /*0x48b143*/
  v6 = 0; /*0x48b14c*/
  if ( *(int *)&this->__pad_0[4] > 0 ) /*0x48b150*/
  {
    v7 = 0; /*0x48b152*/
    do /*0x48b191*/
    {
      *(_DWORD *)(this->CommBufferClass_field_0x24 + v7 + 20) = __2_YAPAXI_Z(Size); /*0x48b160*/
      if ( (int)this->CommBufferClass_field_0x10 <= 0 ) /*0x48b169*/
        *(_DWORD *)(this->CommBufferClass_field_0x24 + v7 + 28) = 0; /*0x48b180*/
      else
        *(_DWORD *)(this->CommBufferClass_field_0x24 + v7 + 28) = __2_YAPAXI_Z((size_t)this->CommBufferClass_field_0x10); /*0x48b177*/
      ++v6; /*0x48b18b*/
      v7 += 36; /*0x48b18c*/
    }
    while ( v6 < *(_DWORD *)&this->__pad_0[4] ); /*0x48b191*/
  }
  v8 = 0; /*0x48b196*/
  if ( this->CommBufferClass_field_0x8 > 0 ) /*0x48b19a*/
  {
    v9 = 0; /*0x48b19c*/
    do /*0x48b1db*/
    {
      *(_DWORD *)(v9 + this->CommBufferClass_field_0x34 + 12) = __2_YAPAXI_Z(Size); /*0x48b1aa*/
      if ( (int)this->CommBufferClass_field_0x10 <= 0 ) /*0x48b1b3*/
        *(_DWORD *)(v9 + this->CommBufferClass_field_0x34 + 20) = 0; /*0x48b1ca*/
      else
        *(_DWORD *)(v9 + this->CommBufferClass_field_0x34 + 20) = __2_YAPAXI_Z((size_t)this->CommBufferClass_field_0x10); /*0x48b1c1*/
      ++v8; /*0x48b1d5*/
      v9 += 24; /*0x48b1d6*/
    }
    while ( v8 < this->CommBufferClass_field_0x8 ); /*0x48b1db*/
  }
  Struct::ClearAllMemberFlags((Struct *)this); /*0x48b1df*/
  return this->__pad_0; /*0x48b1e6*/
}



// ==== 0x0048B1F0  CommBufferClass::method_48B1F0  this=CommBufferClass  sig=csp ====
void __thiscall sub_48B1F0(CommBufferClass *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int CommBufferClass_field_0x24; // edx
  int v6; // ebx
  int v7; // edi
  int CommBufferClass_field_0x34; // edx

  v2 = 0; /*0x48b1f4*/
  v3 = *(_DWORD *)&this->__pad_0[4]; /*0x48b1f7*/
  *(_DWORD *)this->__pad_0 = &CommBufferClass::`vftable'; /*0x48b1fa*/
  if ( v3 > 0 ) /*0x48b202*/
  {
    v4 = 0; /*0x48b204*/
    do /*0x48b233*/
    {
      __3_YAXPAX_Z(*(void **)(this->CommBufferClass_field_0x24 + v4 + 20)); /*0x48b20e*/
      CommBufferClass_field_0x24 = this->CommBufferClass_field_0x24; /*0x48b213*/
      if ( *(_DWORD *)(CommBufferClass_field_0x24 + v4 + 28) ) /*0x48b219*/
        __3_YAXPAX_Z(*(void **)(CommBufferClass_field_0x24 + v4 + 28)); /*0x48b222*/
      ++v2; /*0x48b22d*/
      v4 += 36; /*0x48b22e*/
    }
    while ( v2 < *(_DWORD *)&this->__pad_0[4] ); /*0x48b233*/
  }
  v6 = 0; /*0x48b238*/
  if ( this->CommBufferClass_field_0x8 > 0 ) /*0x48b23c*/
  {
    v7 = 0; /*0x48b23e*/
    do /*0x48b26d*/
    {
      __3_YAXPAX_Z(*(void **)(this->CommBufferClass_field_0x34 + v7 + 12)); /*0x48b248*/
      CommBufferClass_field_0x34 = this->CommBufferClass_field_0x34; /*0x48b24d*/
      if ( *(_DWORD *)(CommBufferClass_field_0x34 + v7 + 20) ) /*0x48b253*/
        __3_YAXPAX_Z(*(void **)(CommBufferClass_field_0x34 + v7 + 20)); /*0x48b25c*/
      ++v6; /*0x48b267*/
      v7 += 24; /*0x48b268*/
    }
    while ( v6 < this->CommBufferClass_field_0x8 ); /*0x48b26d*/
  }
  __3_YAXPAX_Z((void *)this->CommBufferClass_field_0x24); /*0x48b273*/
  __3_YAXPAX_Z((void *)this->CommBufferClass_field_0x34); /*0x48b27c*/
  __3_YAXPAX_Z(*(void **)&this->__pad_28[8]); /*0x48b285*/
  __3_YAXPAX_Z(*((void **)this + 16)); /*0x48b28e*/
}



// ==== 0x0048B2A0  Struct::ClearAllMemberFlags  this=Struct  sig=csp ====
int __thiscall Struct::ClearAllMemberFlags(Struct *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // edi
  int result; // eax
  int v6; // esi
  _DWORD *v7; // edi

  v1 = *((_DWORD *)this + 1); /*0x48b2a0*/
  v2 = 0; /*0x48b2a7*/
  *((_DWORD *)this + 11) = 0; /*0x48b2ac*/
  *((_DWORD *)this + 15) = 0; /*0x48b2af*/
  *((_DWORD *)this + 5) = 0; /*0x48b2b2*/
  *((_DWORD *)this + 6) = 0; /*0x48b2b5*/
  *((_DWORD *)this + 7) = 0; /*0x48b2b8*/
  *((_DWORD *)this + 8) = 0; /*0x48b2bb*/
  *((_DWORD *)this + 10) = 0; /*0x48b2be*/
  *((_DWORD *)this + 14) = 0; /*0x48b2c1*/
  if ( v1 > 0 ) /*0x48b2c4*/
  {
    v3 = 0; /*0x48b2c6*/
    do /*0x48b327*/
    {
      *(_DWORD *)(v3 + *((_DWORD *)this + 9)) &= ~1u; /*0x48b2d2*/
      *(_DWORD *)(v3 + *((_DWORD *)this + 9)) &= ~2u; /*0x48b2de*/
      v4 = (_DWORD *)(v3 + *((_DWORD *)this + 9)); /*0x48b2e3*/
      v3 += 36; /*0x48b2e5*/
      ++v2; /*0x48b2ed*/
      *v4 &= ~4u; /*0x48b2ee*/
      *(_DWORD *)(v3 + *((_DWORD *)this + 9) - 32) = 0; /*0x48b2f3*/
      *(_DWORD *)(v3 + *((_DWORD *)this + 9) - 28) = 0; /*0x48b2fa*/
      *(_DWORD *)(v3 + *((_DWORD *)this + 9) - 24) = 0; /*0x48b301*/
      *(_DWORD *)(v3 + *((_DWORD *)this + 9) - 20) = 0; /*0x48b308*/
      *(_DWORD *)(v3 + *((_DWORD *)this + 9) - 12) = 0; /*0x48b30f*/
      *(_WORD *)(v3 + *((_DWORD *)this + 9) - 4) = 0; /*0x48b316*/
      *(_DWORD *)(*((_DWORD *)this + 12) + 4 * v2 - 4) = 0; /*0x48b31e*/
    }
    while ( v2 < *((_DWORD *)this + 1) ); /*0x48b327*/
  }
  result = *((_DWORD *)this + 2); /*0x48b329*/
  v6 = 0; /*0x48b32c*/
  if ( result > 0 ) /*0x48b330*/
  {
    result = 0; /*0x48b332*/
    do /*0x48b37d*/
    {
      *(_DWORD *)(result + *((_DWORD *)this + 13)) &= ~1u; /*0x48b33e*/
      *(_DWORD *)(result + *((_DWORD *)this + 13)) &= ~2u; /*0x48b34a*/
      v7 = (_DWORD *)(result + *((_DWORD *)this + 13)); /*0x48b34f*/
      result += 24; /*0x48b351*/
      ++v6; /*0x48b359*/
      *v7 &= ~4u; /*0x48b35a*/
      *(_DWORD *)(*((_DWORD *)this + 13) + result - 20) = 0; /*0x48b35f*/
      *(_DWORD *)(*((_DWORD *)this + 13) + result - 16) = 0; /*0x48b366*/
      *(_DWORD *)(*((_DWORD *)this + 13) + result - 8) = 0; /*0x48b36d*/
      *(_DWORD *)(*((_DWORD *)this + 16) + 4 * v6 - 4) = 0; /*0x48b374*/
    }
    while ( v6 < *((_DWORD *)this + 2) ); /*0x48b37d*/
  }
  *((_DWORD *)this + 17) = 0; /*0x48b381*/
  *((_DWORD *)this + 18) = 0; /*0x48b384*/
  *((_DWORD *)this + 19) = 0; /*0x48b387*/
  *((_DWORD *)this + 21) = 0; /*0x48b38a*/
  return result; /*0x48b37f*/
}



// ==== 0x0048B390  EventClass::serializeEvent  this=EventClass  sig=csp ====
int __thiscall EventClass::serializeEvent(EventClass *this)
{
  int result; // eax
  int v2; // esi
  _DWORD *v3; // edx

  result = (int)this->EventClass_field_0x4; /*0x48b390*/
  v2 = 0; /*0x48b397*/
  this->EventClass_field_0x28 = 0; /*0x48b39b*/
  if ( result > 0 ) /*0x48b39e*/
  {
    result = 0; /*0x48b3a1*/
    do /*0x48b402*/
    {
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result) &= ~1u; /*0x48b3ad*/
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result) &= ~2u; /*0x48b3b9*/
      v3 = (char *)this->EventClass_field_0x24 + result; /*0x48b3be*/
      result += 36; /*0x48b3c0*/
      ++v2; /*0x48b3c8*/
      *v3 &= ~4u; /*0x48b3c9*/
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result - 32) = 0; /*0x48b3ce*/
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result - 28) = 0; /*0x48b3d5*/
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result - 24) = 0; /*0x48b3dc*/
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result - 20) = 0; /*0x48b3e3*/
      *(_DWORD *)((char *)this->EventClass_field_0x24 + result - 12) = 0; /*0x48b3ea*/
      *(_WORD *)((char *)this->EventClass_field_0x24 + result - 4) = 0; /*0x48b3f1*/
      *((_DWORD *)this->EventClass_field_0x30 + v2 - 1) = 0; /*0x48b3f9*/
    }
    while ( v2 < (int)this->EventClass_field_0x4 ); /*0x48b402*/
  }
  return result; /*0x48b405*/
}



// ==== 0x0048B410  ConnectionClass::queueSendPacket  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::queueSendPacket(
        ModemConnectionClass *this,
        const void *a2,
        signed int a3,
        const void *a4,
        signed int a5,
        __int16 a6)
{
  int PlayerIndex; // eax
  int v8; // esi
  int v9; // ebx
  _BYTE *i; // edi
  int v12; // eax
  int v13; // ecx

  PlayerIndex = this->PlayerIndex; /*0x48b418*/
  v8 = this->PhoneNumber[4]; /*0x48b41c*/
  if ( v8 == PlayerIndex || a3 > this->LastPacketTime ) /*0x48b42b*/
  {
    if ( v8 == PlayerIndex ) /*0x48b52f*/
    {
      Debug::Log(); /*0x48b536*/
      return 0; /*0x48b544*/
    }
    Debug::Log(); /*0x48b552*/
    return 0; /*0x48b552*/
  }
  v9 = 0; /*0x48b433*/
  if ( PlayerIndex <= 0 ) /*0x48b437*/
    return 0; /*0x48b437*/
  for ( i = (_BYTE *)this->PhoneNumber[3]; (*i & 1) != 0; i += 36 ) /*0x48b440*/
  {
    if ( ++v9 >= PlayerIndex ) /*0x48b44d*/
      return 0; /*0x48b455*/
  }
  if ( v9 == -1 ) /*0x48b45b*/
    return 0; /*0x48b55d*/
  v12 = 36 * v9; /*0x48b464*/
  *(_DWORD *)(this->PhoneNumber[3] + v12) = *(_DWORD *)(this->PhoneNumber[3] + 36 * v9) | 1; /*0x48b46d*/
  *(_DWORD *)(36 * v9 + this->PhoneNumber[3]) &= ~2u; /*0x48b47a*/
  *(_DWORD *)(36 * v9 + this->PhoneNumber[3]) &= ~4u; /*0x48b486*/
  *(_DWORD *)(v12 + this->PhoneNumber[3] + 4) = 0; /*0x48b490*/
  *(_DWORD *)(v12 + this->PhoneNumber[3] + 8) = 0; /*0x48b497*/
  *(_DWORD *)(v12 + this->PhoneNumber[3] + 12) = 0; /*0x48b49e*/
  *(_DWORD *)(v12 + this->PhoneNumber[3] + 16) = a3; /*0x48b4a5*/
  *(_WORD *)(v12 + this->PhoneNumber[3] + 32) = a6; /*0x48b4ae*/
  qmemcpy(*(void **)(36 * v9 + this->PhoneNumber[3] + 20), a2, a3); /*0x48b4c1*/
  if ( a4 && a5 > 0 && a5 <= this->PacketsSent ) /*0x48b4dd*/
  {
    qmemcpy(*(void **)(v12 + this->PhoneNumber[3] + 28), a4, a5); /*0x48b4eb*/
    *(_DWORD *)(v12 + this->PhoneNumber[3] + 24) = a5; /*0x48b4f9*/
  }
  else
  {
    *(_DWORD *)(v12 + this->PhoneNumber[3] + 24) = 0; /*0x48b502*/
  }
  *(_DWORD *)(this->PhoneNumber[6] + 4 * this->PhoneNumber[4]) = v9; /*0x48b512*/
  v13 = this->PhoneNumber[4] + 1; /*0x48b51b*/
  ++this->PhoneNumber[5]; /*0x48b51e*/
  this->PhoneNumber[4] = v13; /*0x48b521*/
  return 1; /*0x48b44f*/
}



// ==== 0x0048B570  PacketQueue::ExtractEntry  this=PacketQueue  sig=csp ====
int __thiscall PacketQueue::ExtractEntry(
        PacketQueue *this,
        void *a2,
        _DWORD *a3,
        int a4,
        void *a5,
        _DWORD *a6,
        _WORD *a7)
{
  int v8; // esi
  int v9; // esi
  _DWORD *v10; // ecx
  int i; // ecx

  if ( !*((_DWORD *)this + 10) ) /*0x48b576*/
    return 0; /*0x48b576*/
  v8 = *((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4); /*0x48b58f*/
  if ( (*(_BYTE *)v8 & 1) == 0 ) /*0x48b595*/
    return 0; /*0x48b712*/
  if ( a2 ) /*0x48b5a3*/
  {
    qmemcpy(a2, *(const void **)(v8 + 20), *(_DWORD *)(v8 + 16)); /*0x48b5b0*/
    *a3 = *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 16); /*0x48b5cd*/
  }
  if ( a5 && a6 ) /*0x48b5db*/
  {
    v9 = *((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4); /*0x48b5e9*/
    qmemcpy(a5, *(const void **)(v9 + 28), *(_DWORD *)(v9 + 24)); /*0x48b5f7*/
    *a6 = *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 24); /*0x48b614*/
  }
  if ( a7 ) /*0x48b61c*/
    *a7 = *(_WORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 32); /*0x48b62f*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4)) &= ~1u; /*0x48b647*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4)) &= ~2u; /*0x48b65e*/
  v10 = (_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4)); /*0x48b66e*/
  *v10 &= ~4u; /*0x48b676*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 4) = 0; /*0x48b684*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 8) = 0; /*0x48b694*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 12) = 0; /*0x48b6a4*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 16) = 0; /*0x48b6b4*/
  *(_DWORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 24) = 0; /*0x48b6c4*/
  *(_WORD *)(*((_DWORD *)this + 9) + 36 * *(_DWORD *)(*((_DWORD *)this + 12) + 4 * a4) + 32) = 0; /*0x48b6d4*/
  for ( i = a4; /*0x48b6e1*/
        i < *((_DWORD *)this + 10) - 1;
        *(_DWORD *)(*((_DWORD *)this + 12) + 4 * i - 4) = *(_DWORD *)(*((_DWORD *)this + 12) + 4 * i) )
  {
    ++i; /*0x48b6e6*/
  }
  *(_DWORD *)(*((_DWORD *)this + 12) + 4 * (*((_DWORD *)this + 10))-- - 4) = 0; /*0x48b6fd*/
  return 1; /*0x48b6fc*/
}



// ==== 0x0048B720  Terrain::GetTileIndex  this=Terrain  sig=csp ====
int __thiscall Terrain::GetTileIndex(Terrain *this, int a2)
{
  return (*((_DWORD *)this->Terrain_field_0x24 + 9 * *((_DWORD *)this->Terrain_field_0x30 + a2)) & 1) != 0
       ? (int)this->Terrain_field_0x24 + 36 * *((_DWORD *)this->Terrain_field_0x30 + a2)
       : 0;
}



// ==== 0x0048B750  ConnectionClass::allocPacketSlot  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::allocPacketSlot(
        ModemConnectionClass *this,
        const void *a2,
        signed int a3,
        const void *a4,
        signed int a5)
{
  int v6; // edx
  signed int v8; // ebx
  int v9; // eax
  _BYTE *v10; // ecx
  int v12; // ebx
  int v13; // esi
  int v14; // eax
  signed int v15; // [esp+14h] [ebp+8h]

  v6 = *(_DWORD *)this->Active; /*0x48b755*/
  if ( this->PhoneNumber[8] == v6 || a3 > this->LastPacketTime ) /*0x48b768*/
    return 0; /*0x48b768*/
  v8 = 0; /*0x48b76a*/
  if ( v6 <= 0 ) /*0x48b772*/
    goto LABEL_9; /*0x48b772*/
  v9 = this->PhoneNumber[7]; /*0x48b774*/
  v10 = (_BYTE *)v9; /*0x48b777*/
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
  *(_DWORD *)(v9 + v12) |= 1u; /*0x48b7b7*/
  *(_DWORD *)(v12 + this->PhoneNumber[7]) &= ~2u; /*0x48b7c4*/
  *(_DWORD *)(this->PhoneNumber[7] + v12) &= ~4u; /*0x48b7d2*/
  v13 = dword_887340; /*0x48b7d9*/
  if ( dword_887338 != -1 ) /*0x48b7e2*/
    v13 += Timer::GetTicks() - dword_887338; /*0x48b7f4*/
  *(_DWORD *)(this->PhoneNumber[7] + v12 + 4) = v13; /*0x48b7fb*/
  *(_DWORD *)(this->PhoneNumber[7] + v12 + 8) = a3; /*0x48b806*/
  qmemcpy(*(void **)(this->PhoneNumber[7] + v12 + 12), a2, a3); /*0x48b816*/
  if ( a4 && a5 > 0 && a5 <= this->PacketsSent ) /*0x48b832*/
  {
    qmemcpy(*(void **)(this->PhoneNumber[7] + v12 + 20), a4, a5); /*0x48b842*/
    *(_DWORD *)(this->PhoneNumber[7] + v12 + 16) = a5; /*0x48b84e*/
  }
  else
  {
    *(_DWORD *)(this->PhoneNumber[7] + v12 + 16) = 0; /*0x48b857*/
  }
  *(_DWORD *)(this->PhoneNumber[10] + 4 * this->PhoneNumber[8]) = v15; /*0x48b86a*/
  v14 = this->PhoneNumber[9] + 1; /*0x48b874*/
  ++this->PhoneNumber[8]; /*0x48b875*/
  this->PhoneNumber[9] = v14; /*0x48b878*/
  return 1; /*0x48b7a2*/
}



// ==== 0x0048B890  PacketQueue::ReleaseEntry  this=PacketQueue  sig=csp ====
int __thiscall PacketQueue::ReleaseEntry(PacketQueue *this, void *a2, _DWORD *a3, int a4, void *a5, _DWORD *a6)
{
  int v7; // esi
  int v8; // esi
  _DWORD *v9; // ecx
  int i; // ecx

  if ( !*((_DWORD *)this + 14) ) /*0x48b896*/
    return 0; /*0x48b896*/
  v7 = *((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4); /*0x48b8af*/
  if ( (*(_BYTE *)v7 & 1) == 0 ) /*0x48b8b5*/
    return 0; /*0x48b9d5*/
  if ( a2 ) /*0x48b8c3*/
  {
    qmemcpy(a2, *(const void **)(v7 + 12), *(_DWORD *)(v7 + 8)); /*0x48b8d0*/
    *a3 = *(_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4) + 8); /*0x48b8ed*/
  }
  if ( a5 && a6 ) /*0x48b8fd*/
  {
    v8 = *((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4); /*0x48b90b*/
    qmemcpy(a5, *(const void **)(v8 + 20), *(_DWORD *)(v8 + 16)); /*0x48b919*/
    *a6 = *(_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4) + 16); /*0x48b934*/
  }
  *(_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4)) &= ~1u; /*0x48b94b*/
  *(_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4)) &= ~2u; /*0x48b962*/
  v9 = (_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4)); /*0x48b972*/
  *v9 &= ~4u; /*0x48b97a*/
  *(_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4) + 8) = 0; /*0x48b988*/
  *(_DWORD *)(*((_DWORD *)this + 13) + 24 * *(_DWORD *)(this->q004 + 4 * a4) + 16) = 0; /*0x48b998*/
  for ( i = a4; /*0x48b9a4*/
        i < *((_DWORD *)this + 14) - 1;
        *(_DWORD *)(this->q004 + 4 * i - 4) = *(_DWORD *)(this->q004 + 4 * i) )
  {
    ++i; /*0x48b9a9*/
  }
  *(_DWORD *)(this->q004 + 4 * (*((_DWORD *)this + 14))-- - 4) = 0; /*0x48b9c0*/
  return 1; /*0x48b9bf*/
}



// ==== 0x0048B9E0  Terrain::GetTileType  this=Terrain  sig=csp ====
int __thiscall Terrain::GetTileType(Terrain *this, int a2)
{
  return (*((_DWORD *)this->Terrain_field_0x34 + 6 * *((_DWORD *)this->Terrain_field_0x40 + a2)) & 1) != 0
       ? (int)this->Terrain_field_0x34 + 24 * *((_DWORD *)this->Terrain_field_0x40 + a2)
       : 0;
}



// ==== 0x0048BA10  ConnectionClass::initQueue  this=ConnectionClass  sig=csp ====
unsigned int __thiscall ConnectionClass::initQueue(ConnectionClass *this, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int result; // eax

  v2 = *((_DWORD *)this + 6); /*0x48ba10*/
  if ( v2 == 256 ) /*0x48ba1c*/
  {
    v3 = a2 - *((_DWORD *)this + 7) + this->PacketsReceived; /*0x48ba2c*/
    this->PacketsReceived = v3; /*0x48ba2e*/
    v4 = ((unsigned __int8)v3 > 0x7Fu) + (v3 >> 8); /*0x48ba46*/
  }
  else
  {
    v5 = v2 + 1; /*0x48ba4e*/
    v6 = a2 + this->PacketsReceived; /*0x48ba56*/
    *((_DWORD *)this + 6) = v5; /*0x48ba58*/
    this->PacketsReceived = v6; /*0x48ba5b*/
    v4 = v6 / v5; /*0x48ba5e*/
  }
  *((_DWORD *)this + 7) = v4; /*0x48ba60*/
  result = this->Active; /*0x48ba63*/
  if ( a2 > result ) /*0x48ba68*/
    this->Active = a2; /*0x48ba6a*/
  return result; /*0x48ba6d*/
}



// ==== 0x0048BA80  CellClass::GetBridgeIndex  this=CellClass  sig=csp ====
int __thiscall CellClass::GetBridgeIndex(CellClass *this)
{
  return (int)this->rubble; /*0x48ba83*/
}



// ==== 0x0048BA90  IPXManagerClass::init  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::init(IPXManagerClass *this)
{
  return *((_DWORD *)this + 8); /*0x48ba93*/
}



// ==== 0x0048BAA0  Rect::SetRedraw  this=Rect  sig=csp ====
int __thiscall Rect::SetRedraw(Rect *this, char a2)
{
  int result; // eax

  result = 0; /*0x48baa4*/
  if ( a2 ) /*0x48baa8*/
  {
    *((_DWORD *)this + 5) = 0; /*0x48baaa*/
    *((_DWORD *)this + 6) = 0; /*0x48baad*/
    *((_DWORD *)this + 7) = 0; /*0x48bab0*/
  }
  else
  {
    result = *((_DWORD *)this + 7); /*0x48bab9*/
    *((_DWORD *)this + 6) = 1; /*0x48babc*/
    *((_DWORD *)this + 5) = result; /*0x48bac3*/
  }
  this->Width = result; /*0x48bab3*/
  return result; /*0x48bab6*/
}



// ==== 0x0048BAD0  EventClass::SetData  this=EventClass  sig=csp ====
int __thiscall EventClass::SetData(EventClass *this, int a2, int a3, int a4, int a5, int a6)
{
  this->EventClass_field_0x44 = (void *)a2; /*0x48bad8*/
  this->EventClass_field_0x48 = (void *)a3; /*0x48badf*/
  this->EventClass_field_0x4C[0] = a4; /*0x48bae6*/
  this->EventClass_field_0x50 = (void *)a5; /*0x48baed*/
  this->EventClass_field_0x54 = (void *)a6; /*0x48baf0*/
  return a6; /*0x48baf3*/
}



// ==== 0x0048BB00  ObjectClass::method_48BB00  this=ObjectClass  sig=csp ====
void *__thiscall sub_48BB00(ObjectClass *this, char a2)
{
  sub_48B1F0((CommBufferClass *)this); /*0x48bb03*/
  if ( (a2 & 1) != 0 ) /*0x48bb0d*/
    __3_YAXPAX_Z(this); /*0x48bb10*/
  return this; /*0x48bb1a*/
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
  v2 = dword_87F684; /*0x48bb68*/
  v3 = a1; /*0x48bb6e*/
  BYTE1(v3) = BYTE1(a1) & 0xE8; /*0x48bb71*/
  if ( !dword_87F684 ) /*0x48bb76*/
    goto LABEL_12; /*0x48bb76*/
  v4 = dword_87F690; /*0x48bb78*/
  if ( dword_87F690 && *(_DWORD *)dword_87F690 == v3 ) /*0x48bb84*/
  {
LABEL_17:
    v7 = (_DWORD *)(v4 + 4); /*0x48bc0b*/
    return !*v7 || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v1) == 0; /*0x48bc0e*/
  }
  if ( !byte_87F68C ) /*0x48bb91*/
  {
    qsort(dword_87F680, dword_87F684, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x48bba1*/
    v2 = dword_87F684; /*0x48bba6*/
    dword_87F690 = 0; /*0x48bbaf*/
    byte_87F68C = 1; /*0x48bbb9*/
  }
  v5 = dword_87F680; /*0x48bbc0*/
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
    dword_87F690 = (int)&v5[2 * (v2 / 2)]; /*0x48bc05*/
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
void *__thiscall IPXConnClass::initConnection(
        ModemConnectionClass *this,
        int a2,
        int a3,
        int a4,
        __int16 a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  CommBufferClass *v10; // eax

  LOWORD(this->PhoneNumber[3]) = a5; /*0x48be73*/
  this->PhoneNumber[4] = a6; /*0x48be7b*/
  *(_DWORD *)this->__pad_0 = &ConnectionClass::`vftable'; /*0x48be83*/
  this->PhoneNumber[1] = a4 + 14; /*0x48be89*/
  this->PhoneNumber[5] = a7; /*0x48be8c*/
  this->PhoneNumber[6] = a8; /*0x48be8f*/
  this->PhoneNumber[2] = __2_YAPAXI_Z(a4 + 14); /*0x48be99*/
  v10 = (CommBufferClass *)__2_YAPAXI_Z(0x58u); /*0x48be9c*/
  if ( v10 ) /*0x48bea6*/
    this->PlayerIndex = (int)sub_48B0E0(v10, a2, a3, this->PhoneNumber[1], a9); /*0x48bec2*/
  else
    this->PlayerIndex = 0; /*0x48becd*/
  return this; /*0x48bec7*/
}



// ==== 0x0048BEE0  ConnectionClass::dtor  this=ConnectionClass  sig=csp ====
void __thiscall ConnectionClass::dtor(ConnectionClass *this)
{
  void *v2; // eax
  void (__thiscall ***PlayerIndex)(_DWORD, int); // ecx

  v2 = (void *)this->Active; /*0x48bee3*/
  *(_DWORD *)this->__pad_0 = &ConnectionClass::`vftable'; /*0x48bee6*/
  __3_YAXPAX_Z(v2); /*0x48beed*/
  PlayerIndex = (void (__thiscall ***)(_DWORD, int))this->PlayerIndex; /*0x48bef2*/
  if ( PlayerIndex ) /*0x48befb*/
    (**PlayerIndex)(PlayerIndex, 1); /*0x48bf01*/
}



// ==== 0x0048BF10  ConnectionClass::ZeroInitAndSetup  this=ConnectionClass  sig=csp ====
int __thiscall Struct::ZeroInitAndSetup(ModemConnectionClass *this)
{
  this->PhoneNumber[7] = 0; /*0x48bf12*/
  this->PhoneNumber[8] = 0; /*0x48bf15*/
  this->PhoneNumber[9] = 0; /*0x48bf18*/
  this->PhoneNumber[10] = 0; /*0x48bf1b*/
  *(_DWORD *)this->Active = 0; /*0x48bf1e*/
  this->LastPacketTime = 0; /*0x48bf21*/
  this->PacketsSent = 0; /*0x48bf24*/
  this->PacketsReceived = 0; /*0x48bf27*/
  this->PhoneNumber[0] = 0; /*0x48bf2a*/
  this->PhoneNumber[11] = -1; /*0x48bf30*/
  this->PhoneNumber[12] = -1; /*0x48bf33*/
  return Struct::ClearAllMemberFlags((Struct *)this->PlayerIndex);
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
  if ( dword_A8B238[0] == 4 && byte_A8DBA0 ) /*0x48bf99*/
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
int __thiscall ConnectionClass::receivePacket(ModemConnectionClass *this, int a2, int a3)
{
  char v5; // al
  int v6; // ecx
  int v7; // edi
  _DWORD *TileIndex; // eax
  int v9; // ecx
  int PlayerIndex; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  Terrain *v14; // ecx
  int v15; // edi
  int TileType; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  Terrain *v21; // ecx
  int v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int16 v27; // [esp+10h] [ebp-10h] BYREF
  char v28; // [esp+12h] [ebp-Eh]
  _BYTE v29[13]; // [esp+13h] [ebp-Dh]

  if ( *(_WORD *)a2 != LOWORD(this->PhoneNumber[3]) ) /*0x48c054*/
  {
    ++this->PhoneNumber[0]; /*0x48c05b*/
    return 0; /*0x48c066*/
  }
  v5 = *(_BYTE *)(a2 + 2); /*0x48c069*/
  if ( v5 != 2 ) /*0x48c06e*/
  {
    if ( v5 == 1 ) /*0x48c0d5*/
    {
      PlayerIndex = this->PlayerIndex; /*0x48c0db*/
      if ( *(_DWORD *)(PlayerIndex + 8) - *(_DWORD *)(PlayerIndex + 56) > 1 ) /*0x48c0e9*/
      {
        if ( ConnectionClass::allocPacketSlot((ModemConnectionClass *)PlayerIndex, (const void *)a2, a3, 0, 0) ) /*0x48c115*/
        {
          v11 = this->PhoneNumber[7] + 1; /*0x48c14b*/
          this->PhoneNumber[7] = v11; /*0x48c14c*/
          this->LastPacketTime = *(_DWORD *)(a2 + 4) - v11 + 1; /*0x48c155*/
          v12 = *(_DWORD *)(a2 + 4); /*0x48c158*/
          if ( v12 ) /*0x48c15d*/
            this->PacketsSent = 100 - 100 * v11 / (unsigned int)(v12 + 1); /*0x48c174*/
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
      v13 = this->PhoneNumber[11]; /*0x48c18e*/
      if ( *(_DWORD *)(a2 + 4) <= v13 && v13 != -1 ) /*0x48c19b*/
      {
LABEL_40:
        v25 = *(_DWORD *)(a2 + 4); /*0x48c288*/
        v27 = this->PhoneNumber[3]; /*0x48c28f*/
        v28 = 2; /*0x48c29c*/
        *(_DWORD *)&v29[1] = v25; /*0x48c2a1*/
        if ( byte_A8DBA0 ) /*0x48c2a5*/
          v29[0] = *(_BYTE *)(a2 + 3); /*0x48c2aa*/
        else
          v29[0] = 0; /*0x48c2b0*/
        Debug::Log(); /*0x48c2c6*/
        v26 = dword_A8EA0C; /*0x48c2cb*/
        LOBYTE(v26) = this == (ModemConnectionClass *)dword_A8EA0C; /*0x48c2d7*/
        (*(void (__thiscall **)(ModemConnectionClass *, __int16 *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)this->__pad_0 + 36))( /*0x48c2ea*/
          this,
          &v27,
          14,
          0,
          0,
          v26,
          0);
        return 1; /*0x48c2f9*/
      }
      v14 = (Terrain *)this->PlayerIndex; /*0x48c1a1*/
      v15 = 0; /*0x48c1a4*/
      if ( v14->Terrain_field_0x38 > 0 ) /*0x48c1ab*/
      {
        do /*0x48c1ae*/
        {
          TileType = Terrain::GetTileType(v14, v15); /*0x48c1ae*/
          if ( TileType ) /*0x48c1b5*/
          {
            v17 = *(_DWORD *)(TileType + 12); /*0x48c1b7*/
            if ( !*(_BYTE *)(v17 + 2) && *(_DWORD *)(v17 + 4) == *(_DWORD *)(a2 + 4) ) /*0x48c1c9*/
              goto LABEL_40; /*0x48c1c9*/
          }
          v14 = (Terrain *)this->PlayerIndex; /*0x48c1cf*/
        }
        while ( ++v15 < v14->Terrain_field_0x38 ); /*0x48c1ae*/
      }
      v18 = this->PlayerIndex; /*0x48c1d8*/
      if ( (*(_DWORD *)(v18 + 8) - *(_DWORD *)(v18 + 56) > 1 || *(_DWORD *)(a2 + 4) == this->PhoneNumber[11] + 1) /*0x48c216*/
        && ConnectionClass::allocPacketSlot((ModemConnectionClass *)v18, (const void *)a2, a3, 0, 0) )
      {
        v19 = this->PhoneNumber[11] + 1; /*0x48c23f*/
        ++this->PhoneNumber[8]; /*0x48c240*/
        v20 = *(_DWORD *)(a2 + 4); /*0x48c243*/
        if ( v20 == v19 ) /*0x48c248*/
        {
          while ( 1 ) /*0x48c24a*/
          {
            v21 = (Terrain *)this->PlayerIndex; /*0x48c24a*/
            this->PhoneNumber[11] = v20; /*0x48c24d*/
            v22 = 0; /*0x48c250*/
            if ( v21->Terrain_field_0x38 <= 0 ) /*0x48c257*/
              break; /*0x48c257*/
            while ( 1 ) /*0x48c25a*/
            {
              v23 = Terrain::GetTileType(v21, v22); /*0x48c25a*/
              if ( v23 ) /*0x48c261*/
              {
                v24 = *(_DWORD *)(v23 + 12); /*0x48c263*/
                if ( !*(_BYTE *)(v24 + 2) && *(_DWORD *)(v24 + 4) == this->PhoneNumber[11] + 1 ) /*0x48c276*/
                  break; /*0x48c276*/
              }
              v21 = (Terrain *)this->PlayerIndex; /*0x48c278*/
              if ( ++v22 >= v21->Terrain_field_0x38 ) /*0x48c27f*/
                goto LABEL_40; /*0x48c27f*/
            }
            v20 = *(_DWORD *)(v24 + 4); /*0x48c283*/
          }
        }
        goto LABEL_40; /*0x48c257*/
      }
    }
    Debug::Log(); /*0x48c301*/
    return 0; /*0x48c309*/
  }
  Debug::Log(); /*0x48c079*/
  v6 = this->PlayerIndex; /*0x48c07e*/
  v7 = 0; /*0x48c084*/
  if ( *(int *)(v6 + 40) > 0 ) /*0x48c08b*/
  {
    while ( 1 ) /*0x48c08e*/
    {
      TileIndex = (_DWORD *)Terrain::GetTileIndex((Terrain *)v6, v7); /*0x48c08e*/
      if ( TileIndex ) /*0x48c095*/
      {
        v9 = TileIndex[5]; /*0x48c097*/
        if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v9 + 4) && !*(_BYTE *)(v9 + 2) ) /*0x48c0a2*/
          break; /*0x48c0a2*/
      }
      v6 = this->PlayerIndex; /*0x48c0a9*/
      if ( ++v7 >= *(_DWORD *)(v6 + 40) ) /*0x48c0b0*/
        return 1; /*0x48c0be*/
    }
    *TileIndex |= 2u; /*0x48c0c1*/
  }
  return 1; /*0x48c059*/
}



// ==== 0x0048C320  ConnectionClass::processTileUpdate  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::processTileUpdate(ModemConnectionClass *this, void *a2, signed int *a3)
{
  int v4; // esi
  Terrain *PlayerIndex; // ecx
  int TileType; // eax
  int v7; // ecx
  char v8; // dl
  int v10; // edx
  bool v11; // zf

  v4 = 0; /*0x48c326*/
  PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c328*/
  if ( PlayerIndex->Terrain_field_0x38 <= 0 ) /*0x48c330*/
    return 0; /*0x48c36a*/
  while ( 1 ) /*0x48c333*/
  {
    TileType = Terrain::GetTileType(PlayerIndex, v4); /*0x48c333*/
    if ( !TileType || (*(_BYTE *)TileType & 2) != 0 ) /*0x48c33f*/
      goto LABEL_7; /*0x48c33f*/
    v7 = *(_DWORD *)(TileType + 12); /*0x48c341*/
    v8 = *(_BYTE *)(v7 + 2); /*0x48c344*/
    if ( !v8 && *(_DWORD *)(v7 + 4) == this->PhoneNumber[12] + 1 ) /*0x48c354*/
      break; /*0x48c354*/
    if ( v8 == 1 ) /*0x48c359*/
      goto LABEL_10; /*0x48c359*/
LABEL_7:
    PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c35b*/
    if ( ++v4 >= PlayerIndex->Terrain_field_0x38 ) /*0x48c362*/
      return 0; /*0x48c362*/
  }
  this->PhoneNumber[12] = *(_DWORD *)(v7 + 4); /*0x48c370*/
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
BOOL __thiscall COMObject::IsValid(ConnectionClass *this)
{
  return (*(int (__thiscall **)(ConnectionClass *))(*(_DWORD *)this->__pad_0 + 28))(this) /*0x48c3cc*/
      && (*(int (__thiscall **)(ConnectionClass *))(*(_DWORD *)this->__pad_0 + 32))(this);
}



// ==== 0x0048C3E0  ConnectionClass::serviceSendQueue  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::serviceSendQueue(ModemConnectionClass *this)
{
  int v2; // esi
  int PlayerIndex; // ecx
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
  PlayerIndex = this->PlayerIndex; /*0x48c3f3*/
  if ( *(int *)(PlayerIndex + 40) > 0 ) /*0x48c3fb*/
  {
    do /*0x48c45f*/
    {
      TileIndex = Terrain::GetTileIndex((Terrain *)PlayerIndex, v2); /*0x48c3fe*/
      v5 = TileIndex; /*0x48c403*/
      if ( (*(_BYTE *)TileIndex & 2) != 0 ) /*0x48c408*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(TileIndex + 20) + 2) ) /*0x48c40d*/
        {
          v6 = dword_887340; /*0x48c419*/
          if ( dword_887338 != -1 ) /*0x48c422*/
            v6 += Timer::GetTicks() - dword_887338; /*0x48c434*/
          ConnectionClass::initQueue((ConnectionClass *)this->PlayerIndex, v6 - *(_DWORD *)(v5 + 4)); /*0x48c43f*/
        }
        PacketQueue::ExtractEntry((PacketQueue *)this->PlayerIndex, 0, 0, v2--, 0, 0, 0); /*0x48c452*/
      }
      PlayerIndex = this->PlayerIndex; /*0x48c458*/
      ++v2; /*0x48c45b*/
    }
    while ( v2 < *(_DWORD *)(PlayerIndex + 40) ); /*0x48c45f*/
  }
  v7 = 0; /*0x48c464*/
  v22 = *(_DWORD *)(this->PlayerIndex + 40); /*0x48c46b*/
  if ( v22 <= 0 ) /*0x48c46f*/
    return 1; /*0x48c46f*/
  do /*0x48c552*/
  {
    v8 = Terrain::GetTileIndex((Terrain *)this->PlayerIndex, v7); /*0x48c47e*/
    if ( (*(_BYTE *)v8 & 2) == 0 ) /*0x48c483*/
    {
      v9 = dword_887340; /*0x48c48e*/
      if ( dword_887338 != -1 ) /*0x48c497*/
        v9 += Timer::GetTicks() - dword_887338; /*0x48c4a9*/
      v10 = *(_DWORD *)(v8 + 8); /*0x48c4ab*/
      if ( (unsigned int)(v9 - v10) > this->PhoneNumber[4] ) /*0x48c4b7*/
      {
        v11 = dword_A8EA0C; /*0x48c4bd*/
        LOWORD(v10) = *(_WORD *)(v8 + 32); /*0x48c4c3*/
        LOBYTE(v11) = this == (ModemConnectionClass *)dword_A8EA0C; /*0x48c4cb*/
        (*(void (__thiscall **)(ModemConnectionClass *, _DWORD, _DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)this->__pad_0 /*0x48c4e2*/
                                                                                                 + 36))(
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
          ++*(_DWORD *)this->Active; /*0x48c503*/
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
        v16 = this->PhoneNumber[5]; /*0x48c50d*/
        if ( v16 != -1 && v15 > v16 ) /*0x48c519*/
        {
          v17 = *(_DWORD *)v8; /*0x48c51b*/
          v21 = 1; /*0x48c51d*/
          LOBYTE(v17) = *(_DWORD *)v8 | 4; /*0x48c525*/
          *(_DWORD *)v8 = v17; /*0x48c527*/
        }
        v18 = this->PhoneNumber[6]; /*0x48c529*/
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
int ConnectionClass::StubReturnFalse(ConnectionClass *this)
{
  return 0; /*0x48c592*/
}



// ==== 0x0048C5A0  ConnectionClass::connect  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::connect(ModemConnectionClass *this)
{
  int v2; // esi
  Terrain *PlayerIndex; // ecx
  int TileType; // eax
  int v5; // eax

  v2 = 0; /*0x48c5a4*/
  PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c5a6*/
  if ( PlayerIndex->Terrain_field_0x38 > 0 ) /*0x48c5ae*/
  {
    do /*0x48c5e7*/
    {
      TileType = Terrain::GetTileType(PlayerIndex, v2); /*0x48c5b1*/
      if ( (*(_BYTE *)TileType & 2) != 0 ) /*0x48c5b9*/
      {
        v5 = *(_DWORD *)(TileType + 12); /*0x48c5bb*/
        if ( *(_BYTE *)(v5 + 2) == 1 || *(_DWORD *)(v5 + 4) < this->PhoneNumber[11] ) /*0x48c5cc*/
          PacketQueue::ReleaseEntry((PacketQueue *)this->PlayerIndex, 0, 0, v2--, 0, 0); /*0x48c5da*/
      }
      PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c5e0*/
      ++v2; /*0x48c5e3*/
    }
    while ( v2 < PlayerIndex->Terrain_field_0x38 ); /*0x48c5e7*/
  }
  return 1; /*0x48c5e9*/
}



// ==== 0x0048C650  ConnectionClass::QueryInterface  this=ConnectionClass  sig=csp ====
_DWORD *__thiscall ConnectionClass::QueryInterface(ConnectionClass *this, char a2)
{
  void *v3; // eax
  void (__thiscall ***PlayerIndex)(_DWORD, int); // ecx

  v3 = (void *)this->Active; /*0x48c653*/
  *(_DWORD *)this->__pad_0 = &ConnectionClass::`vftable'; /*0x48c656*/
  __3_YAXPAX_Z(v3); /*0x48c65d*/
  PlayerIndex = (void (__thiscall ***)(_DWORD, int))this->PlayerIndex; /*0x48c662*/
  if ( PlayerIndex ) /*0x48c66a*/
    (**PlayerIndex)(PlayerIndex, 1); /*0x48c670*/
  if ( (a2 & 1) != 0 ) /*0x48c677*/
    __3_YAXPAX_Z(this); /*0x48c67a*/
  return this->__pad_0; /*0x48c684*/
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
// positive sp value has been detected, the output may be wrong!
int MainGameFrame(ObjectClass *this)
{
  Network *v1; // edi
  int result; // eax
  int v3; // eax
  bool v4; // zf
  char *v5; // eax
  char *v6; // eax
  int *StringCSF; // eax
  char *v8; // eax
  Network *v9; // [esp-8h] [ebp-164h]
  ScenarioClass *v10; // [esp-4h] [ebp-160h]
  ObjectClass *v11; // [esp+0h] [ebp-15Ch]
  Main v12; // [esp+8h] [ebp-154h] BYREF
  Main v13; // [esp+Ch] [ebp-150h] BYREF
  char v14[112]; // [esp+7Ch] [ebp-E0h] BYREF
  char v15[112]; // [esp+ECh] [ebp-70h] BYREF

  result = *(_DWORD *)&stru_A8EB00.?[444]; /*0x48c8b0*/
  if ( !*(_DWORD *)&stru_A8EB00.?[444] ) /*0x48c8c0*/
    return result; /*0x48c8c0*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x48c8cc*/
  {
    result = (int)dword_A83D4C; /*0x48c8ce*/
    if ( dword_A83D4C->__pad_140[184] || dword_A83D4C->__pad_140[183] || dword_A83D4C->__pad_140[182] ) /*0x48c8ef*/
      goto LABEL_15; /*0x48c8f7*/
    if ( !g_GameLoopActive ) /*0x48c905*/
    {
      if ( dword_A83D4C->__pad_140[181] ) /*0x48c907*/
      {
        g_GameLoopActive = 1; /*0x48c911*/
        goto LABEL_9; /*0x48c911*/
      }
LABEL_15:
      *(_DWORD *)&stru_A8EB00.?[444] = 0; /*0x48c98a*/
      return result; /*0x48c997*/
    }
  }
LABEL_9:
  ScenarioClass::CleanupTemporary(v10); /*0x48c918*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x48c925*/
  while ( (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ) /*0x48c930*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x48c93f*/
  v3 = *(_DWORD *)&stru_A8EB00.?[444]; /*0x48c951*/
  v9 = v1; /*0x48c959*/
  if ( *(_DWORD *)&stru_A8EB00.?[444] ) /*0x48c95a*/
  {
    while ( 2 ) /*0x48c968*/
    {
      switch ( v3 ) /*0x48c968*/
      {
        case 1: /*0x48c968*/
          OpenGameUI(); /*0x48c9ba*/
          v3 = *(_DWORD *)&stru_A8EB00.?[444]; /*0x48c9bf*/
          v4 = *(_DWORD *)&stru_A8EB00.?[444] == 1; /*0x48c9c4*/
          goto LABEL_17; /*0x48c9c7*/
        case 2: /*0x48c968*/
          if ( g_MenuStateFlags ) /*0x48cb40*/
          {
LABEL_34:
            Network::AddFrameEvent(v9); /*0x48cb42*/
          }
          else if ( !dword_A83D4C->__pad_140[181] /*0x48cb7b*/
                 && !dword_A83D4C->__pad_140[183]
                 && !dword_A83D4C->__pad_140[184]
                 && !dword_A83D4C->__pad_140[182] )
          {
            StringCSF = (int *)GetStringCSF(aTxtSurrender, 0, g_Str_File_Conquer_CPP, 487); /*0x48cb9a*/
            if ( ShowConfirmDialog(StringCSF) ) /*0x48cba1*/
            {
              v8 = EventClass::AddEvent(v15, (int)dword_A83D4C->Object_field_0x30, 8u); /*0x48cbc0*/
              if ( (int)stru_A80220.lineTrailer < 128 ) /*0x48cbcf*/
              {
                qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v8, 0x6Fu); /*0x48cbeb*/
                dword_A83A54[dword_A802D0] = timeGetTime(); /*0x48cbfc*/
                dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x48cc13*/
                ++stru_A80220.lineTrailer; /*0x48cc19*/
              }
              Network::AddFrameEvent(v9); /*0x48cc1e*/
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
              v5 = EventClass::AddEvent((char *)&v13, (int)dword_A83D4C->Object_field_0x30, 8u); /*0x48ca43*/
              if ( (int)stru_A80220.lineTrailer < 128 ) /*0x48ca52*/
              {
                qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v5, 0x6Fu); /*0x48ca6e*/
                dword_A83A54[dword_A802D0] = timeGetTime(); /*0x48ca7f*/
                dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x48ca96*/
                ++stru_A80220.lineTrailer; /*0x48ca9c*/
              }
              g_GameLoopActive = 0; /*0x48caa1*/
              goto LABEL_34; /*0x48caa8*/
            case 4: /*0x48ca2d*/
              v6 = EventClass::AddEvent(v14, (int)dword_A83D4C->Object_field_0x30, 8u); /*0x48cac4*/
              if ( (int)stru_A80220.lineTrailer < 128 ) /*0x48cad3*/
              {
                qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v6, 0x6Fu); /*0x48caef*/
                dword_A83A54[dword_A802D0] = timeGetTime(); /*0x48cb00*/
                dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x48cb17*/
                ++stru_A80220.lineTrailer; /*0x48cb1d*/
              }
              g_GameLoopActive = 0; /*0x48cb22*/
              break; /*0x48cb29*/
            case 5: /*0x48ca2d*/
              LOBYTE(FootClass_Array.?[2]) = 1; /*0x48cb2e*/
              break; /*0x48cb35*/
            default:
              goto LABEL_44;
          }
          goto LABEL_44;
        case 4: /*0x48c968*/
          ShowHotkeyOptionsDialog(); /*0x48ca08*/
          v3 = 5; /*0x48ca0d*/
          *(_DWORD *)&stru_A8EB00.?[444] = 5; /*0x48ca12*/
          continue; /*0x48ca17*/
        case 5: /*0x48c968*/
          Main::CreateDialog(&v12); /*0x48c9cd*/
          v3 = *(_DWORD *)&stru_A8EB00.?[444]; /*0x48c9d2*/
          if ( *(_DWORD *)&stru_A8EB00.?[444] != 5 ) /*0x48c9da*/
            goto LABEL_18; /*0x48c9da*/
          v3 = 1; /*0x48c9dc*/
          *(_DWORD *)&stru_A8EB00.?[444] = 1; /*0x48c9e1*/
          continue; /*0x48c9e6*/
        case 6: /*0x48c968*/
          ShowAudioSettingsDialog(); /*0x48c9ef*/
          v3 = 5; /*0x48c9f4*/
          *(_DWORD *)&stru_A8EB00.?[444] = 5; /*0x48c9f9*/
          continue; /*0x48c9fe*/
        case 7: /*0x48c968*/
          ShowWOLLobbyDialog(); /*0x48cc2c*/
          goto LABEL_44; /*0x48cc2c*/
        case 8: /*0x48c968*/
          ShowDiplomacyDialog((ObjectClass *)v9); /*0x48c99d*/
          v3 = *(_DWORD *)&stru_A8EB00.?[444]; /*0x48c9a2*/
          v4 = *(_DWORD *)&stru_A8EB00.?[444] == 8; /*0x48c9a7*/
LABEL_17:
          if ( !v4 ) /*0x48c9aa*/
            goto LABEL_18; /*0x48c9aa*/
          goto LABEL_44; /*0x48c9aa*/
        case 9: /*0x48c968*/
          ScenarioClass::ShowMissionBriefing((ScenarioClass *)dword_A8B230); /*0x48c975*/
          v3 = *(_DWORD *)&stru_A8EB00.?[444]; /*0x48c97a*/
          if ( *(_DWORD *)&stru_A8EB00.?[444] != 9 ) /*0x48c982*/
            goto LABEL_18; /*0x48c982*/
LABEL_44:
          *(_DWORD *)&stru_A8EB00.?[444] = 0; /*0x48cc31*/
          goto LABEL_45; /*0x48cc31*/
        default:
LABEL_18:
          if ( v3 ) /*0x48c9b2*/
            continue; /*0x48c9b2*/
          goto LABEL_45; /*0x48c9b2*/
      }
    }
  }
LABEL_45:
  UpdateWindow(g_hWnd); /*0x48cc37*/
  if ( BYTE2(dword_A8B230[381].vtable3) ) /*0x48cc4b*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x48cc5d*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 24))(stru_887598.lineTrailer); /*0x48cc68*/
  WTFMode::Init((WTFMode *)&dword_A8B238); /*0x48cc70*/
  return PostFrameCleanup(v11); /*0x48c990*/
}



// ==== 0x0048CCC0  ObjectClass::MainGame  this=ObjectClass  sig=csp ====
char MainGame(ObjectClass *this)
{
  int inited; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v3; // eax
  char v4; // cl
  TechnoTypeClass *v5; // ecx
  int v6; // eax
  int v7; // eax
  ObjectClass *v9; // [esp+0h] [ebp-1C30h] BYREF
  CHAR MultiByteStr[5120]; // [esp+8h] [ebp-1C28h] BYREF
  CHAR v11[2048]; // [esp+1408h] [ebp-828h] BYREF
  MSGBOXPARAMSA mbp; // [esp+1C08h] [ebp-28h] BYREF
  int savedregs; // [esp+1C30h] [ebp+0h] BYREF

  inited = ((int (__stdcall *)())InitGame)(); /*0x48cccf*/
  if ( inited ) /*0x48ccd8*/
  {
    if ( inited < 0 ) /*0x48ccde*/
    {
      StringCSF = GetStringCSF(aTxtInitgameFai, 0, g_Str_File_Conquer_CPP, 566); /*0x48cd05*/
      WideCharToMultiByte(0, 0, StringCSF, -1, MultiByteStr, 5120, 0, 0); /*0x48cd13*/
      v3 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, g_Str_File_Conquer_CPP, 567); /*0x48cd36*/
      WideCharToMultiByte(0, 0, v3, -1, v11, 2048, 0, 0); /*0x48cd3e*/
      mbp.hInstance = g_hInstance; /*0x48cd4b*/
      mbp.hwndOwner = g_hWnd; /*0x48cd4e*/
      mbp.cbSize = 40; /*0x48cd61*/
      mbp.lpszText = MultiByteStr; /*0x48cd68*/
      mbp.lpszCaption = v11; /*0x48cd6b*/
      mbp.dwStyle = 327696; /*0x48cd6e*/
      memset(&mbp.lpszIcon, 0, 12); /*0x48cd75*/
      mbp.dwLanguageId = 1024; /*0x48cd7e*/
      LOBYTE(inited) = MessageBoxIndirectA(&mbp); /*0x48cd85*/
    }
    return inited; /*0x48cd90*/
  }
  g_ExceptionReturnStack = (int)&v9; /*0x48cd91*/
  g_ExceptionReturnFrame = (int)&savedregs; /*0x48cd97*/
  g_ExceptionReturnAddr = (int)&loc_48CDA8; /*0x48cda3*/
  Debug::Log(); /*0x48cdb4*/
  Debug::Log(); /*0x48cdc5*/
  LOBYTE(inited) = MenuSelect(v9); /*0x48cdd3*/
  while ( (_BYTE)inited ) /*0x48cdda*/
  {
    dword_A8E7AC = 0; /*0x48cdf0*/
    g_MenuReturnState = 1; /*0x48cdf6*/
    FadePalette(&FileSystem_TEMPERAT_PAL, 15, 0); /*0x48cdfd*/
    Timer::PumpMessages((Timer *)dword_87F770); /*0x48ce08*/
    if ( (dword_A8D5F8 & 2) != 0 ) /*0x48ce14*/
    {
      (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x48ce1e*/
      dword_ABCDFC = 0; /*0x48ce21*/
      dword_ABCE00 = 0; /*0x48ce27*/
    }
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x48ce33*/
    {
      InitSkirmishSettings(); /*0x48ce35*/
      byte_A8F900 = 0; /*0x48ce3a*/
      dword_B0BDB8 = 0; /*0x48ce40*/
      byte_B0BD78 = 0; /*0x48ce46*/
    }
    if ( dword_887368 ) /*0x48ce54*/
      Tooltip::Enable(dword_887368, byte_A8EB80); /*0x48ce5d*/
    v4 = BYTE2(dword_A8B230[381].vtable3); /*0x48ce67*/
    dword_A8EDA0 = 0; /*0x48ce6d*/
    byte_A8ED9C = v4; /*0x48ce73*/
    g_GameLoopActive = 1; /*0x48ce7e*/
    WTFMode::Init(&dword_A8B238); /*0x48ce85*/
    do /*0x48cea8*/
    {
      if ( (unsigned __int8)GameFrameLoop(v9) && GameFrameCheck(v9) ) /*0x48ce93*/
        break; /*0x48ce9a*/
      MainGameFrame(v9); /*0x48ce9c*/
    }
    while ( !GameFrameCheck(v9) ); /*0x48cea8*/
    InitLoadingScreenResources(); /*0x48ceaa*/
    WTFMode::Shutdown(&dword_A8B238); /*0x48ceb4*/
    byte_A8ED5C = 0; /*0x48cebf*/
    byte_A8E378 = 0; /*0x48cec7*/
    Debug::Log(); /*0x48cee2*/
    DumpNetworkStats(v9); /*0x48ceea*/
    if ( !g_Is16BitMode ) /*0x48cef5*/
      FadePalette(&word_884E80, 30, 0); /*0x48cf02*/
    LOBYTE(v5) = 1; /*0x48cf07*/
    ScreenSaver::Process(v5, v9); /*0x48cf09*/
    if ( (dword_A8D5F8 & 3) != 0 ) /*0x48cf15*/
      CCFileClass::Reset(&dword_A8D58C); /*0x48cf1c*/
    v6 = *(_DWORD *)&dword_A8B238; /*0x48cf21*/
    if ( *(_DWORD *)&dword_A8B238 == 2 || *(_DWORD *)&dword_A8B238 == 1 ) /*0x48cf2e*/
    {
      if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf4c*/
        goto LABEL_27; /*0x48cf4c*/
      CleanupCampaignResources(); /*0x48cf4e*/
    }
    else
    {
      if ( *(_DWORD *)&dword_A8B238 != 3 ) /*0x48cf33*/
        goto LABEL_28; /*0x48cf33*/
      if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf3c*/
        goto LABEL_34; /*0x48cf3c*/
      Network::ShutdownInterface((Network *)v9); /*0x48cf3e*/
    }
    v6 = *(_DWORD *)&dword_A8B238; /*0x48cf53*/
LABEL_27:
    if ( v6 == 3 ) /*0x48cf5b*/
      goto LABEL_31; /*0x48cf5b*/
LABEL_28:
    if ( v6 == 4 || v6 == 2 || v6 == 1 ) /*0x48cf69*/
    {
LABEL_31:
      if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf72*/
        goto LABEL_34; /*0x48cf72*/
      ScenarioClass::SaveMultiplayerSettings((char *)&dword_A8B238); /*0x48cf79*/
    }
    if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf85*/
    {
LABEL_34:
      v7 = dword_A8D5F8; /*0x48cf87*/
      LOBYTE(v7) = dword_A8D5F8 & 0xFD; /*0x48cf92*/
      *(_DWORD *)&dword_A8B238 = 0; /*0x48cf94*/
      dword_A8D5F8 = v7; /*0x48cf9a*/
      (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 16))(dword_887640); /*0x48cfa1*/
    }
    LOBYTE(inited) = MenuSelect(v9); /*0x48cfa4*/
  }
  if ( dword_887640 ) /*0x48cfbf*/
    LOBYTE(inited) = (*(char (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 20))(dword_887640); /*0x48cfc3*/
  return inited; /*0x48cd8b*/
}



// ==== 0x0048D080  Event::Dispatch  this=Event  sig=csp ====
int Event::Dispatch()
{
  int result; // eax
  _BYTE v1[4]; // [esp+10h] [ebp-100h] BYREF
  _DWORD v2[6]; // [esp+14h] [ebp-FCh] BYREF
  _BYTE v3[228]; // [esp+2Ch] [ebp-E4h]

  UpdateAudioVideo(); /*0x48d08c*/
  if ( g_AsyncIOState > 0 && *(_DWORD *)AsyncIO_Instance ) /*0x48d09f*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)AsyncIO_Instance + 8))(*(_DWORD *)AsyncIO_Instance); /*0x48d0a7*/
  result = dword_A8B238[0]; /*0x48d0aa*/
  if ( dword_A8B238[0] == 3 || dword_A8B238[0] == 4 ) /*0x48d0b7*/
  {
    Network::Dispatch(); /*0x48d0b9*/
    result = dword_A8B238[0]; /*0x48d0be*/
  }
  if ( result == 1 ) /*0x48d0c6*/
  {
    if ( (dword_A8DAB8 & 1) == 0 ) /*0x48d0da*/
      return result; /*0x48d0da*/
    goto LABEL_11; /*0x48d0da*/
  }
  if ( result == 2 ) /*0x48d0cb*/
  {
LABEL_11:
    Stream::ReadPacket((int)&unk_A8EA70); /*0x48d0e0*/
    if ( dword_A8B230[13720] && ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v2, (int)v1) > 0 ) /*0x48d10f*/
    {
      do /*0x48d15f*/
      {
        if ( v2[0] == 108 && v3[0] != dword_A8DB30 ) /*0x48d129*/
          Network::UpdateLatencyDisplay((int)dword_AC4F58, 1, (double)*(int *)&v3[1], NAN); /*0x48d144*/
      }
      while ( ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v2, (int)v1) > 0 ); /*0x48d15f*/
    }
    result = dword_A8B238[0]; /*0x48d161*/
  }
  if ( result == 4 ) /*0x48d169*/
  {
    LOBYTE(result) = byte_B77DC2; /*0x48d16b*/
    if ( !byte_B77DC2 ) /*0x48d172*/
    {
      result = time(0); /*0x48d176*/
      if ( result != dword_89E9B0 ) /*0x48d186*/
      {
        if ( ppv && !dword_B77DCC ) /*0x48d199*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 12))(ppv); /*0x48d19e*/
        if ( g_UIPointerTable ) /*0x48d1a8*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)g_UIPointerTable + 28))(g_UIPointerTable); /*0x48d1ad*/
        result = time(0); /*0x48d1b2*/
        dword_89E9B0 = result; /*0x48d1ba*/
      }
    }
  }
  return result; /*0x48d1bf*/
}



// ==== 0x0048D1D0  Event_Dispatch::Return0  this=Event_Dispatch  sig=ida-proto ====
char Event_Dispatch_Return0()
{
  Event::Dispatch(); /*0x48d1d0*/
  return 0; /*0x48d1d7*/
}



// ==== 0x0048D1E0  Network::Dispatch  this=Network  sig=csp ====
char Network::Dispatch(Network *this)
{
  int v1; // esi
  int i; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // esi
  bool v7; // zf
  char **v8; // edi
  char *v9; // ebx
  char *v10; // ebp
  char *v11; // eax
  int v12; // edi
  int v13; // ecx
  unsigned __int16 v14; // ax
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  int v18; // eax
  int v19; // esi
  int v20; // ecx
  int v21; // esi
  char *Class; // eax
  int v23; // ebx
  char *v24; // eax
  char **v25; // esi
  char *v26; // edi
  char *v27; // ebp
  char *v28; // eax
  int v29; // esi
  __int16 v30; // si
  int j; // esi
  int ConnectionSpeed; // edi
  int PlayerByID; // eax
  char *v34; // eax
  char *v35; // esi
  int v36; // eax
  int PlayerColorScheme; // eax
  int v38; // esi
  char *v39; // eax
  int v41; // [esp+8h] [ebp-208h]
  int v42; // [esp+20h] [ebp-1F0h]
  unsigned __int16 *v43; // [esp+20h] [ebp-1F0h]
  _WORD *v44; // [esp+24h] [ebp-1ECh]
  int v45; // [esp+24h] [ebp-1ECh]
  int v46; // [esp+28h] [ebp-1E8h] BYREF
  int Ticks; // [esp+2Ch] [ebp-1E4h] BYREF
  int v48; // [esp+34h] [ebp-1DCh]
  char v49[8]; // [esp+38h] [ebp-1D8h] BYREF
  int v50; // [esp+40h] [ebp-1D0h]
  int v51[22]; // [esp+48h] [ebp-1C8h] BYREF
  __int16 v52; // [esp+A0h] [ebp-170h]
  char v53; // [esp+A2h] [ebp-16Eh]

  if ( (byte_89E950 & 1) == 0 ) /*0x48d1fc*/
  {
    v1 = dword_81D4E4; /*0x48d1fe*/
    byte_89E950 |= 1u; /*0x48d20d*/
    dword_89E920 = Timer::GetTicks(); /*0x48d218*/
    dword_89E928 = v1; /*0x48d21d*/
    atexit(nullsub_8); /*0x48d228*/
  }
  MessageLoop(); /*0x48d230*/
  Network::ReceiveLoop(&unk_A8E9C0); /*0x48d23a*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x48d24b*/
  {
    LOBYTE(i) = BYTE2(stru_A8D600.Network_field_0xC); /*0x48d251*/
    if ( BYTE2(stru_A8D600.Network_field_0xC) ) /*0x48d258*/
      return i; /*0x48d258*/
    v3 = dword_89E928; /*0x48d263*/
    if ( dword_89E920 != -1 ) /*0x48d26c*/
    {
      v4 = Timer::GetTicks() - dword_89E920; /*0x48d278*/
      if ( v4 >= v3 ) /*0x48d280*/
        goto LABEL_10; /*0x48d280*/
      v3 -= v4; /*0x48d282*/
    }
    if ( !v3 || byte_A8E2A4 ) /*0x48d28f*/
    {
LABEL_10:
      if ( dword_A8DA84 ) /*0x48d29c*/
      {
        MessageLoop(); /*0x48d2a2*/
        Network::ReceiveLoop(&unk_A8E9C0); /*0x48d2ac*/
        if ( !Network::GetQueueCount(&unk_A8E9C0) ) /*0x48d2b6*/
        {
          memset(v51, 0, sizeof(v51)); /*0x48d2cc*/
          v52 = 0; /*0x48d2ce*/
          v53 = 0; /*0x48d2d0*/
          v51[0] = 41; /*0x48d2d6*/
          CopyWideToChar(&v51[1], (char *)*dword_A8DA78, -1); /*0x48d2e6*/
          Network_Disconnect(); /*0x48d2eb*/
          Debug::Log(); /*0x48d2f5*/
          HIWORD(v5) = HIWORD(dword_A8DA84); /*0x48d2fa*/
          v6 = 1; /*0x48d304*/
          if ( dword_A8DA84 > 1 ) /*0x48d306*/
          {
            v44 = &MEMORY[0xA8E2B4]; /*0x48d30c*/
            do /*0x48d484*/
            {
              LOWORD(v5) = *v44; /*0x48d318*/
              v7 = *v44 == 0; /*0x48d31b*/
              v46 = v5; /*0x48d31e*/
              if ( !v7 ) /*0x48d322*/
              {
                ToWideStringChar((char *)dword_A8DA78[v6]); /*0x48d331*/
                Debug::Log(); /*0x48d33c*/
                Network::SendMessage(&unk_A8E9C0.Socket, (int)v51, 91, 0, dword_A8DA78[v6] + 40, v46, 0); /*0x48d366*/
                MessageLoop(); /*0x48d36b*/
                Network::ReceiveLoop(&unk_A8E9C0); /*0x48d375*/
                v42 = 0; /*0x48d37a*/
                v8 = (char **)dword_A8DA90; /*0x48d382*/
                while ( 1 ) /*0x48d38d*/
                {
                  v9 = (char *)dword_A8DA78[v6]; /*0x48d38d*/
                  v10 = ToWideStringChar(*v8); /*0x48d399*/
                  v11 = ToWideStringChar(v9); /*0x48d39b*/
                  if ( !_strcmpi(v10, v11) ) /*0x48d3a2*/
                    break; /*0x48d3a2*/
                  ++v8; /*0x48d3b2*/
                  ++v42; /*0x48d3bc*/
                  if ( (int)v8 >= (int)&dword_A8DAB0 ) /*0x48d3c0*/
                    goto LABEL_25; /*0x48d3c0*/
                }
                v12 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x48d3cc*/
                if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x48d3d5*/
                  v12 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x48d3e7*/
                if ( v12 - dword_A8E284[v42] > 2400 ) /*0x48d3fa*/
                {
                  ToWideStringChar((char *)dword_A8DA78[v6]); /*0x48d404*/
                  Debug::Log(); /*0x48d40f*/
                  v13 = dword_A8DA78[v6]; /*0x48d41d*/
                  v14 = *(_WORD *)(v13 + 131); /*0x48d420*/
                  if ( v14 != (_WORD)v46 && v14 >= 0x400u ) /*0x48d432*/
                  {
                    ToWideStringChar((char *)v13); /*0x48d434*/
                    Debug::Log(); /*0x48d43f*/
                    v15 = dword_A8DA78[v6]; /*0x48d44d*/
                    LOWORD(v16) = *(_WORD *)(v15 + 131); /*0x48d456*/
                    Network::SendMessage(&unk_A8E9C0.Socket, (int)v51, 91, 0, v15 + 40, v16, 0); /*0x48d46c*/
                  }
                }
              }
LABEL_25:
              HIWORD(v5) = HIWORD(dword_A8DA84); /*0x48d471*/
              ++v6; /*0x48d47a*/
              ++v44; /*0x48d480*/
            }
            while ( v6 < dword_A8DA84 ); /*0x48d484*/
          }
          Ticks = Timer::GetTicks(); /*0x48d49d*/
          v48 = 120; /*0x48d4a1*/
          while ( Network::GetQueueCount(&unk_A8E9C0) > 0 ) /*0x48d4b0*/
          {
            v17 = v48; /*0x48d4b6*/
            if ( Ticks != -1 ) /*0x48d4bd*/
            {
              v18 = Timer::GetTicks() - Ticks; /*0x48d4c8*/
              if ( v18 >= v48 ) /*0x48d4ce*/
                break; /*0x48d4ce*/
              v17 = v48 - v18; /*0x48d4d0*/
            }
            if ( v17 <= 0 ) /*0x48d4d4*/
              break; /*0x48d4d4*/
            MessageLoop(); /*0x48d4d6*/
            Network::ReceiveLoop(&unk_A8E9C0); /*0x48d4e0*/
          }
          v19 = dword_81D4E4; /*0x48d4f3*/
          dword_89E920 = Timer::GetTicks(); /*0x48d502*/
          dword_89E924 = v50; /*0x48d510*/
          dword_89E928 = v19; /*0x48d515*/
          byte_A8E2A4 = 0; /*0x48d51b*/
          Connection::Close((Connection *)&unk_A8E9C0); /*0x48d522*/
        }
      }
    }
  }
  LOBYTE(i) = BYTE2(stru_A8D600.Network_field_0xC); /*0x48d527*/
  if ( !BYTE2(stru_A8D600.Network_field_0xC) ) /*0x48d52e*/
  {
    for ( i = Network::Send( /*0x48d554*/
                (Network *)&unk_A8E9C0,
                (int)&stru_A8D600.__pad_34[4],
                (int)&unk_A8D800,
                (int)dword_A8D804,
                (int)&word_A8D810);
          i;
          i = Network::Send(
                (Network *)&unk_A8E9C0,
                (int)&stru_A8D600.__pad_34[4],
                (int)&unk_A8D800,
                (int)dword_A8D804,
                (int)&word_A8D810) )
    {
      if ( word_A8D810 == 0xAA04 ) /*0x48d563*/
      {
        v20 = *(_DWORD *)&stru_A8D600.__pad_34[4]; /*0x48d569*/
        switch ( *(_DWORD *)&stru_A8D600.__pad_34[4] ) /*0x48d583*/
        {
          case 0xA: /*0x48d583*/
            for ( j = 0; j < Network::GetSendCount(&unk_A8E9C0); ++j ) /*0x48d828*/
            {
              ConnectionSpeed = Network::GetConnectionSpeed(&unk_A8E9C0, j); /*0x48d839*/
              PlayerByID = Network::FindPlayerByID((Network *)&unk_A8E9C0, ConnectionSpeed); /*0x48d841*/
              if ( (unsigned __int8)GUID::Compare(dword_A8D804, PlayerByID) ) /*0x48d84c*/
                HandleNetworkPlayerDisconnect(ConnectionSpeed, 0); /*0x48d859*/
            }
            break; /*0x48d86b*/
          case 0xC: /*0x48d583*/
            if ( (!BYTE1(stru_A8D600.Network_field_0xC) /*0x48d925*/
               || *(_DWORD *)&stru_A8D600.__pad_87[197] == WideString::Hash((wchar_t *)&stru_A8D600.Network_field_0x10))
              && (!byte_A8DBA0
               || ((unsigned __int8)Factory::GetLinkedIndex(
                                      (Factory *)&stru_B052C0.__pad_0[16],
                                      *(_DWORD *)(*dword_A8DA78 + 111))
                 & stru_A8D600.__pad_64[3]) != 0) )
            {
              v35 = CharToWideString(&stru_A8D600.__pad_34[8]); /*0x48d935*/
              LOWORD(v36) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x48d94a*/
              v41 = v36; /*0x48d955*/
              PlayerColorScheme = SessionClass::GetPlayerColorScheme(*(unsigned int *)&stru_A8D600.__pad_87[193]); /*0x48d961*/
              MessageListClass::AddMessage( /*0x48d979*/
                (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                (wchar_t *)v35,
                *(int *)&stru_A8D600.__pad_87[193],
                (wchar_t *)&stru_A8D600.__pad_64[4],
                PlayerColorScheme,
                16454,
                v41,
                0);
              PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x48d995*/
              MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x48d9a1*/
              wcscpy(MEMORY[0xA8D112], (const wchar_t *)&stru_A8D600.__pad_64[4]); /*0x48d9b0*/
            }
            break; /*0x48d9b8*/
          case 0xF: /*0x48d583*/
            Debug::Log(); /*0x48da4a*/
            v38 = 0; /*0x48da57*/
            if ( dword_A8DA84 > 0 ) /*0x48da5b*/
            {
              while ( 1 ) /*0x48da6e*/
              {
                if ( (unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[v38] + 40), (int)dword_A8D804) ) /*0x48da6e*/
                {
                  v39 = ToWideStringChar((char *)dword_A8DA78[v38]); /*0x48da85*/
                  if ( !_strcmpi(v39, &stru_A8D600.__pad_34[8]) ) /*0x48da8b*/
                    break; /*0x48da8b*/
                }
                if ( ++v38 >= dword_A8DA84 ) /*0x48da9f*/
                  goto LABEL_95; /*0x48da9f*/
              }
              Network::UpdateLatencyDisplay( /*0x48dabd*/
                (int)&stru_AC4B30.__pad_EC[828],
                v38,
                (double)*(int *)&stru_A8D600.__pad_64[3],
                NAN);
            }
            break; /*0x48dac2*/
          case 0x10: /*0x48d583*/
          case 0x13: /*0x48d583*/
            break;
          case 0x1C: /*0x48d583*/
            Network::syncGameState((Network *)&stru_A8D600.__pad_34[4]); /*0x48d594*/
            break; /*0x48d599*/
          case 0x1D: /*0x48d583*/
            if ( (!BYTE1(stru_A8D600.Network_field_0xC) /*0x48da2f*/
               || *(_DWORD *)&stru_A8D600.__pad_64[9] == WideString::Hash((wchar_t *)&stru_A8D600.Network_field_0x10))
              && (!byte_A8DBA0
               || ((unsigned __int8)Factory::GetLinkedIndex(
                                      (Factory *)&stru_B052C0.__pad_0[16],
                                      *(_DWORD *)(*dword_A8DA78 + 111))
                 & stru_A8D600.__pad_64[3]) != 0)
              && (dword_A8D110 && *(_DWORD *)&dword_A8B238 == 3 || MEMORY[0xA8D111] && *(_DWORD *)&dword_A8B238 == 4) )
            {
              LOBYTE(v20) = stru_A8D600.__pad_64[4]; /*0x48da35*/
              PlayTauntClass(v20); /*0x48da3b*/
            }
            break; /*0x48da40*/
          case 0x20: /*0x48d583*/
            PlacePlayerBeacon( /*0x48d7cb*/
              &g_VisibilitySystem,
              stru_A8D600.__pad_73[1],
              *(int *)&stru_A8D600.__pad_64[3],
              *(int *)&stru_A8D600.__pad_64[7],
              *(int *)stru_A8D600.Network_field_0x6F,
              stru_A8D600.__pad_73[0]);
            break; /*0x48d7d0*/
          case 0x21: /*0x48d583*/
            Network::SendBeaconDelete((Network *)&g_VisibilitySystem, stru_A8D600.__pad_73[1], stru_A8D600.__pad_73[0]); /*0x48d7ea*/
            break; /*0x48d7ef*/
          case 0x22: /*0x48d583*/
            Network::SendBeacon( /*0x48d810*/
              (Network *)&g_VisibilitySystem,
              (wchar_t *)&stru_A8D600.__pad_64[5],
              stru_A8D600.__pad_64[4],
              stru_A8D600.__pad_64[3],
              0);
            break; /*0x48d815*/
          case 0x27: /*0x48d583*/
            if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x48d5a4*/
            {
              if ( byte_A8DBA0 ) /*0x48d5b1*/
              {
                v21 = 0; /*0x48d5bc*/
                if ( Network::GetSendCount(&unk_A8E9C0) > 0 ) /*0x48d5c5*/
                {
                  while ( Network::GetConnectionSpeed(&unk_A8E9C0, v21) != *(_DWORD *)&stru_A8D600.__pad_64[3] ) /*0x48d5de*/
                  {
                    if ( ++v21 >= Network::GetSendCount(&unk_A8E9C0) ) /*0x48d5ed*/
                      goto LABEL_95; /*0x48d5ed*/
                  }
                  Class = (char *)Network::GetClass((Network *)&unk_A8E9C0, *(int *)&stru_A8D600.__pad_64[3]); /*0x48d5fa*/
                  ToWideStringChar(Class); /*0x48d601*/
                  Debug::Log(); /*0x48d60c*/
                  Network_Helper_646DF0(v21); /*0x48d616*/
                }
              }
            }
            break; /*0x48d61b*/
          case 0x29: /*0x48d583*/
            Debug::Log(); /*0x48d635*/
            v23 = 0; /*0x48d642*/
            if ( dword_A8DA84 > 0 ) /*0x48d646*/
            {
              v43 = &dword_A8E2B2; /*0x48d64c*/
              do /*0x48d788*/
              {
                if ( (unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[v23] + 40), (int)dword_A8D804) ) /*0x48d665*/
                {
                  v24 = ToWideStringChar((char *)dword_A8DA78[v23]); /*0x48d680*/
                  if ( !_strcmpi(v24, &stru_A8D600.__pad_34[8]) ) /*0x48d686*/
                  {
                    v45 = 0; /*0x48d696*/
                    v25 = (char **)dword_A8DA90; /*0x48d69a*/
                    while ( 1 ) /*0x48d6a6*/
                    {
                      v26 = (char *)dword_A8DA78[v23]; /*0x48d6a6*/
                      v27 = ToWideStringChar(*v25); /*0x48d6b0*/
                      v28 = ToWideStringChar(v26); /*0x48d6b2*/
                      if ( !_strcmpi(v27, v28) ) /*0x48d6b9*/
                        break; /*0x48d6b9*/
                      ++v25; /*0x48d6c9*/
                      ++v45; /*0x48d6d3*/
                      if ( (int)v25 >= (int)&dword_A8DAB0 ) /*0x48d6d7*/
                        goto LABEL_56; /*0x48d6d7*/
                    }
                    v29 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x48d6e0*/
                    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x48d6e9*/
                      v29 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x48d6fb*/
                    dword_A8E284[v45] = v29; /*0x48d701*/
LABEL_56:
                    v30 = *(_WORD *)dword_A8D804; /*0x48d708*/
                    if ( *(_WORD *)dword_A8D804 != *(_WORD *)(dword_A8DA78[v23] + 40) || *(_WORD *)dword_A8D804 != *v43 ) /*0x48d724*/
                    {
                      Debug::Log(); /*0x48d72b*/
                      if ( !v30 ) /*0x48d73f*/
                        v30 = 1234; /*0x48d741*/
                      *v43 = v30; /*0x48d746*/
                      Network::SetPort((Network *)(dword_A8DA78[v23] + 40), v30); /*0x48d756*/
                      Debug::Log(); /*0x48d76d*/
                    }
                  }
                }
                ++v23; /*0x48d77e*/
                ++v43; /*0x48d784*/
              }
              while ( v23 < dword_A8DA84 ); /*0x48d788*/
            }
            break; /*0x48d788*/
          case 0x2F: /*0x48d583*/
            Debug::Log(); /*0x48d87c*/
            if ( *(_DWORD *)&dword_A8B238 == 4 && *(_DWORD *)&stru_887598.isAliveFlag ) /*0x48d898*/
            {
              v34 = Network::processAcknowledgment((Network *)&stru_B052C0.__pad_0[16], &stru_A8D600.__pad_34[8]); /*0x48d8a8*/
              Network::GetAddress((Network *)v34, v49, (int)&Ticks, &v46); /*0x48d8be*/
              (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&stru_887598.isAliveFlag + 120))( /*0x48d8d5*/
                *(_DWORD *)&stru_887598.isAliveFlag,
                &Ticks,
                v46);
            }
            break; /*0x48d8d8*/
          default:
            SendNetworkPlayerOptions(&stru_A8D600.__pad_34[4], (int)dword_A8D804); /*0x48dace*/
            break; /*0x48dace*/
        }
      }
LABEL_95:
      MessageLoop(); /*0x48dad3*/
      Network::ReceiveLoop(&unk_A8E9C0); /*0x48dadd*/
    }
  }
  return i; /*0x48db08*/
}



// ==== 0x0048DB70  nullsub_8  this=-  sig=ida-proto ====
void __cdecl nullsub_8()
{
  ; /*0x48db70*/
}



// ==== 0x0048DB80  HouseClass::FindHouseIndexByName  this=HouseClass  sig=csp ====
int __thiscall HouseClass::FindHouseIndexByName(HouseClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x48db87*/
    return -1; /*0x48dbac*/
  v2 = 0; /*0x48db89*/
  v3 = (char **)&off_7E1B60; /*0x48db8b*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x48db9e*/
  {
    ++v3; /*0x48dba0*/
    ++v2; /*0x48dba3*/
    if ( (int)v3 >= (int)&dword_7E1B74 ) /*0x48dbaa*/
      return -1; /*0x48dbaa*/
  }
  return v2; /*0x48dbac*/
}



// ==== 0x0048DBE0  ScenarioClass::FindTerrainTypeIndex  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::FindTerrainTypeIndex(ScenarioClass *this)
{
  int v2; // edi
  char *v3; // esi

  v2 = 0; /*0x48dbe5*/
  v3 = "TEMPERATE"; /*0x48dbe7*/
  while ( _strcmpi((char *)this, v3) ) /*0x48dbf8*/
  {
    v3 += 112; /*0x48dbfa*/
    ++v2; /*0x48dbfd*/
    if ( (int)v3 >= (int)&dbl_7E1E18 ) /*0x48dc04*/
      return -1; /*0x48dc0c*/
  }
  return v2; /*0x48dc06*/
}



// ==== 0x0048DC90  MapClass::UnselectAll_ClearLimboLaunchers  this=MapClass  sig=csp ====
int MapClass::UnselectAll_ClearLimboLaunchers(MapClass *this)
{
  int result; // eax
  int v2; // esi
  int v3; // edx
  int *v4; // ecx

  while ( *(_DWORD *)&stru_A8EB00.?[228] ) /*0x48dc97*/
    (*(void (__thiscall **)(_DWORD))(***(_DWORD ***)&stru_A8EB00.?[216] + 336))(**(_DWORD **)&stru_A8EB00.?[216]); /*0x48dca2*/
  Selection::SetCurrent(0); /*0x48dcb3*/
  v4 = (int *)&g_VisibilitySystem; /*0x48dcb8*/
  result = g_VisibilitySystem.customSound_controller[4]; /*0x431060*/
  if ( result ) /*0x431065*/
  {
    v2 = 8; /*0x431069*/
    do /*0x431085*/
    {
      v3 = 3; /*0x431070*/
      do /*0x431082*/
      {
        result = *v4; /*0x431075*/
        if ( *v4 ) /*0x431075*/
          *(_BYTE *)(result + 12) &= ~2u; /*0x43107b*/
        ++v4; /*0x43107e*/
        --v3; /*0x431081*/
      }
      while ( v3 ); /*0x431082*/
      --v2; /*0x431084*/
    }
    while ( v2 ); /*0x431085*/
  }
  return result; /*0x431089*/
}



// ==== 0x0048DCD0  TechnoTypeClass::GetByTypeAndIndex  this=IUnknown  sig=csp ====
int __fastcall FactoryClass_LookupType(int a1, int a2)
{
  int result; // eax

  switch ( a1 ) /*0x48dce0*/
  {
    case 1: /*0x48dce0*/
    case 40: /*0x48dce0*/
      result = *((_DWORD *)dword_A83CE4 + a2); /*0x48dcec*/
      break; /*0x48dcef*/
    case 2: /*0x48dce0*/
    case 3: /*0x48dce0*/
      result = *((_DWORD *)dword_A8B21C + a2); /*0x48dd09*/
      break; /*0x48dd0c*/
    case 6: /*0x48dce0*/
    case 7: /*0x48dce0*/
      result = *((_DWORD *)dword_A83C6C + a2); /*0x48dcf6*/
      break; /*0x48dcf9*/
    case 15: /*0x48dce0*/
    case 16: /*0x48dce0*/
      result = *((_DWORD *)dword_A8E34C + a2); /*0x48dcff*/
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
int __thiscall INIClass::readSection(INIClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x48de77*/
    return 0; /*0x48de9c*/
  v2 = 0; /*0x48de79*/
  v3 = (char **)&off_7E523C; /*0x48de7b*/
  while ( _strcmpi(this->__pad_0, *v3) ) /*0x48de8e*/
  {
    ++v3; /*0x48de90*/
    ++v2; /*0x48de93*/
    if ( (int)v3 >= (int)&off_7E5288 ) /*0x48de9a*/
      return 0; /*0x48de9a*/
  }
  return v2; /*0x48de9c*/
}



// ==== 0x0048DEB0  ObjectClass::COMStub_48DEB0  this=ObjectClass  sig=csp ====
int __thiscall COMStub_48DEB0(ObjectClass *this)
{
  int v1; // eax

  v1 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)this); /*0x48deb3*/
  if ( v1 == -1 ) /*0x48debd*/
    return 0; /*0x48dec8*/
  else
    return 1 << v1; /*0x48dec5*/
}



// ==== 0x0048DED0  ObjectClass::nullsub_51  this=ObjectClass  sig=csp ====
void nullsub_51(ObjectClass *this)
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
int __thiscall LookupNameIndex(ObjectClass *this)
{
  int v2; // esi

  if ( !this ) /*0x48df36*/
    return -1; /*0x48df36*/
  if ( !_strcmpi(g_Str__none_, (char *)this) ) /*0x48df3e*/
    return -1; /*0x48df3e*/
  v2 = 0; /*0x48df4f*/
  if ( g_MissionQueueFrame.localVariables[583] <= 0 ) /*0x48df53*/
    return -1; /*0x48df75*/
  while ( _strcmpi((char *)this, *(char **)(g_MissionQueueFrame.localVariables[580] + 4 * v2)) ) /*0x48df69*/
  {
    if ( ++v2 >= g_MissionQueueFrame.localVariables[583] ) /*0x48df73*/
      return -1; /*0x48df73*/
  }
  return v2; /*0x48df75*/
}



// ==== 0x0048DF80  OverlayTypeClass::LookupByName  this=OverlayTypeClass  sig=csp ====
int __thiscall OverlayTypeClass::LookupByName(OverlayTypeClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !_strcmpi(g_Str__none_, (char *)this) || !this ) /*0x48df99*/
    return -1; /*0x48dfbe*/
  v2 = 0; /*0x48df9b*/
  v3 = off_81DA28; /*0x48df9d*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x48dfb0*/
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



// ==== 0x0048DFF0  ObjectTypeClass::loadTypeMember_48DFF0  this=ObjectTypeClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_48DFF0(ObjectTypeClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x48dff7*/
    return -1; /*0x48e01c*/
  v2 = 0; /*0x48dff9*/
  v3 = off_81DA58; /*0x48dffb*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x48e00e*/
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



// ==== 0x0048E050  AnimTypeClass::LookupByName  this=AnimTypeClass  sig=csp ====
int __thiscall AnimTypeClass::LookupByName(AnimTypeClass *this)
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x48e057*/
    return -1; /*0x48e07c*/
  v2 = 0; /*0x48e059*/
  v3 = off_81DA78; /*0x48e05b*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x48e06e*/
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
    return g_Str__none_; /*0x48e09d*/
  else
    return off_81DA78[a1]; /*0x48e095*/
}



// ==== 0x0048E0B0  ObjectClass::DumpNetworkStats  this=ObjectClass  sig=csp ====
FILE *DumpNetworkStats(ObjectClass *this)
{
  FILE *result; // eax
  FILE *v2; // esi
  int v3; // eax
  int i; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  char *v7; // eax

  result = *(FILE **)&dword_A8B238; /*0x48e0b1*/
  if ( *(_DWORD *)&dword_A8B238 == 4 )
  {
    result = fopen(aMpstatsTxt, Mode); /*0x48e0ca*/
    v2 = result; /*0x48e0cf*/
    if ( result )
    {
      fprintf(result, "Frames: %d\n", *(_DWORD *)&stru_A8EB00.?[416]);
      if ( *(_DWORD *)&g_MissionQueueFrame.waypoints[290] ) /*0x48e0f8*/
        v3 = *(_DWORD *)&g_MissionQueueFrame.waypoints[286] / *(_DWORD *)&g_MissionQueueFrame.waypoints[290]; /*0x48e101*/
      else
        v3 = 0; /*0x48e105*/
      fprintf(v2, "Average FPS: %d\n", v3);
      fprintf(v2, "Max MaxAhead: %d\n", dword_A8B568);
      fprintf(v2, "Latency setting: %d\n", dword_A8DB9C);
      fprintf(v2, "Game speed setting: %d\n", stru_A8EB00.ObjectTypeClass[24]);
      if ( *(_DWORD *)&stru_887598.isAliveFlag )
      {
        for ( i = 0;
              i < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 72))(*(_DWORD *)&stru_887598.isAliveFlag);
              ++i )
        {
          v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 76))( /*0x48e16a*/
                           *(_DWORD *)&stru_887598.isAliveFlag,
                           i);
          if ( v5 )
            fprintf(
              v2,
              "Local address: %d.%d.%d.%d\n",
              (unsigned __int8)*v5,
              BYTE1(*v5),
              (unsigned __int8)BYTE2(*v5),
              HIBYTE(*v5));
        }
      }
      v6 = &unk_A8B5C4; /*0x48e1ad*/
      do
      {
        if ( *((_BYTE *)v6 - 80) )
        {
          fprintf(v2, "\nName: %s\n", (const char *)v6 - 80);
          v7 = Network::FormatAddress((Network *)(v6 + 3), 0); /*0x48e1d4*/
          fprintf(v2, "Address: %s\n", v7);
          fprintf(v2, "Max avg round trip: %d\n", *v6);
          fprintf(v2, "Max round trip: %d\n", *(v6 - 4));
          fprintf(v2, "Resends: %d\n", *(v6 - 3));
          fprintf(v2, "Frame sync stalls: %d\n", v6[1]);
          fprintf(v2, "Command cound stalls: %d\n", v6[2]);
          fprintf(v2, "Lost: %d\n", *(v6 - 2));
          fprintf(v2, "Percent lost: %d\n", *(v6 - 1));
        }
        v6 += 26; /*0x48e253*/
      }
      while ( (int)v6 < (int)dword_A8B904 );
      return (FILE *)fclose(v2); /*0x48e263*/
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
_DWORD *__thiscall ControlClass::Construct(ControlClass *this, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  GadgetClass::Construct((ShpButtonClass *)this, a3, a4, a5, a6, a7, a8); /*0x48e543*/
  *((_DWORD *)this + 10) = 0; /*0x48e54c*/
  *((_DWORD *)this + 9) = a2; /*0x48e553*/
  *(_DWORD *)this->__pad_0 = &ControlClass::`vftable'; /*0x48e556*/
  return this->__pad_0; /*0x48e55e*/
}



// ==== 0x0048E570  ControlClass::CtorFromData  this=ControlClass  sig=csp ====
_DWORD *__thiscall ControlClass::CtorFromData(ControlClass *this, int a2)
{
  ControlClass::Constructor(this, a2); /*0x48e579*/
  *((_DWORD *)this + 9) = *(_DWORD *)(a2 + 36); /*0x48e581*/
  *((_DWORD *)this + 10) = *(_DWORD *)(a2 + 40); /*0x48e587*/
  *(_DWORD *)this->__pad_0 = &ControlClass::`vftable'; /*0x48e58a*/
  return this->__pad_0; /*0x48e592*/
}



// ==== 0x0048E5A0  ControlClass::Draw  this=ControlClass  sig=csp ====
int __thiscall CellClass::Draw(ControlClass *this, int a2, _DWORD *a3, int a4)
{
  int v5; // eax
  int v6; // ecx

  if ( a2 ) /*0x48e5af*/
  {
    v5 = *((_DWORD *)this + 9); /*0x48e5b1*/
    if ( v5 ) /*0x48e5b6*/
    {
      BYTE1(v5) |= 0x80u; /*0x48e5b8*/
      *a3 = v5; /*0x48e5be*/
      if ( (a2 & 0x40) != 0 && (*(_BYTE *)(this + 2) & 0x10) != 0 ) /*0x48e5c6*/
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
  v6 = *((_DWORD *)this + 10); /*0x48e5d5*/
  if ( v6 ) /*0x48e5da*/
    (*(void (__thiscall **)(int, int, _DWORD *, ControlClass *))(*(_DWORD *)v6 + 76))(v6, a2, a3, this); /*0x48e5e1*/
  return COMObject::ActivateThunk((GadgetClass *)this, a2, (int)a3, 0); /*0x48e5ef*/
}



// ==== 0x0048E600  ControlClass::SetMember10  this=ControlClass  sig=csp ====
int __thiscall MiniStub_48e600(_DWORD *this, int a2)
{
  *(this + 10) = a2; /*0x48e604*/
  return a2; /*0x48e607*/
}



// ==== 0x0048E610  ControlClass::GetMember09  this=ControlClass  sig=csp ====
int __thiscall COMObject::GetMember09(ControlClass *this)
{
  return *((_DWORD *)this + 9); /*0x48e613*/
}



// ==== 0x0048E620  ControlClass::DispatchClick  this=ControlClass  sig=csp ====
int __thiscall Control::DispatchClick(ControlClass *this, int a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 10); /*0x48e623*/
  if ( v3 ) /*0x48e628*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 108))(v3, 0); /*0x48e62e*/
  return GadgetClass::ClearState((ShpButtonClass *)this, a2); /*0x48e63d*/
}



// ==== 0x0048E650  GadgetClass::StubReturnFalse  this=GadgetClass  sig=csp ====
void __stdcall CheckListClass::StubReturnFalse(GadgetClass *this, int a2, int a3)
{
  ; /*0x48e650*/
}



// ==== 0x0048E660  ControlClass::QueryInterface  this=ControlClass  sig=csp ====
_DWORD *__thiscall ControlClass::QueryInterface(ControlClass *this, char a2)
{
  GadgetClass::Dtor((GadgetClass *)this); /*0x48e663*/
  if ( (a2 & 1) != 0 ) /*0x48e66d*/
    __3_YAXPAX_Z(this); /*0x48e670*/
  return this->__pad_0; /*0x48e67a*/
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
_DWORD *__thiscall ConvertClass::Construct(ConvertClass *this, int a2, int a3, int a4, int a5, char a6)
{
  int v7; // eax
  int v8; // edi
  bool v9; // cc
  CampaignClass *v10; // eax
  int v11; // eax
  __int16 v12; // cx
  int v13; // eax
  CampaignClass *v14; // eax
  CampaignClass *v15; // edi
  int v16; // eax
  _BYTE *v17; // edi
  int i; // ebp
  int j; // ebp
  int v20; // eax
  unsigned __int8 v21; // cl
  int v22; // eax
  int v23; // ecx
  CampaignClass *v24; // eax
  int v25; // edi
  int v26; // eax
  int v28; // [esp+Ch] [ebp-14h] BYREF
  Color v29; // [esp+10h] [ebp-10h] BYREF
  int v30; // [esp+14h] [ebp-Ch]
  int v31; // [esp+1Ah] [ebp-6h]

  *(_DWORD *)&this->ConvertClass_field_0x2[2] = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 112))(a4); /*0x48e753*/
  *(_DWORD *)&this->__pad_6[2] = 0; /*0x48e756*/
  *(_DWORD *)&this->__pad_6[6] = 0; /*0x48e759*/
  *(_DWORD *)&this->__pad_6[10] = 0; /*0x48e75c*/
  *(_DWORD *)&this->__pad_6[14] = 0; /*0x48e75f*/
  *(_DWORD *)&this->__pad_6[18] = 0; /*0x48e762*/
  *(_DWORD *)&this->__pad_6[22] = 0; /*0x48e765*/
  *(_DWORD *)&this->__pad_6[26] = 0; /*0x48e768*/
  *(_DWORD *)&this->__pad_6[30] = 0; /*0x48e76b*/
  *(_DWORD *)&this->__pad_6[34] = 0; /*0x48e76e*/
  *(_DWORD *)&this->__pad_6[38] = 0; /*0x48e771*/
  *(_DWORD *)&this->__pad_6[42] = 0; /*0x48e774*/
  *(_DWORD *)&this->__pad_6[46] = 0; /*0x48e777*/
  *(_DWORD *)&this->__pad_6[50] = 0; /*0x48e77a*/
  *(_DWORD *)&this->__pad_6[54] = 0; /*0x48e77d*/
  *(_DWORD *)&this->__pad_6[58] = 0; /*0x48e780*/
  *(_DWORD *)&this->__pad_6[62] = 0; /*0x48e783*/
  *(_DWORD *)&this->__pad_6[66] = 0; /*0x48e786*/
  *(_DWORD *)&this->__pad_6[70] = 0; /*0x48e789*/
  *(_DWORD *)&this->__pad_6[74] = 0; /*0x48e78c*/
  *(_DWORD *)&this->__pad_6[78] = 0; /*0x48e78f*/
  *(_DWORD *)&this->__pad_6[82] = 0; /*0x48e792*/
  *(_DWORD *)&this->__pad_6[86] = 0; /*0x48e795*/
  *(_DWORD *)&this->__pad_6[90] = 0; /*0x48e798*/
  *(_DWORD *)&this->__pad_6[94] = 0; /*0x48e79b*/
  *(_DWORD *)&this->__pad_6[98] = 0; /*0x48e79e*/
  *(_DWORD *)&this->__pad_6[102] = 0; /*0x48e7a1*/
  *(_DWORD *)&this->__pad_6[106] = 0; /*0x48e7a4*/
  *(_DWORD *)&this->__pad_6[110] = 0; /*0x48e7a7*/
  *(_DWORD *)&this->__pad_6[114] = 0; /*0x48e7aa*/
  *(_DWORD *)&this->__pad_6[118] = 0; /*0x48e7ad*/
  *(_DWORD *)&this->__pad_6[122] = 0; /*0x48e7b0*/
  *(_DWORD *)&this->__pad_6[126] = 0; /*0x48e7b6*/
  *(_DWORD *)&this->__pad_6[130] = 0; /*0x48e7bc*/
  *(_DWORD *)&this->__pad_6[134] = 0; /*0x48e7c2*/
  *(_DWORD *)&this->__pad_6[138] = 0; /*0x48e7c8*/
  *(_DWORD *)&this->__pad_6[142] = 0; /*0x48e7ce*/
  *(_DWORD *)&this->__pad_6[146] = 0; /*0x48e7d4*/
  *(_DWORD *)&this->__pad_6[150] = 0; /*0x48e7da*/
  *(_DWORD *)&this->__pad_6[154] = 0; /*0x48e7e0*/
  *(_DWORD *)&this->__pad_6[158] = 0; /*0x48e7e6*/
  *(_DWORD *)&this->__pad_6[162] = 0; /*0x48e7ec*/
  *(_DWORD *)&this->__pad_6[166] = 0; /*0x48e7f2*/
  *(_DWORD *)&this->__pad_6[170] = 0; /*0x48e7f8*/
  *(_DWORD *)&this->__pad_6[174] = 0; /*0x48e7fe*/
  *(_DWORD *)&this->__pad_6[178] = 0; /*0x48e804*/
  *(_DWORD *)&this->__pad_6[182] = 0; /*0x48e80a*/
  *(_DWORD *)&this->__pad_6[186] = 0; /*0x48e810*/
  *(_DWORD *)&this->__pad_6[190] = 0; /*0x48e816*/
  *(_DWORD *)&this->__pad_6[194] = 0; /*0x48e81c*/
  *(_DWORD *)&this->__pad_6[198] = 0; /*0x48e822*/
  *(_DWORD *)&this->__pad_6[202] = 0; /*0x48e828*/
  *(_DWORD *)&this->__pad_6[206] = 0; /*0x48e82e*/
  *(_DWORD *)&this->__pad_6[210] = 0; /*0x48e834*/
  *(_DWORD *)&this->__pad_6[214] = 0; /*0x48e83a*/
  *(_DWORD *)&this->__pad_6[218] = 0; /*0x48e840*/
  *(_DWORD *)&this->__pad_6[222] = 0; /*0x48e846*/
  *(_DWORD *)&this->__pad_6[226] = 0; /*0x48e84c*/
  *(_DWORD *)&this->__pad_6[230] = 0; /*0x48e852*/
  *(_DWORD *)&this->__pad_6[234] = 0; /*0x48e858*/
  *(_DWORD *)&this->__pad_6[238] = 0; /*0x48e85e*/
  *(_DWORD *)&this->__pad_6[242] = 0; /*0x48e864*/
  *(_DWORD *)&this->__pad_6[246] = 0; /*0x48e86a*/
  *(_DWORD *)&this->__pad_6[250] = 0; /*0x48e870*/
  *(_DWORD *)&this->__pad_6[254] = 0; /*0x48e876*/
  *(_DWORD *)&this->__pad_6[258] = 0; /*0x48e87c*/
  *(_DWORD *)&this->__pad_6[262] = 0; /*0x48e882*/
  *(_DWORD *)&this->__pad_6[266] = 0; /*0x48e888*/
  *(_DWORD *)&this->__pad_6[270] = 0; /*0x48e88e*/
  *(_DWORD *)&this->__pad_6[274] = 0; /*0x48e894*/
  *(_DWORD *)&this->__pad_6[278] = 0; /*0x48e89a*/
  *(_DWORD *)&this->__pad_6[282] = 0; /*0x48e8a0*/
  v7 = a5; /*0x48e8a6*/
  v8 = 1; /*0x48e8aa*/
  v9 = a5 < 1; /*0x48e8af*/
  *(_DWORD *)&this->__pad_6[286] = 0; /*0x48e8b1*/
  *(_DWORD *)&this->__pad_6[290] = 0; /*0x48e8b7*/
  *(_DWORD *)&this->__pad_6[294] = 0; /*0x48e8bd*/
  *(_DWORD *)&this->__pad_6[298] = 0; /*0x48e8c3*/
  *(_DWORD *)&this->__pad_6[302] = 0; /*0x48e8c9*/
  *(_DWORD *)&this->__pad_6[306] = 0; /*0x48e8cf*/
  *(_DWORD *)&this->__pad_6[310] = 0; /*0x48e8d5*/
  *(_DWORD *)&this->__pad_6[314] = 0; /*0x48e8db*/
  *(_DWORD *)&this->__pad_6[318] = 0; /*0x48e8e1*/
  *(_DWORD *)&this->__pad_6[322] = 0; /*0x48e8e7*/
  *(_DWORD *)&this->__pad_6[326] = 0; /*0x48e8ed*/
  *(_DWORD *)&this->__pad_6[330] = 0; /*0x48e8f3*/
  *(_DWORD *)&this->__pad_6[334] = 0; /*0x48e8f9*/
  *(_DWORD *)&this->__pad_6[338] = 0; /*0x48e8ff*/
  *(_DWORD *)&this->__pad_6[342] = 0; /*0x48e905*/
  *(_DWORD *)&this->__pad_6[346] = 0; /*0x48e90b*/
  *(_DWORD *)&this->__pad_6[350] = 0; /*0x48e911*/
  *(_DWORD *)&this->__pad_6[354] = 0; /*0x48e917*/
  *(_DWORD *)&this->__pad_6[358] = v7; /*0x48e91d*/
  this->ConvertClass_field_0x170 = 0; /*0x48e923*/
  *(_DWORD *)this->__pad_174 = 0; /*0x48e929*/
  this->ConvertClass_field_0x178 = 0; /*0x48e92f*/
  *((_DWORD *)this + 95) = 0; /*0x48e935*/
  *(_DWORD *)this->__pad_0 = &ConvertClass::`vftable'; /*0x48e93b*/
  if ( v9 ) /*0x48e941*/
    *(_DWORD *)&this->__pad_6[358] = 1; /*0x48e943*/
  if ( *(_DWORD *)&this->ConvertClass_field_0x2[2] == 1 ) /*0x48e94f*/
  {
    v10 = (CampaignClass *)__2_YAPAXI_Z(0x100u); /*0x48e95a*/
    this->ConvertClass_field_0x178 = v10; /*0x48e95f*/
    LOBYTE(v10->AbstractClass) = 0; /*0x48e968*/
    do /*0x48e9df*/
    {
      v11 = ComputeColorSaturation(a2 + 2 * (v8 % 256) + v8 % 256, a2 + 2 * (v8 % 256), (int)&a5); /*0x48e98b*/
      v12 = *(_WORD *)v11; /*0x48e990*/
      LOBYTE(v11) = *(_BYTE *)(v11 + 2); /*0x48e993*/
      LOWORD(v29.Color_field_00) = v12; /*0x48e996*/
      BYTE2(v29.Color_field_00) = (unsigned __int8)v11 >> 1; /*0x48e9a5*/
      v13 = Color::ConvertToRGB(&v29, (int)&v28); /*0x48e9ae*/
      LOWORD(a4) = *(_WORD *)v13; /*0x48e9b6*/
      BYTE2(a4) = *(_BYTE *)(v13 + 2); /*0x48e9c5*/
      *((_BYTE *)this->ConvertClass_field_0x178 + v8++) = Palette::FindClosestColor((char *)a2, (int)&a4); /*0x48e9db*/
    }
    while ( v8 < 256 ); /*0x48e9df*/
    v14 = (CampaignClass *)__2_YAPAXI_Z(*(_DWORD *)&this->__pad_6[358] << 8); /*0x48e9eb*/
    this->ConvertClass_field_0x170 = v14; /*0x48e9f0*/
    v15 = v14; /*0x48e9f6*/
    v16 = *(_DWORD *)&this->__pad_6[358]; /*0x48e9f8*/
    *(_DWORD *)this->__pad_174 = (char *)v15 + 256 * ((v16 - 1) >> 1); /*0x48ea10*/
    if ( v16 == 1 ) /*0x48ea16*/
    {
      LOBYTE(v15->AbstractClass) = 0; /*0x48ea18*/
      v17 = (char *)&v15->AbstractClass + 1; /*0x48ea1a*/
      for ( i = 1; i < 256; ++i ) /*0x48ea1b*/
        *v17++ = Palette::FindClosestColor((char *)a3, a2 + 2 * (i % 256) + i % 256); /*0x48ea40*/
    }
    else
    {
      v30 = 0; /*0x48ea53*/
      if ( v16 - 1 >= 0 ) /*0x48ea57*/
      {
        do /*0x48eb0a*/
        {
          LOBYTE(v15->AbstractClass) = 0; /*0x48ea5d*/
          v15 = (CampaignClass *)((char *)v15 + 1); /*0x48ea5f*/
          for ( j = 1; j < 256; ++j ) /*0x48ea60*/
          {
            v20 = ComputeColorSaturation(a2 + 2 * (j % 256) + j % 256, a2, (int)&a5); /*0x48ea85*/
            v21 = *(_BYTE *)(v20 + 2); /*0x48ea8f*/
            LOWORD(v29.Color_field_00) = *(_WORD *)v20; /*0x48ea92*/
            LOBYTE(v31) = v21; /*0x48ea97*/
            BYTE2(v29.Color_field_00) = v21; /*0x48eaa4*/
            BYTE2(v29.Color_field_00) = 2 * v30 * v21 / (*(_DWORD *)&this->__pad_6[358] - 1); /*0x48eac2*/
            v22 = Color::ConvertToRGB(&v29, (int)&v28); /*0x48eac6*/
            LOWORD(a4) = *(_WORD *)v22; /*0x48eace*/
            BYTE2(a4) = *(_BYTE *)(v22 + 2); /*0x48eadf*/
            LOBYTE(v15->AbstractClass) = Palette::FindClosestColor((char *)a3, (int)&a4); /*0x48eae8*/
            v15 = (CampaignClass *)((char *)v15 + 1); /*0x48eaea*/
          }
          v23 = *(_DWORD *)&this->__pad_6[358] - 1; /*0x48eb03*/
          ++v30; /*0x48eb06*/
        }
        while ( v30 <= v23 ); /*0x48eb0a*/
      }
    }
  }
  else
  {
    v24 = (CampaignClass *)__2_YAPAXI_Z(*(_DWORD *)&this->__pad_6[358] << 9); /*0x48eb1c*/
    v25 = *(_DWORD *)&this->__pad_6[358]; /*0x48eb21*/
    this->ConvertClass_field_0x170 = v24; /*0x48eb2a*/
    *(_DWORD *)this->__pad_174 = (char *)v24 + 512 * ((v25 - 1) >> 1); /*0x48eb3a*/
    if ( !a6 ) /*0x48eb46*/
      DSurface::BlitStretch((int)v24, v25, a2); /*0x48eb51*/
    this->q060 = (unsigned __int16)g_DDraw_Gray127; /*0x48eb60*/
    *((_DWORD *)this + 97) = HIWORD(g_DDraw_Gray127); /*0x48eb6d*/
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
  return this->__pad_0; /*0x48ebd8*/
}



// ==== 0x0048EBF0  ConvertClass::InitTables  this=ConvertClass  sig=csp ====
_DWORD *__thiscall ConvertClass::InitTables(ConvertClass *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax
  CampaignClass *ConvertClass_field_0x178; // ecx
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
  CampaignClass *v21; // ecx
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
  CampaignClass *v33; // ecx
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
  CampaignClass *v45; // ... [58756 chars total]


