// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005800D0  CellClass::ApplyTileModification5  this=ObjectClass  sig=csp ====
void __thiscall CellClass::ApplyTileModification5(int *this, MouseClass *aP1)
{
  int v2; // eax
  __int16 v3; // cx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  unsigned int v7; // eax
  IUnknown *v8; // eax
  unsigned int v9; // eax
  IUnknown *v10; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v13; // edx
  int v14; // ecx
  MouseClass *v15; // edi
  int v16; // ebp
  char *v17; // eax
  MouseClass *v18; // esi
  IUnknown *v19; // ecx
  IUnknown *v20; // esi
  int v21; // eax
  int v22; // eax
  IUnknown *v23; // esi
  ObjectClass *v24; // edx
  IUnknown *v25; // ecx
  int v26; // edi
  IUnknown *v27; // edi
  IUnknown *v28; // ebx
  IUnknown *v29; // ebp
  IUnknown *v30; // edi
  struct tagRECT *v31; // eax
  int *v32; // eax
  _DWORD *v33; // eax
  IUnknown *v34; // eax
  AbstractClass *v36; // eax
  AbstractClass *_FFFFFFF8; // [esp-8h] [ebp-118h]
  struct tagRECT *v37; // [esp-4h] [ebp-114h]
  AbstractClass *v38; // [esp-4h] [ebp-114h]
  const RECT *v39; // [esp+0h] [ebp-110h]
  const RECT *v40; // [esp+0h] [ebp-110h]
  const RECT *v41; // [esp+4h] [ebp-10Ch]
  const RECT *_4a; // [esp+4h] [ebp-10Ch]
  char varFD; // [esp+13h] [ebp-FDh]
  __int16 varFC[4]; // [esp+14h] [ebp-FCh] BYREF
  ObjectClass *v42; // [esp+1Ch] [ebp-F4h] BYREF
  IUnknown *v43; // [esp+20h] [ebp-F0h]
  ObjectClass *v44; // [esp+24h] [ebp-ECh]
  MouseClass *varE8; // [esp+28h] [ebp-E8h]
  IUnknown *v46; // [esp+2Ch] [ebp-E4h]
  int v50; // [esp+30h] [ebp-E0h]
  ObjectClass *v48; // [esp+34h] [ebp-DCh]
  IUnknown *v49; // [esp+38h] [ebp-D8h]
  _WORD v53[2]; // [esp+3Ch] [ebp-D4h] BYREF
  IUnknown *v51; // [esp+40h] [ebp-D0h]
  _WORD v55[2]; // [esp+44h] [ebp-CCh] BYREF
  IUnknown *v56; // [esp+48h] [ebp-C8h]
  IUnknown *v54; // [esp+4Ch] [ebp-C4h]
  int v58; // [esp+50h] [ebp-C0h]
  ObjectClass *varBC; // [esp+54h] [ebp-BCh]
  MouseClass *v57; // [esp+60h] [ebp-B0h]
  int v61; // [esp+64h] [ebp-ACh]
  MouseClass *v59; // [esp+68h] [ebp-A8h]
  IUnknown *v60; // [esp+6Ch] [ebp-A4h]
  char *v64; // [esp+70h] [ebp-A0h]
  IUnknown *v62; // [esp+74h] [ebp-9Ch] BYREF
  MouseClass *v66; // [esp+78h] [ebp-98h]
  int var94; // [esp+7Ch] [ebp-94h] BYREF
  _DWORD v68[2]; // [esp+80h] [ebp-90h] BYREF
  int v69; // [esp+88h] [ebp-88h] BYREF
  AbstractClass *v67; // [esp+8Ch] [ebp-84h] BYREF
  AbstractClass v71; // [esp+90h] [ebp-80h] BYREF
  int v72[4]; // [esp+D0h] [ebp-40h] BYREF
  int v73[4]; // [esp+F0h] [ebp-20h] BYREF
  _DWORD v74[4]; // [esp+100h] [ebp-10h] BYREF

  v48 = (ObjectClass *)this; /*0x5800dd*/
  *(_DWORD *)varFC = aP1->field_0; /*0x5800e7*/
  varFD = 0; /*0x5800eb*/
  do /*0x580113*/
  {
    --varFC[0]; /*0x5800f0*/
    v2 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], varFC) + 17); /*0x580104*/
  }
  while ( v2 >= 205 && v2 <= 232 ); /*0x580113*/
  v3 = ++varFC[0]; /*0x58011a*/
  v42 = 0; /*0x580123*/
  v43 = 0; /*0x580127*/
  v44 = 0; /*0x58012b*/
  varE8 = 0; /*0x58012f*/
  while ( 1 ) /*0x58014f*/
  {
    v4 = v3 + (varFC[1] << 9); /*0x58014d*/
    if ( v4 < 0x40000 && (v5 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v4)) != 0 ) /*0x58015d*/
    {
      v6 = v5; /*0x58015f*/
    }
    else
    {
      v6 = g_CellClassArray; /*0x580167*/
      g_Map_GlobalCellIndex = *(IUnknown **)varFC; /*0x58016c*/
    }
    v50 = (int)v6; /*0x580175*/
    LOWORD(v49) = v3; /*0x58017f*/
    HIWORD(v49) = varFC[1] - 1; /*0x580184*/
    v7 = v3 + ((__int16)(varFC[1] - 1) << 9); /*0x58018f*/
    if ( v7 < 0x40000 && (v8 = *(IUnknown **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v7)) != 0 ) /*0x58019f*/
    {
      v54 = v8; /*0x5801a1*/
    }
    else
    {
      v54 = (IUnknown *)g_CellClassArray; /*0x5801ab*/
      g_Map_GlobalCellIndex = v49; /*0x5801b3*/
    }
    LOWORD(v56) = v3; /*0x5801bb*/
    HIWORD(v56) = varFC[1] + 1; /*0x5801c0*/
    v9 = v3 + ((__int16)(varFC[1] + 1) << 9); /*0x5801cb*/
    if ( v9 < 0x40000 && (v10 = *(IUnknown **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v9)) != 0 ) /*0x5801db*/
    {
      v51 = v10; /*0x5801dd*/
    }
    else
    {
      v51 = (IUnknown *)g_CellClassArray; /*0x5801e7*/
      g_Map_GlobalCellIndex = v56; /*0x5801ef*/
    }
    PlacementRect = BuildingClass::GetPlacementRect((int)v6, (IUnknown *)v73); /*0x580204*/
    StartCoords = House::GetStartCoords((int)v6, (IUnknown *)&v71.uniqueId); /*0x580210*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x580225*/
    {
      v13 = *PlacementRect; /*0x5802ab*/
      v15 = (MouseClass *)PlacementRect[1]; /*0x5802ad*/
      v19 = (IUnknown *)PlacementRect[2]; /*0x5802b0*/
      v17 = (char *)PlacementRect[3]; /*0x5802b3*/
    }
    else
    {
      v58 = PlacementRect[2]; /*0x580230*/
      if ( v58 <= 0 || (v46 = (IUnknown *)PlacementRect[3], (int)v46 <= 0) ) /*0x58023f*/
      {
        v13 = *StartCoords; /*0x58029e*/
        v15 = (MouseClass *)StartCoords[1]; /*0x5802a0*/
        v19 = (IUnknown *)StartCoords[2]; /*0x5802a3*/
        v17 = (char *)StartCoords[3]; /*0x5802a6*/
      }
      else
      {
        v13 = *StartCoords; /*0x580241*/
        v14 = *PlacementRect; /*0x580243*/
        v15 = (MouseClass *)StartCoords[1]; /*0x580245*/
        v16 = StartCoords[2]; /*0x580248*/
        v17 = (char *)StartCoords[3]; /*0x58024b*/
        if ( v13 > *PlacementRect ) /*0x580250*/
        {
          v16 += v13 - v14; /*0x580254*/
          v13 = *PlacementRect; /*0x580256*/
        }
        v18 = (MouseClass *)PlacementRect[1]; /*0x580258*/
        v66 = v18; /*0x58025d*/
        if ( (int)v15 > (int)v18 ) /*0x580261*/
        {
          v17 += (char *)v15 - (char *)v18; /*0x580265*/
          v15 = v18; /*0x580267*/
        }
        if ( v13 + v16 < v14 + v58 ) /*0x580274*/
          v16 = v14 - v13 + v58 + 1; /*0x58027c*/
        if ( (int)((char *)v15 + (int)v17) < (int)((char *)v66 + (int)v46) ) /*0x58028f*/
          v17 = (char *)((char *)v66 + (_DWORD)v46 - (char *)v15 + 1); /*0x580294*/
        v6 = (_DWORD *)v50; /*0x580296*/
        v19 = (IUnknown *)v16; /*0x58029a*/
      }
    }
    v61 = v13; /*0x5802b6*/
    v59 = v15; /*0x5802ba*/
    v60 = v19; /*0x5802be*/
    v64 = v17; /*0x5802c2*/
    v20 = (IUnknown *)v6[17]; /*0x5802c6*/
    v46 = v20; /*0x5802c9*/
    switch ( (unsigned int)v20 ) /*0x5802e4*/
    {
      case 0xD1u: /*0x5802e4*/
      case 0xD2u: /*0x5802e4*/
      case 0xD3u: /*0x5802e4*/
      case 0xD4u: /*0x5802e4*/
      case 0xD5u: /*0x5802e4*/
      case 0xE7u: /*0x5802e4*/
        v22 = Range_RandomInt(0, 3u); /*0x580306*/
        v23 = (IUnknown *)v44; /*0x580310*/
        v21 = v22 + 205; /*0x580314*/
        v24 = (ObjectClass *)varFC[0]; /*0x580319*/
        v25 = (IUnknown *)(varFC[1] - 1); /*0x58031e*/
        v26 = 3; /*0x580326*/
        if ( (int)v44 <= 0 || (int)varE8 <= 0 ) /*0x580332*/
        {
          v23 = (IUnknown *)1; /*0x5803a3*/
        }
        else
        {
          v57 = varE8; /*0x58033c*/
          varBC = v42; /*0x580344*/
          v27 = v43; /*0x580348*/
          if ( (int)v42 > varFC[0] ) /*0x58034e*/
          {
            varBC = (ObjectClass *)varFC[0]; /*0x580352*/
            v23 = (IUnknown *)&v44->__pad_0[(_DWORD)v42 - varFC[0]]; /*0x580356*/
          }
          if ( (int)v43 > (int)v25 ) /*0x58035a*/
          {
            v27 = (IUnknown *)(varFC[1] - 1); /*0x580364*/
            v57 = (MouseClass *)((char *)v57 + (char *)v43 - (char *)v25); /*0x580366*/
          }
          if ( (int)&varBC->__pad_0[(int)v23] < varFC[0] + 1 ) /*0x580375*/
            v23 = (IUnknown *)(varFC[0] - (_DWORD)varBC + 2); /*0x58037e*/
          v28 = (IUnknown *)v57; /*0x580380*/
          if ( (int)v27 + (int)v57 < (int)&v25->field_0 + 3 ) /*0x58038c*/
            v28 = (IUnknown *)((char *)v25 - (char *)v27 + 4); /*0x580393*/
          v24 = varBC; /*0x580395*/
          v25 = v27; /*0x580399*/
          v26 = (int)v28; /*0x58039b*/
          v6 = (_DWORD *)v50; /*0x58039d*/
        }
        v44 = (ObjectClass *)v23; /*0x5803a5*/
        v20 = v46; /*0x5803a9*/
        v42 = v24; /*0x5803ad*/
        v43 = v25; /*0x5803b1*/
        varE8 = (MouseClass *)v26; /*0x5803b5*/
        varFD = 1; /*0x5803b9*/
        goto LABEL_49; /*0x5803b9*/
      case 0xDFu: /*0x5802e4*/
      case 0xE0u: /*0x5802e4*/
        v21 = 223; /*0x5802eb*/
        goto LABEL_49; /*0x5802f0*/
      case 0xE1u: /*0x5802e4*/
      case 0xE2u: /*0x5802e4*/
        v21 = 225; /*0x5802f5*/
LABEL_49:
        if ( (IUnknown *)v21 != v20 ) /*0x5803c0*/
        {
          v29 = v54; /*0x5803c6*/
          v30 = v51; /*0x5803ca*/
          v6[17] = v21; /*0x5803ce*/
          v29->field_44 = v21; /*0x5803d1*/
          v30->field_44 = v21; /*0x5803d4*/
          v68[0] = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x5803e2*/
          v68[1] = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x5803f0*/
          v37 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v6, (IUnknown *)v72); /*0x580406*/
          House::GetStartCoords((int)v6, (IUnknown *)&v71.NeedsSaveOrLink); /*0x58040a*/
          v31 = (struct tagRECT *)Rect::Union(v37, v39, v41); /*0x580418*/
          v32 = (int *)Rect::Union(v31, v40, _4a); /*0x580429*/
          v38 = (AbstractClass *)v32[3]; /*0x580434*/
          _FFFFFFF8 = (AbstractClass *)v32[2]; /*0x58043c*/
          v33 = CellStruct::Copy(v32, (IUnknown *)&v71.__pad_0[8]); /*0x580450*/
          v34 = (IUnknown *)Coord2D::Sub(v33, &v71, (IUnknown *)v68); /*0x580457*/
          v36 = Rect::Construct(v74, v34, _FFFFFFF8, v38); /*0x580464*/
          v61 = *(_DWORD *)v36->__pad_0; /*0x580472*/
          v59 = *(MouseClass **)&v36->__pad_0[4]; /*0x580479*/
          v60 = *(IUnknown **)&v36->__pad_0[8]; /*0x580480*/
          v64 = *(char **)&v36->__pad_0[12]; /*0x58048c*/
          Cell::CreateCrater( /*0x5804af*/
            *(_DWORD *)v36->__pad_0,
            *(_DWORD *)&v36->__pad_0[4],
            *(_DWORD *)&v36->__pad_0[8],
            *(_DWORD *)&v36->__pad_0[12],
            0);
          if ( v20 == (IUnknown *)231 ) /*0x5804ba*/
          {
            BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (IUnknown *)varFC); /*0x5804ca*/
            v53[0] = 0; /*0x5804e5*/
            v53[1] = 1; /*0x5804ec*/
            v62 = (IUnknown *)CellStruct::Add(varFC, (IUnknown *)&v69, (IUnknown *)v53)->field_0; /*0x5804fc*/
            BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (IUnknown *)&v62); /*0x580506*/
            v55[0] = 0; /*0x58051c*/
            v55[1] = 1; /*0x580523*/
            var94 = CellStruct::Sub(varFC, (IUnknown *)&v67, (IUnknown *)v55)->field_0; /*0x580539*/
            BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (IUnknown *)&var94); /*0x580540*/
          }
          House::AnnounceUpgrade((int)v6, (IUnknown *)0xFFFFFFFF); /*0x580549*/
          House::AnnounceUpgrade((int)v29, (IUnknown *)0xFFFFFFFF); /*0x580552*/
          House::AnnounceUpgrade((int)v30, (IUnknown *)0xFFFFFFFF); /*0x58055b*/
          Cell::SearchEnemies((int)v6, 0); /*0x580564*/
          Cell::SearchEnemies((int)v29, 0); /*0x58056d*/
          Cell::SearchEnemies((int)v30, 0); /*0x580576*/
        }
        break; /*0x580576*/
      default:
        break;
    }
    ++varFC[0]; /*0x58057b*/
    if ( !CellClass::applyTileDamage(varFC) ) /*0x580584*/
      break; /*0x580584*/
    v3 = varFC[0]; /*0x580135*/
  }
  if ( varFD ) /*0x580597*/
    Terrain::ConnectivityGraph(v48); /*0x58059d*/
  if ( (int)v44 > 0 && (int)varE8 > 0 ) /*0x5805b0*/
    UpdateAreaConnectivityMap((int *)v48->__pad_0, (IUnknown *)&v42); /*0x5805bb*/
}


// ==== 0x00580600  CellClass::ApplyTileModification8  this=CellClass  sig=csp ====
void __thiscall CellClass::ApplyTileModification8(int *this, MouseClass *aP1)
{
  int v2; // eax
  __int16 i; // di
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ebp
  int v7; // edx
  int v8; // eax
  bool v9; // sf
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  ObjectClass *PlacementRect; // esi
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
  IUnknown *v34; // edi
  IUnknown *v35; // ebx
  struct tagRECT *v36; // eax
  int *v37; // eax
  _DWORD *v38; // eax
  IUnknown *v39; // eax
  AbstractClass *v41; // eax
  AbstractClass *_FFFFFFF8; // [esp-8h] [ebp-114h]
  struct tagRECT *v42; // [esp-4h] [ebp-110h]
  AbstractClass *v43; // [esp-4h] [ebp-110h]
  const RECT *v44; // [esp+0h] [ebp-10Ch]
  const RECT *v45; // [esp+0h] [ebp-10Ch]
  const RECT *v46; // [esp+4h] [ebp-108h]
  const RECT *v47; // [esp+4h] [ebp-108h]
  __int16 v48[2]; // [esp+10h] [ebp-FCh] BYREF
  char varF5; // [esp+17h] [ebp-F5h]
  int v50; // [esp+18h] [ebp-F4h] BYREF
  int v51; // [esp+1Ch] [ebp-F0h]
  IUnknown *v49; // [esp+20h] [ebp-ECh]
  int v53; // [esp+24h] [ebp-E8h]
  int v54; // [esp+28h] [ebp-E4h]
  int v55; // [esp+2Ch] [ebp-E0h]
  int v56; // [esp+30h] [ebp-DCh]
  int *v57; // [esp+34h] [ebp-D8h]
  IUnknown *v58; // [esp+38h] [ebp-D4h]
  _WORD v59[2]; // [esp+3Ch] [ebp-D0h] BYREF
  IUnknown *v60; // [esp+40h] [ebp-CCh]
  int v61; // [esp+44h] [ebp-C8h]
  _WORD v62[2]; // [esp+48h] [ebp-C4h] BYREF
  int v63; // [esp+4Ch] [ebp-C0h]
  int v64; // [esp+50h] [ebp-BCh]
  int v65; // [esp+54h] [ebp-B8h]
  int varB4; // [esp+58h] [ebp-B4h]
  int v67; // [esp+5Ch] [ebp-B0h]
  int v68; // [esp+68h] [ebp-A4h]
  IUnknown *v66; // [esp+6Ch] [ebp-A0h] BYREF
  int v70; // [esp+70h] [ebp-9Ch]
  int v71; // [esp+74h] [ebp-98h]
  int v72; // [esp+78h] [ebp-94h] BYREF
  _DWORD v73[2]; // [esp+7Ch] [ebp-90h] BYREF
  int v74; // [esp+84h] [ebp-88h] BYREF
  int v75; // [esp+88h] [ebp-84h] BYREF
  int v76; // [esp+8Ch] [ebp-80h] BYREF
  AbstractClass v77; // [esp+94h] [ebp-78h] BYREF
  int v78[4]; // [esp+CCh] [ebp-40h] BYREF
  int v79[4]; // [esp+ECh] [ebp-20h] BYREF
  _DWORD v80[4]; // [esp+FCh] [ebp-10h] BYREF

  v57 = this; /*0x58060e*/
  *(_DWORD *)v48 = aP1->field_0; /*0x580619*/
  v50 = 0; /*0x58061d*/
  v51 = 0; /*0x580621*/
  v49 = 0; /*0x580625*/
  v53 = 0; /*0x580629*/
  varF5 = 0; /*0x58062d*/
  do /*0x580655*/
  {
    --v48[1]; /*0x580632*/
    v2 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v48) + 17); /*0x580646*/
  }
  while ( v2 >= 205 && v2 <= 232 ); /*0x580655*/
  for ( i = ++v48[1]; ; i = v48[1] ) /*0x58065c*/
  {
    v4 = v48[0] + (i << 9); /*0x580683*/
    if ( v4 < 0x40000 && (v5 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v4)) != 0 ) /*0x580693*/
    {
      v6 = v5; /*0x580695*/
    }
    else
    {
      g_Map_GlobalCellIndex = *(IUnknown **)v48; /*0x580699*/
      v6 = g_CellClassArray; /*0x58069f*/
    }
    HIWORD(v58) = i; /*0x5806aa*/
    LOWORD(v58) = v48[0] - 1; /*0x5806af*/
    v7 = (__int16)(v48[0] - 1); /*0x5806b7*/
    v8 = i << 9; /*0x5806ba*/
    v9 = v7 + v8 < 0; /*0x5806bd*/
    v10 = v7 + v8; /*0x5806bd*/
    v54 = (int)v6; /*0x5806bf*/
    if ( v9 || v10 >= 0x40000 || (v11 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v10)) == 0 ) /*0x5806d1*/
    {
      v61 = (int)g_CellClassArray; /*0x5806dd*/
      g_Map_GlobalCellIndex = v58; /*0x5806e5*/
    }
    else
    {
      v61 = v11; /*0x5806d3*/
    }
    HIWORD(v60) = i; /*0x5806ed*/
    v12 = (__int16)(v48[0] + 1); /*0x5806f2*/
    v13 = i << 9; /*0x5806f5*/
    v9 = v12 + v13 < 0; /*0x5806f8*/
    v14 = v12 + v13; /*0x5806f8*/
    LOWORD(v60) = v48[0] + 1; /*0x5806fa*/
    if ( v9 || v14 >= 0x40000 || (v15 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v14)) == 0 ) /*0x58070e*/
    {
      v56 = (int)g_CellClassArray; /*0x58071a*/
      g_Map_GlobalCellIndex = v60; /*0x580722*/
    }
    else
    {
      v56 = v15; /*0x580710*/
    }
    PlacementRect = (ObjectClass *)BuildingClass::GetPlacementRect((int)v6, (IUnknown *)v79); /*0x580740*/
    StartCoords = House::GetStartCoords((int)v6, (IUnknown *)&v77.__pad_0[8]); /*0x580742*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x580757*/
    {
      v18 = *(_DWORD *)PlacementRect->__pad_0; /*0x5807d6*/
      v20 = *(_DWORD *)&PlacementRect->__pad_0[4]; /*0x5807d8*/
      v24 = *(_DWORD *)&PlacementRect->__pad_0[8]; /*0x5807db*/
      v22 = *(_DWORD *)&PlacementRect->__pad_0[12]; /*0x5807de*/
    }
    else
    {
      v71 = *(_DWORD *)&PlacementRect->__pad_0[8]; /*0x58075e*/
      if ( v71 <= 0 || (v55 = *(_DWORD *)&PlacementRect->__pad_0[12], v55 <= 0) ) /*0x58076d*/
      {
        v18 = *StartCoords; /*0x5807c9*/
        v20 = StartCoords[1]; /*0x5807cb*/
        v24 = StartCoords[2]; /*0x5807ce*/
        v22 = StartCoords[3]; /*0x5807d1*/
      }
      else
      {
        v18 = *StartCoords; /*0x58076f*/
        v19 = *(_DWORD *)PlacementRect->__pad_0; /*0x580771*/
        v20 = StartCoords[1]; /*0x580773*/
        v21 = StartCoords[2]; /*0x580776*/
        v22 = StartCoords[3]; /*0x580779*/
        if ( v18 > *(_DWORD *)PlacementRect->__pad_0 ) /*0x58077e*/
        {
          v21 += v18 - v19; /*0x580782*/
          v18 = *(_DWORD *)PlacementRect->__pad_0; /*0x580784*/
        }
        v23 = *(_DWORD *)&PlacementRect->__pad_0[4]; /*0x580786*/
        v70 = v23; /*0x58078b*/
        if ( v20 > v23 ) /*0x58078f*/
        {
          v22 += v20 - v23; /*0x580793*/
          v20 = v23; /*0x580795*/
        }
        if ( v18 + v21 < v19 + v71 ) /*0x58079f*/
          v21 = v19 - v18 + v71 + 1; /*0x5807a7*/
        if ( v22 + v20 < v55 + v70 ) /*0x5807ba*/
          v22 = v55 + v70 - v20 + 1; /*0x5807bf*/
        v24 = v21; /*0x5807c1*/
        v6 = (_DWORD *)v54; /*0x5807c3*/
      }
    }
    v63 = v18; /*0x5807e1*/
    v64 = v20; /*0x5807e5*/
    v65 = v24; /*0x5807e9*/
    varB4 = v22; /*0x5807ed*/
    v25 = v6[17]; /*0x5807f1*/
    v55 = v25; /*0x5807f4*/
    switch ( v25 ) /*0x58080f*/
    {
      case 218: /*0x58080f*/
      case 219: /*0x58080f*/
      case 220: /*0x58080f*/
      case 221: /*0x58080f*/
      case 222: /*0x58080f*/
      case 232: /*0x58080f*/
        v27 = Range_RandomInt(0, 3u); /*0x580831*/
        v28 = (int)v49; /*0x58083b*/
        v26 = v27 + 214; /*0x58083f*/
        v29 = v48[1]; /*0x580844*/
        v30 = v48[0] - 1; /*0x580849*/
        if ( (int)v49 <= 0 || v53 <= 0 ) /*0x58085d*/
        {
          v28 = 3; /*0x5808ce*/
          v33 = 1; /*0x5808d0*/
        }
        else
        {
          v68 = v53; /*0x580867*/
          v67 = v50; /*0x58086f*/
          v31 = v51; /*0x580873*/
          if ( v50 > v30 ) /*0x580879*/
          {
            v67 = v48[0] - 1; /*0x58087d*/
            v28 = (int)v49 + v50 - v30; /*0x580881*/
          }
          if ( v51 > v48[1] ) /*0x580885*/
          {
            v31 = v48[1]; /*0x58088f*/
            v68 += v51 - v48[1]; /*0x580891*/
          }
          if ( v28 + v67 < v30 + 3 ) /*0x5808a0*/
            v28 = v30 - v67 + 4; /*0x5808a9*/
          v32 = v68; /*0x5808ab*/
          if ( v68 + v31 < v48[1] + 1 ) /*0x5808b7*/
            v32 = v48[1] - v31 + 2; /*0x5808be*/
          v30 = v67; /*0x5808c0*/
          v6 = (_DWORD *)v54; /*0x5808c4*/
          v29 = v31; /*0x5808c8*/
          v33 = v32; /*0x5808ca*/
        }
        v51 = v29; /*0x5808d2*/
        v25 = v55; /*0x5808d6*/
        v50 = v30; /*0x5808da*/
        v49 = (IUnknown *)v28; /*0x5808de*/
        v53 = v33; /*0x5808e2*/
        varF5 = 1; /*0x5808e6*/
        goto LABEL_51; /*0x5808e6*/
      case 227: /*0x58080f*/
      case 228: /*0x58080f*/
        v26 = 227; /*0x580816*/
        goto LABEL_51; /*0x58081b*/
      case 229: /*0x58080f*/
      case 230: /*0x58080f*/
        v26 = 229; /*0x580820*/
LABEL_51:
        if ( v26 != v25 ) /*0x5808ed*/
        {
          v34 = (IUnknown *)v61; /*0x5808f3*/
          v35 = (IUnknown *)v56; /*0x5808f7*/
          v6[17] = v26; /*0x5808fb*/
          v34->field_44 = v26; /*0x580905*/
          v35->field_44 = v26; /*0x580908*/
          v73[1] = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x580916*/
          v73[0] = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x580920*/
          v42 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v6, (IUnknown *)v78); /*0x58092c*/
          House::GetStartCoords((int)v6, (IUnknown *)&v77.nextArrayIndex); /*0x580937*/
          v36 = (struct tagRECT *)Rect::Union(v42, v44, v46); /*0x580945*/
          v37 = (int *)Rect::Union(v36, v45, v47); /*0x580956*/
          v43 = (AbstractClass *)v37[3]; /*0x580961*/
          _FFFFFFF8 = (AbstractClass *)v37[2]; /*0x580969*/
          v38 = CellStruct::Copy(v37, (IUnknown *)&v76); /*0x58097d*/
          v39 = (IUnknown *)Coord2D::Sub(v38, &v77, (IUnknown *)v73); /*0x580984*/
          v41 = Rect::Construct(v80, v39, _FFFFFFF8, v43); /*0x580991*/
          v63 = *(_DWORD *)v41->__pad_0; /*0x58099f*/
          v64 = *(_DWORD *)&v41->__pad_0[4]; /*0x5809a6*/
          v65 = *(_DWORD *)&v41->__pad_0[8]; /*0x5809ad*/
          varB4 = *(_DWORD *)&v41->__pad_0[12]; /*0x5809b6*/
          Cell::CreateCrater( /*0x5809d6*/
            *(_DWORD *)v41->__pad_0,
            *(_DWORD *)&v41->__pad_0[4],
            *(_DWORD *)&v41->__pad_0[8],
            *(_DWORD *)&v41->__pad_0[12],
            0);
          if ( v25 == 232 ) /*0x5809e1*/
          {
            BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (IUnknown *)v48); /*0x5809f1*/
            v59[0] = 1; /*0x580a0c*/
            v59[1] = 0; /*0x580a11*/
            v72 = CellStruct::Add(v48, (IUnknown *)&v74, (IUnknown *)v59)->field_0; /*0x580a23*/
            BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (IUnknown *)&v72); /*0x580a2d*/
            v62[0] = 1; /*0x580a43*/
            v62[1] = 0; /*0x580a48*/
            v66 = (IUnknown *)CellStruct::Sub(v48, (IUnknown *)&v75, (IUnknown *)v62)->field_0; /*0x580a60*/
            BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (IUnknown *)&v66); /*0x580a64*/
          }
          House::AnnounceUpgrade((int)v6, (IUnknown *)0xFFFFFFFF); /*0x580a6d*/
          House::AnnounceUpgrade((int)v34, (IUnknown *)0xFFFFFFFF); /*0x580a76*/
          House::AnnounceUpgrade((int)v35, (IUnknown *)0xFFFFFFFF); /*0x580a7f*/
          Cell::SearchEnemies((int)v6, 0); /*0x580a88*/
          Cell::SearchEnemies((int)v34, 0); /*0x580a91*/
          Cell::SearchEnemies((int)v35, 0); /*0x580a9a*/
        }
        break; /*0x580a9a*/
      default:
        break;
    }
    ++v48[1]; /*0x580a9f*/
    if ( !CellClass::applyTileDamage(v48) ) /*0x580aa8*/
      break; /*0x580aa8*/
  }
  if ( varF5 ) /*0x580abb*/
    Terrain::ConnectivityGraph(v57); /*0x580ac1*/
  if ( (int)v49 > 0 && v53 > 0 ) /*0x580ad4*/
    UpdateAreaConnectivityMap(v57, (IUnknown *)&v50); /*0x580adf*/
}


// ==== 0x00580B20  CellClass::updateLighting  this=CellClass  sig=csp ====
BOOL __thiscall sub_580B20(__int16 *this)
{
  unsigned int v1; // eax
  _DWORD *v2; // eax
  int v3; // eax

  v1 = *this + (this->foggedObjects << 9); /*0x580b2a*/
  if ( v1 >= 0x40000 || (v2 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v1)) == 0 ) /*0x580b40*/
  {
    g_Map_GlobalCellIndex = *(_DWORD *)this; /*0x580b44*/
    v2 = g_CellClassArray; /*0x580b49*/
  }
  v3 = v2[17]; /*0x580b4e*/
  return v3 >= 74 && v3 <= 101; /*0x580b60*/
}


// ==== 0x00580B70  CellClass::applyTileDamage  this=CellClass  sig=csp ====
BOOL __thiscall sub_580B70(__int16 *this)
{
  unsigned int v1; // eax
  _DWORD *v2; // eax
  int v3; // eax

  v1 = *this + (this->foggedObjects << 9); /*0x580b7a*/
  if ( v1 >= 0x40000 || (v2 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v1)) == 0 ) /*0x580b90*/
  {
    g_Map_GlobalCellIndex = *(_DWORD *)this; /*0x580b94*/
    v2 = g_CellClassArray; /*0x580b99*/
  }
  v3 = v2[17]; /*0x580b9e*/
  return v3 >= 205 && v3 <= 232; /*0x580bb4*/
}


// ==== 0x00580BC0  ObjectClass::FindMapSpawnCell  this=ObjectClass  sig=csp ====
_DWORD *__thiscall FindMapSpawnCell(_DWORD *this, FootClass *aP1)
{
  int *v3; // eax
  int v4; // kr08_4
  int v5; // eax
  int v6; // esi
  int v7; // edx
  ObjectClass *v8; // ecx
  int v9; // eax
  int v10; // eax
  IUnknown *v11; // eax
  int v12; // ebp
  IUnknown **v13; // ebx
  __int16 v14; // si
  void *v15; // eax
  IUnknown *v16; // esi
  void *v17; // eax
  int v18; // ecx
  int v19; // ebx
  IUnknown **v20; // ebp
  __int16 v21; // si
  void *v22; // eax
  int v23; // ecx
  int v24; // ecx
  _DWORD *v25; // ecx
  IUnknown **v26; // eax
  int v27; // eax
  IUnknown **v28; // ecx
  unsigned int v29; // eax
  _DWORD *result; // eax
  unsigned int v31; // ecx
  IUnknown *v32; // [esp+8h] [ebp-E8h] BYREF
  int v33; // [esp+Ch] [ebp-E4h]
  IUnknown *v34; // [esp+10h] [ebp-E0h]
  ObjectClass *v35; // [esp+14h] [ebp-DCh]
  int v36; // [esp+18h] [ebp-D8h]
  int v37; // [esp+1Ch] [ebp-D4h]
  int v38; // [esp+20h] [ebp-D0h]
  IUnknown *v39; // [esp+24h] [ebp-CCh]
  IUnknown *v40; // [esp+28h] [ebp-C8h]
  IUnknown *v41; // [esp+2Ch] [ebp-C4h]
  IUnknown *v42; // [esp+30h] [ebp-C0h]
  IUnknown *v43; // [esp+34h] [ebp-BCh]
  char *v44; // [esp+38h] [ebp-B8h]
  IUnknown *v45; // [esp+3Ch] [ebp-B4h] BYREF
  IUnknown *v46; // [esp+40h] [ebp-B0h]
  MouseClass *v47; // [esp+44h] [ebp-ACh]
  IUnknown *v48; // [esp+48h] [ebp-A8h] BYREF
  MouseClass *v49; // [esp+4Ch] [ebp-A4h]
  int v50; // [esp+50h] [ebp-A0h]
  int v51; // [esp+54h] [ebp-9Ch] BYREF
  IUnknown *v52; // [esp+58h] [ebp-98h]
  int v53; // [esp+5Ch] [ebp-94h]
  IUnknown *v54; // [esp+60h] [ebp-90h] BYREF
  IUnknown *v55; // [esp+64h] [ebp-8Ch]
  int inited; // [esp+68h] [ebp-88h]
  _DWORD v57[2]; // [esp+6Ch] [ebp-84h] BYREF
  _DWORD v58[2]; // [esp+74h] [ebp-7Ch] BYREF
  _DWORD v59[2]; // [esp+7Ch] [ebp-74h] BYREF
  _DWORD v60[2]; // [esp+84h] [ebp-6Ch] BYREF
  rc_ptr_base v61; // [esp+8Ch] [ebp-64h] BYREF
  _WORD v62[48]; // [esp+90h] [ebp-60h] BYREF

  v3 = (int *)(*(int (__thiscall **)(FootClass *, int *))(*(_DWORD *)aP1->__pad_0 + 72))(aP1, &v51); /*0x580bd8*/
  v38 = 32; /*0x580bdd*/
  v4 = *v3; /*0x580bf0*/
  v5 = v3[1]; /*0x580bf2*/
  v6 = this->q0F4; /*0x580bf9*/
  LOWORD(v39) = v4 / 256; /*0x580bff*/
  v36 = (__int16)v39; /*0x580c0f*/
  HIWORD(v39) = v5 / 256; /*0x580c16*/
  v7 = 0; /*0x580c1b*/
  v8 = (ObjectClass *)SHIWORD(v39); /*0x580c1d*/
  v9 = this->q0F8; /*0x580c20*/
  v33 = 0; /*0x580c26*/
  v10 = v6 + v9; /*0x580c2a*/
  v35 = (ObjectClass *)SHIWORD(v39); /*0x580c2c*/
  if ( v10 <= 32 ) /*0x580c33*/
    v38 = v10; /*0x580c35*/
  v11 = 0; /*0x580c3d*/
  v34 = 0; /*0x580c41*/
  if ( v38 > 0 ) /*0x580c45*/
  {
    v12 = 0; /*0x580c4d*/
    v37 = 0; /*0x580c4f*/
    while ( v12 > (int)v11 ) /*0x580c5b*/
    {
LABEL_18:
      v19 = v12 + 1; /*0x580de5*/
      v44 = &v11[-1].__tail_1602E[1]; /*0x580ded*/
      if ( v12 + 1 <= (int)&v11[-1].__tail_1602E[1] ) /*0x580df1*/
      {
        v20 = (IUnknown **)&v62[2 * v7]; /*0x580dfb*/
        LOWORD(v40) = v36 - (_WORD)v11; /*0x580e04*/
        while ( 1 ) /*0x580e14*/
        {
          v21 = v19 + (_WORD)v35; /*0x580e14*/
          HIWORD(v40) = v19 + (_WORD)v35; /*0x580e19*/
          v32 = v40; /*0x580e22*/
          if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v32, (TechnoClass *)1) ) /*0x580e26*/
          {
            inited = 0; /*0x580e46*/
            v54 = (IUnknown *)(((__int16)v32 << 8) + 128); /*0x580e50*/
            v58[0] = v54; /*0x580e54*/
            v55 = (IUnknown *)((SHIWORD(v32) << 8) + 128); /*0x580e60*/
            v58[1] = v55; /*0x580e64*/
            v22 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v54); /*0x580e72*/
            inited = Isometric::InitTables((int)v22, (IUnknown *)v58); /*0x580e82*/
            if ( Cell::IsPassable(&v54) ) /*0x580e89*/
            {
              v23 = v33 + 1; /*0x580e9a*/
              *v20 = v32; /*0x580e9b*/
              v33 = v23; /*0x580e9e*/
              ++v20; /*0x580ea2*/
            }
          }
          if ( v33 == 24 ) /*0x580eaa*/
            goto LABEL_36; /*0x580fa6*/
          HIWORD(v41) = v21; /*0x580eba*/
          LOWORD(v41) = v36 + (_WORD)v34; /*0x580ebf*/
          v32 = v41; /*0x580ed1*/
          if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v32, (TechnoClass *)1) ) /*0x580ed5*/
          {
            v51 = ((__int16)v32 << 8) + 128; /*0x580ef6*/
            v53 = 0; /*0x580efa*/
            v60[0] = v51; /*0x580efe*/
            v52 = (IUnknown *)((SHIWORD(v32) << 8) + 128); /*0x580f22*/
            v60[1] = v52; /*0x580f28*/
            v24 = v51 / 256 + (((int)v52 / 256) << 9); /*0x580f3a*/
            if ( v24 < 0 /*0x580f51*/
              || v24 >= *(int *)&MEMORY[0x87F8E4].__pad_3C[8]
              || (v25 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v24)) == 0 )
            {
              v26 = (IUnknown **)CellStruct::Set(&v61, v51 / 256, (int)v52 / 256); /*0x580f5c*/
              v25 = g_CellClassArray; /*0x580f63*/
              g_Map_GlobalCellIndex = *v26; /*0x580f68*/
            }
            v53 = Isometric::InitTables((int)v25, (IUnknown *)v60); /*0x580f7a*/
            if ( Cell::IsPassable(&v51) ) /*0x580f85*/
            {
              *v20++ = v32; /*0x580f92*/
              ++v33; /*0x580f9d*/
            }
          }
          if ( v33 == 24 ) /*0x580fa6*/
            goto LABEL_36; /*0x580fa6*/
          if ( ++v19 > (int)v44 ) /*0x580faf*/
          {
            v7 = v33; /*0x580fb5*/
            v11 = v34; /*0x580fb9*/
            v12 = v37; /*0x580fbd*/
            break; /*0x580fbd*/
          }
        }
      }
      v11 = (IUnknown *)((char *)v11 + 1); /*0x580fc6*/
      --v12; /*0x580fcb*/
      v34 = v11; /*0x580fce*/
      v37 = v12; /*0x580fd2*/
      if ( (int)v11 >= v38 ) /*0x580fd6*/
        goto LABEL_37; /*0x580fd6*/
      LOWORD(v8) = (_WORD)v35; /*0x580c55*/
    }
    v13 = (IUnknown **)&v62[2 * v7]; /*0x580c63*/
    HIWORD(v43) = (_WORD)v8 - (_WORD)v11; /*0x580c6a*/
    while ( 1 ) /*0x580c7a*/
    {
      v14 = v36 + v12; /*0x580c7a*/
      LOWORD(v43) = v36 + v12; /*0x580c7f*/
      v32 = v43; /*0x580c88*/
      if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v32, (TechnoClass *)1) ) /*0x580c8c*/
      {
        v46 = (IUnknown *)((SHIWORD(v32) << 8) + 128); /*0x580caa*/
        v59[1] = v46; /*0x580cae*/
        v47 = 0; /*0x580cb8*/
        v45 = (IUnknown *)(((__int16)v32 << 8) + 128); /*0x580cd3*/
        v59[0] = v45; /*0x580cd7*/
        v15 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v45); /*0x580cde*/
        v47 = (MouseClass *)Isometric::InitTables((int)v15, (IUnknown *)v59); /*0x580cea*/
        if ( Cell::IsPassable(&v45) ) /*0x580cf5*/
        {
          *v13++ = v32; /*0x580d02*/
          ++v33; /*0x580d0c*/
        }
      }
      if ( v33 == 24 ) /*0x580d15*/
        break; /*0x580d15*/
      LOWORD(v42) = v14; /*0x580d1f*/
      v16 = v34; /*0x580d24*/
      HIWORD(v42) = (_WORD)v34 + (_WORD)v35; /*0x580d31*/
      v32 = v42; /*0x580d3a*/
      if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v32, (TechnoClass *)1) ) /*0x580d41*/
      {
        v48 = (IUnknown *)(((__int16)v32 << 8) + 128); /*0x580d65*/
        v57[0] = v48; /*0x580d69*/
        v49 = (MouseClass *)((SHIWORD(v32) << 8) + 128); /*0x580d6d*/
        v57[1] = v49; /*0x580d71*/
        v50 = 0; /*0x580d86*/
        v17 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v48); /*0x580d8a*/
        v50 = Isometric::InitTables((int)v17, (IUnknown *)v57); /*0x580d9d*/
        if ( Cell::IsPassable(&v48) ) /*0x580da1*/
        {
          v18 = v33 + 1; /*0x580db2*/
          *v13 = v32; /*0x580db3*/
          v33 = v18; /*0x580db5*/
          ++v13; /*0x580db9*/
        }
      }
      if ( v33 == 24 ) /*0x580dc3*/
        break; /*0x580dc3*/
      if ( ++v12 > (int)v16 ) /*0x580dcc*/
      {
        v12 = v37; /*0x580dd2*/
        v7 = v33; /*0x580dd6*/
        v11 = v34; /*0x580dd8*/
        goto LABEL_18; /*0x580dd8*/
      }
    }
LABEL_36:
    v7 = v33; /*0x580fde*/
LABEL_37:
    if ( v7 > 0 ) /*0x580fe6*/
    {
      v27 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)(v7 - 1)); /*0x580ff8*/
      v28 = (IUnknown **)&v62[2 * v27]; /*0x581005*/
      v29 = *(__int16 *)v28 + ((__int16)v62[2 * v27 + 1] << 9); /*0x581017*/
      if ( v29 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v29)) == 0 ) /*0x58102d*/
      {
        g_Map_GlobalCellIndex = *v28; /*0x581032*/
        return g_CellClassArray; /*0x581037*/
      }
      return result; /*0x581043*/
    }
    v8 = v35; /*0x581046*/
  }
  v31 = v36 + ((_DWORD)v8 << 9); /*0x581051*/
  if ( v31 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v31)) == 0 ) /*0x581069*/
  {
    g_Map_GlobalCellIndex = v39; /*0x581074*/
    return g_CellClassArray; /*0x58106f*/
  }
  return result; /*0x581031*/
}


// ==== 0x00581090  ObjectClass::CleanupMapSystems  this=ObjectClass  sig=csp ====
int __thiscall sub_581090(_DWORD *this)
{
  int v2; // ebx
  void **v3; // esi
  _DWORD *v4; // esi
  _DWORD **v5; // ebx
  _DWORD *v6; // edi
  int v7; // ebp
  _DWORD *v8; // esi

  v2 = 13; /*0x581096*/
  v3 = (void **)(this + 6); /*0x58109b*/
  do /*0x5810b7*/
  {
    if ( *v3 ) /*0x58109e*/
    {
      __3_YAXPAX_Z(*v3); /*0x5810a5*/
      *v3 = 0; /*0x5810ad*/
    }
    ++v3; /*0x5810b3*/
    --v2; /*0x5810b6*/
  }
  while ( v2 ); /*0x5810b7*/
  v4 = (_DWORD *)this->abstractFlags; /*0x5810b9*/
  if ( v4 ) /*0x5810be*/
  {
    if ( *v4 ) /*0x5810c0*/
      (**(void (__thiscall ***)(_DWORD, int))*v4)(*v4, 3); /*0x5810ca*/
    __3_YAXPAX_Z(v4); /*0x5810cd*/
    this->abstractFlags = 0; /*0x5810d5*/
  }
  v5 = (_DWORD **)(this + 32); /*0x5810dc*/
  v6 = this + 35; /*0x5810e2*/
  v7 = 3; /*0x5810e8*/
  do /*0x58111c*/
  {
    (*(void (__thiscall **)(_DWORD *))(*v6 + 12))(v6); /*0x5810f1*/
    v8 = *v5; /*0x5810f4*/
    if ( *v5 ) /*0x5810f4*/
    {
      if ( *v8 ) /*0x5810fa*/
        (**(void (__thiscall ***)(_DWORD, int))*v8)(*v8, 3); /*0x581104*/
      __3_YAXPAX_Z(v8); /*0x581107*/
      *v5 = 0; /*0x58110f*/
    }
    ++v5; /*0x581115*/
    v6 += 6; /*0x581118*/
    --v7; /*0x58111b*/
  }
  while ( v7 ); /*0x58111c*/
  CleanupVeinholeSystem(); /*0x58111e*/
  Map_Destroy(); /*0x581123*/
  BuildingClass::FreeUpgradeQueue(); /*0x581128*/
  return BuildingClass::FreeUpgradeQueue2(); /*0x58112d*/
}


// ==== 0x00581140  LayerClass::DestroyCliff  this=LayerClass  sig=csp ====
int __fastcall MapClass_DestroyTerrain(int *a1, int a2, int a3)
{
  int result; // eax
  int *v4; // ecx
  int v5; // ebp
  int v6; // edx
  __int16 v7; // di
  _BYTE *v8; // esi
  int v9; // edx
  int *v10; // eax
  int v11; // edx
  int v12; // eax
  int *v13; // edi
  _DWORD *v14; // ebx
  int v15; // eax
  int v16; // esi
  unsigned int v17; // eax
  _DWORD *v18; // eax
  int i; // ebp
  int v20; // eax
  int v21; // esi
  int j; // ebp
  int v23; // eax
  int v24; // esi
  unsigned int v25; // eax
  _DWORD *v26; // eax
  unsigned int v27; // eax
  _DWORD *v28; // eax
  unsigned int v29; // eax
  _DWORD *v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // eax
  void **v34; // ebp
  int v35; // edi
  int v36; // eax
  int v37; // edx
  unsigned int v38; // esi
  _DWORD *v39; // esi
  int v40; // esi
  void *v41; // eax
  int *v42; // ecx
  __int16 v43; // di
  int v44; // edx
  _BYTE *v45; // esi
  int v46; // edx
  int *v47; // eax
  int v48; // edx
  int *v49; // eax
  int v50; // edx
  int *v51; // ebx
  _DWORD *v52; // ebp
  int k; // edi
  int v54; // eax
  int v55; // esi
  int v56; // eax
  int v57; // ecx
  unsigned int v58; // eax
  _DWORD *v59; // eax
  int m; // edi
  int v61; // eax
  int v62; // esi
  int v63; // eax
  int v64; // ecx
  int n; // edi
  int v66; // eax
  int v67; // esi
  unsigned int v68; // eax
  _DWORD *v69; // eax
  unsigned int v70; // eax
  _DWORD *v71; // eax
  int v72; // esi
  int v73; // eax
  bool v74; // sf
  int v75; // eax
  _DWORD *v76; // eax
  int v77; // edx
  int v78; // ebx
  int v79; // eax
  int v80; // eax
  void **v81; // ebp
  int v82; // edi
  int v83; // eax
  int v84; // edx
  unsigned int v85; // esi
  _DWORD *v86; // esi
  int v87; // esi
  void *v88; // eax
  int v89; // [esp+28h] [ebp-44h]
  int v90; // [esp+28h] [ebp-44h]
  int v91; // [esp+28h] [ebp-44h]
  int v92; // [esp+2Ch] [ebp-40h] BYREF
  int v93; // [esp+30h] [ebp-3Ch] BYREF
  int *v94; // [esp+34h] [ebp-38h]
  int v95; // [esp+38h] [ebp-34h]
  int v96; // [esp+3Ch] [ebp-30h]
  int v97; // [esp+40h] [ebp-2Ch]
  int v98; // [esp+44h] [ebp-28h]
  int v99; // [esp+48h] [ebp-24h]
  int v100; // [esp+50h] [ebp-1Ch] BYREF
  int v101; // [esp+54h] [ebp-18h]
  int v102; // [esp+58h] [ebp-14h] BYREF
  int v103; // [esp+5Ch] [ebp-10h]
  int v104; // [esp+60h] [ebp-Ch] BYREF
  int v105; // [esp+64h] [ebp-8h]
  int v106; // [esp+68h] [ebp-4h]

  v94 = a1;
  result = *(_DWORD *)(a3 + 56);
  if ( result == dword_ABC2C8 )
  {
    v4 = (int *)*((_DWORD *)MEMORY[0xA8ED2C] + dword_ABC2C8);
    v5 = 0;
    v6 = *v4;
    v7 = *(_WORD *)(a3 + 36) - *(unsigned __int8 *)(a3 + 282) % 6;
    HIWORD(v99) = *(unsigned __int8 *)(a3 + 282) / -6 + *(_WORD *)(a3 + 38);
    LOWORD(v99) = v7;
    v8 = (_BYTE *)(*(int (__thiscall **)(int *, _DWORD))(v6 + 140))(v4, 0);
    v89 = v7;
    v95 = (v7 << 8) + 128;
    v104 = v95;
    v93 = SHIWORD(v99);
    v106 = 0;
    v96 = (SHIWORD(v99) << 8) + 128;
    v105 = v96;
    (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v8 + 436))(v8, &v104);
    v9 = *(_DWORD *)v8;
    v8[129] = 0;
    v8[116] = 1;
    (*(void (__thiscall **)(_BYTE *, _DWORD))(v9 + 292))(v8, 0);
    if ( v8 )
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v8 + 32))(v8, 1);
    v10 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)MEMORY[0xA8ED2C] + g_TerrainTypeTable2) + 140))(
                   *((_DWORD *)MEMORY[0xA8ED2C] + g_TerrainTypeTable2),
                   0);
    v104 = v95;
    v105 = v96;
    v11 = *v10;
    v106 = 0;
    (*(void (__thiscall **)(int *, int *, _DWORD))(v11 + 216))(v10, &v104, 0);
    v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)MEMORY[0xA8ED2C] + g_TerrainTypeTable2 + 1) + 140))(
            *((_DWORD *)MEMORY[0xA8ED2C] + g_TerrainTypeTable2 + 1),
            0);
    v106 = 0;
    v105 = (v93 << 8) + 128;
    v104 = ((__int16)(v99 + 3) << 8) + 128;
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v12 + 216))(v12, &v104, 0);
    v13 = v94;
    Terrain::ConnectivityGraph(v94);
    v14 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + dword_ABC2C8);
    v92 = (*(int (__thiscall **)(_DWORD *))(*v14 + 156))(v14);
    if ( (int)v14[186] > 0 )
    {
      do
      {
        v15 = v14[185];
        v16 = 0;
        if ( v15 > 0 )
        {
          HIWORD(v94) = v5 + HIWORD(v99);
          do
          {
            LOWORD(v94) = v16 + v99;
            a3 = (int)v94;
            if ( *(_DWORD *)(v92 + 4 * (v16 + v5 * v15) + 16) && LayerClass::IsWithinUsableArea(v13, (__int16 *)&a3, 1) )
            {
              *(_WORD *)(v13[28] + 10 * CellToTileIndexMap(v13, (__int16 *)&a3)) = 0;
              v17 = (__int16)a3 + (SHIWORD(a3) << 9);
              if ( v17 >= 0x40000 || (v18 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v17)) == 0 )
              {
                g_Map_GlobalCellIndex = a3;
                v18 = g_CellClassArray;
              }
              House::AnnounceUpgrade((int)v18, -1);
            }
            v15 = v14[185];
            ++v16;
          }
          while ( v16 < v15 );
        }
        ++v5;
      }
      while ( v5 < v14[186] );
    }
    for ( i = 0; i < v14[186]; ++i )
    {
      v20 = v14[185];
      v21 = 0;
      if ( v20 > 0 )
      {
        HIWORD(v94) = i + HIWORD(v99);
        do
        {
          LOWORD(v94) = v21 + v99;
          a3 = (int)v94;
          if ( *(_DWORD *)(v92 + 4 * (v21 + i * v20) + 16)
            && LayerClass::IsWithinUsableArea(v13, (__int16 *)&a3, 1)
            && !*(_WORD *)(v13[28] + 10 * CellToTileIndexMap(v13, (__int16 *)&a3)) )
          {
            Radar::Update(v13, (__int16 *)&a3);
          }
          v20 = v14[185];
          ++v21;
        }
        while ( v21 < v20 );
      }
    }
    for ( j = 0; j < v14[186]; ++j )
    {
      v23 = v14[185];
      v24 = 0;
      if ( v23 > 0 )
      {
        HIWORD(v94) = j + HIWORD(v99);
        do
        {
          LOWORD(v94) = v24 + v99;
          a3 = (int)v94;
          if ( *(_DWORD *)(v92 + 4 * (v24 + j * v23) + 16) && LayerClass::IsWithinUsableArea(v13, (__int16 *)&a3, 1) )
          {
            v25 = (__int16)a3 + (SHIWORD(a3) << 9);
            if ( v25 >= 0x40000 || (v26 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v25)) == 0 )
            {
              g_Map_GlobalCellIndex = a3;
              v26 = g_CellClassArray;
            }
            AbstractClass::ClearTargetToMeClearManagerTarget(v26);
            BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)&a3);
          }
          v23 = v14[185];
          ++v24;
        }
        while ( v24 < v23 );
      }
    }
    v27 = (v93 << 9) + v89;
    a3 = v27;
    if ( v27 >= 0x40000 || (v28 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v27)) == 0 )
    {
      v28 = g_CellClassArray;
      g_Map_GlobalCellIndex = v99;
    }
    v106 = g_MapRenderState * *((char *)v28 + 283);
    v104 = v95;
    v105 = v96;
    Coord::To_Screen(MEMORY[0x887324], &v104, &v100);
    LOWORD(a3) = v99 + 5;
    HIWORD(a3) = HIWORD(v99) + 3;
    v29 = (__int16)(v99 + 5) + ((__int16)(HIWORD(v99) + 3) << 9);
    if ( v29 >= 0x40000 || (v30 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v29)) == 0 )
    {
      g_Map_GlobalCellIndex = a3;
      v30 = g_CellClassArray;
    }
    v106 = g_MapRenderState * *((char *)v30 + 283);
    v104 = ((__int16)(v99 + 5) << 8) + 128;
    v105 = ((__int16)(HIWORD(v99) + 3) << 8) + 128;
    Coord::To_Screen(MEMORY[0x887324], &v104, &v102);
    Cell::CreateCrater(v100 - 120, v101 - 60, v102 - v100 + 240, v103 - v101 + 120, 0);
    v94 = (int *)*((_DWORD *)MEMORY[0x8B4154] + AnimTypeClass::FindIndex(aXgrymed1));
    v97 = *((_DWORD *)MEMORY[0x8B4154] + AnimTypeClass::FindIndex(aXgrymed2));
    v98 = *((_DWORD *)MEMORY[0x8B4154] + AnimTypeClass::FindIndex(aXgrysml1));
    result = v93 + 3;
    v92 = v93;
    v99 = v93 + 3;
    if ( !__OFSUB__(v93, v93 + 3) )
    {
      result = v89 + 5;
      do
      {
        v31 = v89;
        v93 = v89;
        if ( v89 < result )
        {
          HIWORD(v96) = v92;
          do
          {
            LOWORD(v96) = v31;
            a3 = 0;
            v95 = 2;
            do
            {
              v32 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
              if ( v32 )
              {
                v33 = v32 - 1;
                if ( v33 )
                {
                  if ( v33 == 1 )
                    a3 = v98;
                }
                else
                {
                  a3 = v97;
                }
              }
              else
              {
                a3 = (int)v94;
              }
              v34 = (void **)__2_YAPAXI_Z(0x1C8u);
              if ( v34 )
              {
                v35 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -8, 8);
                v36 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -12, 12);
                v37 = (__int16)v31;
                v38 = (__int16)v31 + ((__int16)v92 << 9);
                if ( v38 >= 0x40000 || (v39 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v38), v31 = v93, !v39) )
                {
                  g_Map_GlobalCellIndex = v96;
                  v39 = g_CellClassArray;
                }
                v40 = g_MapRenderState * *((char *)v39 + 283);
                v105 = v35 + ((__int16)v92 << 8) + 128;
                v104 = (v37 << 8) + 128 + v36;
                v106 = v40;
                v41 = (void *)Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
                AnimClass::ctor(v34, (void *)a3, &v104, v41, 1, (void *)0x600, 0, 0);
              }
              --v95;
            }
            while ( v95 );
            v93 = ++v31;
            result = v89 + 5;
          }
          while ( v31 < v89 + 5 );
        }
        ++v92;
      }
      while ( v92 < v99 );
    }
  }
  else if ( result == dword_ABC2C8 + 1 )
  {
    v42 = (int *)*((_DWORD *)MEMORY[0xA8ED2C] + dword_ABC2C8 + 1);
    v43 = *(_WORD *)(a3 + 38) - (*(_BYTE *)(a3 + 282) >> 2);
    v44 = *v42;
    LOWORD(v99) = *(_WORD *)(a3 + 36) - (*(_BYTE *)(a3 + 282) & 3);
    HIWORD(v99) = v43;
    v45 = (_BYTE *)(*(int (__thiscall **)(int *, _DWORD))(v44 + 140))(v42, 0);
    a3 = (__int16)v99;
    v95 = ((__int16)v99 << 8) + 128;
    v104 = v95;
    v98 = v43;
    v106 = 0;
    v97 = (v43 << 8) + 128;
    v105 = v97;
    (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v45 + 436))(v45, &v104);
    v46 = *(_DWORD *)v45;
    v45[129] = 0;
    v45[116] = 1;
    (*(void (__thiscall **)(_BYTE *, _DWORD))(v46 + 292))(v45, 0);
    if ( v45 )
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v45 + 32))(v45, 1);
    v47 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)MEMORY[0xA8ED2C] + g_TerrainTypeTable2 + 3) + 140))(
                   *((_DWORD *)MEMORY[0xA8ED2C] + g_TerrainTypeTable2 + 3),
                   0);
    v104 = v95;
    v105 = v97;
    v48 = *v47;
    v106 = 0;
    (*(void (__thiscall **)(int *, int *, _DWORD))(v48 + 216))(v47, &v104, 0);
    v49 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)MEMORY[0xA8ED2C] + g_TerrainTypeTable2 + 2) + 140))(
                   *((_DWORD *)MEMORY[0xA8ED2C] + g_TerrainTypeTable2 + 2),
                   0);
    v105 = ((__int16)(HIWORD(v99) + 3) << 8) + 128;
    v104 = (a3 << 8) + 128;
    v50 = *v49;
    v106 = 0;
    (*(void (__thiscall **)(int *, int *, _DWORD))(v50 + 216))(v49, &v104, 0);
    v51 = v94;
    Terrain::ConnectivityGraph(v94);
    v52 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + dword_ABC2C8 + 1);
    v90 = (*(int (__thiscall **)(_DWORD *))(*v52 + 156))(v52);
    for ( k = 0; k < v52[186]; ++k )
    {
      v54 = v52[185];
      v55 = 0;
      if ( v54 > 0 )
      {
        HIWORD(v96) = k + HIWORD(v99);
        do
        {
          LOWORD(v96) = v55 + v99;
          v92 = v96;
          if ( *(_DWORD *)(v90 + 4 * (v55 + k * v54) + 16) && LayerClass::IsWithinUsableArea(v51, (__int16 *)&v92, 1) )
          {
            v56 = Cell::CoordToIndex(v51, (__int16 *)&v92);
            if ( v56 >= 0 )
            {
              v57 = v51[27];
              if ( v56 >= v57 )
                v56 = v57 - 1;
            }
            else
            {
              v56 = 0;
            }
            *(_WORD *)(v51[28] + 10 * v56) = 0;
            v58 = (__int16)v92 + (SHIWORD(v92) << 9);
            if ( v58 >= 0x40000 || (v59 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v58)) == 0 )
            {
              g_Map_GlobalCellIndex = v92;
              v59 = g_CellClassArray;
            }
            House::AnnounceUpgrade((int)v59, -1);
          }
          v54 = v52[185];
          ++v55;
        }
        while ( v55 < v54 );
      }
    }
    for ( m = 0; m < v52[186]; ++m )
    {
      v61 = v52[185];
      v62 = 0;
      if ( v61 > 0 )
      {
        HIWORD(v96) = m + HIWORD(v99);
        do
        {
          LOWORD(v96) = v62 + v99;
          v93 = v96;
          if ( *(_DWORD *)(v90 + 4 * (v62 + m * v61) + 16) && LayerClass::IsWithinUsableArea(v51, (__int16 *)&v93, 1) )
          {
            v63 = Cell::CoordToIndex(v51, (__int16 *)&v93);
            if ( v63 >= 0 )
            {
              v64 = v51[27];
              if ( v63 >= v64 )
                v63 = v64 - 1;
            }
            else
            {
              v63 = 0;
            }
            if ( !*(_WORD *)(v51[28] + 10 * v63) )
              Radar::Update(v51, (__int16 *)&v93);
          }
          v61 = v52[185];
          ++v62;
        }
        while ( v62 < v61 );
      }
    }
    for ( n = 0; n < v52[186]; ++n )
    {
      v66 = v52[185];
      v67 = 0;
      if ( v66 > 0 )
      {
        HIWORD(v96) = n + HIWORD(v99);
        do
        {
          LOWORD(v96) = v67 + v99;
          v92 = v96;
          if ( *(_DWORD *)(v90 + 4 * (v67 + n * v66) + 16) && LayerClass::IsWithinUsableArea(v51, (__int16 *)&v92, 1) )
          {
            v68 = (__int16)v92 + (SHIWORD(v92) << 9);
            if ( v68 >= 0x40000 || (v69 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v68)) == 0 )
            {
              g_Map_GlobalCellIndex = v92;
              v69 = g_CellClassArray;
            }
            AbstractClass::ClearTargetToMeClearManagerTarget(v69);
            BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)&v92);
          }
          v66 = v52[185];
          ++v67;
        }
        while ( v67 < v66 );
      }
    }
    v70 = a3 + (v98 << 9);
    if ( v70 >= 0x40000 || (v71 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v70)) == 0 )
    {
      v71 = g_CellClassArray;
      g_Map_GlobalCellIndex = v99;
    }
    v106 = g_MapRenderState * *((char *)v71 + 283);
    v104 = v95;
    v105 = v97;
    Coord::To_Screen(MEMORY[0x887324], &v104, &v102);
    v72 = (__int16)(v99 + 3);
    v73 = (__int16)(HIWORD(v99) + 5) << 9;
    v74 = v72 + v73 < 0;
    v75 = v72 + v73;
    LOWORD(v97) = v99 + 3;
    HIWORD(v97) = HIWORD(v99) + 5;
    if ( v74 || v75 >= 0x40000 || (v76 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v75)) == 0 )
    {
      g_Map_GlobalCellIndex = v97;
      v76 = g_CellClassArray;
    }
    v106 = g_MapRenderState * *((char *)v76 + 283);
    v104 = ((__int16)(v99 + 3) << 8) + 128;
    v105 = ((__int16)(HIWORD(v99) + 5) << 8) + 128;
    Coord::To_Screen(MEMORY[0x887324], &v104, &v100);
    Cell::CreateCrater(v100 - 120, v103 - 60, v102 - v100 + 240, v101 - v103 + 120, 0);
    v95 = *((_DWORD *)MEMORY[0x8B4154] + AnimTypeClass::FindIndex(aXgrymed1));
    v96 = *((_DWORD *)MEMORY[0x8B4154] + AnimTypeClass::FindIndex(aXgrymed2));
    v77 = *((_DWORD *)MEMORY[0x8B4154] + AnimTypeClass::FindIndex(aXgrysml1));
    result = v98;
    v99 = v77;
    v91 = v98;
    v94 = (int *)(v98 + 5);
    if ( !__OFSUB__(v98, v98 + 5) )
    {
      result = a3 + 3;
      do
      {
        v78 = a3;
        v93 = a3;
        if ( a3 < result )
        {
          HIWORD(v98) = v91;
          do
          {
            LOWORD(v98) = v78;
            v92 = 0;
            v97 = 2;
            do
            {
              v79 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
              if ( v79 )
              {
                v80 = v79 - 1;
                if ( v80 )
                {
                  if ( v80 == 1 )
                    v92 = v99;
                }
                else
                {
                  v92 = v96;
                }
              }
              else
              {
                v92 = v95;
              }
              v81 = (void **)__2_YAPAXI_Z(0x1C8u);
              if ( v81 )
              {
                v82 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -8, 8);
                v83 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, -12, 12);
                v84 = (__int16)v78;
                v85 = (__int16)v78 + ((__int16)v91 << 9);
                if ( v85 >= 0x40000 || (v86 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v85), v78 = v93, !v86) )
                {
                  g_Map_GlobalCellIndex = v98;
                  v86 = g_CellClassArray;
                }
                v87 = g_MapRenderState * *((char *)v86 + 283);
                v105 = v82 + ((__int16)v91 << 8) + 128;
                v104 = (v84 << 8) + 128 + v83;
                v106 = v87;
                v88 = (void *)Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2);
                AnimClass::ctor(v81, (void *)v92, &v104, v88, 1, (void *)0x600, 0, 0);
              }
              --v97;
            }
            while ( v97 );
            v93 = ++v78;
            result = a3 + 3;
          }
          while ( v78 < a3 + 3 );
        }
        ++v91;
      }
      while ( v91 < (int)v94 );
    }
  }
  return result;
}


// ==== 0x00581F50  MapClass::BuildSubzones  this=CellClass  sig=csp ====
_DWORD *__thiscall MapClass_BuildSubzones(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // edi

  v2 = 2; /*0x581f55*/
  v3 = this + 47; /*0x581f5a*/
  do /*0x581f75*/
  {
    (*(void (__thiscall **)(_DWORD *))(*v3 + 12))(v3); /*0x581f64*/
    Subzone::BuildGraph(this, v2--); /*0x581f6a*/
    v3 -= 6; /*0x581f70*/
  }
  while ( v2 >= 0 ); /*0x581f75*/
  return MapClass::AllocArrays(MEMORY[0x87E8B8]); /*0x581f81*/
}


// ==== 0x00581F90  Subzone::BuildGraph  this=IUnknown  sig=csp ====
int __thiscall Subzone::BuildGraph(IUnknown *this, IUnknown *aP2)
{
  IUnknown *v2; // esi
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edi
  int v6; // ebx
  unsigned int v7; // ecx
  bool v8; // cc
  unsigned int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  IUnknown *v15; // edi
  unsigned __int8 *v16; // edx
  unsigned int v17; // ebp
  int ecx15; // ecx
  IUnknown *v18; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  __int16 v25; // dx
  int v26; // ecx
  int ebp36; // ebp
  int v28; // edi
  IUnknown *v27; // eax
  int v30; // edx
  int result; // eax
  int v32; // ecx
  int v33; // eax
  _BYTE *v34; // esi
  int v35; // eax
  int v36; // edi
  int v37; // esi
  int v38; // ebp
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // edx
  int v43; // ecx
  int v44; // ecx
  int v45; // esi
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // edx
  int v50; // ecx
  bool v51; // zf
  int v52; // [esp+10h] [ebp-6Ch]
  int aP3; // [esp+14h] [ebp-68h]
  int v54; // [esp+18h] [ebp-64h]
  unsigned int v55; // [esp+18h] [ebp-64h]
  int v56; // [esp+1Ch] [ebp-60h]
  unsigned __int8 *v57; // [esp+1Ch] [ebp-60h]
  unsigned int v58; // [esp+20h] [ebp-5Ch]
  _BYTE *i; // [esp+20h] [ebp-5Ch]
  _WORD v60[2]; // [esp+24h] [ebp-58h] BYREF
  int v61; // [esp+28h] [ebp-54h]
  int v62; // [esp+2Ch] [ebp-50h]
  int v63; // [esp+30h] [ebp-4Ch]
  IUnknown *v64; // [esp+34h] [ebp-48h]
  int v65; // [esp+38h] [ebp-44h]
  int v66; // [esp+3Ch] [ebp-40h]
  int v67; // [esp+40h] [ebp-3Ch]
  _DWORD *v68; // [esp+44h] [ebp-38h]
  unsigned int v69; // [esp+48h] [ebp-34h] BYREF
  int v70; // [esp+4Ch] [ebp-30h]
  int v71; // [esp+50h] [ebp-2Ch]
  int v72; // [esp+54h] [ebp-28h]
  void **v73; // [esp+58h] [ebp-24h] BYREF
  void *Block; // [esp+5Ch] [ebp-20h]
  int v75; // [esp+60h] [ebp-1Ch]
  int v76; // [esp+64h] [ebp-18h]
  int v77; // [esp+68h] [ebp-14h]
  int v78; // [esp+6Ch] [ebp-10h]
  int v79; // [esp+70h] [ebp-Ch]
  int v80; // [esp+74h] [ebp-8h]
  int v81; // [esp+78h] [ebp-4h]
  char aP2a; // [esp+80h] [ebp+4h]

  v2 = this; /*0x581f9a*/
  v64 = this; /*0x581fa1*/
  v3 = *(_DWORD *)&this->__pad_68[4]; /*0x581fa5*/
  v4 = *(_DWORD *)&this->__pad_68[8]; /*0x581fa8*/
  v5 = *(_DWORD **)&v64->__pad_68[4 * (_DWORD)aP2 + 24]; /*0x581fab*/
  v6 = (int)&v64->__pad_8C[24 * (_DWORD)aP2]; /*0x581fb2*/
  v68 = v5; /*0x581fbc*/
  v7 = v4 + 10 * v3; /*0x581fc3*/
  v58 = v7; /*0x581fca*/
  v56 = 0; /*0x581fce*/
  if ( (int)v5[2] > 0 ) /*0x581fd2*/
  {
    v54 = 0; /*0x581fd4*/
    do /*0x581ffe*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)(*v5 + v54) + 12))(*v5 + v54); /*0x581fe2*/
      v8 = ++v56 < v5[2]; /*0x581ff4*/
      v54 += 24; /*0x581ffa*/
    }
    while ( v8 ); /*0x581ffe*/
    v7 = v58; /*0x582000*/
  }
  v9 = *(_DWORD *)&v2->__pad_68[8]; /*0x582004*/
  if ( v9 < v7 ) /*0x58200c*/
  {
    v10 = *(_DWORD *)v2->__pad_68 + 1; /*0x58200e*/
    do /*0x58202a*/
    {
      *(_WORD *)(v9 + 2 * (_DWORD)aP2) = 0; /*0x58200f*/
      *(_WORD *)(v9 + 6) = *(_WORD *)(v10 + 1); /*0x582019*/
      *(_BYTE *)(v9 + 8) = *(_BYTE *)v10; /*0x58201f*/
      v9 += 10; /*0x582022*/
      v10 += 4; /*0x582025*/
    }
    while ( v9 < v7 ); /*0x58202a*/
  }
  aP3 = 1; /*0x582034*/
  Subzone::Constructor(&v73, 0, 0); /*0x58203c*/
  ((void (__thiscall *)(void ***))v73[3])(&v73); /*0x582049*/
  v11 = *(_DWORD *)(v6 + 8); /*0x58204c*/
  v12 = *(_DWORD *)(v6 + 16); /*0x58204f*/
  LOWORD(v79) = 0; /*0x582056*/
  v80 = 0; /*0x58205b*/
  v81 = 0; /*0x58205f*/
  if ( v12 < v11 /*0x58207f*/
    || (*(_BYTE *)(v6 + 13) || !v11)
    && (v13 = *(_DWORD *)(v6 + 20), v13 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 8))(v6, v11 + v13, 0) )
  {
    v14 = *(_DWORD *)(v6 + 16); /*0x582086*/
    *(_DWORD *)(v6 + 16) = v14 + 1; /*0x582094*/
    Subzone::CopyDataFrom((int *)(*(_DWORD *)(v6 + 4) + 36 * v14), (int)&v73); /*0x58209d*/
  }
  v73 = &vt_VectorClass_SubzoneConnectionStruct; /*0x5820a6*/
  VectorClass::Cleanup5((int)&v73); /*0x5820ae*/
  *(_WORD *)(*(_DWORD *)(v6 + 4) + 24) = 0; /*0x5820b9*/
  *(_DWORD *)(*(_DWORD *)(v6 + 4) + 28) = 7; /*0x5820c0*/
  v15 = *(IUnknown **)&v2->__pad_68[8]; /*0x5820d4*/
  v16 = *(unsigned __int8 **)v2->__pad_68; /*0x5820d7*/
  v57 = v16; /*0x5820da*/
  v71 = 1 << ((_BYTE)aP2 + 1); /*0x5820de*/
  v72 = v71; /*0x5820e2*/
  v62 = v71 - 1; /*0x5820ed*/
  v17 = 0; /*0x5820fb*/
  v66 = *(_DWORD *)&stru_87C374.__pad_14B0[8376] + *(_DWORD *)&stru_87C374.__pad_14B0[8380] + 1; /*0x5820ff*/
  v69 = 0; /*0x582103*/
  v70 = 0; /*0x582107*/
  v55 = 0; /*0x58210b*/
  v52 = 0; /*0x58210f*/
  while ( (unsigned int)v15 < v58 ) /*0x582113*/
  {
    ecx15 = *v16; /*0x582122*/
    v63 = ecx15; /*0x582128*/
    if ( (int)&aP2->field_0 + 1 >= 3 ) /*0x58212c*/
      v61 = 0; /*0x582138*/
    else
      v61 = *((__int16 *)&v15->field_0 + (_DWORD)&aP2->field_0 + 1); /*0x582132*/
    if ( ecx15 == 7 || *((_WORD *)&v15->field_0 + (_DWORD)aP2) ) /*0x582150*/
    {
      v15 = (IUnknown *)((char *)v15 + 10); /*0x5822d0*/
      v16 += 4; /*0x5822d3*/
      ++v17; /*0x5822d6*/
      v57 = v16; /*0x5822d7*/
      v55 = v17; /*0x5822db*/
    }
    else
    {
      v60[1] = v52; /*0x582164*/
      dword_ABDE8C = 0; /*0x582178*/
      v60[0] = v17; /*0x582182*/
      v18 = (IUnknown *)Radar::ProcessSubzone(v2, v15, aP2, (IUnknown *)aP3, (IUnknown *)&v69, (IUnknown *)v60); /*0x582194*/
      VectorClass::ConstructSubzone(&v73, 0, 0); /*0x582196*/
      v73 = &vt_DynamicVectorClass_SubzoneConnectionStruct; /*0x58219f*/
      v78 = 10; /*0x5821a7*/
      v77 = 0; /*0x5821af*/
      VectorClass::CleanupSubzone((int)&v73); /*0x5821b7*/
      v20 = *(_DWORD *)(v6 + 8); /*0x5821bd*/
      v21 = *(_DWORD *)(v6 + 16); /*0x5821c0*/
      LOWORD(v79) = 0; /*0x5821c7*/
      v80 = 0; /*0x5821cc*/
      v81 = 0; /*0x5821d0*/
      if ( v21 < v20 /*0x5821f1*/
        || (*(_BYTE *)(v6 + 13) || !v20)
        && (v22 = *(_DWORD *)(v6 + 20), v22 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 8))(v6, v20 + v22, 0) )
      {
        v23 = *(_DWORD *)(v6 + 16); /*0x5821f8*/
        *(_DWORD *)(v6 + 16) = v23 + 1; /*0x582206*/
        Subzone::CopyDataFrom((int *)(*(_DWORD *)(v6 + 4) + 36 * v23), (int)&v73); /*0x58220f*/
      }
      v73 = &vt_VectorClass_SubzoneConnectionStruct; /*0x582218*/
      if ( Block && BYTE1(v76) ) /*0x58222a*/
      {
        __3_YAXPAX_Z(Block); /*0x58222d*/
        Block = 0; /*0x582235*/
      }
      BYTE1(v76) = 0; /*0x582241*/
      v75 = 0; /*0x58224b*/
      v24 = *(_DWORD *)(v6 + 4) + 36 * (unsigned __int16)aP3; /*0x582259*/
      v25 = v61; /*0x582260*/
      *(_DWORD *)(v24 + 28) = v63; /*0x582265*/
      *(_WORD *)(v24 + 24) = v25; /*0x582268*/
      *(_DWORD *)(v24 + 20) = 16; /*0x582275*/
      v63 = 65 * ((__int16)v52 / 4); /*0x58228b*/
      *(_DWORD *)(v24 + 32) = (__int16)v17 / 4 + 130 * ((__int16)v52 / 4) + 131; /*0x5822ab*/
      v16 = &v57[4 * (_DWORD)v18]; /*0x5822b3*/
      ++aP3; /*0x5822b6*/
      v26 = 5 * (_DWORD)v18; /*0x5822ba*/
      v17 = (unsigned int)v18 + v55; /*0x5822bd*/
      v2 = v64; /*0x5822bf*/
      v15 = (IUnknown *)((char *)v15 + 2 * v26); /*0x5822c3*/
      v57 = v16; /*0x5822c6*/
      v55 = v17; /*0x5822ca*/
    }
    if ( v17 == v66 ) /*0x5822e3*/
    {
      v17 = 0; /*0x5822ee*/
      ++v52; /*0x5822f0*/
      v55 = 0; /*0x5822fa*/
      v69 = 0; /*0x582300*/
      v70 = v52 - (v62 & v52); /*0x582304*/
    }
    else if ( (v17 & v62) == 0 ) /*0x582310*/
    {
      v69 = v17; /*0x582312*/
    }
  }
  ebp36 = 0; /*0x582330*/
  *(_DWORD *)&v2->__pad_68[4 * (_DWORD)aP2 + 12] = (unsigned __int16)aP3; /*0x582332*/
  if ( v2->field_60 > 0 ) /*0x58233b*/
  {
    v28 = 0; /*0x58233d*/
    do /*0x582366*/
    {
      v27 = (IUnknown *)(v2->field_54 + v28); /*0x582344*/
      if ( LOBYTE(v27->field_8) ) /*0x582346*/
        RadarClass::RenderBlips(&v2->field_0, v27, (int)aP2); /*0x582358*/
      ++ebp36; /*0x582360*/
      v28 += 16; /*0x582361*/
    }
    while ( ebp36 < v2->field_60 ); /*0x582366*/
  }
  v30 = 0; /*0x582368*/
  v61 = 0; /*0x58236a*/
  do /*0x58248a*/
  {
    result = v30 + *v68; /*0x582374*/
    v32 = *(_DWORD *)(result + 16); /*0x582376*/
    if ( v32 > 0 ) /*0x58237b*/
    {
      v33 = *(_DWORD *)(result + 4); /*0x582381*/
      v62 = v32; /*0x582384*/
      v34 = (_BYTE *)(v33 + 8); /*0x582388*/
      for ( i = (_BYTE *)(v33 + 8); ; v34 = i ) /*0x58238b*/
      {
        v35 = *((_DWORD *)v34 - 1); /*0x58239c*/
        v36 = (unsigned __int16)v35; /*0x58239e*/
        aP2a = *v34; /*0x5823a4*/
        LOBYTE(v67) = *v34; /*0x5823ab*/
        v37 = *(_DWORD *)(v6 + 4) + 36 * (unsigned __int16)v35; /*0x5823b8*/
        v38 = HIWORD(v35); /*0x5823bd*/
        v39 = *(_DWORD *)(v37 + 8); /*0x5823c3*/
        if ( *(_DWORD *)(v37 + 16) < v39 /*0x5823e8*/
          || (*(_BYTE *)(v37 + 13) || !v39)
          && (v40 = *(_DWORD *)(v37 + 20), v40 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v37 + 8))(v37, v39 + v40, 0) )
        {
          v41 = *(_DWORD *)(v37 + 16); /*0x5823ef*/
          v42 = *(_DWORD *)(v37 + 4); /*0x5823f2*/
          *(_DWORD *)(v37 + 16) = v41 + 1; /*0x5823f8*/
          v43 = v67; /*0x5823fb*/
          *(_DWORD *)(v42 + 8 * v41) = v38; /*0x5823ff*/
          *(_DWORD *)(v42 + 8 * v41 + 4) = v43; /*0x582402*/
        }
        v44 = *(_DWORD *)(v6 + 4); /*0x582406*/
        LOBYTE(v65) = aP2a; /*0x582414*/
        v45 = v44 + 36 * v38; /*0x582418*/
        v46 = *(_DWORD *)(v45 + 8); /*0x58241b*/
        if ( *(_DWORD *)(v45 + 16) < v46 /*0x582441*/
          || (*(_BYTE *)(v45 + 13) || !v46)
          && (v47 = *(_DWORD *)(v45 + 20), v47 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v45 + 8))(v45, v46 + v47, 0) )
        {
          v48 = *(_DWORD *)(v45 + 16); /*0x582448*/
          v49 = *(_DWORD *)(v45 + 4); /*0x58244b*/
          *(_DWORD *)(v45 + 16) = v48 + 1; /*0x582451*/
          v50 = v65; /*0x582454*/
          *(_DWORD *)(v49 + 8 * v48) = v36; /*0x582458*/
          *(_DWORD *)(v49 + 8 * v48 + 4) = v50; /*0x58245b*/
        }
        result = v62 - 1; /*0x58246a*/
        v51 = v62 == 1; /*0x58246a*/
        i += 12; /*0x58246b*/
        --v62; /*0x58246f*/
        if ( v51 ) /*0x582473*/
          break; /*0x582473*/
      }
      v30 = v61; /*0x582479*/
    }
    v30 += 24; /*0x58247d*/
    v61 = v30; /*0x582486*/
  }
  while ( v30 < 6144 ); /*0x58248a*/
  return result; /*0x582490*/
}


// ==== 0x005824A0  Radar::ProcessSubzone  this=IUnknown  sig=csp ====
int __thiscall Radar::ProcessSubzone(
        _DWORD *this,
        IUnknown *aP1,
        IUnknown *aP2,
        IUnknown *aP3,
        IUnknown *aP4,
        IUnknown *aP5)
{
  IUnknown *v6; // ebp
  IUnknown *v7; // ebx
  IUnknown *v8; // esi
  int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  int v17; // ebp
  int v18; // ecx
  int v19; // edi
  _DWORD *v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  int *v28; // ecx
  int v29; // edx
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ebp
  int v34; // edi
  int v35; // ecx
  _DWORD *v36; // edx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int *v44; // ecx
  int v45; // edx
  int v46; // ecx
  IUnknown *v47; // ebp
  IUnknown *v48; // eax
  int v49; // ebx
  int v50; // ecx
  __int16 v51; // di
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // edi
  int v56; // esi
  int v57; // edx
  _DWORD *v58; // ecx
  int v59; // eax
  int v60; // ecx
  int v61; // eax
  int v62; // eax
  int v63; // ecx
  int v64; // edx
  int v65; // eax
  int *v66; // ecx
  int v67; // edx
  IUnknown *v68; // esi
  int v69; // ecx
  int v70; // edx
  int v71; // eax
  IUnknown *v72; // ebp
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // ebx
  int v76; // esi
  int v77; // edx
  _DWORD *v78; // ecx
  int v79; // eax
  int v80; // ecx
  int v81; // eax
  int v82; // eax
  int v83; // ecx
  int v84; // edx
  int v85; // eax
  int *v86; // ecx
  int v87; // edx
  int v89; // [esp+18h] [ebp-5Ch]
  int v90; // [esp+18h] [ebp-5Ch]
  int v91; // [esp+18h] [ebp-5Ch]
  int v92; // [esp+18h] [ebp-5Ch]
  int v94; // [esp+20h] [ebp-54h]
  int v95; // [esp+24h] [ebp-50h] BYREF
  int v96; // [esp+28h] [ebp-4Ch]
  int v97; // [esp+2Ch] [ebp-48h]
  int v98; // [esp+30h] [ebp-44h]
  int v99; // [esp+34h] [ebp-40h]
  int v100; // [esp+38h] [ebp-3Ch]
  int v101; // [esp+3Ch] [ebp-38h] BYREF
  _DWORD *v102; // [esp+40h] [ebp-34h]
  int v103; // [esp+44h] [ebp-30h]
  int v104; // [esp+48h] [ebp-2Ch] BYREF
  int v105; // [esp+4Ch] [ebp-28h] BYREF
  int v106; // [esp+50h] [ebp-24h]
  int v107; // [esp+54h] [ebp-20h] BYREF
  int v108; // [esp+58h] [ebp-1Ch] BYREF
  int v109; // [esp+5Ch] [ebp-18h]
  int v110; // [esp+60h] [ebp-14h]
  int v111; // [esp+64h] [ebp-10h]
  int v112; // [esp+6Ch] [ebp-8h]
  int v113; // [esp+70h] [ebp-4h]
  IUnknown *aP1a; // [esp+78h] [ebp+4h]
  IUnknown *aP5a; // [esp+88h] [ebp+14h]

  v6 = aP1; /*0x5824a5*/
  v98 = SHIWORD(aP1->field_4); /*0x5824b3*/
  v7 = aP1; /*0x5824be*/
  v8 = aP1; /*0x5824c0*/
  v9 = SLOWORD(aP5->field_0); /*0x5824c6*/
  aP5a = (IUnknown *)SHIWORD(aP5->field_0); /*0x5824cd*/
  v112 = 0; /*0x5824d4*/
  LOBYTE(v113) = 0; /*0x5824dc*/
  v10 = aP4->field_0; /*0x5824e4*/
  v106 = aP4->field_4; /*0x5824e6*/
  v11 = aP4->field_8; /*0x5824ea*/
  v12 = aP4->field_C; /*0x5824ed*/
  v97 = -1; /*0x5824f0*/
  v96 = v9; /*0x5824fc*/
  v100 = v11 + v10 - 1; /*0x582500*/
  v94 = v9; /*0x582508*/
  v99 = v10; /*0x58250c*/
  v111 = v12 + v106 - 1; /*0x582518*/
  v102 = (_DWORD *)*(this + (_DWORD)aP2 + 32); /*0x582527*/
  v13 = LOBYTE(aP1->field_8); /*0x58252d*/
  while ( v9 >= v10 ) /*0x582538*/
  {
    v14 = LOBYTE(v7->field_8) - v13; /*0x582541*/
    if ( (int)((HIDWORD(v14) ^ v14) - HIDWORD(v14)) >= 2 ) /*0x582549*/
      break; /*0x582549*/
    *((_WORD *)&v7->field_0 + (_DWORD)aP2) = (_WORD)aP3; /*0x582556*/
    v13 = LOBYTE(v7->field_8); /*0x58255a*/
    v15 = *(__int16 *)&v7[-1].field_1602A[2]; /*0x58255d*/
    v7 = (IUnknown *)((char *)v7 - 10); /*0x582565*/
    --v9; /*0x582568*/
    if ( v15 != v98 ) /*0x58256b*/
      break; /*0x58256b*/
    v10 = v99; /*0x582532*/
  }
  v96 = v9; /*0x582571*/
  v89 = *((__int16 *)&v7->field_0 + (_DWORD)aP2); /*0x58257b*/
  if ( v89 > 0 ) /*0x58257f*/
  {
    v16 = LOBYTE(v7->field_8) - v13; /*0x58258c*/
    if ( (int)((HIDWORD(v16) ^ v16) - HIDWORD(v16)) < 2 && v89 != -1 ) /*0x58259f*/
    {
      HIWORD(v101) = (_WORD)aP5a; /*0x5825b1*/
      LOWORD(v101) = v9; /*0x5825bd*/
      if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v101, (TechnoClass *)1) ) /*0x5825c2*/
      {
        HIWORD(v101) = (_WORD)aP5a; /*0x5825de*/
        LOWORD(v101) = v9 + 1; /*0x5825ea*/
        if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v101, (TechnoClass *)1) ) /*0x5825ef*/
        {
          v17 = (unsigned __int16)aP3 | (v89 << 16); /*0x582612*/
          LOBYTE(v113) = 0; /*0x58261a*/
          v18 = *(_DWORD *)(*v102 + 24 * ((unsigned __int8)aP3 & 0xF | (16 * (v89 & 0xF))) + 16); /*0x58262a*/
          v19 = *v102 + 24 * ((unsigned __int8)aP3 & 0xF | (16 * (v89 & 0xF))); /*0x58262e*/
          v20 = *(_DWORD **)(v19 + 4); /*0x582631*/
          v21 = v18 - 1; /*0x582635*/
          if ( v18 - 1 < 0 ) /*0x58263a*/
          {
LABEL_14:
            v22 = *(_DWORD *)(v19 + 8); /*0x582646*/
            if ( v18 < v22 /*0x58266a*/
              || (*(_BYTE *)(v19 + 13) || !v22)
              && (v23 = *(_DWORD *)(v19 + 20), v23 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v19 + 8))(v19, v22 + v23, 0) )
            {
              v24 = *(_DWORD *)(v19 + 16); /*0x582671*/
              v25 = v24 + 1; /*0x582674*/
              v26 = 3 * v24; /*0x582677*/
              v27 = *(_DWORD *)(v19 + 4); /*0x58267a*/
              *(_DWORD *)(v19 + 16) = v25; /*0x58267d*/
              v28 = (int *)(v27 + 4 * v26); /*0x582680*/
              v29 = v113; /*0x582683*/
              *v28 = v17; /*0x582687*/
              v28[1] = v17; /*0x582689*/
              v28[2] = v29; /*0x58268c*/
            }
          }
          else
          {
            while ( v17 != *v20 ) /*0x58263e*/
            {
              v20 += 3; /*0x582640*/
              if ( --v21 < 0 ) /*0x582644*/
                goto LABEL_14; /*0x582644*/
            }
          }
          v6 = aP1; /*0x582693*/
          v9 = v96; /*0x582697*/
          v97 = v89; /*0x58269b*/
        }
      }
    }
  }
  v30 = LOBYTE(v6->field_8); /*0x5826a9*/
  if ( SHIWORD(v6->field_4) == v98 ) /*0x5826ae*/
  {
    do /*0x5826f5*/
    {
      if ( v94 > v100 ) /*0x5826ba*/
        break; /*0x5826ba*/
      v31 = LOBYTE(v8->field_8) - v30; /*0x5826c3*/
      if ( (int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) >= 2 ) /*0x5826cb*/
        break; /*0x5826cb*/
      *((_WORD *)&v8->field_0 + (_DWORD)aP2) = (_WORD)aP3; /*0x5826da*/
      v30 = LOBYTE(v8->field_8); /*0x5826e0*/
      v8 = (IUnknown *)((char *)v8 + 10); /*0x5826e7*/
      ++v94; /*0x5826eb*/
    }
    while ( SHIWORD(v8->field_4) == v98 ); /*0x5826f5*/
  }
  v90 = *((__int16 *)&v8->field_0 + (_DWORD)aP2); /*0x582701*/
  if ( v90 > 0 ) /*0x582705*/
  {
    v32 = LOBYTE(v8->field_8) - v30; /*0x582712*/
    if ( (int)((HIDWORD(v32) ^ v32) - HIDWORD(v32)) < 2 && v90 != v97 ) /*0x58272a*/
    {
      LOWORD(v101) = v94; /*0x582741*/
      HIWORD(v101) = (_WORD)aP5a; /*0x58274d*/
      if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v101, (TechnoClass *)1) ) /*0x582752*/
      {
        LOWORD(v101) = v94 - 1; /*0x582770*/
        HIWORD(v101) = (_WORD)aP5a; /*0x58277c*/
        if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v101, (TechnoClass *)1) ) /*0x582781*/
        {
          v33 = (unsigned __int16)aP3 | (v90 << 16); /*0x5827a8*/
          LOBYTE(v113) = 0; /*0x5827b2*/
          v34 = *v102 + 24 * ((unsigned __int8)aP3 & 0xF | (16 * (v90 & 0xF))); /*0x5827bc*/
          v35 = *(_DWORD *)(v34 + 16); /*0x5827bf*/
          v36 = *(_DWORD **)(v34 + 4); /*0x5827c3*/
          v37 = v35 - 1; /*0x5827c6*/
          if ( v35 - 1 < 0 ) /*0x5827cb*/
          {
LABEL_33:
            v38 = *(_DWORD *)(v34 + 8); /*0x5827d7*/
            if ( v35 < v38 /*0x5827fb*/
              || (*(_BYTE *)(v34 + 13) || !v38)
              && (v39 = *(_DWORD *)(v34 + 20), v39 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v34 + 8))(v34, v39 + v38, 0) )
            {
              v40 = *(_DWORD *)(v34 + 16); /*0x582802*/
              v41 = v40 + 1; /*0x582805*/
              v42 = 3 * v40; /*0x582808*/
              v43 = *(_DWORD *)(v34 + 4); /*0x58280b*/
              *(_DWORD *)(v34 + 16) = v41; /*0x58280e*/
              v44 = (int *)(v43 + 4 * v42); /*0x582811*/
              v45 = v113; /*0x582814*/
              *v44 = v33; /*0x582818*/
              v44[1] = v33; /*0x58281a*/
              v44[2] = v45; /*0x58281d*/
            }
          }
          else
          {
            while ( v33 != *v36 ) /*0x5827cf*/
            {
              v36 += 3; /*0x5827d1*/
              if ( --v37 < 0 ) /*0x5827d5*/
                goto LABEL_33; /*0x5827d5*/
            }
          }
          v6 = aP1; /*0x582824*/
          v9 = v96; /*0x582828*/
          v97 = v90; /*0x58282c*/
        }
      }
    }
  }
  v46 = this->q0F8; /*0x58284b*/
  v110 = ((char *)v8 - (char *)v6) / 10 - 1; /*0x582851*/
  v109 = v46 + *(this + 61) + 1; /*0x58285f*/
  v101 = 10 * v109; /*0x582868*/
  v47 = (IUnknown *)((char *)v7 - 10 * v109); /*0x58286c*/
  v48 = (IUnknown *)((char *)v7 + 10 * v109); /*0x58286e*/
  v49 = v9; /*0x582870*/
  aP1a = v48; /*0x582872*/
  v95 = 0; /*0x582878*/
  if ( v9 > v94 ) /*0x582886*/
    return v110; /*0x582886*/
  do /*0x582aca*/
  {
    v50 = *((__int16 *)&v47->field_0 + (_DWORD)aP2); /*0x582892*/
    v91 = v50; /*0x582897*/
    if ( v49 == v9 ) /*0x58289b*/
    {
      v51 = v49; /*0x5828a5*/
      HIWORD(v103) = (_WORD)aP5a; /*0x5828a7*/
      LOWORD(v103) = v49 + 1; /*0x5828b3*/
      v95 = v103; /*0x5828c0*/
      v52 = (int)&v47->field_8 + 10 * v109 + 2; /*0x5828c4*/
    }
    else
    {
      v51 = v49; /*0x5828ce*/
      if ( v49 >= v94 ) /*0x5828d2*/
      {
        LOWORD(v105) = v49 - 1; /*0x582902*/
        HIWORD(v105) = (_WORD)aP5a; /*0x582907*/
        v95 = v105; /*0x582914*/
        v52 = (int)v47 + v101 - 10; /*0x582918*/
      }
      else
      {
        LOWORD(v104) = v49; /*0x5828dc*/
        HIWORD(v104) = (_WORD)aP5a; /*0x5828e1*/
        v95 = v104; /*0x5828ee*/
        v52 = (int)v47 + v101; /*0x5828f2*/
      }
    }
    if ( v50 || (int)aP5a <= v106 || v49 < v99 || v49 > v100 ) /*0x582939*/
    {
      if ( v50 != (unsigned __int16)aP3 && v50 != v97 ) /*0x5829ad*/
      {
        if ( v50 ) /*0x5829b5*/
        {
          v54 = *(unsigned __int8 *)(v52 + 8) - LOBYTE(v47->field_8); /*0x5829c9*/
          if ( (int)((HIDWORD(v54) ^ v54) - HIDWORD(v54)) < 2 /*0x5829e2*/
            && LayerClass::IsWithinUsableArea(this, (IUnknown *)&v95, (TechnoClass *)1) )
          {
            HIWORD(v108) = (_WORD)aP5a - 1; /*0x5829fd*/
            LOWORD(v108) = v51; /*0x582a07*/
            if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v108, (TechnoClass *)1) ) /*0x582a0c*/
            {
              v55 = (unsigned __int16)aP3 | (v91 << 16); /*0x582a26*/
              if ( v49 < v99 || (LOBYTE(v113) = 0, v49 > v100) ) /*0x582a37*/
                LOBYTE(v113) = 1; /*0x582a39*/
              v56 = *v102 + 24 * ((unsigned __int8)aP3 & 0xF | (16 * (v91 & 0xF))); /*0x582a52*/
              v57 = *(_DWORD *)(v56 + 16); /*0x582a55*/
              v58 = *(_DWORD **)(v56 + 4); /*0x582a59*/
              v59 = v57 - 1; /*0x582a5c*/
              if ( v57 - 1 < 0 ) /*0x582a61*/
              {
LABEL_65:
                v60 = *(_DWORD *)(v56 + 8); /*0x582a6d*/
                if ( v57 < v60 /*0x582a8f*/
                  || (*(_BYTE *)(v56 + 13) || !v60)
                  && (v61 = *(_DWORD *)(v56 + 20), v61 > 0)
                  && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v56 + 8))(v56, v61 + v60, 0) )
                {
                  v62 = *(_DWORD *)(v56 + 16); /*0x582a96*/
                  v63 = v62 + 1; /*0x582a99*/
                  v64 = 3 * v62; /*0x582a9c*/
                  v65 = *(_DWORD *)(v56 + 4); /*0x582a9f*/
                  *(_DWORD *)(v56 + 16) = v63; /*0x582aa2*/
                  v66 = (int *)(v65 + 4 * v64); /*0x582aa5*/
                  v67 = v113; /*0x582aa8*/
                  *v66 = v55; /*0x582aac*/
                  v66[1] = v55; /*0x582aae*/
                  v66[2] = v67; /*0x582ab1*/
                }
              }
              else
              {
                while ( v55 != *v58 ) /*0x582a65*/
                {
                  v58 += 3; /*0x582a67*/
                  if ( --v59 < 0 ) /*0x582a6b*/
                    goto LABEL_65; /*0x582a6b*/
                }
              }
              v97 = v91; /*0x582ab8*/
            }
          }
        }
      }
    }
    else if ( SHIWORD(v47->field_4) == v98 ) /*0x582943*/
    {
      v53 = *(unsigned __int8 *)(v52 + 8) - LOBYTE(v47->field_8); /*0x582957*/
      if ( (int)((HIDWORD(v53) ^ v53) - HIDWORD(v53)) < 2 ) /*0x58295f*/
      {
        LOWORD(v107) = v51; /*0x58297f*/
        HIWORD(v107) = (_WORD)aP5a - 1; /*0x582984*/
        Radar::ProcessSubzone(this, v47, aP2, aP3, aP4, (IUnknown *)&v107); /*0x582989*/
        goto LABEL_73; /*0x58298e*/
      }
    }
    v47 = (IUnknown *)((char *)v47 + 10); /*0x582abc*/
    ++v49; /*0x582abf*/
LABEL_73:
    v9 = v96; /*0x582ac0*/
  }
  while ( v49 <= v94 ); /*0x582aca*/
  if ( v96 <= v94 ) /*0x582ad2*/
  {
    v68 = aP1a; /*0x582ad8*/
    do /*0x582ae6*/
    {
      v69 = *((__int16 *)&v68->field_0 + (_DWORD)aP2); /*0x582ae6*/
      v92 = v69; /*0x582aea*/
      if ( v9 == v96 ) /*0x582aee*/
      {
        LOWORD(v108) = v9 + 1; /*0x582af9*/
        HIWORD(v108) = (_WORD)aP5a; /*0x582b08*/
        v70 = v108; /*0x582b0d*/
        v71 = (int)&v68->field_8 - v101 + 2; /*0x582b11*/
      }
      else
      {
        if ( v9 < v94 ) /*0x582b1a*/
        {
          v72 = aP5a; /*0x582b20*/
          LOWORD(v107) = v9; /*0x582b29*/
          v71 = (int)v68 - v101; /*0x582b2e*/
          HIWORD(v107) = (_WORD)aP5a; /*0x582b30*/
          v95 = v107; /*0x582b39*/
          goto LABEL_82; /*0x582b3d*/
        }
        v71 = (int)v68 - 10 * v109 - 10; /*0x582b4d*/
        LOWORD(v106) = v9 - 1; /*0x582b52*/
        HIWORD(v106) = (_WORD)aP5a; /*0x582b5f*/
        v70 = v106; /*0x582b64*/
      }
      v72 = aP5a; /*0x582b68*/
      v95 = v70; /*0x582b6f*/
LABEL_82:
      if ( v69 || (int)v72 >= v111 || v9 < v99 || v9 > v100 ) /*0x582b87*/
      {
        if ( v69 != (unsigned __int16)aP3 && v69 != v97 ) /*0x582bfa*/
        {
          if ( v69 ) /*0x582c02*/
          {
            v74 = LOBYTE(aP1a->field_8) - *(unsigned __int8 *)(v71 + 8); /*0x582c18*/
            if ( (int)((HIDWORD(v74) ^ v74) - HIDWORD(v74)) < 2 /*0x582c33*/
              && LayerClass::IsWithinUsableArea(this, (IUnknown *)&v95, (TechnoClass *)1) )
            {
              LOWORD(v104) = v9; /*0x582c4a*/
              HIWORD(v104) = (_WORD)v72 + 1; /*0x582c4f*/
              if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&v104, (TechnoClass *)1) ) /*0x582c54*/
              {
                v75 = (unsigned __int16)aP3 | (v92 << 16); /*0x582c6e*/
                if ( v9 < v99 || (LOBYTE(v113) = 0, v9 > v100) ) /*0x582c7f*/
                  LOBYTE(v113) = 1; /*0x582c81*/
                v76 = *v102 + 24 * ((unsigned __int8)aP3 & 0xF | (16 * (v92 & 0xF))); /*0x582c9c*/
                v77 = *(_DWORD *)(v76 + 16); /*0x582c9f*/
                v78 = *(_DWORD **)(v76 + 4); /*0x582ca3*/
                v79 = v77 - 1; /*0x582ca6*/
                if ( v77 - 1 < 0 ) /*0x582cab*/
                {
LABEL_102:
                  v80 = *(_DWORD *)(v76 + 8); /*0x582cb7*/
                  if ( v77 < v80 /*0x582cd9*/
                    || (*(_BYTE *)(v76 + 13) || !v80)
                    && (v81 = *(_DWORD *)(v76 + 20), v81 > 0)
                    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v76 + 8))(v76, v81 + v80, 0) )
                  {
                    v82 = *(_DWORD *)(v76 + 16); /*0x582ce0*/
                    v83 = v82 + 1; /*0x582ce3*/
                    v84 = 3 * v82; /*0x582ce6*/
                    v85 = *(_DWORD *)(v76 + 4); /*0x582ce9*/
                    *(_DWORD *)(v76 + 16) = v83; /*0x582cec*/
                    v86 = (int *)(v85 + 4 * v84); /*0x582cef*/
                    v87 = v113; /*0x582cf2*/
                    *v86 = v75; /*0x582cf6*/
                    v86[1] = v75; /*0x582cf8*/
                    v86[2] = v87; /*0x582cfb*/
                  }
                }
                else
                {
                  while ( v75 != *v78 ) /*0x582caf*/
                  {
                    v78 += 3; /*0x582cb1*/
                    if ( --v79 < 0 ) /*0x582cb5*/
                      goto LABEL_102; /*0x582cb5*/
                  }
                }
                v97 = v92; /*0x582cfe*/
              }
            }
          }
        }
        ++v9; /*0x582d09*/
        aP1a = (IUnknown *)((char *)aP1a + 10); /*0x582d0a*/
        v68 = aP1a; /*0x582d0e*/
      }
      else if ( SHIWORD(v68->field_4) == v98 /*0x582ba7*/
             && (v73 = LOBYTE(v68->field_8) - *(unsigned __int8 *)(v71 + 8),
                 (int)((HIDWORD(v73) ^ v73) - HIDWORD(v73)) < 2) )
      {
        LOWORD(v105) = v9; /*0x582bc3*/
        HIWORD(v105) = (_WORD)v72 + 1; /*0x582bc8*/
        Radar::ProcessSubzone(this, v68, aP2, aP3, aP4, (IUnknown *)&v105); /*0x582bcd*/
      }
      else
      {
        v68 = (IUnknown *)((char *)v68 + 10); /*0x582bd7*/
        ++v9; /*0x582bda*/
        aP1a = v68; /*0x582bdb*/
      }
    }
    while ( v9 <= v94 ); /*0x582ae6*/
  }
  return v110; /*0x582d1e*/
}


// ==== 0x00582D30  ObjectClass::SmallFunc_582D30  this=ObjectClass  sig=csp ====
int __thiscall SmallFunc_582D30(int *this, int a2)
{
  int v3; // ebx
  int result; // eax
  int v5; // edi
  int v6; // edx

  v3 = 0; /*0x582d34*/
  result = this->nextArrayIndex; /*0x582d36*/
  if ( result > 0 ) /*0x582d3b*/
  {
    v5 = 0; /*0x582d43*/
    do /*0x582d65*/
    {
      v6 = this->q054; /*0x582d45*/
      if ( *(_BYTE *)(v6 + v5 + 8) ) /*0x582d4c*/
        RadarClass::RenderBlips(this, (IUnknown *)(v6 + v5), a2); /*0x582d57*/
      result = this->nextArrayIndex; /*0x582d5c*/
      ++v3; /*0x582d5f*/
      v5 += 16; /*0x582d60*/
    }
    while ( v3 < result ); /*0x582d65*/
  }
  return result; /*0x582d69*/
}


// ==== 0x00582D70  RadarClass::RenderBlips  this=IUnknown  sig=csp ====
int __thiscall RadarClass::RenderBlips(int *this, IUnknown *aP1, int a3)
{
  int v3; // ebx
  ObjectClass *v5; // ecx
  int v6; // edx
  unsigned int v7; // eax
  int *v8; // eax
  int *v9; // esi
  int v10; // esi
  IUnknown *v11; // ecx
  int v12; // esi
  __int16 v13; // ax
  unsigned int v14; // eax
  ObjectClass *v15; // eax
  ObjectClass *v16; // ecx
  int Type; // ebp
  unsigned int v18; // eax
  ObjectClass *v19; // eax
  ObjectClass *v20; // ecx
  int result; // eax
  int v22; // esi
  bool v23; // al
  CCINIClass *v24; // ecx
  int v25; // esi
  IUnknown *v26; // ebp
  IUnknown *v27; // esi
  int v28; // eax
  int v29; // ecx
  int v30; // esi
  int v31; // eax
  int v32; // ecx
  int *v33; // ebp
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  _DWORD *v37; // esi
  _DWORD *v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  int v42; // esi
  int v43; // eax
  int v44; // ecx
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  _DWORD *v48; // esi
  _DWORD *v49; // ecx
  int v50; // edx
  int v51; // eax
  int v52; // ecx
  int v53; // esi
  int v54; // eax
  int v55; // ecx
  int ecx53; // ecx
  int var28; // [esp+10h] [ebp-28h] BYREF
  IUnknown *v56; // [esp+14h] [ebp-24h] BYREF
  IUnknown *v57; // [esp+18h] [ebp-20h]
  IUnknown *v58; // [esp+1Ch] [ebp-1Ch] BYREF
  int v61; // [esp+20h] [ebp-18h] BYREF
  IUnknown *v62; // [esp+24h] [ebp-14h] BYREF
  int *v63; // [esp+28h] [ebp-10h]
  int v64; // [esp+2Ch] [ebp-Ch] BYREF
  int v65; // [esp+30h] [ebp-8h]
  char v66; // [esp+34h] [ebp-4h]

  v3 = a3; /*0x582d74*/
  v65 = 0; /*0x582d7d*/
  v66 = 0; /*0x582d85*/
  v63 = (int *)*(this + a3 + 32); /*0x582d91*/
  v5 = (ObjectClass *)aP1->field_0; /*0x582d99*/
  v6 = aP1->field_4; /*0x582d9b*/
  a3 = (int)v5; /*0x582d9e*/
  var28 = v6; /*0x582da2*/
  v7 = (__int16)v5 + (SHIWORD(v5) << 9); /*0x582db1*/
  if ( v7 < 0x40000 && (v8 = *(int **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v7)) != 0 ) /*0x582dc7*/
  {
    v9 = v8; /*0x582dc9*/
  }
  else
  {
    g_Map_GlobalCellIndex = (IUnknown *)v5; /*0x582dcd*/
    v9 = g_CellClassArray; /*0x582dd3*/
  }
  if ( Cell::IsInRange(v9) || Cell::IsInRange2(v9) ) /*0x582de9*/
  {
    v23 = Cell::IsInRange(v9); /*0x582f24*/
    v24 = *(CCINIClass **)&MEMORY[0xA8D63C].__pad_579C[57424]; /*0x582f29*/
    if ( !v23 ) /*0x582f34*/
      v24 = (CCINIClass *)g_TerrainBridgeIndex; /*0x582f36*/
    v25 = dword_82A944[v9[14] - (_DWORD)v24]; /*0x582f42*/
    v26 = (IUnknown *)(4 * (v25 & 7) + 9041544); /*0x582f52*/
    v56 = (IUnknown *)CellStruct::Add(&a3, (IUnknown *)&v62, v26)->field_0; /*0x582f6c*/
    v27 = (IUnknown *)(4 * (((_BYTE)v25 - 4) & 7) + 9041544); /*0x582f70*/
    aP1 = (IUnknown *)CellStruct::Add(&a3, (IUnknown *)&v62, v27)->field_0; /*0x582f8e*/
    v58 = (IUnknown *)CellStruct::Add(&var28, (IUnknown *)&v62, v26)->field_0; /*0x582f9a*/
    v61 = CellStruct::Add(&var28, (IUnknown *)&v62, v27)->field_0; /*0x582fae*/
  }
  else
  {
    v10 = *(_DWORD *)(InfantryClass::GetType((__int16 *)v9) + 44); /*0x582dfd*/
    v11 = (IUnknown *)CellStruct::Add(&a3, (IUnknown *)&v62, (IUnknown *)(4 * (((_BYTE)v10 + 2) & 7) + 9041544))->field_0; /*0x582e1c*/
    v12 = ((_BYTE)v10 - 2) & 7; /*0x582e21*/
    v56 = v11; /*0x582e24*/
    v62 = v11; /*0x582e28*/
    v13 = HIWORD(a3) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v12); /*0x582e44*/
    LOWORD(v57) = a3 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v12); /*0x582e49*/
    HIWORD(v57) = v13; /*0x582e4e*/
    aP1 = v57; /*0x582e5c*/
    v14 = (__int16)v11 + (SHIWORD(v11) << 9); /*0x582e66*/
    if ( v14 < 0x40000 && (v15 = *(ObjectClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v14)) != 0 ) /*0x582e7c*/
    {
      v16 = v15; /*0x582e7e*/
    }
    else
    {
      g_Map_GlobalCellIndex = v11; /*0x582e82*/
      v16 = (ObjectClass *)g_CellClassArray; /*0x582e88*/
    }
    Type = InfantryClass::GetType((__int16 *)v16->__pad_0); /*0x582e96*/
    v18 = (__int16)aP1 + (SHIWORD(aP1) << 9); /*0x582ea3*/
    if ( v18 < 0x40000 && (v19 = *(ObjectClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v18)) != 0 ) /*0x582eb9*/
    {
      v20 = v19; /*0x582ebb*/
    }
    else
    {
      g_Map_GlobalCellIndex = aP1; /*0x582ebf*/
      v20 = (ObjectClass *)g_CellClassArray; /*0x582ec5*/
    }
    result = InfantryClass::GetType((__int16 *)v20->__pad_0); /*0x582eca*/
    v22 = result; /*0x582ed1*/
    if ( !Type || !result ) /*0x582edb*/
      return result; /*0x582edb*/
    v58 = (IUnknown *)*WalkPathClassPath(&v62, (int *)&v56, *(_DWORD *)(Type + 448), (int *)(Type + 48)); /*0x582efe*/
    v61 = *WalkPathClassPath(&v62, (int *)&aP1, *(_DWORD *)(v22 + 448), (int *)(v22 + 48)); /*0x582f19*/
  }
  v28 = Cell::CoordToIndex(this, (IUnknown *)&a3); /*0x582fb9*/
  if ( v28 >= 0 ) /*0x582fc0*/
  {
    v29 = this->q06C; /*0x582fc6*/
    if ( v28 >= v29 ) /*0x582fcb*/
      v28 = v29 - 1; /*0x582fcd*/
  }
  else
  {
    v28 = 0; /*0x582fc2*/
  }
  v30 = *(__int16 *)(this->q070 + 2 * (v3 + 4 * v28 + v28)); /*0x582fdd*/
  v31 = Cell::CoordToIndex(this, (IUnknown *)&var28); /*0x582fe3*/
  if ( v31 >= 0 ) /*0x582fea*/
  {
    v32 = this->q06C; /*0x582ff0*/
    if ( v31 >= v32 ) /*0x582ff5*/
      v31 = v32 - 1; /*0x582ff7*/
  }
  else
  {
    v31 = 0; /*0x582fec*/
  }
  v33 = v63; /*0x583002*/
  v34 = *(__int16 *)(this->q070 + 2 * (v3 + 4 * v31 + v31)); /*0x583006*/
  v35 = v34 | (v30 << 16); /*0x583012*/
  v64 = v35; /*0x58301c*/
  v65 = v35; /*0x583020*/
  v66 = 0; /*0x583024*/
  v36 = 3 * (v34 & 0xF | (16 * (v30 & 0xF))); /*0x58302c*/
  v37 = *(_DWORD **)(*v63 + 8 * v36 + 4); /*0x58302f*/
  v38 = (_DWORD *)(*v63 + 8 * v36); /*0x583033*/
  v39 = v38[4] - 1; /*0x583039*/
  if ( v39 < 0 ) /*0x58303a*/
  {
LABEL_32:
    RadarClass::drawRadarEvents(v38, &v64); /*0x583046*/
  }
  else
  {
    while ( v35 != *v37 ) /*0x58303e*/
    {
      v37 += 3; /*0x583040*/
      if ( --v39 < 0 ) /*0x583044*/
        goto LABEL_32; /*0x583044*/
    }
  }
  v40 = Cell::CoordToIndex(this, (IUnknown *)&v56); /*0x583057*/
  if ( v40 >= 0 ) /*0x58305e*/
  {
    v41 = this->q06C; /*0x583064*/
    if ( v40 >= v41 ) /*0x583069*/
      v40 = v41 - 1; /*0x58306b*/
  }
  else
  {
    v40 = 0; /*0x583060*/
  }
  v42 = *(__int16 *)(this->q070 + 2 * (v3 + 4 * v40 + v40)); /*0x58307b*/
  v43 = Cell::CoordToIndex(this, (IUnknown *)&v58); /*0x583081*/
  if ( v43 >= 0 ) /*0x583088*/
  {
    v44 = this->q06C; /*0x58308e*/
    if ( v43 >= v44 ) /*0x583093*/
      v43 = v44 - 1; /*0x583095*/
  }
  else
  {
    v43 = 0; /*0x58308a*/
  }
  v45 = *(__int16 *)(this->q070 + 2 * (v3 + 4 * v43 + v43)); /*0x5830a0*/
  v46 = v45 | (v42 << 16); /*0x5830ac*/
  v64 = v46; /*0x5830b6*/
  v65 = v46; /*0x5830ba*/
  v66 = 0; /*0x5830be*/
  v47 = 3 * (v45 & 0xF | (16 * (v42 & 0xF))); /*0x5830c6*/
  v48 = *(_DWORD **)(*v33 + 8 * v47 + 4); /*0x5830c9*/
  v49 = (_DWORD *)(*v33 + 8 * v47); /*0x5830cd*/
  v50 = v49[4] - 1; /*0x5830d3*/
  if ( v50 < 0 ) /*0x5830d4*/
  {
LABEL_44:
    RadarClass::drawRadarEvents(v49, &v64); /*0x5830e0*/
  }
  else
  {
    while ( v46 != *v48 ) /*0x5830d8*/
    {
      v48 += 3; /*0x5830da*/
      if ( --v50 < 0 ) /*0x5830de*/
        goto LABEL_44; /*0x5830de*/
    }
  }
  v51 = Cell::CoordToIndex(this, (IUnknown *)&aP1); /*0x5830f1*/
  if ( v51 >= 0 ) /*0x5830f8*/
  {
    v52 = this->q06C; /*0x5830fe*/
    if ( v51 >= v52 ) /*0x583103*/
      v51 = v52 - 1; /*0x583105*/
  }
  else
  {
    v51 = 0; /*0x5830fa*/
  }
  v53 = *(__int16 *)(this->q070 + 2 * (v3 + 4 * v51 + v51)); /*0x583115*/
  v54 = Cell::CoordToIndex(this, (IUnknown *)&v61); /*0x58311b*/
  if ( v54 >= 0 ) /*0x583122*/
  {
    v55 = this->q06C; /*0x583128*/
    if ( v54 >= v55 ) /*0x58312d*/
      v54 = v55 - 1; /*0x58312f*/
  }
  else
  {
    v54 = 0; /*0x583124*/
  }
  ecx53 = *(__int16 *)(this->q070 + 2 * (v3 + 4 * v54 + v54)); /*0x58313a*/
  v64 = ecx53 | (v53 << 16); /*0x58314b*/
  v65 = v64; /*0x58314f*/
  v66 = 0; /*0x583160*/
  LOBYTE(result) = RadarClass::updateRadarCells(v33, ecx53 & 0xF | (16 * (v53 & 0xF)), &v64); /*0x583165*/
  return result; /*0x58316a*/
}


// ==== 0x00583180  Pathfinding::CrossBridge  this=Pathfinding  sig=csp ====
int *__stdcall Pathfinding::CrossBridge(int *a0, IUnknown *aP1, IUnknown *aP2)
{
  IUnknown *NeighbourContent; // ebx
  IUnknown *v4; // edi
  int RegionMap; // esi
  IUnknown *v6; // eax
  int *result; // eax
  int v8; // eax
  int v9; // esi
  __int16 v10; // dx
  __int16 v11; // bp
  __int16 v12; // bx
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  __int16 v17; // cx
  __int16 v18; // bp
  unsigned int v19; // edi
  __int16 aP1a; // [esp+20h] [ebp+8h]
  IUnknown *aP1b; // [esp+20h] [ebp+8h]
  IUnknown *aP1c; // [esp+20h] [ebp+8h]

  NeighbourContent = aP1; /*0x583185*/
  if ( (_BYTE)aP2 && (aP1->field_140 & 0x100) != 0 )
  {
    v4 = (IUnknown *)&aP1->field_24; /*0x5831a5*/
    RegionMap = GetRegionMap((int *)&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1->field_24, 2, 0); /*0x5831b7*/
    if ( RegionMap != -1
      || (v6 = (IUnknown *)*FindCliffSeedCell((int *)&aP2, (IUnknown *)&aP1->field_24, (IUnknown *)&aP1->field_24),
          aP2 = v6,
          v6 == (IUnknown *)g_MapSeedState) )
    {
      v8 = aP1->field_140; /*0x5831fe*/
      v9 = *(_DWORD *)&stru_87C374.__pad_14B0[8216] + 16 * RegionMap; /*0x583207*/
      if ( (v8 & 0x800) != 0 ) /*0x58320c*/
      {
        v10 = HIWORD(aP1->field_24); /*0x58320e*/
        LOWORD(aP2) = 0; /*0x583212*/
        HIWORD(aP2) = v10 - *(_WORD *)(v9 + 2); /*0x58321d*/
      }
      else
      {
        aP2 = (IUnknown *)(unsigned __int16)(LOWORD(v4->field_0) - *(_WORD *)v9); /*0x583235*/
      }
      v11 = (__int16)aP2; /*0x583222*/
      if ( *(_BYTE *)(v9 + 8) )
      {
        v12 = HIWORD(aP2); /*0x583251*/
        v13 = (double)(__int16)(HIWORD(aP2) + *(_WORD *)(v9 + 2) - HIWORD(aP1->field_24)); /*0x583273*/
        aP2 = (IUnknown *)(__int16)((_WORD)aP2 + *(_WORD *)v9 - LOWORD(v4->field_0)); /*0x583277*/
        v14 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)aP2 * (double)(int)aP2 + v13 * v13)); /*0x583290*/
        aP1a = Math::RoundToInt(v14); /*0x58329e*/
        v15 = (double)(__int16)(v12 + *(_WORD *)(v9 + 6) - HIWORD(v4->field_0)); /*0x5832bd*/
        aP2 = (IUnknown *)(__int16)(v11 + *(_WORD *)(v9 + 4) - LOWORD(v4->field_0)); /*0x5832c1*/
        v16 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)aP2 * (double)(int)aP2 + v15 * v15)); /*0x5832da*/
        if ( aP1a >= (__int16)Math::RoundToInt(v16) ) /*0x5832ec*/
        {
          v18 = *(_WORD *)(v9 + 4) + v11; /*0x58331a*/
          HIWORD(aP2) = v12 + *(_WORD *)(v9 + 6); /*0x583322*/
          result = a0; /*0x583327*/
          LOWORD(aP2) = v18; /*0x58332b*/
        }
        else
        {
          v17 = *(_WORD *)(v9 + 2); /*0x5832f1*/
          LOWORD(aP2) = v11 + *(_WORD *)v9; /*0x5832fb*/
          result = a0; /*0x583300*/
          HIWORD(aP2) = v12 + v17; /*0x583304*/
        }
        *a0 = (int)aP2; /*0x583310*/
      }
      else
      {
        v19 = *(_WORD *)(v9 + 4) != *(_WORD *)v9 ? 2 : 4;
        if ( (v8 & 0x100) != 0 ) /*0x583351*/
        {
          do /*0x583366*/
            NeighbourContent = (IUnknown *)Cell::GetNeighbourContent(NeighbourContent, v19); /*0x58335b*/
          while ( (NeighbourContent->field_140 & 0x100) != 0 ); /*0x583366*/
        }
        if ( (Cell::IsInRange(&NeighbourContent->field_0) || Cell::IsInRange2(&NeighbourContent->field_0)) /*0x583385*/
          && *(_DWORD *)NeighbourContent->__pad_EC != 3 )
        {
          LOWORD(aP1b) = v11 + *(_WORD *)(v9 + 4); /*0x583397*/
          HIWORD(aP1b) = HIWORD(aP2) + *(_WORD *)(v9 + 6); /*0x58339d*/
          *a0 = (int)aP1b; /*0x5833ac*/
          return a0; /*0x5833a2*/
        }
        else
        {
          LOWORD(aP1c) = v11 + *(_WORD *)v9; /*0x5833c1*/
          HIWORD(aP1c) = HIWORD(aP2) + *(_WORD *)(v9 + 2); /*0x5833c7*/
          *a0 = (int)aP1c; /*0x5833d6*/
          return a0; /*0x5833cc*/
        }
      }
    }
    else
    {
      *a0 = (int)v6; /*0x5831f0*/
      return a0; /*0x5831f2*/
    }
  }
  else
  {
    *a0 = aP1->field_24; /*0x5833e6*/
    return a0; /*0x5833dc*/
  }
  return result; /*0x5831ed*/
}


// ==== 0x005833F0  Pathfinding::SelectRegionPath  this=Pathfinding  sig=csp ====
int *__stdcall Pathfinding::SelectRegionPath(IUnknown *aP0, IUnknown *aP1, IUnknown *aP2)
{
  int RegionMap; // eax
  int v4; // esi
  IUnknown *v5; // edi
  double v6; // st7
  double v7; // st7
  __int16 v8; // bx
  double v9; // st7
  double v10; // st7
  unsigned int v12; // edi
  unsigned int v13; // eax
  int *v14; // eax
  int *NeighbourContent; // ebx
  IUnknown *v16; // eax

  RegionMap = GetRegionMap((int *)&stru_87C374.__pad_14B0[8132], aP1, 1, 0); /*0x583404*/
  if ( RegionMap == -1 )
  {
    v16 = (IUnknown *)*FindCliffSeedCell((int *)&aP2, aP1, aP2); /*0x583590*/
    aP2 = v16; /*0x583599*/
    if ( v16 == (IUnknown *)g_MapSeedState ) /*0x58359d*/
    {
      aP0->field_0 = aP1->field_0; /*0x5835c6*/
      return &aP0->field_0; /*0x5835bc*/
    }
    else
    {
      aP0->field_0 = (int)v16; /*0x5835b4*/
      return &aP0->field_0; /*0x5835b6*/
    }
  }
  else
  {
    v4 = *(_DWORD *)&stru_87C374.__pad_14B0[8216] + 16 * RegionMap; /*0x58341d*/
    if ( *(_BYTE *)(v4 + 8) )
    {
      v5 = aP2; /*0x58342a*/
      v6 = (double)(__int16)(HIWORD(aP2->field_0) - *(_WORD *)(v4 + 2)); /*0x583449*/
      aP2 = (IUnknown *)(__int16)(LOWORD(aP2->field_0) - *(_WORD *)v4); /*0x58344d*/
      v7 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)aP2 * (double)(int)aP2 + v6 * v6)); /*0x583466*/
      v8 = Math::RoundToInt(v7); /*0x583470*/
      v9 = (double)(__int16)(HIWORD(v5->field_0) - *(_WORD *)(v4 + 6)); /*0x58348b*/
      aP2 = (IUnknown *)(__int16)(LOWORD(v5->field_0) - *(_WORD *)(v4 + 4)); /*0x58348f*/
      v10 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)aP2 * (double)(int)aP2 + v9 * v9)); /*0x5834a8*/
      if ( v8 >= (__int16)Math::RoundToInt(v10) ) /*0x5834b8*/
      {
        aP0->field_0 = *(_DWORD *)(v4 + 4); /*0x5834d3*/
        return &aP0->field_0; /*0x5834cc*/
      }
      else
      {
        aP0->field_0 = *(_DWORD *)v4; /*0x5834c3*/
        return &aP0->field_0; /*0x5834bc*/
      }
    }
    else
    {
      v12 = *(_WORD *)(v4 + 4) != *(_WORD *)v4 ? 2 : 4;
      v13 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9); /*0x5834f6*/
      if ( v13 < 0x40000 && (v14 = *(int **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v13)) != 0 ) /*0x58350c*/
      {
        NeighbourContent = v14; /*0x58350e*/
      }
      else
      {
        NeighbourContent = g_CellClassArray; /*0x583515*/
        g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0; /*0x58351a*/
      }
      for ( ; /*0x58352c*/
            (NeighbourContent[80] & 0x100) != 0;
            NeighbourContent = (int *)Cell::GetNeighbourContent(NeighbourContent, v12) )
      {
        ; /*0x583536*/
      }
      if ( (Cell::IsInRange(NeighbourContent) || Cell::IsInRange2(NeighbourContent)) && NeighbourContent[59] != 3 ) /*0x58355d*/
      {
        aP0->field_0 = *(_DWORD *)(v4 + 4); /*0x583569*/
        return &aP0->field_0; /*0x583562*/
      }
      else
      {
        aP0->field_0 = *(_DWORD *)v4; /*0x583578*/
        return &aP0->field_0; /*0x583571*/
      }
    }
  }
}


// ==== 0x005835D0  FindCliffSeedCell  this=-  sig=csp ====
int *__stdcall FindCliffSeedCell(int *a0, IUnknown *aP1, IUnknown *aP2)
{
  unsigned int v3; // eax
  VectorClass *v4; // eax
  VectorClass *v5; // ecx
  int v7; // eax
  TagClass *v8; // eax
  char *NeighbourContent; // edi
  VectorClass *v10; // ebp
  char *v11; // ebx
  VectorClass *v12; // esi
  TagClass *v13; // ebx
  IUnknown *v14; // esi
  double v15; // st7
  double v16; // st7
  __int16 v17; // di
  __int16 v18; // ax
  double v19; // st7
  double v20; // st7
  TagClass *v21; // [esp+18h] [ebp-Ch] BYREF
  TagClass *v22; // [esp+1Ch] [ebp-8h]
  unsigned int v23; // [esp+20h] [ebp-4h]

  v3 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9); /*0x5835e1*/
  if ( v3 < 0x40000 && (v4 = *(VectorClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v3)) != 0 ) /*0x5835f7*/
  {
    v5 = v4; /*0x5835f9*/
  }
  else
  {
    v5 = (VectorClass *)g_CellClassArray; /*0x5835ff*/
    g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0; /*0x583604*/
  }
  if ( ((int)v5[20].vtable0 & 0x100) != 0 ) /*0x583618*/
  {
    v7 = -(((int)v5[20].vtable0 & 0x800) != 0); /*0x583631*/
    LOBYTE(v7) = v7 & 0xFE; /*0x583634*/
    v8 = (TagClass *)(v7 + 4); /*0x583637*/
    NeighbourContent = (char *)v5; /*0x58363b*/
    v22 = v8; /*0x58363d*/
    v10 = v5 + 20; /*0x583644*/
    v11 = (char *)&v5[20]; /*0x583649*/
    v23 = ((_BYTE)v8 - 4) & 7; /*0x58364b*/
    v12 = v5; /*0x58364f*/
    aP1 = (IUnknown *)g_MapSeedState; /*0x583657*/
    v21 = g_MapSeedState; /*0x58365b*/
    while ( 1 ) /*0x583665*/
    {
      if ( ((int)v10->vtable0 & 0x100) != 0 ) /*0x58366b*/
      {
        NeighbourContent = (char *)Cell::GetNeighbourContent(NeighbourContent, (unsigned int)v8); /*0x583675*/
        v10 = (VectorClass *)(NeighbourContent + 320); /*0x583680*/
        if ( (*((_DWORD *)NeighbourContent + 80) & 0x100) == 0 /*0x5836a5*/
          && (Cell::IsInRange((int *)NeighbourContent) || Cell::IsInRange2((int *)NeighbourContent))
          && *((_DWORD *)NeighbourContent + 59) != 3 )
        {
          aP1 = (IUnknown *)*((_DWORD *)NeighbourContent + 9); /*0x5836aa*/
        }
      }
      if ( (*(_DWORD *)v11 & 0x100) == 0 ) /*0x5836b3*/
        goto LABEL_22; /*0x5836b3*/
      v12 = (VectorClass *)Cell::GetNeighbourContent(v12, v23); /*0x5836c1*/
      v11 = (char *)&v12[20]; /*0x5836cc*/
      if ( ((int)v12[20].vtable0 & 0x100) == 0 ) /*0x5836d2*/
      {
        if ( (Cell::IsInRange((int *)v12) || Cell::IsInRange2((int *)v12)) && *(_DWORD *)&v12[14].IsInitialized != 3 ) /*0x5836f1*/
          v21 = (TagClass *)v12[2].Items; /*0x5836f6*/
        if ( (*(_DWORD *)v11 & 0x100) == 0 ) /*0x5836ff*/
        {
LABEL_22:
          if ( ((int)v10->vtable0 & 0x100) == 0 ) /*0x58370b*/
            break; /*0x58370b*/
        }
      }
      v8 = v22; /*0x583661*/
    }
    v13 = g_MapSeedState; /*0x583711*/
    v22 = g_MapSeedState; /*0x583723*/
    if ( LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1, (TechnoClass *)1) ) /*0x583727*/
    {
      v13 = (TagClass *)aP1; /*0x583730*/
      v22 = (TagClass *)aP1; /*0x583734*/
    }
    if ( LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v21, (TechnoClass *)1) ) /*0x583744*/
    {
      if ( (TagClass *)__PAIR32__(HIWORD(v22), (unsigned __int16)v13) == g_MapSeedState ) /*0x583758*/
        goto LABEL_28; /*0x583758*/
      v14 = aP2; /*0x58376c*/
      v15 = (double)(__int16)(HIWORD(v21) - HIWORD(aP2->field_0)); /*0x58378e*/
      aP2 = (IUnknown *)(__int16)((_WORD)v21 - LOWORD(aP2->field_0)); /*0x583792*/
      v16 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)aP2 * (double)(int)aP2 + v15 * v15)); /*0x5837ab*/
      v17 = Math::RoundToInt(v16); /*0x5837ba*/
      v18 = (_WORD)aP1 - LOWORD(v14->field_0); /*0x5837c5*/
      aP2 = (IUnknown *)(__int16)(HIWORD(aP1) - HIWORD(v14->field_0)); /*0x5837ce*/
      v19 = (double)(int)aP2; /*0x5837d2*/
      aP2 = (IUnknown *)v18; /*0x5837d6*/
      v20 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)v18 * (double)v18 + v19 * v19)); /*0x5837ef*/
      if ( v17 < (__int16)Math::RoundToInt(v20) ) /*0x5837ff*/
LABEL_28:
        v13 = v21; /*0x583801*/
    }
    *a0 = (int)v13; /*0x58380c*/
    return a0; /*0x583805*/
  }
  else
  {
    *a0 = (int)v5[2].Items; /*0x583621*/
    return a0; /*0x58361a*/
  }
}


// ==== 0x00583820  Pathfinding::CheckCliff  this=Pathfinding  sig=csp ====
_DWORD *__thiscall Pathfinding::CheckCliff(int *this, _DWORD *a1, __int16 *a2, int a4, MouseClass *aP4)
{
  unsigned int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  char *NeighbourContent; // ebx
  int v10; // eax
  char *v11; // edi
  unsigned int v12; // esi
  int v13; // edx
  MouseClass *v14; // ebp
  int v15; // esi
  _WORD *v16; // ecx
  int v17; // edi
  TagClass *i; // esi
  int v19; // eax
  int v20; // edx
  TagClass *v21; // [esp+0h] [ebp-28h]
  _DWORD *v22; // [esp+4h] [ebp-24h]
  int v23; // [esp+4h] [ebp-24h]
  TagClass *v24; // [esp+8h] [ebp-20h]
  _DWORD v26[6]; // [esp+10h] [ebp-18h] BYREF

  v5 = *a2 + (a2[1] << 9); /*0x583835*/
  if ( v5 < 0x40000 && (v6 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v5)) != 0 ) /*0x58384b*/
  {
    v7 = v6; /*0x58384d*/
  }
  else
  {
    v7 = g_CellClassArray; /*0x583853*/
    g_Map_GlobalCellIndex = *(IUnknown **)a2; /*0x583858*/
  }
  if ( (v7[80] & 0x100) != 0 ) /*0x583870*/
  {
    NeighbourContent = (char *)v7; /*0x58388a*/
    v10 = -((v7[80] & 0x800) != 0); /*0x58388e*/
    v11 = (char *)v7; /*0x583890*/
    LOBYTE(v10) = v10 & 0xFE; /*0x583892*/
    v22 = v7 + 80; /*0x583894*/
    v21 = (TagClass *)(v7 + 80); /*0x58389b*/
    v12 = v10 + 4; /*0x58389f*/
    a2 = (__int16 *)g_MapSeedState; /*0x5838a6*/
    v24 = g_MapSeedState; /*0x5838aa*/
    do /*0x58396c*/
    {
      if ( (*v22 & 0x100) != 0 ) /*0x5838bd*/
      {
        NeighbourContent = (char *)Cell::GetNeighbourContent(NeighbourContent, v12); /*0x5838c7*/
        v22 = NeighbourContent + 320; /*0x5838d8*/
        if ( (*((_DWORD *)NeighbourContent + 80) & 0x100) == 0 /*0x5838fb*/
          && (Cell::IsInRange((int *)NeighbourContent) || Cell::IsInRange2((int *)NeighbourContent))
          && *((_DWORD *)NeighbourContent + 59) != 3 )
        {
          a2 = (__int16 *)*((_DWORD *)NeighbourContent + 9); /*0x583900*/
        }
      }
      if ( (*(_DWORD *)v21->__pad_0 & 0x100) != 0 ) /*0x58390d*/
      {
        v11 = (char *)Cell::GetNeighbourContent(v11, ((_BYTE)v12 - 4) & 7); /*0x583917*/
        v21 = (TagClass *)(v11 + 320); /*0x583928*/
        if ( (*((_DWORD *)v11 + 80) & 0x100) == 0 /*0x58394b*/
          && (Cell::IsInRange((int *)v11) || Cell::IsInRange2((int *)v11))
          && *((_DWORD *)v11 + 59) != 3 )
        {
          v24 = (TagClass *)*((_DWORD *)v11 + 9); /*0x583950*/
        }
      }
    }
    while ( (*(_DWORD *)v21->__pad_0 & 0x100) != 0 || (*v22 & 0x100) != 0 ); /*0x58396c*/
    v13 = ((_BYTE)v12 + 2) & 7; /*0x583979*/
    v26[0] = a2; /*0x58397c*/
    v14 = aP4; /*0x583983*/
    v15 = ((_BYTE)v12 - 2) & 7; /*0x58399b*/
    LOWORD(v23) = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v13) + (_WORD)a2; /*0x58399e*/
    HIWORD(v23) = HIWORD(a2) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v13); /*0x5839aa*/
    v26[1] = v23; /*0x5839b3*/
    v16 = (_WORD *)(4 * v15 + 9041544); /*0x5839b7*/
    LOWORD(a2) = (_WORD)a2 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v15); /*0x5839cb*/
    HIWORD(a2) += *((_WORD *)&MEMORY[0x89F68A] + 2 * v15); /*0x5839d7*/
    LOWORD(v15) = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v13); /*0x5839e0*/
    v26[2] = a2; /*0x5839e3*/
    v26[3] = v24; /*0x5839ee*/
    LOWORD(a2) = (_WORD)v24 + v15; /*0x5839f2*/
    HIWORD(a2) = HIWORD(v24) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v13); /*0x583a03*/
    v26[4] = a2; /*0x583a0c*/
    LOWORD(v15) = *v16; /*0x583a10*/
    LOWORD(v16) = HIWORD(v24) + v16[1]; /*0x583a1a*/
    LOWORD(a2) = (_WORD)v24 + v15; /*0x583a1d*/
    HIWORD(a2) = (_WORD)v16; /*0x583a22*/
    v26[5] = a2; /*0x583a2b*/
    v17 = 0; /*0x583a2f*/
    for ( i = (TagClass *)v26; ; i = (TagClass *)((char *)i + 4) ) /*0x583a31*/
    {
      a2 = *(__int16 **)i->__pad_0; /*0x583a43*/
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&a2, (TechnoClass *)1) ) /*0x583a47*/
      {
        v19 = (__int16)a2 + SHIWORD(a2) * (this->q0F8 + this->q0F4 + 1); /*0x583a73*/
        if ( v19 >= 0 ) /*0x583a75*/
        {
          v20 = this->q06C; /*0x583a7b*/
          if ( v19 >= v20 ) /*0x583a80*/
            v19 = v20 - 1; /*0x583a82*/
        }
        else
        {
          v19 = 0; /*0x583a77*/
        }
        if ( (MouseClass *)*(__int16 *)(this->__pad_01C + 2 * (a4 + 4 * v19 + v19)) == v14 ) /*0x583a97*/
          break; /*0x583a97*/
      }
      if ( ++v17 >= 6 ) /*0x583aa0*/
      {
        *a1 = g_MapSeedState; /*0x583aaf*/
        return a1; /*0x583ab5*/
      }
    }
    *a1 = a2; /*0x583abf*/
    return a1; /*0x583ab8*/
  }
  else
  {
    *a1 = v7[9]; /*0x58387c*/
    return a1; /*0x583872*/
  }
}


// ==== 0x00583AD0  ObjectClass::method_583AD0  this=ObjectClass  sig=csp ====
int __thiscall sub_583AD0(_DWORD *this, int *a2)
{
  _DWORD *i; // eax
  IUnknown *TileIndex; // eax
  IUnknown *v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  void *v11; // ebp
  int v12; // esi
  int v13; // edx
  int v14; // eax
  CCINIClass *v15; // edi
  int v16; // esi
  void **v18; // [esp+10h] [ebp-18h] BYREF
  void *Block; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  char v21; // [esp+1Dh] [ebp-Bh]
  int v22; // [esp+20h] [ebp-8h]
  int v23; // [esp+24h] [ebp-4h]

  VectorClass::Construct(&v18, 0, 0); /*0x583ae1*/
  v18 = &vt_DynamicVectorClass_int; /*0x583af1*/
  v23 = 10; /*0x583af9*/
  v22 = 0; /*0x583b05*/
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_18[8] = (char *)MEMORY[0x87F8E4].field_4 + MEMORY[0x87F8E4].field_0 + 1; /*0x583b0d*/
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_18[12] = (char *)MEMORY[0x87F8E4].field_4 /*0x583b22*/
                                            + MEMORY[0x87F8DC]
                                            - MEMORY[0x87F8E4].field_0;
  for ( i = MapClass::SpiralSearch(&MEMORY[0x87F7E8]); i; i = MapClass::SpiralSearch(&MEMORY[0x87F7E8]) ) /*0x583b2f*/
  {
    if ( i[19] == 4 ) /*0x583b39*/
    {
      TileIndex = (IUnknown *)MapClass::GetTileIndex(this, (IUnknown *)(i + 9), (IUnknown *)0xA, 0); /*0x583b49*/
      v5 = TileIndex; /*0x583b4e*/
      if ( (int)TileIndex >= 0 ) /*0x583b52*/
      {
        v6 = v22; /*0x583b54*/
        if ( (int)TileIndex >= v22 ) /*0x583b5a*/
        {
          v7 = (int)&TileIndex->field_0 - v22 + 1; /*0x583b5e*/
          if ( v7 > 0 ) /*0x583b61*/
          {
            v8 = v7; /*0x583b63*/
            v9 = v20; /*0x583b65*/
            while ( 1 ) /*0x583b6f*/
            {
              if ( v6 < v9 ) /*0x583b71*/
                goto LABEL_13; /*0x583b71*/
              if ( (v21 || !v9) && v23 > 0 ) /*0x583b85*/
                break; /*0x583b85*/
LABEL_15:
              if ( !--v8 ) /*0x583bb6*/
                goto LABEL_16; /*0x583bb6*/
              v6 = v22; /*0x583b6b*/
            }
            if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v18[2])(&v18, v23 + v9, 0) ) /*0x583b94*/
            {
LABEL_13:
              v10 = v22++; /*0x583b9b*/
              *((_DWORD *)Block + v10) = 0; /*0x583baa*/
            }
            v9 = v20; /*0x583bb1*/
            goto LABEL_15; /*0x583bb1*/
          }
        }
LABEL_16:
        ++*((_DWORD *)Block + (_DWORD)v5); /*0x583bb8*/
      }
    }
  }
  v11 = Block; /*0x583bd1*/
  v12 = -1; /*0x583bd9*/
  v13 = 0; /*0x583bdc*/
  v14 = 0; /*0x583bde*/
  if ( v22 > 0 ) /*0x583be2*/
  {
    v15 = (CCINIClass *)Block; /*0x583be4*/
    do /*0x583bf6*/
    {
      if ( *(_DWORD *)v15->__pad_0 > v13 ) /*0x583bea*/
      {
        v12 = v14; /*0x583bec*/
        v13 = *(_DWORD *)v15->__pad_0; /*0x583bee*/
      }
      ++v14; /*0x583bf0*/
      v15 = (CCINIClass *)((char *)v15 + 4); /*0x583bf1*/
    }
    while ( v14 < v22 ); /*0x583bf6*/
  }
  *a2 = v12; /*0x583bfe*/
  if ( v12 < 0 ) /*0x583c00*/
  {
    v18 = &vt_VectorClass_int; /*0x583c31*/
    if ( v11 && v21 ) /*0x583c41*/
      __3_YAXPAX_Z(v11); /*0x583c44*/
    return 0; /*0x583c4f*/
  }
  else
  {
    v16 = *((_DWORD *)v11 + v12); /*0x583c02*/
    v18 = &vt_VectorClass_int; /*0x583c06*/
    if ( v11 ) /*0x583c10*/
    {
      if ( v21 ) /*0x583c18*/
        __3_YAXPAX_Z(v11); /*0x583c1b*/
    }
    return v16; /*0x583c23*/
  }
}


// ==== 0x00583C60  ObjectClass::CollectMatchingTileCells  this=ObjectClass  sig=csp ====
int __thiscall CollectMatchingTileCells(
        _DWORD *this,
        _WORD *a1,
        int a3,
        int a4,
        MouseClass *aP4,
        int a6,
        int a7,
        IUnknown *aP7,
        int aP4a)
{
  int result; // eax
  int v10; // esi
  __int16 v11; // dx
  __int16 v12; // bx
  int v13; // ebp
  int v14; // esi
  __int16 v15; // di
  __int16 *v16; // eax
  int v17; // eax
  MouseClass *v18; // edi
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edx
  __int16 v23; // ax
  __int16 v24; // bx
  int v25; // ebp
  int v26; // esi
  __int16 v27; // di
  __int16 *v28; // eax
  int v29; // eax
  void *v30; // ecx
  int v31; // eax
  void *v32; // eax
  _DWORD *v33; // edx
  __int16 v34; // bx
  __int16 v35; // ax
  IUnknown *v36; // eax
  IUnknown *v37; // eax
  IUnknown *v38; // [esp+10h] [ebp-70h] BYREF
  int v39; // [esp+14h] [ebp-6Ch]
  int v40; // [esp+18h] [ebp-68h]
  _DWORD *v41; // [esp+1Ch] [ebp-64h]
  __int16 v42[2]; // [esp+20h] [ebp-60h]
  IUnknown *v43; // [esp+24h] [ebp-5Ch]
  IUnknown *v44; // [esp+28h] [ebp-58h]
  IUnknown *v45; // [esp+2Ch] [ebp-54h]
  rc_ptr_base v46; // [esp+30h] [ebp-50h] BYREF
  rc_ptr_base v47; // [esp+34h] [ebp-4Ch] BYREF
  rc_ptr_base v48; // [esp+38h] [ebp-48h] BYREF
  ObjectClass *v49; // [esp+3Ch] [ebp-44h] BYREF
  _DWORD v50[5]; // [esp+40h] [ebp-40h] BYREF
  int v51; // [esp+54h] [ebp-2Ch]
  int v52; // [esp+64h] [ebp-1Ch]
  _DWORD v53[4]; // [esp+70h] [ebp-10h] BYREF

  v41 = this; /*0x583c63*/
  result = 1; /*0x583c6c*/
  v40 = 1; /*0x583c76*/
  if ( a3 >= 1 ) /*0x583c7a*/
  {
    v10 = -1; /*0x583c80*/
    *(_DWORD *)v42 = -1; /*0x583c83*/
    do /*0x58401e*/
    {
      v39 = v10; /*0x583c89*/
      if ( v10 <= result ) /*0x583c8d*/
      {
        while ( 1 ) /*0x583cab*/
        {
          v11 = a1[1] + v10; /*0x583cab*/
          LOWORD(v43) = *a1 + result; /*0x583caf*/
          HIWORD(v43) = v11; /*0x583cbb*/
          v38 = v43; /*0x583cce*/
          if ( MapClass::GetTileIndex(v41, (IUnknown *)&v38, (IUnknown *)aP4, 0) == a6 ) /*0x583cde*/
          {
            v12 = (__int16)v38; /*0x583ce9*/
            v51 = SHIWORD(v38); /*0x583cee*/
            v13 = 0; /*0x583cf9*/
            if ( aP4a <= 0 ) /*0x583cfd*/
            {
LABEL_15:
              v18 = (MouseClass *)a7; /*0x583d55*/
              v19 = *(_DWORD *)(a7 + 8); /*0x583d5c*/
              if ( *(_DWORD *)(a7 + 16) < v19 /*0x583d81*/
                || (*(_BYTE *)(a7 + 13) || !v19)
                && (v20 = *(_DWORD *)(a7 + 20), v20 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a7 + 8))(a7, v19 + v20, 0) )
              {
                v21 = *(_DWORD *)(a7 + 16); /*0x583d88*/
                v22 = *(_DWORD *)(a7 + 4); /*0x583d8b*/
                *(_DWORD *)(a7 + 16) = v21 + 1; /*0x583d91*/
                *(_DWORD *)(v22 + 4 * v21) = v38; /*0x583d98*/
              }
            }
            else
            {
              while ( 1 ) /*0x583d06*/
              {
                v14 = 0; /*0x583d06*/
                if ( (int)aP7 > 0 ) /*0x583d0a*/
                  break; /*0x583d0a*/
LABEL_13:
                if ( ++v13 >= aP4a ) /*0x583d4f*/
                {
                  v10 = v39; /*0x583d51*/
                  goto LABEL_15; /*0x583d51*/
                }
              }
              v15 = v51 + v13; /*0x583d10*/
              while ( 1 ) /*0x583d1c*/
              {
                v16 = CellStruct::Set(&v46, v14 + v12, v15); /*0x583d1c*/
                v17 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v16) + 19); /*0x583d2c*/
                if ( v17 != 4 && v17 != 3 ) /*0x583d37*/
                  break; /*0x583d37*/
                if ( ++v14 >= (int)aP7 ) /*0x583d43*/
                  goto LABEL_13; /*0x583d43*/
              }
              v18 = (MouseClass *)a7; /*0x583da6*/
              v10 = v39; /*0x583dad*/
            }
          }
          else
          {
            v18 = (MouseClass *)a7; /*0x583d9d*/
          }
          v23 = *a1 - v40; /*0x583dc7*/
          HIWORD(v44) = a1[1] + v10; /*0x583dd1*/
          LOWORD(v44) = v23; /*0x583dda*/
          v38 = v44; /*0x583de9*/
          if ( MapClass::GetTileIndex(v41, (IUnknown *)&v38, (IUnknown *)aP4, 0) == a6 ) /*0x583df9*/
          {
            v24 = (__int16)v38; /*0x583e04*/
            v52 = SHIWORD(v38); /*0x583e09*/
            v25 = 0; /*0x583e14*/
            if ( aP4a <= 0 ) /*0x583e18*/
            {
LABEL_32:
              v30 = v18->field_8; /*0x583e73*/
              if ( (int)v18->field_10 < (int)v30 /*0x583e98*/
                || (BYTE1(v18->field_C) || !v30)
                && (v31 = v18->field_14, v31 > 0)
                && (*(unsigned __int8 (__thiscall **)(MouseClass *, int, _DWORD))(v18->field_0 + 8))(
                     v18,
                     (int)v30 + v31,
                     0) )
              {
                v32 = v18->field_10; /*0x583e9f*/
                v33 = v18->field_4; /*0x583ea2*/
                v18->field_10 = (char *)v32 + 1; /*0x583ea8*/
                v33[(_DWORD)v32] = v38; /*0x583eaf*/
              }
            }
            else
            {
              while ( 1 ) /*0x583e21*/
              {
                v26 = 0; /*0x583e21*/
                if ( (int)aP7 > 0 ) /*0x583e25*/
                  break; /*0x583e25*/
LABEL_31:
                if ( ++v25 >= aP4a ) /*0x583e71*/
                  goto LABEL_32; /*0x583e71*/
              }
              v27 = v52 + v25; /*0x583e2b*/
              while ( 1 ) /*0x583e37*/
              {
                v28 = CellStruct::Set(&v47, v26 + v24, v27); /*0x583e37*/
                v29 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v28) + 19); /*0x583e47*/
                if ( v29 != 4 && v29 != 3 ) /*0x583e52*/
                  break; /*0x583e52*/
                if ( ++v26 >= (int)aP7 ) /*0x583e5e*/
                {
                  v18 = (MouseClass *)a7; /*0x583e60*/
                  goto LABEL_31; /*0x583e60*/
                }
              }
              v18 = (MouseClass *)a7; /*0x583eb4*/
            }
            v10 = v39; /*0x583ebb*/
          }
          if ( v10 != v40 ) /*0x583ec5*/
          {
            v34 = v42[0]; /*0x583ecb*/
            if ( v10 != *(_DWORD *)v42 ) /*0x583ed1*/
            {
              v35 = a1[1] + v40; /*0x583eee*/
              LOWORD(v45) = *a1 + v10; /*0x583ef7*/
              HIWORD(v45) = v35; /*0x583efc*/
              v38 = v45; /*0x583f0a*/
              if ( MapClass::GetTileIndex(v41, (IUnknown *)&v38, (IUnknown *)aP4, 0) == a6 ) /*0x583f1a*/
              {
                v50[1] = SHIWORD(v38); /*0x583f2d*/
                v50[0] = (__int16)v38; /*0x583f35*/
                v50[2] = aP7; /*0x583f45*/
                v50[3] = aP4a; /*0x583f49*/
                if ( Map_Helper_584030((IUnknown *)v50) ) /*0x583f4d*/
                  TileVector::PushBack(v18, (MouseClass *)&v38); /*0x583f5d*/
              }
              v36 = (IUnknown *)CellStruct::Set(&v48, v10, v34); /*0x583f68*/
              v38 = (IUnknown *)CellStruct::Add(a1, (IUnknown *)&v49, v36)->field_0; /*0x583f91*/
              if ( MapClass::GetTileIndex(v41, (IUnknown *)&v38, (IUnknown *)aP4, 0) == a6 ) /*0x583fa1*/
              {
                v37 = Rect::Set(v53, (IUnknown *)(__int16)v38, (IUnknown *)SHIWORD(v38), aP7, (IUnknown *)aP4a); /*0x583fc6*/
                if ( Map_Helper_584030(v37) ) /*0x583fce*/
                  TileVector::PushBack(v18, (MouseClass *)&v38); /*0x583fde*/
              }
            }
          }
          result = v40; /*0x583fe3*/
          v39 = ++v10; /*0x583fea*/
          if ( v10 > v40 ) /*0x583fee*/
            break; /*0x583fee*/
          LOWORD(result) = v40; /*0x583c95*/
        }
        v10 = *(_DWORD *)v42; /*0x583ff4*/
      }
      if ( *(_DWORD *)(a7 + 16) > a4 ) /*0x584009*/
        break; /*0x584009*/
      ++result; /*0x584012*/
      --v10; /*0x584013*/
      v40 = result; /*0x584016*/
      *(_DWORD *)v42 = v10; /*0x58401a*/
    }
    while ( result <= a3 ); /*0x58401e*/
  }
  return result; /*0x584024*/
}


// ==== 0x00584030  Map_Helper  this=ObjectClass  sig=csp ====
char __stdcall Map_Helper_584030(IUnknown *aP0)
{
  int v2; // eax
  int v3; // ebp
  int v4; // edi
  int v5; // esi
  unsigned int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v10; // [esp+10h] [ebp-4h]
  ObjectClass *aP0a; // [esp+18h] [ebp+4h]

  v2 = aP0->field_C; /*0x584038*/
  v3 = aP0->field_8; /*0x58403b*/
  v4 = 0; /*0x58403f*/
  v10 = v2; /*0x584043*/
  if ( v2 <= 0 ) /*0x584047*/
    return 1; /*0x5840ac*/
  while ( 1 ) /*0x58404f*/
  {
    v5 = 0; /*0x58404f*/
    if ( v3 > 0 ) /*0x584053*/
      break; /*0x584053*/
LABEL_10:
    if ( ++v4 >= v2 ) /*0x5840aa*/
      return 1; /*0x5840aa*/
  }
  while ( 1 ) /*0x58405e*/
  {
    HIWORD(aP0a) = v4 + aP0->field_4; /*0x58405e*/
    LOWORD(aP0a) = v5 + aP0->field_0; /*0x584063*/
    v6 = (__int16)aP0a + (SHIWORD(aP0a) << 9); /*0x584071*/
    if ( v6 >= 0x40000 || (v7 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v6)) == 0 ) /*0x584081*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP0a; /*0x584087*/
      v7 = g_CellClassArray; /*0x58408c*/
    }
    v8 = v7[19]; /*0x584091*/
    if ( v8 != 4 && v8 != 3 ) /*0x58409c*/
      return 0; /*0x5840ac*/
    if ( ++v5 >= v3 ) /*0x5840a1*/
    {
      v2 = v10; /*0x5840a3*/
      goto LABEL_10; /*0x5840a3*/
    }
  }
}


// ==== 0x005840C0  ObjectClass::CheckMapReachability  this=AbstractClass  sig=csp ====
char __thiscall CheckMapReachability(_DWORD *this, CCINIClass *aP1, int a3, int a4, int j)
{
  MouseClass *v5; // ebx
  int v6; // ebp
  char *v7; // edx
  char *v8; // edi
  CCINIClass *v9; // edi
  IUnknown *v10; // esi
  int v11; // eax
  int v12; // ecx
  unsigned __int16 v13; // dx
  int v14; // edx
  int v15; // edi
  __int16 *i; // eax
  __int16 *v17; // esi
  int v18; // edi
  int v19; // ebp
  int v20; // eax
  int v21; // ecx
  __int16 v22; // bx
  int v23; // eax
  _WORD *v24; // ecx
  int v25; // eax
  char *v26; // edi
  __int16 v27; // bx
  __int16 v28; // bp
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
  unsigned __int16 *v40; // ecx
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // edx
  MouseClass *v46; // [esp+1Ch] [ebp-3Ch]
  MouseClass *v47; // [esp+1Ch] [ebp-3Ch]
  int v48; // [esp+20h] [ebp-38h]
  int v49; // [esp+24h] [ebp-34h]
  char *v50; // [esp+24h] [ebp-34h]
  int v52; // [esp+2Ch] [ebp-2Ch]
  unsigned __int16 v53; // [esp+2Ch] [ebp-2Ch]
  __int16 **v54; // [esp+30h] [ebp-28h]
  __int16 v55; // [esp+34h] [ebp-24h]
  CCINIClass *v56; // [esp+34h] [ebp-24h]
  _DWORD *v57; // [esp+38h] [ebp-20h]
  int *v58; // [esp+3Ch] [ebp-1Ch]
  void **v59; // [esp+40h] [ebp-18h] BYREF
  void *Block; // [esp+44h] [ebp-14h]
  int v61; // [esp+48h] [ebp-10h]
  char v62; // [esp+4Dh] [ebp-Bh]
  int v63; // [esp+50h] [ebp-8h]
  int v64; // [esp+54h] [ebp-4h]

  v5 = (MouseClass *)this; /*0x5840c8*/
  v6 = 1 << (a3 + 1); /*0x5840d6*/
  v48 = v6; /*0x5840e3*/
  WordVector::Constructor(&v59, 0, 0); /*0x5840e7*/
  v59 = &vt_DynamicVectorClass_unsigned_short_7E3844; /*0x5840f0*/
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
    v7 = byte_ABDE48; /*0x58412a*/
    v52 = v6; /*0x58412f*/
    do /*0x584153*/
    {
      memset(v7, 0, 4 * ((unsigned int)v6 >> 2)); /*0x58413e*/
      v8 = &v7[4 * ((unsigned int)v6 >> 2)]; /*0x58413e*/
      v7 += 8; /*0x584142*/
      memset(v8, 0, v6 & 3); /*0x584148*/
      --v52; /*0x58414f*/
    }
    while ( v52 ); /*0x584153*/
  }
  v9 = aP1; /*0x584155*/
  v10 = (IUnknown *)&aP1->__pad_20[4]; /*0x58415b*/
  v11 = Cell::CoordToIndex(v5, (IUnknown *)&aP1->__pad_20[4]); /*0x58415f*/
  if ( v11 >= 0 ) /*0x584166*/
  {
    v12 = *(_DWORD *)v5->__pad_6C; /*0x58416c*/
    if ( v11 >= v12 ) /*0x584171*/
      v11 = v12 - 1; /*0x584173*/
  }
  else
  {
    v11 = 0; /*0x584168*/
  }
  v55 = 0; /*0x58417a*/
  v13 = *(_WORD *)(v5->field_70 + 2 * (a3 + 4 * v11 + v11)); /*0x58418a*/
  dword_ABDA68[0] = (int)v9; /*0x58418e*/
  v53 = v13; /*0x584197*/
  v14 = (v6 - 1) & *(__int16 *)&v9->__pad_20[6]; /*0x5841a5*/
  v15 = 1; /*0x5841a7*/
  byte_ABDE48[8 * ((v6 - 1) & SLOWORD(v10->field_0)) + v14] = 1; /*0x5841ac*/
  v58 = &dword_82A594[8 * *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)j + 132))(j) + 1460)]; /*0x5841ce*/
  while ( 1 ) /*0x5841e1*/
  {
    v46 = 0; /*0x5841e1*/
    v49 = v15 - 1; /*0x5841e9*/
    v57 = (_DWORD *)dword_ABDA68[v15 - 1]; /*0x5841fb*/
    v54 = (__int16 **)(4 * (v15 - 1) + 11262568); /*0x5841ff*/
    for ( i = (__int16 *)Cell::GetNeighbourContent(v57, 0); /*0x584203*/
          ;
          i = (__int16 *)Cell::GetNeighbourContent(v57, (unsigned int)v46) )
    {
      v17 = i; /*0x58421b*/
      v18 = (v6 - 1) & i[18]; /*0x58422b*/
      v19 = (v6 - 1) & i[19]; /*0x58422d*/
      v20 = Cell::CoordToIndex(v5, (IUnknown *)(i + 18)); /*0x584232*/
      if ( v20 >= 0 ) /*0x584239*/
      {
        v21 = *(_DWORD *)v5->__pad_6C; /*0x58423f*/
        if ( v20 >= v21 ) /*0x584244*/
          v20 = v21 - 1; /*0x584246*/
      }
      else
      {
        v20 = 0; /*0x58423b*/
      }
      v22 = *(_WORD *)(v5->field_70 + 2 * (a3 + 4 * v20 + v20)); /*0x584259*/
      if ( !(*(int (__stdcall **)(__int16 *, MouseClass *, _DWORD, _DWORD, int))(*(_DWORD *)j + 428))( /*0x584286*/
              v17,
              v46,
              *((char *)v17 + 283),
              0,
              1)
        || v58[*((_DWORD *)v17 + 19)] != 1 )
      {
        if ( v22 == v53 ) /*0x584291*/
        {
          if ( !byte_ABDE48[8 * v18 + v19] ) /*0x584293*/
          {
            byte_ABDE48[8 * v18 + v19] = 1; /*0x5842ab*/
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
             && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v59[2])(&v59, v64 + v61, 0)) )
          {
            v25 = v63++; /*0x58432a*/
            *((_WORD *)Block + v25) = v22; /*0x584335*/
          }
        }
      }
      v46 = (MouseClass *)((char *)v46 + 1); /*0x584341*/
      if ( (int)v46 >= 8 ) /*0x584345*/
        break; /*0x584345*/
      v5 = (MouseClass *)this; /*0x584205*/
      v6 = v48; /*0x584209*/
    }
    if ( v49 <= 0 ) /*0x584351*/
      break; /*0x584351*/
    v15 = v49; /*0x5841d4*/
    v5 = (MouseClass *)this; /*0x5841d8*/
    v6 = v48; /*0x5841dc*/
  }
  v26 = &aP1->__pad_20[4]; /*0x58436a*/
  v27 = (v48 - 1) & *(_WORD *)&aP1->__pad_20[4]; /*0x58436d*/
  v28 = (v48 - 1) & *(_WORD *)&aP1->__pad_20[6]; /*0x58436f*/
  v47 = 0; /*0x584377*/
  if ( v48 > 0 ) /*0x58437f*/
  {
    v50 = byte_ABDE48; /*0x584385*/
    while ( 2 ) /*0x58438d*/
    {
      for ( j = 0; j < v48; ++j ) /*0x58438d*/
      {
        LOWORD(v56) = v27 + *(_WORD *)v26; /*0x5843a6*/
        HIWORD(v56) = *((_WORD *)v26 + 1) + v28; /*0x5843b1*/
        aP1 = v56; /*0x5843ba*/
        if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&aP1, (TechnoClass *)1) ) /*0x5843c1*/
        {
          v29 = (__int16)aP1 + SHIWORD(aP1) * (this->q0F8 + this->q0F4 + 1); /*0x5843e7*/
          if ( v29 >= 0 ) /*0x5843e9*/
          {
            v30 = this->q06C; /*0x5843ef*/
            if ( v29 >= v30 ) /*0x5843f4*/
              v29 = v30 - 1; /*0x5843f6*/
          }
          else
          {
            v29 = 0; /*0x5843eb*/
          }
          if ( v53 == *(_WORD *)(this->__pad_070 + 2 * (a3 + 4 * v29 + v29)) && !v50[j] ) /*0x58441c*/
          {
            v59 = &vt_VectorClass_unsigned_short_7E3824; /*0x584522*/
            if ( Block && v62 ) /*0x584534*/
              __3_YAXPAX_Z(Block); /*0x584537*/
            return 1; /*0x584542*/
          }
        }
      }
      v31 = (int)&v47->field_0 + 1 < v48; /*0x584443*/
      v47 = (MouseClass *)((char *)v47 + 1); /*0x584445*/
      v50 += 8; /*0x584449*/
      if ( v31 ) /*0x58444d*/
        continue; /*0x58444d*/
      break;
    }
  }
  v32 = *(this + 6 * a3 + 36) + 36 * v53; /*0x58446e*/
  v33 = *(_DWORD *)(v32 + 4); /*0x584471*/
  v34 = *(_DWORD *)(v32 + 16) - 1; /*0x584478*/
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
        v40 = (unsigned __int16 *)((char *)Block + 2 * v39); /*0x584496*/
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
        v41 = *(_DWORD *)(v35 + 8); /*0x5844af*/
        if ( *(_DWORD *)(v35 + 16) < v41 /*0x5844d4*/
          || (*(_BYTE *)(v35 + 13) || !v41)
          && (v42 = *(_DWORD *)(v35 + 20), v42 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v35 + 8))(v35, v41 + v42, 0) )
        {
          v43 = *(_DWORD *)(v35 + 16); /*0x5844db*/
          v44 = *(_DWORD *)(v35 + 4); /*0x5844de*/
          *(_DWORD *)(v35 + 16) = v43 + 1; /*0x5844e4*/
          *(_WORD *)(v44 + 2 * v43) = v38; /*0x5844e7*/
        }
      }
      v36 -= 2; /*0x5844eb*/
      --v37; /*0x5844ee*/
    }
    while ( v37 ); /*0x5844ef*/
  }
  v59 = &vt_VectorClass_unsigned_short_7E3824; /*0x5844f5*/
  if ( Block ) /*0x5844ff*/
  {
    if ( v62 ) /*0x584507*/
      __3_YAXPAX_Z(Block); /*0x58450a*/
  }
  return 0; /*0x584512*/
}


// ==== 0x00584550  Radar::Update  this=IUnknown  sig=csp ====
void __thiscall Radar::Update(IUnknown *this, IUnknown *aP1)
{
  IUnknown *v2; // ebx
  int v3; // ebp
  int v4; // ecx
  int v5; // edi
  int v6; // edi
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // edi
  CCINIClass *v10; // edx
  IUnknown *v11; // eax
  IUnknown *v12; // esi
  int v13; // edi
  __int16 v14; // bp
  IUnknown *v15; // edx
  int v16; // eax
  _WORD *v17; // ecx
  IUnknown *v18; // ecx
  int v19; // ebp
  _DWORD *v20; // edi
  int v21; // eax
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  _DWORD *v26; // edi
  int v27; // edx
  CCINIClass *v28; // ebp
  IUnknown *v29; // esi
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  char *v35; // edi
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // edi
  int v40; // ecx
  __int16 v41; // ax
  bool v42; // zf
  int v43; // esi
  int v44; // ecx
  IUnknown *v45; // ecx
  int v46; // esi
  int v47; // esi
  int v48; // esi
  int v49; // esi
  int v50; // edx
  char v51; // bl
  int v52; // edi
  int v53; // ebp
  int v54; // ecx
  int v55; // eax
  int v56; // esi
  int v57; // ecx
  int v58; // eax
  int v59; // edx
  int v60; // ecx
  int v61; // ecx
  int v62; // eax
  int v63; // esi
  int v64; // ecx
  int v65; // eax
  int v66; // edx
  int v67; // ecx
  bool v68; // sf
  int v69; // edi
  IUnknown *v70; // ebp
  IUnknown *v71; // edi
  IUnknown *v72; // ecx
  int *v73; // eax
  IUnknown *v74; // esi
  int v75; // eax
  int v76; // esi
  char *v77; // edi
  int v78; // ecx
  char *v79; // edx
  int v80; // esi
  __int16 *v81; // eax
  int v82; // edi
  __int16 v83; // bp
  int v84; // ecx
  IUnknown *aP3; // [esp+20h] [ebp-94h]
  IUnknown *aP3a; // [esp+20h] [ebp-94h]
  IUnknown *aP3b; // [esp+20h] [ebp-94h]
  IUnknown *aP3c; // [esp+20h] [ebp-94h]
  IUnknown *v89; // [esp+24h] [ebp-90h]
  IUnknown *v90; // [esp+24h] [ebp-90h]
  IUnknown *v91; // [esp+24h] [ebp-90h]
  IUnknown *v92; // [esp+24h] [ebp-90h]
  char *v93; // [esp+28h] [ebp-8Ch]
  int v94; // [esp+28h] [ebp-8Ch]
  int v95; // [esp+28h] [ebp-8Ch]
  _BYTE *v96; // [esp+28h] [ebp-8Ch]
  int aP2; // [esp+2Ch] [ebp-88h]
  _DWORD *v98; // [esp+30h] [ebp-84h]
  int v99; // [esp+30h] [ebp-84h]
  int v100; // [esp+30h] [ebp-84h]
  int v101; // [esp+30h] [ebp-84h]
  int v102; // [esp+34h] [ebp-80h]
  char *v103; // [esp+34h] [ebp-80h]
  IUnknown *v104; // [esp+38h] [ebp-7Ch] BYREF
  CCINIClass *v105; // [esp+3Ch] [ebp-78h]
  int v106; // [esp+40h] [ebp-74h]
  int v107; // [esp+44h] [ebp-70h]
  __int16 v108; // [esp+48h] [ebp-6Ch] BYREF
  __int16 v109; // [esp+4Ah] [ebp-6Ah]
  void **v110; // [esp+4Ch] [ebp-68h] BYREF
  IUnknown *v111; // [esp+50h] [ebp-64h]
  IUnknown *v112; // [esp+54h] [ebp-60h]
  char v113; // [esp+59h] [ebp-5Bh]
  IUnknown *v114; // [esp+5Ch] [ebp-58h]
  int v115; // [esp+60h] [ebp-54h]
  IUnknown *v116; // [esp+64h] [ebp-50h]
  _WORD v117[2]; // [esp+68h] [ebp-4Ch] BYREF
  _WORD v118[2]; // [esp+6Ch] [ebp-48h] BYREF
  CCINIClass *v119; // [esp+70h] [ebp-44h] BYREF
  _WORD v120[2]; // [esp+74h] [ebp-40h] BYREF
  _WORD v121[2]; // [esp+78h] [ebp-3Ch] BYREF
  _DWORD *v122; // [esp+7Ch] [ebp-38h]
  void **v123; // [esp+80h] [ebp-34h] BYREF
  void *Block; // [esp+84h] [ebp-30h]
  int v125; // [esp+88h] [ebp-2Ch]
  int v126; // [esp+8Ch] [ebp-28h]
  int v127; // [esp+90h] [ebp-24h]
  int v128; // [esp+94h] [ebp-20h]
  int v129; // [esp+98h] [ebp-1Ch]
  int v130; // [esp+9Ch] [ebp-18h]
  int v131; // [esp+A0h] [ebp-14h]
  int v132; // [esp+A8h] [ebp-Ch]
  int v133; // [esp+B0h] [ebp-4h]

  v2 = this; /*0x584561*/
  v116 = this; /*0x584566*/
  if ( LayerClass::IsWithinUsableArea(this, aP1, (TechnoClass *)1) )
  {
    for ( aP2 = 2; ; --aP2 ) /*0x584577*/
    {
      v3 = aP2; /*0x58457f*/
      v4 = SLOWORD(aP1->field_0); /*0x584594*/
      v106 = 1 << (aP2 + 1); /*0x584599*/
      v5 = SHIWORD(aP1->field_0); /*0x5845a0*/
      v107 = v106; /*0x5845a6*/
      v104 = (IUnknown *)(v4 - v4 % v106); /*0x5845af*/
      v105 = (CCINIClass *)(v5 - v5 % v106); /*0x5845b9*/
      v6 = 0; /*0x5845bd*/
      WordVector::Constructor(&v110, 0, 0); /*0x5845c1*/
      v7 = *(_DWORD **)&v2->__pad_68[4 * aP2 + 24]; /*0x5845c6*/
      v110 = &vt_DynamicVectorClass_unsigned_short_7E3844; /*0x5845cd*/
      v115 = 10; /*0x5845d5*/
      v114 = 0; /*0x5845dd*/
      v8 = v7[2]; /*0x5845e1*/
      v122 = v7; /*0x5845e4*/
      if ( v8 > 0 ) /*0x5845ea*/
      {
        v102 = 0; /*0x5845ec*/
        do /*0x58460e*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)(v102 + *v7) + 12))(v102 + *v7); /*0x5845fa*/
          ++v6; /*0x584604*/
          v102 += 24; /*0x58460a*/
        }
        while ( v6 < v7[2] ); /*0x58460e*/
      }
      v9 = v106; /*0x584618*/
      v103 = &v2->__pad_8C[24 * aP2]; /*0x584623*/
      v10 = v105; /*0x584627*/
      v89 = (IUnknown *)v105; /*0x58462d*/
      v11 = v104; /*0x584633*/
      if ( (int)v105 < (int)&v105->__pad_0[v107] ) /*0x584637*/
      {
        while ( 1 ) /*0x584640*/
        {
          v12 = v11; /*0x584640*/
          if ( (int)v11 >= (int)((char *)v11 + v9) ) /*0x584644*/
            goto LABEL_23; /*0x584644*/
          do /*0x584723*/
          {
            LOWORD(v119) = (_WORD)v12; /*0x584656*/
            HIWORD(v119) = (_WORD)v89; /*0x58465b*/
            v13 = *(_DWORD *)&v2->__pad_68[8] + 10 * CellToTileIndexMap(&v2->field_0, (IUnknown *)&v119); /*0x58466f*/
            v14 = *(_WORD *)(v13 + 2 * aP2); /*0x584672*/
            if ( v14 ) /*0x584679*/
            {
              v15 = v114; /*0x58467b*/
              v16 = (int)&v114[-1].__tail_1602E[1]; /*0x58467f*/
              if ( (int)&v114[-1].__tail_1602E[1] >= 0 ) /*0x584684*/
              {
                v17 = (_WORD *)((char *)v111 + 2 * v16); /*0x58468a*/
                do /*0x584698*/
                {
                  if ( *v17 == v14 ) /*0x584690*/
                    break; /*0x584690*/
                  --v16; /*0x584692*/
                  --v17; /*0x584693*/
                }
                while ( v16 >= 0 ); /*0x584698*/
              }
              if ( v16 == -1 ) /*0x58469d*/
              {
                if ( (int)v114 < (int)v112 ) /*0x5846a5*/
                  goto LABEL_20; /*0x5846a5*/
                if ( (v113 || !v112) /*0x5846c8*/
                  && v115 > 0
                  && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v110[2])(&v110, (char *)v112 + v115, 0) )
                {
                  v15 = v114; /*0x5846cf*/
LABEL_20:
                  v114 = (IUnknown *)((char *)&v15->field_0 + 1); /*0x5846d3*/
                  *((_WORD *)&v111->field_0 + (_DWORD)v15) = v14; /*0x5846de*/
                }
              }
            }
            v121[0] = (_WORD)v12; /*0x5846e2*/
            *(_WORD *)(v13 + 2 * aP2) = 0; /*0x5846f7*/
            v121[1] = (_WORD)v89; /*0x5846fd*/
            v12 = (IUnknown *)((char *)v12 + 1); /*0x58470a*/
            *(_WORD *)(v13 + 6) = *(_WORD *)(*(_DWORD *)v2->__pad_68 /*0x584712*/
                                           + 4 * CellToTileIndexMap(&v2->field_0, (IUnknown *)v121)
                                           + 2);
            v9 = v106; /*0x584716*/
            v11 = v104; /*0x58471a*/
          }
          while ( (int)v12 < (int)((char *)v104 + v106) ); /*0x584723*/
          v10 = v105; /*0x584729*/
LABEL_23:
          v89 = (IUnknown *)((char *)v89 + 1); /*0x58472d*/
          if ( (int)v89 >= (int)&v10->__pad_0[v107] ) /*0x58473e*/
          {
            v3 = aP2; /*0x584744*/
            break; /*0x584744*/
          }
        }
      }
      v18 = (IUnknown *)((char *)v114 - 1); /*0x584748*/
      v90 = (IUnknown *)((char *)v114 - 1); /*0x58474f*/
      if ( (int)&v114[-1].__tail_1602E[1] >= 0 ) /*0x584753*/
      {
        v93 = &v2->__pad_8C[24 * v3 + 4]; /*0x584760*/
        while ( 1 ) /*0x584776*/
        {
          v19 = *((unsigned __int16 *)&v111->field_0 + (_DWORD)v18); /*0x584776*/
          v20 = (_DWORD *)(*(_DWORD *)v93 + 36 * v19); /*0x584782*/
          v98 = v20; /*0x584785*/
          v21 = v20[4] - 1; /*0x58478c*/
          aP3 = (IUnknown *)v21; /*0x58478d*/
          if ( v21 >= 0 ) /*0x584791*/
          {
            while ( 1 ) /*0x5847a8*/
            {
              v22 = *(_DWORD *)v93 + 36 * *(_DWORD *)(v20[1] + 8 * v21); /*0x5847a8*/
              v23 = *(_DWORD *)(v22 + 16); /*0x5847ab*/
              v24 = v23 - 1; /*0x5847af*/
              v25 = v23 - 1; /*0x5847b2*/
              if ( v23 - 1 >= 0 ) /*0x5847b6*/
              {
                v26 = (_DWORD *)(*(_DWORD *)(v22 + 4) + 8 * v25); /*0x5847bb*/
                while ( *v26 != v19 ) /*0x5847c0*/
                {
                  --v25; /*0x5847c2*/
                  v26 -= 2; /*0x5847c3*/
                  if ( v25 < 0 ) /*0x5847c8*/
                    goto LABEL_39; /*0x5847c8*/
                }
                if ( v25 < v23 ) /*0x5847ce*/
                {
                  for ( *(_DWORD *)(v22 + 16) = v24; /*0x5847d5*/
                        v25 < *(_DWORD *)(v22 + 16);
                        *(_DWORD *)(v27 + 8 * v25 - 4) = *(_DWORD *)(v27 + 8 * v25 + 4) )
                  {
                    v27 = *(_DWORD *)(v22 + 4); /*0x5847d7*/
                    ++v25; /*0x5847da*/
                    *(_DWORD *)(v27 + 8 * v25 - 8) = *(_DWORD *)(v27 + 8 * v25); /*0x5847de*/
                  }
                }
LABEL_39:
                v20 = v98; /*0x5847f1*/
              }
              aP3 = (IUnknown *)((char *)aP3 - 1); /*0x5847fa*/
              if ( (int)aP3 < 0 ) /*0x5847fe*/
                break; /*0x5847fe*/
              v21 = (int)aP3; /*0x584795*/
            }
          }
          (*(void (__thiscall **)(_DWORD *))(*v20 + 12))(v20); /*0x584804*/
          v90 = (IUnknown *)((char *)v90 - 1); /*0x58480c*/
          if ( (int)v90 < 0 ) /*0x584810*/
            break; /*0x584810*/
          v18 = v90; /*0x584766*/
        }
        v9 = v106; /*0x584816*/
        v11 = v104; /*0x58481a*/
        v10 = v105; /*0x58481e*/
      }
      v28 = v10; /*0x584826*/
      aP3a = *(IUnknown **)&v2->__pad_68[4 * aP2 + 12]; /*0x58482c*/
      if ( (int)v10 < (int)&v10->__pad_0[v107] ) /*0x584838*/
        break; /*0x584838*/
LABEL_73:
      *(_DWORD *)&v2->__pad_68[4 * aP2 + 12] = aP3a; /*0x584ab8*/
      v43 = v2->field_60 - 1; /*0x584ac7*/
      if ( v43 >= 0 ) /*0x584ac8*/
      {
        v44 = 16 * v43; /*0x584ad0*/
        v100 = 16 * v43; /*0x584ad4*/
        v95 = v2->field_60; /*0x584ad8*/
        do /*0x584b53*/
        {
          v45 = (IUnknown *)(v2->field_54 + v44); /*0x584adc*/
          v46 = SLOWORD(v45->field_0); /*0x584adf*/
          if ( v46 >= (int)v11 /*0x584b1e*/
            && v46 < (int)v11 + v9
            && (v47 = SHIWORD(v45->field_0), v47 >= (int)v10)
            && v47 < (int)&v10->__pad_0[v107]
            || (v48 = SLOWORD(v45->field_4), v48 >= (int)v11)
            && v48 < (int)v11 + v9
            && (v49 = SHIWORD(v45->field_4), v49 >= (int)v10)
            && v49 < (int)&v10->__pad_0[v107] )
          {
            if ( LOBYTE(v45->field_8) ) /*0x584b20*/
            {
              RadarClass::RenderBlips(&v2->field_0, v45, aP2); /*0x584b2e*/
              v9 = v106; /*0x584b33*/
              v11 = v104; /*0x584b37*/
              v10 = v105; /*0x584b3b*/
            }
          }
          v44 = v100 - 16; /*0x584b47*/
          v42 = v95 == 1; /*0x584b4a*/
          v100 -= 16; /*0x584b4b*/
          --v95; /*0x584b4f*/
        }
        while ( !v42 ); /*0x584b53*/
      }
      v50 = 0; /*0x584b55*/
      aP3b = 0; /*0x584b57*/
      do /*0x584c85*/
      {
        if ( *(int *)(v50 + *v122 + 16) > 0 ) /*0x584b6b*/
        {
          v101 = *(_DWORD *)(v50 + *v122 + 16); /*0x584b74*/
          v96 = (_BYTE *)(*(_DWORD *)(*v122 + v50 + 4) + 8); /*0x584b7b*/
          do /*0x584c6a*/
          {
            v51 = *v96; /*0x584b86*/
            v52 = (unsigned __int16)*((_DWORD *)v96 - 1); /*0x584b95*/
            v53 = (unsigned __int16)HIWORD(*((_DWORD *)v96 - 1)); /*0x584b9b*/
            v54 = *((_DWORD *)v103 + 1); /*0x584ba1*/
            LOBYTE(v132) = *v96; /*0x584ba4*/
            v55 = *(_DWORD *)(v54 + 36 * v52 + 8); /*0x584bae*/
            v56 = v54 + 36 * v52; /*0x584bb2*/
            if ( *(_DWORD *)(v56 + 16) < v55 /*0x584bd8*/
              || (*(_BYTE *)(v56 + 13) || !v55)
              && (v57 = *(_DWORD *)(v56 + 20), v57 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v56 + 8))(v56, v57 + v55, 0) )
            {
              v58 = *(_DWORD *)(v56 + 16); /*0x584bdf*/
              v59 = *(_DWORD *)(v56 + 4); /*0x584be2*/
              *(_DWORD *)(v56 + 16) = v58 + 1; /*0x584be8*/
              v60 = v132; /*0x584beb*/
              *(_DWORD *)(v59 + 8 * v58) = v53; /*0x584bf2*/
              *(_DWORD *)(v59 + 8 * v58 + 4) = v60; /*0x584bf5*/
            }
            LOBYTE(v133) = v51; /*0x584c01*/
            v61 = *((_DWORD *)v103 + 1); /*0x584c08*/
            v62 = *(_DWORD *)(v61 + 36 * v53 + 8); /*0x584c0b*/
            v63 = v61 + 36 * v53; /*0x584c0f*/
            if ( *(_DWORD *)(v63 + 16) < v62 /*0x584c35*/
              || (*(_BYTE *)(v63 + 13) || !v62)
              && (v64 = *(_DWORD *)(v63 + 20), v64 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v63 + 8))(v63, v64 + v62, 0) )
            {
              v65 = *(_DWORD *)(v63 + 16); /*0x584c3c*/
              v66 = *(_DWORD *)(v63 + 4); /*0x584c3f*/
              *(_DWORD *)(v63 + 16) = v65 + 1; /*0x584c45*/
              v67 = v133; /*0x584c48*/
              *(_DWORD *)(v66 + 8 * v65) = v52; /*0x584c4f*/
              *(_DWORD *)(v66 + 8 * v65 + 4) = v67; /*0x584c52*/
            }
            v42 = v101 == 1; /*0x584c61*/
            v96 += 12; /*0x584c62*/
            --v101; /*0x584c66*/
          }
          while ( !v42 ); /*0x584c6a*/
          v50 = (int)aP3b; /*0x584c70*/
          v2 = v116; /*0x584c74*/
        }
        v50 += 24; /*0x584c78*/
        aP3b = (IUnknown *)v50; /*0x584c81*/
      }
      while ( v50 < 6144 ); /*0x584c85*/
      v110 = &vt_VectorClass_unsigned_short_7E3824; /*0x584c93*/
      if ( v111 && v113 ) /*0x584ca3*/
      {
        __3_YAXPAX_Z(v111); /*0x584ca6*/
        v111 = 0; /*0x584cae*/
      }
      v113 = 0; /*0x584cb6*/
      v68 = aP2 - 1 < 0; /*0x584cbb*/
      v112 = 0; /*0x584cbc*/
      if ( v68 ) /*0x584cc4*/
      {
        v69 = SHIWORD(aP1->field_0); /*0x584ce3*/
        v70 = (IUnknown *)(SLOWORD(aP1->field_0) - SLOWORD(aP1->field_0) % 8); /*0x584ce9*/
        v104 = v70; /*0x584cf2*/
        v71 = (IUnknown *)(v69 - v69 % 8); /*0x584cfd*/
        v92 = v71; /*0x584cff*/
        v72 = (IUnknown *)&v71->field_8; /*0x584d03*/
        v116 = (IUnknown *)&v71->field_8; /*0x584d08*/
        if ( !__OFSUB__(v71, &v71->field_8) ) /*0x584d0c*/
        {
          v73 = &v70->field_8; /*0x584d12*/
          do /*0x584e25*/
          {
            v74 = v70; /*0x584d15*/
            aP3c = v70; /*0x584d19*/
            if ( (int)v70 < (int)v73 ) /*0x584d1d*/
            {
              do /*0x584e14*/
              {
                v108 = (__int16)v74; /*0x584d2c*/
                v109 = (__int16)v71; /*0x584d31*/
                if ( LayerClass::IsWithinUsableArea(v2, (IUnknown *)&v108, (TechnoClass *)1) ) /*0x584d36*/
                {
                  v75 = (__int16)v74 + (__int16)v71 * (v2->field_F8 + *(_DWORD *)&v2->__pad_EC[8] + 1); /*0x584d5c*/
                  if ( v75 >= 0 ) /*0x584d5e*/
                  {
                    v78 = *(_DWORD *)&v2->__pad_68[4]; /*0x584dc6*/
                    if ( v75 >= v78 ) /*0x584dcb*/
                      v75 = v78 - 1; /*0x584dcd*/
                  }
                  else
                  {
                    v75 = 0; /*0x584d60*/
                  }
                  v79 = &v2->__pad_8C[4]; /*0x584dd6*/
                  v80 = 2; /*0x584ddc*/
                  v81 = (__int16 *)(*(_DWORD *)&v2->__pad_68[8] + 10 * v75); /*0x584de1*/
                  do /*0x584dfc*/
                  {
                    v82 = *(_DWORD *)v79; /*0x584de7*/
                    v83 = v81[1]; /*0x584de9*/
                    v84 = 9 * *v81; /*0x584ded*/
                    v79 += 24; /*0x584df0*/
                    ++v81; /*0x584df3*/
                    --v80; /*0x584df6*/
                    *(_WORD *)(v82 + 4 * v84 + 24) = v83; /*0x584df7*/
                  }
                  while ( v80 ); /*0x584dfc*/
                  v71 = v92; /*0x584dfe*/
                  v70 = v104; /*0x584e02*/
                  v74 = aP3c; /*0x584e06*/
                }
                v74 = (IUnknown *)((char *)v74 + 1); /*0x584e0a*/
                v73 = &v70->field_8; /*0x584e0b*/
                aP3c = v74; /*0x584e10*/
              }
              while ( (int)v74 < (int)&v70->field_8 ); /*0x584e14*/
              v72 = v116; /*0x584e1a*/
            }
            v71 = (IUnknown *)((char *)v71 + 1); /*0x584e1e*/
            v92 = v71; /*0x584e21*/
          }
          while ( (int)v71 < (int)v72 ); /*0x584e25*/
        }
        MapClass::AllocArrays(&stru_87C374.__pad_14B0[4244]); /*0x584e30*/
        return; /*0x584e30*/
      }
    }
    while ( 1 ) /*0x584841*/
    {
      v29 = v11; /*0x584841*/
      if ( (int)v11 < (int)((char *)v11 + v9) ) /*0x584845*/
        break; /*0x584845*/
LABEL_72:
      v28 = (CCINIClass *)((char *)v28 + 1); /*0x584aa9*/
      if ( (int)v28 >= (int)&v10->__pad_0[v107] ) /*0x584ab2*/
        goto LABEL_73; /*0x584ab2*/
    }
    v94 = 36 * (_DWORD)aP3a; /*0x584855*/
    while ( 1 )
    {
      v118[0] = (_WORD)v29; /*0x584862*/
      v118[1] = (_WORD)v28; /*0x584867*/
      if ( LayerClass::IsWithinUsableArea(v2, (IUnknown *)v118, (TechnoClass *)1) )
      {
        v117[0] = (_WORD)v29; /*0x584880*/
        v117[1] = (_WORD)v28; /*0x584885*/
        v30 = Cell::CoordToIndex(v2, (IUnknown *)v117); /*0x58488a*/
        if ( v30 >= 0 ) /*0x584891*/
        {
          v31 = *(_DWORD *)&v2->__pad_68[4]; /*0x584897*/
          if ( v30 >= v31 ) /*0x58489c*/
            v30 = v31 - 1; /*0x58489e*/
        }
        else
        {
          v30 = 0; /*0x584893*/
        }
        v32 = *(_DWORD *)&v2->__pad_68[8]; /*0x5848a1*/
        v120[0] = (_WORD)v29; /*0x5848a7*/
        v120[1] = (_WORD)v28; /*0x5848ac*/
        v91 = (IUnknown *)(v32 + 10 * v30); /*0x5848bb*/
        v33 = Cell::CoordToIndex(v2, (IUnknown *)v120); /*0x5848bf*/
        if ( v33 >= 0 ) /*0x5848c6*/
        {
          v34 = *(_DWORD *)&v2->__pad_68[4]; /*0x5848cc*/
          if ( v33 >= v34 ) /*0x5848d1*/
            v33 = v34 - 1; /*0x5848d3*/
        }
        else
        {
          v33 = 0; /*0x5848c8*/
        }
        v99 = *(unsigned __int8 *)(*(_DWORD *)v2->__pad_68 + 4 * v33); /*0x5848e3*/
        if ( v99 != 7 && !*((_WORD *)&v91->field_0 + aP2) )
        {
          v108 = (__int16)v29; /*0x58491b*/
          v109 = (__int16)v28; /*0x584920*/
          Radar::ProcessSubzone(v2, v91, (IUnknown *)aP2, aP3a, (IUnknown *)&v104, (IUnknown *)&v108); /*0x584925*/
          VectorClass::ConstructSubzone(&v123, 0, 0); /*0x584932*/
          v123 = &vt_DynamicVectorClass_SubzoneConnectionStruct; /*0x58493b*/
          v128 = 10; /*0x584943*/
          v127 = 0; /*0x58494e*/
          VectorClass::CleanupSubzone((int)&v123); /*0x584955*/
          LOWORD(v129) = 0; /*0x58495b*/
          v130 = 0; /*0x584963*/
          v131 = 0; /*0x58496a*/
          v35 = &v2->__pad_8C[24 * aP2]; /*0x584971*/
          v36 = *(_DWORD *)&v2->__pad_8C[24 * aP2 + 8]; /*0x584975*/
          if ( *(_DWORD *)&v2->__pad_8C[24 * aP2 + 16] < v36 /*0x58499a*/
            || (v2->__pad_8C[24 * aP2 + 13] || !v36)
            && (v37 = *(_DWORD *)&v2->__pad_A0[24 * aP2], v37 > 0)
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v103 + 8))(v103, v37 + v36, 0) )
          {
            v38 = *(_DWORD *)&v2->__pad_8C[24 * aP2 + 16]; /*0x5849a5*/
            *(_DWORD *)&v2->__pad_8C[24 * aP2 + 16] = v38 + 1; /*0x5849ae*/
            v39 = *(_DWORD *)&v2->__pad_8C[24 * aP2 + 4] + 36 * v38; /*0x5849b8*/
            Radar::CopyDataArray((int *)v39, (int *)&v123); /*0x5849be*/
            *(_WORD *)(v39 + 24) = v129; /*0x5849cb*/
            *(_DWORD *)(v39 + 28) = v130; /*0x5849d6*/
            *(_DWORD *)(v39 + 32) = v131; /*0x5849e0*/
            v35 = &v2->__pad_8C[24 * aP2]; /*0x5849e3*/
          }
          v123 = &vt_VectorClass_SubzoneConnectionStruct; /*0x5849eb*/
          if ( Block && BYTE1(v126) ) /*0x5849fd*/
          {
            __3_YAXPAX_Z(Block); /*0x584a00*/
            Block = 0; /*0x584a08*/
          }
          v40 = v94 + *((_DWORD *)v35 + 1); /*0x584a1b*/
          BYTE1(v126) = 0; /*0x584a20*/
          v125 = 0; /*0x584a25*/
          v41 = aP2 == 2 ? 0 : *((_WORD *)&v91->field_0 + aP2 + 1);
          *(_WORD *)(v40 + 24) = v41; /*0x584a3c*/
          *(_DWORD *)(v40 + 28) = v99; /*0x584a44*/
          *(_DWORD *)(v40 + 20) = 16; /*0x584a47*/
          *(_DWORD *)(v40 + 32) = (__int16)v29 / 4 + 130 * ((__int16)v28 / 4) + 131; /*0x584a78*/
          v42 = v94 == -36; /*0x584a80*/
          aP3a = (IUnknown *)((char *)aP3a + 1); /*0x584a83*/
          v94 += 36; /*0x584a87*/
          if ( v42 ) /*0x584a8b*/
            break; /*0x584a8b*/
        }
      }
      v9 = v106; /*0x584a91*/
      v11 = v104; /*0x584a95*/
      v29 = (IUnknown *)((char *)v29 + 1); /*0x584a99*/
      if ( (int)v29 >= (int)((char *)v104 + v106) ) /*0x584a9f*/
      {
        v10 = v105; /*0x584aa5*/
        goto LABEL_72; /*0x584aa5*/
      }
    }
    v76 = 2; /*0x584d64*/
    v77 = &v2->__pad_A8[20]; /*0x584d69*/
    do /*0x584d84*/
    {
      (*(void (__thiscall **)(char *))(*(_DWORD *)v77 + 12))(v77); /*0x584d73*/
      Subzone::BuildGraph(v2, (IUnknown *)v76--); /*0x584d79*/
      v77 -= 24; /*0x584d7f*/
    }
    while ( v76 >= 0 ); /*0x584d84*/
    MapClass::AllocArrays(&stru_87C374.__pad_14B0[4244]); /*0x584d8b*/
    v110 = &vt_VectorClass_unsigned_short_7E3824; /*0x584d94*/
    if ( v111 && v113 ) /*0x584daa*/
      __3_YAXPAX_Z(v111); /*0x584db1*/
  }
}


// ==== 0x00584E50  ObjectClass::UpdateCellConnectivityGraph  this=ObjectClass  sig=csp ====
int __userpurge UpdateCellConnectivityGraph@<eax>(int *this@<ecx>, IUnknown aP1)
{
  ObjectClass *v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  int *v6; // eax
  int *v7; // edi
  bool v8; // al
  CCINIClass *v9; // ecx
  int v10; // edi
  IUnknown *v11; // ebx
  IUnknown *v12; // edi
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  int v16; // edx
  int v17; // eax
  AbstractClass *v18; // edx
  AbstractClass *v19; // ebp
  int v20; // eax
  _DWORD *v21; // ebp
  _DWORD *v22; // edi
  int v23; // eax
  int v24; // edi
  int v25; // edx
  int v26; // eax
  _DWORD *v27; // ebp
  int v28; // eax
  _DWORD *v29; // ebp
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // ebp
  AbstractClass *v38; // edx
  AbstractClass *v39; // edi
  int v40; // eax
  int uniqueId; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // eax
  _DWORD *v45; // edi
  int result; // eax
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  ObjectClass *v50; // [esp+10h] [ebp-4Ch] BYREF
  int v51; // [esp+14h] [ebp-48h] BYREF
  int v52; // [esp+18h] [ebp-44h]
  TagClass *v53; // [esp+1Ch] [ebp-40h] BYREF
  TagClass *v54; // [esp+20h] [ebp-3Ch] BYREF
  TagClass *v55; // [esp+24h] [ebp-38h] BYREF
  TagClass *v56; // [esp+28h] [ebp-34h] BYREF
  int v57; // [esp+2Ch] [ebp-30h] BYREF
  int v58; // [esp+30h] [ebp-2Ch]
  int v59; // [esp+34h] [ebp-28h] BYREF
  int v60; // [esp+38h] [ebp-24h]
  int v61; // [esp+3Ch] [ebp-20h] BYREF
  int v62; // [esp+40h] [ebp-1Ch]
  int v63; // [esp+44h] [ebp-18h] BYREF
  int v64; // [esp+48h] [ebp-14h]
  int v65; // [esp+4Ch] [ebp-10h] BYREF
  int v66; // [esp+50h] [ebp-Ch]
  int v67; // [esp+54h] [ebp-8h] BYREF
  char v68; // [esp+58h] [ebp-4h]

  v3 = *(ObjectClass **)aP1.field_0; /*0x584e5d*/
  v4 = *(_DWORD *)(aP1.field_0 + 4); /*0x584e5f*/
  v50 = v3; /*0x584e62*/
  v51 = v4; /*0x584e66*/
  v5 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x584e75*/
  if ( v5 < 0x40000 && (v6 = *(int **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v5)) != 0 ) /*0x584e8b*/
  {
    v7 = v6; /*0x584e8d*/
  }
  else
  {
    g_Map_GlobalCellIndex = (IUnknown *)v3; /*0x584e91*/
    v7 = g_CellClassArray; /*0x584e97*/
  }
  v53 = g_MapSeedState; /*0x584ea3*/
  v55 = g_MapSeedState; /*0x584ea7*/
  v54 = g_MapSeedState; /*0x584eab*/
  v56 = g_MapSeedState; /*0x584eaf*/
  if ( Cell::IsInRange(v7) || Cell::IsInRange2(v7) ) /*0x584ebe*/
  {
    v8 = Cell::IsInRange(v7); /*0x584ecd*/
    v9 = *(CCINIClass **)&MEMORY[0xA8D63C].__pad_579C[57424]; /*0x584ed2*/
    if ( !v8 ) /*0x584edd*/
      v9 = (CCINIClass *)g_TerrainBridgeIndex; /*0x584edf*/
    v10 = dword_82A944[v7[14] - (_DWORD)v9]; /*0x584eeb*/
    v11 = (IUnknown *)(4 * (v10 & 7) + 9041544); /*0x584ef7*/
    v53 = (TagClass *)CellStruct::Add(&v50, &aP1, v11)->field_0; /*0x584f19*/
    v12 = (IUnknown *)(4 * (((_BYTE)v10 - 4) & 7) + 9041544); /*0x584f1d*/
    v55 = (TagClass *)CellStruct::Add(&v50, &aP1, v12)->field_0; /*0x584f2e*/
    v54 = (TagClass *)CellStruct::Add(&v51, &aP1, v11)->field_0; /*0x584f4c*/
    v56 = (TagClass *)CellStruct::Add(&v51, &aP1, v12)->field_0; /*0x584f57*/
  }
  v13 = 0; /*0x584f61*/
  aP1.field_0 = (int)(this + 36); /*0x584f63*/
  do /*0x58519f*/
  {
    v14 = *(__int16 *)(this->referenceCount + 10 * CellToTileIndexMap(this, (IUnknown *)&v50) + 2 * v13); /*0x584f7e*/
    v15 = CellToTileIndexMap(this, (IUnknown *)&v51); /*0x584f87*/
    v16 = this->referenceCount; /*0x584f8c*/
    LOBYTE(v58) = 0; /*0x584f92*/
    v17 = *(__int16 *)(v16 + 10 * v15 + 2 * v13); /*0x584f9e*/
    v18 = *(AbstractClass **)aP1.field_0; /*0x584fa2*/
    v52 = v17; /*0x584fa4*/
    v57 = v17; /*0x584fa8*/
    v19 = &v18[v14]; /*0x584fb3*/
    v20 = (*(int (__thiscall **)(AbstractClass *, int *))(*(_DWORD *)v19->__pad_0 + 16))(v19, &v57); /*0x584fbc*/
    if ( v20 != -1 ) /*0x584fc2*/
      Vector8::EraseAt(v19, v20); /*0x584fc7*/
    v21 = (_DWORD *)aP1.field_0; /*0x584fd0*/
    v59 = v14; /*0x584fd4*/
    LOBYTE(v60) = 0; /*0x584fd8*/
    v22 = (_DWORD *)(*(_DWORD *)aP1.field_0 + 36 * v52); /*0x584fe3*/
    v23 = (*(int (__thiscall **)(_DWORD *, int *))(*v22 + 16))(v22, &v59); /*0x584fef*/
    if ( v23 != -1 ) /*0x584ff5*/
      Vector8::EraseAt(v22, v23); /*0x584ffa*/
    v24 = *(__int16 *)(this->referenceCount + 10 * CellToTileIndexMap(this, (IUnknown *)&v53) + 2 * v13); /*0x58501b*/
    v25 = 5 * CellToTileIndexMap(this, (IUnknown *)&v54); /*0x585024*/
    v26 = this->referenceCount; /*0x585027*/
    LOBYTE(v62) = 0; /*0x58502d*/
    v27 = (_DWORD *)(*v21 + 36 * v24); /*0x58503c*/
    v52 = *(__int16 *)(v26 + 2 * v25 + 2 * v13); /*0x585043*/
    v61 = v52; /*0x585047*/
    v28 = (*(int (__thiscall **)(_DWORD *, int *))(*v27 + 16))(v27, &v61); /*0x585051*/
    if ( v28 != -1 ) /*0x585057*/
      Vector8::EraseAt(v27, v28); /*0x58505c*/
    v63 = v24; /*0x585065*/
    LOBYTE(v64) = 0; /*0x585069*/
    v29 = (_DWORD *)(*(_DWORD *)aP1.field_0 + 36 * v52); /*0x58507c*/
    v30 = (*(int (__thiscall **)(_DWORD *, int *))(*v29 + 16))(v29, &v63); /*0x585084*/
    if ( v30 != -1 ) /*0x58508a*/
      Vector8::EraseAt(v29, v30); /*0x58508f*/
    v31 = Cell::CoordToIndex(this, (IUnknown *)&v55); /*0x58509b*/
    if ( v31 >= 0 ) /*0x5850a2*/
    {
      v32 = this->health; /*0x5850a8*/
      if ( v31 >= v32 ) /*0x5850ad*/
        v31 = v32 - 1; /*0x5850af*/
    }
    else
    {
      v31 = 0; /*0x5850a4*/
    }
    v33 = *(__int16 *)(this->referenceCount + 2 * (v13 + 4 * v31 + v31)); /*0x5850bf*/
    v52 = v33; /*0x5850c5*/
    v34 = Cell::CoordToIndex(this, (IUnknown *)&v56); /*0x5850c9*/
    if ( v34 >= 0 ) /*0x5850d0*/
    {
      v35 = this->health; /*0x5850d6*/
      if ( v34 >= v35 ) /*0x5850db*/
        v34 = v35 - 1; /*0x5850dd*/
    }
    else
    {
      v34 = 0; /*0x5850d2*/
    }
    v36 = this->referenceCount; /*0x5850e0*/
    LOBYTE(v66) = 0; /*0x5850ec*/
    v37 = *(__int16 *)(v36 + 2 * (v13 + 4 * v34 + v34)); /*0x5850f1*/
    v38 = *(AbstractClass **)aP1.field_0; /*0x5850f5*/
    v65 = v37; /*0x5850fe*/
    v39 = &v38[v33]; /*0x585102*/
    v40 = (*(int (__thiscall **)(AbstractClass *, int *))(*(_DWORD *)v39->__pad_0 + 16))(v39, &v65); /*0x58510a*/
    if ( v40 != -1 ) /*0x585110*/
    {
      uniqueId = v39->uniqueId; /*0x585112*/
      if ( v40 < uniqueId ) /*0x585117*/
      {
        v42 = uniqueId - 1; /*0x585119*/
        for ( v39->uniqueId = v42; v40 < v39->uniqueId; *(_DWORD *)(v43 + 8 * v40 - 4) = *(_DWORD *)(v43 + 8 * v40 + 4) ) /*0x58511f*/
        {
          v43 = *(_DWORD *)&v39->__pad_0[4]; /*0x585121*/
          ++v40; /*0x585124*/
          *(_DWORD *)(v43 + 8 * v40 - 8) = *(_DWORD *)(v43 + 8 * v40); /*0x585128*/
        }
      }
    }
    v67 = v52; /*0x585143*/
    v44 = *(_DWORD *)aP1.field_0; /*0x58514b*/
    v68 = 0; /*0x58514d*/
    v45 = (_DWORD *)(v44 + 36 * v37); /*0x585155*/
    result = (*(int (__thiscall **)(_DWORD *, int *))(*v45 + 16))(v45, &v67); /*0x58515f*/
    if ( result != -1 ) /*0x585165*/
    {
      v47 = v45[4]; /*0x585167*/
      if ( result < v47 ) /*0x58516c*/
      {
        v48 = v47 - 1; /*0x58516e*/
        for ( v45[4] = v48; result < v45[4]; *(_DWORD *)(v49 + 8 * result - 4) = *(_DWORD *)(v49 + 8 * result + 4) ) /*0x585174*/
        {
          v49 = v45[1]; /*0x585176*/
          ++result; /*0x585179*/
          *(_DWORD *)(v49 + 8 * result - 8) = *(_DWORD *)(v49 + 8 * result); /*0x58517d*/
        }
      }
    }
    ++v13; /*0x585194*/
    aP1.field_0 += 24; /*0x58519b*/
  }
  while ( v13 < 3 ); /*0x58519f*/
  return result; /*0x5851a5*/
}


// ==== 0x005851B0  ObjectClass::BuildTileAdjacencyTable  this=ObjectClass  sig=csp ====
int __thiscall BuildTileAdjacencyTable(int *this, IUnknown *aP1)
{
  ObjectClass *v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  int *v6; // eax
  int *v7; // edi
  bool v8; // al
  CCINIClass *v9; // ecx
  MouseClass *v10; // edi
  IUnknown *v11; // ebx
  IUnknown *v12; // edi
  int v13; // ebp
  int v14; // ebx
  IUnknown *v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // edx
  char v19; // al
  int v20; // eax
  int v21; // edx
  ObjectClass *v22; // edi
  int v23; // edi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // ebx
  IUnknown *v30; // ecx
  int v31; // edi
  int v32; // eax
  int v33; // edx
  char v34; // al
  int v35; // eax
  int v36; // edx
  IUnknown *v37; // edi
  int v38; // edi
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // edx
  int v43; // ecx
  int v44; // ebx
  IUnknown *v45; // ecx
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
  ObjectClass *v58; // [esp+30h] [ebp-50h]
  ObjectClass *v59; // [esp+34h] [ebp-4Ch] BYREF
  int v60; // [esp+38h] [ebp-48h] BYREF
  TagClass *v61; // [esp+3Ch] [ebp-44h] BYREF
  int v62; // [esp+44h] [ebp-3Ch] BYREF
  int v63; // [esp+48h] [ebp-38h] BYREF
  int v64; // [esp+4Ch] [ebp-34h] BYREF
  ObjectClass *v65; // [esp+54h] [ebp-2Ch]
  int v66; // [esp+5Ch] [ebp-24h]
  IUnknown *v67; // [esp+64h] [ebp-1Ch]
  int v68; // [esp+6Ch] [ebp-14h]
  int v69; // [esp+74h] [ebp-Ch]
  int v70; // [esp+7Ch] [ebp-4h]

  v3 = (ObjectClass *)aP1->field_0; /*0x5851bd*/
  v4 = aP1->field_4; /*0x5851bf*/
  v59 = v3; /*0x5851c2*/
  v60 = v4; /*0x5851c6*/
  v5 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x5851d5*/
  if ( v5 < 0x40000 && (v6 = *(int **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v5)) != 0 ) /*0x5851eb*/
  {
    v7 = v6; /*0x5851ed*/
  }
  else
  {
    g_Map_GlobalCellIndex = (IUnknown *)v3; /*0x5851f1*/
    v7 = g_CellClassArray; /*0x5851f7*/
  }
  v61 = g_MapSeedState; /*0x585203*/
  if ( Cell::IsInRange(v7) || Cell::IsInRange2(v7) ) /*0x585212*/
  {
    v8 = Cell::IsInRange(v7); /*0x585221*/
    v9 = *(CCINIClass **)&MEMORY[0xA8D63C].__pad_579C[57424]; /*0x585226*/
    if ( !v8 ) /*0x585231*/
      v9 = (CCINIClass *)g_TerrainBridgeIndex; /*0x585233*/
    v10 = (MouseClass *)dword_82A944[v7[14] - (_DWORD)v9]; /*0x58523f*/
    v11 = (IUnknown *)(4 * ((unsigned __int8)v10 & 7) + 9041544); /*0x58524b*/
    v62 = CellStruct::Add(&v59, (IUnknown *)&aP1, v11)->field_0; /*0x585265*/
    v12 = (IUnknown *)(4 * (((_BYTE)v10 - 4) & 7) + 9041544); /*0x585271*/
    v64 = CellStruct::Add(&v59, (IUnknown *)&aP1, v12)->field_0; /*0x58528b*/
    v63 = CellStruct::Add(&v60, (IUnknown *)&aP1, v11)->field_0; /*0x5852a0*/
    v61 = (TagClass *)CellStruct::Add(&v60, (IUnknown *)&aP1, v12)->field_0; /*0x5852ab*/
  }
  LOBYTE(v65) = 0; /*0x5852b5*/
  LOBYTE(v66) = 0; /*0x5852ba*/
  LOBYTE(v67) = 0; /*0x5852bf*/
  LOBYTE(v68) = 0; /*0x5852c4*/
  LOBYTE(v69) = 0; /*0x5852c9*/
  LOBYTE(v70) = 0; /*0x5852ce*/
  v13 = 0; /*0x5852d3*/
  v58 = (ObjectClass *)(this + 36); /*0x5852d5*/
  do /*0x585581*/
  {
    v14 = *(__int16 *)(this->referenceCount + 10 * CellToTileIndexMap(this, (IUnknown *)&v59) + v13); /*0x5852f5*/
    v15 = (IUnknown *)*(__int16 *)(this->referenceCount + 10 * CellToTileIndexMap(this, (IUnknown *)&v60) + v13); /*0x58530a*/
    aP1 = v15; /*0x585312*/
    v16 = *(_DWORD *)v58->__pad_0 + 36 * v14; /*0x585318*/
    v17 = *(_DWORD *)(v16 + 8); /*0x58531b*/
    if ( *(_DWORD *)(v16 + 16) < v17 /*0x58534c*/
      || (*(_BYTE *)(v16 + 13) || !v17)
      && (v18 = *(_DWORD *)(v16 + 20), v18 > 0)
      && (v19 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 8))(v16, v17 + v18, 0), v15 = aP1, v19) )
    {
      v20 = *(_DWORD *)(v16 + 16); /*0x58534e*/
      *(_DWORD *)(v16 + 16) = v20 + 1; /*0x585354*/
      v21 = *(_DWORD *)(v16 + 4); /*0x585357*/
      v22 = v65; /*0x58535a*/
      *(_DWORD *)(v21 + 8 * v20) = v15; /*0x58535e*/
      *(_DWORD *)(v21 + 8 * v20 + 4) = v22; /*0x585361*/
    }
    v23 = *(_DWORD *)v58->__pad_0 + 36 * (_DWORD)v15; /*0x585372*/
    v24 = *(_DWORD *)(v23 + 8); /*0x585375*/
    if ( *(_DWORD *)(v23 + 16) < v24 /*0x585398*/
      || (*(_BYTE *)(v23 + 13) || !v24)
      && (v25 = *(_DWORD *)(v23 + 20), v25 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v23 + 8))(v23, v24 + v25, 0) )
    {
      v26 = *(_DWORD *)(v23 + 16); /*0x58539f*/
      v27 = *(_DWORD *)(v23 + 4); /*0x5853a2*/
      *(_DWORD *)(v23 + 16) = v26 + 1; /*0x5853a8*/
      v28 = v66; /*0x5853ab*/
      *(_DWORD *)(v27 + 8 * v26) = v14; /*0x5853af*/
      *(_DWORD *)(v27 + 8 * v26 + 4) = v28; /*0x5853b2*/
    }
    v29 = *(__int16 *)(this->referenceCount + 10 * CellToTileIndexMap(this, (IUnknown *)&v62) + v13); /*0x5853d2*/
    v30 = (IUnknown *)*(__int16 *)(this->referenceCount + 10 * CellToTileIndexMap(this, (IUnknown *)&v63) + v13); /*0x5853e7*/
    aP1 = v30; /*0x5853ef*/
    v31 = *(_DWORD *)v58->__pad_0 + 36 * v29; /*0x5853f5*/
    v32 = *(_DWORD *)(v31 + 8); /*0x5853f8*/
    if ( *(_DWORD *)(v31 + 16) < v32 /*0x585429*/
      || (*(_BYTE *)(v31 + 13) || !v32)
      && (v33 = *(_DWORD *)(v31 + 20), v33 > 0)
      && (v34 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v31 + 8))(v31, v32 + v33, 0), v30 = aP1, v34) )
    {
      v35 = *(_DWORD *)(v31 + 16); /*0x58542b*/
      *(_DWORD *)(v31 + 16) = v35 + 1; /*0x585431*/
      v36 = *(_DWORD *)(v31 + 4); /*0x585434*/
      v37 = v67; /*0x585437*/
      *(_DWORD *)(v36 + 8 * v35) = v30; /*0x58543b*/
      *(_DWORD *)(v36 + 8 * v35 + 4) = v37; /*0x58543e*/
    }
    v38 = *(_DWORD *)v58->__pad_0 + 36 * (_DWORD)v30; /*0x58544f*/
    v39 = *(_DWORD *)(v38 + 8); /*0x585452*/
    if ( *(_DWORD *)(v38 + 16) < v39 /*0x585475*/
      || (*(_BYTE *)(v38 + 13) || !v39)
      && (v40 = *(_DWORD *)(v38 + 20), v40 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v38 + 8))(v38, v39 + v40, 0) )
    {
      v41 = *(_DWORD *)(v38 + 16); /*0x58547c*/
      v42 = *(_DWORD *)(v38 + 4); /*0x58547f*/
      *(_DWORD *)(v38 + 16) = v41 + 1; /*0x585485*/
      v43 = v68; /*0x585488*/
      *(_DWORD *)(v42 + 8 * v41) = v29; /*0x58548c*/
      *(_DWORD *)(v42 + 8 * v41 + 4) = v43; /*0x58548f*/
    }
    v44 = *(__int16 *)(this->referenceCount + 10 * CellToTileIndexMap(this, (IUnknown *)&v64) + v13); /*0x5854af*/
    v45 = (IUnknown *)*(__int16 *)(this->referenceCount + 10 * CellToTileIndexMap(this, (IUnknown *)&v61) + v13); /*0x5854c4*/
    aP1 = v45; /*0x5854cc*/
    v46 = *(_DWORD *)v58->__pad_0 + 36 * v44; /*0x5854d2*/
    v47 = *(_DWORD *)(v46 + 8); /*0x5854d5*/
    if ( *(_DWORD *)(v46 + 16) < v47 /*0x585506*/
      || (*(_BYTE *)(v46 + 13) || !v47)
      && (v48 = *(_DWORD *)(v46 + 20), v48 > 0)
      && (v49 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v46 + 8))(v46, v47 + v48, 0), v45 = aP1, v49) )
    {
      v50 = *(_DWORD *)(v46 + 16); /*0x585508*/
      *(_DWORD *)(v46 + 16) = v50 + 1; /*0x58550e*/
      v51 = *(_DWORD *)(v46 + 4); /*0x585511*/
      v52 = v69; /*0x585514*/
      *(_DWORD *)(v51 + 8 * v50) = v45; /*0x585518*/
      *(_DWORD *)(v51 + 8 * v50 + 4) = v52; /*0x58551b*/
    }
    v53 = *(_DWORD *)v58->__pad_0 + 36 * (_DWORD)v45; /*0x58552c*/
    result = *(_DWORD *)(v53 + 8); /*0x58552f*/
    if ( *(_DWORD *)(v53 + 16) < result /*0x585557*/
      || (*(_BYTE *)(v53 + 13) || !result)
      && (v55 = *(_DWORD *)(v53 + 20), v55 > 0)
      && (result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v53 + 8))(v53, result + v55, 0), (_BYTE)result) )
    {
      result = *(_DWORD *)(v53 + 16); /*0x585559*/
      v56 = *(_DWORD *)(v53 + 4); /*0x58555c*/
      *(_DWORD *)(v53 + 16) = result + 1; /*0x585562*/
      v57 = v70; /*0x585565*/
      *(_DWORD *)(v56 + 8 * result) = v44; /*0x585569*/
      *(_DWORD *)(v56 + 8 * result + 4) = v57; /*0x58556c*/
    }
    v13 += 2; /*0x585574*/
    v58 = (ObjectClass *)((char *)v58 + 24); /*0x58557d*/
  }
  while ( v13 < 6 ); /*0x585581*/
  return result; /*0x585587*/
}


// ==== 0x005855A0  LayerClass::AssignCellOwnership  this=LayerClass  sig=csp ====
int __thiscall sub_5855A0(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax
  int result; // eax
  int i; // ebp
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // [esp+8h] [ebp-8h]

  v1 = this; /*0x5855a5*/
  v2 = this->q0F4; /*0x5855ab*/
  this->q10C = 1; /*0x5855b1*/
  this->q110 = v2; /*0x5855bb*/
  this->q114 = v2 - 1; /*0x5855c4*/
  this->q118 = (v2 << 11) + this->q13C + 4; /*0x5855d9*/
  result = LayerClass::CellIteratorNext(this); /*0x5855df*/
  for ( i = result; result; i = result ) /*0x5855e8*/
  {
    v5 = *(_DWORD *)(i + 68); /*0x5855f0*/
    if ( v5 != -1 ) /*0x5855f6*/
    {
      if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v5] + 680) ) /*0x585605*/
      {
        v6 = -1; /*0x585618*/
        v7 = 0; /*0x58561b*/
        v10 = 0x7FFFFFFF; /*0x58561d*/
        if ( MEMORY[0xA8EB50] > 0 ) /*0x585627*/
        {
          do /*0x585676*/
          {
            v8 = *((_DWORD *)MEMORY[0xA8EB44] + v7); /*0x58562f*/
            v9 = ObjectClass::DistanceTo((void *)v8, i); /*0x585634*/
            if ( *(_BYTE *)(v8 + 144) /*0x585666*/
              && *(_BYTE *)(v8 + 116)
              && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v8 + 540) + 52) + 423)
              && (v6 == -1 || v9 < v10) )
            {
              v10 = v9; /*0x585668*/
              v6 = v7; /*0x58566c*/
            }
            ++v7; /*0x585673*/
          }
          while ( v7 < MEMORY[0xA8EB50] ); /*0x585676*/
          if ( v6 != -1 ) /*0x58567b*/
            *(_DWORD *)(i + 80) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)MEMORY[0xA8EB44] + v6) + 540) + 48); /*0x58568e*/
          v1 = this; /*0x585691*/
        }
      }
    }
    result = LayerClass::CellIteratorNext(v1); /*0x585697*/
  }
  return result; /*0x5856a8*/
}


// ==== 0x005856B0  MapClass::InitializeTileData  this=MapClass  sig=csp ====
char __thiscall MapClass::InitializeTileData(MapClass *this, MapClass *aP1)
{
  int v3; // esi
  AbstractClass *v4; // ebp
  AbstractClass *v5; // ebx
  int v6; // esi
  int v7; // ebp
  char *TileDataEntry; // eax
  IUnknown *v9; // eax
  IUnknown *v10; // edx
  char j; // bl
  MapClass *k; // eax
  IUnknown *m; // eax
  int v14; // edx
  IUnknown *n; // eax
  int v16; // edx
  int ii; // esi
  char *v18; // eax
  char v20; // [esp+13h] [ebp-5h]
  int i; // [esp+14h] [ebp-4h]

  Mouse::SetBounds((int)&stru_87C374.__pad_14B0[8132], 0); /*0x5856c0*/
  v20 = 0; /*0x5856ca*/
  if ( !g_MapTileArray ) /*0x5856d1*/
  {
    v3 = unk_89C2DC * unk_89C2DC; /*0x5856d9*/
    v4 = (AbstractClass *)__2_YAPAXI_Z(80 * unk_89C2DC * unk_89C2DC); /*0x5856e8*/
    if ( v4 ) /*0x5856ef*/
    {
      v5 = v4; /*0x5856f4*/
      if ( v3 - 1 >= 0 ) /*0x5856f8*/
      {
        do /*0x585708*/
        {
          TileData::Constructor(v5); /*0x5856ff*/
          v5 = (AbstractClass *)((char *)v5 + 80); /*0x585704*/
          --v3; /*0x585707*/
        }
        while ( v3 ); /*0x585708*/
      }
      g_MapTileArray = v4; /*0x58570a*/
    }
    else
    {
      g_MapTileArray = 0; /*0x585712*/
    }
    v20 = 1; /*0x58571c*/
  }
  v6 = 0; /*0x585726*/
  v7 = unk_89C2DC * unk_89C2DC; /*0x58572a*/
  for ( i = unk_89C2DC * unk_89C2DC; v6 < v7; *((_DWORD *)TileDataEntry + 16) = -1 ) /*0x585733*/
  {
    GetTileDataEntry(v6)[74] = 1; /*0x585741*/
    TileDataEntry = GetTileDataEntry(v6++); /*0x585745*/
  }
  *(_DWORD *)&stru_87C374.__pad_14B0[8404] = *(_DWORD *)&stru_87C374.__pad_14B0[8376]; /*0x58575d*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8400] = 1; /*0x58576a*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8408] = *(_DWORD *)&stru_87C374.__pad_14B0[8376] - 1; /*0x585773*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8412] = (*(_DWORD *)&stru_87C374.__pad_14B0[8376] << 11) /*0x585782*/
                                           + *(_DWORD *)&stru_87C374.__pad_14B0[8448]
                                           + 4;
  v9 = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]); /*0x585787*/
  for ( j = 1; v9; v9 = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]) ) /*0x585792*/
  {
    if ( !j ) /*0x585796*/
      break; /*0x585796*/
    j = RecursiveCellClassNeighbourUpdate(this, v10, v9, 0, 0); /*0x5857a7*/
  }
  *(_DWORD *)&stru_87C374.__pad_14B0[8404] = *(_DWORD *)&stru_87C374.__pad_14B0[8376]; /*0x5857bd*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8400] = 1; /*0x5857c2*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8408] = *(_DWORD *)&stru_87C374.__pad_14B0[8376] - 1; /*0x5857ce*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8412] = (*(_DWORD *)&stru_87C374.__pad_14B0[8376] << 11) /*0x5857dd*/
                                           + *(_DWORD *)&stru_87C374.__pad_14B0[8448]
                                           + 4;
  for ( k = (MapClass *)LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]); /*0x5857e9*/
        k;
        k = (MapClass *)LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]) )
  {
    if ( !j ) /*0x5857ed*/
      break; /*0x5857ed*/
    MapClass::BuildTileConnectivityGraph(this, k, 0, 0); /*0x5857f4*/
  }
  FloodFillConnectedCells(this, aP1, 1); /*0x58580f*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8404] = *(_DWORD *)&stru_87C374.__pad_14B0[8376]; /*0x58581f*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8400] = 1; /*0x585824*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8408] = *(_DWORD *)&stru_87C374.__pad_14B0[8376] - 1; /*0x585830*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8412] = (*(_DWORD *)&stru_87C374.__pad_14B0[8376] << 11) /*0x58583f*/
                                           + *(_DWORD *)&stru_87C374.__pad_14B0[8448]
                                           + 4;
  for ( m = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]); /*0x58584c*/
        m;
        m = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]) )
  {
    if ( !j ) /*0x585850*/
      break; /*0x585850*/
    j = GenerateMapClassCliffTransitions(this, v14, m, (IUnknown *)1, 0, 0); /*0x585862*/
  }
  *(_DWORD *)&stru_87C374.__pad_14B0[8404] = *(_DWORD *)&stru_87C374.__pad_14B0[8376]; /*0x585878*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8400] = 1; /*0x58587d*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8408] = *(_DWORD *)&stru_87C374.__pad_14B0[8376] - 1; /*0x585889*/
  *(_DWORD *)&stru_87C374.__pad_14B0[8412] = (*(_DWORD *)&stru_87C374.__pad_14B0[8376] << 11) /*0x585898*/
                                           + *(_DWORD *)&stru_87C374.__pad_14B0[8448]
                                           + 4;
  for ( n = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]); /*0x5858a4*/
        n;
        n = (IUnknown *)LayerClass::CellIteratorNext(&stru_87C374.__pad_14B0[8132]) )
  {
    if ( !j ) /*0x5858a8*/
      break; /*0x5858a8*/
    j = GenerateMapClassCliffTransitions(this, v16, n, (IUnknown *)2, 0, 0); /*0x5858bb*/
  }
  *(_DWORD *)&stru_87C374.__pad_14B0[12652] = 0; /*0x5858cc*/
  if ( *(_DWORD *)&stru_87C374.__pad_14B0[12648] ) /*0x5858d4*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87C374.__pad_14B0[12648] + 32))( /*0x5858d9*/
      *(_DWORD *)&stru_87C374.__pad_14B0[12648],
      1);
    *(_DWORD *)&stru_87C374.__pad_14B0[12648] = 0; /*0x5858dc*/
  }
  for ( ii = 0; ii < i; v18[74] = 1 ) /*0x5858ea*/
    v18 = GetTileDataEntry(ii++); /*0x5858ee*/
  if ( v20 ) /*0x585902*/
  {
    __3_YAXPAX_Z(g_MapTileArray); /*0x58590a*/
    g_MapTileArray = 0; /*0x585912*/
  }
  return j; /*0x585918*/
}


// ==== 0x00585930  ObjectClass::FloodFillConnectedCells  this=MapClass  sig=csp ====
void __thiscall FloodFillConnectedCells(_DWORD *this, MapClass *aP1, int a3)
{
  int v4; // eax
  int v5; // esi
  char *TileDataEntry; // eax
  MouseClass *v7; // esi
  MapClass *v8; // eax
  MapClass *v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  _DWORD *v14; // eax
  MapClass *v15; // edx
  MapClass *i; // eax
  int v17; // ecx
  int v18; // eax
  int j; // edi
  IUnknown *v20; // eax
  int v21; // ecx
  int v22; // esi
  char *CellData; // esi
  unsigned int v24; // eax
  ObjectClass *v25; // eax
  ObjectClass *v26; // ecx
  MapClass *v27; // eax
  int v28; // edx
  IUnknown *v29; // ecx
  int v30; // edi
  int v31; // ebx
  int v32; // ebp
  IUnknown *m; // esi
  int k; // [esp+18h] [ebp-44h] BYREF
  MouseClass *v35; // [esp+1Ch] [ebp-40h]
  IUnknown *v36; // [esp+20h] [ebp-3Ch]
  ObjectClass *v37; // [esp+24h] [ebp-38h]
  int v38; // [esp+28h] [ebp-34h] BYREF
  void **v39; // [esp+2Ch] [ebp-30h] BYREF
  int v40; // [esp+30h] [ebp-2Ch]
  MapClass *v41; // [esp+34h] [ebp-28h]
  char v42; // [esp+39h] [ebp-23h]
  ObjectClass *v43; // [esp+3Ch] [ebp-20h]
  int v44; // [esp+40h] [ebp-1Ch]
  void **v45; // [esp+44h] [ebp-18h] BYREF
  int v46; // [esp+48h] [ebp-14h]
  MapClass *v47; // [esp+4Ch] [ebp-10h]
  int v48; // [esp+50h] [ebp-Ch]
  MapClass *v49; // [esp+54h] [ebp-8h]
  MouseClass *v50; // [esp+58h] [ebp-4h]

  v37 = (ObjectClass *)this; /*0x585941*/
  VectorClass::CellConstructor(&v45, 0, 0); /*0x585945*/
  v45 = &vt_DynamicVectorClass_Cell; /*0x585958*/
  v50 = (MouseClass *)10; /*0x58595c*/
  v49 = 0; /*0x585960*/
  Buffer::Cleanup((int)&v45); /*0x585964*/
  v50 = (MouseClass *)100; /*0x58596f*/
  VectorClass::CellConstructor(&v39, 0, 0); /*0x585977*/
  v39 = &vt_DynamicVectorClass_Cell; /*0x585980*/
  v44 = 10; /*0x585984*/
  v43 = 0; /*0x585988*/
  Buffer::Cleanup((int)&v39); /*0x58598c*/
  v4 = 1000; /*0x585997*/
  v5 = unk_89C2DC * unk_89C2DC - 1; /*0x58599f*/
  v44 = 1000; /*0x5859a0*/
  if ( v5 >= 0 ) /*0x5859a4*/
  {
    do /*0x5859b4*/
    {
      TileDataEntry = GetTileDataEntry(v5--); /*0x5859a8*/
      TileDataEntry[73] = 0; /*0x5859ae*/
      TileDataEntry[74] = 0; /*0x5859b1*/
    }
    while ( v5 >= 0 ); /*0x5859b4*/
    v4 = v44; /*0x5859b6*/
  }
  v7 = (MouseClass *)aP1; /*0x5859c2*/
  if ( (int)v43 < (int)v41 /*0x5859e4*/
    || (v42 || !v41)
    && v4 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v39[2])(&v39, (char *)v41 + v4, 0) )
  {
    v8 = (MapClass *)v43; /*0x5859f3*/
    v43 = (ObjectClass *)((char *)v43 + 1); /*0x5859f6*/
    *(_DWORD *)(v40 + 4 * (_DWORD)v8) = v7->field_0; /*0x5859fc*/
  }
  if ( (int)v49 < (int)v47 /*0x585a29*/
    || (BYTE1(v48) || !v47)
    && (int)v50 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v45[2])(&v45, (char *)v47 + (_DWORD)v50, 0) )
  {
    v9 = v49; /*0x585a38*/
    v49 = (MapClass *)((char *)v49 + 1); /*0x585a3b*/
    *(_DWORD *)(v46 + 4 * (_DWORD)v9) = v7->field_0; /*0x585a41*/
  }
  v10 = SLOWORD(v7->field_0); /*0x585a44*/
  v11 = SHIWORD(v7->field_0); /*0x585a47*/
  v12 = this->MapClass_field_0xF4; /*0x585a4b*/
  if ( v10 + v11 > v12 && v10 - v11 < v12 && v11 - v10 < v12 && v10 + v11 <= v12 + 2 * this->q0F8 ) /*0x585a71*/
    Tactical::GetCellData((__int16 *)v7)[73] = 1; /*0x585a7a*/
  v13 = SLOWORD(v7->field_0) + (SHIWORD(v7->field_0) << 9); /*0x585a88*/
  if ( v13 >= 0x40000 || (v14 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v13)) == 0 ) /*0x585a9e*/
  {
    v14 = g_CellClassArray; /*0x585aa2*/
    g_Map_GlobalCellIndex = (IUnknown *)v7->field_0; /*0x585aa7*/
  }
  v15 = (MapClass *)v43; /*0x585ab4*/
  v36 = (IUnknown *)*((char *)v14 + 283); /*0x585ab8*/
  for ( i = (MapClass *)v43; v43; i = (MapClass *)v43 ) /*0x585ac0*/
  {
    v17 = v40; /*0x585ac6*/
    v18 = (int)&i[-1].field_16C0 + 3; /*0x585aca*/
    k = *(_DWORD *)(v40 + 4 * v18); /*0x585ad0*/
    if ( v18 < (int)v15 ) /*0x585ad4*/
    {
      v43 = (ObjectClass *)((char *)&v15[-1].field_16C0 + 3); /*0x585ad9*/
      if ( v18 < (int)&v15[-1].field_16C0 + 3 ) /*0x585add*/
      {
        while ( 1 ) /*0x585ae9*/
        {
          *(_DWORD *)(v17 + 4 * v18) = *(_DWORD *)(v17 + 4 * v18 + 4); /*0x585ae9*/
          if ( ++v18 >= (int)v43 ) /*0x585af3*/
            break; /*0x585af3*/
          v17 = v40; /*0x585ae1*/
        }
      }
    }
    for ( j = 0; j < 8; ++j ) /*0x585af5*/
    {
      v20 = CellStruct::Add(&k, (IUnknown *)&v38, (IUnknown *)(4 * (j & 7) + 9041544)); /*0x585b0d*/
      v21 = this->MapClass_field_0xF4; /*0x585b14*/
      v35 = (MouseClass *)v20->field_0; /*0x585b1a*/
      aP1 = (MapClass *)v35; /*0x585b1e*/
      v22 = SHIWORD(v35) + (__int16)v35; /*0x585b2a*/
      if ( v22 > v21 /*0x585b56*/
        && (__int16)v35 - SHIWORD(v35) < v21
        && SHIWORD(v35) - (__int16)v35 < v21
        && v22 <= v21 + 2 * this->q0F8 )
      {
        CellData = Tactical::GetCellData((__int16 *)&aP1); /*0x585b69*/
        v24 = (__int16)aP1 + (SHIWORD(aP1) << 9); /*0x585b76*/
        if ( v24 < 0x40000 && (v25 = *(ObjectClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v24)) != 0 ) /*0x585b8c*/
        {
          v26 = v25; /*0x585b8e*/
        }
        else
        {
          g_Map_GlobalCellIndex = (IUnknown *)aP1; /*0x585b92*/
          v26 = (ObjectClass *)g_CellClassArray; /*0x585b98*/
        }
        if ( !CellData[73] ) /*0x585b9d*/
        {
          if ( (_BYTE)a3 ) /*0x585bae*/
          {
            if ( !Cell::IsGroundTypeRange((int *)v26->__pad_0) ) /*0x585bb0*/
              continue; /*0x585bb7*/
          }
          else if ( (IUnknown *)SHIBYTE(v26[1].health) != v36 || !Cell::IsEmpty(v26) ) /*0x585bc8*/
          {
            continue; /*0x585bcf*/
          }
          if ( (int)v43 < (int)v41 /*0x585bfe*/
            || (v42 || !v41)
            && v44 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v39[2])(&v39, (char *)v41 + v44, 0) )
          {
            v27 = (MapClass *)v43; /*0x585c0d*/
            v43 = (ObjectClass *)((char *)v43 + 1); /*0x585c10*/
            *(_DWORD *)(v40 + 4 * (_DWORD)v27) = aP1; /*0x585c18*/
          }
          TileVector::PushBack(&v45, (MouseClass *)&aP1); /*0x585c24*/
          CellData[73] = 1; /*0x585c29*/
        }
      }
    }
    v15 = (MapClass *)v43; /*0x585c37*/
  }
  v28 = 0; /*0x585c45*/
  for ( k = 0; v28 < (int)v49; k = v28 ) /*0x585c51*/
  {
    v29 = *(IUnknown **)(v46 + 4 * v28); /*0x585c57*/
    v36 = v29; /*0x585c5a*/
    v30 = SHIWORD(v29) - 1; /*0x585c63*/
    v31 = SHIWORD(v29) + 2; /*0x585c66*/
    if ( v30 < v31 ) /*0x585c6b*/
    {
      v32 = (__int16)v29 + 2; /*0x585c73*/
      v36 = (IUnknown *)((__int16)v29 - 1); /*0x585c76*/
      do /*0x585cbd*/
      {
        for ( m = v36; (int)m < v32; m = (IUnknown *)((char *)m + 1) ) /*0x585c80*/
        {
          LOWORD(a3) = (_WORD)m; /*0x585c8b*/
          HIWORD(a3) = v30; /*0x585c90*/
          if ( LayerClass::CoordinatesLegal(v37, (IUnknown *)&a3) ) /*0x585c95*/
          {
            LOWORD(aP1) = (_WORD)m; /*0x585ca2*/
            HIWORD(aP1) = v30; /*0x585ca7*/
            Tactical::GetCellData((__int16 *)&aP1)[74] = 1; /*0x585cb1*/
          }
        }
        ++v30; /*0x585cba*/
      }
      while ( v30 < v31 ); /*0x585cbd*/
      v28 = k; /*0x585cbf*/
    }
    ++v28; /*0x585cc7*/
  }
  v39 = &vt_VectorClass_Cell; /*0x585cd9*/
  Buffer::Cleanup((int)&v39); /*0x585cdd*/
  v45 = &vt_VectorClass_Cell; /*0x585ce6*/
  Buffer::Cleanup((int)&v45); /*0x585cea*/
}


// ==== 0x00585D00  MapClass::LoadTerrainData  this=MapClass  sig=csp ====
char __thiscall MapClass::LoadTerrainData(_DWORD *this, MapClass *aP1)
{
  int v2; // esi
  _DWORD *v3; // ebp
  int v4; // edi
  AbstractClass *v5; // ebx
  AbstractClass *v6; // esi
  int v7; // ebp
  char *TileDataEntry; // eax
  int i; // eax
  Random *j; // esi
  int k; // esi
  char *v12; // eax
  char v14; // [esp+12h] [ebp-6h]
  char v15; // [esp+13h] [ebp-5h]

  v2 = 0; /*0x585d12*/
  v3 = this; /*0x585d14*/
  v4 = unk_89C2DC * unk_89C2DC; /*0x585d16*/
  v14 = 1; /*0x585d1f*/
  v15 = 0; /*0x585d24*/
  if ( g_MapTileArray ) /*0x585d29*/
  {
    if ( v4 > 0 ) /*0x585d79*/
    {
      do /*0x585d89*/
      {
        TileDataEntry = GetTileDataEntry(v2++); /*0x585d7d*/
        TileDataEntry[74] = 1; /*0x585d83*/
      }
      while ( v2 < v4 ); /*0x585d89*/
    }
  }
  else
  {
    v5 = (AbstractClass *)__2_YAPAXI_Z(80 * v4); /*0x585d37*/
    if ( v5 ) /*0x585d3e*/
    {
      v6 = v5; /*0x585d43*/
      if ( v4 - 1 >= 0 ) /*0x585d47*/
      {
        v7 = v4; /*0x585d49*/
        do /*0x585d57*/
        {
          TileData::Constructor(v6); /*0x585d4e*/
          v6 = (AbstractClass *)((char *)v6 + 80); /*0x585d53*/
          --v7; /*0x585d56*/
        }
        while ( v7 ); /*0x585d57*/
        v3 = this; /*0x585d59*/
      }
      g_MapTileArray = v5; /*0x585d5d*/
      v15 = 1; /*0x585d63*/
    }
    else
    {
      g_MapTileArray = 0; /*0x585d6a*/
      v15 = 1; /*0x585d70*/
    }
  }
  Mouse::SetBounds((int)&MEMORY[0x87F7E8], 0); /*0x585d92*/
  MEMORY[0x87F8E4].field_14 = MEMORY[0x87F8DC]; /*0x585da2*/
  MEMORY[0x87F8E4].field_10 = (void *)1; /*0x585daf*/
  *(_DWORD *)MEMORY[0x87F8E4].__pad_18 = MEMORY[0x87F8DC] - 1; /*0x585db8*/
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_18[4] = (MEMORY[0x87F8DC] << 11) + *(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4; /*0x585dc7*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x585dd3*/
  {
    if ( !v14 ) /*0x585ddb*/
      break; /*0x585ddb*/
    v14 = Cliff::ProcessTransitions(i, 0); /*0x585dec*/
  }
  FloodFillConnectedCells(v3, aP1, 0); /*0x585e02*/
  MEMORY[0x87F8E4].field_14 = MEMORY[0x87F8DC]; /*0x585e12*/
  MEMORY[0x87F8E4].field_10 = (void *)1; /*0x585e17*/
  *(_DWORD *)MEMORY[0x87F8E4].__pad_18 = MEMORY[0x87F8DC] - 1; /*0x585e23*/
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_18[4] = (MEMORY[0x87F8DC] << 11) + *(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4; /*0x585e32*/
  for ( j = (Random *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x585e43*/
        j;
        j = (Random *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    if ( !v14 ) /*0x585e4b*/
      break; /*0x585e4b*/
    if ( !LOBYTE(j[17].Random_field_0x0C) && Cell::IsEmpty(j) ) /*0x585e59*/
      v14 = Terrain::SelectTileType((int)j, 0); /*0x585e6b*/
  }
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = 0; /*0x585e85*/
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796] ) /*0x585e8d*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_1D4[3796] + 32))( /*0x585e93*/
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796],
      1);
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3796] = 0; /*0x585e96*/
  }
  for ( k = 0; k < v4; v12[74] = 1 ) /*0x585ea0*/
    v12 = GetTileDataEntry(k++); /*0x585ea4*/
  if ( v15 ) /*0x585eb8*/
  {
    __3_YAXPAX_Z(g_MapTileArray); /*0x585ec1*/
    g_MapTileArray = 0; /*0x585ec9*/
  }
  return v14; /*0x585ed3*/
}


// ==== 0x00585EE0  sub_585EE0  this=-  sig=ida-proto ====
int sub_585EE0()
{
  dword_ABD460[0] = 0; /*0x585ef6*/
  dword_ABD464 = 4; /*0x585f17*/
  dword_ABD468 = 0x40000; /*0x585f2b*/
  dword_ABD46C = 262148; /*0x585f31*/
  return 4; /*0x585f38*/
}


// ==== 0x00585F40  InterpolateTerrainLighting  this=-  sig=csp ====
int __stdcall InterpolateTerrainLighting(int a1, MouseClass *aP1, int a3, int a4)
{
  int v4; // ecx
  int v5; // edx
  int v6; // ebp
  unsigned int v7; // edx
  __int16 v8; // si
  __int16 v9; // di
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  unsigned int v13; // edx
  __int16 v14; // cx
  __int16 v15; // bx
  bool v16; // cc
  int v18; // eax
  int v19; // eax
  __int16 v20; // bp
  int v22; // eax
  int v23; // esi
  int v24; // edi
  int v25; // [esp+14h] [ebp+4h]
  __int16 aP1a; // [esp+18h] [ebp+8h]
  MouseClass *aP1b; // [esp+18h] [ebp+8h]
  int v28; // [esp+1Ch] [ebp+Ch]
  int v29; // [esp+20h] [ebp+10h]
  int v30; // [esp+20h] [ebp+10h]

  if ( !aP1 ) /*0x585f4b*/
    return 0; /*0x585f4b*/
  if ( aP1 == (MouseClass *)1 ) /*0x585f52*/
    return *(_DWORD *)(a1 + 4 * *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[8300] + 36 * a4 + 32) + 22500); /*0x5862a9*/
  if ( aP1 != (MouseClass *)2 ) /*0x585f59*/
    return 0; /*0x5862af*/
  v4 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[8324] + 36 * a3 + 32); /*0x585f71*/
  v5 = (v4 - 1) % 130; /*0x585f79*/
  v6 = 4 * v5; /*0x585f82*/
  v7 = (int)((unsigned __int64)(2114445439LL * (v4 - v5)) >> 32) >> 6; /*0x585f8b*/
  v28 = 4 * ((v7 >> 31) + v7) - 4; /*0x585fa2*/
  v8 = v6 - (v6 / 4 % 2 != 0); /*0x585fbf*/
  v9 = 4 * ((v7 >> 31) + v7) - 4 - (v28 / 4 % 2 != 0); /*0x585fde*/
  v10 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[8324] + 36 * a4 + 32); /*0x585fe7*/
  v11 = (v10 - 1) % 130; /*0x585ff4*/
  v12 = 4 * v11; /*0x585ffd*/
  v13 = (int)((unsigned __int64)(2114445439LL * (v10 - v11)) >> 32) >> 6; /*0x586006*/
  aP1a = v12; /*0x58600b*/
  v29 = 4 * ((v13 >> 31) + v13) - 4; /*0x586021*/
  v14 = v12 - (v12 / 4 % 2 != 0); /*0x586042*/
  v15 = v29 - (v29 / 4 % 2 != 0); /*0x586061*/
  v16 = v14 <= v8; /*0x586063*/
  if ( v14 == v8 ) /*0x586066*/
  {
    if ( v9 == v15 ) /*0x58606b*/
      return (*(_DWORD *)(a1 + 4 * ((__int16)v6 / 4 + 130 * ((__int16)v28 / 4)) + 23024) /*0x5860d1*/
            + *(_DWORD *)(a1 + 4 * (aP1a / 4 + 130 * ((__int16)v29 / 4)) + 23024)) >> 1;
    v16 = v14 <= v8; /*0x5860d4*/
  }
  if ( v16 ) /*0x5860d7*/
  {
    if ( v15 <= v9 ) /*0x5860f5*/
      v18 = (v15 < v9) + 6; /*0x586106*/
    else
      v18 = 5; /*0x5860f7*/
  }
  else if ( v15 <= v9 ) /*0x5860dc*/
  {
    v18 = (v15 >= v9) + 1; /*0x5860ed*/
  }
  else
  {
    v18 = 3; /*0x5860de*/
  }
  v30 = v18; /*0x586117*/
  aP1b = *(MouseClass **)(a1 /*0x586174*/
                        + 4
                        * ((__int16)(LOWORD(dword_ABD460[dword_82A984[2 * v18]]) + v8) / 4
                         + 130 * ((__int16)(v9 + HIWORD(dword_ABD460[dword_82A984[2 * v18]])) / 4))
                        + 23024);
  v19 = dword_82A988[2 * v18]; /*0x586178*/
  v20 = v8 + LOWORD(dword_ABD460[v19]); /*0x58618e*/
  LOWORD(v19) = v9 + HIWORD(dword_ABD460[v19]); /*0x586195*/
  v22 = *(_DWORD *)(a1 + 4 * (v20 / 4 + 130 * ((__int16)v19 / 4)) + 23024); /*0x5861be*/
  v25 = (int)aP1b; /*0x5861cb*/
  if ( (int)aP1b >= v22 ) /*0x5861cf*/
    v25 = v22; /*0x5861d1*/
  v23 = *(_DWORD *)(a1 /*0x58622a*/
                  + 4
                  * ((__int16)(v14 + LOWORD(dword_ABD460[dword_82A9C4[2 * v30]])) / 4
                   + 130 * ((__int16)(v15 + HIWORD(dword_ABD460[dword_82A9C4[2 * v30]])) / 4))
                  + 23024);
  v24 = *(_DWORD *)(a1 /*0x58626d*/
                  + 4
                  * ((__int16)(LOWORD(dword_ABD460[dword_82A9C8[2 * v30]]) + v14) / 4
                   + 130 * ((__int16)(v15 + HIWORD(dword_ABD460[dword_82A9C8[2 * v30]])) / 4))
                  + 23024);
  if ( v23 >= v24 ) /*0x586276*/
    v23 = v24; /*0x586278*/
  return (v23 + v25) >> 1; /*0x586076*/
}


// ==== 0x005862C0  VeinholeMonsterClass_Update  this=-  sig=csp ====
char __stdcall VeinholeMonsterClass_Update(MouseClass *aP0, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  _DWORD *v10; // eax
  ObjectClass *aP0a; // [esp+14h] [ebp+4h]

  v3 = SHIWORD(aP0->field_0); /*0x5862d0*/
  v4 = a2 + v3; /*0x5862d2*/
  v5 = v3 - a2; /*0x5862d4*/
  if ( v5 > v4 ) /*0x5862d8*/
    return 0; /*0x58633f*/
  while ( 1 ) /*0x5862e3*/
  {
    v6 = SLOWORD(aP0->field_0); /*0x5862e3*/
    v7 = a2 + v6; /*0x5862e5*/
    v8 = v6 - a2; /*0x5862e7*/
    if ( v8 <= v7 ) /*0x5862eb*/
      break; /*0x5862eb*/
LABEL_9:
    if ( ++v5 > a2 + SHIWORD(aP0->field_0) ) /*0x58633d*/
      return 0; /*0x58633d*/
  }
  HIWORD(aP0a) = v5; /*0x5862f0*/
  while ( 1 ) /*0x5862fb*/
  {
    v9 = ((__int16)v5 << 9) + (__int16)v8; /*0x5862fb*/
    LOWORD(aP0a) = v8; /*0x5862fd*/
    if ( v9 >= 0x40000 || (v10 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v9)) == 0 ) /*0x586311*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP0a; /*0x586317*/
      v10 = g_CellClassArray; /*0x58631c*/
    }
    if ( v10[57] ) /*0x586321*/
      return 1; /*0x58633f*/
    if ( ++v8 > a2 + SLOWORD(aP0->field_0) ) /*0x586332*/
      goto LABEL_9; /*0x586332*/
  }
}


// ==== 0x00586360  Cell::IsPassable  this=IUnknown  sig=csp ====
bool __stdcall Cell::IsPassable(IUnknown *aP0)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  _DWORD *NeighbourContent; // eax
  unsigned int v7; // eax
  __int16 v9; // [esp+4h] [ebp-8h]
  __int16 v10; // [esp+4h] [ebp-8h]
  IUnknown *aP0a; // [esp+10h] [ebp+4h]
  IUnknown *aP0b; // [esp+10h] [ebp+4h]

  v1 = aP0->field_8 / g_MapRenderState; /*0x58636c*/
  if ( (v1 & 1) != 0 ) /*0x586375*/
  {
    v9 = aP0->field_0 / 256; /*0x58638d*/
    v2 = v1 / 2 + 1; /*0x5863b0*/
    HIWORD(aP0a) = aP0->field_4 / 256 - v2; /*0x5863b5*/
    LOWORD(aP0a) = v9 - v2; /*0x5863ba*/
    v3 = (__int16)(v9 - v2) + (SHIWORD(aP0a) << 9); /*0x5863c8*/
    if ( v3 < 0x40000 && (v4 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v3)) != 0 ) /*0x5863de*/
    {
      v5 = v4; /*0x5863e0*/
    }
    else
    {
      v5 = g_CellClassArray; /*0x5863e8*/
      g_Map_GlobalCellIndex = aP0a; /*0x5863ed*/
    }
    if ( (v5[75] & 8) != 0 ) /*0x5863f9*/
      return 0; /*0x5863f9*/
    NeighbourContent = Cell::GetNeighbourContent(v5, 3u); /*0x586401*/
  }
  else
  {
    v10 = aP0->field_0 / 256; /*0x58641a*/
    HIWORD(aP0b) = aP0->field_4 / 256 - v1 / 2; /*0x586441*/
    LOWORD(aP0b) = v10 - v1 / 2; /*0x586446*/
    v7 = (__int16)aP0b + (SHIWORD(aP0b) << 9); /*0x586454*/
    if ( v7 >= 0x40000 || (NeighbourContent = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v7)) == 0 ) /*0x58646a*/
    {
      g_Map_GlobalCellIndex = aP0b; /*0x586470*/
      NeighbourContent = g_CellClassArray; /*0x586475*/
    }
  }
  return (NeighbourContent[75] & 8) == 0; /*0x586485*/
}


// ==== 0x005864A0  FogOfWar_Get  this=-  sig=csp ====
bool __stdcall FogOfWar_Get(IUnknown *aP0)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // eax
  _DWORD *NeighbourContent; // eax
  unsigned int v6; // eax
  __int16 v8; // [esp+4h] [ebp-8h]
  __int16 v9; // [esp+4h] [ebp-8h]
  IUnknown *aP0a; // [esp+10h] [ebp+4h]

  v1 = aP0->field_8 / g_MapRenderState; /*0x5864ac*/
  if ( (v1 & 1) != 0 ) /*0x5864b5*/
  {
    v8 = aP0->field_0 / 256; /*0x5864cd*/
    v2 = v1 / 2 + 1; /*0x5864f0*/
    HIWORD(aP0) = aP0->field_4 / 256 - v2; /*0x5864f5*/
    v3 = (__int16)(v8 - v2) + (SHIWORD(aP0) << 9); /*0x586508*/
    if ( v3 >= 0x40000 || (v4 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v3)) == 0 ) /*0x58651e*/
    {
      LOWORD(aP0) = v8 - v2; /*0x5864fa*/
      g_Map_GlobalCellIndex = aP0; /*0x586524*/
      v4 = g_CellClassArray; /*0x586529*/
    }
    if ( (int)v4[79] <= 0 ) /*0x586536*/
      return 0; /*0x586536*/
    NeighbourContent = Cell::GetNeighbourContent(v4, 3u); /*0x586540*/
  }
  else
  {
    v9 = aP0->field_0 / 256; /*0x586559*/
    HIWORD(aP0a) = aP0->field_4 / 256 - v1 / 2; /*0x586580*/
    LOWORD(aP0a) = v9 - v1 / 2; /*0x586585*/
    v6 = (__int16)aP0a + (SHIWORD(aP0a) << 9); /*0x586593*/
    if ( v6 >= 0x40000 || (NeighbourContent = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v6)) == 0 ) /*0x5865a9*/
    {
      g_Map_GlobalCellIndex = aP0a; /*0x5865af*/
      NeighbourContent = g_CellClassArray; /*0x5865b4*/
    }
  }
  return (int)NeighbourContent[79] > 0; /*0x5865c5*/
}


// ==== 0x005865E0  Game::Stub3  this=Game  sig=csp ====
char __stdcall Game::Stub3(IUnknown *aP0)
{
  return 0; /*0x5865e2*/
}


// ==== 0x005865F0  CellClass::SpiralFindClosest  this=CellClass  sig=csp ====
int __stdcall CellClass::SpiralFindClosest(IUnknown *aP0, MouseClass *aP1, IUnknown *aP2)
{
  __int16 v3; // bx
  int v4; // edi
  __int16 v5; // bp
  unsigned int v6; // eax
  __int16 *v7; // eax
  __int16 *v8; // esi
  int result; // eax
  _DWORD v10[2]; // [esp+10h] [ebp-8h] BYREF
  IUnknown *aP0a; // [esp+1Ch] [ebp+4h]

  aP0a = (IUnknown *)aP0->field_24; /*0x5865fe*/
  v3 = HIWORD(aP0a); /*0x586602*/
  v4 = 1; /*0x586607*/
  v5 = (__int16)aP0a; /*0x58660c*/
  do /*0x5866aa*/
  {
    v6 = v5 + (v3 << 9); /*0x586618*/
    if ( v6 < 0x40000 && (v7 = *(__int16 **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v6)) != 0 ) /*0x58662e*/
    {
      v8 = v7; /*0x586630*/
    }
    else
    {
      v8 = (__int16 *)g_CellClassArray; /*0x586638*/
      g_Map_GlobalCellIndex = aP0a; /*0x58663d*/
    }
    result = *((char *)v8 + 283); /*0x586643*/
    if ( result >= v4 - 2 && result <= v4 ) /*0x586653*/
    {
      if ( (_BYTE)aP2 ) /*0x58665b*/
        CellClass::RevealFogRect((int)&stru_87C374.__pad_14B0[8132], v8 + 18); /*0x586666*/
      v10[0] = 0; /*0x586670*/
      v10[1] = 0; /*0x586674*/
      result = Object::FindClosestObjectCell(v8, (IUnknown *)v10, 0, 0); /*0x58667e*/
      if ( result ) /*0x586685*/
        result = (*(int (__thiscall **)(int, MouseClass *))(*(_DWORD *)result + 408))(result, aP1); /*0x586690*/
    }
    ++v5; /*0x586696*/
    v4 += 2; /*0x586698*/
    ++v3; /*0x58669b*/
    LOWORD(aP0a) = v5; /*0x5866a0*/
    HIWORD(aP0a) = v3; /*0x5866a5*/
  }
  while ( v4 < 15 ); /*0x5866aa*/
  return result; /*0x5866b0*/
}


// ==== 0x005866C0  ObjectClass::SmallFunc_5866C0  this=LayerClass  sig=csp ====
int __thiscall sub_5866C0(_DWORD *this)
{
  int v2; // eax
  int result; // eax

  v2 = this->q0F4; /*0x5866c3*/
  this->q10C = 1; /*0x5866c9*/
  this->q110 = v2; /*0x5866d3*/
  this->q114 = v2 - 1; /*0x5866dc*/
  this->q118 = (v2 << 11) + this->q13C + 4; /*0x5866f1*/
  for ( result = LayerClass::CellIteratorNext(this); result; result = LayerClass::CellIteratorNext(this) ) /*0x5866fe*/
  {
    if ( (*(_BYTE *)(result + 320) & 2) == 0 ) /*0x586707*/
      CellClass::CreateFoggedObjects((_DWORD *)result); /*0x58670b*/
  }
  return result; /*0x58671b*/
}


// ==== 0x00586780  MapClass::IsAreaFree  this=ObjectClass  sig=csp ====
bool __thiscall MapClass::IsAreaFree(_DWORD *this, int *a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // eax
  bool v9; // sf
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  int v14; // [esp+0h] [ebp-8h]
  int v16; // [esp+Ch] [ebp+4h]
  int v17; // [esp+10h] [ebp+8h]

  if ( a3 == -1 ) /*0x58678e*/
    v14 = 0; /*0x58679d*/
  else
    v14 = 1 << a3; /*0x586797*/
  v4 = *a2; /*0x5867ac*/
  v5 = a2[2] + *a2; /*0x5867b4*/
  v16 = v4; /*0x5867b6*/
  if ( v4 >= v5 ) /*0x5867bc*/
    return MapClass::IsRectInBounds(this, a2, 1); /*0x586874*/
  while ( 1 ) /*0x5867c2*/
  {
    v6 = a2[1]; /*0x5867c2*/
    if ( v6 < a2[3] + v6 ) /*0x5867ce*/
      break; /*0x5867ce*/
LABEL_20:
    v16 = ++v4; /*0x58686a*/
    if ( v4 >= a2[2] + *a2 ) /*0x58686e*/
      return MapClass::IsRectInBounds(this, a2, 1); /*0x58686e*/
  }
  LOWORD(v17) = v4; /*0x5867d4*/
  v7 = (__int16)v4; /*0x5867d9*/
  while ( 1 ) /*0x5867df*/
  {
    v8 = (__int16)v6 << 9; /*0x5867df*/
    v9 = v7 + v8 < 0; /*0x5867e2*/
    v10 = v7 + v8; /*0x5867e2*/
    HIWORD(v17) = v6; /*0x5867e4*/
    if ( v9 || v10 >= 0x40000 || (v11 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v10)) == 0 ) /*0x5867fd*/
    {
      v12 = g_CellClassArray; /*0x586807*/
      g_Map_GlobalCellIndex = v17; /*0x58680c*/
    }
    else
    {
      v12 = v11; /*0x5867ff*/
    }
    if ( CellClass::FindInfantry(v12, 0) /*0x586846*/
      || (v12[55] & v14) != 0
      || v12[17] != -1
      || v12[19]
      || *((_BYTE *)v12 + 284)
      || Cell::IsBridge(v12) )
    {
      return 0; /*0x586884*/
    }
    if ( ++v6 >= a2[3] + a2[1] ) /*0x58685a*/
    {
      v4 = v16; /*0x58685c*/
      goto LABEL_20; /*0x58685c*/
    }
  }
}


// ==== 0x005868A0  ObjectClass::UpdateAreaConnectivityMap  this=AbstractClass  sig=csp ====
void __thiscall UpdateAreaConnectivityMap(int *this, IUnknown *aP1)
{
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  bool v7; // cc
  int v8; // edi
  int v9; // eax
  void **v10; // [esp+Ch] [ebp-18h] BYREF
  void *Block; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]
  IUnknown *aP1a; // [esp+28h] [ebp+4h]

  v4 = 0; /*0x5868ac*/
  v5 = aP1->field_0; /*0x5868ae*/
  v6 = 10; /*0x5868b5*/
  v7 = aP1->field_0 < aP1->field_0 + aP1->field_8; /*0x5868ba*/
  Block = 0; /*0x5868bc*/
  v12 = 0; /*0x5868c0*/
  LOWORD(v13) = 1; /*0x5868c4*/
  v10 = &vt_DynamicVectorClass_Cell; /*0x5868cd*/
  v15 = 10; /*0x5868d5*/
  v14 = 0; /*0x5868d9*/
  if ( v7 ) /*0x5868dd*/
  {
    while ( 1 ) /*0x5868e0*/
    {
      v8 = aP1->field_4; /*0x5868e0*/
      if ( v8 < v8 + aP1->field_C ) /*0x5868ea*/
        break; /*0x5868ea*/
LABEL_12:
      if ( ++v5 >= aP1->field_0 + aP1->field_8 ) /*0x586957*/
        goto LABEL_13; /*0x586957*/
    }
    LOWORD(aP1a) = v5; /*0x5868ec*/
    while ( 1 ) /*0x5868f5*/
    {
      HIWORD(aP1a) = v8; /*0x5868f5*/
      if ( v14 < v4 ) /*0x5868fc*/
        goto LABEL_9; /*0x5868fc*/
      if ( !BYTE1(v13) && v4 || v6 <= 0 ) /*0x58690c*/
        goto LABEL_11; /*0x58690c*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v10[2])(&v10, v6 + v4, 0) ) /*0x58691b*/
      {
LABEL_9:
        v9 = v14++; /*0x58692a*/
        *((_DWORD *)Block + v9) = aP1a; /*0x586935*/
      }
      v4 = v12; /*0x586938*/
LABEL_11:
      ++v8; /*0x58693c*/
      v6 = v15; /*0x586947*/
      if ( v8 >= aP1->field_4 + aP1->field_C ) /*0x58694b*/
        goto LABEL_12; /*0x58694b*/
    }
  }
LABEL_13:
  LayerClass::Update_Pathfinding_2(this, (IUnknown *)&v10); /*0x58695a*/
  v10 = &vt_VectorClass_Cell; /*0x58696c*/
  if ( Block ) /*0x586977*/
  {
    if ( BYTE1(v13) ) /*0x58697f*/
      __3_YAXPAX_Z(Block); /*0x586982*/
  }
}


// ==== 0x00586990  LayerClass::Update_Pathfinding_2  this=AbstractClass  sig=csp ====
void __thiscall LayerClass::Update_Pathfinding_2(int *this, IUnknown *aP1)
{
  IUnknown *v2; // ebx
  int i; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  __int16 *v8; // eax
  unsigned int v9; // ecx
  _DWORD *v10; // ecx
  int j; // edi
  int v12; // eax
  int v13; // ecx

  v2 = aP1; /*0x586991*/
  for ( i = *(_DWORD *)aP1->__pad_10 - 1; i >= 0; --i ) /*0x58699e*/
  {
    v5 = 4 * i; /*0x5869a7*/
    if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)(4 * i + v2->field_4), (TechnoClass *)1) ) /*0x5869b5*/
    {
      v6 = *(__int16 *)(v5 + v2->field_4) + *(__int16 *)(v5 + v2->field_4 + 2) * (this->q0F8 + this->q0F4 + 1); /*0x5869dd*/
      if ( v6 >= 0 ) /*0x5869df*/
      {
        v7 = this->q06C; /*0x5869e5*/
        if ( v6 >= v7 ) /*0x5869ea*/
          v6 = v7 - 1; /*0x5869ec*/
      }
      else
      {
        v6 = 0; /*0x5869e1*/
      }
      *(_WORD *)(this->referenceCount + 10 * v6) = 0; /*0x5869f5*/
      v8 = (__int16 *)(v5 + v2->field_4); /*0x5869fe*/
      v9 = *v8 + (v8[1] << 9); /*0x586a0a*/
      if ( v9 >= 0x40000 || (v10 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v9)) == 0 ) /*0x586a21*/
      {
        v10 = g_CellClassArray; /*0x586a25*/
        g_Map_GlobalCellIndex = *(IUnknown **)v8; /*0x586a2a*/
      }
      House::AnnounceUpgrade((int)v10, (IUnknown *)0xFFFFFFFF); /*0x586a31*/
    }
  }
  for ( j = *(_DWORD *)v2->__pad_10 - 1; j >= 0; --j ) /*0x586a41*/
  {
    aP1 = *(IUnknown **)(v2->field_4 + 4 * j); /*0x586a52*/
    if ( LayerClass::IsWithinUsableArea(this, (IUnknown *)&aP1, (TechnoClass *)1) ) /*0x586a56*/
    {
      v12 = (__int16)aP1 + SHIWORD(aP1) * (this->q0F8 + this->q0F4 + 1); /*0x586a7c*/
      if ( v12 >= 0 ) /*0x586a7e*/
      {
        v13 = this->q06C; /*0x586a84*/
        if ( v12 >= v13 ) /*0x586a89*/
          v12 = v13 - 1; /*0x586a8b*/
      }
      else
      {
        v12 = 0; /*0x586a80*/
      }
      if ( !*(_WORD *)(this->referenceCount + 10 * v12) ) /*0x586a94*/
        Radar::Update((IUnknown *)this, (IUnknown *)&aP1); /*0x586aa2*/
    }
  }
}


// ==== 0x00586AC0  JumpjetLocomotionClass::ClampToCellBounds  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__thiscall JumpjetLocomotionClass::ClampToCellBounds(int *this, MouseClass *aP1, IUnknown *aP2, char a4)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  int v7; // esi
  int v8; // esi
  int v9; // edi
  int v10; // ebp
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int aP2a; // [esp+24h] [ebp+8h]
  int v16; // [esp+28h] [ebp+Ch]

  v4 = this->JumpjetLocomotionClass_field_3D; /*0x586ac8*/
  v5 = SLOWORD(aP2->field_0); /*0x586acf*/
  v6 = SHIWORD(aP2->field_0); /*0x586ad4*/
  if ( (v4 & 1) != 0 ) /*0x586ae1*/
    v7 = v5 - v6 + 1; /*0x586ae5*/
  else
    v7 = v5 - v6; /*0x586ae8*/
  v8 = v4 / 2 + (v7 >> 1) - this->JumpjetLocomotionClass_field_3F; /*0x586b05*/
  v9 = v5 + v6 - v4 - this->DestinationCoords; /*0x586b0d*/
  aP2a = this->q104 / 2; /*0x586b2d*/
  v10 = this->q108 / 2; /*0x586b36*/
  if ( (int)abs32(v8 - aP2a) >= (int)abs32(v9 - v10) ) /*0x586b45*/
  {
    if ( v9 >= v10 ) /*0x586b83*/
    {
      v11 = this->q108; /*0x586b98*/
      if ( a4 ) /*0x586b9e*/
        --v11; /*0x586ba0*/
    }
    else
    {
      v11 = a4 != 0; /*0x586b8d*/
    }
  }
  else if ( v8 >= aP2a ) /*0x586b4b*/
  {
    if ( a4 ) /*0x586b64*/
      v8 = this->q104 - 1; /*0x586b6c*/
    else
      v8 = this->q104; /*0x586b75*/
    v11 = v9; /*0x586b6f*/
  }
  else
  {
    v8 = a4 != 0; /*0x586b58*/
    v11 = v9; /*0x586b5a*/
  }
  v12 = this->DestinationCoords + v11; /*0x586bb1*/
  v13 = v8 + this->JumpjetLocomotionClass_field_3F; /*0x586bb3*/
  LOWORD(v16) = v13 + ((v12 + 1) >> 1); /*0x586bc7*/
  HIWORD(v16) = v4 + (v12 >> 1) - v13; /*0x586bcf*/
  aP1->field_0 = v16; /*0x586bdc*/
  return &aP1->field_0; /*0x586bb5*/
}


// ==== 0x00586BF0  MarkCliffEdgePassability  this=-  sig=ida-proto ====
int __fastcall MarkCliffEdgePassability(int a1)
{
  int result; // eax
  int v2; // ebp
  int v3; // ebp
  unsigned __int16 v4; // cx
  _WORD *v5; // ebx
  int i; // edx
  int v7; // esi
  unsigned int v8; // eax
  _DWORD *v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  _DWORD *v12; // eax
  _WORD *v13; // ebx
  int j; // edx
  bool v15; // zf
  unsigned int v16; // eax
  _DWORD *v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _DWORD *v20; // eax
  int v21; // [esp+0h] [ebp-34h]
  int v22; // [esp+4h] [ebp-30h]
  int v23; // [esp+8h] [ebp-2Ch]
  int v24; // [esp+10h] [ebp-24h]
  int v25; // [esp+14h] [ebp-20h]
  int v26; // [esp+18h] [ebp-1Ch]
  int v27; // [esp+1Ch] [ebp-18h]
  int v28; // [esp+20h] [ebp-14h]
  int v29; // [esp+24h] [ebp-10h] BYREF
  int v30; // [esp+28h] [ebp-Ch] BYREF
  int v31; // [esp+2Ch] [ebp-8h]

  v28 = a1; /*0x586bf6*/
  result = *(_DWORD *)(a1 + 96) - 1; /*0x586bfa*/
  if ( result >= 0 )
  {
    v2 = 16 * result; /*0x586c06*/
    v26 = 16 * result; /*0x586c0b*/
    v27 = *(_DWORD *)(a1 + 96); /*0x586c0f*/
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 84) + v2; /*0x586c19*/
      v21 = v3; /*0x586c1c*/
      if ( !*(_DWORD *)(v3 + 12) && !*(_BYTE *)(v3 + 8) )
      {
        v4 = *(_WORD *)(v3 + 4); /*0x586c3a*/
        if ( *(_WORD *)v3 == v4 )
        {
          v5 = (_WORD *)(4 * (*(_WORD *)(v3 + 2) >= *(_WORD *)(v3 + 6) ? 0 : 4) + 9041544);
          for ( i = *CellStruct::Add((_WORD *)v3, &v29, v5); i != *(_DWORD *)(v3 + 4); i = v23 ) /*0x586c71*/
          {
            v7 = SHIWORD(i) << 9; /*0x586c92*/
            v8 = v7 + (__int16)i; /*0x586c95*/
            if ( v8 >= 0x40000 || (v9 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v8)) == 0 ) /*0x586cab*/
            {
              g_Map_GlobalCellIndex = i; /*0x586cad*/
              v9 = g_CellClassArray; /*0x586cb3*/
            }
            if ( (v9[80] & 0x100) == 0 ) /*0x586cc1*/
            {
              v10 = -2; /*0x586cc3*/
              HIWORD(v22) = HIWORD(i); /*0x586cc8*/
              do /*0x586d1b*/
              {
                v11 = v7 + (__int16)(v10 + i); /*0x586cd8*/
                if ( v11 >= 0x40000 || (v12 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v11)) == 0 ) /*0x586cef*/
                {
                  LOWORD(v22) = v10 + i; /*0x586cd0*/
                  g_Map_GlobalCellIndex = v22; /*0x586cf5*/
                  v12 = g_CellClassArray; /*0x586cfa*/
                }
                ++v10; /*0x586d11*/
                v12[80] = v12[80] & 0xFFFFF3FF | 0x400; /*0x586d15*/
              }
              while ( v10 <= 1 ); /*0x586d1b*/
              v3 = v21; /*0x586d1d*/
            }
            LOWORD(v23) = i + *v5; /*0x586d2e*/
            HIWORD(v23) = HIWORD(i) + v5[1]; /*0x586d33*/
          }
        }
        else
        {
          v13 = (_WORD *)(4 * ((*(_WORD *)v3 >= v4 ? 6 : 2) & 7) + 9041544);
          for ( j = *CellStruct::Add((_WORD *)v3, &v30, v13); ; j = v25 ) /*0x586d69*/
          {
            v15 = (_WORD)j == *(_WORD *)(v3 + 4); /*0x586d6b*/
            v31 = j; /*0x586d6f*/
            if ( v15 && HIWORD(v31) == *(_WORD *)(v3 + 6) ) /*0x586d7d*/
              break; /*0x586d7d*/
            v16 = (__int16)j + (SHIWORD(v31) << 9); /*0x586d8c*/
            if ( v16 >= 0x40000 || (v17 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v16)) == 0 ) /*0x586da2*/
            {
              g_Map_GlobalCellIndex = j; /*0x586da4*/
              v17 = g_CellClassArray; /*0x586daa*/
            }
            if ( (v17[80] & 0x100) == 0 ) /*0x586db8*/
            {
              v18 = -2; /*0x586dba*/
              LOWORD(v24) = j; /*0x586dbf*/
              do /*0x586e08*/
              {
                v19 = (__int16)j + ((__int16)(HIWORD(j) + v18) << 9); /*0x586dd2*/
                if ( v19 >= 0x40000 || (v20 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v19), v3 = v21, !v20) ) /*0x586ded*/
                {
                  HIWORD(v24) = HIWORD(j) + v18; /*0x586dc7*/
                  g_Map_GlobalCellIndex = v24; /*0x586df3*/
                  v20 = g_CellClassArray; /*0x586df8*/
                }
                *((_BYTE *)v20 + 321) |= 0xCu; /*0x586dfd*/
                ++v18; /*0x586e04*/
              }
              while ( v18 <= 1 ); /*0x586e08*/
            }
            LOWORD(v25) = j + *v13; /*0x586e17*/
            HIWORD(v25) = HIWORD(j) + v13[1]; /*0x586e1c*/
          }
        }
      }
      v2 = v26 - 16; /*0x586e32*/
      result = v27 - 1; /*0x586e35*/
      v15 = v27 == 1; /*0x586e35*/
      v26 -= 16; /*0x586e36*/
      --v27; /*0x586e3a*/
      if ( v15 ) /*0x586e3e*/
        break; /*0x586e3e*/
      a1 = v28; /*0x586c15*/
    }
  }
  return result; /*0x586e48*/
}


// ==== 0x00586E50  HouseClass::ClampToUsableCell  this=IUnknown  sig=csp ====
_DWORD *__thiscall HouseClass::ClampToUsableCell(_DWORD *this, MouseClass *aP1, MouseClass *aP2)
{
  int v3; // esi
  int v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  bool v12; // sf
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  int v16; // eax
  int v17; // ecx

  v3 = SLOWORD(aP2->field_0); /*0x586e57*/
  v5 = SHIWORD(aP2->field_0); /*0x586e5d*/
  v6 = this->q041; /*0x586e61*/
  v7 = this->q0FC; /*0x586e67*/
  v8 = *(this + 61); /*0x586e6d*/
  if ( v3 - v5 < 2 * (v7 + v6) - v8 ) /*0x586e7f*/
  {
    if ( v5 - v3 >= v8 - 2 * v7 ) /*0x586eb2*/
    {
      v10 = (v5 + 2 * v7 + 2 - v8 - v3) / 2; /*0x586ec1*/
      v5 -= v10; /*0x586ec3*/
      v3 += v10; /*0x586ec5*/
    }
  }
  else
  {
    v9 = (v3 + v8 + 2 * (1 - v7 - this->q041) - v5) / 2; /*0x586e9d*/
    v3 -= v9; /*0x586e9f*/
    v5 += v9; /*0x586ea1*/
  }
  v11 = (__int16)v5 << 9; /*0x586ecd*/
  v12 = (__int16)v3 + v11 < 0; /*0x586ed0*/
  v13 = (__int16)v3 + v11; /*0x586ed0*/
  LOWORD(aP2) = v3; /*0x586ed2*/
  HIWORD(aP2) = v5; /*0x586ed7*/
  if ( v12 || v13 >= 0x40000 || (v14 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v13)) == 0 ) /*0x586ef0*/
  {
    v15 = g_CellClassArray; /*0x586efa*/
    g_Map_GlobalCellIndex = (IUnknown *)aP2; /*0x586eff*/
  }
  else
  {
    v15 = v14; /*0x586ef2*/
  }
  v16 = *((char *)v15 + 283); /*0x586f0a*/
  if ( *((_BYTE *)v15 + 284) && v5 + v3 < v16 + *(this + 61) + 2 * this->q010 + 4 ) /*0x586f2c*/
    ++v16; /*0x586f2e*/
  v17 = this->q010; /*0x586f2f*/
  if ( v5 + v3 > v16 + *(this + 61) + 2 * v17 ) /*0x586f46*/
  {
    if ( v5 + v3 > v16 + *(this + 61) + 2 * (v17 + *(this + 66)) + 2 ) /*0x586f7e*/
    {
      do /*0x586f9c*/
      {
        LOWORD(v3) = v3 - 1; /*0x586f80*/
        LOWORD(v5) = v5 - 1; /*0x586f85*/
        LOWORD(aP2) = v3; /*0x586f8b*/
        HIWORD(aP2) = v5; /*0x586f90*/
      }
      while ( !LayerClass::IsWithinUsableArea(this, (IUnknown *)&aP2, (TechnoClass *)1) ); /*0x586f9c*/
    }
  }
  else
  {
    do /*0x586f64*/
    {
      LOWORD(v3) = v3 + 1; /*0x586f48*/
      LOWORD(v5) = v5 + 1; /*0x586f4d*/
      LOWORD(aP2) = v3; /*0x586f53*/
      HIWORD(aP2) = v5; /*0x586f58*/
    }
    while ( !LayerClass::IsWithinUsableArea(this, (IUnknown *)&aP2, (TechnoClass *)1) ); /*0x586f64*/
  }
  HIWORD(aP2) = v5; /*0x586fa2*/
  LOWORD(aP2) = v3; /*0x586fa7*/
  aP1->field_0 = (int)aP2; /*0x586fb3*/
  return &aP1->field_0; /*0x586fb0*/
}


// ==== 0x00586FC0  FootClass::FindNearestApproachableCell  this=FootClass  sig=csp ====
int *__thiscall FootClass::FindNearestApproachableCell(_DWORD *this, MouseClass *aP1, __int16 *a2, IUnknown *aP3)
{
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  int v7; // eax
  _DWORD *v9; // esi
  MouseClass *v10; // eax
  TagClass *v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // ebx
  int v16; // edi
  int v17; // edx
  int v18; // edx
  double v19; // st7
  TagClass *v20; // [esp+18h] [ebp-30h] BYREF
  int v21; // [esp+1Ch] [ebp-2Ch]
  TagClass *v22; // [esp+20h] [ebp-28h]
  TagClass *v23; // [esp+24h] [ebp-24h]
  TagClass *v24; // [esp+28h] [ebp-20h]
  MouseClass *v25; // [esp+2Ch] [ebp-1Ch]
  IUnknown *v26; // [esp+30h] [ebp-18h]
  int v27; // [esp+34h] [ebp-14h]
  __int16 v28; // [esp+38h] [ebp-10h]
  __int16 i; // [esp+3Ah] [ebp-Eh]
  double v30; // [esp+40h] [ebp-8h]

  v24 = g_MapSeedState; /*0x586fd4*/
  v26 = (IUnknown *)this; /*0x586fd8*/
  v30 = 10000.0; /*0x586fdc*/
  v4 = *a2 + (a2[1] << 9); /*0x586fee*/
  if ( v4 < 0x40000 && (v5 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v4)) != 0 ) /*0x58700c*/
  {
    v6 = v5; /*0x58700e*/
  }
  else
  {
    v6 = g_CellClassArray; /*0x587014*/
    g_Map_GlobalCellIndex = *(IUnknown **)a2; /*0x587019*/
  }
  v7 = v6[14]; /*0x58701e*/
  if ( v7 >= 0 ) /*0x587023*/
  {
    v9 = *(_DWORD **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * v7); /*0x58703b*/
    v10 = (MouseClass *)(*(int (__thiscall **)(_DWORD *))(*v9 + 156))(v9); /*0x587042*/
    v11 = (TagClass *)v9[186]; /*0x58704e*/
    v21 = v9[185]; /*0x587054*/
    v12 = *((unsigned __int8 *)v6 + 282); /*0x58705a*/
    v25 = v10; /*0x587060*/
    v23 = v11; /*0x587066*/
    LOWORD(v11) = v12 % v21; /*0x58706b*/
    v13 = v12; /*0x58706f*/
    v14 = v21; /*0x587071*/
    v15 = 0; /*0x587081*/
    v28 = *a2 - (_WORD)v11; /*0x587083*/
    for ( i = a2[1] - v13 / v21; v15 < (int)v23; ++v15 ) /*0x58709a*/
    {
      v16 = 0; /*0x5870a0*/
      if ( v14 > 0 ) /*0x5870a4*/
      {
        HIWORD(v22) = v15 + i; /*0x5870b1*/
        do /*0x587151*/
        {
          v17 = v15 * v9[185]; /*0x5870c3*/
          LOWORD(v22) = v16 + v28; /*0x5870c6*/
          v20 = v22; /*0x5870d5*/
          if ( *((_DWORD *)&v25->field_10 + v16 + v17) /*0x5870ec*/
            && LayerClass::IsWithinUsableArea(v26, (IUnknown *)&v20, (TechnoClass *)1) )
          {
            v18 = SHIWORD(v20) - SHIWORD(aP3->field_0); /*0x587110*/
            v27 = ((__int16)v20 - SLOWORD(aP3->field_0)) * ((__int16)v20 - SLOWORD(aP3->field_0)) + v18 * v18; /*0x58711c*/
            v19 = Math::Sqrt((double)v27); /*0x587127*/
            if ( v19 < v30 ) /*0x587138*/
            {
              v30 = v19; /*0x58713e*/
              v24 = v20; /*0x587142*/
            }
          }
          v14 = v21; /*0x58714a*/
          ++v16; /*0x58714e*/
        }
        while ( v16 < v21 ); /*0x587151*/
      }
    }
    aP1->field_0 = (int)v24; /*0x58716d*/
    return &aP1->field_0; /*0x587164*/
  }
  else
  {
    aP1->field_0 = *(_DWORD *)a2; /*0x58702a*/
    return &aP1->field_0; /*0x587025*/
  }
}


// ==== 0x00587180  CellClass::SetTerrainType  this=AbstractClass  sig=csp ====
char __thiscall CellClass::CheckConnectivity(int *this, IUnknown *aP1)
{
  IUnknown *v2; // esi
  _DWORD *v3; // ebx
  int v4; // ebp
  int v5; // edi
  __int16 v6; // cx
  unsigned int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  __int16 v10; // cx
  unsigned int v11; // eax
  _DWORD *v12; // eax
  __int16 v13; // cx
  unsigned int v14; // eax
  _DWORD *v15; // eax
  __int16 v16; // dx
  int v17; // eax
  __int16 v18; // cx
  unsigned int v19; // eax
  _DWORD *v20; // eax
  __int16 v21; // cx
  int v22; // eax
  __int16 v23; // cx
  unsigned int v24; // eax
  _DWORD *v25; // eax
  int v26; // esi
  __int16 v27; // ax
  __int16 v28; // dx
  MouseClass *v29; // esi
  __int16 v30; // dx
  __int16 v31; // ax
  __int16 v32; // dx
  IUnknown *v33; // edi
  int RegionMap; // eax
  int v35; // eax
  IUnknown *v36; // eax
  int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  _DWORD *v41; // eax
  int v42; // eax
  int v43; // eax
  unsigned int v44; // eax
  _DWORD *v45; // eax
  int v46; // eax
  int v47; // eax
  unsigned int v48; // eax
  _DWORD *v49; // eax
  int v50; // eax
  int v51; // eax
  unsigned int v52; // eax
  _DWORD *v53; // eax
  int v54; // eax
  int v55; // eax
  unsigned int v56; // eax
  _DWORD *v57; // eax
  int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  _DWORD *v61; // eax
  int v62; // eax
  int v63; // eax
  unsigned int v64; // eax
  _DWORD *v65; // eax
  int v66; // eax
  int v67; // eax
  unsigned int v68; // eax
  _DWORD *v69; // eax
  int v70; // eax
  char v71; // [esp+12h] [ebp-2Eh]
  char v72; // [esp+13h] [ebp-2Dh]
  int i; // [esp+14h] [ebp-2Ch] BYREF
  ObjectClass *v74; // [esp+18h] [ebp-28h]
  IUnknown *v75; // [esp+1Ch] [ebp-24h]
  ObjectClass *v76; // [esp+20h] [ebp-20h]
  IUnknown *v77; // [esp+24h] [ebp-1Ch]
  IUnknown *v78; // [esp+28h] [ebp-18h]
  MouseClass *v79; // [esp+2Ch] [ebp-14h]
  __int16 v80[4]; // [esp+34h] [ebp-Ch] BYREF
  int *v81; // [esp+3Ch] [ebp-4h] BYREF

  v2 = aP1; /*0x587416*/
  v81 = this; /*0x58741b*/
  v71 = 0; /*0x58741f*/
  v72 = 0; /*0x587424*/
  v3 = 0; /*0x587429*/
  i = -1; /*0x58742b*/
  v4 = -2; /*0x587433*/
  do /*0x5876b4*/
  {
    v5 = -2; /*0x587438*/
    do /*0x5876aa*/
    {
      v6 = LOWORD(v2->field_0) + v5; /*0x587447*/
      HIWORD(aP1) = HIWORD(v2->field_0) + v4; /*0x58744a*/
      LOWORD(aP1) = v6; /*0x58744f*/
      v7 = v6 + (SHIWORD(aP1) << 9); /*0x58745d*/
      if ( v7 >= 0x40000 || (v8 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v7)) == 0 ) /*0x587473*/
      {
        g_Map_GlobalCellIndex = aP1; /*0x587479*/
        v8 = g_CellClassArray; /*0x58747e*/
      }
      v9 = v8[14]; /*0x587483*/
      if ( v9 < g_TerrainBridgeIndex || v9 >= g_TerrainBridgeIndex + 16 ) /*0x587494*/
      {
        if ( v9 < *(int *)&MEMORY[0xA8D63C].__pad_579C[57424] /*0x587511*/
          || v9 >= *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] + 16 )
        {
          v16 = HIWORD(v2->field_0) + v4; /*0x587589*/
          LOWORD(v76) = LOWORD(v2->field_0) + v5; /*0x58758d*/
          HIWORD(v76) = v16; /*0x587596*/
          *(_DWORD *)v80 = v76; /*0x5875a5*/
          v17 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v80) + 17); /*0x5875ae*/
          if ( v17 >= 74 && v17 <= 101 ) /*0x5875b9*/
          {
            v18 = LOWORD(v2->field_0) + v5; /*0x5875c5*/
            v71 = 0; /*0x5875c8*/
            v72 = 0; /*0x5875cd*/
            HIWORD(v77) = HIWORD(v2->field_0) + v4; /*0x5875d2*/
            LOWORD(v77) = v18; /*0x5875d7*/
            v19 = v18 + (SHIWORD(v77) << 9); /*0x5875e5*/
            if ( v19 < 0x40000 ) /*0x5875e7*/
            {
              v20 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v19); /*0x5875f6*/
              if ( v20 ) /*0x5875fb*/
              {
                v3 = v20; /*0x5875fd*/
                goto LABEL_31; /*0x5875ff*/
              }
            }
            g_Map_GlobalCellIndex = v77; /*0x587608*/
LABEL_30:
            v3 = g_CellClassArray; /*0x5876a1*/
            goto LABEL_31; /*0x5876a1*/
          }
          v21 = HIWORD(v2->field_0) + v4; /*0x58761c*/
          LOWORD(v78) = LOWORD(v2->field_0) + v5; /*0x587620*/
          HIWORD(v78) = v21; /*0x587625*/
          *(_DWORD *)v80 = v78; /*0x587638*/
          v22 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v80) + 17); /*0x587641*/
          if ( v22 >= 205 && v22 <= 232 ) /*0x587650*/
          {
            v23 = LOWORD(v2->field_0) + v5; /*0x58765c*/
            v71 = 0; /*0x58765f*/
            v72 = 1; /*0x587664*/
            HIWORD(v79) = HIWORD(v2->field_0) + v4; /*0x587669*/
            LOWORD(v79) = v23; /*0x58766e*/
            v24 = v23 + (SHIWORD(v79) << 9); /*0x58767c*/
            if ( v24 < 0x40000 ) /*0x58767e*/
            {
              v25 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v24); /*0x58768d*/
              if ( v25 ) /*0x587692*/
              {
                v3 = v25; /*0x587694*/
                goto LABEL_31; /*0x587696*/
              }
            }
            g_Map_GlobalCellIndex = (IUnknown *)v79; /*0x58769c*/
            goto LABEL_30; /*0x58769c*/
          }
        }
        else
        {
          v13 = LOWORD(v2->field_0) + v5; /*0x58751d*/
          v71 = 1; /*0x587520*/
          HIWORD(v75) = HIWORD(v2->field_0) + v4; /*0x587525*/
          LOWORD(v75) = v13; /*0x58752a*/
          v14 = v13 + (SHIWORD(v75) << 9); /*0x587538*/
          if ( v14 < 0x40000 && (v15 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v14)) != 0 ) /*0x58754e*/
          {
            v3 = v15; /*0x587550*/
            i = v9 - *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424]; /*0x587559*/
          }
          else
          {
            v3 = g_CellClassArray; /*0x587566*/
            g_Map_GlobalCellIndex = v75; /*0x58756b*/
            i = v9 - *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424]; /*0x587577*/
          }
        }
      }
      else
      {
        v10 = LOWORD(v2->field_0) + v5; /*0x5874a0*/
        v71 = 1; /*0x5874a3*/
        HIWORD(v74) = HIWORD(v2->field_0) + v4; /*0x5874a8*/
        LOWORD(v74) = v10; /*0x5874ad*/
        v11 = v10 + (SHIWORD(v74) << 9); /*0x5874bb*/
        if ( v11 < 0x40000 && (v12 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v11)) != 0 ) /*0x5874d1*/
        {
          v3 = v12; /*0x5874d3*/
          i = v9 - g_TerrainBridgeIndex; /*0x5874dc*/
        }
        else
        {
          v3 = g_CellClassArray; /*0x5874e9*/
          g_Map_GlobalCellIndex = (IUnknown *)v74; /*0x5874ee*/
          i = v9 - g_TerrainBridgeIndex; /*0x5874fa*/
        }
      }
LABEL_31:
      ++v5; /*0x5876a6*/
    }
    while ( v5 < 3 ); /*0x5876aa*/
    ++v4; /*0x5876b0*/
  }
  while ( v4 < 3 ); /*0x5876b4*/
  if ( v71 ) /*0x5876c0*/
  {
    v26 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * v3[14]) + 740); /*0x5876da*/
    v27 = *((unsigned __int8 *)v3 + 282) / v26; /*0x5876ef*/
    v28 = *((_WORD *)v3 + 19); /*0x5876f1*/
    LOWORD(v79) = *((_WORD *)v3 + 18) - *((unsigned __int8 *)v3 + 282) % v26; /*0x5876f8*/
    v29 = (MouseClass *)dword_82AA44[i]; /*0x587701*/
    v30 = v28 - v27; /*0x587708*/
    v31 = word_82AA04[i]; /*0x58770b*/
    HIWORD(v79) = v30; /*0x587713*/
    v32 = word_82AA24[i]; /*0x587718*/
    v80[0] = v31; /*0x587720*/
    v80[1] = v32; /*0x587725*/
    LOWORD(aP1) = (_WORD)v79 + v31; /*0x587738*/
    HIWORD(aP1) = HIWORD(v79) + v32; /*0x587746*/
    i = (int)aP1; /*0x58774f*/
    if ( v29 != (MouseClass *)-1 ) /*0x587753*/
    {
      v33 = (IUnknown *)v81; /*0x587759*/
      while ( 1 ) /*0x58776c*/
      {
        RegionMap = GetRegionMap(&v33->field_0, (IUnknown *)&i, 3, 0); /*0x58776c*/
        if ( RegionMap < 0 ) /*0x587773*/
          break; /*0x587773*/
        v35 = v33->field_54 + 16 * RegionMap; /*0x58777f*/
        if ( !*(_BYTE *)(v35 + 8) ) /*0x587786*/
          return 1; /*0x587786*/
        if ( *(IUnknown **)v35 == aP1 ) /*0x587794*/
        {
          aP1 = *(IUnknown **)(v35 + 4); /*0x5877a4*/
          v36 = CellStruct::Add(&aP1, (IUnknown *)&v81, (IUnknown *)(4 * ((unsigned __int8)v29 & 7) + 9041544)); /*0x5877b5*/
        }
        else
        {
          if ( *(IUnknown **)(v35 + 4) != aP1 ) /*0x5877bb*/
            return 1; /*0x5877bb*/
          aP1 = *(IUnknown **)v35; /*0x5877ca*/
          v36 = CellStruct::Add(&aP1, (IUnknown *)v80, (IUnknown *)(4 * ((unsigned __int8)v29 & 7) + 9041544)); /*0x5877df*/
        }
        i = v36->field_0; /*0x5877e6*/
      }
    }
  }
  else if ( v3 ) /*0x5877fd*/
  {
    v38 = v3[17]; /*0x587809*/
    if ( v72 ) /*0x58780c*/
    {
      if ( v38 >= 205 && v38 <= 213 || v38 >= 223 && v38 <= 226 || v38 == 231 ) /*0x587833*/
      {
        for ( aP1 = (IUnknown *)v3[9]; ; LOWORD(aP1) = (_WORD)aP1 - 1 ) /*0x58783c*/
        {
          v39 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 17); /*0x58784f*/
          if ( v39 < 205 || v39 > 232 ) /*0x58785e*/
            break; /*0x58785e*/
          v40 = (__int16)aP1 + (SHIWORD(aP1) << 9); /*0x587870*/
          if ( v40 >= 0x40000 || (v41 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v40)) == 0 ) /*0x587886*/
          {
            g_Map_GlobalCellIndex = aP1; /*0x58788c*/
            v41 = g_CellClassArray; /*0x587891*/
          }
          v42 = v41[17]; /*0x587896*/
          if ( v42 == 231 || v42 == 232 ) /*0x5878a9*/
            return 1; /*0x5878a9*/
        }
        for ( i = v3[9]; ; LOWORD(i) = i + 1 ) /*0x5878be*/
        {
          v43 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&i) + 17); /*0x5878d1*/
          if ( v43 < 205 || v43 > 232 ) /*0x5878e4*/
            break; /*0x5878e4*/
          v44 = (__int16)i + (SHIWORD(i) << 9); /*0x5878f7*/
          if ( v44 >= 0x40000 || (v45 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v44)) == 0 ) /*0x58790d*/
          {
            g_Map_GlobalCellIndex = (IUnknown *)i; /*0x587913*/
            v45 = g_CellClassArray; /*0x587918*/
          }
          v46 = v45[17]; /*0x58791d*/
          if ( v46 == 231 || v46 == 232 ) /*0x587930*/
            return 1; /*0x587930*/
        }
      }
      else
      {
        for ( i = v3[9]; ; ++HIWORD(i) ) /*0x587940*/
        {
          v47 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&i) + 17); /*0x587953*/
          if ( v47 < 205 || v47 > 232 ) /*0x587962*/
            break; /*0x587962*/
          v48 = (__int16)i + (SHIWORD(i) << 9); /*0x587971*/
          if ( v48 >= 0x40000 || (v49 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v48)) == 0 ) /*0x587987*/
          {
            g_Map_GlobalCellIndex = (IUnknown *)i; /*0x58798d*/
            v49 = g_CellClassArray; /*0x587992*/
          }
          v50 = v49[17]; /*0x587997*/
          if ( v50 == 231 || v50 == 232 ) /*0x5879aa*/
            return 1; /*0x5879aa*/
        }
        for ( aP1 = (IUnknown *)v3[9]; ; --HIWORD(aP1) ) /*0x5879ba*/
        {
          v51 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 17); /*0x5879cd*/
          if ( v51 < 205 || v51 > 232 ) /*0x5879e0*/
            break; /*0x5879e0*/
          v52 = (__int16)aP1 + (SHIWORD(aP1) << 9); /*0x5879f6*/
          if ( v52 >= 0x40000 || (v53 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v52)) == 0 ) /*0x587a0c*/
          {
            g_Map_GlobalCellIndex = aP1; /*0x587a12*/
            v53 = g_CellClassArray; /*0x587a17*/
          }
          v54 = v53[17]; /*0x587a1c*/
          if ( v54 == 231 || v54 == 232 ) /*0x587a2f*/
            return 1; /*0x587a2f*/
        }
      }
    }
    else if ( v38 >= 74 && v38 <= 82 || v38 >= 92 && v38 <= 95 || v38 == 100 ) /*0x587a5b*/
    {
      for ( aP1 = (IUnknown *)v3[9]; ; LOWORD(aP1) = (_WORD)aP1 - 1 ) /*0x587a64*/
      {
        v55 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 17); /*0x587a77*/
        if ( v55 < 74 || v55 > 101 ) /*0x587a82*/
          break; /*0x587a82*/
        v56 = (__int16)aP1 + (SHIWORD(aP1) << 9); /*0x587a94*/
        if ( v56 >= 0x40000 || (v57 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v56)) == 0 ) /*0x587aaa*/
        {
          g_Map_GlobalCellIndex = aP1; /*0x587ab0*/
          v57 = g_CellClassArray; /*0x587ab5*/
        }
        v58 = v57[17]; /*0x587aba*/
        if ( v58 == 100 || v58 == 101 ) /*0x587ac9*/
          return 1; /*0x587ac9*/
      }
      for ( i = v3[9]; ; LOWORD(i) = i + 1 ) /*0x587ade*/
      {
        v59 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&i) + 17); /*0x587af1*/
        if ( v59 < 74 || v59 > 101 ) /*0x587b00*/
          break; /*0x587b00*/
        v60 = (__int16)i + (SHIWORD(i) << 9); /*0x587b13*/
        if ( v60 >= 0x40000 || (v61 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v60)) == 0 ) /*0x587b29*/
        {
          g_Map_GlobalCellIndex = (IUnknown *)i; /*0x587b2f*/
          v61 = g_CellClassArray; /*0x587b34*/
        }
        v62 = v61[17]; /*0x587b39*/
        if ( v62 == 100 || v62 == 101 ) /*0x587b48*/
          return 1; /*0x587b48*/
      }
    }
    else
    {
      for ( i = v3[9]; ; ++HIWORD(i) ) /*0x587b58*/
      {
        v63 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&i) + 17); /*0x587b6b*/
        if ( v63 < 74 || v63 > 101 ) /*0x587b76*/
          break; /*0x587b76*/
        v64 = (__int16)i + (SHIWORD(i) << 9); /*0x587b85*/
        if ( v64 >= 0x40000 || (v65 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v64)) == 0 ) /*0x587b9b*/
        {
          g_Map_GlobalCellIndex = (IUnknown *)i; /*0x587ba1*/
          v65 = g_CellClassArray; /*0x587ba6*/
        }
        v66 = v65[17]; /*0x587bab*/
        if ( v66 == 100 || v66 == 101 ) /*0x587bba*/
          return 1; /*0x5877f8*/
      }
      for ( aP1 = (IUnknown *)v3[9]; ; --HIWORD(aP1) ) /*0x587bca*/
      {
        v67 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 17); /*0x587bdd*/
        if ( v67 < 74 || v67 > 101 ) /*0x587be8*/
          break; /*0x587be8*/
        v68 = (__int16)aP1 + (SHIWORD(aP1) << 9); /*0x587bfa*/
        if ( v68 >= 0x40000 || (v69 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v68)) == 0 ) /*0x587c10*/
        {
          g_Map_GlobalCellIndex = aP1; /*0x587c16*/
          v69 = g_CellClassArray; /*0x587c1b*/
        }
        v70 = v69[17]; /*0x587c20*/
        if ( v70 == 100 || v70 == 101 ) /*0x587c2f*/
          return 1; /*0x587c2f*/
      }
    }
  }
  return 0; /*0x5877ef*/
}


// ==== 0x00587410  CellClass::CheckConnectivity  this=CellClass  sig=csp ====
char __thiscall CellClass::CheckConnectivity(int *this, IUnknown *aP1)
{
  IUnknown *v2; // esi
  _DWORD *v3; // ebx
  int v4; // ebp
  int v5; // edi
  __int16 v6; // cx
  unsigned int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  __int16 v10; // cx
  unsigned int v11; // eax
  _DWORD *v12; // eax
  __int16 v13; // cx
  unsigned int v14; // eax
  _DWORD *v15; // eax
  __int16 v16; // dx
  int v17; // eax
  __int16 v18; // cx
  unsigned int v19; // eax
  _DWORD *v20; // eax
  __int16 v21; // cx
  int v22; // eax
  __int16 v23; // cx
  unsigned int v24; // eax
  _DWORD *v25; // eax
  int v26; // esi
  __int16 v27; // ax
  __int16 v28; // dx
  MouseClass *v29; // esi
  __int16 v30; // dx
  __int16 v31; // ax
  __int16 v32; // dx
  IUnknown *v33; // edi
  int RegionMap; // eax
  int v35; // eax
  IUnknown *v36; // eax
  int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  _DWORD *v41; // eax
  int v42; // eax
  int v43; // eax
  unsigned int v44; // eax
  _DWORD *v45; // eax
  int v46; // eax
  int v47; // eax
  unsigned int v48; // eax
  _DWORD *v49; // eax
  int v50; // eax
  int v51; // eax
  unsigned int v52; // eax
  _DWORD *v53; // eax
  int v54; // eax
  int v55; // eax
  unsigned int v56; // eax
  _DWORD *v57; // eax
  int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  _DWORD *v61; // eax
  int v62; // eax
  int v63; // eax
  unsigned int v64; // eax
  _DWORD *v65; // eax
  int v66; // eax
  int v67; // eax
  unsigned int v68; // eax
  _DWORD *v69; // eax
  int v70; // eax
  char v71; // [esp+12h] [ebp-2Eh]
  char v72; // [esp+13h] [ebp-2Dh]
  int i; // [esp+14h] [ebp-2Ch] BYREF
  ObjectClass *v74; // [esp+18h] [ebp-28h]
  IUnknown *v75; // [esp+1Ch] [ebp-24h]
  ObjectClass *v76; // [esp+20h] [ebp-20h]
  IUnknown *v77; // [esp+24h] [ebp-1Ch]
  IUnknown *v78; // [esp+28h] [ebp-18h]
  MouseClass *v79; // [esp+2Ch] [ebp-14h]
  __int16 v80[4]; // [esp+34h] [ebp-Ch] BYREF
  int *v81; // [esp+3Ch] [ebp-4h] BYREF

  v2 = aP1; /*0x587416*/
  v81 = this; /*0x58741b*/
  v71 = 0; /*0x58741f*/
  v72 = 0; /*0x587424*/
  v3 = 0; /*0x587429*/
  i = -1; /*0x58742b*/
  v4 = -2; /*0x587433*/
  do /*0x5876b4*/
  {
    v5 = -2; /*0x587438*/
    do /*0x5876aa*/
    {
      v6 = LOWORD(v2->field_0) + v5; /*0x587447*/
      HIWORD(aP1) = HIWORD(v2->field_0) + v4; /*0x58744a*/
      LOWORD(aP1) = v6; /*0x58744f*/
      v7 = v6 + (SHIWORD(aP1) << 9); /*0x58745d*/
      if ( v7 >= 0x40000 || (v8 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v7)) == 0 ) /*0x587473*/
      {
        g_Map_GlobalCellIndex = aP1; /*0x587479*/
        v8 = g_CellClassArray; /*0x58747e*/
      }
      v9 = v8[14]; /*0x587483*/
      if ( v9 < g_TerrainBridgeIndex || v9 >= g_TerrainBridgeIndex + 16 ) /*0x587494*/
      {
        if ( v9 < *(int *)&MEMORY[0xA8D63C].__pad_579C[57424] /*0x587511*/
          || v9 >= *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] + 16 )
        {
          v16 = HIWORD(v2->field_0) + v4; /*0x587589*/
          LOWORD(v76) = LOWORD(v2->field_0) + v5; /*0x58758d*/
          HIWORD(v76) = v16; /*0x587596*/
          *(_DWORD *)v80 = v76; /*0x5875a5*/
          v17 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v80) + 17); /*0x5875ae*/
          if ( v17 >= 74 && v17 <= 101 ) /*0x5875b9*/
          {
            v18 = LOWORD(v2->field_0) + v5; /*0x5875c5*/
            v71 = 0; /*0x5875c8*/
            v72 = 0; /*0x5875cd*/
            HIWORD(v77) = HIWORD(v2->field_0) + v4; /*0x5875d2*/
            LOWORD(v77) = v18; /*0x5875d7*/
            v19 = v18 + (SHIWORD(v77) << 9); /*0x5875e5*/
            if ( v19 < 0x40000 ) /*0x5875e7*/
            {
              v20 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v19); /*0x5875f6*/
              if ( v20 ) /*0x5875fb*/
              {
                v3 = v20; /*0x5875fd*/
                goto LABEL_31; /*0x5875ff*/
              }
            }
            g_Map_GlobalCellIndex = v77; /*0x587608*/
LABEL_30:
            v3 = g_CellClassArray; /*0x5876a1*/
            goto LABEL_31; /*0x5876a1*/
          }
          v21 = HIWORD(v2->field_0) + v4; /*0x58761c*/
          LOWORD(v78) = LOWORD(v2->field_0) + v5; /*0x587620*/
          HIWORD(v78) = v21; /*0x587625*/
          *(_DWORD *)v80 = v78; /*0x587638*/
          v22 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v80) + 17); /*0x587641*/
          if ( v22 >= 205 && v22 <= 232 ) /*0x587650*/
          {
            v23 = LOWORD(v2->field_0) + v5; /*0x58765c*/
            v71 = 0; /*0x58765f*/
            v72 = 1; /*0x587664*/
            HIWORD(v79) = HIWORD(v2->field_0) + v4; /*0x587669*/
            LOWORD(v79) = v23; /*0x58766e*/
            v24 = v23 + (SHIWORD(v79) << 9); /*0x58767c*/
            if ( v24 < 0x40000 ) /*0x58767e*/
            {
              v25 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v24); /*0x58768d*/
              if ( v25 ) /*0x587692*/
              {
                v3 = v25; /*0x587694*/
                goto LABEL_31; /*0x587696*/
              }
            }
            g_Map_GlobalCellIndex = (IUnknown *)v79; /*0x58769c*/
            goto LABEL_30; /*0x58769c*/
          }
        }
        else
        {
          v13 = LOWORD(v2->field_0) + v5; /*0x58751d*/
          v71 = 1; /*0x587520*/
          HIWORD(v75) = HIWORD(v2->field_0) + v4; /*0x587525*/
          LOWORD(v75) = v13; /*0x58752a*/
          v14 = v13 + (SHIWORD(v75) << 9); /*0x587538*/
          if ( v14 < 0x40000 && (v15 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v14)) != 0 ) /*0x58754e*/
          {
            v3 = v15; /*0x587550*/
            i = v9 - *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424]; /*0x587559*/
          }
          else
          {
            v3 = g_CellClassArray; /*0x587566*/
            g_Map_GlobalCellIndex = v75; /*0x58756b*/
            i = v9 - *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424]; /*0x587577*/
          }
        }
      }
      else
      {
        v10 = LOWORD(v2->field_0) + v5; /*0x5874a0*/
        v71 = 1; /*0x5874a3*/
        HIWORD(v74) = HIWORD(v2->field_0) + v4; /*0x5874a8*/
        LOWORD(v74) = v10; /*0x5874ad*/
        v11 = v10 + (SHIWORD(v74) << 9); /*0x5874bb*/
        if ( v11 < 0x40000 && (v12 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v11)) != 0 ) /*0x5874d1*/
        {
          v3 = v12; /*0x5874d3*/
          i = v9 - g_TerrainBridgeIndex; /*0x5874dc*/
        }
        else
        {
          v3 = g_CellClassArray; /*0x5874e9*/
          g_Map_GlobalCellIndex = (IUnknown *)v74; /*0x5874ee*/
          i = v9 - g_TerrainBridgeIndex; /*0x5874fa*/
        }
      }
LABEL_31:
      ++v5; /*0x5876a6*/
    }
    while ( v5 < 3 ); /*0x5876aa*/
    ++v4; /*0x5876b0*/
  }
  while ( v4 < 3 ); /*0x5876b4*/
  if ( v71 ) /*0x5876c0*/
  {
    v26 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * v3[14]) + 740); /*0x5876da*/
    v27 = *((unsigned __int8 *)v3 + 282) / v26; /*0x5876ef*/
    v28 = *((_WORD *)v3 + 19); /*0x5876f1*/
    LOWORD(v79) = *((_WORD *)v3 + 18) - *((unsigned __int8 *)v3 + 282) % v26; /*0x5876f8*/
    v29 = (MouseClass *)dword_82AA44[i]; /*0x587701*/
    v30 = v28 - v27; /*0x587708*/
    v31 = word_82AA04[i]; /*0x58770b*/
    HIWORD(v79) = v30; /*0x587713*/
    v32 = word_82AA24[i]; /*0x587718*/
    v80[0] = v31; /*0x587720*/
    v80[1] = v32; /*0x587725*/
    LOWORD(aP1) = (_WORD)v79 + v31; /*0x587738*/
    HIWORD(aP1) = HIWORD(v79) + v32; /*0x587746*/
    i = (int)aP1; /*0x58774f*/
    if ( v29 != (MouseClass *)-1 ) /*0x587753*/
    {
      v33 = (IUnknown *)v81; /*0x587759*/
      while ( 1 ) /*0x58776c*/
      {
        RegionMap = GetRegionMap(&v33->field_0, (IUnknown *)&i, 3, 0); /*0x58776c*/
        if ( RegionMap < 0 ) /*0x587773*/
          break; /*0x587773*/
        v35 = v33->field_54 + 16 * RegionMap; /*0x58777f*/
        if ( !*(_BYTE *)(v35 + 8) ) /*0x587786*/
          return 1; /*0x587786*/
        if ( *(IUnknown **)v35 == aP1 ) /*0x587794*/
        {
          aP1 = *(IUnknown **)(v35 + 4); /*0x5877a4*/
          v36 = CellStruct::Add(&aP1, (IUnknown *)&v81, (IUnknown *)(4 * ((unsigned __int8)v29 & 7) + 9041544)); /*0x5877b5*/
        }
        else
        {
          if ( *(IUnknown **)(v35 + 4) != aP1 ) /*0x5877bb*/
            return 1; /*0x5877bb*/
          aP1 = *(IUnknown **)v35; /*0x5877ca*/
          v36 = CellStruct::Add(&aP1, (IUnknown *)v80, (IUnknown *)(4 * ((unsigned __int8)v29 & 7) + 9041544)); /*0x5877df*/
        }
        i = v36->field_0; /*0x5877e6*/
      }
    }
  }
  else if ( v3 ) /*0x5877fd*/
  {
    v38 = v3[17]; /*0x587809*/
    if ( v72 ) /*0x58780c*/
    {
      if ( v38 >= 205 && v38 <= 213 || v38 >= 223 && v38 <= 226 || v38 == 231 ) /*0x587833*/
      {
        for ( aP1 = (IUnknown *)v3[9]; ; LOWORD(aP1) = (_WORD)aP1 - 1 ) /*0x58783c*/
        {
          v39 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 17); /*0x58784f*/
          if ( v39 < 205 || v39 > 232 ) /*0x58785e*/
            break; /*0x58785e*/
          v40 = (__int16)aP1 + (SHIWORD(aP1) << 9); /*0x587870*/
          if ( v40 >= 0x40000 || (v41 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v40)) == 0 ) /*0x587886*/
          {
            g_Map_GlobalCellIndex = aP1; /*0x58788c*/
            v41 = g_CellClassArray; /*0x587891*/
          }
          v42 = v41[17]; /*0x587896*/
          if ( v42 == 231 || v42 == 232 ) /*0x5878a9*/
            return 1; /*0x5878a9*/
        }
        for ( i = v3[9]; ; LOWORD(i) = i + 1 ) /*0x5878be*/
        {
          v43 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&i) + 17); /*0x5878d1*/
          if ( v43 < 205 || v43 > 232 ) /*0x5878e4*/
            break; /*0x5878e4*/
          v44 = (__int16)i + (SHIWORD(i) << 9); /*0x5878f7*/
          if ( v44 >= 0x40000 || (v45 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v44)) == 0 ) /*0x58790d*/
          {
            g_Map_GlobalCellIndex = (IUnknown *)i; /*0x587913*/
            v45 = g_CellClassArray; /*0x587918*/
          }
          v46 = v45[17]; /*0x58791d*/
          if ( v46 == 231 || v46 == 232 ) /*0x587930*/
            return 1; /*0x587930*/
        }
      }
      else
      {
        for ( i = v3[9]; ; ++HIWORD(i) ) /*0x587940*/
        {
          v47 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&i) + 17); /*0x587953*/
          if ( v47 < 205 || v47 > 232 ) /*0x587962*/
            break; /*0x587962*/
          v48 = (__int16)i + (SHIWORD(i) << 9); /*0x587971*/
          if ( v48 >= 0x40000 || (v49 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v48)) == 0 ) /*0x587987*/
          {
            g_Map_GlobalCellIndex = (IUnknown *)i; /*0x58798d*/
            v49 = g_CellClassArray; /*0x587992*/
          }
          v50 = v49[17]; /*0x587997*/
          if ( v50 == 231 || v50 == 232 ) /*0x5879aa*/
            return 1; /*0x5879aa*/
        }
        for ( aP1 = (IUnknown *)v3[9]; ; --HIWORD(aP1) ) /*0x5879ba*/
        {
          v51 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 17); /*0x5879cd*/
          if ( v51 < 205 || v51 > 232 ) /*0x5879e0*/
            break; /*0x5879e0*/
          v52 = (__int16)aP1 + (SHIWORD(aP1) << 9); /*0x5879f6*/
          if ( v52 >= 0x40000 || (v53 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v52)) == 0 ) /*0x587a0c*/
          {
            g_Map_GlobalCellIndex = aP1; /*0x587a12*/
            v53 = g_CellClassArray; /*0x587a17*/
          }
          v54 = v53[17]; /*0x587a1c*/
          if ( v54 == 231 || v54 == 232 ) /*0x587a2f*/
            return 1; /*0x587a2f*/
        }
      }
    }
    else if ( v38 >= 74 && v38 <= 82 || v38 >= 92 && v38 <= 95 || v38 == 100 ) /*0x587a5b*/
    {
      for ( aP1 = (IUnknown *)v3[9]; ; LOWORD(aP1) = (_WORD)aP1 - 1 ) /*0x587a64*/
      {
        v55 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 17); /*0x587a77*/
        if ( v55 < 74 || v55 > 101 ) /*0x587a82*/
          break; /*0x587a82*/
        v56 = (__int16)aP1 + (SHIWORD(aP1) << 9); /*0x587a94*/
        if ( v56 >= 0x40000 || (v57 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v56)) == 0 ) /*0x587aaa*/
        {
          g_Map_GlobalCellIndex = aP1; /*0x587ab0*/
          v57 = g_CellClassArray; /*0x587ab5*/
        }
        v58 = v57[17]; /*0x587aba*/
        if ( v58 == 100 || v58 == 101 ) /*0x587ac9*/
          return 1; /*0x587ac9*/
      }
      for ( i = v3[9]; ; LOWORD(i) = i + 1 ) /*0x587ade*/
      {
        v59 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&i) + 17); /*0x587af1*/
        if ( v59 < 74 || v59 > 101 ) /*0x587b00*/
          break; /*0x587b00*/
        v60 = (__int16)i + (SHIWORD(i) << 9); /*0x587b13*/
        if ( v60 >= 0x40000 || (v61 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v60)) == 0 ) /*0x587b29*/
        {
          g_Map_GlobalCellIndex = (IUnknown *)i; /*0x587b2f*/
          v61 = g_CellClassArray; /*0x587b34*/
        }
        v62 = v61[17]; /*0x587b39*/
        if ( v62 == 100 || v62 == 101 ) /*0x587b48*/
          return 1; /*0x587b48*/
      }
    }
    else
    {
      for ( i = v3[9]; ; ++HIWORD(i) ) /*0x587b58*/
      {
        v63 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&i) + 17); /*0x587b6b*/
        if ( v63 < 74 || v63 > 101 ) /*0x587b76*/
          break; /*0x587b76*/
        v64 = (__int16)i + (SHIWORD(i) << 9); /*0x587b85*/
        if ( v64 >= 0x40000 || (v65 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v64)) == 0 ) /*0x587b9b*/
        {
          g_Map_GlobalCellIndex = (IUnknown *)i; /*0x587ba1*/
          v65 = g_CellClassArray; /*0x587ba6*/
        }
        v66 = v65[17]; /*0x587bab*/
        if ( v66 == 100 || v66 == 101 ) /*0x587bba*/
          return 1; /*0x5877f8*/
      }
      for ( aP1 = (IUnknown *)v3[9]; ; --HIWORD(aP1) ) /*0x587bca*/
      {
        v67 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 17); /*0x587bdd*/
        if ( v67 < 74 || v67 > 101 ) /*0x587be8*/
          break; /*0x587be8*/
        v68 = (__int16)aP1 + (SHIWORD(aP1) << 9); /*0x587bfa*/
        if ( v68 >= 0x40000 || (v69 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_3C[4] + 4 * v68)) == 0 ) /*0x587c10*/
        {
          g_Map_GlobalCellIndex = aP1; /*0x587c16*/
          v69 = g_CellClassArray; /*0x587c1b*/
        }
        v70 = v69[17]; /*0x587c20*/
        if ( v70 == 100 || v70 == 101 ) /*0x587c2f*/
          return 1; /*0x587c2f*/
      }
    }
  }
  return 0; /*0x5877ef*/
}


// ==== 0x00587C50  ObjectClass::DiagnoseMapCheck  this=ObjectClass  sig=csp ====
char __thiscall MapCheck_Diagnostic(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax
  int Bit; // ebx
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
  char *v14; // ebp
  __int16 *v15; // edi
  __int16 *v16; // esi
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
  const char **v32; // [esp+1Ch] [ebp-8h]
  FILE *Stream; // [esp+20h] [ebp-4h]

  v1 = this; /*0x587c55*/
  v24 = 1; /*0x587c65*/
  Stream = fopen(aMapcheckTxt, aW); /*0x587c6f*/
  v2 = v1[61]; /*0x587c73*/
  v1[67] = 1; /*0x587c79*/
  v1[68] = v2; /*0x587c83*/
  v1[69] = v2 - 1; /*0x587c8f*/
  v1[70] = (v2 << 11) + v1[79] + 4; /*0x587ca4*/
  Bit = LayerClass::CellIteratorNext(v1); /*0x587caf*/
  for ( i = Bit; Bit; i = Bit )
  {
    if ( Type::CheckAmbiguity(v1, Bit, 1) )
    {
      v4 = &off_81BA88; /*0x587cd1*/
      v29 = 0; /*0x587cd6*/
      v32 = (const char **)&off_81BA88; /*0x587cde*/
      do
      {
        if ( v4 != off_81BAAC && v4 != off_81BAA0 )
        {
          v27 = dword_82A594[8 * v29 + *(_DWORD *)(Bit + 76)] == 1; /*0x587d1e*/
          v8 = 0; /*0x587d5f*/
          if ( (*(_DWORD *)(Bit + 320) & 0x100) != 0 /*0x587d59*/
            && ((v5 = *(_DWORD *)(Bit + 320) & 0x800) != 0
             && ((v6 = *(_DWORD *)(Bit + 44)) == 0 || *(__int16 *)(v6 + 38) - *(__int16 *)(Bit + 38) != 2)
             || !v5 && ((v7 = *(_DWORD *)(Bit + 44)) == 0 || *(__int16 *)(v7 + 36) - *(__int16 *)(Bit + 36) != 2)) )
          {
            v8 = 1; /*0x587d22*/
          }
          v25 = v8; /*0x587d63*/
          if ( dword_82A594[8 * v29 + *(_DWORD *)(Bit + 76)] == 1 || v8 )
          {
            v9 = v1[64]; /*0x587d71*/
            v10 = v1[63]; /*0x587d77*/
            v11 = v10 + v9 + 1; /*0x587d7d*/
            v12 = v9 - v10; /*0x587d81*/
            v13 = v1[61]; /*0x587d83*/
            v1[71] = v11; /*0x587d89*/
            v1[72] = v13 + v12; /*0x587d93*/
            v14 = (char *)MapClass::SpiralSearch(v1); /*0x587d9e*/
            if ( v14 )
            {
              v15 = (__int16 *)(Bit + 36); /*0x587da8*/
              do
              {
                v16 = (__int16 *)(v14 + 36); /*0x587db3*/
                v17 = *((__int16 *)v14 + 18) + *((__int16 *)v14 + 19); /*0x587db6*/
                v18 = *(__int16 *)(Bit + 38); /*0x587db9*/
                v19 = *v15; /*0x587dbd*/
                if ( v17 > v19 + v18 || v17 == v19 + v18 && *v16 - *((__int16 *)v14 + 19) > v19 - v18 )
                {
                  v28 = dword_82A594[8 * v29 + *((_DWORD *)v14 + 19)] == 1; /*0x587e00*/
                  v26 = 0; /*0x587e47*/
                  if ( (*((_DWORD *)v14 + 80) & 0x100) != 0 /*0x587e3e*/
                    && ((v20 = *((_DWORD *)v14 + 80) & 0x800) != 0
                     && ((v21 = *((_DWORD *)v14 + 11)) == 0 || *(__int16 *)(v21 + 38) - *((__int16 *)v14 + 19) != 2)
                     || !v20 && ((v22 = *((_DWORD *)v14 + 11)) == 0 || *(__int16 *)(v22 + 36) - *v16 != 2)) )
                  {
                    v26 = 1; /*0x587e08*/
                  }
                  if ( dword_82A594[8 * v29 + *((_DWORD *)v14 + 19)] == 1
                    && v27
                    && MapSeed::CheckTileMatch(this, v15, (__int16 *)v14 + 18, v29, 0, 0, 0)
                    && Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], v15, (__int16 *)v14 + 18, 0, 0, 0, v29) == 0x7FFFFFFF )
                  {
                    Bit = i; /*0x587e94*/
                    v24 = 0; /*0x587e9e*/
                    fprintf(
                      Stream,
                      "Failure: (%d,%d)->(%d,%d) ; (ground->ground) ; MZONE %s\n",
                      *v15,
                      *(__int16 *)(i + 38),
                      *v16,
                      *((__int16 *)v14 + 19),
                      *v32);
                  }
                  else
                  {
                    Bit = i; /*0x587ec6*/
                  }
                  if ( v26 )
                  {
                    if ( v25
                      && MapSeed::CheckTileMatch(this, v15, (__int16 *)v14 + 18, v29, 1, 1, 0)
                      && Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], v15, (__int16 *)v14 + 18, 0, 1, 1, v29) == 0x7FFFFFFF )
                    {
                      v24 = 0; /*0x587f1a*/
                      fprintf(
                        Stream,
                        "Failure: (%d,%d)->(%d,%d) ; (bridge->bridge) ; MZONE %s\n",
                        *v15,
                        *(__int16 *)(Bit + 38),
                        *v16,
                        *((__int16 *)v14 + 19),
                        *v32);
                    }
                    if ( v27
                      && MapSeed::CheckTileMatch(this, v15, (__int16 *)v14 + 18, v29, 0, 1, 0)
                      && Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], v15, (__int16 *)v14 + 18, 0, 0, 1, v29) == 0x7FFFFFFF )
                    {
                      v24 = 0; /*0x587f8a*/
                      fprintf(
                        Stream,
                        "Failure: (%d,%d)->(%d,%d) ; (ground->bridge) ; MZONE %s\n",
                        *v15,
                        *(__int16 *)(Bit + 38),
                        *v16,
                        *((__int16 *)v14 + 19),
                        *v32);
                    }
                  }
                  if ( v28
                    && v25
                    && MapSeed::CheckTileMatch(this, v15, (__int16 *)v14 + 18, v29, 1, 0, 0)
                    && Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], v15, (__int16 *)v14 + 18, 0, 1, 0, v29) == 0x7FFFFFFF )
                  {
                    v24 = 0; /*0x588002*/
                    fprintf(
                      Stream,
                      "Failure: (%d,%d)->(%d,%d) ; (bridge->ground) ; MZONE %s\n",
                      *v15,
                      *(__int16 *)(Bit + 38),
                      *v16,
                      *((__int16 *)v14 + 19),
                      *v32);
                  }
                }
                else
                {
                  Bit = i; /*0x588030*/
                }
                v14 = (char *)MapClass::SpiralSearch(this); /*0x58803d*/
              }
              while ( v14 );
              v4 = (char **)v32; /*0x588047*/
              v1 = this; /*0x58804b*/
            }
          }
        }
        ++v4; /*0x588053*/
        ++v29; /*0x58805d*/
        v32 = (const char **)v4; /*0x588061*/
      }
      while ( (int)v4 < (int)&off_81BABC );
    }
    Bit = LayerClass::CellIteratorNext(v1); /*0x588072*/
  }
  fclose(Stream); /*0x588087*/
  return v24; /*0x588093*/
}


// ==== 0x005880A0  MapClass::FindFirstFirestorm  this=MapClass  sig=csp ====
int *__stdcall MapClass::FindFirstFirestorm(int *a0, IUnknown *aP1, MouseClass *aP2, int a4)
{
  int v4; // ebx
  int v5; // edi
  __int16 v6; // di
  int v7; // esi
  unsigned int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  __int16 v17; // bx
  unsigned __int16 i; // si
  unsigned int v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // ecx
  _DWORD *v22; // eax
  int v23; // eax
  ObjectClass *v25; // eax
  MouseClass *v26; // eax
  int v27; // ebx
  double v28; // st7
  ObjectClass *v29; // edi
  int v30; // ecx
  _DWORD *v31; // ecx
  _DWORD *v32; // eax
  int v33; // eax
  __int64 v34; // [esp+Ch] [ebp-3Ch]
  IUnknown *v35; // [esp+Ch] [ebp-3Ch]
  ObjectClass *v36; // [esp+10h] [ebp-38h]
  double v37; // [esp+10h] [ebp-38h]
  ObjectClass *v38; // [esp+10h] [ebp-38h]
  __int16 v39; // [esp+1Ch] [ebp-2Ch]
  int v40; // [esp+1Ch] [ebp-2Ch]
  int v41; // [esp+20h] [ebp-28h]
  int v42; // [esp+20h] [ebp-28h]
  int v43; // [esp+24h] [ebp-24h]
  double v44; // [esp+28h] [ebp-20h]
  double v45; // [esp+30h] [ebp-18h]
  double v46; // [esp+40h] [ebp-8h]

  v4 = aP2->field_0; /*0x5880b1*/
  v5 = aP1->field_0; /*0x5880b4*/
  if ( aP1->field_0 != aP2->field_0 || (void *)aP1->field_4 != aP2->field_4 || (void *)aP1->field_8 != aP2->field_8 )
  {
    LODWORD(v34) = v5 / 256; /*0x5880f3*/
    HIDWORD(v34) = v4 / 256; /*0x5880f7*/
    if ( (unsigned __int16)(v5 / 256) == (unsigned __int16)(v4 / 256) )
    {
      LOWORD(v34) = v5 / 256; /*0x588104*/
      WORD1(v34) = aP1->field_4 / 256; /*0x58811a*/
      v6 = WORD1(v34); /*0x588138*/
      v7 = (int)aP2->field_4 / 256; /*0x588141*/
      v39 = SWORD1(v34) >= (unsigned __int16)v7 ? -1 : 1;
      while ( (_WORD)v34 != WORD2(v34) || v6 != (_WORD)v7 ) /*0x58815d*/
      {
        v8 = (__int16)v34 + (v6 << 9); /*0x58816c*/
        if ( v8 < 0x40000 && (v9 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v8)) != 0 ) /*0x588182*/
        {
          v10 = v9; /*0x588184*/
        }
        else
        {
          v10 = g_CellClassArray; /*0x58818c*/
          g_Map_GlobalCellIndex = (IUnknown *)v34; /*0x588191*/
        }
        v11 = Cell::IsBridge(v10); /*0x588196*/
        if ( v11 ) /*0x58819d*/
        {
          if ( *(_BYTE *)(v11[328] + 5824) ) /*0x5881a5*/
          {
            v12 = v11[135]; /*0x5881af*/
            if ( *(_BYTE *)(v12 + 506) ) /*0x5881b5*/
            {
              if ( v12 != a4 ) /*0x5881c2*/
              {
                v13 = (__int16)v34; /*0x5881d0*/
                goto LABEL_31; /*0x5881d3*/
              }
            }
          }
        }
        v6 += v39; /*0x5881c4*/
        WORD1(v34) = v6; /*0x5881c9*/
      }
    }
    else
    {
      v14 = aP1->field_4; /*0x5881d8*/
      v15 = (int)aP2->field_4; /*0x5881ec*/
      v16 = v15 / 256; /*0x588202*/
      v41 = v15 / 256; /*0x588208*/
      if ( (unsigned __int16)(v14 / 256) == (unsigned __int16)(v15 / 256) )
      {
        WORD1(v34) = v14 / 256; /*0x588223*/
        v6 = WORD1(v34); /*0x588234*/
        v17 = (__int16)v34 >= SWORD2(v34) ? -1 : 1;
        for ( i = v34; __PAIR32__(i, v16) != *(_DWORD *)((char *)&v34 + 2); LOWORD(v34) = i ) /*0x58823d*/
        {
          v19 = (__int16)i + (SWORD1(v34) << 9); /*0x588259*/
          if ( v19 < 0x40000 && (v20 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v19)) != 0 ) /*0x58826f*/
          {
            v21 = v20; /*0x588271*/
          }
          else
          {
            v21 = g_CellClassArray; /*0x588279*/
            g_Map_GlobalCellIndex = (IUnknown *)v34; /*0x58827e*/
          }
          v22 = Cell::IsBridge(v21); /*0x588283*/
          if ( v22 ) /*0x58828a*/
          {
            if ( *(_BYTE *)(v22[328] + 5824) ) /*0x588292*/
            {
              v23 = v22[135]; /*0x58829c*/
              if ( *(_BYTE *)(v23 + 506) ) /*0x5882a2*/
              {
                if ( v23 != a4 ) /*0x5882af*/
                {
                  v13 = (__int16)i; /*0x5882bf*/
LABEL_31:
                  *a0 = (v13 << 8) + 128; /*0x5882c2*/
                  a0[1] = (v6 << 8) + 128; /*0x5882e0*/
                  a0[2] = 0; /*0x5882e3*/
                  return a0; /*0x5882ec*/
                }
              }
            }
          }
          LOWORD(v16) = v41; /*0x5882b1*/
          i += v17; /*0x5882b5*/
        }
      }
      else
      {
        v43 = v5 >= v4 ? -256 : 256;
        v40 = v14 >= v15 ? -256 : 256;
        if ( v43 >= 0 ) /*0x588321*/
          v25 = (ObjectClass *)(v5 - v5 % 256 + 256); /*0x58834d*/
        else
          v25 = (ObjectClass *)(v5 - v5 % 256); /*0x588335*/
        v36 = v25; /*0x588352*/
        if ( v40 >= 0 ) /*0x58835e*/
          v26 = (MouseClass *)(v14 - v14 % 256 + 256); /*0x58838e*/
        else
          v26 = (MouseClass *)(v14 - v14 % 256); /*0x588372*/
        v35 = (IUnknown *)v26; /*0x588374*/
        v42 = v4 - v5; /*0x58839b*/
        v27 = (int)v36; /*0x58839f*/
        v28 = (double)v42; /*0x5883a3*/
        v44 = (double)(int)&v36->__pad_0[-v5] / v28; /*0x5883bb*/
        v37 = (double)(v15 - v14); /*0x5883c7*/
        v45 = (double)((int)v26 - v14) / v37; /*0x5883d1*/
        v46 = 1.0 / v37; /*0x5883ef*/
        while ( (v44 <= 1.0 || v45 <= 1.0) && v44 >= 0.0 && v45 >= 0.0 ) /*0x58843d*/
        {
          v29 = (ObjectClass *)v35; /*0x588445*/
          v30 = v27 / 256 + (((int)v35 / 256) << 9); /*0x58846a*/
          if ( v30 < 0 /*0x588481*/
            || v30 >= *(int *)&stru_87C374.__pad_14B0[8452]
            || (v31 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v30)) == 0 )
          {
            LOWORD(v38) = v27 / 256; /*0x588483*/
            HIWORD(v38) = (int)v35 / 256; /*0x588488*/
            v31 = g_CellClassArray; /*0x588491*/
            g_Map_GlobalCellIndex = (IUnknown *)v38; /*0x588496*/
          }
          v32 = Cell::IsBridge(v31); /*0x58849b*/
          if ( v32 ) /*0x5884a2*/
          {
            if ( *(_BYTE *)(v32[328] + 5824) ) /*0x5884aa*/
            {
              v33 = v32[135]; /*0x5884b4*/
              if ( *(_BYTE *)(v33 + 506) ) /*0x5884ba*/
              {
                if ( v33 != a4 ) /*0x5884c7*/
                {
                  *a0 = v27; /*0x588528*/
                  a0[1] = (int)v35; /*0x58852a*/
                  a0[2] = 0; /*0x58852d*/
                  return a0; /*0x588536*/
                }
              }
            }
          }
          if ( v44 >= v45 ) /*0x5884d6*/
          {
            v35 = (IUnknown *)((char *)v35 + v40); /*0x588505*/
            v45 = (double)(int)&v29->__pad_0[v40 - aP1->field_4] * v46; /*0x588518*/
          }
          else
          {
            v27 += v43; /*0x5884df*/
            v44 = (double)(v27 - aP1->field_0) * (1.0 / v28); /*0x5884f3*/
          }
        }
      }
    }
  }
  *a0 = dword_ABDC10; /*0x588547*/
  a0[1] = dword_ABDC14; /*0x58854f*/
  a0[2] = dword_ABDC18; /*0x588558*/
  return a0; /*0x5882e6*/
}


// ==== 0x00588570  globalHelper  this=-  sig=csp ====
char __stdcall globalHelper_088570(MouseClass *aP0, VectorClass *aP1, MouseClass *aP2)
{
  char v3; // cl
  MouseClass *v4; // ebp
  int v5; // eax
  _WORD *v6; // edi
  unsigned int v7; // esi
  _DWORD *v8; // ecx
  VectorClass *v9; // edx
  _DWORD *v10; // esi
  _DWORD *v11; // ecx
  int v12; // ebx
  __int16 v13; // si
  int *v14; // eax
  int v15; // edx
  int v17; // [esp+10h] [ebp-28h]
  int v18; // [esp+14h] [ebp-24h]
  __int16 v19; // [esp+16h] [ebp-22h]
  IUnknown *v20; // [esp+18h] [ebp-20h]
  int i; // [esp+24h] [ebp-14h]
  int v22; // [esp+28h] [ebp-10h]
  _DWORD v23[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v3 = 0; /*0x588575*/
  for ( i = 0; i < 8; i += 2 ) /*0x588579*/
  {
    v4 = aP2; /*0x588581*/
    v18 = 0; /*0x588585*/
    v5 = *(int *)&aP2->__pad_1D4[996] >> 8; /*0x588595*/
    v17 = aP0->field_0; /*0x58859a*/
    v22 = v5; /*0x58859e*/
    if ( v5 > 0 ) /*0x5885a2*/
    {
      v6 = (_WORD *)(4 * (v3 & 7) + 9041544); /*0x5885ab*/
      while ( 1 ) /*0x5885c3*/
      {
        HIWORD(v20) = HIWORD(v17) + v6[1]; /*0x5885c3*/
        LOWORD(v20) = v17 + *v6; /*0x5885c8*/
        v17 = (int)v20; /*0x5885da*/
        v7 = (SHIWORD(v20) << 9) + (__int16)v20; /*0x5885de*/
        if ( v7 >= 0x40000 || (v8 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v7)) == 0 ) /*0x5885f7*/
        {
          g_Map_GlobalCellIndex = v20; /*0x5885f9*/
          v8 = g_CellClassArray; /*0x5885ff*/
        }
        v5 = (int)Cell::IsBridge(v8); /*0x588604*/
        if ( v5 ) /*0x58860b*/
        {
          if ( *(_BYTE *)(*(_DWORD *)(v5 + 1312) + 5824) ) /*0x588613*/
          {
            v9 = *(VectorClass **)(v5 + 540); /*0x58861d*/
            LOBYTE(v5) = (_BYTE)aP1; /*0x588623*/
            if ( v9 == aP1 ) /*0x588629*/
              break; /*0x588629*/
          }
        }
        if ( v7 < 0x40000 && (v10 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v7)) != 0 ) /*0x588641*/
        {
          v11 = v10; /*0x588643*/
        }
        else
        {
          g_Map_GlobalCellIndex = v20; /*0x588647*/
          v11 = g_CellClassArray; /*0x58864d*/
        }
        LOBYTE(v5) = CellClass::IsPassable( /*0x58865f*/
                       (int)v11,
                       *(IUnknown **)&aP2->__pad_1D4[1192],
                       (IUnknown *)aP2,
                       (IUnknown *)aP1);
        if ( (_BYTE)v5 ) /*0x588666*/
        {
          LOBYTE(v5) = ++v18; /*0x588674*/
          if ( v18 < v22 ) /*0x58867b*/
            continue; /*0x58867b*/
        }
        goto LABEL_21; /*0x58867b*/
      }
      v12 = v18; /*0x588686*/
      if ( v18 > 0 ) /*0x58868c*/
      {
        v13 = *v6 + LOWORD(aP0->field_0); /*0x5886ae*/
        v19 = HIWORD(aP0->field_0) + v6[1]; /*0x5886b4*/
        while ( 1 ) /*0x5886ca*/
        {
          v14 = (int *)(*(int (__thiscall **)(MouseClass *, VectorClass *))(v4->field_0 + 140))(v4, aP1); /*0x5886ca*/
          v23[1] = (v19 << 8) + 128; /*0x5886ef*/
          v23[0] = (v13 << 8) + 128; /*0x5886f7*/
          v15 = *v14; /*0x5886fb*/
          v23[2] = 0; /*0x588700*/
          (*(void (__thiscall **)(int *, _DWORD *, _DWORD))(v15 + 216))(v14, v23, 0); /*0x588708*/
          LOWORD(v5) = v19 + v6[1]; /*0x588718*/
          v13 += *v6; /*0x588725*/
          --v12; /*0x588729*/
          v19 = v5; /*0x58872a*/
          if ( !v12 ) /*0x58872e*/
            break; /*0x58872e*/
          v4 = aP2; /*0x5886bc*/
        }
      }
    }
LABEL_21:
    v3 = i + 2; /*0x588730*/
  }
  return v5; /*0x588744*/
}


// ==== 0x00588750  ScanBuildingPlacementCells  this=-  sig=csp ====
int __stdcall ScanBuildingPlacementCells(MouseClass *aP0, VectorClass *aP1, MouseClass *aP2)
{
  MouseClass *v3; // edi
  int result; // eax
  int v5; // ebp
  int v6; // esi
  _WORD *v7; // ebx
  unsigned int v8; // eax
  _DWORD *v9; // ecx
  int v10; // ecx
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  int v13; // ebp
  __int16 v14; // si
  int v15; // eax
  int v16; // [esp+4h] [ebp-2Ch]
  IUnknown *v17; // [esp+8h] [ebp-28h]
  int v18; // [esp+Ch] [ebp-24h]
  int v19; // [esp+10h] [ebp-20h]
  __int16 v20; // [esp+12h] [ebp-1Eh]
  int i; // [esp+1Ch] [ebp-14h]
  int v22; // [esp+20h] [ebp-10h]
  _DWORD v23[3]; // [esp+24h] [ebp-Ch] BYREF

  v3 = aP2; /*0x588754*/
  result = *(_DWORD *)&aP2->__pad_1D4[3200]; /*0x588758*/
  v22 = result; /*0x588760*/
  if ( !result ) /*0x588764*/
    return result; /*0x588764*/
  LOBYTE(result) = 0; /*0x58876b*/
  for ( i = 0; i < 8; i += 2 ) /*0x58876f*/
  {
    v5 = *(int *)&v3->__pad_1D4[996] >> 8; /*0x58877d*/
    v6 = aP0->field_0; /*0x588780*/
    v19 = v5; /*0x588782*/
    v18 = aP0->field_0; /*0x588788*/
    v16 = 0; /*0x58878c*/
    if ( v5 <= 0 ) /*0x588794*/
      goto LABEL_24; /*0x588794*/
    v7 = (_WORD *)(4 * (result & 7) + 9041544); /*0x58879d*/
    while ( 1 ) /*0x5887b3*/
    {
      LOWORD(v17) = v6 + *v7; /*0x5887b3*/
      HIWORD(v17) = HIWORD(v18) + v7[1]; /*0x5887b8*/
      v8 = (SHIWORD(v17) << 9) + (__int16)v17; /*0x5887ca*/
      HIWORD(v18) = HIWORD(v17); /*0x5887d0*/
      LOWORD(v6) = (_WORD)v17; /*0x5887d0*/
      if ( v8 >= 0x40000 || (v9 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v8)) == 0 ) /*0x5887e8*/
      {
        g_Map_GlobalCellIndex = v17; /*0x5887ea*/
        v9 = g_CellClassArray; /*0x5887f0*/
      }
      v10 = v9[17]; /*0x5887f5*/
      if ( v10 == -1 ) /*0x5887fb*/
        goto LABEL_15; /*0x5887fb*/
      if ( *(_DWORD *)(v22 + 660) == v10 ) /*0x588807*/
      {
        if ( v8 >= 0x40000 || (v11 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v8)) == 0 ) /*0x58881f*/
        {
          g_Map_GlobalCellIndex = v17; /*0x588821*/
          v11 = g_CellClassArray; /*0x588827*/
        }
        if ( aP1[3].vtable0 == (void *)v11[20] ) /*0x588836*/
          break; /*0x588836*/
      }
      v5 = v19; /*0x588838*/
LABEL_15:
      if ( v8 >= 0x40000 || (v12 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v8)) == 0 ) /*0x588852*/
      {
        g_Map_GlobalCellIndex = v17; /*0x588854*/
        v12 = g_CellClassArray; /*0x58885a*/
      }
      if ( CellClass::IsPassable((int)v12, *(IUnknown **)&v3->__pad_1D4[1192], (IUnknown *)v3, (IUnknown *)aP1) ) /*0x58886e*/
      {
        if ( ++v16 < v5 ) /*0x588886*/
          continue; /*0x588886*/
      }
      goto LABEL_24; /*0x588886*/
    }
    v13 = v16; /*0x588891*/
    if ( v16 > 0 ) /*0x588897*/
    {
      v14 = LOWORD(aP0->field_0) + *v7; /*0x5888bb*/
      v20 = HIWORD(aP0->field_0) + v7[1]; /*0x5888bf*/
      do /*0x588933*/
      {
        v15 = (*(int (__thiscall **)(MouseClass *, VectorClass *))(v3->field_0 + 140))(v3, aP1); /*0x5888ce*/
        v23[2] = 0; /*0x5888ea*/
        v23[0] = (v14 << 8) + 128; /*0x5888f5*/
        v23[1] = (v20 << 8) + 128; /*0x588903*/
        (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v15 + 216))(v15, v23, 0); /*0x58890c*/
        v3 = aP2; /*0x58891c*/
        v14 += *v7; /*0x58892a*/
        --v13; /*0x58892e*/
        v20 += v7[1]; /*0x58892f*/
      }
      while ( v13 ); /*0x588933*/
    }
LABEL_24:
    result = i + 2; /*0x588935*/
  }
  return result; /*0x58894c*/
}


// ==== 0x00588960  ObjectClass::Object_Create  this=ObjectClass  sig=csp ====
int __thiscall sub_588960(_DWORD *this, int a2)
{
  int v2; // eax
  int result; // eax

  v2 = this->__pad_148; /*0x588960*/
  if ( v2 >= a2 ) /*0x58896c*/
    v2 = a2; /*0x58896e*/
  this->__pad_148 = v2; /*0x588972*/
  result = v2 <= 0 ? 0 : v2;
  this->__pad_148 = result; /*0x588980*/
  return result; /*0x588986*/
}


// ==== 0x00588990  ScenarioClass::CalcMinShroudLevel  this=ScenarioClass  sig=csp ====
int __thiscall sub_588990(_DWORD *this)
{
  int v1; // edi
  int i; // esi
  int v3; // eax
  int v4; // eax

  if ( (int)this->q148 >= 13 )
  {
    v1 = this->q140; /*0x58899d*/
    for ( i = 0; i < v1; ++i )
    {
      v3 = *(_DWORD *)(this->q13C + 4 * i); /*0x5889af*/
      if ( v3 )
      {
        v4 = *(char *)(v3 + 283); /*0x5889b6*/
        if ( this->q148 < v4 ) /*0x5889c5*/
          v4 = this->q148; /*0x5889c7*/
        this->q148 = v4; /*0x5889cb*/
        this->q148 = v4 <= 0 ? 0 : v4;
      }
    }
  }
  return this->q148; /*0x5889ea*/
}


// ==== 0x005889F0  globalHelper_0889F0  this=-  sig=ida-proto ====
int __fastcall sub_5889F0(int a1, int a2)
{
  int *v2; // ebx
  int *v3; // edi
  char v4; // dl
  int *v5; // esi
  int v6; // ecx
  int v7; // eax
  int v9; // [esp+10h] [ebp-1Ch]
  int v10; // [esp+14h] [ebp-18h]
  int v11; // [esp+18h] [ebp-14h]
  int v12; // [esp+1Ch] [ebp-10h]
  int v13; // [esp+20h] [ebp-Ch]

  v13 = -1; /*0x588a01*/
  v12 = 0; /*0x588a09*/
  v10 = 0; /*0x588a0d*/
  v2 = dword_82A594; /*0x588a11*/
  do /*0x588aa9*/
  {
    v3 = &dword_82A594[8 * a2]; /*0x588a28*/
    v4 = 1; /*0x588a2e*/
    v9 = 0; /*0x588a30*/
    v5 = &dword_82A594[8 * a1]; /*0x588a34*/
    v11 = 8; /*0x588a3a*/
    do /*0x588a7c*/
    {
      v6 = *v3; /*0x588a44*/
      v7 = *v2; /*0x588a46*/
      if ( (*v5 == 2 || v6 == 2) && v7 == 1 ) /*0x588a55*/
        v4 = 0; /*0x588a57*/
      if ( *v5 == v7 && v6 == v7 && v7 == 1 ) /*0x588a64*/
        ++v9; /*0x588a66*/
      ++v5; /*0x588a6e*/
      ++v3; /*0x588a71*/
      ++v2; /*0x588a74*/
      --v11; /*0x588a78*/
    }
    while ( v11 ); /*0x588a7c*/
    if ( v4 && v9 > v12 ) /*0x588a8c*/
    {
      v12 = v9; /*0x588a8e*/
      v13 = v10; /*0x588a96*/
    }
    ++v10; /*0x588aa5*/
  }
  while ( (int)v2 < (int)dword_82A734 ); /*0x588aa9*/
  return v13; /*0x588ab3*/
}


// ==== 0x00588AC0  LayerClass::ClearFactoryCellAssignments  this=LayerClass  sig=csp ====
int __thiscall sub_588AC0(_DWORD *this)
{
  _DWORD *v1; // ebp
  int v2; // eax
  int result; // eax
  int v4; // ecx
  int v5; // ebx
  int v6; // ecx
  int v7; // edi
  int i; // edx
  unsigned int v9; // eax
  _DWORD *v10; // eax
  int v11; // [esp+4h] [ebp-10h]
  int v13; // [esp+Ch] [ebp-8h]
  __int16 v14; // [esp+Ch] [ebp-8h]
  __int16 v15; // [esp+Eh] [ebp-6h]

  v1 = this; /*0x588ac4*/
  v2 = this->q0F4; /*0x588aca*/
  this->q10C = 1; /*0x588ad0*/
  this->q110 = v2; /*0x588ada*/
  this->q114 = v2 - 1; /*0x588ae3*/
  this->q118 = (v2 << 11) + this->q13C + 4; /*0x588af8*/
  for ( result = LayerClass::CellIteratorNext(this); result; result = LayerClass::CellIteratorNext(v1) ) /*0x588b05*/
  {
    v4 = *(_DWORD *)(result + 72); /*0x588b0e*/
    if ( v4 != -1 ) /*0x588b14*/
    {
      v5 = *((_DWORD *)MEMORY[0xA8EC1C] + v4); /*0x588b20*/
      v13 = *(_DWORD *)(result + 36); /*0x588b28*/
      v6 = *(_DWORD *)(v5 + 664); /*0x588b32*/
      v14 = v13 - *(unsigned __int8 *)(result + 287) % v6; /*0x588b47*/
      v7 = 0; /*0x588b4c*/
      v15 = HIWORD(v13) - *(unsigned __int8 *)(result + 287) / v6; /*0x588b4e*/
      if ( *(int *)(v5 + 668) > 0 ) /*0x588b5b*/
      {
        do /*0x588bc4*/
        {
          for ( i = 0; i < v6; ++i ) /*0x588b65*/
          {
            v9 = ((__int16)(v7 + v15) << 9) + (__int16)(i + v14); /*0x588b83*/
            if ( v9 >= 0x40000 || (v10 = *(_DWORD **)(MEMORY[0x87F924] + 4 * v9)) == 0 ) /*0x588b99*/
            {
              LOWORD(v11) = i + v14; /*0x588b7b*/
              HIWORD(v11) = v7 + v15; /*0x588b70*/
              g_Map_GlobalCellIndex = v11; /*0x588b9f*/
              v10 = g_CellClassArray; /*0x588ba4*/
            }
            v10[18] = -1; /*0x588ba9*/
            v6 = *(_DWORD *)(v5 + 664); /*0x588bb0*/
          }
          ++v7; /*0x588bc1*/
        }
        while ( v7 < *(_DWORD *)(v5 + 668) ); /*0x588bc4*/
        v1 = this; /*0x588bc6*/
      }
    }
  }
  return result; /*0x588bdc*/
}


// ==== 0x00588BF0  MapClass::Destru_vt04  this=MapClass  sig=csp ====
MapClass *__thiscall MapClass::Destru_vt04(char *Block, char a2)
{
  MapClass::Destruct(Block); /*0x588bf3*/
  if ( (a2 & 1) != 0 ) /*0x588bfd*/
    __3_YAXPAX_Z(Block); /*0x588c00*/
  return (MapClass *)Block; /*0x588c0a*/
}


// ==== 0x00588C10  CellClass::CopyNeighborData  this=CellClass  sig=csp ====
int __thiscall sub_588C10(int this, int a2)
{
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16); /*0x588c19*/
  *(_BYTE *)(this + 20) = *(_BYTE *)(a2 + 20); /*0x588c1f*/
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24); /*0x588c25*/
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28); /*0x588c2b*/
  *(_BYTE *)(this + 32) = *(_BYTE *)(a2 + 32); /*0x588c31*/
  return this; /*0x588c34*/
}


// ==== 0x00588C40  CellClass::initCellData  this=CampaignClass  sig=csp ====
_WORD *__thiscall CellClass::initCellData(_WORD *this, MouseClass *aP1)
{
  *this += LOWORD(aP1->field_0); /*0x588c49*/
  this->vtable2 += HIWORD(aP1->field_0); /*0x588c50*/
  return this; /*0x588c54*/
}


// ==== 0x00588C60  CellStruct::Sub  this=CellStruct  sig=csp ====
IUnknown *__thiscall CellStruct::Sub(__int16 *this, IUnknown *aP1, IUnknown *aP2)
{
  __int16 v3; // dx
  __int16 v4; // cx
  IUnknown *aP2a; // [esp+8h] [ebp+8h]

  v3 = *this; /*0x588c60*/
  v4 = this->q004 - HIWORD(aP2->field_0); /*0x588c6e*/
  LOWORD(aP2a) = v3 - LOWORD(aP2->field_0); /*0x588c76*/
  HIWORD(aP2a) = v4; /*0x588c7b*/
  aP1->field_0 = (int)aP2a; /*0x588c84*/
  return aP1; /*0x588c86*/
}


// ==== 0x00588C90  ?$DynamicVectorClass@USubzoneConnectionStruct@@::CleanupSubzone  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_CleanupSubzone(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x588c96*/
  *(_DWORD *)(this + 16) = 0; /*0x588c99*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x588ca0*/
  {
    __3_YAXPAX_Z(v2); /*0x588ca6*/
    *(_DWORD *)(this + 4) = 0; /*0x588cae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x588cb1*/
  *(_DWORD *)(this + 8) = 0; /*0x588cb4*/
}


// ==== 0x00588CC0  _DynamicVectorClass_USubzoneConnectionStruct::Remove  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_SubzoneConn::Remove(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x588cc0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x588cd5*/
  else
    return 0; /*0x588cc7*/
}


// ==== 0x00588CE0  _DynamicVectorClass_UZoneConnectionClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall unknown::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x588ce6*/
  *(_DWORD *)(this + 16) = 0; /*0x588ce9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x588cf0*/
  {
    __3_YAXPAX_Z(v2); /*0x588cf6*/
    *(_DWORD *)(this + 4) = 0; /*0x588cfe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x588d01*/
  *(_DWORD *)(this + 8) = 0; /*0x588d04*/
}


// ==== 0x00588D10  _DynamicVectorClass_UZoneConnectionClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall unknown::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x588d10*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x588d25*/
  else
    return 0; /*0x588d17*/
}


// ==== 0x00588D30  _VectorClass_UZoneConnectionClass::Seek  this=VectorClass  sig=csp ====
int __thiscall unknown::_vt06(_DWORD *this, int a2, int a3)
{
  int v3; // edx

  v3 = this->Items + 16 * a3; /*0x588d3a*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x588d42*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4); /*0x588d47*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v3 + 8); /*0x588d4d*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v3 + 12); /*0x588d53*/
  return a2; /*0x588d56*/
}


// ==== 0x00588D60  _DynamicVectorClass_USubzoneTrackingStruct::ClearAndFree  this=DynamicVector  sig=csp ====
void __thiscall MapClass::sub_588D60(int this)
{
  int v2; // ecx
  int v3; // eax
  void *v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // ebp
  void *v9; // eax
  void *v10; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)(this + 4); /*0x588d67*/
  *(_DWORD *)(this + 16) = 0; /*0x588d6a*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x588d71*/
  {
    v3 = *(_DWORD *)(v2 - 4); /*0x588d7a*/
    v4 = (void *)(v2 - 4); /*0x588d7d*/
    v10 = (void *)(v2 - 4); /*0x588d81*/
    v5 = 9 * v3; /*0x588d85*/
    v6 = v3 - 1; /*0x588d88*/
    v7 = v2 + 4 * v5; /*0x588d89*/
    if ( v6 >= 0 ) /*0x588d8c*/
    {
      v8 = v6 + 1; /*0x588d8f*/
      do /*0x588dba*/
      {
        v9 = *(void **)(v7 - 32); /*0x588d92*/
        v7 -= 36; /*0x588d95*/
        *(_DWORD *)v7 = &vt_VectorClass_SubzoneConnectionStruct; /*0x588d9a*/
        if ( v9 && *(_BYTE *)(v7 + 13) ) /*0x588da2*/
        {
          __3_YAXPAX_Z(v9); /*0x588da8*/
          *(_DWORD *)(v7 + 4) = 0; /*0x588db0*/
        }
        --v8; /*0x588db3*/
        *(_BYTE *)(v7 + 13) = 0; /*0x588db4*/
        *(_DWORD *)(v7 + 8) = 0; /*0x588db7*/
      }
      while ( v8 ); /*0x588dba*/
      v4 = v10; /*0x588dbc*/
    }
    __3_YAXPAX_Z(v4); /*0x588dc2*/
    *(_DWORD *)(this + 4) = 0; /*0x588dcb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x588dce*/
  *(_DWORD *)(this + 8) = 0; /*0x588dd1*/
}


// ==== 0x00588DE0  ?$DynamicVectorClass@USubzoneTrackingStruct@@::initCellVectors  this=DynamicVector  sig=csp ====
unsigned int __thiscall MapClass::sub_588DE0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x588de0*/
    return (a2 - *(_DWORD *)(this + 4)) / 0x24u; /*0x588dfe*/
  else
    return 0; /*0x588de7*/
}


// ==== 0x00588E10  _VectorClass_USubzoneTrackingStruct::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_USubzoneTrackingStruct::_vt06(_DWORD *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  char *v5; // eax
  char *v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx

  v3 = this->Items + 36 * a3; /*0x588e23*/
  *(_DWORD *)(a2 + 4) = 0; /*0x588e29*/
  *(_DWORD *)(a2 + 8) = 0; /*0x588e2c*/
  *(_BYTE *)(a2 + 12) = 1; /*0x588e2f*/
  *(_BYTE *)(a2 + 13) = 0; /*0x588e33*/
  *(_DWORD *)a2 = &vt_VectorClass_SubzoneConnectionStruct; /*0x588e36*/
  if ( a2 != v3 ) /*0x588e3c*/
  {
    VectorClass::Cleanup5(a2); /*0x588e40*/
    v4 = *(_DWORD *)(v3 + 8); /*0x588e46*/
    *(_DWORD *)(a2 + 8) = v4; /*0x588e4b*/
    if ( v4 ) /*0x588e4e*/
    {
      v5 = (char *)__2_YAPAXI_Z(8 * v4); /*0x588e58*/
      if ( v5 ) /*0x588e62*/
      {
        v6 = v5; /*0x588e67*/
        if ( v4 - 1 >= 0 ) /*0x588e6b*/
        {
          v7 = v4; /*0x588e6d*/
          do /*0x588e77*/
          {
            *(_DWORD *)v6 = 0; /*0x588e6e*/
            v6[4] = 0; /*0x588e70*/
            v6 += 8; /*0x588e73*/
            --v7; /*0x588e76*/
          }
          while ( v7 ); /*0x588e77*/
        }
      }
      else
      {
        v5 = 0; /*0x588e7b*/
      }
      *(_DWORD *)(a2 + 4) = v5; /*0x588e7f*/
      if ( v5 ) /*0x588e82*/
      {
        v8 = *(_DWORD *)(a2 + 8); /*0x588e84*/
        v9 = 0; /*0x588e87*/
        *(_BYTE *)(a2 + 13) = 1; /*0x588e8b*/
        if ( v8 > 0 ) /*0x588e8f*/
        {
          do /*0x588eab*/
          {
            v10 = *(_DWORD *)(v3 + 4); /*0x588e91*/
            v11 = *(_DWORD *)(a2 + 4); /*0x588e94*/
            *(_DWORD *)(v11 + 8 * v9) = *(_DWORD *)(v10 + 8 * v9); /*0x588e9a*/
            *(_DWORD *)(v11 + 8 * v9 + 4) = *(_DWORD *)(v10 + 8 * v9 + 4); /*0x588ea1*/
            ++v9; /*0x588ea8*/
          }
          while ( v9 < *(_DWORD *)(a2 + 8) ); /*0x588eab*/
        }
      }
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 0; /*0x588eaf*/
      *(_BYTE *)(a2 + 13) = 0; /*0x588eb2*/
    }
  }
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v3 + 16); /*0x588eb9*/
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(v3 + 20); /*0x588ebf*/
  *(_DWORD *)a2 = &vt_DynamicVectorClass_SubzoneConnectionStruct; /*0x588ec2*/
  *(_WORD *)(a2 + 24) = *(_WORD *)(v3 + 24); /*0x588ecc*/
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(v3 + 28); /*0x588ed3*/
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(v3 + 32); /*0x588ed9*/
  return a2; /*0x588eb8*/
}


// ==== 0x00588EF0  _VectorClass_PAVCellClass::InitCellVe_vt06  this=VectorClass  sig=csp ====
int __thiscall MapClass::InitCellVe_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x588efa*/
}


// ==== 0x00588F00  _DynamicVectorClass_W4PassabilityType::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_W4PassabilityType::sub_588F00(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x588f06*/
  *(_DWORD *)(this + 16) = 0; /*0x588f09*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x588f10*/
  {
    __3_YAXPAX_Z(v2); /*0x588f16*/
    *(_DWORD *)(this + 4) = 0; /*0x588f1e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x588f21*/
  *(_DWORD *)(this + 8) = 0; /*0x588f24*/
}


// ==== 0x00588F30  _DynamicVectorClass_W4PassabilityType::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_W4PassabilityType::sub_588F30(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x588f30*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x588f45*/
  else
    return 0; /*0x588f37*/
}


// ==== 0x00588F50  _VectorClass_W4PassabilityType::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x588f5a*/
}


// ==== 0x00588F60  _DynamicVectorClass_U_HashObject_II::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_W4PassabilityType::sub_588F60(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x588f66*/
  *(_DWORD *)(this + 16) = 0; /*0x588f69*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x588f70*/
  {
    __3_YAXPAX_Z(v2); /*0x588f76*/
    *(_DWORD *)(this + 4) = 0; /*0x588f7e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x588f81*/
  *(_DWORD *)(this + 8) = 0; /*0x588f84*/
}


// ==== 0x00588F90  _DynamicVectorClass_U_HashObject_II::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_W4PassabilityType::sub_588F90(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x588f90*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x588fa5*/
  else
    return 0; /*0x588f97*/
}


// ==== 0x00588FB0  _VectorClass_U_HashObject_II::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UHashObject_uint_uint::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = this->Items; /*0x588fb0*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x588fb7*/
  v5 = v3 + 8 * a3; /*0x588fba*/
  *a2 = v4; /*0x588fc1*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x588fc6*/
  return a2; /*0x588fc9*/
}


// ==== 0x00588FD0  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::Destroy_1  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_W4PassabilityType::sub_588FD0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x588fd6*/
  *(_DWORD *)(this + 16) = 0; /*0x588fd9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x588fe0*/
  {
    __3_YAXPAX_Z(v2); /*0x588fe6*/
    *(_DWORD *)(this + 4) = 0; /*0x588fee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x588ff1*/
  *(_DWORD *)(this + 8) = 0; /*0x588ff4*/
}


// ==== 0x00589000  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::GetItemIndex_1  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_W4PassabilityType::sub_589000(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x589000*/
    return (a2 - *(_DWORD *)(this + 4)) / 0xCu; /*0x58901e*/
  else
    return 0; /*0x589007*/
}


// ==== 0x00589030  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UHashObject_uint_SubzoneConn::_vt06(_DWORD *this, int a2, int a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx

  v3 = this->Items; /*0x589034*/
  v4 = *(_DWORD *)(v3 + 12 * a3); /*0x58903a*/
  v5 = v3 + 12 * a3; /*0x58903d*/
  *(_DWORD *)a2 = v4; /*0x589044*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v5 + 4); /*0x589049*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v5 + 8); /*0x58904f*/
  return a2; /*0x589052*/
}


// ==== 0x00589060  ?$VectorClass@PAVCellClass@@::InitCellVe_vt00  this=VectorClass  sig=csp ====
VectorClass *__thiscall MapClass::InitCellVe_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x589063*/
  *Block = &vt_VectorClass_CellClass; /*0x589066*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x589070*/
  {
    __3_YAXPAX_Z(v3); /*0x589078*/
    *(Block + 1) = 0; /*0x589080*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x58908b*/
  *(Block + 2) = 0; /*0x589091*/
  if ( (a2 & 1) != 0 ) /*0x589098*/
    __3_YAXPAX_Z(Block); /*0x58909b*/
  return (VectorClass *)Block; /*0x5890a5*/
}


// ==== 0x005890B0  _DynamicVectorClass_USubzoneConnectionStruct::Add  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall DynamicVectorClass_SubzoneConn::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5890b3*/
  *Block = &vt_VectorClass_SubzoneConnectionStruct; /*0x5890b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5890c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5890c8*/
    *(Block + 1) = 0; /*0x5890d0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5890db*/
  *(Block + 2) = 0; /*0x5890e1*/
  if ( (a2 & 1) != 0 ) /*0x5890e8*/
    __3_YAXPAX_Z(Block); /*0x5890eb*/
  return (DynamicVector *)Block; /*0x5890f5*/
}


// ==== 0x00589100  Subzone::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_589100(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char *v6; // eax
  char *v7; // ecx
  int v8; // edx

  this->Items = 0; /*0x58910d*/
  this->Capacity = a2; /*0x589110*/
  this->q030 = 1; /*0x589113*/
  this->__pad_034 = 0; /*0x589117*/
  *this = &vt_VectorClass_SubzoneConnectionStruct; /*0x58911a*/
  if ( a2 ) /*0x589120*/
  {
    if ( a3 ) /*0x589128*/
    {
      v4 = a3; /*0x58912d*/
      if ( a2 - 1 >= 0 ) /*0x589131*/
      {
        v5 = a2; /*0x589133*/
        do /*0x58913d*/
        {
          *(_DWORD *)v4 = 0; /*0x589134*/
          *(_BYTE *)(v4 + 4) = 0; /*0x589136*/
          v4 += 8; /*0x589139*/
          --v5; /*0x58913c*/
        }
        while ( v5 ); /*0x58913d*/
      }
      this->Items = a3; /*0x58913f*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(8 * a2); /*0x58914c*/
      if ( v6 ) /*0x589156*/
      {
        v7 = v6; /*0x58915b*/
        if ( a2 - 1 >= 0 ) /*0x58915f*/
        {
          v8 = a2; /*0x589161*/
          do /*0x58916b*/
          {
            *(_DWORD *)v7 = 0; /*0x589162*/
            v7[4] = 0; /*0x589164*/
            v7 += 8; /*0x589167*/
            --v8; /*0x58916a*/
          }
          while ( v8 ); /*0x58916b*/
        }
      }
      else
      {
        v6 = 0; /*0x58916f*/
      }
      this->Items = v6; /*0x589171*/
      this->__pad_034 = 1; /*0x589174*/
    }
  }
  *this = &vt_DynamicVectorClass_SubzoneConnectionStruct; /*0x589178*/
  this->__pad_014 = 10; /*0x58917e*/
  this->q010 = 0; /*0x589185*/
  return this; /*0x58918a*/
}


// ==== 0x00589190  _DynamicVectorClass_USubzoneConnectionStruct::Release  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_SubzoneConn::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x589192*/
  if ( a2 ) /*0x58919e*/
  {
    v5 = a3; /*0x5891a4*/
    this->IsInitialized = 0; /*0x5891a8*/
    if ( a3 ) /*0x5891ad*/
    {
      v9 = a3; /*0x5891e3*/
      if ( a2 - 1 >= 0 ) /*0x5891e7*/
      {
        v10 = a2; /*0x5891e9*/
        do /*0x5891f3*/
        {
          *(_DWORD *)v9 = 0; /*0x5891ea*/
          v9[4] = 0; /*0x5891ec*/
          v9 += 8; /*0x5891ef*/
          --v10; /*0x5891f2*/
        }
        while ( v10 ); /*0x5891f3*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(8 * a2); /*0x5891b7*/
      if ( v6 ) /*0x5891c1*/
      {
        v7 = v6; /*0x5891c6*/
        if ( a2 - 1 >= 0 ) /*0x5891ca*/
        {
          v8 = a2; /*0x5891cc*/
          do /*0x5891d6*/
          {
            *(_DWORD *)v7 = 0; /*0x5891cd*/
            v7[4] = 0; /*0x5891cf*/
            v7 += 8; /*0x5891d2*/
            --v8; /*0x5891d5*/
          }
          while ( v8 ); /*0x5891d6*/
        }
        v5 = v6; /*0x5891d8*/
      }
      else
      {
        v5 = 0; /*0x5891dc*/
      }
    }
    this->IsInitialized = 1; /*0x5891f7*/
    if ( !v5 ) /*0x5891fb*/
      return 0; /*0x589284*/
    if ( this->Items ) /*0x589201*/
    {
      v11 = this->DynamicVector_field_0x8; /*0x589206*/
      if ( a2 < v11 ) /*0x58920b*/
        v11 = a2; /*0x58920d*/
      v12 = 0; /*0x58920f*/
      if ( v11 > 0 ) /*0x589213*/
      {
        do /*0x589232*/
        {
          v13 = 8 * v12; /*0x589218*/
          v14 = (_DWORD *)(this->Items + 8 * v12++); /*0x589221*/
          *(_DWORD *)&v5[v13] = *v14; /*0x589228*/
          *(_DWORD *)&v5[v13 + 4] = v14[1]; /*0x58922e*/
        }
        while ( v12 < v11 ); /*0x589232*/
        v3 = a2; /*0x589234*/
      }
      if ( this->IsAllocated ) /*0x58923a*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x589243*/
        this->Items = 0; /*0x58924b*/
      }
    }
    this->Items = v5; /*0x589256*/
    this->DynamicVector_field_0x8 = v3; /*0x58925c*/
    this->IsAllocated = a3 == 0; /*0x58925f*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x589268*/
  }
  v15 = this->DynamicVector_field_0x8; /*0x58926b*/
  if ( v15 < this->Items ) /*0x589273*/
    this->Items = v15; /*0x589275*/
  return 1; /*0x589278*/
}


// ==== 0x00589290  Vector8::EraseAt  this=Vector8  sig=csp ====
char __thiscall Vector8_EraseAt(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // edx

  v2 = this->q010; /*0x589290*/
  v3 = a2; /*0x589293*/
  if ( a2 >= v2 ) /*0x589299*/
    return 0; /*0x5892c4*/
  v4 = v2 - 1; /*0x58929b*/
  this->q010 = v4; /*0x58929e*/
  if ( a2 < v4 ) /*0x5892a1*/
  {
    do /*0x5892bc*/
    {
      v5 = this->q004; /*0x5892a4*/
      ++v3; /*0x5892a7*/
      *(_DWORD *)(v5 + 8 * v3 - 8) = *(_DWORD *)(v5 + 8 * v3); /*0x5892ab*/
      *(_DWORD *)(v5 + 8 * v3 - 4) = *(_DWORD *)(v5 + 8 * v3 + 4); /*0x5892b3*/
    }
    while ( v3 < this->q010 ); /*0x5892bc*/
  }
  return 1; /*0x5892c1*/
}


// ==== 0x005892D0  _DynamicVectorClass_USubzoneConnectionStruct::GetSize  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_SubzoneConn::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x5892d0*/
  result = 0; /*0x5892d3*/
  if ( v2 <= 0 ) /*0x5892d8*/
    return -1; /*0x5892ef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; i += 2 ) /*0x5892de*/
  {
    if ( ++result >= v2 ) /*0x5892ed*/
      return -1; /*0x5892ed*/
  }
  return result; /*0x5892f2*/
}


// ==== 0x00589300  _VectorClass_UZoneConnectionClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall unknown::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _WORD *v5; // eax
  _WORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x589307*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x58930f*/
  {
    v3 = 0; /*0x589311*/
    if ( v2 <= 0 ) /*0x589315*/
      return 1; /*0x589358*/
    v4 = *(_DWORD *)(a2 + 4); /*0x589317*/
    v5 = (_WORD *)this->Items; /*0x58931a*/
    v6 = (_WORD *)(v4 + 2); /*0x58931d*/
    v7 = v4 - (_DWORD)v5; /*0x589320*/
    while ( *v5 == *(_WORD *)((char *)v5 + v7) && v5[1] == *v6 && v5[2] == v6[1] && v5[3] == v6[2] ) /*0x589346*/
    {
      ++v3; /*0x589348*/
      v6 += 8; /*0x589349*/
      v5 += 8; /*0x58934c*/
      if ( v3 >= v2 ) /*0x589351*/
        return 1; /*0x589351*/
    }
  }
  return 0; /*0x589353*/
}


// ==== 0x00589370  ?$VectorClass@UZoneConnectionClass@@::AllocateCellDataBuffer  this=VectorClass  sig=csp ====
char __thiscall MapClass::sub_589370(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // eax
  int v6; // edx
  char *v7; // ecx
  char *v8; // edi
  char *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  char *v15; // edx
  int v16; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x589373*/
  if ( !a2 ) /*0x58937f*/
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x589492*/
    return 1; /*0x589498*/
  }
  v5 = a3; /*0x589385*/
  this->IsInitialized = 0; /*0x589389*/
  if ( a3 ) /*0x58938e*/
  {
    if ( a2 - 1 >= 0 ) /*0x5893d6*/
    {
      v9 = a3 + 2; /*0x5893d8*/
      v10 = a2; /*0x5893db*/
      do /*0x5893f8*/
      {
        *((_WORD *)v9 - 1) = 0; /*0x5893df*/
        *(_WORD *)v9 = 0; /*0x5893e3*/
        *((_WORD *)v9 + 1) = 0; /*0x5893e6*/
        *((_WORD *)v9 + 2) = 0; /*0x5893ea*/
        v9[6] = 0; /*0x5893ee*/
        *(_DWORD *)(v9 + 10) = -1; /*0x5893f1*/
        v9 += 16; /*0x5893f4*/
        --v10; /*0x5893f7*/
      }
      while ( v10 ); /*0x5893f8*/
      v5 = a3; /*0x5893fa*/
    }
  }
  else
  {
    v5 = (char *)__2_YAPAXI_Z(16 * a2); /*0x589396*/
    if ( !v5 ) /*0x5893a0*/
    {
      v8 = 0; /*0x5893cd*/
      goto LABEL_14; /*0x5893cf*/
    }
    if ( a2 - 1 >= 0 ) /*0x5893a7*/
    {
      v6 = a2; /*0x5893a9*/
      v7 = v5 + 2; /*0x5893aa*/
      do /*0x5893c9*/
      {
        *((_WORD *)v7 - 1) = 0; /*0x5893b0*/
        *(_WORD *)v7 = 0; /*0x5893b4*/
        *((_WORD *)v7 + 1) = 0; /*0x5893b7*/
        *((_WORD *)v7 + 2) = 0; /*0x5893bb*/
        v7[6] = 0; /*0x5893bf*/
        *(_DWORD *)(v7 + 10) = -1; /*0x5893c2*/
        v7 += 16; /*0x5893c5*/
        --v6; /*0x5893c8*/
      }
      while ( v6 ); /*0x5893c9*/
    }
  }
  v8 = v5; /*0x5893fe*/
LABEL_14:
  this->IsInitialized = 1; /*0x589400*/
  if ( !v8 ) /*0x589406*/
    return 0; /*0x58940b*/
  if ( this->Items ) /*0x589412*/
  {
    v12 = this->Capacity; /*0x589417*/
    if ( a2 < v12 ) /*0x58941c*/
      v12 = a2; /*0x58941e*/
    if ( v12 > 0 ) /*0x589422*/
    {
      v13 = 0; /*0x589424*/
      v16 = v12; /*0x589426*/
      do /*0x589456*/
      {
        v14 = (_DWORD *)(this->Items + v13); /*0x58942f*/
        v15 = &v8[v13]; /*0x589431*/
        v13 += 16; /*0x589434*/
        *(_DWORD *)v15 = *v14; /*0x589439*/
        *((_DWORD *)v15 + 1) = v14[1]; /*0x58943e*/
        *((_DWORD *)v15 + 2) = v14[2]; /*0x589444*/
        *((_DWORD *)v15 + 3) = v14[3]; /*0x58944a*/
        --v16; /*0x589452*/
      }
      while ( v16 ); /*0x589456*/
      v3 = a2; /*0x589458*/
    }
    if ( this->IsAllocated ) /*0x58945c*/
    {
      __3_YAXPAX_Z(*((void **)this + 1)); /*0x589465*/
      this->Items = 0; /*0x58946d*/
    }
  }
  this->Items = v8; /*0x589478*/
  this->Capacity = v3; /*0x58947e*/
  this->IsAllocated = a3 == 0; /*0x589481*/
  return 1; /*0x589408*/
}


// ==== 0x005894A0  ?$VectorClass@UZoneConnectionClass@@::allocateCellArrays  this=VectorClass  sig=csp ====
void __thiscall MapClass::sub_5894A0(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5894ad*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5894b3*/
    *(_DWORD *)(this + 4) = 0; /*0x5894bb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5894be*/
  *(_DWORD *)(this + 8) = 0; /*0x5894c1*/
}


// ==== 0x005894D0  ?$VectorClass@UZoneConnectionClass@@::FindSubzoneConnectionIndex  this=VectorClass  sig=csp ====
int __thiscall MapClass::sub_5894D0(int this, _WORD *a2)
{
  int result; // eax
  int v3; // esi
  _WORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5894d0*/
    return 0; /*0x5894dc*/
  v3 = *(_DWORD *)(this + 8); /*0x5894e2*/
  result = 0; /*0x5894e5*/
  if ( v3 <= 0 ) /*0x5894e9*/
    return -1; /*0x589520*/
  for ( i = *(_WORD **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 8 ) /*0x5894ef*/
  {
    if ( ++result >= v3 ) /*0x58951e*/
      return -1; /*0x58951e*/
  }
  return result; /*0x5894da*/
}


// ==== 0x00589530  ?$VectorClass@UZoneConnectionClass@@::initSubzoneData  this=VectorClass  sig=csp ====
unsigned int __thiscall MapClass::sub_589530(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x589530*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x589545*/
  else
    return 0; /*0x589537*/
}


// ==== 0x00589550  _DynamicVectorClass_UZoneConnectionClass::Release  this=DynamicVector  sig=csp ====
char __thiscall unknown::_vt02(void *this, int a2, _WORD *a3)
{
  int v3; // ebx
  _WORD *v5; // esi
  _WORD *v6; // ebp
  char *v7; // esi
  int v8; // ebp
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // ebx
  _DWORD *v12; // edx
  int v13; // eax

  v3 = a2; /*0x589551*/
  if ( a2 ) /*0x58955c*/
  {
    this->IsInitialized = 0; /*0x589566*/
    if ( a3 ) /*0x58956c*/
    {
      if ( a2 - 1 >= 0 ) /*0x5895aa*/
      {
        v7 = (char *)(a3 + 2); /*0x5895ac*/
        v8 = a2; /*0x5895af*/
        do /*0x5895d4*/
        {
          *((_WORD *)v7 - 2) = 0; /*0x5895b8*/
          *((_WORD *)v7 - 1) = 0; /*0x5895bc*/
          CellStruct::Set(v7, 0, 0); /*0x5895c0*/
          v7[4] = 0; /*0x5895c5*/
          *((_DWORD *)v7 + 2) = -1; /*0x5895c9*/
          v7 += 16; /*0x5895d0*/
          --v8; /*0x5895d3*/
        }
        while ( v8 ); /*0x5895d4*/
      }
      v5 = a3; /*0x5895d6*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(16 * a2); /*0x589579*/
      if ( v5 ) /*0x589580*/
      {
        v6 = v5; /*0x589585*/
        if ( a2 - 1 >= 0 ) /*0x589589*/
        {
          do /*0x589599*/
          {
            unknown::Init(v6); /*0x589590*/
            v6 += 8; /*0x589595*/
            --v3; /*0x589598*/
          }
          while ( v3 ); /*0x589599*/
          v3 = a2; /*0x58959b*/
        }
      }
      else
      {
        v5 = 0; /*0x5895a1*/
      }
    }
    this->IsInitialized = 1; /*0x5895dc*/
    if ( !v5 ) /*0x5895e0*/
      return 0; /*0x589674*/
    if ( this->Items ) /*0x5895e6*/
    {
      v9 = this->DynamicVector_field_0x8; /*0x5895ed*/
      if ( v3 < v9 ) /*0x5895f2*/
        v9 = v3; /*0x5895f4*/
      if ( v9 > 0 ) /*0x5895f8*/
      {
        v10 = 0; /*0x5895fa*/
        do /*0x58961e*/
        {
          v11 = &v5[v10]; /*0x5895ff*/
          v12 = (_DWORD *)(v10 * 2 + this->Items); /*0x589602*/
          v10 += 8; /*0x589604*/
          --v9; /*0x589607*/
          *v11 = *v12; /*0x58960a*/
          v11[1] = v12[1]; /*0x58960f*/
          v11[2] = v12[2]; /*0x589615*/
          v11[3] = v12[3]; /*0x58961b*/
        }
        while ( v9 ); /*0x58961e*/
        v3 = a2; /*0x589620*/
      }
      if ( this->IsAllocated ) /*0x589624*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x58962f*/
        this->Items = 0; /*0x589637*/
      }
    }
    this->Items = v5; /*0x589649*/
    this->DynamicVector_field_0x8 = v3; /*0x58964c*/
    this->IsAllocated = a3 == 0; /*0x58964f*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x589658*/
  }
  v13 = this->DynamicVector_field_0x8; /*0x58965b*/
  if ( v13 < this->Items ) /*0x589663*/
    this->Items = v13; /*0x589665*/
  return 1; /*0x589668*/
}


// ==== 0x00589680  unknown::Init  this=AbstractClass  sig=csp ====
_WORD *__thiscall sub_589680(_WORD *this)
{
  *this = 0; /*0x589684*/
  this->vtable2 = 0; /*0x589687*/
  this->vtable3 = 0; /*0x58968b*/
  this->vtable4 = 0; /*0x58968f*/
  this->vtable3 = 0; /*0x589693*/
  this->vtable4 = -1; /*0x589696*/
  return this; /*0x58969d*/
}


// ==== 0x005896A0  _DynamicVectorClass_UZoneConnectionClass::Read  this=DynamicVector  sig=csp ====
int __thiscall unknown::_vt04(int *this, _WORD *a2)
{
  int v2; // esi
  int result; // eax
  _WORD *i; // ecx

  v2 = this->Items; /*0x5896a2*/
  result = 0; /*0x5896a5*/
  if ( v2 <= 0 ) /*0x5896aa*/
    return -1; /*0x5896e1*/
  for ( i = (_WORD *)this->Items; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 8 ) /*0x5896b0*/
  {
    if ( ++result >= v2 ) /*0x5896df*/
      return -1; /*0x5896df*/
  }
  return result; /*0x5896e4*/
}


// ==== 0x005896F0  _VectorClass_USubzoneTrackingStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_USubzoneTrackingStruct::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  _DWORD *i; // ecx

  v2 = this->Capacity; /*0x5896f6*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5896ff*/
  {
    v3 = 0; /*0x589701*/
    if ( v2 <= 0 ) /*0x589705*/
      return 1; /*0x589735*/
    v4 = (_DWORD *)(*(_DWORD *)(a2 + 4) + 28); /*0x58970d*/
    for ( i = (_DWORD *)(this->Items + 28); *((_WORD *)i - 2) == *((_WORD *)v4 - 2) && *i == *v4; i += 9 ) /*0x589710*/
    {
      ++v3; /*0x589725*/
      v4 += 9; /*0x589726*/
      if ( v3 >= v2 ) /*0x58972e*/
        return 1; /*0x58972e*/
    }
  }
  return 0; /*0x589730*/
}


// ==== 0x00589740  _VectorClass_USubzoneTrackingStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_USubzoneTrackingStruct::_vt02(_BYTE *this, int a2, int *a3)
{
  int v3; // edi
  _BYTE *v4; // ebp
  int *v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // esi
  _DWORD *v8; // ecx
  int v10; // eax
  _DWORD *v11; // edi
  int v12; // esi
  int v13; // esi
  int v14; // eax
  void *v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // esi
  void *v19; // eax
  _DWORD *v20; // [esp+10h] [ebp-Ch]
  _DWORD *v22; // [esp+18h] [ebp-4h]
  int v23; // [esp+18h] [ebp-4h]
  void *v24; // [esp+18h] [ebp-4h]
  int v25; // [esp+20h] [ebp+4h]

  v3 = a2; /*0x589747*/
  v4 = this; /*0x58974d*/
  if ( a2 ) /*0x589755*/
  {
    this->IsInitialized = 0; /*0x58975f*/
    if ( a3 ) /*0x589764*/
    {
      *a3 = a2; /*0x5897d9*/
      v7 = a3 + 1; /*0x5897de*/
      if ( a2 - 1 >= 0 ) /*0x5897e3*/
      {
        do /*0x589817*/
        {
          VectorClass::ConstructSubzone(v7, 0, 0); /*0x5897f1*/
          *v7 = &vt_DynamicVectorClass_SubzoneConnectionStruct; /*0x5897f6*/
          v7[5] = 10; /*0x5897fc*/
          v7[4] = 0; /*0x5897ff*/
          (*(void (__thiscall **)(_DWORD *))(*v7 + 12))(v7); /*0x589806*/
          *((_WORD *)v7 + 12) = 0; /*0x589809*/
          v7[7] = 0; /*0x58980d*/
          v7[8] = 0; /*0x589810*/
          v7 += 9; /*0x589813*/
          --v3; /*0x589816*/
        }
        while ( v3 ); /*0x589817*/
        v3 = a2; /*0x589819*/
        v4 = this; /*0x58981d*/
      }
      v20 = a3 + 1; /*0x589828*/
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(36 * a2 + 4); /*0x589771*/
      if ( v5 ) /*0x58977b*/
      {
        *v5 = a2; /*0x58977d*/
        v6 = v5 + 1; /*0x58977f*/
        v22 = v5 + 1; /*0x589785*/
        if ( a2 - 1 >= 0 ) /*0x58978b*/
        {
          do /*0x5897bf*/
          {
            VectorClass::ConstructSubzone(v6, 0, 0); /*0x589799*/
            *v6 = &vt_DynamicVectorClass_SubzoneConnectionStruct; /*0x58979e*/
            v6[5] = 10; /*0x5897a4*/
            v6[4] = 0; /*0x5897a7*/
            (*(void (__thiscall **)(_DWORD *))(*v6 + 12))(v6); /*0x5897ae*/
            *((_WORD *)v6 + 12) = 0; /*0x5897b1*/
            v6[7] = 0; /*0x5897b5*/
            v6[8] = 0; /*0x5897b8*/
            v6 += 9; /*0x5897bb*/
            --v3; /*0x5897be*/
          }
          while ( v3 ); /*0x5897bf*/
          v3 = a2; /*0x5897c1*/
          v6 = v22; /*0x5897c5*/
          v4 = this; /*0x5897c9*/
        }
        v20 = v6; /*0x5897cd*/
      }
      else
      {
        v20 = 0; /*0x5897d3*/
      }
    }
    v8 = v20; /*0x58982c*/
    v4[12] = 1; /*0x589830*/
    if ( v20 ) /*0x589836*/
    {
      if ( *((_DWORD *)v4 + 1) ) /*0x589844*/
      {
        v10 = *((_DWORD *)v4 + 2); /*0x58984d*/
        if ( v3 < v10 ) /*0x589852*/
          v10 = v3; /*0x589854*/
        if ( v10 > 0 ) /*0x589858*/
        {
          v11 = v20 + 5; /*0x58985f*/
          v23 = v10; /*0x589864*/
          do /*0x5898a9*/
          {
            v12 = (int)v11 + this->Items + -20 - (_DWORD)v20; /*0x589876*/
            VectorClass_USubzoneTrackingStruct::SetCapacity(v11 - 5, (_DWORD *)v12); /*0x589879*/
            *(v11 - 1) = *(_DWORD *)(v12 + 16); /*0x589881*/
            *v11 = *(_DWORD *)(v12 + 20); /*0x589887*/
            *((_WORD *)v11 + 2) = *(_WORD *)(v12 + 24); /*0x58988d*/
            v11[2] = *(_DWORD *)(v12 + 28); /*0x589894*/
            v11[3] = *(_DWORD *)(v12 + 32); /*0x58989e*/
            v11 += 9; /*0x5898a1*/
            --v23; /*0x5898a5*/
          }
          while ( v23 ); /*0x5898a9*/
          v3 = a2; /*0x5898ab*/
          v4 = this; /*0x5898af*/
        }
        if ( v4[13] ) /*0x5898b3*/
        {
          v13 = *((_DWORD *)v4 + 1); /*0x5898b8*/
          if ( v13 ) /*0x5898bd*/
          {
            v14 = *(_DWORD *)(v13 - 4); /*0x5898bf*/
            v15 = (void *)(v13 - 4); /*0x5898c2*/
            v24 = (void *)(v13 - 4); /*0x5898c5*/
            v16 = 9 * v14; /*0x5898c9*/
            v17 = v14 - 1; /*0x5898cc*/
            v18 = v13 + 4 * v16; /*0x5898cd*/
            if ( v17 >= 0 ) /*0x5898d0*/
            {
              v25 = v17 + 1; /*0x5898d3*/
              do /*0x589907*/
              {
                v19 = *(void **)(v18 - 32); /*0x5898d7*/
                v18 -= 36; /*0x5898da*/
                *(_DWORD *)v18 = &vt_VectorClass_SubzoneConnectionStruct; /*0x5898df*/
                if ( v19 ) /*0x5898e5*/
                {
                  if ( *(_BYTE *)(v18 + 13) ) /*0x5898e7*/
                  {
                    __3_YAXPAX_Z(v19); /*0x5898ed*/
                    *(_DWORD *)(v18 + 4) = 0; /*0x5898f5*/
                  }
                }
                *(_BYTE *)(v18 + 13) = 0; /*0x5898fc*/
                *(_DWORD *)(v18 + 8) = 0; /*0x589900*/
                --v25; /*0x589903*/
              }
              while ( v25 ); /*0x589907*/
              v15 = v24; /*0x589909*/
            }
            __3_YAXPAX_Z(v15); /*0x58990e*/
          }
          *((_DWORD *)v4 + 1) = 0; /*0x589916*/
        }
        v8 = v20; /*0x589919*/
      }
      *((_DWORD *)v4 + 1) = v8; /*0x58991d*/
      *((_DWORD *)v4 + 2) = v3; /*0x589928*/
      v4[13] = a3 == 0; /*0x58992f*/
      return 1; /*0x589934*/
    }
    else
    {
      return 0; /*0x58983b*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *))(this->IsInitialized)(this); /*0x589942*/
    return 1; /*0x589948*/
  }
}


// ==== 0x00589960  _VectorClass_USubzoneTrackingStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_USubzoneTrackingStruct::_vt03(int this)
{
  int v2; // ecx
  int v3; // eax
  void *v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // ebp
  void *v9; // eax
  void *v10; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)(this + 4); /*0x589967*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x58996e*/
  {
    v3 = *(_DWORD *)(v2 - 4); /*0x589977*/
    v4 = (void *)(v2 - 4); /*0x58997a*/
    v10 = (void *)(v2 - 4); /*0x58997e*/
    v5 = 9 * v3; /*0x589982*/
    v6 = v3 - 1; /*0x589985*/
    v7 = v2 + 4 * v5; /*0x589986*/
    if ( v6 >= 0 ) /*0x589989*/
    {
      v8 = v6 + 1; /*0x58998c*/
      do /*0x5899b7*/
      {
        v9 = *(void **)(v7 - 32); /*0x58998f*/
        v7 -= 36; /*0x589992*/
        *(_DWORD *)v7 = &vt_VectorClass_SubzoneConnectionStruct; /*0x589997*/
        if ( v9 && *(_BYTE *)(v7 + 13) ) /*0x58999f*/
        {
          __3_YAXPAX_Z(v9); /*0x5899a5*/
          *(_DWORD *)(v7 + 4) = 0; /*0x5899ad*/
        }
        --v8; /*0x5899b0*/
        *(_BYTE *)(v7 + 13) = 0; /*0x5899b1*/
        *(_DWORD *)(v7 + 8) = 0; /*0x5899b4*/
      }
      while ( v8 ); /*0x5899b7*/
      v4 = v10; /*0x5899b9*/
    }
    __3_YAXPAX_Z(v4); /*0x5899bf*/
    *(_DWORD *)(this + 4) = 0; /*0x5899c8*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5899cb*/
  *(_DWORD *)(this + 8) = 0; /*0x5899ce*/
}


// ==== 0x005899E0  _VectorClass_USubzoneTrackingStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_USubzoneTrackingStruct::_vt04(int this, int a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5899e0*/
    return 0; /*0x5899ee*/
  v3 = *(_DWORD *)(this + 8); /*0x5899f4*/
  result = 0; /*0x5899f7*/
  if ( v3 <= 0 ) /*0x5899fb*/
    return -1; /*0x589a22*/
  for ( i = (_DWORD *)(*(_DWORD *)(this + 4) + 28); /*0x589a04*/
        *((_WORD *)i - 2) != *(_WORD *)(a2 + 24) || *i != *(_DWORD *)(a2 + 28);
        i += 9 )
  {
    if ( ++result >= v3 ) /*0x589a20*/
      return -1; /*0x589a20*/
  }
  return result; /*0x5899eb*/
}


// ==== 0x00589A30  _VectorClass_USubzoneTrackingStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_USubzoneTrackingStruct::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x589a30*/
    return (a2 - *(_DWORD *)(this + 4)) / 0x24u; /*0x589a4e*/
  else
    return 0; /*0x589a37*/
}


// ==== 0x00589A60  ?$DynamicVectorClass@USubzoneTrackingStruct@@::AllocateMapDataBuffer  this=DynamicVector  sig=csp ====
char __thiscall MapClass::sub_589A60(void *this, int a2, int *a3)
{
  int v3; // edi
  int *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  _DWORD *v9; // esi
  int v10; // eax
  _DWORD *v11; // edi
  int v12; // ebx
  int *v13; // esi
  _DWORD *v14; // ecx
  int v15; // eax
  int v17; // [esp+10h] [ebp-8h]
  _DWORD *v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x589a67*/
  if ( !a2 ) /*0x589a6f*/
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x589ba0*/
    goto LABEL_28; /*0x589ba0*/
  }
  this->IsInitialized = 0; /*0x589a79*/
  if ( a3 ) /*0x589a7f*/
  {
    *a3 = a2; /*0x589ad2*/
    v9 = a3 + 1; /*0x589adc*/
    if ( a2 - 1 >= 0 ) /*0x589ade*/
    {
      v19 = a2; /*0x589ae1*/
      do /*0x589af8*/
      {
        MapClass::allocateMapBuffers(v9); /*0x589ae7*/
        v9 += 9; /*0x589af0*/
        --v19; /*0x589af4*/
      }
      while ( v19 ); /*0x589af8*/
    }
    v18 = a3 + 1; /*0x589afa*/
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(36 * a2 + 4); /*0x589a8c*/
    if ( v5 ) /*0x589a96*/
    {
      *v5 = a2; /*0x589a98*/
      v6 = v5 + 1; /*0x589a9a*/
      v7 = v5 + 1; /*0x589aa0*/
      if ( a2 - 1 >= 0 ) /*0x589aa4*/
      {
        v17 = a2; /*0x589aa7*/
        do /*0x589abe*/
        {
          MapClass::allocateMapBuffers(v7); /*0x589aad*/
          v7 += 9; /*0x589ab6*/
          --v17; /*0x589aba*/
        }
        while ( v17 ); /*0x589abe*/
      }
      v8 = v6; /*0x589ac0*/
      v18 = v6; /*0x589ac2*/
      goto LABEL_14; /*0x589ac6*/
    }
    v18 = 0; /*0x589ac8*/
  }
  v8 = v18; /*0x589afe*/
LABEL_14:
  this->IsInitialized = 1; /*0x589b02*/
  if ( !v8 ) /*0x589b08*/
    return 0; /*0x589bbf*/
  if ( this->Items ) /*0x589b0e*/
  {
    v10 = this->DynamicVector_field_0x8; /*0x589b15*/
    if ( a2 < v10 ) /*0x589b1a*/
      v10 = a2; /*0x589b1c*/
    if ( v10 > 0 ) /*0x589b20*/
    {
      v11 = v8 + 7; /*0x589b27*/
      v12 = -28 - (_DWORD)v8; /*0x589b2a*/
      v20 = v10; /*0x589b2c*/
      do /*0x589b5f*/
      {
        v13 = (_DWORD *)((char *)v11 + v12 + this->Items); /*0x589b38*/
        Radar::CopyDataArray(v11 - 7, v13); /*0x589b3b*/
        *((_WORD *)v11 - 2) = *((_WORD *)v13 + 12); /*0x589b44*/
        *v11 = v13[7]; /*0x589b4b*/
        v11[1] = v13[8]; /*0x589b54*/
        v11 += 9; /*0x589b57*/
        --v20; /*0x589b5b*/
      }
      while ( v20 ); /*0x589b5f*/
      v3 = a2; /*0x589b61*/
      v8 = v18; /*0x589b65*/
    }
    if ( this->IsAllocated ) /*0x589b69*/
    {
      v14 = (_DWORD *)this->Items; /*0x589b70*/
      if ( v14 ) /*0x589b75*/
        SubzoneConnectionVector::Destruct(v14, 3); /*0x589b79*/
      this->Items = 0; /*0x589b7e*/
    }
  }
  this->Items = v8; /*0x589b90*/
  this->DynamicVector_field_0x8 = v3; /*0x589b93*/
  this->IsAllocated = a3 == 0; /*0x589b96*/
LABEL_28:
  v15 = this->DynamicVector_field_0x8; /*0x589ba3*/
  if ( v15 < this->Items ) /*0x589bab*/
    this->Items = v15; /*0x589bad*/
  return 1; /*0x589bb0*/
}


// ==== 0x00589BD0  MapClass::allocateMapBuffers  this=DynamicVector  sig=csp ====
_DWORD *__thiscall sub_589BD0(_DWORD *this)
{
  this->Items = 0; /*0x589bd6*/
  this->DynamicVector_field_0x8 = 0; /*0x589bd9*/
  this->IsInitialized = 1; /*0x589bdc*/
  this->IsAllocated = 0; /*0x589be0*/
  *this = &vt_DynamicVectorClass_SubzoneConnectionStruct; /*0x589be3*/
  this->CapacityIncrement = 10; /*0x589be9*/
  this->DynamicVector_field_0x10 = 0; /*0x589bf0*/
  VectorClass::CleanupSubzone((int)this); /*0x589bf3*/
  this->IsInitialized = 0; /*0x589bf9*/
  this->DynamicVector_field_0x1C = 0; /*0x589bfd*/
  this->__pad_020 = 0; /*0x589c00*/
  return this; /*0x589c05*/
}


// ==== 0x00589C10  _DynamicVectorClass_USubzoneTrackingStruct::FindByCoord  this=DynamicVector  sig=csp ====
int __thiscall MapClass::sub_589C10(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x589c10*/
  result = 0; /*0x589c15*/
  if ( v2 <= 0 ) /*0x589c1b*/
    return -1; /*0x589c42*/
  for ( i = (_DWORD *)(this->Items + 28); *((_WORD *)i - 2) != *(_WORD *)(a2 + 24) || *i != *(_DWORD *)(a2 + 28); i += 9 ) /*0x589c24*/
  {
    if ( ++result >= v2 ) /*0x589c40*/
      return -1; /*0x589c40*/
  }
  return result; /*0x589c45*/
}


// ==== 0x00589C50  TileVector::PushBack  this=TileVector  sig=csp ====
char __thiscall TileVector::PushBack(_DWORD *this, MouseClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(this + 2); /*0x589c53*/
  if ( *(this + 4) >= v3 ) /*0x589c5b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x589c66*/
      return 0; /*0x589c66*/
    v4 = *(this + 5); /*0x589c68*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x589c78*/
      return 0; /*0x589c7f*/
  }
  v6 = *(this + 4); /*0x589c85*/
  v7 = *(this + 1); /*0x589c88*/
  *(this + 4) = v6 + 1; /*0x589c8e*/
  *(_DWORD *)(v7 + 4 * v6) = aP1->field_0; /*0x589c98*/
  return 1; /*0x589c81*/
}


// ==== 0x00589CA0  _VectorClass_PAVCellClass::InitCellVe_vt01  this=VectorClass  sig=csp ====
char __thiscall MapClass::InitCellVe_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x589ca2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x589cad*/
  {
    v3 = 0; /*0x589caf*/
    if ( v2 <= 0 ) /*0x589cb3*/
      return 1; /*0x589cd3*/
    v4 = (_DWORD *)this->Items; /*0x589cb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x589cbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x589cc4*/
    {
      ++v3; /*0x589cc6*/
      ++v4; /*0x589cc7*/
      if ( v3 >= v2 ) /*0x589ccc*/
        return 1; /*0x589ccc*/
    }
  }
  return 0; /*0x589cce*/
}


// ==== 0x00589CE0  ?$VectorClass@PAVCellClass@@::InitCellVe_vt02  this=VectorClass  sig=csp ====
char __thiscall MapClass::InitCellVe_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x589cec*/
  {
    this->IsInitialized = 0; /*0x589cf6*/
    if ( a3 ) /*0x589cfc*/
      v4 = a3; /*0x589d12*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x589d0e*/
    this->IsInitialized = 1; /*0x589d16*/
    if ( v4 ) /*0x589d1a*/
    {
      if ( this->Items ) /*0x589d25*/
      {
        v6 = this->Capacity; /*0x589d2c*/
        if ( a2 < v6 ) /*0x589d31*/
          v6 = a2; /*0x589d33*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x589d39*/
          ++i; /*0x589d3e*/
        if ( this->IsAllocated ) /*0x589d4b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x589d56*/
          this->Items = 0; /*0x589d5e*/
        }
      }
      this->Items = v4; /*0x589d67*/
      this->Capacity = a2; /*0x589d6f*/
      this->IsAllocated = a3 == 0; /*0x589d72*/
      return 1; /*0x589d78*/
    }
    else
    {
      return 0; /*0x589d1f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x589d82*/
    return 1; /*0x589d88*/
  }
}


// ==== 0x00589D90  ?$VectorClass@PAVCellClass@@::InitCellVe_vt03  this=VectorClass  sig=csp ====
void __thiscall MapClass::InitCellVe_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x589d9d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x589da3*/
    *(_DWORD *)(this + 4) = 0; /*0x589dab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x589dae*/
  *(_DWORD *)(this + 8) = 0; /*0x589db1*/
}


// ==== 0x00589DC0  ?$VectorClass@PAVCellClass@@::InitCellVe_vt04  this=VectorClass  sig=csp ====
int __thiscall MapClass::InitCellVe_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x589dc0*/
    return 0; /*0x589dc8*/
  v3 = *(_DWORD *)(this + 8); /*0x589dce*/
  result = 0; /*0x589dd1*/
  if ( v3 <= 0 ) /*0x589dd5*/
    return -1; /*0x589dec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x589ddb*/
  {
    if ( ++result >= v3 ) /*0x589dea*/
      return -1; /*0x589dea*/
  }
  return result; /*0x589dca*/
}


// ==== 0x00589E00  ?$VectorClass@PAVCellClass@@::InitCellVe_vt05  this=VectorClass  sig=csp ====
unsigned int __thiscall MapClass::InitCellVe_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x589e00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x589e15*/
  else
    return 0; /*0x589e07*/
}


// ==== 0x00589E20  RadarClass::updateRadarCells  this=RadarClass  sig=csp ====
char __thiscall sub_589E20(int *this, int a2, _DWORD *a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // ecx

  v3 = *this; /*0x589e24*/
  v4 = *(_DWORD *)(v3 + 24 * a2 + 16); /*0x589e30*/
  v5 = v3 + 24 * a2; /*0x589e34*/
  v6 = *(_DWORD **)(v5 + 4); /*0x589e37*/
  v7 = v4 - 1; /*0x589e3b*/
  if ( v4 - 1 < 0 ) /*0x589e40*/
  {
LABEL_4:
    v8 = *(_DWORD *)(v5 + 8); /*0x589e4e*/
    if ( v4 < v8 /*0x589e70*/
      || (*(_BYTE *)(v5 + 13) || !v8)
      && (v9 = *(_DWORD *)(v5 + 20), v9 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 8))(v5, v8 + v9, 0) )
    {
      v10 = *(_DWORD *)(v5 + 16); /*0x589e77*/
      v11 = v10 + 1; /*0x589e7a*/
      v12 = 3 * v10; /*0x589e7d*/
      v13 = *(_DWORD *)(v5 + 4); /*0x589e80*/
      *(_DWORD *)(v5 + 16) = v11; /*0x589e83*/
      v14 = (_DWORD *)(v13 + 4 * v12); /*0x589e86*/
      *v14 = *a3; /*0x589e8b*/
      v14[1] = a3[1]; /*0x589e90*/
      v14[2] = a3[2]; /*0x589e96*/
    }
    return 1; /*0x589e9b*/
  }
  else
  {
    while ( *a3 != *v6 ) /*0x589e46*/
    {
      v6 += 3; /*0x589e48*/
      if ( --v7 < 0 ) /*0x589e4c*/
        goto LABEL_4; /*0x589e4c*/
    }
    return 0; /*0x589ea3*/
  }
}


// ==== 0x00589EB0  _VectorClass_W4PassabilityType::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x589eb2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x589ebd*/
  {
    v3 = 0; /*0x589ebf*/
    if ( v2 <= 0 ) /*0x589ec3*/
      return 1; /*0x589ee3*/
    v4 = (_DWORD *)this->Items; /*0x589ec5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x589ecb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x589ed4*/
    {
      ++v3; /*0x589ed6*/
      ++v4; /*0x589ed7*/
      if ( v3 >= v2 ) /*0x589edc*/
        return 1; /*0x589edc*/
    }
  }
  return 0; /*0x589ede*/
}


// ==== 0x00589EF0  _VectorClass_W4PassabilityType::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x589efc*/
  {
    this->IsInitialized = 0; /*0x589f06*/
    if ( a3 ) /*0x589f0c*/
      v4 = a3; /*0x589f22*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x589f1e*/
    this->IsInitialized = 1; /*0x589f26*/
    if ( v4 ) /*0x589f2a*/
    {
      if ( this->Items ) /*0x589f35*/
      {
        v6 = this->Capacity; /*0x589f3c*/
        if ( a2 < v6 ) /*0x589f41*/
          v6 = a2; /*0x589f43*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x589f49*/
          ++i; /*0x589f4e*/
        if ( this->IsAllocated ) /*0x589f5b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x589f66*/
          this->Items = 0; /*0x589f6e*/
        }
      }
      this->Items = v4; /*0x589f77*/
      this->Capacity = a2; /*0x589f7f*/
      this->IsAllocated = a3 == 0; /*0x589f82*/
      return 1; /*0x589f88*/
    }
    else
    {
      return 0; /*0x589f2f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x589f92*/
    return 1; /*0x589f98*/
  }
}


// ==== 0x00589FA0  _VectorClass_W4PassabilityType::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_W4PassabilityType::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x589fad*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x589fb3*/
    *(_DWORD *)(this + 4) = 0; /*0x589fbb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x589fbe*/
  *(_DWORD *)(this + 8) = 0; /*0x589fc1*/
}


// ==== 0x00589FD0  _VectorClass_W4PassabilityType::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x589fd0*/
    return 0; /*0x589fd8*/
  v3 = *(_DWORD *)(this + 8); /*0x589fde*/
  result = 0; /*0x589fe1*/
  if ( v3 <= 0 ) /*0x589fe5*/
    return -1; /*0x589ffc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x589feb*/
  {
    if ( ++result >= v3 ) /*0x589ffa*/
      return -1; /*0x589ffa*/
  }
  return result; /*0x589fda*/
}


// ==== 0x0058A010  _VectorClass_W4PassabilityType::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_W4PassabilityType::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x58a010*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x58a025*/
  else
    return 0; /*0x58a017*/
}


// ==== 0x0058A030  _DynamicVectorClass_W4PassabilityType::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::sub_58A030(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x58a03c*/
  {
    this->IsInitialized = 0; /*0x58a042*/
    if ( a3 ) /*0x58a048*/
      v4 = a3; /*0x58a05e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x58a05a*/
    this->IsInitialized = 1; /*0x58a062*/
    if ( !v4 ) /*0x58a066*/
      return 0; /*0x58a0da*/
    if ( this->Items ) /*0x58a068*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x58a06f*/
      if ( a2 < v5 ) /*0x58a074*/
        v5 = a2; /*0x58a076*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x58a07c*/
        ++i; /*0x58a081*/
      if ( this->IsAllocated ) /*0x58a08e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x58a099*/
        this->Items = 0; /*0x58a0a1*/
      }
    }
    this->Items = v4; /*0x58a0aa*/
    this->DynamicVector_field_0x8 = a2; /*0x58a0b2*/
    this->IsAllocated = a3 == 0; /*0x58a0b5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x58a0be*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x58a0c1*/
  if ( v7 < this->Items ) /*0x58a0c9*/
    this->Items = v7; /*0x58a0cb*/
  return 1; /*0x58a0ce*/
}


// ==== 0x0058A0E0  _DynamicVectorClass_W4PassabilityType::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::sub_58A0E0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x58a0e0*/
  result = 0; /*0x58a0e3*/
  if ( v2 <= 0 ) /*0x58a0e8*/
    return -1; /*0x58a0ff*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x58a0ee*/
  {
    if ( ++result >= v2 ) /*0x58a0fd*/
      return -1; /*0x58a0fd*/
  }
  return result; /*0x58a102*/
}


// ==== 0x0058A110  _VectorClass_U_HashObject_II::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UHashObject_uint_uint::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x58a112*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x58a11d*/
  {
    v3 = 0; /*0x58a11f*/
    if ( v2 <= 0 ) /*0x58a123*/
      return 1; /*0x58a143*/
    v4 = (_DWORD *)this->Items; /*0x58a125*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x58a12b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x58a134*/
    {
      ++v3; /*0x58a136*/
      v4 += 2; /*0x58a137*/
      if ( v3 >= v2 ) /*0x58a13c*/
        return 1; /*0x58a13c*/
    }
  }
  return 0; /*0x58a13e*/
}


// ==== 0x0058A150  _DynamicVectorClass_U_HashObject_II::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::sub_58A150(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax

  if ( a2 ) /*0x58a15c*/
  {
    v4 = a3; /*0x58a162*/
    this->IsInitialized = 0; /*0x58a166*/
    if ( a3 ) /*0x58a16c*/
    {
      v6 = a3; /*0x58a194*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x58a176*/
      if ( v5 ) /*0x58a180*/
        v6 = v5; /*0x58a185*/
      else
        v6 = 0; /*0x58a18d*/
    }
    this->IsInitialized = 1; /*0x58a19c*/
    if ( !v6 ) /*0x58a1a0*/
      return 0; /*0x58a220*/
    if ( this->Items ) /*0x58a1a2*/
    {
      v7 = this->DynamicVector_field_0x8; /*0x58a1a9*/
      if ( a2 < v7 ) /*0x58a1ae*/
        v7 = a2; /*0x58a1b0*/
      v8 = 0; /*0x58a1b2*/
      if ( v7 > 0 ) /*0x58a1b6*/
      {
        do /*0x58a1ce*/
        {
          v9 = this->Items; /*0x58a1b8*/
          ++v8; /*0x58a1bb*/
          v6[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x58a1c2*/
          v6[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x58a1ca*/
        }
        while ( v8 < v7 ); /*0x58a1ce*/
        v4 = a3; /*0x58a1d0*/
      }
      if ( this->IsAllocated ) /*0x58a1d4*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x58a1df*/
        this->Items = 0; /*0x58a1e7*/
      }
    }
    this->Items = v6; /*0x58a1f0*/
    this->DynamicVector_field_0x8 = a2; /*0x58a1f8*/
    this->IsAllocated = v4 == 0; /*0x58a1fb*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x58a204*/
  }
  v10 = this->DynamicVector_field_0x8; /*0x58a207*/
  if ( v10 < this->Items ) /*0x58a20f*/
    this->Items = v10; /*0x58a211*/
  return 1; /*0x58a214*/
}


// ==== 0x0058A230  _DynamicVectorClass_U_HashObject_II::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::sub_58A230(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x58a230*/
  result = 0; /*0x58a233*/
  if ( v2 <= 0 ) /*0x58a238*/
    return -1; /*0x58a24f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; i += 2 ) /*0x58a23e*/
  {
    if ( ++result >= v2 ) /*0x58a24d*/
      return -1; /*0x58a24d*/
  }
  return result; /*0x58a252*/
}


// ==== 0x0058A260  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UHashObject_uint_SubzoneConn::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x58a262*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x58a26d*/
  {
    v3 = 0; /*0x58a26f*/
    if ( v2 <= 0 ) /*0x58a273*/
      return 1; /*0x58a293*/
    v4 = (_DWORD *)this->Items; /*0x58a275*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x58a27b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x58a284*/
    {
      ++v3; /*0x58a286*/
      v4 += 3; /*0x58a287*/
      if ( v3 >= v2 ) /*0x58a28c*/
        return 1; /*0x58a28c*/
    }
  }
  return 0; /*0x58a28e*/
}


// ==== 0x0058A2A0  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::SetCapacity_1  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::sub_58A2A0(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  char *v13; // ebx
  _DWORD *v14; // edx
  int v15; // eax

  v3 = a2; /*0x58a2a2*/
  if ( a2 ) /*0x58a2ae*/
  {
    v5 = a3; /*0x58a2b4*/
    this->IsInitialized = 0; /*0x58a2b8*/
    if ( a3 ) /*0x58a2bd*/
    {
      if ( a2 - 1 >= 0 ) /*0x58a2f6*/
      {
        v9 = a3 + 4; /*0x58a2f8*/
        v10 = a2; /*0x58a2fb*/
        do /*0x58a305*/
        {
          *(_DWORD *)v9 = 0; /*0x58a2fc*/
          v9[4] = 0; /*0x58a2fe*/
          v9 += 12; /*0x58a301*/
          --v10; /*0x58a304*/
        }
        while ( v10 ); /*0x58a305*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(12 * a2); /*0x58a2c7*/
      if ( v6 ) /*0x58a2d1*/
      {
        if ( a2 - 1 >= 0 ) /*0x58a2d8*/
        {
          v7 = v6 + 4; /*0x58a2da*/
          v8 = a2; /*0x58a2dd*/
          do /*0x58a2e7*/
          {
            *(_DWORD *)v7 = 0; /*0x58a2de*/
            v7[4] = 0; /*0x58a2e0*/
            v7 += 12; /*0x58a2e3*/
            --v8; /*0x58a2e6*/
          }
          while ( v8 ); /*0x58a2e7*/
        }
        v5 = v6; /*0x58a2e9*/
      }
      else
      {
        v5 = 0; /*0x58a2ed*/
      }
    }
    this->IsInitialized = 1; /*0x58a309*/
    if ( !v5 ) /*0x58a30d*/
      return 0; /*0x58a391*/
    if ( this->Items ) /*0x58a30f*/
    {
      v11 = this->DynamicVector_field_0x8; /*0x58a314*/
      if ( a2 < v11 ) /*0x58a319*/
        v11 = a2; /*0x58a31b*/
      if ( v11 > 0 ) /*0x58a31f*/
      {
        v12 = 0; /*0x58a321*/
        do /*0x58a33f*/
        {
          v13 = &v5[v12]; /*0x58a326*/
          v14 = (_DWORD *)(v12 + this->Items); /*0x58a329*/
          v12 += 12; /*0x58a32b*/
          --v11; /*0x58a32e*/
          *(_DWORD *)v13 = *v14; /*0x58a331*/
          *((_DWORD *)v13 + 1) = v14[1]; /*0x58a336*/
          *((_DWORD *)v13 + 2) = v14[2]; /*0x58a33c*/
        }
        while ( v11 ); /*0x58a33f*/
        v3 = a2; /*0x58a341*/
      }
      if ( this->IsAllocated ) /*0x58a347*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x58a350*/
        this->Items = 0; /*0x58a358*/
      }
    }
    this->Items = v5; /*0x58a363*/
    this->DynamicVector_field_0x8 = v3; /*0x58a369*/
    this->IsAllocated = a3 == 0; /*0x58a36c*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x58a375*/
  }
  v15 = this->DynamicVector_field_0x8; /*0x58a378*/
  if ( v15 < this->Items ) /*0x58a380*/
    this->Items = v15; /*0x58a382*/
  return 1; /*0x58a385*/
}


// ==== 0x0058A3A0  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::FindItemIndex_1  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::sub_58A3A0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x58a3a0*/
  result = 0; /*0x58a3a3*/
  if ( v2 <= 0 ) /*0x58a3a8*/
    return -1; /*0x58a3bf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; i += 3 ) /*0x58a3ae*/
  {
    if ( ++result >= v2 ) /*0x58a3bd*/
      return -1; /*0x58a3bd*/
  }
  return result; /*0x58a3c2*/
}


// ==== 0x0058A3D0  _VectorClass_UZoneConnectionClass::Destruct  this=VectorClass  sig=csp ====
VectorClass *__thiscall ZoneConnectionVector::Destruct(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x58a3d3*/
  *Block = &vt_VectorClass_ZoneConnectionClass; /*0x58a3d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x58a3e0*/
  {
    __3_YAXPAX_Z(v3); /*0x58a3e8*/
    *(Block + 1) = 0; /*0x58a3f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x58a3fb*/
  *(Block + 2) = 0; /*0x58a401*/
  if ( (a2 & 1) != 0 ) /*0x58a408*/
    __3_YAXPAX_Z(Block); /*0x58a40b*/
  return (VectorClass *)Block; /*0x58a415*/
}


// ==== 0x0058A420  _DynamicVectorClass_UZoneConnectionClass::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall unknown::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x58a423*/
  *Block = &vt_VectorClass_ZoneConnectionClass; /*0x58a426*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x58a430*/
  {
    __3_YAXPAX_Z(v3); /*0x58a438*/
    *(Block + 1) = 0; /*0x58a440*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x58a44b*/
  *(Block + 2) = 0; /*0x58a451*/
  if ( (a2 & 1) != 0 ) /*0x58a458*/
    __3_YAXPAX_Z(Block); /*0x58a45b*/
  return (DynamicVector *)Block; /*0x58a465*/
}


// ==== 0x0058A470  _VectorClass_USubzoneTrackingStruct::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_USubzoneTrackingStruct::QueryInterface(_DWORD *Block, char a2)
{
  int v3; // ecx
  int v4; // eax
  void *v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  void *v10; // eax
  void *v12; // [esp+8h] [ebp-4h]

  v3 = *(Block + 1); /*0x58a477*/
  *Block = &vt_VectorClass_SubzoneTrackingStruct; /*0x58a47a*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x58a484*/
  {
    v4 = *(_DWORD *)(v3 - 4); /*0x58a48d*/
    v5 = (void *)(v3 - 4); /*0x58a490*/
    v12 = (void *)(v3 - 4); /*0x58a494*/
    v6 = 9 * v4; /*0x58a498*/
    v7 = v4 - 1; /*0x58a49b*/
    v8 = v3 + 4 * v6; /*0x58a49c*/
    if ( v7 >= 0 ) /*0x58a49f*/
    {
      v9 = v7 + 1; /*0x58a4a2*/
      do /*0x58a4cd*/
      {
        v10 = *(void **)(v8 - 32); /*0x58a4a5*/
        v8 -= 36; /*0x58a4a8*/
        *(_DWORD *)v8 = &vt_VectorClass_SubzoneConnectionStruct; /*0x58a4ad*/
        if ( v10 && *(_BYTE *)(v8 + 13) ) /*0x58a4b5*/
        {
          __3_YAXPAX_Z(v10); /*0x58a4bb*/
          *(_DWORD *)(v8 + 4) = 0; /*0x58a4c3*/
        }
        --v9; /*0x58a4c6*/
        *(_BYTE *)(v8 + 13) = 0; /*0x58a4c7*/
        *(_DWORD *)(v8 + 8) = 0; /*0x58a4ca*/
      }
      while ( v9 ); /*0x58a4cd*/
      v5 = v12; /*0x58a4cf*/
    }
    __3_YAXPAX_Z(v5); /*0x58a4d5*/
    *(Block + 1) = 0; /*0x58a4de*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x58a4e5*/
  *(Block + 2) = 0; /*0x58a4ea*/
  if ( (a2 & 1) != 0 ) /*0x58a4ed*/
    __3_YAXPAX_Z(Block); /*0x58a4f0*/
  return (VectorClass *)Block; /*0x58a4fa*/
}


// ==== 0x0058A500  Subzone::CopyDataFrom  this=Subzone  sig=csp ====
int *__thiscall sub_58A500(int *this, int a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  if ( this != (int *)a2 ) /*0x58a50c*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x58a510*/
    v3 = *(_DWORD *)(a2 + 8); /*0x58a513*/
    this->Subzone_field_0x08 = v3; /*0x58a51a*/
    if ( v3 ) /*0x58a51d*/
    {
      v4 = (char *)__2_YAPAXI_Z(8 * v3); /*0x58a527*/
      if ( v4 ) /*0x58a531*/
      {
        v5 = v4; /*0x58a536*/
        if ( v3 - 1 >= 0 ) /*0x58a53a*/
        {
          v6 = v3; /*0x58a53c*/
          do /*0x58a546*/
          {
            *(_DWORD *)v5 = 0; /*0x58a53d*/
            v5[4] = 0; /*0x58a53f*/
            v5 += 8; /*0x58a542*/
            --v6; /*0x58a545*/
          }
          while ( v6 ); /*0x58a546*/
        }
      }
      else
      {
        v4 = 0; /*0x58a54a*/
      }
      this->Subzone_field_0x04 = (int)v4; /*0x58a54e*/
      if ( v4 ) /*0x58a551*/
      {
        v7 = this->Subzone_field_0x08; /*0x58a553*/
        v8 = 0; /*0x58a556*/
        *((_BYTE *)this + 13) = 1; /*0x58a55a*/
        if ( v7 > 0 ) /*0x58a55e*/
        {
          do /*0x58a57a*/
          {
            v9 = *(_DWORD *)(a2 + 4); /*0x58a560*/
            v10 = this->Subzone_field_0x04; /*0x58a563*/
            *(_DWORD *)(v10 + 8 * v8) = *(_DWORD *)(v9 + 8 * v8); /*0x58a569*/
            *(_DWORD *)(v10 + 8 * v8 + 4) = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x58a570*/
            ++v8; /*0x58a577*/
          }
          while ( v8 < this->Subzone_field_0x08 ); /*0x58a57a*/
        }
      }
    }
    else
    {
      this->Subzone_field_0x04 = 0; /*0x58a57e*/
      *((_BYTE *)this + 13) = 0; /*0x58a581*/
    }
  }
  this->Subzone_field_0x04 = *(_DWORD *)(a2 + 16); /*0x58a588*/
  this->q014 = *(_DWORD *)(a2 + 20); /*0x58a58e*/
  this->__pad_00C = *(_WORD *)(a2 + 24); /*0x58a595*/
  this->q01C = *(_DWORD *)(a2 + 28); /*0x58a59c*/
  this->Subzone_field_0x08 = *(_DWORD *)(a2 + 32); /*0x58a5a2*/
  return this; /*0x58a587*/
}


// ==== 0x0058A5B0  _DynamicVectorClass_USubzoneTrackingStruct::Destruct  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall SubzoneTrackingVector::Destruct(_DWORD *Block, char a2)
{
  int v3; // ecx
  int v4; // eax
  void *v5; // ebx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // ebp

  v3 = *(Block + 1); /*0x58a5b3*/
  *Block = &vt_VectorClass_SubzoneTrackingStruct; /*0x58a5b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x58a5c0*/
  {
    v4 = *(_DWORD *)(v3 - 4); /*0x58a5cb*/
    v5 = (void *)(v3 - 4); /*0x58a5cf*/
    v6 = 9 * v4; /*0x58a5d3*/
    v7 = v4 - 1; /*0x58a5d6*/
    v8 = (_DWORD *)(v3 + 4 * v6); /*0x58a5d7*/
    if ( v7 >= 0 ) /*0x58a5da*/
    {
      v9 = v7 + 1; /*0x58a5dd*/
      do /*0x58a5f1*/
      {
        v8 -= 9; /*0x58a5e0*/
        *v8 = &vt_VectorClass_SubzoneConnectionStruct; /*0x58a5e5*/
        VectorClass::Cleanup5((int)v8); /*0x58a5eb*/
        --v9; /*0x58a5f0*/
      }
      while ( v9 ); /*0x58a5f1*/
    }
    __3_YAXPAX_Z(v5); /*0x58a5f5*/
    *(Block + 1) = 0; /*0x58a5ff*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x58a60a*/
  *(Block + 2) = 0; /*0x58a610*/
  if ( (a2 & 1) != 0 ) /*0x58a617*/
    __3_YAXPAX_Z(Block); /*0x58a61a*/
  return (DynamicVector *)Block; /*0x58a624*/
}


// ==== 0x0058A630  _DynamicVectorClass_U_HashObject_II::Constructor  this=DynamicVector  sig=csp ====
char *__thiscall VectorClass_W4PassabilityType::Constructor(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v4; // ebp
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x58a63a*/
  {
    v3 = *(Block - 1); /*0x58a63c*/
    v4 = Block - 1; /*0x58a640*/
    v5 = 3 * v3; /*0x58a643*/
    v6 = v3 - 1; /*0x58a646*/
    v7 = Block + 2 * v5; /*0x58a647*/
    if ( v6 >= 0 ) /*0x58a64a*/
    {
      v8 = v6 + 1; /*0x58a64d*/
      do /*0x58a67a*/
      {
        v9 = (void *)*(v7 - 5); /*0x58a652*/
        v7 -= 6; /*0x58a655*/
        *v7 = &vt_VectorClass_HashObject_unsigned_int_unsigned_int; /*0x58a65a*/
        if ( v9 && *((_BYTE *)v7 + 13) ) /*0x58a662*/
        {
          __3_YAXPAX_Z(v9); /*0x58a668*/
          v7[1] = 0; /*0x58a670*/
        }
        --v8; /*0x58a673*/
        *((_BYTE *)v7 + 13) = 0; /*0x58a674*/
        v7[2] = 0; /*0x58a677*/
      }
      while ( v8 ); /*0x58a67a*/
    }
    if ( (a2 & 1) != 0 ) /*0x58a682*/
      __3_YAXPAX_Z(v4); /*0x58a685*/
    return (char *)v4; /*0x58a68d*/
  }
  else
  {
    v11 = (void *)*(Block + 1); /*0x58a695*/
    *Block = &vt_VectorClass_HashObject_unsigned_int_unsigned_int; /*0x58a69c*/
    if ( v11 && *((_BYTE *)Block + 13) ) /*0x58a6a4*/
    {
      __3_YAXPAX_Z(v11); /*0x58a6aa*/
      *(Block + 1) = 0; /*0x58a6b2*/
    }
    *((_BYTE *)Block + 13) = 0; /*0x58a6b9*/
    *(Block + 2) = 0; /*0x58a6be*/
    if ( (a2 & 1) != 0 ) /*0x58a6c1*/
      __3_YAXPAX_Z(Block); /*0x58a6c4*/
    return (char *)Block; /*0x58a6cc*/
  }
}


// ==== 0x0058A6E0  _VectorClass_U_HashObject_II::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UHashObject_uint_uint::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // edx

  if ( a2 ) /*0x58a6ec*/
  {
    v4 = a3; /*0x58a6f2*/
    this->IsInitialized = 0; /*0x58a6f6*/
    if ( a3 ) /*0x58a6fc*/
    {
      v6 = a3; /*0x58a724*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x58a706*/
      if ( v5 ) /*0x58a710*/
        v6 = v5; /*0x58a715*/
      else
        v6 = 0; /*0x58a71d*/
    }
    this->IsInitialized = 1; /*0x58a72c*/
    if ( v6 ) /*0x58a730*/
    {
      if ( this->Items ) /*0x58a73b*/
      {
        v8 = this->Capacity; /*0x58a742*/
        if ( a2 < v8 ) /*0x58a747*/
          v8 = a2; /*0x58a749*/
        v9 = 0; /*0x58a74b*/
        if ( v8 > 0 ) /*0x58a74f*/
        {
          do /*0x58a767*/
          {
            v10 = this->Items; /*0x58a751*/
            ++v9; /*0x58a754*/
            v6[2 * v9 - 2] = *(_DWORD *)(v10 + 8 * v9 - 8); /*0x58a75b*/
            v6[2 * v9 - 1] = *(_DWORD *)(v10 + 8 * v9 - 4); /*0x58a763*/
          }
          while ( v9 < v8 ); /*0x58a767*/
          v4 = a3; /*0x58a769*/
        }
        if ( this->IsAllocated ) /*0x58a76d*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x58a778*/
          this->Items = 0; /*0x58a780*/
        }
      }
      this->Items = v6; /*0x58a789*/
      this->Capacity = a2; /*0x58a791*/
      this->IsAllocated = v4 == 0; /*0x58a794*/
      return 1; /*0x58a79a*/
    }
    else
    {
      return 0; /*0x58a735*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x58a7a4*/
    return 1; /*0x58a7aa*/
  }
}


// ==== 0x0058A7B0  _VectorClass_U_HashObject_II::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UHashObject_uint_uint::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x58a7bd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x58a7c3*/
    *(_DWORD *)(this + 4) = 0; /*0x58a7cb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x58a7ce*/
  *(_DWORD *)(this + 8) = 0; /*0x58a7d1*/
}


// ==== 0x0058A7E0  _VectorClass_U_HashObject_II::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UHashObject_uint_uint::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x58a7e0*/
    return 0; /*0x58a7e8*/
  v3 = *(_DWORD *)(this + 8); /*0x58a7ee*/
  result = 0; /*0x58a7f1*/
  if ( v3 <= 0 ) /*0x58a7f5*/
    return -1; /*0x58a80c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; i += 2 ) /*0x58a7fb*/
  {
    if ( ++result >= v3 ) /*0x58a80a*/
      return -1; /*0x58a80a*/
  }
  return result; /*0x58a7ea*/
}


// ==== 0x0058A820  _VectorClass_U_HashObject_II::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UHashObject_uint_uint::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x58a820*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x58a835*/
  else
    return 0; /*0x58a827*/
}


// ==== 0x0058A840  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::Constructor_0  this=DynamicVector  sig=csp ====
char *__thiscall VectorClass_W4PassabilityType::Constructor_0(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v4; // ebp
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x58a84a*/
  {
    v3 = *(Block - 1); /*0x58a84c*/
    v4 = Block - 1; /*0x58a850*/
    v5 = 3 * v3; /*0x58a853*/
    v6 = v3 - 1; /*0x58a856*/
    v7 = Block + 2 * v5; /*0x58a857*/
    if ( v6 >= 0 ) /*0x58a85a*/
    {
      v8 = v6 + 1; /*0x58a85d*/
      do /*0x58a88a*/
      {
        v9 = (void *)*(v7 - 5); /*0x58a862*/
        v7 -= 6; /*0x58a865*/
        *v7 = &vt_VectorClass_HashObject_unsigned_int_SubzoneConnectionStruct; /*0x58a86a*/
        if ( v9 && *((_BYTE *)v7 + 13) ) /*0x58a872*/
        {
          __3_YAXPAX_Z(v9); /*0x58a878*/
          v7[1] = 0; /*0x58a880*/
        }
        --v8; /*0x58a883*/
        *((_BYTE *)v7 + 13) = 0; /*0x58a884*/
        v7[2] = 0; /*0x58a887*/
      }
      while ( v8 ); /*0x58a88a*/
    }
    if ( (a2 & 1) != 0 ) /*0x58a892*/
      __3_YAXPAX_Z(v4); /*0x58a895*/
    return (char *)v4; /*0x58a89d*/
  }
  else
  {
    v11 = (void *)*(Block + 1); /*0x58a8a5*/
    *Block = &vt_VectorClass_HashObject_unsigned_int_SubzoneConnectionStruct; /*0x58a8ac*/
    if ( v11 && *((_BYTE *)Block + 13) ) /*0x58a8b4*/
    {
      __3_YAXPAX_Z(v11); /*0x58a8ba*/
      *(Block + 1) = 0; /*0x58a8c2*/
    }
    *((_BYTE *)Block + 13) = 0; /*0x58a8c9*/
    *(Block + 2) = 0; /*0x58a8ce*/
    if ( (a2 & 1) != 0 ) /*0x58a8d1*/
      __3_YAXPAX_Z(Block); /*0x58a8d4*/
    return (char *)Block; /*0x58a8dc*/
  }
}


// ==== 0x0058A8F0  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UHashObject_uint_SubzoneConn::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  char *v14; // ebx
  _DWORD *v15; // edx

  v3 = a2; /*0x58a8f2*/
  if ( a2 ) /*0x58a8fe*/
  {
    v5 = a3; /*0x58a904*/
    this->IsInitialized = 0; /*0x58a908*/
    if ( a3 ) /*0x58a90d*/
    {
      if ( a2 - 1 >= 0 ) /*0x58a946*/
      {
        v9 = a3 + 4; /*0x58a948*/
        v10 = a2; /*0x58a94b*/
        do /*0x58a955*/
        {
          *(_DWORD *)v9 = 0; /*0x58a94c*/
          v9[4] = 0; /*0x58a94e*/
          v9 += 12; /*0x58a951*/
          --v10; /*0x58a954*/
        }
        while ( v10 ); /*0x58a955*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(12 * a2); /*0x58a917*/
      if ( v6 ) /*0x58a921*/
      {
        if ( a2 - 1 >= 0 ) /*0x58a928*/
        {
          v7 = v6 + 4; /*0x58a92a*/
          v8 = a2; /*0x58a92d*/
          do /*0x58a937*/
          {
            *(_DWORD *)v7 = 0; /*0x58a92e*/
            v7[4] = 0; /*0x58a930*/
            v7 += 12; /*0x58a933*/
            --v8; /*0x58a936*/
          }
          while ( v8 ); /*0x58a937*/
        }
        v5 = v6; /*0x58a939*/
      }
      else
      {
        v5 = 0; /*0x58a93d*/
      }
    }
    this->IsInitialized = 1; /*0x58a959*/
    if ( v5 ) /*0x58a95d*/
    {
      if ( this->Items ) /*0x58a968*/
      {
        v12 = this->Capacity; /*0x58a96d*/
        if ( a2 < v12 ) /*0x58a972*/
          v12 = a2; /*0x58a974*/
        if ( v12 > 0 ) /*0x58a978*/
        {
          v13 = 0; /*0x58a97a*/
          do /*0x58a998*/
          {
            v14 = &v5[v13]; /*0x58a97f*/
            v15 = (_DWORD *)(v13 + this->Items); /*0x58a982*/
            v13 += 12; /*0x58a984*/
            --v12; /*0x58a987*/
            *(_DWORD *)v14 = *v15; /*0x58a98a*/
            *((_DWORD *)v14 + 1) = v15[1]; /*0x58a98f*/
            *((_DWORD *)v14 + 2) = v15[2]; /*0x58a995*/
          }
          while ( v12 ); /*0x58a998*/
          v3 = a2; /*0x58a99a*/
        }
        if ( this->IsAllocated ) /*0x58a9a0*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x58a9a9*/
          this->Items = 0; /*0x58a9b1*/
        }
      }
      this->Items = v5; /*0x58a9bc*/
      this->Capacity = v3; /*0x58a9c2*/
      this->IsAllocated = a3 == 0; /*0x58a9c5*/
      return 1; /*0x58a9cb*/
    }
    else
    {
      return 0; /*0x58a962*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x58a9d5*/
    return 1; /*0x58a9db*/
  }
}


// ==== 0x0058A9F0  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UHashObject_uint_SubzoneConn::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x58a9fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x58aa03*/
    *(_DWORD *)(this + 4) = 0; /*0x58aa0b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x58aa0e*/
  *(_DWORD *)(this + 8) = 0; /*0x58aa11*/
}


// ==== 0x0058AA20  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UHashObject_uint_SubzoneConn::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x58aa20*/
    return 0; /*0x58aa28*/
  v3 = *(_DWORD *)(this + 8); /*0x58aa2e*/
  result = 0; /*0x58aa31*/
  if ( v3 <= 0 ) /*0x58aa35*/
    return -1; /*0x58aa4c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; i += 3 ) /*0x58aa3b*/
  {
    if ( ++result >= v3 ) /*0x58aa4a*/
      return -1; /*0x58aa4a*/
  }
  return result; /*0x58aa2a*/
}


// ==== 0x0058AA60  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UHashObject_uint_SubzoneConn::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x58aa60*/
    return (a2 - *(_DWORD *)(this + 4)) / 0xCu; /*0x58aa7e*/
  else
    return 0; /*0x58aa67*/
}


// ==== 0x0058AA90  _VectorClass_W4PassabilityType::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_W4PassabilityType::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x58aa93*/
  *Block = &vt_VectorClass_enum_PassabilityType; /*0x58aa96*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x58aaa0*/
  {
    __3_YAXPAX_Z(v3); /*0x58aaa8*/
    *(Block + 1) = 0; /*0x58aab0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x58aabb*/
  *(Block + 2) = 0; /*0x58aac1*/
  if ( (a2 & 1) != 0 ) /*0x58aac8*/
    __3_YAXPAX_Z(Block); /*0x58aacb*/
  return (VectorClass *)Block; /*0x58aad5*/
}


// ==== 0x0058AAE0  _DynamicVectorClass_W4PassabilityType::Constructor_1  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_W4PassabilityType::Constructor_1(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x58aae3*/
  *Block = &vt_VectorClass_enum_PassabilityType; /*0x58aae6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x58aaf0*/
  {
    __3_YAXPAX_Z(v3); /*0x58aaf8*/
    *(Block + 1) = 0; /*0x58ab00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x58ab0b*/
  *(Block + 2) = 0; /*0x58ab11*/
  if ( (a2 & 1) != 0 ) /*0x58ab18*/
    __3_YAXPAX_Z(Block); /*0x58ab1b*/
  return (DynamicVector *)Block; /*0x58ab25*/
}


// ==== 0x0058AB30  _VectorClass_U_HashObject_II::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_UHashObject_uint_uint::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x58ab33*/
  *Block = &vt_VectorClass_HashObject_unsigned_int_unsigned_int; /*0x58ab36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x58ab40*/
  {
    __3_YAXPAX_Z(v3); /*0x58ab48*/
    *(Block + 1) = 0; /*0x58ab50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x58ab5b*/
  *(Block + 2) = 0; /*0x58ab61*/
  if ( (a2 & 1) != 0 ) /*0x58ab68*/
    __3_YAXPAX_Z(Block); /*0x58ab6b*/
  return (VectorClass *)Block; /*0x58ab75*/
}


// ==== 0x0058AB80  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_UHashObject_uint_SubzoneConn::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x58ab83*/
  *Block = &vt_VectorClass_HashObject_unsigned_int_SubzoneConnectionStruct; /*0x58ab86*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x58ab90*/
  {
    __3_YAXPAX_Z(v3); /*0x58ab98*/
    *(Block + 1) = 0; /*0x58aba0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x58abab*/
  *(Block + 2) = 0; /*0x58abb1*/
  if ( (a2 & 1) != 0 ) /*0x58abb8*/
    __3_YAXPAX_Z(Block); /*0x58abbb*/
  return (VectorClass *)Block; /*0x58abc5*/
}


// ==== 0x0058ABD0  Radar::CopyDataArray  this=Radar  sig=csp ====
int *__thiscall sub_58ABD0(int *this, int *a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  if ( this != a2 ) /*0x58abdc*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x58abe0*/
    v3 = a2[2]; /*0x58abe3*/
    this->Radar_field_0x2 = v3; /*0x58abea*/
    if ( v3 ) /*0x58abed*/
    {
      v4 = (char *)__2_YAPAXI_Z(8 * v3); /*0x58abf7*/
      if ( v4 ) /*0x58ac01*/
      {
        v5 = v4; /*0x58ac06*/
        if ( v3 - 1 >= 0 ) /*0x58ac0a*/
        {
          v6 = v3; /*0x58ac0c*/
          do /*0x58ac16*/
          {
            *(_DWORD *)v5 = 0; /*0x58ac0d*/
            v5[4] = 0; /*0x58ac0f*/
            v5 += 8; /*0x58ac12*/
            --v6; /*0x58ac15*/
          }
          while ( v6 ); /*0x58ac16*/
        }
      }
      else
      {
        v4 = 0; /*0x58ac1a*/
      }
      this->q004 = (int)v4; /*0x58ac1e*/
      if ( v4 ) /*0x58ac21*/
      {
        v7 = this->Radar_field_0x2; /*0x58ac23*/
        v8 = 0; /*0x58ac26*/
        this->__pad_034 = 1; /*0x58ac2a*/
        if ( v7 > 0 ) /*0x58ac2e*/
        {
          do /*0x58ac4a*/
          {
            v9 = a2[1]; /*0x58ac30*/
            v10 = this->q004; /*0x58ac33*/
            *(_DWORD *)(v10 + 8 * v8) = *(_DWORD *)(v9 + 8 * v8); /*0x58ac39*/
            *(_DWORD *)(v10 + 8 * v8 + 4) = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x58ac40*/
            ++v8; /*0x58ac47*/
          }
          while ( v8 < this->Radar_field_0x2 ); /*0x58ac4a*/
        }
      }
    }
    else
    {
      this->q004 = 0; /*0x58ac4e*/
      this->__pad_034 = 0; /*0x58ac51*/
    }
  }
  this->q004 = a2[4]; /*0x58ac58*/
  this->Radar_field_0x14 = a2[5]; /*0x58ac5e*/
  return this; /*0x58ac57*/
}


// ==== 0x0058AC70  VectorClass::ConstructSubzone  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Constructor_Subzone(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char *v7; // eax
  char *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x58ac7d*/
  this->Capacity = a2; /*0x58ac80*/
  this->q030 = 1; /*0x58ac83*/
  this->__pad_034 = 0; /*0x58ac87*/
  *this = &vt_VectorClass_SubzoneConnectionStruct; /*0x58ac8a*/
  if ( !a2 ) /*0x58ac90*/
    return this; /*0x58ac90*/
  if ( !a3 ) /*0x58ac98*/
  {
    v7 = (char *)__2_YAPAXI_Z(8 * a2); /*0x58acc2*/
    if ( v7 ) /*0x58accc*/
    {
      v8 = v7; /*0x58acd1*/
      if ( a2 - 1 >= 0 ) /*0x58acd5*/
      {
        v9 = a2; /*0x58acd7*/
        do /*0x58ace1*/
        {
          *(_DWORD *)v8 = 0; /*0x58acd8*/
          v8[4] = 0; /*0x58acda*/
          v8 += 8; /*0x58acdd*/
          --v9; /*0x58ace0*/
        }
        while ( v9 ); /*0x58ace1*/
        this->Items = v7; /*0x58ace3*/
        this->__pad_034 = 1; /*0x58ace6*/
        return this; /*0x58acef*/
      }
    }
    else
    {
      v7 = 0; /*0x58acf2*/
    }
    this->Items = v7; /*0x58acf4*/
    this->__pad_034 = 1; /*0x58acf7*/
    return this; /*0x58acfb*/
  }
  v4 = a3; /*0x58ac9d*/
  if ( a2 - 1 >= 0 ) /*0x58aca1*/
  {
    v5 = a2; /*0x58aca3*/
    do /*0x58acad*/
    {
      *(_DWORD *)v4 = 0; /*0x58aca4*/
      *(_BYTE *)(v4 + 4) = 0; /*0x58aca6*/
      v4 += 8; /*0x58aca9*/
      --v5; /*0x58acac*/
    }
    while ( v5 ); /*0x58acad*/
  }
  this->Items = a3; /*0x58acaf*/
  return this; /*0x58acb4*/
}


// ==== 0x0058AD10  VectorClass_USubzoneTrackingStruct::SetCapacity  this=VectorClass_USubzoneTrackingStruct  sig=csp ====
_DWORD *__thiscall sub_58AD10(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  if ( this == a2 ) /*0x58ad1c*/
    return this; /*0x58ad1c*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x58ad20*/
  v3 = a2[2]; /*0x58ad23*/
  this->Capacity = v3; /*0x58ad2a*/
  if ( !v3 ) /*0x58ad2d*/
  {
    this->Items = 0; /*0x58ad95*/
    this->IsAllocated = 0; /*0x58ad98*/
    return this; /*0x58ad9b*/
  }
  v4 = (char *)__2_YAPAXI_Z(8 * v3); /*0x58ad37*/
  if ( v4 ) /*0x58ad41*/
  {
    v5 = v4; /*0x58ad46*/
    if ( v3 - 1 >= 0 ) /*0x58ad4a*/
    {
      v6 = v3; /*0x58ad4c*/
      do /*0x58ad56*/
      {
        *(_DWORD *)v5 = 0; /*0x58ad4d*/
        v5[4] = 0; /*0x58ad4f*/
        v5 += 8; /*0x58ad52*/
        --v6; /*0x58ad55*/
      }
      while ( v6 ); /*0x58ad56*/
    }
  }
  else
  {
    v4 = 0; /*0x58ad5a*/
  }
  this->Items = v4; /*0x58ad5e*/
  if ( !v4 ) /*0x58ad61*/
    return this; /*0x58ad61*/
  v7 = this->Capacity; /*0x58ad63*/
  v8 = 0; /*0x58ad66*/
  this->IsAllocated = 1; /*0x58ad6a*/
  if ( v7 <= 0 ) /*0x58ad6e*/
    return this; /*0x58ad6e*/
  do /*0x58ad8a*/
  {
    v9 = a2[1]; /*0x58ad70*/
    v10 = this->Items; /*0x58ad73*/
    *(_DWORD *)(v10 + 8 * v8) = *(_DWORD *)(v9 + 8 * v8); /*0x58ad79*/
    *(_DWORD *)(v10 + 8 * v8 + 4) = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x58ad80*/
    ++v8; /*0x58ad87*/
  }
  while ( v8 < this->Capacity ); /*0x58ad8a*/
  return this; /*0x58ad8e*/
}


// ==== 0x0058ADB0  RadarClass::drawRadarTerrain  this=VectorClass  sig=csp ====
_DWORD *__thiscall RadarClass::drawRadarTerrain(_DWORD *this, MapClass *aP1, MapClass *aP2)
{
  int v4; // ebx
  MapClass *v5; // ecx
  char *v6; // eax
  int v8; // eax
  MapClass *v9; // edx
  int v10; // ecx

  v4 = 0; /*0x58adb9*/
  this->Items = 0; /*0x58adbd*/
  this->Capacity = aP1; /*0x58adc0*/
  this->q030 = 1; /*0x58adc3*/
  this->__pad_034 = 0; /*0x58adc7*/
  *this = &vt_VectorClass_ZoneConnectionClass; /*0x58adca*/
  if ( !aP1 ) /*0x58add0*/
    return this; /*0x58ae56*/
  if ( !aP2 ) /*0x58addc*/
  {
    v8 = __2_YAPAXI_Z(16 * (_DWORD)aP1); /*0x58ae18*/
    if ( v8 ) /*0x58ae22*/
    {
      if ( (int)&aP1[-1].field_16C0 + 3 >= 0 ) /*0x58ae29*/
      {
        v9 = aP1; /*0x58ae2b*/
        v10 = v8 + 2; /*0x58ae2c*/
        do /*0x58ae4b*/
        {
          *(_WORD *)(v10 - 2) = 0; /*0x58ae32*/
          *(_WORD *)v10 = 0; /*0x58ae36*/
          *(_WORD *)(v10 + 2) = 0; /*0x58ae39*/
          *(_WORD *)(v10 + 4) = 0; /*0x58ae3d*/
          *(_BYTE *)(v10 + 6) = 0; /*0x58ae41*/
          *(_DWORD *)(v10 + 10) = -1; /*0x58ae44*/
          v10 += 16; /*0x58ae47*/
          v9 = (MapClass *)((char *)v9 - 1); /*0x58ae4a*/
        }
        while ( v9 ); /*0x58ae4b*/
      }
      v4 = v8; /*0x58ae4d*/
    }
    this->Items = v4; /*0x58ae4f*/
    this->__pad_034 = 1; /*0x58ae52*/
    return this; /*0x58ae52*/
  }
  if ( (int)&aP1[-1].field_16C0 + 3 >= 0 ) /*0x58ade3*/
  {
    v5 = aP1; /*0x58ade5*/
    v6 = (char *)&aP2->field_0 + 2; /*0x58ade6*/
    do /*0x58ae05*/
    {
      *((_WORD *)v6 - 1) = 0; /*0x58adec*/
      *(_WORD *)v6 = 0; /*0x58adf0*/
      *((_WORD *)v6 + 1) = 0; /*0x58adf3*/
      *((_WORD *)v6 + 2) = 0; /*0x58adf7*/
      v6[6] = 0; /*0x58adfb*/
      *(_DWORD *)(v6 + 10) = -1; /*0x58adfe*/
      v6 += 16; /*0x58ae01*/
      v5 = (MapClass *)((char *)v5 - 1); /*0x58ae04*/
    }
    while ( v5 ); /*0x58ae05*/
  }
  this->Items = aP2; /*0x58ae07*/
  return this; /*0x58ae0c*/
}


// ==== 0x0058AE60  RadarClass::RenderJammerRadius  this=RadarClass  sig=csp ====
_DWORD *__thiscall RadarClass::RenderJammerRadius(_DWORD *this, MapClass *aP1, MapClass *aP2)
{
  _DWORD *v3; // ebp
  MapClass *v4; // ebx
  void **v5; // esi
  MapClass *v6; // edi
  MapClass **v8; // eax
  MapClass *v9; // eax
  char *v10; // edi
  MapClass *v11; // esi
  char *v12; // edi
  MapClass *aP1a; // [esp+18h] [ebp+4h]

  v3 = this; /*0x58ae69*/
  v4 = 0; /*0x58ae6b*/
  this->RadarClass_field_0x4 = 0; /*0x58ae73*/
  this->RadarClass_field_0x8 = aP1; /*0x58ae76*/
  this->q030 = 1; /*0x58ae79*/
  this->MovementZones = 0; /*0x58ae7d*/
  *this = &vt_VectorClass_SubzoneTrackingStruct; /*0x58ae80*/
  if ( !aP1 ) /*0x58ae87*/
    return v3; /*0x58af69*/
  if ( !aP2 ) /*0x58ae93*/
  {
    v8 = (MapClass **)__2_YAPAXI_Z(36 * (_DWORD)aP1 + 4); /*0x58aeff*/
    if ( v8 ) /*0x58af09*/
    {
      *v8 = aP1; /*0x58af0b*/
      v9 = (MapClass *)(v8 + 1); /*0x58af0d*/
      v10 = (char *)&aP1[-1].field_16C0 + 3; /*0x58af10*/
      aP1a = v9; /*0x58af11*/
      v11 = v9; /*0x58af17*/
      if ( (int)v10 >= 0 ) /*0x58af19*/
      {
        v12 = v10 + 1; /*0x58af1b*/
        do /*0x58af55*/
        {
          v11->field_4 = 0; /*0x58af21*/
          v11->field_8 = 0; /*0x58af24*/
          LOBYTE(v11->field_C) = 1; /*0x58af27*/
          BYTE1(v11->field_C) = 0; /*0x58af2b*/
          v11->field_0 = (int)&vt_VectorClass_SubzoneConnectionStruct; /*0x58af2e*/
          v11->field_0 = (int)&vt_DynamicVectorClass_SubzoneConnectionStruct; /*0x58af34*/
          v11->field_14 = (void *)10; /*0x58af3a*/
          v11->field_10 = 0; /*0x58af3d*/
          (*(void (__thiscall **)(MapClass *))(v11->field_0 + 12))(v11); /*0x58af44*/
          *(_WORD *)v11->__pad_18 = 0; /*0x58af47*/
          *(_DWORD *)&v11->__pad_18[4] = 0; /*0x58af4b*/
          *(_DWORD *)&v11->__pad_18[8] = 0; /*0x58af4e*/
          v11 = (MapClass *)((char *)v11 + 36); /*0x58af51*/
          --v12; /*0x58af54*/
        }
        while ( v12 ); /*0x58af55*/
        v3 = this; /*0x58af57*/
        v9 = aP1a; /*0x58af5b*/
      }
      v4 = v9; /*0x58af5f*/
    }
    v3[1] = v4; /*0x58af61*/
    *((_BYTE *)v3 + 13) = 1; /*0x58af64*/
    return v3; /*0x58af64*/
  }
  aP2->field_0 = (int)aP1; /*0x58ae95*/
  v5 = &aP2->field_4; /*0x58ae98*/
  if ( (int)&aP1[-1].field_16C0 + 3 >= 0 ) /*0x58aea1*/
  {
    v6 = aP1; /*0x58aea3*/
    do /*0x58aedd*/
    {
      v5[1] = 0; /*0x58aea9*/
      v5[2] = 0; /*0x58aeac*/
      *((_BYTE *)v5 + 12) = 1; /*0x58aeaf*/
      *((_BYTE *)v5 + 13) = 0; /*0x58aeb3*/
      *v5 = &vt_VectorClass_SubzoneConnectionStruct; /*0x58aeb6*/
      *v5 = &vt_DynamicVectorClass_SubzoneConnectionStruct; /*0x58aebc*/
      v5[5] = (void *)10; /*0x58aec2*/
      v5[4] = 0; /*0x58aec5*/
      (*((void (__thiscall **)(void **))*v5 + 3))(v5); /*0x58aecc*/
      *((_WORD *)v5 + 12) = 0; /*0x58aecf*/
      v5[7] = 0; /*0x58aed3*/
      v5[8] = 0; /*0x58aed6*/
      v5 += 9; /*0x58aed9*/
      v6 = (MapClass *)((char *)v6 - 1); /*0x58aedc*/
    }
    while ( v6 ); /*0x58aedd*/
    v3 = this; /*0x58aedf*/
    v5 = &aP2->field_4; /*0x58aee3*/
  }
  v3[1] = v5; /*0x58aee7*/
  return v3; /*0x58aeea*/
}


// ==== 0x0058AF80  RadarClass::drawRadarEvents  this=RadarClass  sig=csp ====
char __thiscall sub_58AF80(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // ecx

  v3 = this->RadarClass_field_0x8; /*0x58af83*/
  if ( this->RadarClass_field_0x10 >= v3 ) /*0x58af8b*/
  {
    if ( !this->MovementZones && v3 ) /*0x58af96*/
      return 0; /*0x58af96*/
    v4 = this->q014; /*0x58af98*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x58afa8*/
      return 0; /*0x58afaf*/
  }
  v6 = this->RadarClass_field_0x10; /*0x58afb5*/
  v7 = v6 + 1; /*0x58afb8*/
  v8 = 3 * v6; /*0x58afbb*/
  v9 = this->RadarClass_field_0x4; /*0x58afbe*/
  this->RadarClass_field_0x10 = v7; /*0x58afc1*/
  v10 = (_DWORD *)(v9 + 4 * v8); /*0x58afc5*/
  *v10 = *a2; /*0x58afce*/
  v10[1] = a2[1]; /*0x58afd3*/
  v10[2] = a2[2]; /*0x58afdb*/
  return 1; /*0x58afb1*/
}


// ==== 0x0058AFF0  HashVector_UInt::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_58AFF0(_DWORD *this, int a2, int a3)
{
  void *v5; // eax

  this->Items = 0; /*0x58affa*/
  this->Capacity = a2; /*0x58b001*/
  this->q030 = 1; /*0x58b004*/
  this->__pad_034 = 0; /*0x58b008*/
  *this = &vt_VectorClass_HashObject_unsigned_int_unsigned_int; /*0x58b00c*/
  if ( a2 ) /*0x58b012*/
  {
    if ( a3 ) /*0x58b01a*/
    {
      this->Items = a3; /*0x58b01d*/
      return this; /*0x58b028*/
    }
    v5 = __2_YAPAXI_Z(8 * a2); /*0x58b033*/
    if ( v5 ) /*0x58b03d*/
    {
      this->Items = v5; /*0x58b040*/
      this->__pad_034 = 1; /*0x58b047*/
      return this; /*0x58b04f*/
    }
    this->__pad_034 = 1; /*0x58b054*/
    this->Items = 0; /*0x58b058*/
  }
  return this; /*0x58b026*/
}


// ==== 0x0058B070  SubzoneHashVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_58B070(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char *v7; // eax
  char *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x58b07d*/
  this->Capacity = a2; /*0x58b080*/
  this->q030 = 1; /*0x58b083*/
  this->__pad_034 = 0; /*0x58b087*/
  *this = &vt_VectorClass_HashObject_unsigned_int_SubzoneConnectionStruct; /*0x58b08a*/
  if ( !a2 ) /*0x58b090*/
    return this; /*0x58b090*/
  if ( !a3 ) /*0x58b098*/
  {
    v7 = (char *)__2_YAPAXI_Z(12 * a2); /*0x58b0c2*/
    if ( v7 ) /*0x58b0cc*/
    {
      if ( a2 - 1 >= 0 ) /*0x58b0d3*/
      {
        v8 = v7 + 4; /*0x58b0d5*/
        v9 = a2; /*0x58b0d8*/
        do /*0x58b0e2*/
        {
          *(_DWORD *)v8 = 0; /*0x58b0d9*/
          v8[4] = 0; /*0x58b0db*/
          v8 += 12; /*0x58b0de*/
          --v9; /*0x58b0e1*/
        }
        while ( v9 ); /*0x58b0e2*/
        this->Items = v7; /*0x58b0e4*/
        this->__pad_034 = 1; /*0x58b0e7*/
        return this; /*0x58b0f0*/
      }
    }
    else
    {
      v7 = 0; /*0x58b0f3*/
    }
    this->Items = v7; /*0x58b0f5*/
    this->__pad_034 = 1; /*0x58b0f8*/
    return this; /*0x58b0fc*/
  }
  if ( a2 - 1 >= 0 ) /*0x58b09f*/
  {
    v4 = a3 + 4; /*0x58b0a1*/
    v5 = a2; /*0x58b0a4*/
    do /*0x58b0ae*/
    {
      *(_DWORD *)v4 = 0; /*0x58b0a5*/
      *(_BYTE *)(v4 + 4) = 0; /*0x58b0a7*/
      v4 += 12; /*0x58b0aa*/
      --v5; /*0x58b0ad*/
    }
    while ( v5 ); /*0x58b0ae*/
  }
  this->Items = a3; /*0x58b0b0*/
  return this; /*0x58b0b5*/
}


// ==== 0x0058B110  sub_58B110  this=-  sig=ida-proto ====
int sub_58B110()
{
  dword_ABDE98 = 0; /*0x58b112*/
  dword_ABDE9C = 0; /*0x58b117*/
  dword_ABDEA0 = 0; /*0x58b11c*/
  dword_ABDEA4 = 0; /*0x58b121*/
  return 0; /*0x58b126*/
}


// ==== 0x0058B130  sub_58B130  this=-  sig=ida-proto ====
void sub_58B130()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x58b13c*/
  dbl_ABDEB0 = Math::Sqrt(v0 + v0); /*0x58b14e*/
}


// ==== 0x0058B160  sub_58B160  this=-  sig=ida-proto ====
void sub_58B160()
{
  dbl_ABDF00 = dbl_ABDEB0 / 60.0; /*0x58b16c*/
}


// ==== 0x0058B180  sub_58B180  this=-  sig=ida-proto ====
void sub_58B180()
{
  dbl_ABDEE8 = 1.0 / dbl_ABDF00; /*0x58b18c*/
}


// ==== 0x0058B1A0  sub_58B1A0  this=-  sig=ida-proto ====
void sub_58B1A0()
{
  dbl_ABDEE0 = 0.0174532925199433 * 45.0; /*0x58b1ac*/
}


// ==== 0x0058B1C0  sub_58B1C0  this=-  sig=ida-proto ====
void sub_58B1C0()
{
  dbl_ABDEB8 = 0.0174532925199433 * 60.0; /*0x58b1cc*/
}


// ==== 0x0058B1E0  sub_58B1E0  this=-  sig=ida-proto ====
void sub_58B1E0()
{
  dbl_ABDE90 = 0.0174532925199433 * 90.0; /*0x58b1ec*/
}


// ==== 0x0058B200  sub_58B200  this=-  sig=ida-proto ====
__int64 sub_58B200()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABDE90 - dbl_ABDEB8); /*0x58b212*/
  result = Math::RoundToInt(v0 * dbl_ABDEB0 * 0.5); /*0x58b226*/
  dword_ABDF08 = result; /*0x58b22b*/
  return result; /*0x58b230*/
}


// ==== 0x0058B240  sub_58B240  this=-  sig=ida-proto ====
void sub_58B240()
{
  dbl_ABDEC0 = Math::ArcTan((double)dword_ABDF08 * 0.00390625); /*0x58b257*/
}


// ==== 0x0058B270  sub_58B270  this=-  sig=ida-proto ====
void sub_58B270()
{
  dbl_ABDED8 = Math::ArcTan((double)(2 * dword_ABDF08) / dbl_ABDEB0); /*0x58b292*/
}


// ==== 0x0058B2A0  sub_58B2A0  this=-  sig=ida-proto ====
__int64 sub_58B2A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABDF08) + 0.5); /*0x58b2bb*/
  dword_ABDEFC = result; /*0x58b2c0*/
  return result; /*0x58b2c6*/
}


// ==== 0x0058B2D0  sub_58B2D0  this=-  sig=ida-proto ====
int sub_58B2D0()
{
  word_ABDEA8 = 0; /*0x58b2d2*/
  word_ABDEAA = 0; /*0x58b2d8*/
  return 0; /*0x58b2de*/
}


// ==== 0x0058B2E0  sub_58B2E0  this=-  sig=ida-proto ====
int sub_58B2E0()
{
  dword_ABDEC8 = 0; /*0x58b2e2*/
  dword_ABDECC = 0; /*0x58b2e7*/
  dword_ABDED0 = 0; /*0x58b2ec*/
  return 0; /*0x58b2f1*/
}


// ==== 0x0058B300  sub_58B300  this=-  sig=ida-proto ====
int sub_58B300()
{
  dword_ABDEF8 = 0; /*0x58b305*/
  dword_ABDEF0 = 128; /*0x58b30f*/
  dword_ABDEF4 = 128; /*0x58b314*/
  return 128; /*0x58b319*/
}


// ==== 0x0058B320  sub_58B320  this=-  sig=ida-proto ====
int sub_58B320()
{
  dword_ABDF18 = 0; /*0x58b322*/
  dword_ABDF1C = 0; /*0x58b327*/
  dword_ABDF20 = 0; /*0x58b32c*/
  dword_ABDF24 = 0; /*0x58b331*/
  return 0; /*0x58b336*/
}


// ==== 0x0058B340  sub_58B340  this=-  sig=ida-proto ====
void sub_58B340()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x58b34c*/
  dbl_ABDF30 = Math::Sqrt(v0 + v0); /*0x58b35e*/
}


// ==== 0x0058B370  sub_58B370  this=-  sig=ida-proto ====
void sub_58B370()
{
  dbl_ABDF80 = dbl_ABDF30 / 60.0; /*0x58b37c*/
}


// ==== 0x0058B390  sub_58B390  this=-  sig=ida-proto ====
void sub_58B390()
{
  dbl_ABDF68 = 1.0 / dbl_ABDF80; /*0x58b39c*/
}


// ==== 0x0058B3B0  sub_58B3B0  this=-  sig=ida-proto ====
void sub_58B3B0()
{
  dbl_ABDF60 = 0.0174532925199433 * 45.0; /*0x58b3bc*/
}


// ==== 0x0058B3D0  sub_58B3D0  this=-  sig=ida-proto ====
void sub_58B3D0()
{
  dbl_ABDF38 = 0.0174532925199433 * 60.0; /*0x58b3dc*/
}


// ==== 0x0058B3F0  sub_58B3F0  this=-  sig=ida-proto ====
void sub_58B3F0()
{
  dbl_ABDF10 = 0.0174532925199433 * 90.0; /*0x58b3fc*/
}


// ==== 0x0058B410  sub_58B410  this=-  sig=ida-proto ====
__int64 sub_58B410()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABDF10 - dbl_ABDF38); /*0x58b422*/
  result = Math::RoundToInt(v0 * dbl_ABDF30 * 0.5); /*0x58b436*/
  dword_ABDF88 = result; /*0x58b43b*/
  return result; /*0x58b440*/
}


// ==== 0x0058B450  sub_58B450  this=-  sig=ida-proto ====
void sub_58B450()
{
  dbl_ABDF40 = Math::ArcTan((double)dword_ABDF88 * 0.00390625); /*0x58b467*/
}


// ==== 0x0058B480  sub_58B480  this=-  sig=ida-proto ====
void sub_58B480()
{
  dbl_ABDF58 = Math::ArcTan((double)(2 * dword_ABDF88) / dbl_ABDF30); /*0x58b4a2*/
}


// ==== 0x0058B4B0  sub_58B4B0  this=-  sig=ida-proto ====
__int64 sub_58B4B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABDF88) + 0.5); /*0x58b4cb*/
  dword_ABDF7C = result; /*0x58b4d0*/
  return result; /*0x58b4d6*/
}


// ==== 0x0058B4E0  sub_58B4E0  this=-  sig=ida-proto ====
int sub_58B4E0()
{
  word_ABDF28 = 0; /*0x58b4e2*/
  word_ABDF2A = 0; /*0x58b4e8*/
  return 0; /*0x58b4ee*/
}


// ==== 0x0058B4F0  sub_58B4F0  this=-  sig=ida-proto ====
int sub_58B4F0()
{
  dword_ABDF48 = 0; /*0x58b4f2*/
  dword_ABDF4C = 0; /*0x58b4f7*/
  dword_ABDF50 = 0; /*0x58b4fc*/
  return 0; /*0x58b501*/
}


// ==== 0x0058B510  sub_58B510  this=-  sig=ida-proto ====
int sub_58B510()
{
  dword_ABDF78 = 0; /*0x58b515*/
  dword_ABDF70 = 128; /*0x58b51f*/
  dword_ABDF74 = 128; /*0x58b524*/
  return 128; /*0x58b529*/
}


// ==== 0x0058B530  sub_58B530  this=-  sig=ida-proto ====
void sub_58B530()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x58b53c*/
  dbl_ABE368 = Math::Sqrt(v0 + v0); /*0x58b54e*/
}


// ==== 0x0058B560  sub_58B560  this=-  sig=ida-proto ====
void sub_58B560()
{
  dbl_ABECF8 = dbl_ABE368 / 60.0; /*0x58b56c*/
}


// ==== 0x0058B580  sub_58B580  this=-  sig=ida-proto ====
void sub_58B580()
{
  dbl_ABECE0 = 1.0 / dbl_ABECF8; /*0x58b58c*/
}


// ==== 0x0058B5A0  sub_58B5A0  this=-  sig=ida-proto ====
void sub_58B5A0()
{
  dbl_ABECD8 = 0.0174532925199433 * 45.0; /*0x58b5ac*/
}


// ==== 0x0058B5C0  sub_58B5C0  this=-  sig=ida-proto ====
void sub_58B5C0()
{
  dbl_ABEC88 = 0.0174532925199433 * 60.0; /*0x58b5cc*/
}


// ==== 0x0058B5E0  sub_58B5E0  this=-  sig=ida-proto ====
void sub_58B5E0()
{
  dbl_ABDFA8 = 0.0174532925199433 * 90.0; /*0x58b5ec*/
}


// ==== 0x0058B600  Camera::UpdateTilt  this=Camera  sig=ida-proto ====
__int64 Camera_UpdateTilt()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABDFA8 - dbl_ABEC88); /*0x58b612*/
  result = Math::RoundToInt(v0 * dbl_ABE368 * 0.5); /*0x58b626*/
  dword_ABED00 = result; /*0x58b62b*/
  return result; /*0x58b630*/
}


// ==== 0x0058B640  sub_58B640  this=-  sig=ida-proto ====
void sub_58B640()
{
  dbl_ABEC98 = Math::ArcTan((double)dword_ABED00 * 0.00390625); /*0x58b657*/
}


// ==== 0x0058B670  sub_58B670  this=-  sig=ida-proto ====
void sub_58B670()
{
  *(double *)&Buffer[40] = Math::ArcTan((double)(2 * dword_ABED00) / dbl_ABE368); /*0x58b692*/
}


// ==== 0x0058B6A0  sub_58B6A0  this=-  sig=ida-proto ====
__int64 sub_58B6A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABED00) + 0.5); /*0x58b6bb*/
  dword_ABECF4 = result; /*0x58b6c0*/
  return result; /*0x58b6c6*/
}


// ==== 0x0058B6D0  sub_58B6D0  this=-  sig=ida-proto ====
int sub_58B6D0()
{
  dword_ABE300 = 0; /*0x58b6d2*/
  return 0; /*0x58b6de*/
}


// ==== 0x0058B6E0  sub_58B6E0  this=-  sig=ida-proto ====
int sub_58B6E0()
{
  *(_DWORD *)&Buffer[24] = 0; /*0x58b6e2*/
  *(_DWORD *)&Buffer[28] = 0; /*0x58b6e7*/
  *(_DWORD *)&Buffer[32] = 0; /*0x58b6ec*/
  return 0; /*0x58b6f1*/
}


// ==== 0x0058B700  sub_58B700  this=-  sig=ida-proto ====
int sub_58B700()
{
  dword_ABECF0 = 0; /*0x58b705*/
  dword_ABECE8 = 128; /*0x58b70f*/
  dword_ABECEC = 128; /*0x58b714*/
  return 128; /*0x58b719*/
}


// ==== 0x0058B720  sub_58B720  this=-  sig=ida-proto ====
int sub_58B720()
{
  dword_ABE2F0 = 0; /*0x58b722*/
  dword_ABE2F4 = 0; /*0x58b727*/
  dword_ABE2F8 = 0; /*0x58b72c*/
  dword_ABE2FC = 0; /*0x58b731*/
  return 0; /*0x58b736*/
}


// ==== 0x0058B740  sub_58B740  this=-  sig=ida-proto ====
int sub_58B740()
{
  MapResourceClass::Constructor((int)dword_ABDFD8); /*0x58b745*/
  return atexit(unknown_libname_23); /*0x58b755*/
}


// ==== 0x0058B760  unknown_libname_23  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_23()
{
  RandomMap::CleanupRandomMapData((int)dword_ABDFD8); /*0x58b765*/
}


// ==== 0x0058B770  unknown_libname_24  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
_DWORD *unknown_libname_24()
{
  return SeedInitRNG(&g_Randomizer, 0); /*0x58b77c*/
}


// ==== 0x0058B780  sub_58B780  this=-  sig=ida-proto ====
void sub_58B780()
{
  g_TileSystemInit = 0; /*0x58b780*/
  dword_ABDFC0 = 0; /*0x58b787*/
  dword_ABDFC4 = 0; /*0x58b791*/
  dword_ABDFC8 = (int)sub_598000; /*0x58b79b*/
}


// ==== 0x0058B7B0  Camera::StubReturnFalse  this=Camera  sig=ida-proto ====
void Camera::StubReturnFalse()
{
  ; /*0x58b7b0*/
}


// ==== 0x0058B7C0  Camera::StubReturnVoid  this=Camera  sig=ida-proto ====
void Camera::StubReturnVoid()
{
  ; /*0x58b7c0*/
}


// ==== 0x0058B7D0  MapSeed::IsInitialized  this=MapSeed  sig=ida-proto ====
int MapSeed_IsInitialized()
{
  return dword_ABED0C; /*0x58b7d5*/
}


// ==== 0x0058B7E0  sub_58B7E0  this=-  sig=ida-proto ====
int sub_58B7E0()
{
  return dword_ABDFD4; /*0x58b7e5*/
}


// ==== 0x0058B7F0  sub_58B7F0  this=-  sig=ida-proto ====
int sub_58B7F0()
{
  return dword_ABDFD0; /*0x58b7f5*/
}


// ==== 0x0058B800  sub_58B800  this=-  sig=ida-proto ====
int sub_58B800()
{
  return dword_ABEC90; /*0x58b805*/
}


// ==== 0x0058B810  sub_58B810  this=-  sig=ida-proto ====
MapSeedClass *sub_58B810()
{
  return dword_ABECD0; /*0x58b815*/
}


// ==== 0x0058B820  ObjectClass::ComputeMapCameraBounds  this=ObjectClass  sig=csp ====
void *ComputeMapCameraBounds()
{
  void *result; // eax
  int v1; // ebp
  int i; // edi
  __int16 *WaypointLocationScenarioClass; // eax
  void *v4; // esi
  int v5; // eax
  int *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // edx
  int v11; // edi
  int v12; // ebx
  __int16 *j; // esi
  int v14; // eax
  int *v15; // eax
  int v16; // edx
  int v17; // edi
  _DWORD *v18; // ebx
  int v19; // eax
  int *v20; // esi
  int v21; // ecx
  int v22; // edx
  int v23; // esi
  int v24; // [esp+10h] [ebp-28h] BYREF
  int v25; // [esp+14h] [ebp-24h] BYREF
  int *k; // [esp+18h] [ebp-20h] BYREF
  char v27[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  char v28[8]; // [esp+20h] [ebp-18h] BYREF
  char v29[4]; // [esp+28h] [ebp-10h] BYREF
  char v30[12]; // [esp+2Ch] [ebp-Ch] BYREF

  result = MEMORY[0xA8B230]; /*0x58b820*/
  v1 = 0; /*0x58b82a*/
  dword_ABED0C = 0; /*0x58b830*/
  if ( MEMORY[0xA8B230] && MEMORY[0x887324] ) /*0x58b842*/
  {
    for ( i = 0; i < 8; ++i ) /*0x58b848*/
    {
      if ( !(unsigned __int8)ScenarioClass::Is_Waypoint_Valid(i) ) /*0x58b851*/
        break; /*0x58b858*/
      WaypointLocationScenarioClass = (__int16 *)ScenarioClass::Get_Waypoint_Location(&k, i); /*0x58b86a*/
      v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], WaypointLocationScenarioClass); /*0x58b87e*/
      v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)v4 + 72))(v4); /*0x58b88f*/
      v6 = (int *)(*(int (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)v4 + 72))(v4, v29, *(_DWORD *)(v5 + 4)); /*0x58b89f*/
      IsoCoord::ToScreenOffset(*v6, (int)v28, &v24, &v25); /*0x58b8ab*/
      v7 = (int *)ScenarioClass::Get_Waypoint_Location(v27, i); /*0x58b8bc*/
      v8 = dword_ABED0C; /*0x58b8c1*/
      v9 = v24; /*0x58b8c9*/
      dword_ABE304[dword_ABED0C] = *v7; /*0x58b8d2*/
      v10 = (unsigned __int64)(2290649225LL * v25) >> 32; /*0x58b8f4*/
      dword_ABE328[2 * v8] = v9 / 60; /*0x58b8f6*/
      dword_ABE32C[2 * v8] = ((unsigned int)v10 >> 31) + (v10 >> 4); /*0x58b907*/
      dword_ABED0C = v8 + 1; /*0x58b910*/
    }
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x58b924*/
    v11 = 10000; /*0x58b929*/
    v24 = 10000; /*0x58b933*/
    v12 = 0; /*0x58b937*/
    for ( j = (__int16 *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x58b942*/
          j;
          j = (__int16 *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
    {
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], j + 18, 1) ) /*0x58b953*/
      {
        v14 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)j + 72))(j); /*0x58b973*/
        v15 = (int *)(*(int (__thiscall **)(__int16 *, char *, _DWORD))(*(_DWORD *)j + 72))( /*0x58b983*/
                       j,
                       v27,
                       *(_DWORD *)(v14 + 4));
        IsoCoord::ToScreenOffset(*v15, (int)v30, &v25, (int *)&k); /*0x58b98f*/
        v16 = (int)k / 30; /*0x58b9c2*/
        if ( v25 / 60 < v11 ) /*0x58b9c6*/
          v11 = v25 / 60; /*0x58b9c8*/
        if ( v25 / 60 > v1 ) /*0x58b9cc*/
          v1 = v25 / 60; /*0x58b9ce*/
        if ( v16 < v24 ) /*0x58b9d4*/
          v24 = (int)k / 30; /*0x58b9d6*/
        if ( v16 > v12 ) /*0x58b9dc*/
          v12 = (int)k / 30; /*0x58b9de*/
      }
    }
    dword_ABDFD0 = v24; /*0x58b9fa*/
    result = MEMORY[0xA8B230]; /*0x58ba01*/
    dword_ABDFD4 = v11; /*0x58ba06*/
    dword_ABEC90 = v1 - v11; /*0x58ba0e*/
    dword_ABECD0 = v12 - v24; /*0x58ba14*/
    if ( MEMORY[0xA8B230] ) /*0x58ba1a*/
    {
      v17 = 0; /*0x58ba26*/
      *((_DWORD *)MEMORY[0xA8B230] + 1103) = dword_ABED0C; /*0x58ba28*/
      v18 = MEMORY[0xA8B230]; /*0x58ba2e*/
      if ( *((int *)MEMORY[0xA8B230] + 1103) > 0 ) /*0x58ba3c*/
      {
        v19 = 1104; /*0x58ba3e*/
        v20 = &dword_ABE328[-1104]; /*0x58ba48*/
        v21 = 1136; /*0x58ba4f*/
        for ( k = &dword_ABE328[-1104]; ; v20 = k ) /*0x58ba54*/
        {
          if ( v19 < 1104 || v17 >= dword_ABED0C ) /*0x58ba71*/
          {
            v22 = 0; /*0x58ba7c*/
            v23 = 0; /*0x58ba7e*/
          }
          else
          {
            v22 = v20[v19]; /*0x58ba73*/
            v23 = v20[v19 + 1]; /*0x58ba76*/
          }
          v18[v19] = v22; /*0x58ba80*/
          ++v17; /*0x58ba89*/
          ++v21; /*0x58ba8a*/
          *(_DWORD *)((char *)MEMORY[0xA8B230] + v19 * 4 + 4) = v23; /*0x58ba8d*/
          v19 += 2; /*0x58ba9b*/
          *(_DWORD *)((char *)MEMORY[0xA8B230] + v21 * 4 - 4) = dword_ABE304[v21 - 1137]; /*0x58ba9e*/
          v18 = MEMORY[0xA8B230]; /*0x58baa2*/
          if ( v17 >= *((_DWORD *)MEMORY[0xA8B230] + 1103) ) /*0x58baae*/
            break; /*0x58baae*/
        }
      }
      v18[1099] = dword_ABDFD4; /*0x58bab5*/
      *((_DWORD *)MEMORY[0xA8B230] + 1100) = dword_ABDFD0; /*0x58bac7*/
      *((_DWORD *)MEMORY[0xA8B230] + 1101) = dword_ABEC90; /*0x58bad8*/
      result = (void *)dword_ABECD0; /*0x58bae4*/
      *((_DWORD *)MEMORY[0xA8B230] + 1102) = dword_ABECD0; /*0x58bae9*/
    }
  }
  return result; /*0x58baef*/
}


// ==== 0x0058BB00  Map_Helper_58BB00  this=-  sig=csp ====
_DWORD *__fastcall sub_58BB00(_DWORD *a1, int a2)
{
  _DWORD *result; // eax

  result = a1; /*0x58bb02*/
  if ( a2 < 0 || a2 >= dword_ABED0C ) /*0x58bb0c*/
  {
    *a1 = 0; /*0x58bb26*/
    a1[1] = 0; /*0x58bb28*/
  }
  else
  {
    *a1 = dword_ABE328[2 * a2]; /*0x58bb15*/
    a1[1] = dword_ABE32C[2 * a2]; /*0x58bb1e*/
  }
  return result; /*0x58bb21*/
}


// ==== 0x0058BB30  ScenarioClass::CopyStartPositions  this=ScenarioClass  sig=csp ====
void *ScenarioClass_CopyStartPositions()
{
  void *result; // eax
  _DWORD *v1; // ebx
  int v2; // edi
  int v3; // eax
  int *v4; // esi
  int v5; // ecx
  int v6; // edx
  int v7; // esi

  result = MEMORY[0xA8B230]; /*0x58bb31*/
  if ( MEMORY[0xA8B230] ) /*0x58bb38*/
  {
    *((_DWORD *)MEMORY[0xA8B230] + 1103) = dword_ABED0C; /*0x58bb45*/
    v1 = MEMORY[0xA8B230]; /*0x58bb4b*/
    v2 = 0; /*0x58bb52*/
    if ( *((int *)MEMORY[0xA8B230] + 1103) > 0 ) /*0x58bb5c*/
    {
      v3 = 1104; /*0x58bb60*/
      v4 = &dword_ABE328 - 1104; /*0x58bb6a*/
      v5 = 1136; /*0x58bb71*/
      while ( 1 ) /*0x58bb8b*/
      {
        if ( v3 < 1104 || v2 >= dword_ABED0C ) /*0x58bb93*/
        {
          v6 = 0; /*0x58bb9e*/
          v7 = 0; /*0x58bba0*/
        }
        else
        {
          v6 = v4[v3]; /*0x58bb95*/
          v7 = v4[v3 + 1]; /*0x58bb98*/
        }
        v1[v3] = v6; /*0x58bba2*/
        ++v2; /*0x58bbab*/
        ++v5; /*0x58bbac*/
        *(_DWORD *)((char *)MEMORY[0xA8B230] + v3 * 4 + 4) = v7; /*0x58bbaf*/
        v3 += 2; /*0x58bbbd*/
        *(_DWORD *)((char *)MEMORY[0xA8B230] + v5 * 4 - 4) = dword_ABE304[v5 - 1137]; /*0x58bbc0*/
        v1 = MEMORY[0xA8B230]; /*0x58bbc4*/
        if ( v2 >= *((_DWORD *)MEMORY[0xA8B230] + 1103) ) /*0x58bbd0*/
          break; /*0x58bbd0*/
        v4 = &dword_ABE328 - 1104; /*0x58bb82*/
      }
    }
    v1[1099] = dword_ABDFD4; /*0x58bbda*/
    *((_DWORD *)MEMORY[0xA8B230] + 1100) = dword_ABDFD0; /*0x58bbed*/
    *((_DWORD *)MEMORY[0xA8B230] + 1101) = dword_ABEC90; /*0x58bbfe*/
    result = (void *)dword_ABECD0; /*0x58bc0a*/
    *((_DWORD *)MEMORY[0xA8B230] + 1102) = dword_ABECD0; /*0x58bc0f*/
  }
  return result; /*0x58bc16*/
}


// ==== 0x0058BC20  SynchronizeMultiplayerGameStart_Start  this=-  sig=ida-proto ====
void sub_58BC20()
{
  dword_ABED0C = 0; /*0x58bc20*/
}


// ==== 0x0058BC30  sub_58BC30  this=-  sig=ida-proto ====
int sub_58BC30()
{
  g_RandomMap_TerrainState = 0; /*0x58bc37*/
  dword_ABDF98 = 0; /*0x58bc3c*/
  byte_ABDF9C = 1; /*0x58bc41*/
  byte_ABDF9D = 0; /*0x58bc48*/
  g_RandomMap_BuildObject = (int)&off_7ED858; /*0x58bc4d*/
  dword_ABDFA4 = 10; /*0x58bc57*/
  g_RandomMap_TileData = 0; /*0x58bc61*/
  return atexit(sub_58BC70); /*0x58bc6c*/
}


// ==== 0x0058BC70  sub_58BC70  this=-  sig=ida-proto ====
void __cdecl sub_58BC70()
{
  if ( (byte_ABDFB0 & 1) == 0 ) /*0x58bc7a*/
  {
    g_RandomMap_BuildObject = (int)&vt_VectorClass_MapRegionClass; /*0x58bc7e*/
    byte_ABDFB0 |= 1u; /*0x58bc91*/
    if ( g_RandomMap_TerrainState ) /*0x58bc97*/
    {
      if ( byte_ABDF9D ) /*0x58bca1*/
      {
        __3_YAXPAX_Z(g_RandomMap_TerrainState); /*0x58bca4*/
        g_RandomMap_TerrainState = 0; /*0x58bcac*/
      }
    }
    byte_ABDF9D = 0; /*0x58bcb6*/
    dword_ABDF98 = 0; /*0x58bcbd*/
  }
}


// ==== 0x0058BDC0  TileData::Constructor  this=AbstractClass  sig=csp ====
_DWORD *__thiscall TileData_Constructor(_DWORD *this)
{
  this->vtable3 = 0; /*0x58bdc4*/
  this->uniqueId = 0; /*0x58bdc7*/
  this->nextArrayIndex = 0; /*0x58bdca*/
  this->needsSave = 0; /*0x58bdcd*/
  this->q028 = 0; /*0x58bdd0*/
  this->q030 = 0; /*0x58bdd3*/
  *(_WORD *)this = 0; /*0x58bdd6*/
  this->vtable2 = 0; /*0x58bdd9*/
  this->vtable4 = 0; /*0x58bddd*/
  this->abstractFlags = 0; /*0x58bde0*/
  this->referenceCount = 0; /*0x58bde3*/
  this->q024 = 0; /*0x58bde6*/
  this->q02C = 0; /*0x58bde9*/
  this->q034 = 0; /*0x58bdec*/
  this->q038 = 0; /*0x58bdef*/
  this->q03C = 0; /*0x58bdf2*/
  this->q040 = -1; /*0x58bdf5*/
  this->q110 = 0; /*0x58bdfc*/
  this->q114 = 0; /*0x58bdff*/
  this->q118 = 0; /*0x58be02*/
  this->q11C = 0; /*0x58be05*/
  this->q120 = 0; /*0x58be08*/
  this->q124 = 0; /*0x58be0b*/
  this->q128 = 1; /*0x58be0e*/
  this->q12C = 0; /*0x58be12*/
  return this; /*0x58be15*/
}


// ==== 0x0058BE20  ObjectClass::method_58BE20  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58BE20(_DWORD *this)
{
  unsigned int v2; // esi
  unsigned int v3; // eax
  _WORD *v4; // ecx
  int v5; // ecx
  __int64 v7; // [esp+14h] [ebp-10h]

  v2 = unk_89C2DC * unk_89C2DC - 1; /*0x58be30*/
  do /*0x58be88*/
  {
    do /*0x58be6f*/
    {
      v7 = (unsigned int)Random::State(&g_Randomizer); /*0x58be52*/
      v3 = Math::RoundToInt((double)v7 * (double)(v2 + 1) * 2.328306437080797e-10); /*0x58be68*/
    }
    while ( v3 > v2 ); /*0x58be6f*/
    v4 = (char *)g_MapTileArray + 80 * v3; /*0x58be7d*/
  }
  while ( !*v4 && !v4[1] ); /*0x58be88*/
  v5 = 80 * v3; /*0x58be8e*/
  *this = *(_DWORD *)((char *)g_MapTileArray + v5); /*0x58be97*/
  return this; /*0x58be8d*/
}


// ==== 0x0058BEA0  ObjectClass::method_58BEA0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58BEA0(_DWORD *this)
{
  int v2; // ebx
  unsigned int v3; // esi
  unsigned int v4; // eax
  _WORD *v5; // ecx
  _DWORD *v6; // eax
  int v8; // [esp+10h] [ebp-1Ch] BYREF
  __int64 v9; // [esp+14h] [ebp-18h]
  __int64 v10; // [esp+1Ch] [ebp-10h]
  double v11; // [esp+24h] [ebp-8h]

  v2 = 0; /*0x58beab*/
  do /*0x58bf34*/
  {
    v3 = unk_89C2DC * unk_89C2DC - 1; /*0x58beb5*/
    do /*0x58bf0b*/
    {
      v9 = v3 + 1; /*0x58bebf*/
      v11 = (double)v9; /*0x58bec7*/
      do /*0x58bef2*/
      {
        v10 = (unsigned int)Random::State(&g_Randomizer); /*0x58bed5*/
        v4 = Math::RoundToInt((double)v10 * v11 * 2.328306437080797e-10); /*0x58beeb*/
      }
      while ( v4 > v3 ); /*0x58bef2*/
      v5 = (char *)g_MapTileArray + 80 * v4; /*0x58bf00*/
    }
    while ( !*v5 && !v5[1] ); /*0x58bf0b*/
    ++v2; /*0x58bf13*/
    v8 = *((_DWORD *)g_MapTileArray + 20 * v4); /*0x58bf1d*/
    if ( v2 > 200 ) /*0x58bf21*/
    {
      v8 = 0; /*0x58bf42*/
      *this = 0; /*0x58bf51*/
      return this; /*0x58bf5c*/
    }
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8); /*0x58bf2d*/
  }
  while ( !Cell::IsEmpty(v6) ); /*0x58bf34*/
  *this = v8; /*0x58bf62*/
  return this; /*0x58bf50*/
}


// ==== 0x0058BF70  RandomMap::TerrainTileDataConstructor  this=TechnoTypeClass  sig=csp ====
_DWORD *__thiscall RandomMap_TerrainTileData_Constructor(_DWORD *this, int a2)
{
  int *v3; // eax
  bool IsGroundTypeRange; // al
  int v5; // ecx
  int v6; // eax

  *this = 0; /*0x58bf7a*/
  this->vtable2 = 0; /*0x58bf7c*/
  this->vtable3 = g_MapTileArrayEnd; /*0x58bf8a*/
  this->vtable4 = 0; /*0x58bf8d*/
  this->uniqueId = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 283); /*0x58bfa6*/
  v3 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x58bfa9*/
  IsGroundTypeRange = Cell::IsGroundTypeRange(v3); /*0x58bfb0*/
  v5 = a2; /*0x58bfb5*/
  this->SlowdownDistance = IsGroundTypeRange; /*0x58bfb9*/
  *(_DWORD *)((char *)this + 22) = v5; /*0x58bfbe*/
  *((_BYTE *)this + 26) = 0; /*0x58bfc1*/
  this->q1B0 = 1; /*0x58bfc4*/
  this->referenceCount = 0; /*0x58bfc7*/
  this->NeedsSaveOrLink = 0; /*0x58bfca*/
  this->LineTrailColorDecrement = 0; /*0x58bfcd*/
  this->ChargerBarrels_0x12 = 0; /*0x58bfd0*/
  this->TargetSpecialThreatCoefficient = 0; /*0x58bfd3*/
  this->__pad_034 = 1; /*0x58bfd6*/
  *((_BYTE *)this + 53) = 0; /*0x58bfd9*/
  this->TargetEffectivenessCoefficient = &vt_DynamicVectorClass_Cell; /*0x58bfdc*/
  this->zero_3C = 10; /*0x58bfe3*/
  this->TargetStrengthCoefficient = 0; /*0x58bfea*/
  this->TargetDistanceCoefficient = 0; /*0x58bfed*/
  this->q044 = 0; /*0x58bff0*/
  this->ThreatAvoidanceCoefficient = 0; /*0x58bff3*/
  this->q04C = 0; /*0x58bff6*/
  this->zero_3C = 100000; /*0x58bff9*/
  ++g_MapTileArrayEnd; /*0x58c014*/
  if ( g_RandomMap_TileData < dword_ABDF98 /*0x58c041*/
    || (byte_ABDF9D || !dword_ABDF98)
    && dword_ABDFA4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_RandomMap_BuildObject + 8))(
         &g_RandomMap_BuildObject,
         dword_ABDF98 + dword_ABDFA4,
         0) )
  {
    v6 = g_RandomMap_TileData++; /*0x58c04e*/
    *((_DWORD *)g_RandomMap_TerrainState + v6) = this; /*0x58c05d*/
  }
  return this; /*0x58c062*/
}


// ==== 0x0058C070  TileNode::Cleanup  this=CampaignClass  sig=csp ====
void __thiscall sub_58C070(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // eax
  void *v4; // eax
  _DWORD *v5; // [esp+8h] [ebp-4h] BYREF

  v2 = (void (__thiscall ***)(_DWORD, int))*this; /*0x58c077*/
  if ( v2 ) /*0x58c07b*/
  {
    (**v2)(v2, 1); /*0x58c081*/
    *this = 0; /*0x58c083*/
  }
  v5 = this; /*0x58c095*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v5); /*0x58c099*/
  if ( v3 != -1 && v3 < g_RandomMap_TileData && v3 < --g_RandomMap_TileData ) /*0x58c0b4*/
  {
    do /*0x58c0cc*/
    {
      ++v3; /*0x58c0bc*/
      *((_DWORD *)g_RandomMap_TerrainState + v3 - 1) = *((_DWORD *)g_RandomMap_TerrainState + v3); /*0x58c0c0*/
    }
    while ( v3 < g_RandomMap_TileData ); /*0x58c0cc*/
  }
  v4 = (void *)this->q02C; /*0x58c0ce*/
  this->scenario = &vt_VectorClass_Cell; /*0x58c0d1*/
  if ( v4 && this->q0D4 ) /*0x58c0dc*/
  {
    __3_YAXPAX_Z(v4); /*0x58c0e2*/
    this->q02C = 0; /*0x58c0ea*/
  }
  this->q0D4 = 0; /*0x58c0ed*/
  this->q0C0 = 0; /*0x58c0f0*/
}


// ==== 0x0058C100  ObjectClass::method_58C100  this=ObjectClass  sig=csp ====
void sub_58C100()
{
  int v0; // edi
  _DWORD *v1; // esi
  int v2; // eax
  void *v3; // eax
  _DWORD *v4; // [esp+8h] [ebp-4h] BYREF

  v0 = g_RandomMap_TileData - 1; /*0x58c10a*/
  for ( g_MapTileArrayEnd = 0; v0 >= 0; --v0 ) /*0x58c115*/
  {
    v1 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + v0); /*0x58c122*/
    if ( v1 ) /*0x58c127*/
    {
      if ( *v1 ) /*0x58c12d*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v1)(*v1, 1); /*0x58c137*/
        *v1 = 0; /*0x58c139*/
      }
      v4 = v1; /*0x58c14b*/
      v2 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v4); /*0x58c14f*/
      if ( v2 != -1 && v2 < g_RandomMap_TileData && v2 < --g_RandomMap_TileData ) /*0x58c16a*/
      {
        do /*0x58c182*/
        {
          ++v2; /*0x58c172*/
          *((_DWORD *)g_RandomMap_TerrainState + v2 - 1) = *((_DWORD *)g_RandomMap_TerrainState + v2); /*0x58c176*/
        }
        while ( v2 < g_RandomMap_TileData ); /*0x58c182*/
      }
      v3 = (void *)v1[11]; /*0x58c184*/
      v1[10] = &vt_VectorClass_Cell; /*0x58c187*/
      if ( v3 ) /*0x58c190*/
      {
        if ( *((_BYTE *)v1 + 53) ) /*0x58c192*/
        {
          __3_YAXPAX_Z(v3); /*0x58c198*/
          v1[11] = 0; /*0x58c1a0*/
        }
      }
      *((_BYTE *)v1 + 53) = 0; /*0x58c1a4*/
      v1[12] = 0; /*0x58c1a7*/
      __3_YAXPAX_Z(v1); /*0x58c1aa*/
    }
  }
}


// ==== 0x0058C2A0  Tactical::GetCellData  this=Tactical  sig=csp ====
char *__thiscall Tactical_GetCellData(__int16 *this)
{
  return (char *)g_MapTileArray + 80 * *this + 80 * unk_89C2DC * this->vtable2; /*0x58c2be*/
}


// ==== 0x0058C2C0  GetTileDataEntry  this=-  sig=ida-proto ====
char *__fastcall TileData_GetEntry(int a1)
{
  return (char *)g_MapTileArray + 80 * a1; /*0x58c2ce*/
}


// ==== 0x0058C320  ObjectClass::method_58C320  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58C320(_DWORD *this, _DWORD *a2)
{
  int v2; // ebx
  unsigned int v4; // eax
  char *v5; // ecx
  int v6; // ecx
  __int64 v8; // [esp+18h] [ebp-10h]

  v2 = unk_89C2DC * unk_89C2DC; /*0x58c32e*/
  do /*0x58c38f*/
  {
    do /*0x58c372*/
    {
      v8 = (unsigned int)Random::State(&g_Randomizer); /*0x58c355*/
      v4 = Math::RoundToInt((double)v8 * (double)(unsigned int)v2 * 2.328306437080797e-10); /*0x58c36b*/
    }
    while ( v4 > v2 - 1 ); /*0x58c372*/
    v5 = (char *)g_MapTileArray + 80 * v4; /*0x58c380*/
  }
  while ( *((_DWORD *)v5 + 14) != this->vtable3 || !*(_WORD *)v5 && !*((_WORD *)v5 + 1) ); /*0x58c38f*/
  v6 = *((_DWORD *)g_MapTileArray + 20 * v4); /*0x58c39e*/
  *a2 = v6; /*0x58c3a6*/
  return a2; /*0x58c398*/
}


// ==== 0x0058C3B0  ObjectClass::method_58C3B0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58C3B0(_DWORD *this, _DWORD *a2)
{
  int v3; // ebx
  unsigned int v4; // eax
  char *v5; // ecx
  _DWORD *v6; // eax
  int v8; // [esp+10h] [ebp-20h]
  int v9; // [esp+14h] [ebp-1Ch] BYREF
  __int64 v10; // [esp+18h] [ebp-18h]
  __int64 v11; // [esp+20h] [ebp-10h]
  double v12; // [esp+28h] [ebp-8h]

  v8 = 0; /*0x58c3bb*/
  do /*0x58c457*/
  {
    v3 = unk_89C2DC * unk_89C2DC; /*0x58c3c6*/
    do /*0x58c423*/
    {
      v10 = (unsigned int)v3; /*0x58c3d3*/
      v12 = (double)(unsigned int)v3; /*0x58c3db*/
      do /*0x58c406*/
      {
        v11 = (unsigned int)Random::State(&g_Randomizer); /*0x58c3e9*/
        v4 = Math::RoundToInt((double)v11 * v12 * 2.328306437080797e-10); /*0x58c3ff*/
      }
      while ( v4 > v3 - 1 ); /*0x58c406*/
      v5 = (char *)g_MapTileArray + 80 * v4; /*0x58c414*/
    }
    while ( *((_DWORD *)v5 + 14) != this->vtable3 || !*(_WORD *)v5 && !*((_WORD *)v5 + 1) ); /*0x58c423*/
    v9 = *((_DWORD *)g_MapTileArray + 20 * v4); /*0x58c432*/
    if ( ++v8 > 200 ) /*0x58c444*/
    {
      *a2 = 0; /*0x58c47a*/
      return a2; /*0x58c480*/
    }
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v9); /*0x58c450*/
  }
  while ( !Cell::IsEmpty(v6) ); /*0x58c457*/
  *a2 = v9; /*0x58c48e*/
  return a2; /*0x58c477*/
}


// ==== 0x0058C4A0  ObjectClass::method_58C4A0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58C4A0(_DWORD *this, ObjectClass *aP1)
{
  _WORD *v2; // ebp
  int v3; // ebx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  Random *v7; // [esp+10h] [ebp-20h]
  __int64 v9; // [esp+20h] [ebp-10h]

  v2 = g_MapTileArray; /*0x58c4b3*/
  v7 = (Random *)(unk_89C2DC * unk_89C2DC); /*0x58c4bd*/
  v3 = 0; /*0x58c4c1*/
  while ( 1 ) /*0x58c559*/
  {
    do /*0x58c508*/
    {
      v9 = (unsigned int)Random::State(&g_Randomizer); /*0x58c4eb*/
      v4 = Math::RoundToInt((double)v9 * (double)(unsigned int)v7 * 2.328306437080797e-10); /*0x58c501*/
    }
    while ( v4 > (unsigned int)&v7[-1].Random_field_0x0C + 3 ); /*0x58c508*/
    ++v3; /*0x58c518*/
    qmemcpy(v2, (char *)g_MapTileArray + 80 * v4, 0x50u); /*0x58c523*/
    if ( v3 >= 100 ) /*0x58c525*/
    {
      *(_DWORD *)aP1->__pad_0 = 0; /*0x58c57e*/
      return aP1->__pad_0; /*0x58c584*/
    }
    if ( *((_DWORD *)v2 + 14) == this->vtable3 && (*v2 || v2[1]) ) /*0x58c53a*/
    {
      if ( *((_BYTE *)v2 + 68) ) /*0x58c541*/
      {
        v5 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v2); /*0x58c552*/
        if ( Cell::IsEmpty(v5) ) /*0x58c559*/
          break; /*0x58c559*/
      }
    }
  }
  *(_DWORD *)aP1->__pad_0 = *(_DWORD *)v2; /*0x58c591*/
  return aP1->__pad_0; /*0x58c569*/
}


// ==== 0x0058C5A0  sub_58C5A0  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_58C5A0(_DWORD *a1, int a2, int a3)
{
  _WORD *v3; // ebx
  unsigned int v4; // eax
  bool v5; // cc
  void *v6; // eax
  _DWORD *v7; // esi
  int v9; // [esp+10h] [ebp-28h]
  int v11; // [esp+18h] [ebp-20h]
  __int64 v13; // [esp+28h] [ebp-10h]

  v3 = g_MapTileArray; /*0x58c5b2*/
  v11 = unk_89C2DC * unk_89C2DC; /*0x58c5c1*/
  v9 = 0; /*0x58c5c5*/
  do /*0x58c67e*/
  {
    do /*0x58c60a*/
    {
      v13 = (unsigned int)Random::State(&g_Randomizer); /*0x58c5ed*/
      v4 = Math::RoundToInt((double)v13 * (double)(unsigned int)v11 * 2.328306437080797e-10); /*0x58c603*/
    }
    while ( v4 > v11 - 1 ); /*0x58c60a*/
    v5 = v9 + 1 < 100; /*0x58c626*/
    qmemcpy(v3, (char *)g_MapTileArray + 80 * v4, 0x50u); /*0x58c629*/
    ++v9; /*0x58c62b*/
    if ( !v5 ) /*0x58c62f*/
    {
      *a1 = 0; /*0x58c69a*/
      return a1; /*0x58c6a0*/
    }
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v3); /*0x58c637*/
    v7 = v6; /*0x58c63f*/
  }
  while ( !*v3 && !v3[1] /*0x58c67e*/
       || MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)v6 + 18, 0, 0) != a2
       || !Cell::IsEmpty(v7)
       || a3 != -1 && *((_DWORD *)v3 + 14) != a3 );
  *a1 = *(_DWORD *)v3; /*0x58c6ac*/
  return a1; /*0x58c697*/
}


// ==== 0x0058C6F0  Memory_Helper_58C6F0  this=HouseClass  sig=csp ====
double __stdcall Memory_Helper_58C6F0(IUnknown *aP0, __int16 *a1, double a3)
{
  double v3; // st7
  double v4; // st7
  char v6; // c0
  int v8; // [esp+Ch] [ebp-10h]
  double v9; // [esp+14h] [ebp-8h]
  int a1a; // [esp+24h] [ebp+8h]
  double v11; // [esp+28h] [ebp+Ch]

  v8 = *a1 - SLOWORD(aP0->field_0); /*0x58c71d*/
  a1a = a1[1] - SHIWORD(aP0->field_0); /*0x58c725*/
  v9 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(v8 * v8 + a1a * a1a))); /*0x58c735*/
  if ( v8 ) /*0x58c73e*/
  {
    v3 = Math::ArcTan(-((double)a1a / (double)v8)); /*0x58c754*/
    if ( v8 < 0 ) /*0x58c75e*/
      v3 = v3 + 3.141592653589793; /*0x58c760*/
  }
  else
  {
    v3 = 1.570796326794897; /*0x58c7f4*/
  }
  v4 = fabs(v3 - a3); /*0x58c76b*/
  v11 = v4; /*0x58c773*/
  if ( !v6 ) /*0x58c77c*/
  {
    do /*0x58c78f*/
      v4 = v4 - 6.283185307179586; /*0x58c77e*/
    while ( v4 >= 6.283185307179586 ); /*0x58c78f*/
    v11 = v4; /*0x58c791*/
  }
  if ( v4 > 3.141592653589793 ) /*0x58c7a0*/
    v11 = 6.283185307179586 - v4; /*0x58c7aa*/
  return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 * 2.5 + 1.5 * v11 + 0.15 * v9; /*0x58c7ee*/
}


// ==== 0x0058C800  RandomMap::GenerateTerrain  this=RandomMap  sig=csp ====
int __thiscall RandomMap_GenerateTerrain(int this)
{
  int v2; // esi
  int v3; // eax
  int v4; // edx
  size_t v5; // edx
  int i; // ebx
  int v7; // edi
  char *v8; // eax
  int v9; // esi
  char *v10; // eax
  int *v11; // eax
  int *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  char v16; // bl
  int v17; // ebp
  unsigned int v18; // esi
  unsigned int v19; // eax
  int v20; // edi
  int v21; // edx
  _BYTE *v22; // esi
  int *v23; // eax
  int v24; // esi
  int j; // eax
  char *v26; // ecx
  char v27; // cl
  int v29; // edx
  __int16 v30; // bp
  int v31; // ecx
  int v32; // esi
  int v33; // edx
  int v34; // edi
  int v35; // esi
  int Bit; // eax
  size_t v37; // ebx
  char *v38; // ecx
  char v39; // cl
  int v40; // esi
  char v41; // al
  int v42; // edi
  int v43; // ebp
  int v44; // [esp+10h] [ebp-44h] BYREF
  int v45; // [esp+14h] [ebp-40h] BYREF
  size_t v46; // [esp+18h] [ebp-3Ch] BYREF
  int v47; // [esp+1Ch] [ebp-38h]
  int v48; // [esp+20h] [ebp-34h] BYREF
  int v49; // [esp+24h] [ebp-30h]
  int v50; // [esp+28h] [ebp-2Ch] BYREF
  double v51; // [esp+2Ch] [ebp-28h]
  __int64 v52; // [esp+34h] [ebp-20h] BYREF
  void **v53; // [esp+3Ch] [ebp-18h] BYREF
  int v54; // [esp+40h] [ebp-14h]
  int v55; // [esp+44h] [ebp-10h]
  char v56; // [esp+49h] [ebp-Bh]
  int v57; // [esp+4Ch] [ebp-8h]
  int v58; // [esp+50h] [ebp-4h]

  v49 = this; /*0x58c816*/
  v46 = g_MapTileArrayEnd; /*0x58c81a*/
  VectorClass::CellConstructor(&v53, 0, 0); /*0x58c81e*/
  v2 = *(_DWORD *)(this + 36); /*0x58c823*/
  v53 = &vt_DynamicVectorClass_Cell; /*0x58c826*/
  v57 = 0; /*0x58c832*/
  v58 = 50000; /*0x58c838*/
  if ( v55 > 0 || (v56 || !v55) && (unsigned __int8)VectorClass::ResizeEx(v55 + 50000, 0) ) /*0x58c859*/
  {
    v3 = v57++; /*0x58c867*/
    *(_DWORD *)(v54 + 4 * v3) = v2; /*0x58c872*/
  }
  if ( Cell::IsGroundTypeRange((int *)this) || (LOBYTE(v47) = 0, Cell::IsShore((int *)this)) ) /*0x58c882*/
    LOBYTE(v47) = 1; /*0x58c890*/
  v50 = *(char *)(this + 283); /*0x58c89c*/
  v4 = v57; /*0x58c8a0*/
  v48 = 0; /*0x58c8a6*/
  if ( v57 ) /*0x58c8aa*/
  {
    do /*0x58ca9c*/
    {
      v44 = *(_DWORD *)(v54 + 4 * v4 - 4); /*0x58c8b8*/
      if ( v4 - 1 < v4 ) /*0x58c8c1*/
        v57 = v4 - 1; /*0x58c8c7*/
      v5 = v46; /*0x58c8f4*/
      *((_DWORD *)g_MapTileArray + 20 * (__int16)v44 + 20 * unk_89C2DC * SHIWORD(v44) + 15) = v46; /*0x58c906*/
      if ( g_MapTileArray ) /*0x58c912*/
        *((_DWORD *)g_MapTileArray + 20 * (__int16)v44 + 20 * unk_89C2DC * SHIWORD(v44) + 14) = v5; /*0x58c92d*/
      for ( i = 0; i < 8; ++i ) /*0x58c931*/
      {
        LODWORD(v51) = *CellStruct::Add(&v44, &v52, (_WORD *)(4 * (i & 7) + 9041544)); /*0x58c956*/
        v45 = LODWORD(v51); /*0x58c95a*/
        v7 = g_MapCellHeight_Value; /*0x58c968*/
        v8 = (char *)g_MapTileArray + 80 * SLOWORD(v51) + 80 * unk_89C2DC * SWORD1(v51); /*0x58c97d*/
        v9 = SWORD1(v51) + SLOWORD(v51); /*0x58c97f*/
        if ( v9 > g_MapCellHeight_Value /*0x58c9bf*/
          && SLOWORD(v51) - SWORD1(v51) < g_MapCellHeight_Value
          && SWORD1(v51) - SLOWORD(v51) < g_MapCellHeight_Value
          && v9 <= g_MapCellCount
          && *((_DWORD *)v8 + 14) == -1
          && *((_DWORD *)v8 + 15) != v46 )
        {
          *((_DWORD *)v8 + 15) = v46; /*0x58c9c5*/
          v10 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v45); /*0x58c9d2*/
          if ( v10[283] == v50 ) /*0x58c9e2*/
          {
            v11 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v45); /*0x58c9f2*/
            v13 = 1; /*0x58ca20*/
            if ( !Cell::IsGroundTypeRange(v11) ) /*0x58c9f9*/
            {
              v12 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v45); /*0x58ca0c*/
              if ( !Cell::IsShore(v12) ) /*0x58ca13*/
                v13 = 0; /*0x58c9f9*/
            }
            if ( v13 == (unsigned __int8)v47 /*0x58ca60*/
              && (v57 < v55
               || (v56 || !v55)
               && v58 > 0
               && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v53[2])(&v53, v58 + v55, 0)) )
            {
              v14 = v57++; /*0x58ca6f*/
              *(_DWORD *)(v54 + 4 * v14) = v45; /*0x58ca7a*/
            }
          }
          v7 = g_MapCellHeight_Value; /*0x58ca7d*/
        }
      }
      v4 = v57; /*0x58ca91*/
      v15 = ++v48; /*0x58ca95*/
    }
    while ( v57 ); /*0x58ca9c*/
    if ( v15 >= 75 ) /*0x58caa7*/
      goto LABEL_84; /*0x58caa7*/
  }
  else
  {
    v7 = g_MapCellHeight_Value; /*0x58caaf*/
  }
  if ( !(_BYTE)v47 ) /*0x58cabb*/
  {
    v16 = 0; /*0x58cac5*/
    if ( v46 ) /*0x58cac9*/
    {
      v29 = *(_DWORD *)(v49 + 36); /*0x58cca4*/
      LODWORD(v51) = v29; /*0x58cca9*/
      HIWORD(v48) = HIWORD(v29); /*0x58ccb3*/
      LOWORD(v48) = v29 - 1; /*0x58ccb8*/
      v30 = v29 - 1; /*0x58ccbd*/
      v31 = (__int16)(v29 - 1); /*0x58ccc1*/
      v32 = SHIWORD(v29) + v31; /*0x58cccb*/
      if ( v32 <= v7 || v31 - SWORD1(v51) >= v7 || SWORD1(v51) - v31 >= v7 || v32 > g_MapCellCount ) /*0x58cce6*/
      {
        LODWORD(v52) = v29; /*0x58cce8*/
        v48 = v29 - 0x10000; /*0x58ccf6*/
        v30 = v29; /*0x58ccfb*/
      }
      v33 = v30 + SHIWORD(v48); /*0x58cd0b*/
      if ( v33 > v7 && v30 - SHIWORD(v48) < v7 && SHIWORD(v48) - v30 < v7 && v33 <= g_MapCellCount ) /*0x58cd34*/
      {
        if ( g_MapTileArray ) /*0x58cd44*/
          v34 = *((_DWORD *)g_MapTileArray + 20 * v30 + 20 * unk_89C2DC * SHIWORD(v48) + 14); /*0x58cd5a*/
        else
          v34 = -1; /*0x58cd46*/
        v35 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48) + 283); /*0x58cd6d*/
        LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x58cd79*/
        Bit = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x58cd83*/
        if ( Bit ) /*0x58cd8a*/
        {
          v37 = v46; /*0x58cd90*/
          do /*0x58cdef*/
          {
            LODWORD(v51) = *(_DWORD *)(Bit + 36); /*0x58cd97*/
            v38 = (char *)g_MapTileArray + 80 * SLOWORD(v51) + 80 * unk_89C2DC * SWORD1(v51); /*0x58cdb8*/
            if ( *((_DWORD *)v38 + 14) == v37 ) /*0x58cdbd*/
            {
              *((_DWORD *)v38 + 14) = v34; /*0x58cdbf*/
              v38[75] = 0; /*0x58cdc2*/
              *(_DWORD *)(Bit + 56) = 0; /*0x58cdc6*/
              *(_BYTE *)(Bit + 282) = 0; /*0x58cdc9*/
              v39 = dword_ABE2E4; /*0x58cdd0*/
              if ( v35 != -1 ) /*0x58cdd9*/
                v39 = v35; /*0x58cddb*/
              *(_BYTE *)(Bit + 283) = v39; /*0x58cddd*/
            }
            Bit = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x58cde8*/
          }
          while ( Bit ); /*0x58cdef*/
        }
        goto LABEL_63; /*0x58cdef*/
      }
      goto LABEL_84; /*0x58cd34*/
    }
    v17 = RandomMap::CellListAlloc(0); /*0x58cadc*/
    v45 = v17; /*0x58cae2*/
    v18 = *(_DWORD *)(v17 + 16) - 1; /*0x58cae9*/
    v52 = *(unsigned int *)(v17 + 16); /*0x58caed*/
    v51 = (double)v52; /*0x58caf5*/
    do /*0x58cb20*/
    {
      v52 = (unsigned int)Random::State(&g_Randomizer); /*0x58cb03*/
      v19 = Math::RoundToInt((double)v52 * v51 * 2.328306437080797e-10); /*0x58cb19*/
    }
    while ( v19 > v18 ); /*0x58cb20*/
    v20 = 0; /*0x58cb25*/
    v46 = *(_DWORD *)(*(_DWORD *)(v17 + 4) + 4 * v19); /*0x58cb2a*/
    while ( 1 ) /*0x58cb51*/
    {
      LODWORD(v51) = *CellStruct::Add(&v46, &v52, (_WORD *)(4 * (v20 & 7) + 9041544)); /*0x58cb51*/
      v48 = LODWORD(v51); /*0x58cb55*/
      v21 = SWORD1(v51) + SLOWORD(v51); /*0x58cb61*/
      if ( v21 > g_MapCellHeight_Value ) /*0x58cb66*/
      {
        if ( SLOWORD(v51) - SWORD1(v51) < g_MapCellHeight_Value /*0x58cb7c*/
          && SWORD1(v51) - SLOWORD(v51) < g_MapCellHeight_Value
          && v21 <= g_MapCellCount )
        {
          v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x58cb91*/
          if ( v22[283] != *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v46) + 283) ) /*0x58cbac*/
          {
            v23 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48); /*0x58cbb8*/
            if ( !Cell::IsGroundTypeRange(v23) ) /*0x58cbc6*/
            {
              v24 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v48) + 283); /*0x58cbea*/
              LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x58cbf6*/
              for ( j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x58cc09*/
                    j;
                    j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
              {
                LODWORD(v51) = *(_DWORD *)(j + 36); /*0x58cc17*/
                v26 = (char *)g_MapTileArray + 80 * SLOWORD(v51) + 80 * unk_89C2DC * SWORD1(v51); /*0x58cc32*/
                if ( !*((_DWORD *)v26 + 14) ) /*0x58cc34*/
                {
                  *((_DWORD *)v26 + 14) = -1; /*0x58cc39*/
                  v26[75] = 0; /*0x58cc3c*/
                  *(_DWORD *)(j + 56) = 0; /*0x58cc40*/
                  *(_BYTE *)(j + 282) = 0; /*0x58cc43*/
                  v27 = dword_ABE2E4; /*0x58cc4a*/
                  if ( v24 != -1 ) /*0x58cc52*/
                    v27 = v24; /*0x58cc54*/
                  *(_BYTE *)(j + 283) = v27; /*0x58cc56*/
                }
              }
              v17 = v45; /*0x58cc6a*/
              v16 = 1; /*0x58cc6e*/
LABEL_60:
              if ( v17 ) /*0x58cc72*/
                (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x58cc7b*/
              if ( v16 ) /*0x58cc7f*/
              {
LABEL_63:
                v53 = &vt_VectorClass_Cell; /*0x58cc85*/
                Buffer::Cleanup((int)&v53); /*0x58cc91*/
                return 0; /*0x58cc9f*/
              }
              break; /*0x58cc7f*/
            }
          }
        }
        v17 = v45; /*0x58cbc8*/
      }
      if ( ++v20 >= 8 ) /*0x58cbd0*/
        goto LABEL_60; /*0x58cbd0*/
    }
  }
LABEL_84:
  if ( __2_YAPAXI_Z(0x50u) ) /*0x58cdf8*/
    v40 = RandomMap::TerrainTileDataConstructor(*(_DWORD *)(v49 + 36)); /*0x58ce13*/
  else
    v40 = 0; /*0x58ce17*/
  v41 = v47; /*0x58ce1d*/
  *(_DWORD *)(v40 + 16) = v50; /*0x58ce21*/
  *(_BYTE *)(v40 + 20) = v41; /*0x58ce24*/
  *(_DWORD *)(v40 + 12) = 0; /*0x58ce27*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58ce38*/
  {
    v42 = 0; /*0x58ce3c*/
    v43 = unk_89C2DC * unk_89C2DC; /*0x58ce3e*/
    do /*0x58ce71*/
    {
      if ( *(_DWORD *)((char *)g_MapTileArray + v42 + 56) == *(_DWORD *)(v40 + 8) ) /*0x58ce50*/
      {
        v50 = 0; /*0x58ce56*/
        if ( (unsigned __int8)Coord::Compare2D(&v50) ) /*0x58ce61*/
          ++*(_DWORD *)(v40 + 12); /*0x58ce6a*/
      }
      v42 += 80; /*0x58ce6d*/
      --v43; /*0x58ce70*/
    }
    while ( v43 ); /*0x58ce71*/
  }
  v53 = &vt_VectorClass_Cell; /*0x58ce77*/
  Buffer::Cleanup((int)&v53); /*0x58ce7f*/
  return v40; /*0x58cc98*/
}


// ==== 0x0058CE90  ObjectClass::Map_Helper_58CE90  this=ObjectClass  sig=csp ====
void sub_58CE90()
{
  int v0; // ecx
  int v1; // eax
  int i; // edi
  _DWORD *v3; // esi
  int v4; // eax
  void *v5; // eax
  _DWORD *v6; // [esp+Ch] [ebp-4h] BYREF

  if ( g_MapTileArray ) /*0x58ce9d*/
  {
    v0 = unk_89C2DC * unk_89C2DC; /*0x58cea5*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58ceaa*/
    {
      v1 = 0; /*0x58ceac*/
      do /*0x58cec9*/
      {
        *(_DWORD *)((char *)g_MapTileArray + v1 + 56) = -1; /*0x58ceb7*/
        *(_DWORD *)((char *)g_MapTileArray + v1 + 60) = -1; /*0x58cec1*/
        v1 += 80; /*0x58cec5*/
        --v0; /*0x58cec8*/
      }
      while ( v0 ); /*0x58cec9*/
    }
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x58ced5*/
  {
    v3 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + i); /*0x58cee1*/
    if ( v3 ) /*0x58cee6*/
    {
      if ( *v3 ) /*0x58ceec*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v3)(*v3, 1); /*0x58cef6*/
        *v3 = 0; /*0x58cef8*/
      }
      v6 = v3; /*0x58cf0a*/
      v4 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v6); /*0x58cf0e*/
      if ( v4 != -1 && v4 < g_RandomMap_TileData && v4 < --g_RandomMap_TileData ) /*0x58cf29*/
      {
        do /*0x58cf41*/
        {
          ++v4; /*0x58cf31*/
          *((_DWORD *)g_RandomMap_TerrainState + v4 - 1) = *((_DWORD *)g_RandomMap_TerrainState + v4); /*0x58cf35*/
        }
        while ( v4 < g_RandomMap_TileData ); /*0x58cf41*/
      }
      v5 = (void *)v3[11]; /*0x58cf43*/
      v3[10] = &vt_VectorClass_Cell; /*0x58cf46*/
      if ( v5 && *((_BYTE *)v3 + 53) ) /*0x58cf51*/
      {
        __3_YAXPAX_Z(v5); /*0x58cf57*/
        v3[11] = 0; /*0x58cf5f*/
      }
      *((_BYTE *)v3 + 53) = 0; /*0x58cf63*/
      v3[12] = 0; /*0x58cf66*/
      __3_YAXPAX_Z(v3); /*0x58cf69*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x58cf79*/
}


// ==== 0x0058CF90  RandomMap::GenerateTerrainForAllCells  this=RandomMap  sig=csp ====
int __thiscall sub_58CF90(void *this)
{
  int result; // eax
  int v2; // ebx
  int v3; // esi
  int *v4; // edi
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x58cf90*/
  result = unk_89C2DC * unk_89C2DC; /*0x58cf96*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58cf9b*/
  {
    v2 = unk_89C2DC * unk_89C2DC; /*0x58cf9f*/
    result = (int)g_MapTileArray; /*0x58cfa1*/
    v3 = 0; /*0x58cfa7*/
    do /*0x58d002*/
    {
      v5 = *(void **)(v3 + result); /*0x58cfb6*/
      v4 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v5); /*0x58cfbf*/
      result = (int)g_MapTileArray; /*0x58cfc1*/
      if ( *(_DWORD *)((char *)g_MapTileArray + v3 + 56) == -1 /*0x58cfd4*/
        && (*(_WORD *)((char *)g_MapTileArray + v3) || *(_WORD *)((char *)g_MapTileArray + v3 + 2)) )
      {
        if ( Cell::IsGroundTypeRange(v4) || Cell::IsShore(v4) ) /*0x58cfe9*/
          RandomMap::GenerateTerrain((int)v4); /*0x58cff4*/
        result = (int)g_MapTileArray; /*0x58cff9*/
      }
      v3 += 80; /*0x58cffe*/
      --v2; /*0x58d001*/
    }
    while ( v2 ); /*0x58d002*/
  }
  return result; /*0x58d008*/
}


// ==== 0x0058D010  Map_Helper_58D010  this=-  sig=ida-proto ====
int __fastcall sub_58D010(char a1)
{
  int result; // eax
  int v3; // esi
  int v4; // edi
  void *v5; // eax

  result = unk_89C2DC * unk_89C2DC; /*0x58d016*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58d01d*/
  {
    v3 = 0; /*0x58d021*/
    v4 = unk_89C2DC * unk_89C2DC; /*0x58d023*/
    do /*0x58d05c*/
    {
      result = (int)g_MapTileArray + v3; /*0x58d02a*/
      if ( *(_DWORD *)((char *)g_MapTileArray + v3 + 56) == -1 && (*(_WORD *)result || *(_WORD *)(result + 2)) ) /*0x58d038*/
      {
        v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)((char *)g_MapTileArray + v3)); /*0x58d045*/
        result = RandomMap::GenerateTerrain((int)v5); /*0x58d04c*/
        if ( result ) /*0x58d053*/
          *(_BYTE *)(result + 26) = a1; /*0x58d055*/
      }
      v3 += 80; /*0x58d058*/
      --v4; /*0x58d05b*/
    }
    while ( v4 ); /*0x58d05c*/
  }
  return result; /*0x58d060*/
}


// ==== 0x0058D070  SetLayerDataMap  this=-  sig=csp ====
int __fastcall Map_SetLayerData(__int16 *a1, int a2)
{
  int result; // eax

  if ( g_MapTileArray ) /*0x58d079*/
  {
    result = 80 * (*a1 + unk_89C2DC * a1[1]); /*0x58d08e*/
    *(_DWORD *)((char *)g_MapTileArray + result + 56) = a2; /*0x58d091*/
  }
  return result; /*0x58d095*/
}


// ==== 0x0058D0A0  TileSystem::LookupMapTile  this=TileSystem  sig=csp ====
int __thiscall sub_58D0A0(__int16 *this)
{
  if ( g_MapTileArray ) /*0x58d0a8*/
    return *((_DWORD *)g_MapTileArray + 20 * *this + 20 * unk_89C2DC * this->TileSystem_field_0x04 + 14); /*0x58d0c4*/
  else
    return -1; /*0x58d0aa*/
}


// ==== 0x0058D120  ObjectClass::method_58D120  this=ObjectClass  sig=csp ====
int __thiscall sub_58D120(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // ebx
  int v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  result = unk_89C2DC * unk_89C2DC; /*0x58d129*/
  v7 = this; /*0x58d12e*/
  if ( unk_89C2DC * unk_89C2DC <= 0 ) /*0x58d134*/
  {
    this->vtable4 = 0; /*0x58d1b3*/
  }
  else
  {
    v4 = a3; /*0x58d137*/
    v5 = 0; /*0x58d141*/
    v8 = unk_89C2DC * unk_89C2DC; /*0x58d143*/
    do /*0x58d1a4*/
    {
      if ( *(_DWORD *)((char *)g_MapTileArray + v5 + 56) == this->vtable3 ) /*0x58d153*/
      {
        *(_DWORD *)((char *)g_MapTileArray + v5 + 56) = a2; /*0x58d155*/
        *((_BYTE *)g_MapTileArray + v5 + 75) = 0; /*0x58d15e*/
        a3 = *(_DWORD *)((char *)g_MapTileArray + v5); /*0x58d176*/
        v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x58d17a*/
        v6[14] = 0; /*0x58d182*/
        *((_BYTE *)v6 + 282) = 0; /*0x58d185*/
        if ( v4 != -1 ) /*0x58d18c*/
          *((_BYTE *)v6 + 283) = v4; /*0x58d18e*/
        this = v7; /*0x58d194*/
      }
      v5 += 80; /*0x58d19c*/
      result = --v8; /*0x58d19f*/
    }
    while ( v8 ); /*0x58d1a4*/
    this->vtable4 = 0; /*0x58d1a8*/
  }
  return result; /*0x58d1ac*/
}


// ==== 0x0058D1C0  RandomMap::ExpandTerrainCells  this=RandomMap  sig=csp ====
int __thiscall RandomMap::ExpandTerrainCells(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // ecx
  int v7; // edi
  int i; // esi
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  _DWORD *v12; // ebx
  int v13; // edi
  int v14; // edx
  char v15; // al
  __int16 v16; // cx
  int v17; // eax
  int v18; // ecx
  char *v19; // esi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // [esp+Ch] [ebp-1Ch]
  int v26; // [esp+10h] [ebp-18h]
  int v27; // [esp+14h] [ebp-14h]
  int v28; // [esp+18h] [ebp-10h]
  int j; // [esp+1Ch] [ebp-Ch]
  int v30; // [esp+20h] [ebp-8h]

  result = (int)RandomMap::TerrainAlloc(this); /*0x58d1c9*/
  v4 = a2; /*0x58d1ce*/
  v5 = result; /*0x58d1d2*/
  v25 = result; /*0x58d1d7*/
  if ( a2 > 1 ) /*0x58d1db*/
  {
    v6 = unk_89C2DC * unk_89C2DC; /*0x58d1e3*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58d1e8*/
    {
      result = 0; /*0x58d1ea*/
      do /*0x58d1fe*/
      {
        result += 80; /*0x58d1f2*/
        --v6; /*0x58d1f5*/
        *(_DWORD *)((char *)g_MapTileArray + result - 20) = -1; /*0x58d1f6*/
      }
      while ( v6 ); /*0x58d1fe*/
    }
  }
  v7 = 0; /*0x58d201*/
  v26 = 0; /*0x58d205*/
  if ( a2 > 0 ) /*0x58d209*/
  {
    do /*0x58d3c5*/
    {
      for ( i = *(_DWORD *)(v5 + 16) - 1; i >= 0; --i ) /*0x58d214*/
      {
        result = *(_DWORD *)(v5 + 4); /*0x58d216*/
        v9 = *(_DWORD *)(result + 4 * i); /*0x58d221*/
        if ( g_MapTileArray ) /*0x58d228*/
        {
          result = 80 * ((__int16)v9 + unk_89C2DC * SHIWORD(v9)); /*0x58d242*/
          *(_DWORD *)((char *)g_MapTileArray + result + 56) = a3; /*0x58d245*/
        }
      }
      if ( v7 < v4 - 1 ) /*0x58d251*/
      {
        v10 = __2_YAPAXI_Z(0x18u); /*0x58d259*/
        v11 = v10; /*0x58d25e*/
        v12 = 0; /*0x58d260*/
        if ( v10 ) /*0x58d267*/
        {
          VectorClass::CellConstructor(v10, 0, 0); /*0x58d26d*/
          v11[4] = 0; /*0x58d272*/
          *v11 = &vt_DynamicVectorClass_Cell; /*0x58d275*/
          v11[5] = 10; /*0x58d27b*/
          v12 = v11; /*0x58d282*/
        }
        v12[5] = *(_DWORD *)(v5 + 16); /*0x58d287*/
        result = *(_DWORD *)(v5 + 16) - 1; /*0x58d28d*/
        v30 = result; /*0x58d28e*/
        if ( result >= 0 ) /*0x58d292*/
        {
          v13 = g_MapCellHeight_Value; /*0x58d298*/
          do /*0x58d39d*/
          {
            v14 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * result); /*0x58d2a1*/
            v15 = 0; /*0x58d2a4*/
            v27 = v14; /*0x58d2a6*/
            for ( j = 0; j < 8; ++j ) /*0x58d2aa*/
            {
              v16 = HIWORD(v27) + HIWORD(MEMORY[0x89F688][v15 & 7]); /*0x58d2c4*/
              LOWORD(v28) = LOWORD(MEMORY[0x89F688][v15 & 7]) + v27; /*0x58d2c9*/
              v17 = v16; /*0x58d2d1*/
              HIWORD(v28) = v16; /*0x58d2d4*/
              v18 = v16 + (__int16)v28; /*0x58d2d9*/
              if ( v18 > v13 && (__int16)v28 - v17 < v13 && v17 - (__int16)v28 < v13 && v18 <= g_MapCellCount ) /*0x58d302*/
              {
                v19 = (char *)g_MapTileArray + 80 * (__int16)v28 + 80 * unk_89C2DC * v17; /*0x58d31f*/
                if ( *((_DWORD *)v19 + 14) == this->RandomMap_field_0x8 ) /*0x58d326*/
                {
                  if ( *((_DWORD *)v19 + 15) != v26 + 1 ) /*0x58d334*/
                  {
                    v20 = v12[2]; /*0x58d336*/
                    if ( v12[4] < v20 /*0x58d35b*/
                      || (*((_BYTE *)v12 + 13) || !v20)
                      && (v21 = v12[5], v21 > 0)
                      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v12 + 8))(v12, v20 + v21, 0) )
                    {
                      v22 = v12[4]; /*0x58d362*/
                      v23 = v12[1]; /*0x58d365*/
                      v12[4] = v22 + 1; /*0x58d36b*/
                      *(_DWORD *)(v23 + 4 * v22) = v28; /*0x58d372*/
                    }
                    *((_DWORD *)v19 + 15) = v26 + 1; /*0x58d375*/
                    v13 = g_MapCellHeight_Value; /*0x58d378*/
                  }
                  v5 = v25; /*0x58d37e*/
                }
              }
              v15 = j + 1; /*0x58d386*/
            }
            result = --v30; /*0x58d398*/
          }
          while ( v30 >= 0 ); /*0x58d39d*/
          v7 = v26; /*0x58d3a3*/
        }
        if ( v5 ) /*0x58d3a9*/
          result = (**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x58d3b2*/
        v25 = (int)v12; /*0x58d3b4*/
        v5 = (int)v12; /*0x58d3b8*/
        v4 = a2; /*0x58d3ba*/
      }
      v26 = ++v7; /*0x58d3c1*/
    }
    while ( v7 < v4 ); /*0x58d3c5*/
  }
  if ( v5 ) /*0x58d3cf*/
    result = (**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x58d3d8*/
  if ( v4 > 1 ) /*0x58d3df*/
  {
    v24 = unk_89C2DC * unk_89C2DC; /*0x58d3e7*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58d3ec*/
    {
      result = 0; /*0x58d3ee*/
      do /*0x58d402*/
      {
        result += 80; /*0x58d3f6*/
        --v24; /*0x58d3f9*/
        *(_DWORD *)((char *)g_MapTileArray + result - 20) = -1; /*0x58d3fa*/
      }
      while ( v24 ); /*0x58d402*/
    }
  }
  return result; /*0x58d3da*/
}


// ==== 0x0058D410  RandomMap::TerrainAlloc  this=DynamicVector  sig=csp ====
_DWORD *__thiscall RandomMap_TerrainAlloc(_DWORD *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // ebx
  _DWORD *Bit; // ebp
  int v5; // ecx
  int v6; // eax
  signed int i; // edi
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  char v16; // [esp+Fh] [ebp-Dh]
  _DWORD *v17; // [esp+10h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-4h]

  v1 = __2_YAPAXI_Z(0x18u); /*0x58d41c*/
  v2 = v1; /*0x58d421*/
  if ( v1 ) /*0x58d428*/
  {
    VectorClass::CellConstructor(v1, 0, 0); /*0x58d430*/
    *v2 = &vt_DynamicVectorClass_Cell; /*0x58d435*/
    v2[5] = 10; /*0x58d43b*/
    v2[4] = 0; /*0x58d442*/
    v3 = v2; /*0x58d449*/
  }
  else
  {
    v3 = 0; /*0x58d44d*/
  }
  v17 = v3; /*0x58d454*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x58d458*/
  Bit = (_DWORD *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x58d467*/
  if ( !Bit ) /*0x58d46b*/
    return v3; /*0x58d592*/
  do
  {
    v5 = Bit[9]; /*0x58d478*/
    if ( g_MapTileArray ) /*0x58d481*/
      v6 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v5 + 20 * unk_89C2DC * SHIWORD(v5) + 14); /*0x58d49f*/
    else
      v6 = -1; /*0x58d483*/
    if ( v6 == this->DynamicVector_field_0x8 )
    {
      v16 = 0; /*0x58d4b0*/
      for ( i = 0; i < 8; ++i )
      {
        v19 = *((_DWORD *)Cell::GetNeighbourContent(Bit, i) + 9); /*0x58d4c8*/
        v8 = SHIWORD(v19) + (__int16)v19; /*0x58d4d4*/
        if ( v8 > g_MapCellHeight_Value )
        {
          if ( (__int16)v19 - SHIWORD(v19) < g_MapCellHeight_Value
            && SHIWORD(v19) - (__int16)v19 < g_MapCellHeight_Value
            && v8 <= g_MapCellCount )
          {
            v9 = g_MapTileArray
               ? *((_DWORD *)g_MapTileArray + 20 * (__int16)v19 + 20 * unk_89C2DC * SHIWORD(v19) + 14)
               : -1;
            if ( v9 != this->DynamicVector_field_0x8 ) /*0x58d51c*/
              v16 = 1; /*0x58d51e*/
          }
          v3 = v17; /*0x58d523*/
        }
      }
      if ( v16 ) /*0x58d533*/
      {
        v10 = v3[2]; /*0x58d535*/
        v11 = Bit[9]; /*0x58d53b*/
        if ( v3[4] < v10 /*0x58d55d*/
          || (*((_BYTE *)v3 + 13) || !v10)
          && (v12 = v3[5], v12 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v10 + v12, 0) )
        {
          v13 = v3[4]; /*0x58d564*/
          v14 = v3[1]; /*0x58d567*/
          v3[4] = v13 + 1; /*0x58d56d*/
          *(_DWORD *)(v14 + 4 * v13) = v11; /*0x58d570*/
        }
      }
    }
    Bit = (_DWORD *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x58d57d*/
  }
  while ( Bit );
  return v3; /*0x58d588*/
}


// ==== 0x0058E5D0  TileSystem::AnalyzeTileConnectivity  this=TileSystem  sig=csp ====
_DWORD *__thiscall sub_58E5D0(_DWORD *this)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // ebp
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  int v10; // edx
  __int16 v11; // cx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  _DWORD *v21; // [esp+Ch] [ebp-10h]
  int v22; // [esp+10h] [ebp-Ch]

  v1 = this; /*0x58e5d6*/
  v2 = __2_YAPAXI_Z(0x18u); /*0x58e5de*/
  v3 = v2; /*0x58e5e3*/
  v4 = 0; /*0x58e5e5*/
  if ( v2 ) /*0x58e5ec*/
  {
    VectorClass::CellConstructor(v2, 0, 0); /*0x58e5f2*/
    v3[4] = 0; /*0x58e5f7*/
    *v3 = &vt_DynamicVectorClass_Cell; /*0x58e5fa*/
    v3[5] = 10; /*0x58e600*/
    v4 = v3; /*0x58e607*/
  }
  v21 = v4; /*0x58e60c*/
  v5 = v1[3] / 2; /*0x58e613*/
  if ( v5 < 10 ) /*0x58e618*/
    v5 = 10; /*0x58e61a*/
  v4[5] = v5; /*0x58e61f*/
  v6 = v1[14] - 1; /*0x58e625*/
  v22 = v6; /*0x58e626*/
  if ( v6 < 0 ) /*0x58e62a*/
    return v4; /*0x58e728*/
  v7 = g_MapCellHeight_Value; /*0x58e631*/
  while ( 2 )
  {
    v8 = 0; /*0x58e641*/
    v9 = *(_DWORD *)(v1[11] + 4 * v6); /*0x58e646*/
    while ( 1 ) /*0x58e64f*/
    {
      v10 = v8 & 7; /*0x58e64f*/
      v11 = HIWORD(v9) + HIWORD(MEMORY[0x89F688][v10]); /*0x58e668*/
      v12 = (__int16)(v9 + LOWORD(MEMORY[0x89F688][v10])); /*0x58e66d*/
      v13 = v11; /*0x58e670*/
      v14 = v11 + v12; /*0x58e673*/
      if ( v14 > v7 ) /*0x58e678*/
        break; /*0x58e678*/
LABEL_18:
      if ( ++v8 >= 8 ) /*0x58e6c5*/
        goto LABEL_27; /*0x58e6c5*/
    }
    if ( v12 - v13 >= v7
      || v13 - v12 >= v7
      || v14 > g_MapCellCount
      || (g_MapTileArray ? (v15 = *((_DWORD *)g_MapTileArray + 20 * v12 + 20 * unk_89C2DC * v13 + 14)) : (v15 = -1),
          v15 == this->TileSystem_field_0x08) )
    {
      v4 = v21; /*0x58e6bd*/
      goto LABEL_18; /*0x58e6bd*/
    }
    v4 = v21; /*0x58e6c9*/
    v16 = v21[2]; /*0x58e6cd*/
    if ( v21[4] < v16 ) /*0x58e6d5*/
      goto LABEL_25; /*0x58e6d5*/
    if ( *((_BYTE *)v21 + 13) || !v16 ) /*0x58e6e0*/
    {
      v17 = v21[5]; /*0x58e6e2*/
      if ( v17 > 0 ) /*0x58e6e7*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v21 + 8))(v21, v16 + v17, 0) ) /*0x58e6f3*/
        {
LABEL_25:
          v18 = v21[4]; /*0x58e6fa*/
          v19 = v21[1]; /*0x58e6fd*/
          v21[4] = v18 + 1; /*0x58e703*/
          *(_DWORD *)(v19 + 4 * v18) = v9; /*0x58e706*/
        }
        v7 = g_MapCellHeight_Value; /*0x58e709*/
      }
    }
LABEL_27:
    if ( --v22 >= 0 ) /*0x58e718*/
    {
      v6 = v22; /*0x58e639*/
      v1 = this; /*0x58e63d*/
      continue; /*0x58e63d*/
    }
    return v4; /*0x58e721*/
  }
}


// ==== 0x0058E740  RandomMap::CollectTerrainCells  this=RandomMap  sig=csp ====
char __thiscall RandomMap::CollectTerrainCells(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // ebp
  _DWORD *v5; // ecx
  int v6; // esi
  int v7; // ebx
  _WORD *v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // edx
  char *v12; // eax
  char *v13; // esi
  int v14; // edi
  _DWORD *v15; // eax
  int *v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  _DWORD *v21; // edi
  int v22; // edx
  int v24; // [esp+10h] [ebp-18h] BYREF
  _DWORD *v25; // [esp+14h] [ebp-14h]
  _DWORD *v26; // [esp+18h] [ebp-10h]
  int v27; // [esp+1Ch] [ebp-Ch]
  int v28; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  v26 = this; /*0x58e747*/
  v25 = RandomMap::TerrainAlloc(this); /*0x58e750*/
  for ( i = 0; i < a2; ++i ) /*0x58e760*/
  {
    v2 = __2_YAPAXI_Z(0x18u); /*0x58e768*/
    v3 = v2; /*0x58e76d*/
    if ( v2 ) /*0x58e774*/
    {
      VectorClass::CellConstructor(v2, 0, 0); /*0x58e77a*/
      *v3 = &vt_DynamicVectorClass_Cell; /*0x58e77f*/
      v3[5] = 10; /*0x58e785*/
      v3[4] = 0; /*0x58e78c*/
      v4 = v3; /*0x58e78f*/
    }
    else
    {
      v4 = 0; /*0x58e793*/
    }
    v5 = v25; /*0x58e795*/
    v27 = 0; /*0x58e799*/
    v4[5] = 3 * v25[4]; /*0x58e7a3*/
    if ( (int)v5[4] > 0 ) /*0x58e7ab*/
    {
      v6 = g_MapCellHeight_Value; /*0x58e7b1*/
      while ( 2 ) /*0x58e7b7*/
      {
        v7 = 0; /*0x58e7b7*/
        while ( 1 ) /*0x58e7d2*/
        {
          v8 = (_WORD *)(v5[1] + 4 * v27); /*0x58e7d2*/
          v9 = v8[1] + HIWORD(MEMORY[0x89F688][v7 & 7]); /*0x58e7e5*/
          LOWORD(v28) = LOWORD(MEMORY[0x89F688][v7 & 7]) + *v8; /*0x58e7e9*/
          HIWORD(v28) = v9; /*0x58e7ee*/
          v24 = v28; /*0x58e7f7*/
          v10 = v9; /*0x58e7fe*/
          v11 = v9 + (__int16)v28; /*0x58e801*/
          if ( v11 > v6 && (__int16)v28 - v10 < v6 && v10 - (__int16)v28 < v6 && v11 <= g_MapCellCount ) /*0x58e828*/
          {
            v12 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24); /*0x58e838*/
            if ( v12[283] == v26[4] ) /*0x58e84b*/
            {
              v13 = (char *)g_MapTileArray + 80 * (__int16)v24 + 80 * unk_89C2DC * SHIWORD(v24); /*0x58e870*/
              v14 = *((_DWORD *)v13 + 14); /*0x58e872*/
              if ( v14 == -1 /*0x58e8a9*/
                && ((v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24), Cell::IsEmpty(v15))
                 || (v16 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24), Cell::IsShore(v16))) )
              {
                v17 = v4[2]; /*0x58e8b2*/
                if ( v4[4] < v17 /*0x58e8d8*/
                  || (*((_BYTE *)v4 + 13) || !v17)
                  && (v18 = v4[5], v18 > 0)
                  && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v17 + v18, 0) )
                {
                  v19 = v4[4]; /*0x58e8df*/
                  v20 = v4[1]; /*0x58e8e2*/
                  v4[4] = v19 + 1; /*0x58e8e8*/
                  *(_DWORD *)(v20 + 4 * v19) = v24; /*0x58e8ef*/
                }
                v21 = v26; /*0x58e8f2*/
                *((_DWORD *)v13 + 14) = v26[2]; /*0x58e903*/
                *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24) + 283) = *((_BYTE *)v21 + 16); /*0x58e90e*/
              }
              else if ( v14 != v26[2] ) /*0x58e91d*/
              {
                if ( v25 ) /*0x58e98c*/
                  (*(void (__thiscall **)(_DWORD *, int))*v25)(v25, 1); /*0x58e992*/
                if ( v4 ) /*0x58e996*/
                  (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x58e99f*/
                return 0; /*0x58e9a4*/
              }
            }
            v6 = g_MapCellHeight_Value; /*0x58e91f*/
          }
          if ( ++v7 >= 8 ) /*0x58e929*/
            break; /*0x58e929*/
          v5 = v25; /*0x58e7bb*/
        }
        v5 = v25; /*0x58e92f*/
        v22 = v25[4]; /*0x58e938*/
        if ( ++v27 < v22 ) /*0x58e941*/
          continue; /*0x58e941*/
        break;
      }
    }
    if ( v5 ) /*0x58e94b*/
      (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x58e951*/
    v25 = v4; /*0x58e95c*/
  }
  if ( v25 ) /*0x58e972*/
    (*(void (__thiscall **)(_DWORD *, int))*v25)(v25, 1); /*0x58e978*/
  return 1; /*0x58e97a*/
}


// ==== 0x0058E9B0  RandomMap::PlaceRandomMapTerrain  this=RandomMap  sig=csp ====
char __thiscall PlaceRandomMapTerrain(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // ecx
  int v3; // ebx
  int v4; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // ecx
  int i; // eax
  int v9; // eax
  int v10; // ebx
  int k; // esi
  int v12; // eax
  int v13; // ecx
  char *v14; // eax
  int v15; // eax
  int v17; // [esp+14h] [ebp-24h]
  void **v19; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v21; // [esp+28h] [ebp-10h]
  char v22; // [esp+2Dh] [ebp-Bh]
  int j; // [esp+30h] [ebp-8h]
  int v24; // [esp+34h] [ebp-4h]

  v1 = RandomMap::TerrainAlloc(this); /*0x58e9c7*/
  VectorClass::CellConstructor(&v19, 0, 0); /*0x58e9c9*/
  v2 = 50000; /*0x58e9ce*/
  v19 = &vt_DynamicVectorClass_Cell; /*0x58e9d3*/
  j = 0; /*0x58e9db*/
  v24 = 50000; /*0x58e9e3*/
  v3 = 0; /*0x58e9ea*/
  if ( (int)v1[4] > 0 ) /*0x58e9ee*/
  {
    v4 = v21; /*0x58e9f0*/
    while ( 1 ) /*0x58e9fd*/
    {
      v5 = (_DWORD *)(v1[1] + 4 * v3); /*0x58e9fd*/
      if ( j < v4 ) /*0x58ea06*/
        goto LABEL_9; /*0x58ea06*/
      if ( (v22 || !v4) && v2 > 0 ) /*0x58ea16*/
        break; /*0x58ea16*/
LABEL_11:
      if ( ++v3 >= v1[4] ) /*0x58ea4a*/
        goto LABEL_12; /*0x58ea4a*/
      v2 = v24; /*0x58e9f6*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v19[2])(&v19, v2 + v4, 0) ) /*0x58ea25*/
    {
LABEL_9:
      v6 = j++; /*0x58ea2c*/
      *((_DWORD *)Block + v6) = *v5; /*0x58ea3d*/
    }
    v4 = v21; /*0x58ea40*/
    goto LABEL_11; /*0x58ea40*/
  }
LABEL_12:
  if ( v1 ) /*0x58ea4e*/
    (*(void (__thiscall **)(_DWORD *, int))*v1)(v1, 1); /*0x58ea56*/
  v7 = j; /*0x58ea58*/
  for ( i = j; j > 0; i = j ) /*0x58ea60*/
  {
    v9 = i - 1; /*0x58ea6b*/
    v10 = *((_DWORD *)Block + v9); /*0x58ea6e*/
    if ( v9 < v7 ) /*0x58ea75*/
    {
      for ( j = v7 - 1; v9 < j; *((_DWORD *)Block + v9 - 1) = *((_DWORD *)Block + v9) ) /*0x58ea7e*/
        ++v9; /*0x58ea84*/
    }
    for ( k = 0; k < 8; ++k ) /*0x58ea99*/
    {
      v12 = k & 7; /*0x58eaa3*/
      LOWORD(v17) = v10 + LOWORD(MEMORY[0x89F688][v12]); /*0x58eabf*/
      HIWORD(v17) = HIWORD(v10) + HIWORD(MEMORY[0x89F688][v12]); /*0x58eac4*/
      v13 = SHIWORD(v17) + (__int16)v17; /*0x58eacf*/
      if ( v13 > g_MapCellHeight_Value /*0x58eafc*/
        && (__int16)v17 - SHIWORD(v17) < g_MapCellHeight_Value
        && SHIWORD(v17) - (__int16)v17 < g_MapCellHeight_Value
        && v13 <= g_MapCellCount )
      {
        v14 = (char *)g_MapTileArray + 80 * (__int16)v17 + 80 * unk_89C2DC * SHIWORD(v17); /*0x58eb13*/
        if ( *((_DWORD *)v14 + 14) == -1 ) /*0x58eb19*/
        {
          if ( v14[75] ) /*0x58eb1b*/
          {
            *((_DWORD *)v14 + 14) = this->RandomMap_field_0x8; /*0x58eb29*/
            if ( j < v21 /*0x58eb57*/
              || (v22 || !v21)
              && v24 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v19[2])(&v19, v24 + v21, 0) )
            {
              v15 = j++; /*0x58eb66*/
              *((_DWORD *)Block + v15) = v17; /*0x58eb71*/
            }
          }
        }
      }
    }
    v7 = j; /*0x58eb7e*/
  }
  v19 = &vt_VectorClass_Cell; /*0x58eb93*/
  if ( Block && v22 ) /*0x58eba6*/
    __3_YAXPAX_Z(Block); /*0x58eba9*/
  return 1; /*0x58eb91*/
}


// ==== 0x0058EBC0  ObjectClass::BuildRandomMapTiles  this=ObjectClass  sig=csp ====
int BuildRandomMapTiles()
{
  int i; // esi
  _DWORD *v1; // ecx
  int v2; // eax
  int v3; // esi
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int *v15; // eax
  int v16; // ecx
  int v17; // esi
  int v18; // ecx
  int v19; // esi
  bool v20; // zf
  double v21; // st7
  int v22; // ebx
  int result; // eax
  int j; // edi
  int v25; // esi
  int v26; // eax
  void *v27; // eax
  int v28; // [esp+10h] [ebp-Ch]
  int v29; // [esp+14h] [ebp-8h]
  int v30; // [esp+18h] [ebp-4h] BYREF

  for ( i = 0; i < g_RandomMap_TileData; v1[3] = 0 ) /*0x58ebd0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + i) + 40) + 12))(*((_DWORD *)g_RandomMap_TerrainState + i) + 40); /*0x58ebe9*/
    *(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + i) + 12) = 0; /*0x58ebf4*/
    v1 = (_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + i++) + 64); /*0x58ec07*/
    *v1 = 9999; /*0x58ec0c*/
    v1[1] = 9999; /*0x58ec0e*/
    v1[2] = 0; /*0x58ec11*/
  }
  v2 = unk_89C2DC * unk_89C2DC - 1; /*0x58ec28*/
  if ( v2 >= 0 ) /*0x58ec29*/
  {
    v3 = g_MapCellHeight_Value; /*0x58ec2f*/
    v4 = 80 * v2; /*0x58ec38*/
    v28 = 80 * v2; /*0x58ec3c*/
    v30 = unk_89C2DC * unk_89C2DC; /*0x58ec40*/
    while ( 1 ) /*0x58ec49*/
    {
      v5 = *(_DWORD *)((char *)g_MapTileArray + v4); /*0x58ec49*/
      v29 = v5; /*0x58ec4c*/
      v6 = SHIWORD(v5); /*0x58ec50*/
      v7 = (__int16)v5; /*0x58ec55*/
      v8 = SHIWORD(v5) + (__int16)v5; /*0x58ec58*/
      if ( v8 > v3 && (__int16)v5 - SHIWORD(v5) < v3 && SHIWORD(v5) - (__int16)v5 < v3 && v8 <= g_MapCellCount ) /*0x58ec81*/
      {
        v9 = *(_DWORD *)((char *)g_MapTileArray + v4 + 56); /*0x58ec8c*/
        if ( v9 >= 0 && v9 < g_RandomMap_TileData ) /*0x58ec9e*/
          break; /*0x58ec9e*/
      }
LABEL_30:
      v4 -= 80; /*0x58ed73*/
      v20 = v30 == 1; /*0x58ed7a*/
      v28 = v4; /*0x58ed7b*/
      --v30; /*0x58ed7f*/
      if ( v20 ) /*0x58ed83*/
        goto LABEL_31; /*0x58ed83*/
    }
    ++*(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + v9) + 12); /*0x58ecb0*/
    v10 = *((_DWORD *)g_RandomMap_TerrainState + v9); /*0x58ecb8*/
    v11 = *(_DWORD *)(v10 + 48); /*0x58ecbb*/
    v12 = v10 + 40; /*0x58ecbe*/
    if ( *(_DWORD *)(v12 + 16) >= v11 ) /*0x58ecc4*/
    {
      if ( !*(_BYTE *)(v12 + 13) && v11 ) /*0x58eccf*/
        goto LABEL_19; /*0x58eccf*/
      v13 = *(_DWORD *)(v12 + 20); /*0x58ecd1*/
      if ( v13 <= 0 ) /*0x58ecd6*/
        goto LABEL_19; /*0x58ecd6*/
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 8))(v12, v11 + v13, 0) ) /*0x58ece6*/
      {
LABEL_18:
        v4 = v28; /*0x58ecfb*/
LABEL_19:
        v15 = (int *)(*((_DWORD *)g_RandomMap_TerrainState + v9) + 64); /*0x58ecff*/
        if ( !*(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + v9) + 72) ) /*0x58ed0a*/
        {
          *v15 = v7; /*0x58ed16*/
          v15[1] = v6; /*0x58ed18*/
          v15[2] = 1; /*0x58ed1b*/
          v15[3] = 1; /*0x58ed1e*/
        }
        v16 = *v15; /*0x58ed21*/
        if ( v7 >= v15[2] + *v15 ) /*0x58ed2c*/
          v15[2] = v7 - v16 + 1; /*0x58ed33*/
        if ( v7 < v16 ) /*0x58ed38*/
        {
          v17 = v15[2]; /*0x58ed3a*/
          *v15 = v7; /*0x58ed41*/
          v15[2] = v16 - v7 + v17; /*0x58ed43*/
        }
        v18 = v15[1]; /*0x58ed46*/
        if ( v6 >= v15[3] + v18 ) /*0x58ed52*/
          v15[3] = v6 - v18 + 1; /*0x58ed59*/
        if ( v6 < v18 ) /*0x58ed5e*/
        {
          v19 = v15[3]; /*0x58ed60*/
          v15[1] = v6; /*0x58ed67*/
          v15[3] = v18 - v6 + v19; /*0x58ed6a*/
        }
        v3 = g_MapCellHeight_Value; /*0x58ed6d*/
        goto LABEL_30; /*0x58ed6d*/
      }
      v5 = v29; /*0x58ece8*/
    }
    v14 = *(_DWORD *)(v12 + 16); /*0x58ecec*/
    *(_DWORD *)(v12 + 16) = v14 + 1; /*0x58ecf2*/
    *(_DWORD *)(*(_DWORD *)(v12 + 4) + 4 * v14) = v5; /*0x58ecf8*/
    goto LABEL_18; /*0x58ecf8*/
  }
LABEL_31:
  v21 = ((double)dword_ABE048 * 0.005 + 0.05) * (double)dword_ABE15C * (double)dword_ABE158; /*0x58ed89*/
  v22 = Math::RoundToInt(v21 + v21); /*0x58edae*/
LABEL_32:
  result = g_RandomMap_TileData; /*0x58edb5*/
  for ( j = 0; j < g_RandomMap_TileData; ++j ) /*0x58edbe*/
  {
    v25 = *((_DWORD *)g_RandomMap_TerrainState + j); /*0x58edca*/
    if ( !*(_BYTE *)(v25 + 26) && !*(_BYTE *)(v25 + 20) ) /*0x58edd4*/
    {
      if ( *(_DWORD *)(v25 + 12) <= v22 ) /*0x58edde*/
      {
        *(_BYTE *)(v25 + 26) = 1; /*0x58eded*/
      }
      else if ( TileSystem::BuildNodes(*((_DWORD *)g_RandomMap_TerrainState + j)) ) /*0x58ede2*/
      {
        if ( v25 ) /*0x58ee03*/
        {
          if ( *(_DWORD *)v25 ) /*0x58ee05*/
          {
            (***(void (__thiscall ****)(_DWORD, int))v25)(*(_DWORD *)v25, 1); /*0x58ee11*/
            *(_DWORD *)v25 = 0; /*0x58ee13*/
          }
          v30 = v25; /*0x58ee25*/
          v26 = (*(int (__thiscall **)(int *, int *))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v30); /*0x58ee29*/
          if ( v26 != -1 && v26 < g_RandomMap_TileData && v26 < --g_RandomMap_TileData ) /*0x58ee44*/
          {
            do /*0x58ee5c*/
            {
              ++v26; /*0x58ee4c*/
              *((_DWORD *)g_RandomMap_TerrainState + v26 - 1) = *((_DWORD *)g_RandomMap_TerrainState + v26); /*0x58ee50*/
            }
            while ( v26 < g_RandomMap_TileData ); /*0x58ee5c*/
          }
          v27 = *(void **)(v25 + 44); /*0x58ee5e*/
          *(_DWORD *)(v25 + 40) = &vt_VectorClass_Cell; /*0x58ee61*/
          if ( v27 ) /*0x58ee66*/
          {
            if ( *(_BYTE *)(v25 + 53) ) /*0x58ee68*/
            {
              __3_YAXPAX_Z(v27); /*0x58ee70*/
              *(_DWORD *)(v25 + 44) = 0; /*0x58ee78*/
            }
          }
          *(_BYTE *)(v25 + 53) = 0; /*0x58ee7c*/
          *(_DWORD *)(v25 + 48) = 0; /*0x58ee80*/
          __3_YAXPAX_Z((void *)v25); /*0x58ee83*/
        }
        goto LABEL_32; /*0x58ee8b*/
      }
    }
    result = g_RandomMap_TileData; /*0x58edf1*/
  }
  return result; /*0x58ee90*/
}


// ==== 0x0058EF10  ObjectClass::ResetMapState  this=ObjectClass  sig=csp ====
char sub_58EF10()
{
  int i; // eax
  int v1; // ecx
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  void *v5; // esi
  int v6; // esi
  int v7; // edi
  void *v8; // eax
  int Terrain; // eax
  int v10; // esi
  int v11; // esi
  int v12; // esi
  void (__thiscall ***v13)(_DWORD, int); // ecx
  char v15; // [esp+Fh] [ebp-5h]
  _WORD v16[2]; // [esp+10h] [ebp-4h] BYREF

  v15 = 1; /*0x58ef1e*/
  Mouse::SetBounds((int)&MEMORY[0x87F7E8], 0); /*0x58ef23*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x58ef2d*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x58ef41*/
  {
    if ( !v15 ) /*0x58ef47*/
      break; /*0x58ef47*/
    v15 = Cliff::ProcessTransitions(i, -1); /*0x58ef5a*/
  }
  if ( g_MapTileArray ) /*0x58ef6d*/
  {
    v1 = unk_89C2DC * unk_89C2DC; /*0x58ef75*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58ef7a*/
    {
      v2 = 0; /*0x58ef7c*/
      do /*0x58ef96*/
      {
        v2 += 80; /*0x58ef84*/
        --v1; /*0x58ef87*/
        *(_DWORD *)((char *)g_MapTileArray + v2 - 24) = -1; /*0x58ef88*/
        *(_DWORD *)((char *)g_MapTileArray + v2 - 20) = -1; /*0x58ef92*/
      }
      while ( v1 ); /*0x58ef96*/
    }
  }
  v3 = g_RandomMap_TileData; /*0x58ef98*/
  v4 = g_RandomMap_TileData - 1; /*0x58ef9f*/
  if ( g_RandomMap_TileData - 1 >= 0 ) /*0x58efa4*/
  {
    do /*0x58efc3*/
    {
      v5 = (void *)*((_DWORD *)g_RandomMap_TerrainState + v4); /*0x58efab*/
      if ( v5 ) /*0x58efb0*/
      {
        TileNode::Cleanup(*((_DWORD **)g_RandomMap_TerrainState + v4)); /*0x58efb4*/
        __3_YAXPAX_Z(v5); /*0x58efba*/
      }
      --v4; /*0x58efc2*/
    }
    while ( v4 >= 0 ); /*0x58efc3*/
    v3 = g_RandomMap_TileData; /*0x58efc5*/
  }
  g_MapTileArrayEnd = 0; /*0x58efd0*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58efdb*/
  {
    v6 = 0; /*0x58efdd*/
    v7 = unk_89C2DC * unk_89C2DC; /*0x58efdf*/
    do /*0x58f02b*/
    {
      if ( *(_DWORD *)((char *)g_MapTileArray + v6 + 56) == -1 ) /*0x58efec*/
      {
        v16[0] = 0; /*0x58eff2*/
        v16[1] = 0; /*0x58eff8*/
        if ( Coord::Compare2D((char *)g_MapTileArray + v6, v16) ) /*0x58effd*/
        {
          v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)((char *)g_MapTileArray + v6)); /*0x58f014*/
          Terrain = RandomMap::GenerateTerrain((int)v8); /*0x58f01b*/
          if ( Terrain ) /*0x58f022*/
            *(_BYTE *)(Terrain + 26) = 0; /*0x58f024*/
        }
      }
      v6 += 80; /*0x58f027*/
      --v7; /*0x58f02a*/
    }
    while ( v7 ); /*0x58f02b*/
    v3 = g_RandomMap_TileData; /*0x58f02d*/
  }
  if ( v15 ) /*0x58f03a*/
  {
    v10 = 0; /*0x58f03c*/
    if ( v3 > 0 ) /*0x58f040*/
    {
      do /*0x58f059*/
      {
        RandomMap::CollectBorderCells(*((_DWORD **)g_RandomMap_TerrainState + v10)); /*0x58f04b*/
        v3 = g_RandomMap_TileData; /*0x58f050*/
        ++v10; /*0x58f056*/
      }
      while ( v10 < g_RandomMap_TileData ); /*0x58f059*/
    }
    v11 = 0; /*0x58f05b*/
    if ( v3 > 0 ) /*0x58f05f*/
    {
      do /*0x58f077*/
      {
        RandomMap::AllocateArea(*((_DWORD *)g_RandomMap_TerrainState + v11)); /*0x58f069*/
        v3 = g_RandomMap_TileData; /*0x58f06e*/
        ++v11; /*0x58f074*/
      }
      while ( v11 < g_RandomMap_TileData ); /*0x58f077*/
    }
    v12 = 0; /*0x58f079*/
    if ( v3 > 0 ) /*0x58f07d*/
    {
      do /*0x58f0aa*/
      {
        v13 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)g_RandomMap_TerrainState + v12) + 4); /*0x58f088*/
        if ( v13 ) /*0x58f08d*/
          (**v13)(v13, 1); /*0x58f093*/
        *(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + v12++) + 4) = 0; /*0x58f0a0*/
      }
      while ( v12 < g_RandomMap_TileData ); /*0x58f0aa*/
    }
  }
  return 1; /*0x58f0ac*/
}


// ==== 0x0058F0C0  RandomMap::CollectBorderCells  this=RandomMap  sig=csp ====
void __thiscall RandomMap::CollectBorderCells(_DWORD *this)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _BYTE *v4; // ecx
  signed int v5; // eax
  _DWORD *v6; // ebp
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // ebp
  int v11; // edx
  __int16 v12; // cx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  signed int i; // edi
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // esi
  char *v26; // edx
  _BYTE *Block; // [esp+10h] [ebp-14h]
  int v28; // [esp+14h] [ebp-10h]
  _DWORD *v29; // [esp+1Ch] [ebp-8h]

  v1 = this; /*0x58f0c7*/
  v2 = __2_YAPAXI_Z(0x18u); /*0x58f0cf*/
  v3 = v2; /*0x58f0d4*/
  if ( v2 ) /*0x58f0db*/
  {
    VectorClass::Construct(v2, 0, 0); /*0x58f0e3*/
    *v3 = &vt_DynamicVectorClass_int; /*0x58f0e8*/
    v3[5] = 10; /*0x58f0ee*/
    v3[4] = 0; /*0x58f0f5*/
  }
  else
  {
    v3 = 0; /*0x58f0fe*/
  }
  v1[1] = v3; /*0x58f100*/
  v4 = __2_YAPAXI_Z(g_MapTileArrayEnd); /*0x58f114*/
  v5 = 0; /*0x58f119*/
  for ( Block = v4; v5 < (int)g_MapTileArrayEnd; ++v5 ) /*0x58f121*/
    v4[v5] = 0; /*0x58f123*/
  v6 = RandomMap::TerrainAlloc(v1); /*0x58f139*/
  v7 = 0; /*0x58f13b*/
  v29 = v6; /*0x58f13d*/
  v28 = 0; /*0x58f141*/
  if ( (int)v6[4] > 0 ) /*0x58f14a*/
  {
    v8 = g_MapCellHeight_Value; /*0x58f150*/
    do /*0x58f1ee*/
    {
      v9 = 0; /*0x58f159*/
      v10 = *(_DWORD *)(v6[1] + 4 * v7); /*0x58f15b*/
      do /*0x58f1da*/
      {
        v11 = v9 & 7; /*0x58f164*/
        v12 = HIWORD(v10) + HIWORD(MEMORY[0x89F688][v11]); /*0x58f17d*/
        v13 = (__int16)(v10 + LOWORD(MEMORY[0x89F688][v11])); /*0x58f182*/
        v14 = v12; /*0x58f185*/
        v15 = v12 + v13; /*0x58f188*/
        if ( v15 > v8 && v13 - v14 < v8 && v14 - v13 < v8 && v15 <= g_MapCellCount ) /*0x58f1a5*/
        {
          if ( g_MapTileArray ) /*0x58f1af*/
          {
            v16 = *((_DWORD *)g_MapTileArray + 20 * v13 + 20 * unk_89C2DC * v14 + 14); /*0x58f1c0*/
            if ( v16 >= 0 ) /*0x58f1c6*/
            {
              Block[v16] = 1; /*0x58f1cc*/
              v8 = g_MapCellHeight_Value; /*0x58f1d0*/
            }
          }
        }
        ++v9; /*0x58f1d6*/
      }
      while ( v9 < 8 ); /*0x58f1da*/
      v6 = v29; /*0x58f1dc*/
      v7 = v28 + 1; /*0x58f1e4*/
      v28 = v7; /*0x58f1e8*/
    }
    while ( v7 < v29[4] ); /*0x58f1ee*/
    v1 = this; /*0x58f1f4*/
  }
  for ( i = 0; i < (int)g_MapTileArrayEnd; ++i ) /*0x58f201*/
  {
    if ( Block[i] && i != v1[2] ) /*0x58f210*/
    {
      v18 = v1[1]; /*0x58f212*/
      v19 = *(_DWORD *)(v18 + 8); /*0x58f215*/
      if ( *(_DWORD *)(v18 + 16) < v19 /*0x58f23a*/
        || (*(_BYTE *)(v18 + 13) || !v19)
        && (v20 = *(_DWORD *)(v18 + 20), v20 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v18 + 8))(v18, v19 + v20, 0) )
      {
        v21 = *(_DWORD *)(v18 + 16); /*0x58f241*/
        v22 = *(_DWORD *)(v18 + 4); /*0x58f244*/
        *(_DWORD *)(v18 + 16) = v21 + 1; /*0x58f24a*/
        *(_DWORD *)(v22 + 4 * v21) = i; /*0x58f24d*/
      }
    }
  }
  v23 = 0; /*0x58f25a*/
  v1[3] = 0; /*0x58f25c*/
  v24 = unk_89C2DC * unk_89C2DC; /*0x58f265*/
  if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x58f26a*/
  {
    v25 = v1[2]; /*0x58f26c*/
    v26 = (char *)g_MapTileArray; /*0x58f26f*/
    do /*0x58f29b*/
    {
      if ( *(_DWORD *)&v26[v23 + 56] == v25 && (*(_WORD *)&v26[v23] || *(_WORD *)&v26[v23 + 2]) ) /*0x58f282*/
      {
        ++v1[3]; /*0x58f28e*/
        v26 = (char *)g_MapTileArray; /*0x58f291*/
      }
      v23 += 80; /*0x58f297*/
      --v24; /*0x58f29a*/
    }
    while ( v24 ); /*0x58f29b*/
  }
  if ( v6 ) /*0x58f29f*/
    (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x58f2a8*/
  __3_YAXPAX_Z(Block); /*0x58f2af*/
}


// ==== 0x0058F2C0  RandomMap::PlaceBuildings  this=RandomMap  sig=csp ====
char __thiscall RandomMap_PlaceBuildings(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char result; // al
  int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // esi
  int v10; // ebp
  _WORD *v11; // eax
  void *v12; // esi
  void *v13; // ebp
  void *v14; // esi
  void *v15; // ebp
  void *v16; // esi
  void *v17; // ebp
  void *v18; // esi
  void *v19; // ebp
  int v20; // ebx
  int v21; // ebp
  int v22; // edi
  int v23; // ecx
  int v24; // eax
  char v25; // bl
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // ebp
  int v31; // edx
  int v32; // ebx
  int v33; // ecx
  int v34; // eax
  int v35; // esi
  __int16 v36; // di
  char v37; // bl
  unsigned int v38; // eax
  unsigned int v39; // eax
  int v40; // ecx
  int v41; // ebp
  int v42; // edx
  int v43; // eax
  int v44; // ebx
  __int16 v45; // si
  __int16 v46; // di
  unsigned int v47; // eax
  unsigned int v48; // eax
  char v49; // [esp+11h] [ebp-207h]
  char v50; // [esp+12h] [ebp-206h]
  char v51; // [esp+13h] [ebp-205h]
  char v52; // [esp+13h] [ebp-205h]
  int v53; // [esp+14h] [ebp-204h] BYREF
  int v54; // [esp+18h] [ebp-200h]
  int v55; // [esp+1Ch] [ebp-1FCh]
  int v56; // [esp+20h] [ebp-1F8h]
  _DWORD *v57; // [esp+24h] [ebp-1F4h]
  double v58; // [esp+28h] [ebp-1F0h]
  __int16 v59[2]; // [esp+30h] [ebp-1E8h] BYREF
  int v60; // [esp+34h] [ebp-1E4h]
  __int16 v61[2]; // [esp+38h] [ebp-1E0h] BYREF
  __int16 v62[2]; // [esp+3Ch] [ebp-1DCh] BYREF
  __int16 v63[2]; // [esp+40h] [ebp-1D8h] BYREF
  int v64; // [esp+44h] [ebp-1D4h]
  __int16 v65[2]; // [esp+48h] [ebp-1D0h] BYREF
  __int16 v66[2]; // [esp+4Ch] [ebp-1CCh] BYREF
  int v67; // [esp+50h] [ebp-1C8h]
  __int16 v68[2]; // [esp+54h] [ebp-1C4h] BYREF
  int v69; // [esp+58h] [ebp-1C0h]
  __int16 v70[2]; // [esp+5Ch] [ebp-1BCh] BYREF
  int v71; // [esp+60h] [ebp-1B8h] BYREF
  int v72; // [esp+64h] [ebp-1B4h]
  int v73; // [esp+68h] [ebp-1B0h]
  int v74; // [esp+6Ch] [ebp-1ACh]
  int v75; // [esp+70h] [ebp-1A8h] BYREF
  int v76; // [esp+74h] [ebp-1A4h]
  int v77; // [esp+78h] [ebp-1A0h]
  int v78; // [esp+7Ch] [ebp-19Ch]
  int v79; // [esp+80h] [ebp-198h] BYREF
  int v80; // [esp+84h] [ebp-194h]
  int v81; // [esp+88h] [ebp-190h]
  int v82; // [esp+8Ch] [ebp-18Ch]
  int v83; // [esp+90h] [ebp-188h] BYREF
  int v84; // [esp+94h] [ebp-184h]
  int v85; // [esp+98h] [ebp-180h]
  int v86; // [esp+9Ch] [ebp-17Ch]
  _WORD v87[2]; // [esp+A0h] [ebp-178h] BYREF
  __int16 v88[2]; // [esp+A4h] [ebp-174h] BYREF
  _WORD v89[2]; // [esp+A8h] [ebp-170h] BYREF
  __int16 v90[2]; // [esp+ACh] [ebp-16Ch] BYREF
  _WORD v91[2]; // [esp+B0h] [ebp-168h] BYREF
  __int16 v92[2]; // [esp+B4h] [ebp-164h] BYREF
  __int16 v93[2]; // [esp+B8h] [ebp-160h] BYREF
  _WORD v94[2]; // [esp+BCh] [ebp-15Ch] BYREF
  __int16 v95[2]; // [esp+C0h] [ebp-158h] BYREF
  _WORD v96[2]; // [esp+C4h] [ebp-154h] BYREF
  __int16 v97[2]; // [esp+C8h] [ebp-150h] BYREF
  _WORD v98[2]; // [esp+CCh] [ebp-14Ch] BYREF
  _WORD v99[2]; // [esp+D0h] [ebp-148h] BYREF
  int v100; // [esp+D4h] [ebp-144h]
  __int16 v101[2]; // [esp+D8h] [ebp-140h] BYREF
  _WORD v102[2]; // [esp+DCh] [ebp-13Ch] BYREF
  __int16 v103[2]; // [esp+E0h] [ebp-138h] BYREF
  __int64 v104; // [esp+E4h] [ebp-134h]
  __int64 v105; // [esp+ECh] [ebp-12Ch]
  __int64 v106; // [esp+F4h] [ebp-124h]
  __int64 v107; // [esp+FCh] [ebp-11Ch]
  __int64 v108; // [esp+104h] [ebp-114h]
  __int64 v109; // [esp+10Ch] [ebp-10Ch]
  int v110[4]; // [esp+114h] [ebp-104h] BYREF
  int v111[4]; // [esp+124h] [ebp-F4h] BYREF
  int v112[4]; // [esp+134h] [ebp-E4h] BYREF
  int v113[4]; // [esp+144h] [ebp-D4h] BYREF
  int v114[4]; // [esp+154h] [ebp-C4h] BYREF
  int v115[4]; // [esp+164h] [ebp-B4h] BYREF
  int v116[4]; // [esp+174h] [ebp-A4h] BYREF
  int v117[4]; // [esp+184h] [ebp-94h] BYREF
  int v118[4]; // [esp+194h] [ebp-84h] BYREF
  int v119[4]; // [esp+1A4h] [ebp-74h] BYREF
  int v120[4]; // [esp+1B4h] [ebp-64h] BYREF
  int v121[4]; // [esp+1C4h] [ebp-54h] BYREF
  int v122[4]; // [esp+1D4h] [ebp-44h] BYREF
  int v123[4]; // [esp+1E4h] [ebp-34h] BYREF
  int v124[4]; // [esp+1F4h] [ebp-24h] BYREF
  int v125[4]; // [esp+204h] [ebp-14h] BYREF
  __int16 v126; // [esp+214h] [ebp-4h] BYREF

  v4 = *(_DWORD *)(a3 + 8);
  v100 = *(_DWORD *)(a2 + 8);
  v5 = unk_89C2DC;
  v57 = this;
  v69 = v4;
  v64 = 0;
  v51 = 0;
  while ( 1 )
  {
    result = v51;
    if ( v51 )
      return result;
    v7 = v5 * v5;
    while ( 1 )
    {
      v105 = (unsigned int)v7;
      v58 = (double)(unsigned int)v7;
      do
      {
        v106 = (unsigned int)Random::State(&g_Randomizer);
        v8 = Math::RoundToInt((double)v106 * v58 * 2.328306437080797e-10);
        v9 = v8;
      }
      while ( v8 > v7 - 1 );
      v10 = 80 * v8;
      if ( *((_DWORD *)g_MapTileArray + 20 * v8 + 14) == this->RandomMap_field_0x8 )
      {
        v11 = CellStruct::Set(&v126, 0, 0);
        if ( !CellStruct::Equals((char *)g_MapTileArray + v10, v11) )
          break;
      }
    }
    LODWORD(v58) = *((_DWORD *)g_MapTileArray + 20 * v9);
    v76 = SWORD1(v58);
    v80 = SWORD1(v58);
    v75 = SLOWORD(v58) - 1;
    v79 = v75;
    v84 = SWORD1(v58) - 1;
    v85 = 1;
    v72 = v84;
    v73 = 1;
    v77 = 3;
    v78 = 1;
    v81 = 3;
    v82 = 1;
    v83 = SLOWORD(v58);
    v86 = 3;
    v71 = SLOWORD(v58);
    v74 = 3;
    v50 = 1;
    v49 = 1;
    if ( IsAreaClearMap(&v75, 0, 0) )
    {
LABEL_15:
      v110[0] = v75;
      v110[1] = v76 - 3;
      v110[2] = 3;
      v110[3] = 3;
      if ( IsAreaClearMap(v110, 0, 0) )
      {
        if ( IsAreaClearMap(&v79, 0, 0) )
        {
LABEL_22:
          v113[0] = v79;
          v113[1] = v80 + 1;
          v113[2] = 3;
          v113[3] = 3;
          if ( IsAreaClearMap(v113, 0, 0) )
            goto LABEL_24;
        }
        else
        {
          while ( 1 )
          {
            v68[0] = v79;
            v61[0] = v79 + 2;
            v68[1] = ++v80;
            v61[1] = v80;
            v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v68);
            v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v61);
            if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], v68, 1)
              || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], v61, 1)
              || CellLand::IsBuildable((int)v14)
              || CellLand::IsBuildable((int)v15) )
            {
              break;
            }
            if ( IsAreaClearMap(&v79, 0, 0) )
              goto LABEL_22;
          }
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v62[0] = v75;
        v66[0] = v75 + 2;
        v62[1] = --v76;
        v66[1] = v76;
        v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v62);
        v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v66);
        if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], v62, 1)
          || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], v66, 1)
          || CellLand::IsBuildable((int)v12)
          || CellLand::IsBuildable((int)v13) )
        {
          break;
        }
        if ( IsAreaClearMap(&v75, 0, 0) )
          goto LABEL_15;
      }
    }
    v49 = 0;
LABEL_24:
    if ( IsAreaClearMap(&v71, 0, 0) )
    {
LABEL_30:
      v119[0] = v71 - 3;
      v119[1] = v72;
      v119[2] = 3;
      v119[3] = 3;
      if ( IsAreaClearMap(v119, 0, 0) )
      {
        if ( IsAreaClearMap(&v83, 0, 0) )
        {
LABEL_37:
          v115[0] = v83 + 1;
          v115[1] = v84;
          v115[2] = 3;
          v115[3] = 3;
          if ( IsAreaClearMap(v115, 0, 0) )
            goto LABEL_39;
        }
        else
        {
          while ( 1 )
          {
            v59[1] = v84;
            v65[1] = v84 + 2;
            v59[0] = ++v83;
            v65[0] = v83;
            v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v59);
            v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v65);
            if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], v59, 1)
              || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], v65, 1)
              || CellLand::IsBuildable((int)v18)
              || CellLand::IsBuildable((int)v19) )
            {
              break;
            }
            if ( IsAreaClearMap(&v83, 0, 0) )
              goto LABEL_37;
          }
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v70[1] = v72;
        v63[1] = v72 + 2;
        v70[0] = --v71;
        v63[0] = v71;
        v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v70);
        v17 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v63);
        if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], v70, 1)
          || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], v63, 1)
          || CellLand::IsBuildable((int)v16)
          || CellLand::IsBuildable((int)v17) )
        {
          break;
        }
        if ( IsAreaClearMap(&v71, 0, 0) )
          goto LABEL_30;
      }
    }
    v50 = 0;
LABEL_39:
    v20 = -1;
    LODWORD(v58) = 999;
    v60 = 999;
    v21 = -1;
    v67 = -1;
    v22 = -1;
    if ( v49 )
    {
      LODWORD(v58) = abs32(v80 - v76);
      if ( g_MapTileArray )
      {
        v20 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v75 + 20 * unk_89C2DC * (__int16)v76 + 14);
        v21 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v79 + 20 * unk_89C2DC * (__int16)v80 + 14);
      }
      else
      {
        v21 = -1;
      }
    }
    if ( v50 )
    {
      v60 = abs32(v83 - v71);
      if ( g_MapTileArray )
      {
        v67 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v83 + 20 * unk_89C2DC * (__int16)v84 + 14);
        v22 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v71 + 20 * unk_89C2DC * (__int16)v72 + 14);
      }
      else
      {
        v67 = -1;
        v22 = -1;
      }
    }
    if ( v49 )
    {
      v23 = v100;
      v24 = v69;
      if ( (v20 != v100 || v21 != v69) && (v20 != v69 || v21 != v100) )
        v49 = 0;
    }
    else
    {
      v24 = v69;
      v23 = v100;
    }
    v25 = v50;
    if ( v50 )
    {
      if ( v67 == v23 && v22 == v24 || v67 == v24 && v22 == v23 )
      {
        if ( v49 )
        {
          if ( SLODWORD(v58) >= v60 )
          {
            v49 = 0;
          }
          else
          {
            v25 = 0;
            v50 = 0;
          }
        }
      }
      else
      {
        v25 = 0;
        v50 = 0;
      }
    }
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v26 = v64 / 25 + 8;
    if ( v25 && v60 < v26 )
    {
      v27 = 3;
      v53 = v71;
      v28 = v72;
      v29 = v83 - v71 + 1;
    }
    else
    {
      if ( !v49 || SLODWORD(v58) >= v26 )
        goto LABEL_129;
      v28 = v76;
      v29 = 3;
      v27 = v80 - v76 + 1;
      v53 = v75;
    }
    v54 = v28;
    v55 = v29;
    v56 = v27;
    if ( v29 > 0 && v27 > 0 )
    {
      if ( v50 )
      {
        if ( !(unsigned __int8)Object_Helper(&v53) )
          goto LABEL_129;
        v30 = v54;
        v31 = v55;
        v32 = v54;
        v33 = v53;
        for ( LODWORD(v58) = v54; v32 < v30 + v56; LODWORD(v58) = v32 )
        {
          v34 = v31 + v33;
          v35 = v33;
          if ( v33 < v31 + v33 )
          {
            while ( 1 )
            {
              if ( v35 == v33 )
              {
                v36 = v32;
                v97[0] = v35;
                v97[1] = v32;
                *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v97) + 17) = 94;
              }
              else
              {
                v36 = v32;
                if ( v35 == v34 - 1 )
                {
                  v88[0] = v35;
                  v88[1] = v32;
                  *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v88) + 17) = 92;
                }
                else
                {
                  v90[0] = v35;
                  v90[1] = v32;
                  *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v90) + 17) = v35 % 4 + 74;
                }
              }
              v92[0] = v35;
              v92[1] = v36;
              v37 = v32 - v54;
              *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v92) + 286) = v37;
              v31 = v55;
              v33 = v53;
              ++v35;
              v34 = v55 + v53;
              if ( v35 >= v55 + v53 )
                break;
              LOWORD(v32) = LOWORD(v58);
            }
            v30 = v54;
            v32 = LODWORD(v58);
          }
          ++v32;
        }
        v124[0] = v33 + v31;
        v124[1] = v30 - 2;
        v124[2] = 6;
        v124[3] = 6;
        if ( !IsMapClassAreaUniform(v124, 0) )
          goto LABEL_91;
        do
        {
          v108 = (unsigned int)Random::State(&g_Randomizer);
          v38 = Math::RoundToInt((double)v108 * 4.656612874161595e-10);
        }
        while ( v38 > 1 );
        if ( v38 )
        {
          v94[0] = v53 + v55;
          v94[1] = v54;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 10, v94, -1, -1);
        }
        else
        {
LABEL_91:
          v89[1] = v54;
          v89[0] = v53 + v55;
          PlaceMapSeedClassBuildings(dword_ABBEC4, v89, -1, -1);
        }
        v117[0] = v53 - 6;
        v117[1] = v54 - 2;
        v117[2] = 6;
        v117[3] = 6;
        if ( !IsMapClassAreaUniform(v117, 0) )
          goto LABEL_96;
        do
        {
          v104 = (unsigned int)Random::State(&g_Randomizer);
          v39 = Math::RoundToInt((double)v104 * 4.656612874161595e-10);
        }
        while ( v39 > 1 );
        if ( v39 )
        {
          v99[0] = v53 - 4;
          v99[1] = v54;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 9, v99, -1, -1);
        }
        else
        {
LABEL_96:
          v91[0] = v53 - 1;
          v91[1] = v54;
          PlaceMapSeedClassBuildings(dword_ABBEC4 + 2, v91, -1, -1);
        }
        v122[0] = v53;
        v122[1] = v54 - 1;
        v122[2] = 2;
        v122[3] = 5;
        if ( !PlaceCabhutMap(v122) )
        {
          v111[0] = v53 - 1;
          v111[1] = v54 - 2;
          v111[2] = 3;
          v111[3] = 7;
          PlaceCabhutMap(v111);
        }
        v112[2] = 2;
        v112[3] = 5;
        v112[1] = v54 - 1;
        v112[0] = v55 + v53 - 2;
        if ( !PlaceCabhutMap(v112) )
        {
          v114[2] = 3;
          v114[3] = 7;
          v114[0] = v55 + v53 - 2;
          v114[1] = v54 - 2;
          PlaceCabhutMap(v114);
        }
        goto LABEL_128;
      }
      if ( v49 && (unsigned __int8)Object_Helper(&v53) )
      {
        v40 = v54;
        v41 = v54;
        LODWORD(v58) = v54;
        if ( v54 >= v54 + v56 )
        {
          v43 = v53;
        }
        else
        {
          v42 = v55;
          v43 = v53;
          do
          {
            v44 = v43;
            if ( v43 < v42 + v43 )
            {
              do
              {
                if ( v41 == v40 )
                {
                  v45 = v44;
                  v46 = v41;
                  v101[0] = v44;
                  v101[1] = v41;
                  *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v101) + 17) = 96;
                }
                else
                {
                  v45 = v44;
                  v46 = v41;
                  if ( v41 == v56 + v40 - 1 )
                  {
                    v93[0] = v44;
                    v93[1] = v41;
                    *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v93) + 17) = 98;
                  }
                  else
                  {
                    v103[0] = v44;
                    v103[1] = v41;
                    *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v103) + 17) = v41 % 4 + 83;
                    v41 = LODWORD(v58);
                  }
                }
                v95[0] = v45;
                v95[1] = v46;
                v52 = v44++ - v53;
                *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v95) + 286) = v52;
                v42 = v55;
                v43 = v53;
                v40 = v54;
              }
              while ( v44 < v55 + v53 );
            }
            LODWORD(v58) = ++v41;
          }
          while ( v41 < v40 + v56 );
        }
        v116[1] = v40 - 6;
        v116[0] = v43 - 2;
        v116[2] = 7;
        v116[3] = 6;
        if ( !IsMapClassAreaUniform(v116, 0) )
          goto LABEL_118;
        do
        {
          v107 = (unsigned int)Random::State(&g_Randomizer);
          v47 = Math::RoundToInt((double)v107 * 4.656612874161595e-10);
        }
        while ( v47 > 1 );
        if ( v47 )
        {
          v87[0] = v53;
          v87[1] = v54 - 4;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 13, v87, -1, -1);
        }
        else
        {
LABEL_118:
          v96[0] = v53;
          v96[1] = v54 - 1;
          PlaceMapSeedClassBuildings(dword_ABBEC4 + 1, v96, -1, -1);
        }
        v118[0] = v53 - 2;
        v118[1] = v54 + v56;
        v118[2] = 7;
        v118[3] = 6;
        if ( !IsMapClassAreaUniform(v118, 0) )
          goto LABEL_123;
        do
        {
          v109 = (unsigned int)Random::State(&g_Randomizer);
          v48 = Math::RoundToInt((double)v109 * 4.656612874161595e-10);
        }
        while ( v48 > 1 );
        if ( v48 )
        {
          v98[1] = v56 + v54;
          v98[0] = v53;
          PlaceMapSeedClassBuildings(g_CellTileTypeCache + 12, v98, -1, -1);
        }
        else
        {
LABEL_123:
          v102[0] = v53;
          v102[1] = v56 + v54;
          PlaceMapSeedClassBuildings(dword_ABBEC4 + 3, v102, -1, -1);
        }
        v121[0] = v53 - 1;
        v121[1] = v54;
        v121[2] = 5;
        v121[3] = 2;
        if ( !PlaceCabhutMap(v121) )
        {
          v123[0] = v53 - 2;
          v123[1] = v54 - 1;
          v123[2] = 7;
          v123[3] = 3;
          PlaceCabhutMap(v123);
        }
        v125[0] = v53 - 1;
        v125[2] = 5;
        v125[1] = v56 + v54 - 2;
        v125[3] = 2;
        if ( !PlaceCabhutMap(v125) )
        {
          v120[0] = v53 - 2;
          v120[2] = 7;
          v120[1] = v56 + v54 - 2;
          v120[3] = 3;
          PlaceCabhutMap(v120);
        }
LABEL_128:
        v51 = 1;
      }
    }
LABEL_129:
    if ( ++v64 >= 200 )
      return v51;
    v5 = unk_89C2DC;
    this = v57;
  }
}

