// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005800D0  CellClass::ApplyTileModification5  this=CellClass  sig=csp ====
int __thiscall CellClass::ApplyTileModification5(CellClass *this, _DWORD *a2)
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

  v52 = (Terrain *)this; /*0x5800dd*/
  *(_DWORD *)v45 = *a2; /*0x5800e7*/
  v44 = 0; /*0x5800eb*/
  do /*0x580113*/
  {
    --v45[0]; /*0x5800f0*/
    v2 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45) + 17); /*0x580104*/
  }
  while ( v2 >= 205 && v2 <= 232 ); /*0x580113*/
  v3 = ++v45[0]; /*0x58011a*/
  v46 = 0; /*0x580123*/
  v47 = 0; /*0x580127*/
  v48 = 0; /*0x58012b*/
  v49 = 0; /*0x58012f*/
  while ( 1 ) /*0x58014f*/
  {
    v4 = v3 + (v45[1] << 9); /*0x58014d*/
    if ( v4 < 0x40000 && (v5 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x58015d*/
    {
      v6 = v5; /*0x58015f*/
    }
    else
    {
      v6 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x580167*/
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v45; /*0x58016c*/
    }
    v51 = v6; /*0x580175*/
    LOWORD(v53) = v3; /*0x58017f*/
    HIWORD(v53) = v45[1] - 1; /*0x580184*/
    v7 = v3 + ((__int16)(v45[1] - 1) << 9); /*0x58018f*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v7)) != 0 ) /*0x58019f*/
    {
      v58 = v8; /*0x5801a1*/
    }
    else
    {
      v58 = (int)&g_MissionQueueFrame.briefing[130]; /*0x5801ab*/
      g_MissionQueueFrame.briefing[139] = v53; /*0x5801b3*/
    }
    LOWORD(v57) = v3; /*0x5801bb*/
    HIWORD(v57) = v45[1] + 1; /*0x5801c0*/
    v9 = v3 + ((__int16)(v45[1] + 1) << 9); /*0x5801cb*/
    if ( v9 < 0x40000 && (v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x5801db*/
    {
      v55 = v10; /*0x5801dd*/
    }
    else
    {
      v55 = (int)&g_MissionQueueFrame.briefing[130]; /*0x5801e7*/
      g_MissionQueueFrame.briefing[139] = v57; /*0x5801ef*/
    }
    PlacementRect = BuildingClass::GetPlacementRect(v6, v77); /*0x580204*/
    StartCoords = House::GetStartCoords((House *)v6, v74); /*0x580210*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x580225*/
    {
      v13 = *PlacementRect; /*0x5802ab*/
      v15 = PlacementRect[1]; /*0x5802ad*/
      v19 = PlacementRect[2]; /*0x5802b0*/
      v17 = PlacementRect[3]; /*0x5802b3*/
    }
    else
    {
      v59 = PlacementRect[2]; /*0x580230*/
      if ( v59 <= 0 || (v50 = PlacementRect[3], v50 <= 0) ) /*0x58023f*/
      {
        v13 = *StartCoords; /*0x58029e*/
        v15 = StartCoords[1]; /*0x5802a0*/
        v19 = StartCoords[2]; /*0x5802a3*/
        v17 = StartCoords[3]; /*0x5802a6*/
      }
      else
      {
        v13 = *StartCoords; /*0x580241*/
        v14 = *PlacementRect; /*0x580243*/
        v15 = StartCoords[1]; /*0x580245*/
        v16 = StartCoords[2]; /*0x580248*/
        v17 = StartCoords[3]; /*0x58024b*/
        if ( v13 > *PlacementRect ) /*0x580250*/
        {
          v16 += v13 - v14; /*0x580254*/
          v13 = *PlacementRect; /*0x580256*/
        }
        v18 = PlacementRect[1]; /*0x580258*/
        v67 = v18; /*0x58025d*/
        if ( v15 > v18 ) /*0x580261*/
        {
          v17 += v15 - v18; /*0x580265*/
          v15 = v18; /*0x580267*/
        }
        if ( v13 + v16 < v14 + v59 ) /*0x580274*/
          v16 = v14 - v13 + v59 + 1; /*0x58027c*/
        if ( v17 + v15 < v50 + v67 ) /*0x58028f*/
          v17 = v50 + v67 - v15 + 1; /*0x580294*/
        v6 = v51; /*0x580296*/
        v19 = v16; /*0x58029a*/
      }
    }
    v62 = v13; /*0x5802b6*/
    v63 = v15; /*0x5802ba*/
    v64 = v19; /*0x5802be*/
    v65 = v17; /*0x5802c2*/
    v20 = v6->?[2]; /*0x5802c6*/
    v50 = v20; /*0x5802c9*/
    switch ( v20 ) /*0x5802e4*/
    {
      case 209: /*0x5802e4*/
      case 210: /*0x5802e4*/
      case 211: /*0x5802e4*/
      case 212: /*0x5802e4*/
      case 213: /*0x5802e4*/
      case 231: /*0x5802e4*/
        v22 = Range_RandomInt(0, 3u); /*0x580306*/
        v23 = v48; /*0x580310*/
        v21 = v22 + 205; /*0x580314*/
        v24 = v45[0]; /*0x580319*/
        v25 = v45[1] - 1; /*0x58031e*/
        v26 = 3; /*0x580326*/
        if ( v48 <= 0 || v49 <= 0 ) /*0x580332*/
        {
          v23 = 1; /*0x5803a3*/
        }
        else
        {
          v61 = v49; /*0x58033c*/
          v60 = v46; /*0x580344*/
          v27 = v47; /*0x580348*/
          if ( v46 > v45[0] ) /*0x58034e*/
          {
            v60 = v45[0]; /*0x580352*/
            v23 = v46 + v48 - v45[0]; /*0x580356*/
          }
          if ( v47 > v25 ) /*0x58035a*/
          {
            v27 = v45[1] - 1; /*0x580364*/
            v61 += v47 - v25; /*0x580366*/
          }
          if ( v23 + v60 < v45[0] + 1 ) /*0x580375*/
            v23 = v45[0] - v60 + 2; /*0x58037e*/
          v28 = v61; /*0x580380*/
          if ( v61 + v27 < v25 + 3 ) /*0x58038c*/
            v28 = v25 - v27 + 4; /*0x580393*/
          v24 = v60; /*0x580395*/
          v25 = v27; /*0x580399*/
          v26 = v28; /*0x58039b*/
          v6 = v51; /*0x58039d*/
        }
        v48 = v23; /*0x5803a5*/
        v20 = v50; /*0x5803a9*/
        v46 = v24; /*0x5803ad*/
        v47 = v25; /*0x5803b1*/
        v49 = v26; /*0x5803b5*/
        v44 = 1; /*0x5803b9*/
        goto LABEL_49; /*0x5803b9*/
      case 223: /*0x5802e4*/
      case 224: /*0x5802e4*/
        v21 = 223; /*0x5802eb*/
        goto LABEL_49; /*0x5802f0*/
      case 225: /*0x5802e4*/
      case 226: /*0x5802e4*/
        v21 = 225; /*0x5802f5*/
LABEL_49:
        if ( v21 != v20 ) /*0x5803c0*/
        {
          v29 = v58; /*0x5803c6*/
          v30 = v55; /*0x5803ca*/
          v6->?[2] = v21; /*0x5803ce*/
          *(_DWORD *)(v29 + 68) = v21; /*0x5803d1*/
          *(_DWORD *)(v30 + 68) = v21; /*0x5803d4*/
          v69[0] = DSurface_ViewBounds.field_0; /*0x5803e2*/
          v69[1] = DSurface_ViewBounds.field_4; /*0x5803f0*/
          v38 = (struct tagRECT *)BuildingClass::GetPlacementRect(v6, v76); /*0x580406*/
          House::GetStartCoords((House *)v6, v75); /*0x58040a*/
          v31 = (struct tagRECT *)Rect::Union(v38, v40, v42); /*0x580418*/
          v32 = Rect::Union(v31, v41, v43); /*0x580429*/
          v39 = *(_DWORD *)(v32 + 12); /*0x580434*/
          v37 = *(_DWORD *)(v32 + 8); /*0x58043c*/
          v33 = (Coord2D *)CellStruct::Copy((CellStruct *)v32, &v73); /*0x580450*/
          v34 = Coord2D::Sub(v33, &v72, v69); /*0x580457*/
          v35 = Rect::Construct(&v78, v34, v37, v39); /*0x580464*/
          v62 = *v35; /*0x580472*/
          v63 = v35[1]; /*0x580479*/
          v64 = v35[2]; /*0x580480*/
          v65 = v35[3]; /*0x58048c*/
          Cell::CreateCrater(*v35, v35[1], v35[2], v35[3], 0); /*0x5804af*/
          if ( v20 == 231 ) /*0x5804ba*/
          {
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v45); /*0x5804ca*/
            v54[0] = 0; /*0x5804e5*/
            v54[1] = 1; /*0x5804ec*/
            v66 = *CellStruct::Add((CellStruct *)v45, &v70, v54); /*0x5804fc*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v66); /*0x580506*/
            v56[0] = 0; /*0x58051c*/
            v56[1] = 1; /*0x580523*/
            v68 = *CellStruct::Sub((CellStruct *)v45, &v71, v56); /*0x580539*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v68); /*0x580540*/
          }
          House::AnnounceUpgrade((int)v6, -1); /*0x580549*/
          House::AnnounceUpgrade(v29, -1); /*0x580552*/
          House::AnnounceUpgrade(v30, -1); /*0x58055b*/
          Cell::SearchEnemies((int)v6, 0); /*0x580564*/
          Cell::SearchEnemies(v29, 0); /*0x58056d*/
          Cell::SearchEnemies(v30, 0); /*0x580576*/
        }
        break; /*0x580576*/
      default:
        break;
    }
    ++v45[0]; /*0x58057b*/
    if ( !CellClass::applyTileDamage((CellClass *)v45) ) /*0x580584*/
      break; /*0x580584*/
    v3 = v45[0]; /*0x580135*/
  }
  if ( v44 ) /*0x580597*/
    Terrain::ConnectivityGraph(v52); /*0x58059d*/
  result = v48; /*0x5805a2*/
  if ( v48 > 0 ) /*0x5805a8*/
  {
    result = v49; /*0x5805aa*/
    if ( v49 > 0 ) /*0x5805b0*/
      UpdateAreaConnectivityMap((ObjectClass *)v52, &v46); /*0x5805bb*/
  }
  return result; /*0x5805c0*/
}



// ==== 0x00580600  CellClass::ApplyTileModification8  this=CellClass  sig=csp ====
void __thiscall CellClass::ApplyTileModification8(CellClass *this, int *a2)
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

  v57 = (Terrain *)this; /*0x58060e*/
  *(_DWORD *)v48 = *a2; /*0x580619*/
  v50 = 0; /*0x58061d*/
  v51 = 0; /*0x580621*/
  v52 = 0; /*0x580625*/
  v53 = 0; /*0x580629*/
  v49 = 0; /*0x58062d*/
  do /*0x580655*/
  {
    --v48[1]; /*0x580632*/
    v2 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48) + 17); /*0x580646*/
  }
  while ( v2 >= 205 && v2 <= 232 ); /*0x580655*/
  for ( i = ++v48[1]; ; i = v48[1] ) /*0x58065c*/
  {
    v4 = v48[0] + (i << 9); /*0x580683*/
    if ( v4 < 0x40000 && (v5 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x580693*/
    {
      v6 = v5; /*0x580695*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v48; /*0x580699*/
      v6 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x58069f*/
    }
    HIWORD(v58) = i; /*0x5806aa*/
    LOWORD(v58) = v48[0] - 1; /*0x5806af*/
    v7 = (__int16)(v48[0] - 1); /*0x5806b7*/
    v8 = i << 9; /*0x5806ba*/
    v9 = v7 + v8 < 0; /*0x5806bd*/
    v10 = v7 + v8; /*0x5806bd*/
    v54 = v6; /*0x5806bf*/
    if ( v9 || v10 >= 0x40000 || (v11 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v10)) == 0 ) /*0x5806d1*/
    {
      v61 = (int)&g_MissionQueueFrame.briefing[130]; /*0x5806dd*/
      g_MissionQueueFrame.briefing[139] = v58; /*0x5806e5*/
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
    if ( v9 || v14 >= 0x40000 || (v15 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v14)) == 0 ) /*0x58070e*/
    {
      v56 = (int)&g_MissionQueueFrame.briefing[130]; /*0x58071a*/
      g_MissionQueueFrame.briefing[139] = v60; /*0x580722*/
    }
    else
    {
      v56 = v15; /*0x580710*/
    }
    PlacementRect = BuildingClass::GetPlacementRect(v6, v81); /*0x580740*/
    StartCoords = House::GetStartCoords((House *)v6, v78); /*0x580742*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x580757*/
    {
      v18 = *PlacementRect; /*0x5807d6*/
      v20 = PlacementRect[1]; /*0x5807d8*/
      v24 = PlacementRect[2]; /*0x5807db*/
      v22 = PlacementRect[3]; /*0x5807de*/
    }
    else
    {
      v71 = PlacementRect[2]; /*0x58075e*/
      if ( v71 <= 0 || (v55 = PlacementRect[3], v55 <= 0) ) /*0x58076d*/
      {
        v18 = *StartCoords; /*0x5807c9*/
        v20 = StartCoords[1]; /*0x5807cb*/
        v24 = StartCoords[2]; /*0x5807ce*/
        v22 = StartCoords[3]; /*0x5807d1*/
      }
      else
      {
        v18 = *StartCoords; /*0x58076f*/
        v19 = *PlacementRect; /*0x580771*/
        v20 = StartCoords[1]; /*0x580773*/
        v21 = StartCoords[2]; /*0x580776*/
        v22 = StartCoords[3]; /*0x580779*/
        if ( v18 > *PlacementRect ) /*0x58077e*/
        {
          v21 += v18 - v19; /*0x580782*/
          v18 = *PlacementRect; /*0x580784*/
        }
        v23 = PlacementRect[1]; /*0x580786*/
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
        v6 = v54; /*0x5807c3*/
      }
    }
    v63 = v18; /*0x5807e1*/
    v64 = v20; /*0x5807e5*/
    v65 = v24; /*0x5807e9*/
    v66 = v22; /*0x5807ed*/
    v25 = v6->?[2]; /*0x5807f1*/
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
        v28 = v52; /*0x58083b*/
        v26 = v27 + 214; /*0x58083f*/
        v29 = v48[1]; /*0x580844*/
        v30 = v48[0] - 1; /*0x580849*/
        if ( v52 <= 0 || v53 <= 0 ) /*0x58085d*/
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
            v28 = v50 + v52 - v30; /*0x580881*/
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
          v6 = v54; /*0x5808c4*/
          v29 = v31; /*0x5808c8*/
          v33 = v32; /*0x5808ca*/
        }
        v51 = v29; /*0x5808d2*/
        v25 = v55; /*0x5808d6*/
        v50 = v30; /*0x5808da*/
        v52 = v28; /*0x5808de*/
        v53 = v33; /*0x5808e2*/
        v49 = 1; /*0x5808e6*/
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
          v34 = v61; /*0x5808f3*/
          v35 = v56; /*0x5808f7*/
          v6->?[2] = v26; /*0x5808fb*/
          *(_DWORD *)(v34 + 68) = v26; /*0x580905*/
          *(_DWORD *)(v35 + 68) = v26; /*0x580908*/
          v73[1] = DSurface_ViewBounds.field_4; /*0x580916*/
          v73[0] = DSurface_ViewBounds.field_0; /*0x580920*/
          v42 = (struct tagRECT *)BuildingClass::GetPlacementRect(v6, v80); /*0x58092c*/
          House::GetStartCoords((House *)v6, v79); /*0x580937*/
          v36 = (struct tagRECT *)Rect::Union(v42, v44, v46); /*0x580945*/
          v37 = Rect::Union(v36, v45, v47); /*0x580956*/
          v43 = *(_DWORD *)(v37 + 12); /*0x580961*/
          v41 = *(_DWORD *)(v37 + 8); /*0x580969*/
          v38 = (Coord2D *)CellStruct::Copy((CellStruct *)v37, &v76); /*0x58097d*/
          v39 = Coord2D::Sub(v38, &v77, v73); /*0x580984*/
          v40 = Rect::Construct(&v82, v39, v41, v43); /*0x580991*/
          v63 = *v40; /*0x58099f*/
          v64 = v40[1]; /*0x5809a6*/
          v65 = v40[2]; /*0x5809ad*/
          v66 = v40[3]; /*0x5809b6*/
          Cell::CreateCrater(*v40, v40[1], v40[2], v40[3], 0); /*0x5809d6*/
          if ( v25 == 232 ) /*0x5809e1*/
          {
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v48); /*0x5809f1*/
            v59[0] = 1; /*0x580a0c*/
            v59[1] = 0; /*0x580a11*/
            v72 = *CellStruct::Add((CellStruct *)v48, &v74, v59); /*0x580a23*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v72); /*0x580a2d*/
            v62[0] = 1; /*0x580a43*/
            v62[1] = 0; /*0x580a48*/
            v69 = *CellStruct::Sub((CellStruct *)v48, &v75, v62); /*0x580a60*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v69); /*0x580a64*/
          }
          House::AnnounceUpgrade((int)v6, -1); /*0x580a6d*/
          House::AnnounceUpgrade(v34, -1); /*0x580a76*/
          House::AnnounceUpgrade(v35, -1); /*0x580a7f*/
          Cell::SearchEnemies((int)v6, 0); /*0x580a88*/
          Cell::SearchEnemies(v34, 0); /*0x580a91*/
          Cell::SearchEnemies(v35, 0); /*0x580a9a*/
        }
        break; /*0x580a9a*/
      default:
        break;
    }
    ++v48[1]; /*0x580a9f*/
    if ( !CellClass::applyTileDamage((CellClass *)v48) ) /*0x580aa8*/
      break; /*0x580aa8*/
  }
  if ( v49 ) /*0x580abb*/
    Terrain::ConnectivityGraph(v57); /*0x580ac1*/
  if ( v52 > 0 && v53 > 0 ) /*0x580ad4*/
    UpdateAreaConnectivityMap((ObjectClass *)v57, &v50); /*0x580adf*/
}



// ==== 0x00580B20  CellClass::updateLighting  this=CellClass  sig=csp ====
BOOL __thiscall CellClass::updateLighting(CellClass *this)
{
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // eax

  v1 = SLOWORD(this->mapCoords[0]) + (SHIWORD(this->mapCoords[0]) << 9); /*0x580b2a*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x580b40*/
  {
    g_MissionQueueFrame.briefing[139] = this->mapCoords[0]; /*0x580b44*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x580b49*/
  }
  v3 = v2[17]; /*0x580b4e*/
  return v3 >= 74 && v3 <= 101; /*0x580b60*/
}



// ==== 0x00580B70  CellClass::applyTileDamage  this=CellClass  sig=csp ====
BOOL __thiscall CellClass::applyTileDamage(CellClass *this)
{
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // eax

  v1 = SLOWORD(this->mapCoords[0]) + (SHIWORD(this->mapCoords[0]) << 9); /*0x580b7a*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x580b90*/
  {
    g_MissionQueueFrame.briefing[139] = this->mapCoords[0]; /*0x580b94*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x580b99*/
  }
  v3 = v2[17]; /*0x580b9e*/
  return v3 >= 205 && v3 <= 232; /*0x580bb4*/
}



// ==== 0x00580BC0  ObjectClass::FindMapSpawnCell  this=ObjectClass  sig=csp ====
CellClass *__thiscall FindMapSpawnCell(ObjectClass *this, int a2)
{
  int *v3; // eax
  int v4; // kr08_4
  int v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  _DWORD *v13; // ebx
  __int16 v14; // si
  CellClass *v15; // eax
  int v16; // esi
  CellClass *v17; // eax
  int v18; // ecx
  int v19; // ebx
  _DWORD *v20; // ebp
  __int16 v21; // si
  CellClass *v22; // eax
  int v23; // ecx
  int v24; // ecx
  int *v25; // ecx
  int *v26; // eax
  int v27; // eax
  int *v28; // ecx
  unsigned int v29; // eax
  CellClass *result; // eax
  unsigned int v31; // ecx
  __int16 v32[2]; // [esp+8h] [ebp-E8h] BYREF
  int v33; // [esp+Ch] [ebp-E4h]
  int v34; // [esp+10h] [ebp-E0h]
  int v35; // [esp+14h] [ebp-DCh]
  int v36; // [esp+18h] [ebp-D8h]
  int v37; // [esp+1Ch] [ebp-D4h]
  int v38; // [esp+20h] [ebp-D0h]
  int v39; // [esp+24h] [ebp-CCh]
  int v40; // [esp+28h] [ebp-C8h]
  int v41; // [esp+2Ch] [ebp-C4h]
  int v42; // [esp+30h] [ebp-C0h]
  int v43; // [esp+34h] [ebp-BCh]
  int v44; // [esp+38h] [ebp-B8h]
  int v45; // [esp+3Ch] [ebp-B4h] BYREF
  int v46; // [esp+40h] [ebp-B0h]
  int v47; // [esp+44h] [ebp-ACh]
  int v48; // [esp+48h] [ebp-A8h] BYREF
  int v49; // [esp+4Ch] [ebp-A4h]
  int v50; // [esp+50h] [ebp-A0h]
  int v51; // [esp+54h] [ebp-9Ch] BYREF
  int v52; // [esp+58h] [ebp-98h]
  int v53; // [esp+5Ch] [ebp-94h]
  int v54; // [esp+60h] [ebp-90h] BYREF
  int v55; // [esp+64h] [ebp-8Ch]
  int inited; // [esp+68h] [ebp-88h]
  _DWORD v57[2]; // [esp+6Ch] [ebp-84h] BYREF
  _DWORD v58[2]; // [esp+74h] [ebp-7Ch] BYREF
  _DWORD v59[2]; // [esp+7Ch] [ebp-74h] BYREF
  _DWORD v60[2]; // [esp+84h] [ebp-6Ch] BYREF
  _WORD v61[50]; // [esp+8Ch] [ebp-64h] BYREF

  v3 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a2 + 72))(a2, &v51); /*0x580bd8*/
  v38 = 32; /*0x580bdd*/
  v4 = *v3; /*0x580bf0*/
  v5 = v3[1]; /*0x580bf2*/
  v6 = this->q03D; /*0x580bf9*/
  LOWORD(v39) = v4 / 256; /*0x580bff*/
  v36 = (__int16)v39; /*0x580c0f*/
  HIWORD(v39) = v5 / 256; /*0x580c16*/
  v7 = 0; /*0x580c1b*/
  v8 = SHIWORD(v39); /*0x580c1d*/
  v9 = *((_DWORD *)this + 62); /*0x580c20*/
  v33 = 0; /*0x580c26*/
  v10 = v6 + v9; /*0x580c2a*/
  v35 = SHIWORD(v39); /*0x580c2c*/
  if ( v10 <= 32 ) /*0x580c33*/
    v38 = v10; /*0x580c35*/
  v11 = 0; /*0x580c3d*/
  v34 = 0; /*0x580c41*/
  if ( v38 > 0 ) /*0x580c45*/
  {
    v12 = 0; /*0x580c4d*/
    v37 = 0; /*0x580c4f*/
    while ( v12 > v11 ) /*0x580c5b*/
    {
LABEL_18:
      v19 = v12 + 1; /*0x580de5*/
      v44 = v11 - 1; /*0x580ded*/
      if ( v12 + 1 <= v11 - 1 ) /*0x580df1*/
      {
        v20 = &v61[2 * v7 + 2]; /*0x580dfb*/
        LOWORD(v40) = v36 - v11; /*0x580e04*/
        while ( 1 ) /*0x580e14*/
        {
          v21 = v19 + v35; /*0x580e14*/
          HIWORD(v40) = v19 + v35; /*0x580e19*/
          *(_DWORD *)v32 = v40; /*0x580e22*/
          if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v32, 1) ) /*0x580e26*/
          {
            inited = 0; /*0x580e46*/
            v54 = (v32[0] << 8) + 128; /*0x580e50*/
            v58[0] = v54; /*0x580e54*/
            v55 = (v32[1] << 8) + 128; /*0x580e60*/
            v58[1] = v55; /*0x580e64*/
            v22 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v54); /*0x580e72*/
            inited = Isometric::InitTables((int)v22, v58); /*0x580e82*/
            if ( (unsigned __int8)Cell::IsPassable(&v54) ) /*0x580e89*/
            {
              v23 = v33 + 1; /*0x580e9a*/
              *v20 = *(_DWORD *)v32; /*0x580e9b*/
              v33 = v23; /*0x580e9e*/
              ++v20; /*0x580ea2*/
            }
          }
          if ( v33 == 24 ) /*0x580eaa*/
            goto LABEL_36; /*0x580fa6*/
          HIWORD(v41) = v21; /*0x580eba*/
          LOWORD(v41) = v36 + v34; /*0x580ebf*/
          *(_DWORD *)v32 = v41; /*0x580ed1*/
          if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v32, 1) ) /*0x580ed5*/
          {
            v51 = (v32[0] << 8) + 128; /*0x580ef6*/
            v53 = 0; /*0x580efa*/
            v60[0] = v51; /*0x580efe*/
            v52 = (v32[1] << 8) + 128; /*0x580f22*/
            v60[1] = v52; /*0x580f28*/
            v24 = v51 / 256 + ((v52 / 256) << 9); /*0x580f3a*/
            if ( v24 < 0 /*0x580f51*/
              || v24 >= *(int *)&stru_87F5F0.__pad_58[736]
              || (v25 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) == 0 )
            {
              v26 = (int *)CellStruct::Set((CellStruct *)v61, v51 / 256, v52 / 256); /*0x580f5c*/
              v25 = &g_MissionQueueFrame.briefing[130]; /*0x580f63*/
              g_MissionQueueFrame.briefing[139] = *v26; /*0x580f68*/
            }
            v53 = Isometric::InitTables((int)v25, v60); /*0x580f7a*/
            if ( (unsigned __int8)Cell::IsPassable(&v51) ) /*0x580f85*/
            {
              *v20++ = *(_DWORD *)v32; /*0x580f92*/
              ++v33; /*0x580f9d*/
            }
          }
          if ( v33 == 24 ) /*0x580fa6*/
            goto LABEL_36; /*0x580fa6*/
          if ( ++v19 > v44 ) /*0x580faf*/
          {
            v7 = v33; /*0x580fb5*/
            v11 = v34; /*0x580fb9*/
            v12 = v37; /*0x580fbd*/
            break; /*0x580fbd*/
          }
        }
      }
      ++v11; /*0x580fc6*/
      --v12; /*0x580fcb*/
      v34 = v11; /*0x580fce*/
      v37 = v12; /*0x580fd2*/
      if ( v11 >= v38 ) /*0x580fd6*/
        goto LABEL_37; /*0x580fd6*/
      LOWORD(v8) = v35; /*0x580c55*/
    }
    v13 = &v61[2 * v7 + 2]; /*0x580c63*/
    HIWORD(v43) = v8 - v11; /*0x580c6a*/
    while ( 1 ) /*0x580c7a*/
    {
      v14 = v36 + v12; /*0x580c7a*/
      LOWORD(v43) = v36 + v12; /*0x580c7f*/
      *(_DWORD *)v32 = v43; /*0x580c88*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v32, 1) ) /*0x580c8c*/
      {
        v46 = (v32[1] << 8) + 128; /*0x580caa*/
        v59[1] = v46; /*0x580cae*/
        v47 = 0; /*0x580cb8*/
        v45 = (v32[0] << 8) + 128; /*0x580cd3*/
        v59[0] = v45; /*0x580cd7*/
        v15 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v45); /*0x580cde*/
        v47 = Isometric::InitTables((int)v15, v59); /*0x580cea*/
        if ( (unsigned __int8)Cell::IsPassable(&v45) ) /*0x580cf5*/
        {
          *v13++ = *(_DWORD *)v32; /*0x580d02*/
          ++v33; /*0x580d0c*/
        }
      }
      if ( v33 == 24 ) /*0x580d15*/
        break; /*0x580d15*/
      LOWORD(v42) = v14; /*0x580d1f*/
      v16 = v34; /*0x580d24*/
      HIWORD(v42) = v34 + v35; /*0x580d31*/
      *(_DWORD *)v32 = v42; /*0x580d3a*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v32, 1) ) /*0x580d41*/
      {
        v48 = (v32[0] << 8) + 128; /*0x580d65*/
        v57[0] = v48; /*0x580d69*/
        v49 = (v32[1] << 8) + 128; /*0x580d6d*/
        v57[1] = v49; /*0x580d71*/
        v50 = 0; /*0x580d86*/
        v17 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v48); /*0x580d8a*/
        v50 = Isometric::InitTables((int)v17, v57); /*0x580d9d*/
        if ( (unsigned __int8)Cell::IsPassable(&v48) ) /*0x580da1*/
        {
          v18 = v33 + 1; /*0x580db2*/
          *v13 = *(_DWORD *)v32; /*0x580db3*/
          v33 = v18; /*0x580db5*/
          ++v13; /*0x580db9*/
        }
      }
      if ( v33 == 24 ) /*0x580dc3*/
        break; /*0x580dc3*/
      if ( ++v12 > v16 ) /*0x580dcc*/
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
      v27 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v7 - 1); /*0x580ff8*/
      v28 = (int *)&v61[2 * v27 + 2]; /*0x581005*/
      v29 = *(__int16 *)v28 + ((__int16)v61[2 * v27 + 3] << 9); /*0x581017*/
      if ( v29 >= 0x40000 || (result = *(CellClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v29)) == 0 ) /*0x58102d*/
      {
        g_MissionQueueFrame.briefing[139] = *v28; /*0x581032*/
        return (CellClass *)&g_MissionQueueFrame.briefing[130]; /*0x581037*/
      }
      return result; /*0x581043*/
    }
    v8 = v35; /*0x581046*/
  }
  v31 = v36 + (v8 << 9); /*0x581051*/
  if ( v31 >= 0x40000 || (result = *(CellClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v31)) == 0 ) /*0x581069*/
  {
    g_MissionQueueFrame.briefing[139] = v39; /*0x581074*/
    return (CellClass *)&g_MissionQueueFrame.briefing[130]; /*0x58106f*/
  }
  return result; /*0x581031*/
}



// ==== 0x00581090  ObjectClass::CleanupMapSystems  this=ObjectClass  sig=csp ====
int __thiscall CleanupMapSystems(ObjectClass *this)
{
  int v2; // ebx
  int *p_nextArrayIndex; // esi
  _DWORD *abstractFlags; // esi
  char *p_needsRedraw; // ebx
  char *p_onBridge; // edi
  int v7; // ebp
  _DWORD *v8; // esi

  v2 = 13; /*0x581096*/
  p_nextArrayIndex = &this->?; /*0x58109b*/
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
  abstractFlags = (_DWORD *)this->?; /*0x5810b9*/
  if ( abstractFlags ) /*0x5810be*/
  {
    if ( *abstractFlags ) /*0x5810c0*/
      (**(void (__thiscall ***)(_DWORD, int))*abstractFlags)(*abstractFlags, 3); /*0x5810ca*/
    __3_YAXPAX_Z(abstractFlags); /*0x5810cd*/
    this->? = 0; /*0x5810d5*/
  }
  p_needsRedraw = &this->needsRedraw; /*0x5810dc*/
  p_onBridge = &this->onBridge; /*0x5810e2*/
  v7 = 3; /*0x5810e8*/
  do /*0x58111c*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)p_onBridge + 12))(p_onBridge); /*0x5810f1*/
    v8 = *(_DWORD **)p_needsRedraw; /*0x5810f4*/
    if ( *(_DWORD *)p_needsRedraw ) /*0x5810f4*/
    {
      if ( *v8 ) /*0x5810fa*/
        (**(void (__thiscall ***)(_DWORD, int))*v8)(*v8, 3); /*0x581104*/
      __3_YAXPAX_Z(v8); /*0x581107*/
      *(_DWORD *)p_needsRedraw = 0; /*0x58110f*/
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
  i... [21605 chars total]



// ==== 0x00581F50  MapClass::BuildSubzones  this=MapClass  sig=csp ====
_DWORD *__thiscall MapClass::BuildSubzones(MapClass *this)
{
  int v2; // esi
  char *pad_BC; // edi

  v2 = 2; /*0x581f55*/
  pad_BC = this->__pad_BC; /*0x581f5a*/
  do /*0x581f75*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)pad_BC + 12))(pad_BC); /*0x581f64*/
    Subzone::BuildGraph((Subzone *)this, v2--); /*0x581f6a*/
    pad_BC -= 24; /*0x581f70*/
  }
  while ( v2 >= 0 ); /*0x581f75*/
  return MapClass::AllocArrays(&stru_87E790.__pad_D8[80]); /*0x581f81*/
}



// ==== 0x00581F90  Subzone::BuildGraph  this=Subzone  sig=csp ====
int __thiscall Subzone::BuildGraph(Subzone *this, int a2)
{
  Subzone *v2; // esi
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edi
  int p_Subzone_field_0x08; // ebx
  unsigned int v7; // ecx
  bool v8; // cc
  unsigned int Subzone_field_0x04; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // edi
  unsigned __int8 *Subzone_field_0x08; // edx
  int v17; // ebp
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  __int16 v25; // dx
  int v26; // ecx
  int v27; // ebp
  int v28; // edi
  int v29; // eax
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
  int v53; // [esp+14h] [ebp-68h]
  int v54; // [esp+18h] [ebp-64h]
  int v55; // [esp+18h] [ebp-64h]
  int v56; // [esp+1Ch] [ebp-60h]
  unsigned __int8 *v57; // [esp+1Ch] [ebp-60h]
  unsigned int v58; // [esp+20h] [ebp-5Ch]
  _BYTE *i; // [esp+20h] [ebp-5Ch]
  __int16 v60[2]; // [esp+24h] [ebp-58h] BYREF
  int v61; // [esp+28h] [ebp-54h]
  int v62; // [esp+2Ch] [ebp-50h]
  int v63; // [esp+30h] [ebp-4Ch]
  Subzone *v64; // [esp+34h] [ebp-48h]
  int v65; // [esp+38h] [ebp-44h]
  int v66; // [esp+3Ch] [ebp-40h]
  int v67; // [esp+40h] [ebp-3Ch]
  _DWORD *v68; // [esp+44h] [ebp-38h]
  int v69; // [esp+48h] [ebp-34h] BYREF
  int v70; // [esp+4Ch] [ebp-30h]
  int v71; // [esp+50h] [ebp-2Ch]
  int v72; // [esp+54h] [ebp-28h]
  VectorClass v73; // [esp+58h] [ebp-24h] BYREF
  int v74; // [esp+68h] [ebp-14h]
  int v75; // [esp+6Ch] [ebp-10h]
  int v76; // [esp+70h] [ebp-Ch]
  int v77; // [esp+74h] [ebp-8h]
  int v78; // [esp+78h] [ebp-4h]
  char v79; // [esp+80h] [ebp+4h]

  v2 = this; /*0x581f9a*/
  v64 = this; /*0x581fa1*/
  v3 = *((_DWORD *)this + 27); /*0x581fa5*/
  v4 = *((_DWORD *)this + 28); /*0x581fa8*/
  v5 = (_DWORD *)*(&v64[10].Subzone_field_0x08 + a2); /*0x581fab*/
  p_Subzone_field_0x08 = (int)&v64[2 * a2 + 11].Subzone_field_0x08; /*0x581fb2*/
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
  Subzone_field_0x04 = v2[9].Subzone_field_0x04; /*0x582004*/
  if ( Subzone_field_0x04 < v7 ) /*0x58200c*/
  {
    v10 = v2[8].Subzone_field_0x08 + 1; /*0x58200e*/
    do /*0x58202a*/
    {
      *(_WORD *)(Subzone_field_0x04 + 2 * a2) = 0; /*0x58200f*/
      *(_WORD *)(Subzone_field_0x04 + 6) = *(_WORD *)(v10 + 1); /*0x582019*/
      *(_BYTE *)(Subzone_field_0x04 + 8) = *(_BYTE *)v10; /*0x58201f*/
      Subzone_field_0x04 += 10; /*0x582022*/
      v10 += 4; /*0x582025*/
    }
    while ( Subzone_field_0x04 < v7 ); /*0x58202a*/
  }
  v53 = 1; /*0x582034*/
  Subzone::Constructor((Subzone *)&v73, 0, 0); /*0x58203c*/
  (*((void (__thiscall **)(VectorClass *))v73.vtable0 + 3))(&v73); /*0x582049*/
  v11 = *(_DWORD *)(p_Subzone_field_0x08 + 8); /*0x58204c*/
  v12 = *(_DWORD *)(p_Subzone_field_0x08 + 16); /*0x58204f*/
  LOWORD(v76) = 0; /*0x582056*/
  v77 = 0; /*0x58205b*/
  v78 = 0; /*0x58205f*/
  if ( v12 < v11 /*0x58207f*/
    || (*(_BYTE *)(p_Subzone_field_0x08 + 13) || !v11)
    && (v13 = *(_DWORD *)(p_Subzone_field_0x08 + 20), v13 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)p_Subzone_field_0x08 + 8))(
         p_Subzone_field_0x08,
         v11 + v13,
         0) )
  {
    v14 = *(_DWORD *)(p_Subzone_field_0x08 + 16); /*0x582086*/
    *(_DWORD *)(p_Subzone_field_0x08 + 16) = v14 + 1; /*0x582094*/
    Subzone::CopyDataFrom((Subzone *)(*(_DWORD *)(p_Subzone_field_0x08 + 4) + 36 * v14), (int)&v73); /*0x58209d*/
  }
  v73.vtable0 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x5820a6*/
  VectorClass::Cleanup5((int)&v73); /*0x5820ae*/
  *(_WORD *)(*(_DWORD *)(p_Subzone_field_0x08 + 4) + 24) = 0; /*0x5820b9*/
  *(_DWORD *)(*(_DWORD *)(p_Subzone_field_0x08 + 4) + 28) = 7; /*0x5820c0*/
  v15 = v2[9].Subzone_field_0x04; /*0x5820d4*/
  Subzone_field_0x08 = (unsigned __int8 *)v2[8].Subzone_field_0x08; /*0x5820d7*/
  v57 = Subzone_field_0x08; /*0x5820da*/
  v71 = 1 << (a2 + 1); /*0x5820de*/
  v72 = v71; /*0x5820e2*/
  v62 = v71 - 1; /*0x5820ed*/
  v17 = 0; /*0x5820fb*/
  v66 = *(_DWORD *)&stru_87F5F0.__pad_58[660] + *(_DWORD *)&stru_87F5F0.__pad_58[664] + 1; /*0x5820ff*/
  v69 = 0; /*0x582103*/
  v70 = 0; /*0x582107*/
  v55 = 0; /*0x58210b*/
  v52 = 0; /*0x58210f*/
  while ( v15 < v58 ) /*0x582113*/
  {
    v18 = *Subzone_field_0x08; /*0x582122*/
    v63 = v18; /*0x582128*/
    if ( a2 + 1 >= 3 ) /*0x58212c*/
      v61 = 0; /*0x582138*/
    else
      v61 = *(__int16 *)(v15 + 2 * (a2 + 1)); /*0x582132*/
    if ( v18 == 7 || *(_WORD *)(v15 + 2 * a2) ) /*0x582150*/
    {
      v15 += 10; /*0x5822d0*/
      Subzone_field_0x08 += 4; /*0x5822d3*/
      ++v17; /*0x5822d6*/
      v57 = Subzone_field_0x08; /*0x5822d7*/
      v55 = v17; /*0x5822db*/
    }
    else
    {
      v60[1] = v52; /*0x582164*/
      g_MissionQueueFrame.briefing[273] = 0; /*0x582178*/
      v60[0] = v17; /*0x582182*/
      v19 = Radar::ProcessSubzone((Radar *)v2, v15, a2, v53, &v69, v60); /*0x582194*/
      VectorClass::ConstructSubzone(&v73, 0, 0); /*0x582196*/
      v73.vtable0 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58219f*/
      v75 = 10; /*0x5821a7*/
      v74 = 0; /*0x5821af*/
      VectorClass::CleanupSubzone((int)&v73); /*0x5821b7*/
      v20 = *(_DWORD *)(p_Subzone_field_0x08 + 8); /*0x5821bd*/
      v21 = *(_DWORD *)(p_Subzone_field_0x08 + 16); /*0x5821c0*/
      LOWORD(v76) = 0; /*0x5821c7*/
      v77 = 0; /*0x5821cc*/
      v78 = 0; /*0x5821d0*/
      if ( v21 < v20 /*0x5821f1*/
        || (*(_BYTE *)(p_Subzone_field_0x08 + 13) || !v20)
        && (v22 = *(_DWORD *)(p_Subzone_field_0x08 + 20), v22 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)p_Subzone_field_0x08 + 8))(
             p_Subzone_field_0x08,
             v20 + v22,
             0) )
      {
        v23 = *(_DWORD *)(p_Subzone_field_0x08 + 16); /*0x5821f8*/
        *(_DWORD *)(p_Subzone_field_0x08 + 16) = v23 + 1; /*0x582206*/
        Subzone::CopyDataFrom((Subzone *)(*(_DWORD *)(p_Subzone_field_0x08 + 4) + 36 * v23), (int)&v73); /*0x58220f*/
      }
      v73.vtable0 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x582218*/
      if ( v73.Items && v73.IsAllocated ) /*0x58222a*/
      {
        __3_YAXPAX_Z(v73.Items); /*0x58222d*/
        v73.Items = 0; /*0x582235*/
      }
      v73.IsAllocated = 0; /*0x582241*/
      v73.Capacity = 0; /*0x58224b*/
      v24 = *(_DWORD *)(p_Subzone_field_0x08 + 4) + 36 * (unsigned __int16)v53; /*0x582259*/
      v25 = v61; /*0x582260*/
      *(_DWORD *)(v24 + 28) = v63; /*0x582265*/
      *(_WORD *)(v24 + 24) = v25; /*0x582268*/
      *(_DWORD *)(v24 + 20) = 16; /*0x582275*/
      v63 = 65 * ((__int16)v52 / 4); /*0x58228b*/
      *(_DWORD *)(v24 + 32) = (__int16)v17 / 4 + 130 * ((__int16)v52 / 4) + 131; /*0x5822ab*/
      Subzone_field_0x08 = &v57[4 * v19]; /*0x5822b3*/
      ++v53; /*0x5822b6*/
      v26 = 5 * v19; /*0x5822ba*/
      v17 = v19 + v55; /*0x5822bd*/
      v2 = v64; /*0x5822bf*/
      v15 += 2 * v26; /*0x5822c3*/
      v57 = Subzone_field_0x08; /*0x5822c6*/
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
  v27 = 0; /*0x582330*/
  *(&v2[9].Subzone_field_0x08 + a2) = (unsigned __int16)v53; /*0x582332*/
  if ( *(int *)v2[8].__pad_0 > 0 ) /*0x58233b*/
  {
    v28 = 0; /*0x58233d*/
    do /*0x582366*/
    {
      v29 = *(_DWORD *)v2[7].__pad_0 + v28; /*0x582344*/
      if ( *(_BYTE *)(v29 + 8) ) /*0x582346*/
        RadarClass::RenderBlips((RadarClass *)v2, (int *)v29, a2); /*0x582358*/
      ++v27; /*0x582360*/
      v28 += 16; /*0x582361*/
    }
    while ( v27 < *(_DWORD *)v2[8].__pad_0 ); /*0x582366*/
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
        v79 = *v34; /*0x5823a4*/
        LOBYTE(v67) = *v34; /*0x5823ab*/
        v37 = *(_DWORD *)(p_Subzone_field_0x08 + 4) + 36 * (unsigned __int16)v35; /*0x5823b8*/
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
        v44 = *(_DWORD *)(p_Subzone_field_0x08 + 4); /*0x582406*/
        LOBYTE(v65) = v79; /*0x582414*/
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



// ==== 0x005824A0  Radar::ProcessSubzone  this=Radar  sig=csp ====
int __thiscall Radar::ProcessSubzone(Radar *this, int a2, int a3, int a4, int *a5, __int16 *a6)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // esi
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
  int v47; // ebp
  int v48; // eax
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
  int v68; // esi
  int v69; // ecx
  int v70; // edx
  int v71; // eax
  __int16 *v72; // ebp
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
  __int16 v95[2]; // [esp+24h] [ebp-50h] BYREF
  int v96; // [esp+28h] [ebp-4Ch]
  int v97; // [esp+2Ch] [ebp-48h]
  int v98; // [esp+30h] [ebp-44h]
  int v99; // [esp+34h] [ebp-40h]
  int v100; // [esp+38h] [ebp-3Ch]
  __int16 v101[2]; // [esp+3Ch] [ebp-38h] BYREF
  _DWORD *v102; // [esp+40h] [ebp-34h]
  int v103; // [esp+44h] [ebp-30h]
  int v104; // [esp+48h] [ebp-2Ch] BYREF
  __int16 v105[2]; // [esp+4Ch] [ebp-28h] BYREF
  int v106; // [esp+50h] [ebp-24h]
  __int16 v107[2]; // [esp+54h] [ebp-20h] BYREF
  __int16 v108[2]; // [esp+58h] [ebp-1Ch] BYREF
  int v109; // [esp+5Ch] [ebp-18h]
  int v110; // [esp+60h] [ebp-14h]
  int v111; // [esp+64h] [ebp-10h]
  int v112; // [esp+6Ch] [ebp-8h]
  int v113; // [esp+70h] [ebp-4h]
  int v114; // [esp+78h] [ebp+4h]
  __int16 *v115; // [esp+88h] [ebp+14h]

  v6 = a2; /*0x5824a5*/
  v98 = *(__int16 *)(a2 + 6); /*0x5824b3*/
  v7 = a2; /*0x5824be*/
  v8 = a2; /*0x5824c0*/
  v9 = *a6; /*0x5824c6*/
  v115 = (__int16 *)a6[1]; /*0x5824cd*/
  v112 = 0; /*0x5824d4*/
  LOBYTE(v113) = 0; /*0x5824dc*/
  v10 = *a5; /*0x5824e4*/
  v106 = a5[1]; /*0x5824e6*/
  v11 = a5[2]; /*0x5824ea*/
  v12 = a5[3]; /*0x5824ed*/
  v97 = -1; /*0x5824f0*/
  v96 = v9; /*0x5824fc*/
  v100 = v11 + v10 - 1; /*0x582500*/
  v94 = v9; /*0x582508*/
  v99 = v10; /*0x58250c*/
  v111 = v12 + v106 - 1; /*0x582518*/
  v102 = *(_DWORD **)&this->__pad_64[4 * a3 + 28]; /*0x582527*/
  v13 = *(unsigned __int8 *)(a2 + 8); /*0x58252d*/
  while ( v9 >= v10 ) /*0x582538*/
  {
    v14 = *(unsigned __int8 *)(v7 + 8) - v13; /*0x582541*/
    if ( (int)((HIDWORD(v14) ^ v14) - HIDWORD(v14)) >= 2 ) /*0x582549*/
      break; /*0x582549*/
    *(_WORD *)(v7 + 2 * a3) = a4; /*0x582556*/
    v13 = *(unsigned __int8 *)(v7 + 8); /*0x58255a*/
    v15 = *(__int16 *)(v7 - 4); /*0x58255d*/
    v7 -= 10; /*0x582565*/
    --v9; /*0x582568*/
    if ( v15 != v98 ) /*0x58256b*/
      break; /*0x58256b*/
    v10 = v99; /*0x582532*/
  }
  v96 = v9; /*0x582571*/
  v89 = *(__int16 *)(v7 + 2 * a3); /*0x58257b*/
  if ( v89 > 0 ) /*0x58257f*/
  {
    v16 = *(unsigned __int8 *)(v7 + 8) - v13; /*0x58258c*/
    if ( (int)((HIDWORD(v16) ^ v16) - HIDWORD(v16)) < 2 && v89 != -1 ) /*0x58259f*/
    {
      v101[1] = (__int16)v115; /*0x5825b1*/
      v101[0] = v9; /*0x5825bd*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v101, 1) ) /*0x5825c2*/
      {
        v101[1] = (__int16)v115; /*0x5825de*/
        v101[0] = v9 + 1; /*0x5825ea*/
        if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v101, 1) ) /*0x5825ef*/
        {
          v17 = (unsigned __int16)a4 | (v89 << 16); /*0x582612*/
          LOBYTE(v113) = 0; /*0x58261a*/
          v18 = *(_DWORD *)(*v102 + 24 * (a4 & 0xF | (16 * (v89 & 0xF))) + 16); /*0x58262a*/
          v19 = *v102 + 24 * (a4 & 0xF | (16 * (v89 & 0xF))); /*0x58262e*/
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
          v6 = a2; /*0x582693*/
          v9 = v96; /*0x582697*/
          v97 = v89; /*0x58269b*/
        }
      }
    }
  }
  v30 = *(unsigned __int8 *)(v6 + 8); /*0x5826a9*/
  if ( *(__int16 *)(v6 + 6) == v98 ) /*0x5826ae*/
  {
    do /*0x5826f5*/
    {
      if ( v94 > v100 ) /*0x5826ba*/
        break; /*0x5826ba*/
      v31 = *(unsigned __int8 *)(v8 + 8) - v30; /*0x5826c3*/
      if ( (int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) >= 2 ) /*0x5826cb*/
        break; /*0x5826cb*/
      *(_WORD *)(v8 + 2 * a3) = a4; /*0x5826da*/
      v30 = *(unsigned __int8 *)(v8 + 8); /*0x5826e0*/
      v8 += 10; /*0x5826e7*/
      ++v94; /*0x5826eb*/
    }
    while ( *(__int16 *)(v8 + 6) == v98 ); /*0x5826f5*/
  }
  v90 = *(__int16 *)(v8 + 2 * a3); /*0x582701*/
  if ( v90 > 0 ) /*0x582705*/
  {
    v32 = *(unsigned __int8 *)(v8 + 8) - v30; /*0x582712*/
    if ( (int)((HIDWORD(v32) ^ v32) - HIDWORD(v32)) < 2 && v90 != v97 ) /*0x58272a*/
    {
      v101[0] = v94; /*0x582741*/
      v101[1] = (__int16)v115; /*0x58274d*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v101, 1) ) /*0x582752*/
      {
        v101[0] = v94 - 1; /*0x582770*/
        v101[1] = (__int16)v115; /*0x58277c*/
        if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v101, 1) ) /*0x582781*/
        {
          v33 = (unsigned __int16)a4 | (v90 << 16); /*0x5827a8*/
          LOBYTE(v113) = 0; /*0x5827b2*/
          v34 = *v102 + 24 * (a4 & 0xF | (16 * (v90 & 0xF))); /*0x5827bc*/
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
          v6 = a2; /*0x582824*/
          v9 = v96; /*0x582828*/
          v97 = v90; /*0x58282c*/
        }
      }
    }
  }
  v46 = *(_DWORD *)&this->__pad_64[148]; /*0x58284b*/
  v110 = (v8 - v6) / 10 - 1; /*0x582851*/
  v109 = v46 + *(_DWORD *)&this->__pad_64[144] + 1; /*0x58285f*/
  *(_DWORD *)v101 = 10 * v109; /*0x582868*/
  v47 = v7 - 10 * v109; /*0x58286c*/
  v48 = v7 + 10 * v109; /*0x58286e*/
  v49 = v9; /*0x582870*/
  v114 = v48; /*0x582872*/
  v95[0] = 0; /*0x582878*/
  v95[1] = 0; /*0x58287d*/
  if ( v9 > v94 ) /*0x582886*/
    return v110; /*0x582886*/
  do /*0x582aca*/
  {
    v50 = *(__int16 *)(v47 + 2 * a3); /*0x582892*/
    v91 = v50; /*0x582897*/
    if ( v49 == v9 ) /*0x58289b*/
    {
      v51 = v49; /*0x5828a5*/
      HIWORD(v103) = (_WORD)v115; /*0x5828a7*/
      LOWORD(v103) = v49 + 1; /*0x5828b3*/
      *(_DWORD *)v95 = v103; /*0x5828c0*/
      v52 = v47 + 2 * (5 * v109 + 5); /*0x5828c4*/
    }
    else
    {
      v51 = v49; /*0x5828ce*/
      if ( v49 >= v94 ) /*0x5828d2*/
      {
        v105[0] = v49 - 1; /*0x582902*/
        v105[1] = (__int16)v115; /*0x582907*/
        *(_DWORD *)v95 = *(_DWORD *)v105; /*0x582914*/
        v52 = *(_DWORD *)v101 + v47 - 10; /*0x582918*/
      }
      else
      {
        LOWORD(v104) = v49; /*0x5828dc*/
        HIWORD(v104) = (_WORD)v115; /*0x5828e1*/
        *(_DWORD *)v95 = v104; /*0x5828ee*/
        v52 = *(_DWORD *)v101 + v47; /*0x5828f2*/
      }
    }
    if ( v50 || (int)v115 <= v106 || v49 < v99 || v49 > v100 ) /*0x582939*/
    {
      if ( v50 != (unsigned __int16)a4 && v50 != v97 ) /*0x5829ad*/
      {
        if ( v50 ) /*0x5829b5*/
        {
          v54 = *(unsigned __int8 *)(v52 + 8) - *(unsigned __int8 *)(v47 + 8); /*0x5829c9*/
          if ( (int)((HIDWORD(v54) ^ v54) - HIDWORD(v54)) < 2 ) /*0x5829d1*/
          {
            if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v95, 1) ) /*0x5829e2*/
            {
              v108[1] = (_WORD)v115 - 1; /*0x5829fd*/
              v108[0] = v51; /*0x582a07*/
              if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v108, 1) ) /*0x582a0c*/
              {
                v55 = (unsigned __int16)a4 | (v91 << 16); /*0x582a26*/
                if ( v49 < v99 || (LOBYTE(v113) = 0, v49 > v100) ) /*0x582a37*/
                  LOBYTE(v113) = 1; /*0x582a39*/
                v56 = *v102 + 24 * (a4 & 0xF | (16 * (v91 & 0xF))); /*0x582a52*/
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
    }
    else if ( *(__int16 *)(v47 + 6) == v98 ) /*0x582943*/
    {
      v53 = *(unsigned __int8 *)(v52 + 8) - *(unsigned __int8 *)(v47 + 8); /*0x582957*/
      if ( (int)((HIDWORD(v53) ^ v53) - HIDWORD(v53)) < 2 ) /*0x58295f*/
      {
        v107[0] = v51; /*0x58297f*/
        v107[1] = (_WORD)v115 - 1; /*0x582984*/
        Radar::ProcessSubzone(this, v47, a3, a4, a5, v107); /*0x582989*/
        goto LABEL_73; /*0x58298e*/
      }
    }
    v47 += 10; /*0x582abc*/
    ++v49; /*0x582abf*/
LABEL_73:
    v9 = v96; /*0x582ac0*/
  }
  while ( v49 <= v94 ); /*0x582aca*/
  if ( v96 <= v94 ) /*0x582ad2*/
  {
    v68 = v114; /*0x582ad8*/
    do /*0x582ae6*/
    {
      v69 = *(__int16 *)(v68 + 2 * a3); /*0x582ae6*/
      v92 = v69; /*0x582aea*/
      if ( v9 == v96 ) /*0x582aee*/
      {
        v108[0] = v9 + 1; /*0x582af9*/
        v108[1] = (__int16)v115; /*0x582b08*/
        v70 = *(_DWORD *)v108; /*0x582b0d*/
        v71 = v68 - *(_DWORD *)v101 + 10; /*0x582b11*/
      }
      else
      {
        if ( v9 < v94 ) /*0x582b1a*/
        {
          v72 = v115; /*0x582b20*/
          v107[0] = v9; /*0x582b29*/
          v71 = v68 - *(_DWORD *)v101; /*0x582b2e*/
          v107[1] = (__int16)v115; /*0x582b30*/
          *(_DWORD *)v95 = *(_DWORD *)v107; /*0x582b39*/
          goto LABEL_82; /*0x582b3d*/
        }
        v71 = v68 - 2 * (5 * v109 + 5); /*0x582b4d*/
        LOWORD(v106) = v9 - 1; /*0x582b52*/
        HIWORD(v106) = (_WORD)v115; /*0x582b5f*/
        v70 = v106; /*0x582b64*/
      }
      v72 = v115; /*0x582b68*/
      *(_DWORD *)v95 = v70; /*0x582b6f*/
LABEL_82:
      if ( v69 || (int)v72 >= v111 || v9 < v99 || v9 > v100 ) /*0x582b87*/
      {
        if ( v69 != (unsigned __int16)a4 && v69 != v97 ) /*0x582bfa*/
        {
          if ( v69 ) /*0x582c02*/
          {
            v74 = *(unsigned __int8 *)(v114 + 8) - *(unsigned __int8 *)(v71 + 8); /*0x582c18*/
            if ( (int)((HIDWORD(v74) ^ v74) - HIDWORD(v74)) < 2 ) /*0x582c20*/
            {
              if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v95, 1) ) /*0x582c33*/
              {
                LOWORD(v104) = v9; /*0x582c4a*/
                HIWORD(v104) = (_WORD)v72 + 1; /*0x582c4f*/
                if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&v104, 1) ) /*0x582c54*/
                {
                  v75 = (unsigned __int16)a4 | (v92 << 16); /*0x582c6e*/
                  if ( v9 < v99 || (LOBYTE(v113) = 0, v9 > v100) ) /*0x582c7f*/
                    LOBYTE(v113) = 1; /*0x582c81*/
                  v76 = *v102 + 24 * (a4 & 0xF | (16 * (v92 & 0xF))); /*0x582c9c*/
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
        }
        ++v9; /*0x582d09*/
        v114 += 10; /*0x582d0a*/
        v68 = v114; /*0x582d0e*/
      }
      else if ( *(__int16 *)(v68 + 6) == v98 /*0x582ba7*/
             && (v73 = *(unsigned __int8 *)(v68 + 8) - *(unsigned __int8 *)(v71 + 8),
                 (int)((HIDWORD(v73) ^ v73) - HIDWORD(v73)) < 2) )
      {
        v105[0] = v9; /*0x582bc3*/
        v105[1] = (_WORD)v72 + 1; /*0x582bc8*/
        Radar::ProcessSubzone(this, v68, a3, a4, a5, v105); /*0x582bcd*/
      }
      else
      {
        v68 += 10; /*0x582bd7*/
        ++v9; /*0x582bda*/
        v114 = v68; /*0x582bdb*/
      }
    }
    while ( v9 <= v94 ); /*0x582ae6*/
  }
  return v110; /*0x582d1e*/
}



// ==== 0x00582D30  ObjectClass::SmallFunc_582D30  this=ObjectClass  sig=csp ====
int __thiscall SmallFunc_582D30(ObjectClass *this, int a2)
{
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
      if ( *(_BYTE *)(v6 + v5 + 8) ) /*0x582d4c*/
        RadarClass::RenderBlips((RadarClass *)this, (int *)(v6 + v5), a2); /*0x582d57*/
      result = this->customSound_controller[4]; /*0x582d5c*/
      ++v3; /*0x582d5f*/
      v5 += 16; /*0x582d60*/
    }
    while ( v3 < result ); /*0x582d65*/
  }
  return result; /*0x582d69*/
}



// ==== 0x00582D70  RadarClass::RenderBlips  this=RadarClass  sig=csp ====
int __thiscall RadarClass::RenderBlips(RadarClass *this, int *a2, int a3)
{
  int v3; // ebx
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // eax
  Cell *v8; // eax
  Cell *v9; // esi
  int v10; // esi
  int v11; // ecx
  int v12; // esi
  __int16 v13; // ax
  unsigned int v14; // eax
  InfantryClass *v15; // eax
  InfantryClass *v16; // ecx
  int Type; // ebp
  unsigned int v18; // eax
  InfantryClass *v19; // eax
  InfantryClass *v20; // ecx
  int result; // eax
  int v22; // esi
  char v23; // al
  int v24; // ecx
  int v25; // esi
  _WORD *v26; // ebp
  _WORD *v27; // esi
  int v28; // eax
  int v29; // ecx
  int v30; // esi
  int v31; // eax
  int v32; // ecx
  RadarClass *v33; // ebp
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  _DWORD *v37; // esi
  RadarClass *v38; // ecx
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
  RadarClass *v49; // ecx
  int v50; // edx
  int v51; // eax
  int v52; // ecx
  int v53; // esi
  int v54; // eax
  int v55; // ecx
  int v56; // ecx
  __int16 v57[2]; // [esp+10h] [ebp-28h] BYREF
  __int16 v58[2]; // [esp+14h] [ebp-24h] BYREF
  int *v59; // [esp+18h] [ebp-20h]
  __int16 v60[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  __int16 v61[2]; // [esp+20h] [ebp-18h] BYREF
  int v62; // [esp+24h] [ebp-14h] BYREF
  RadarClass *v63; // [esp+28h] [ebp-10h]
  int v64; // [esp+2Ch] [ebp-Ch] BYREF
  int v65; // [esp+30h] [ebp-8h]
  char v66; // [esp+34h] [ebp-4h]

  v3 = a3; /*0x582d74*/
  v65 = 0; /*0x582d7d*/
  v66 = 0; /*0x582d85*/
  v63 = *(RadarClass **)&this->__pad_64[4 * a3 + 28]; /*0x582d91*/
  v5 = *a2; /*0x582d99*/
  v6 = a2[1]; /*0x582d9b*/
  a3 = v5; /*0x582d9e*/
  *(_DWORD *)v57 = v6; /*0x582da2*/
  v7 = (__int16)v5 + (SHIWORD(v5) << 9); /*0x582db1*/
  if ( v7 < 0x40000 && (v8 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v7)) != 0 ) /*0x582dc7*/
  {
    v9 = v8; /*0x582dc9*/
  }
  else
  {
    g_MissionQueueFrame.briefing[139] = v5; /*0x582dcd*/
    v9 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x582dd3*/
  }
  if ( (unsigned __int8)Cell::IsInRange(v9) || (unsigned __int8)Cell::IsInRange2(v9) ) /*0x582de9*/
  {
    v23 = Cell::IsInRange(v9); /*0x582f24*/
    v24 = g_Cell_BuildabilityLUT; /*0x582f29*/
    if ( !v23 ) /*0x582f34*/
      v24 = g_TerrainBridgeIndex; /*0x582f36*/
    v25 = dword_82A944[v9->Cell_field_0x38 - v24]; /*0x582f42*/
    v26 = (_WORD *)(4 * (v25 & 7) + 9041544); /*0x582f52*/
    *(_DWORD *)v58 = *CellStruct::Add((CellStruct *)&a3, &v62, v26); /*0x582f6c*/
    v27 = (_WORD *)(4 * (((_BYTE)v25 - 4) & 7) + 9041544); /*0x582f70*/
    a2 = (int *)*CellStruct::Add((CellStruct *)&a3, &v62, v27); /*0x582f8e*/
    *(_DWORD *)v60 = *CellStruct::Add((CellStruct *)v57, &v62, v26); /*0x582f9a*/
    *(_DWORD *)v61 = *CellStruct::Add((CellStruct *)v57, &v62, v27); /*0x582fae*/
  }
  else
  {
    v10 = *(_DWORD *)(InfantryClass::GetType((InfantryClass *)v9) + 44); /*0x582dfd*/
    v11 = *CellStruct::Add((CellStruct *)&a3, &v62, (_WORD *)(4 * (((_BYTE)v10 + 2) & 7) + 9041544)); /*0x582e1c*/
    v12 = ((_BYTE)v10 - 2) & 7; /*0x582e21*/
    *(_DWORD *)v58 = v11; /*0x582e24*/
    v62 = v11; /*0x582e28*/
    v13 = HIWORD(a3) + HIWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x582e44*/
    LOWORD(v59) = a3 + LOWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x582e49*/
    HIWORD(v59) = v13; /*0x582e4e*/
    a2 = v59; /*0x582e5c*/
    v14 = (__int16)v11 + (SHIWORD(v11) << 9); /*0x582e66*/
    if ( v14 < 0x40000 && (v15 = *(InfantryClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v14)) != 0 ) /*0x582e7c*/
    {
      v16 = v15; /*0x582e7e*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = v11; /*0x582e82*/
      v16 = (InfantryClass *)&g_MissionQueueFrame.briefing[130]; /*0x582e88*/
    }
    Type = InfantryClass::GetType(v16); /*0x582e96*/
    v18 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x582ea3*/
    if ( v18 < 0x40000 && (v19 = *(InfantryClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) != 0 ) /*0x582eb9*/
    {
      v20 = v19; /*0x582ebb*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = (int)a2; /*0x582ebf*/
      v20 = (InfantryClass *)&g_MissionQueueFrame.briefing[130]; /*0x582ec5*/
    }
    result = InfantryClass::GetType(v20); /*0x582eca*/
    v22 = result; /*0x582ed1*/
    if ( !Type || !result ) /*0x582edb*/
      return result; /*0x582edb*/
    *(_DWORD *)v60 = *WalkPathClassPath(&v62, (int *)v58, *(_DWORD *)(Type + 448), (int *)(Type + 48)); /*0x582efe*/
    *(_DWORD *)v61 = *WalkPathClassPath(&v62, (int *)&a2, *(_DWORD *)(v22 + 448), (int *)(v22 + 48)); /*0x582f19*/
  }
  v28 = Cell::CoordToIndex((Cell *)this, (__int16 *)&a3); /*0x582fb9*/
  if ( v28 >= 0 ) /*0x582fc0*/
  {
    v29 = *(_DWORD *)&this->__pad_64[8]; /*0x582fc6*/
    if ( v28 >= v29 ) /*0x582fcb*/
      v28 = v29 - 1; /*0x582fcd*/
  }
  else
  {
    v28 = 0; /*0x582fc2*/
  }
  v30 = *(__int16 *)(*(_DWORD *)&this->__pad_64[12] + 2 * (v3 + 4 * v28 + v28)); /*0x582fdd*/
  v31 = Cell::CoordToIndex((Cell *)this, v57); /*0x582fe3*/
  if ( v31 >= 0 ) /*0x582fea*/
  {
    v32 = *(_DWORD *)&this->__pad_64[8]; /*0x582ff0*/
    if ( v31 >= v32 ) /*0x582ff5*/
      v31 = v32 - 1; /*0x582ff7*/
  }
  else
  {
    v31 = 0; /*0x582fec*/
  }
  v33 = v63; /*0x583002*/
  v34 = *(__int16 *)(*(_DWORD *)&this->__pad_64[12] + 2 * (v3 + 4 * v31 + v31)); /*0x583006*/
  v35 = v34 | (v30 << 16); /*0x583012*/
  v64 = v35; /*0x58301c*/
  v65 = v35; /*0x583020*/
  v66 = 0; /*0x583024*/
  v36 = 3 * (v34 & 0xF | (16 * (v30 & 0xF))); /*0x58302c*/
  v37 = (_DWORD *)*((_DWORD *)v63->RadarClass_field_0x0 + 2 * v36 + 1); /*0x58302f*/
  v38 = (RadarClass *)((char *)v63->RadarClass_field_0x0 + 8 * v36); /*0x583033*/
  v39 = (int)v38->RadarClass_field_0x10 - 1; /*0x583039*/
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
  v40 = Cell::CoordToIndex((Cell *)this, v58); /*0x583057*/
  if ( v40 >= 0 ) /*0x58305e*/
  {
    v41 = *(_DWORD *)&this->__pad_64[8]; /*0x583064*/
    if ( v40 >= v41 ) /*0x583069*/
      v40 = v41 - 1; /*0x58306b*/
  }
  else
  {
    v40 = 0; /*0x583060*/
  }
  v42 = *(__int16 *)(*(_DWORD *)&this->__pad_64[12] + 2 * (v3 + 4 * v40 + v40)); /*0x58307b*/
  v43 = Cell::CoordToIndex((Cell *)this, v60); /*0x583081*/
  if ( v43 >= 0 ) /*0x583088*/
  {
    v44 = *(_DWORD *)&this->__pad_64[8]; /*0x58308e*/
    if ( v43 >= v44 ) /*0x583093*/
      v43 = v44 - 1; /*0x583095*/
  }
  else
  {
    v43 = 0; /*0x58308a*/
  }
  v45 = *(__int16 *)(*(_DWORD *)&this->__pad_64[12] + 2 * (v3 + 4 * v43 + v43)); /*0x5830a0*/
  v46 = v45 | (v42 << 16); /*0x5830ac*/
  v64 = v46; /*0x5830b6*/
  v65 = v46; /*0x5830ba*/
  v66 = 0; /*0x5830be*/
  v47 = 3 * (v45 & 0xF | (16 * (v42 & 0xF))); /*0x5830c6*/
  v48 = (_DWORD *)*((_DWORD *)v33->RadarClass_field_0x0 + 2 * v47 + 1); /*0x5830c9*/
  v49 = (RadarClass *)((char *)v33->RadarClass_field_0x0 + 8 * v47); /*0x5830cd*/
  v50 = (int)v49->RadarClass_field_0x10 - 1; /*0x5830d3*/
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
  v51 = Cell::CoordToIndex((Cell *)this, (__int16 *)&a2); /*0x5830f1*/
  if ( v51 >= 0 ) /*0x5830f8*/
  {
    v52 = *(_DWORD *)&this->__pad_64[8]; /*0x5830fe*/
    if ( v51 >= v52 ) /*0x583103*/
      v51 = v52 - 1; /*0x583105*/
  }
  else
  {
    v51 = 0; /*0x5830fa*/
  }
  v53 = *(__int16 *)(*(_DWORD *)&this->__pad_64[12] + 2 * (v3 + 4 * v51 + v51)); /*0x583115*/
  v54 = Cell::CoordToIndex((Cell *)this, v61); /*0x58311b*/
  if ( v54 >= 0 ) /*0x583122*/
  {
    v55 = *(_DWORD *)&this->__pad_64[8]; /*0x583128*/
    if ( v54 >= v55 ) /*0x58312d*/
      v54 = v55 - 1; /*0x58312f*/
  }
  else
  {
    v54 = 0; /*0x583124*/
  }
  v56 = *(__int16 *)(*(_DWORD *)&this->__pad_64[12] + 2 * (v3 + 4 * v54 + v54)); /*0x58313a*/
  v64 = v56 | (v53 << 16); /*0x58314b*/
  v65 = v64; /*0x58314f*/
  v66 = 0; /*0x583160*/
  LOBYTE(result) = RadarClass::updateRadarCells(v33, v56 & 0xF | (16 * (v53 & 0xF)), &v64); /*0x583165*/
  return result; /*0x58316a*/
}



// ==== 0x00583180  Pathfinding::CrossBridge  this=Pathfinding  sig=csp ====
int *__stdcall Pathfinding_CrossBridge(int *a1, int a2, int a3)
{
  int *NeighbourContent; // ebx
  _WORD *v4; // edi
  int Region; // esi
  int v6; // eax
  int *result; // eax
  int v8; // eax
  char *v9; // esi
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
  __int16 v20; // [esp+20h] [ebp+8h]
  int v21; // [esp+20h] [ebp+8h]
  int v22; // [esp+20h] [ebp+8h]

  NeighbourContent = (int *)a2; /*0x583185*/
  if ( (_BYTE)a3 && (*(_DWORD *)(a2 + 320) & 0x100) != 0 )
  {
    v4 = (_WORD *)(a2 + 36); /*0x5831a5*/
    Region = GetRegionMap((int *)&dword_87F7E8, (__int16 *)(a2 + 36), 2, 0); /*0x5831b7*/
    if ( Region != -1 || (v6 = *(_DWORD *)FindCliffSeedCell(&a3, a2 + 36, a2 + 36), a3 = v6, v6 == dword_ABD480) )
    {
      v8 = *(_DWORD *)(a2 + 320); /*0x5831fe*/
      v9 = (char *)dword_87F83C + 16 * Region; /*0x583207*/
      if ( (v8 & 0x800) != 0 ) /*0x58320c*/
      {
        v10 = *(_WORD *)(a2 + 38); /*0x58320e*/
        LOWORD(a3) = 0; /*0x583212*/
        HIWORD(a3) = v10 - *((_WORD *)v9 + 1); /*0x58321d*/
      }
      else
      {
        a3 = (unsigned __int16)(*v4 - *(_WORD *)v9); /*0x583235*/
      }
      v11 = a3; /*0x583222*/
      if ( v9[8] )
      {
        v12 = HIWORD(a3); /*0x583251*/
        v13 = (double)(__int16)(HIWORD(a3) + *((_WORD *)v9 + 1) - *(_WORD *)(a2 + 38)); /*0x583273*/
        a3 = (__int16)(a3 + *(_WORD *)v9 - *v4); /*0x583277*/
        v14 = Math::Sqrt((double)a3 * (double)a3 + v13 * v13); /*0x583290*/
        v20 = Math::RoundToInt(v14); /*0x58329e*/
        v15 = (double)(__int16)(v12 + *((_WORD *)v9 + 3) - v4[1]); /*0x5832bd*/
        a3 = (__int16)(v11 + *((_WORD *)v9 + 2) - *v4); /*0x5832c1*/
        v16 = Math::Sqrt((double)a3 * (double)a3 + v15 * v15); /*0x5832da*/
        if ( v20 >= (__int16)Math::RoundToInt(v16) ) /*0x5832ec*/
        {
          v18 = *((_WORD *)v9 + 2) + v11; /*0x58331a*/
          HIWORD(a3) = v12 + *((_WORD *)v9 + 3); /*0x583322*/
          result = a1; /*0x583327*/
          LOWORD(a3) = v18; /*0x58332b*/
        }
        else
        {
          v17 = *((_WORD *)v9 + 1); /*0x5832f1*/
          LOWORD(a3) = v11 + *(_WORD *)v9; /*0x5832fb*/
          result = a1; /*0x583300*/
          HIWORD(a3) = v12 + v17; /*0x583304*/
        }
        *a1 = a3; /*0x583310*/
      }
      else
      {
        v19 = *((_WORD *)v9 + 2) != *(_WORD *)v9 ? 2 : 4;
        if ( (v8 & 0x100) != 0 ) /*0x583351*/
        {
          do /*0x583366*/
            NeighbourContent = (int *)Cell::GetNeighbourContent(NeighbourContent, v19); /*0x58335b*/
          while ( (NeighbourContent[80] & 0x100) != 0 ); /*0x583366*/
        }
        if ( (Cell::IsInRange(NeighbourContent) || Cell::IsInRange2(NeighbourContent)) && NeighbourContent[59] != 3 ) /*0x583385*/
        {
          LOWORD(v21) = v11 + *((_WORD *)v9 + 2); /*0x583397*/
          HIWORD(v21) = HIWORD(a3) + *((_WORD *)v9 + 3); /*0x58339d*/
          *a1 = v21; /*0x5833ac*/
          return a1; /*0x5833a2*/
        }
        else
        {
          LOWORD(v22) = v11 + *(_WORD *)v9; /*0x5833c1*/
          HIWORD(v22) = HIWORD(a3) + *((_WORD *)v9 + 1); /*0x5833c7*/
          *a1 = v22; /*0x5833d6*/
          return a1; /*0x5833cc*/
        }
      }
    }
    else
    {
      *a1 = v6; /*0x5831f0*/
      return a1; /*0x5831f2*/
    }
  }
  else
  {
    *a1 = *(_DWORD *)(a2 + 36); /*0x5833e6*/
    return a1; /*0x5833dc*/
  }
  return result; /*0x5831ed*/
}



// ==== 0x005833F0  Pathfinding::SelectRegionPath  this=Pathfinding  sig=csp ====
int *__stdcall Pathfinding_SelectRegionPath(int *a1, __int16 *a2, int a3)
{
  int Region; // eax
  char *v4; // esi
  _WORD *v5; // edi
  double v6; // st7
  double v7; // st7
  __int16 v8; // bx
  double v9; // st7
  double v10; // st7
  unsigned int v12; // edi
  unsigned int v13; // eax
  int *v14; // eax
  int *NeighbourContent; // ebx
  int v16; // eax

  Region = GetRegionMap((int *)&dword_87F7E8, a2, 1, 0); /*0x583404*/
  if ( Region == -1 )
  {
    v16 = *(_DWORD *)FindCliffSeedCell(&a3, a2, a3); /*0x583590*/
    a3 = v16; /*0x583599*/
    if ( v16 == dword_ABD480 ) /*0x58359d*/
    {
      *a1 = *(_DWORD *)a2; /*0x5835c6*/
      return a1; /*0x5835bc*/
    }
    else
    {
      *a1 = v16; /*0x5835b4*/
      return a1; /*0x5835b6*/
    }
  }
  else
  {
    v4 = (char *)dword_87F83C + 16 * Region; /*0x58341d*/
    if ( v4[8] )
    {
      v5 = (_WORD *)a3; /*0x58342a*/
      v6 = (double)(__int16)(*(_WORD *)(a3 + 2) - *((_WORD *)v4 + 1)); /*0x583449*/
      a3 = (__int16)(*(_WORD *)a3 - *(_WORD *)v4); /*0x58344d*/
      v7 = Math::Sqrt((double)a3 * (double)a3 + v6 * v6); /*0x583466*/
      v8 = Math::RoundToInt(v7); /*0x583470*/
      v9 = (double)(__int16)(v5[1] - *((_WORD *)v4 + 3)); /*0x58348b*/
      a3 = (__int16)(*v5 - *((_WORD *)v4 + 2)); /*0x58348f*/
      v10 = Math::Sqrt((double)a3 * (double)a3 + v9 * v9); /*0x5834a8*/
      if ( v8 >= (__int16)Math::RoundToInt(v10) ) /*0x5834b8*/
      {
        *a1 = *((_DWORD *)v4 + 1); /*0x5834d3*/
        return a1; /*0x5834cc*/
      }
      else
      {
        *a1 = *(_DWORD *)v4; /*0x5834c3*/
        return a1; /*0x5834bc*/
      }
    }
    else
    {
      v12 = *((_WORD *)v4 + 2) != *(_WORD *)v4 ? 2 : 4;
      v13 = *a2 + (a2[1] << 9); /*0x5834f6*/
      if ( v13 < 0x40000 && (v14 = *(int **)(dword_87F924 + 4 * v13)) != 0 ) /*0x58350c*/
      {
        NeighbourContent = v14; /*0x58350e*/
      }
      else
      {
        NeighbourContent = (int *)&unk_ABDC50; /*0x583515*/
        dword_ABDC74 = *(_DWORD *)a2; /*0x58351a*/
      }
      for ( ; /*0x58352c*/
            (NeighbourContent[80] & 0x100) != 0;
            NeighbourContent = (int *)Cell::GetNeighbourContent(NeighbourContent, v12) )
      {
        ; /*0x583536*/
      }
      if ( (Cell::IsInRange(NeighbourContent) || Cell::IsInRange2(NeighbourContent)) && NeighbourContent[59] != 3 ) /*0x58355d*/
      {
        *a1 = *((_DWORD *)v4 + 1); /*0x583569*/
        return a1; /*0x583562*/
      }
      else
      {
        *a1 = *(_DWORD *)v4; /*0x583578*/
        return a1; /*0x583571*/
      }
    }
  }
}



// ==== 0x005835D0  FindCliffSeedCell  this=-  sig=csp ====
int *__stdcall FindCliffSeedCell(int *a1, __int16 *a2, int a3)
{
  unsigned int v3; // eax
  int *v4; // eax
  int *v5; // ecx
  int v7; // eax
  unsigned int v8; // eax
  int *NeighbourContent; // edi
  _DWORD *v10; // ebp
  _DWORD *v11; // ebx
  int *v12; // esi
  int v13; // ebx
  _WORD *v14; // esi
  double v15; // st7
  double v16; // st7
  __int16 v17; // di
  __int16 v18; // ax
  double v19; // st7
  double v20; // st7
  int v21; // [esp+18h] [ebp-Ch] BYREF
  int v22; // [esp+1Ch] [ebp-8h]
  unsigned int v23; // [esp+20h] [ebp-4h]

  v3 = *a2 + (a2[1] << 9); /*0x5835e1*/
  if ( v3 < 0x40000 && (v4 = *(int **)(dword_87F924 + 4 * v3)) != 0 ) /*0x5835f7*/
  {
    v5 = v4; /*0x5835f9*/
  }
  else
  {
    v5 = unk_ABDC50; /*0x5835ff*/
    dword_ABDC74 = *(_DWORD *)a2; /*0x583604*/
  }
  if ( (v5[80] & 0x100) != 0 ) /*0x583618*/
  {
    v7 = -((v5[80] & 0x800) != 0); /*0x583631*/
    LOBYTE(v7) = v7 & 0xFE; /*0x583634*/
    v8 = v7 + 4; /*0x583637*/
    NeighbourContent = v5; /*0x58363b*/
    v22 = v8; /*0x58363d*/
    v10 = v5 + 80; /*0x583644*/
    v11 = v5 + 80; /*0x583649*/
    v23 = ((_BYTE)v8 - 4) & 7; /*0x58364b*/
    v12 = v5; /*0x58364f*/
    a2 = (__int16 *)dword_ABD480; /*0x583657*/
    v21 = dword_ABD480; /*0x58365b*/
    while ( 1 ) /*0x583665*/
    {
      if ( (*v10 & 0x100) != 0 ) /*0x58366b*/
      {
        NeighbourContent = (int *)Cell::GetNeighbourContent(NeighbourContent, v8); /*0x583675*/
        v10 = NeighbourContent + 80; /*0x583680*/
        if ( (NeighbourContent[80] & 0x100) == 0 /*0x5836a5*/
          && (Cell::IsInRange(NeighbourContent) || Cell::IsInRange2(NeighbourContent))
          && NeighbourContent[59] != 3 )
        {
          a2 = (__int16 *)NeighbourContent[9]; /*0x5836aa*/
        }
      }
      if ( (*v11 & 0x100) == 0 ) /*0x5836b3*/
        goto LABEL_22; /*0x5836b3*/
      v12 = (int *)Cell::GetNeighbourContent(v12, v23); /*0x5836c1*/
      v11 = v12 + 80; /*0x5836cc*/
      if ( (v12[80] & 0x100) == 0 ) /*0x5836d2*/
      {
        if ( (Cell::IsInRange(v12) || Cell::IsInRange2(v12)) && v12[59] != 3 ) /*0x5836f1*/
          v21 = v12[9]; /*0x5836f6*/
        if ( (*v11 & 0x100) == 0 ) /*0x5836ff*/
        {
LABEL_22:
          if ( (*v10 & 0x100) == 0 ) /*0x58370b*/
            break; /*0x58370b*/
        }
      }
      v8 = v22; /*0x583661*/
    }
    v13 = dword_ABD480; /*0x583711*/
    v22 = dword_ABD480; /*0x583723*/
    if ( LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)&a2, 1) ) /*0x583727*/
    {
      v13 = (int)a2; /*0x583730*/
      v22 = (int)a2; /*0x583734*/
    }
    if ( LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)&v21, 1) ) /*0x583744*/
    {
      if ( __PAIR32__(HIWORD(v22), v13) == dword_ABD480 ) /*0x583758*/
        goto LABEL_28; /*0x583758*/
      v14 = (_WORD *)a3; /*0x58376c*/
      v15 = (double)(__int16)(HIWORD(v21) - *(_WORD *)(a3 + 2)); /*0x58378e*/
      a3 = (__int16)(v21 - *(_WORD *)a3); /*0x583792*/
      v16 = Math::Sqrt((double)a3 * (double)a3 + v15 * v15); /*0x5837ab*/
      v17 = Math::RoundToInt(v16); /*0x5837ba*/
      v18 = (_WORD)a2 - *v14; /*0x5837c5*/
      a3 = (__int16)(HIWORD(a2) - v14[1]); /*0x5837ce*/
      v19 = (double)a3; /*0x5837d2*/
      a3 = v18; /*0x5837d6*/
      v20 = Math::Sqrt((double)v18 * (double)v18 + v19 * v19); /*0x5837ef*/
      if ( v17 < (__int16)Math::RoundToInt(v20) ) /*0x5837ff*/
LABEL_28:
        v13 = v21; /*0x583801*/
    }
    *a1 = v13; /*0x58380c*/
    return a1; /*0x583805*/
  }
  else
  {
    *a1 = v5[9]; /*0x583621*/
    return a1; /*0x58361a*/
  }
}



// ==== 0x00583820  Pathfinding::CheckCliff  this=Pathfinding  sig=csp ====
_DWORD *__thiscall Pathfinding::CheckCliff(Pathfinding *this, _DWORD *a2, __int16 *a3, int a4, int a5)
{
  unsigned int v5; // eax
  int *v6; // eax
  int *v7; // ecx
  char *NeighbourContent; // ebx
  int v10; // eax
  Cell *v11; // edi
  unsigned int v12; // esi
  int v13; // edx
  int v14; // ebp
  int v15; // esi
  _WORD *v16; // ecx
  int v17; // edi
  __int16 **i; // esi
  int v19; // eax
  int v20; // edx
  _DWORD *p_Cell_field_0x140; // [esp+0h] [ebp-28h]
  _DWORD *v22; // [esp+4h] [ebp-24h]
  int v23; // [esp+4h] [ebp-24h]
  int v24; // [esp+8h] [ebp-20h]
  _DWORD v26[6]; // [esp+10h] [ebp-18h] BYREF

  v5 = *a3 + (a3[1] << 9); /*0x583835*/
  if ( v5 < 0x40000 && (v6 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v5)) != 0 ) /*0x58384b*/
  {
    v7 = v6; /*0x58384d*/
  }
  else
  {
    v7 = &g_MissionQueueFrame.briefing[130]; /*0x583853*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a3; /*0x583858*/
  }
  if ( (v7[80] & 0x100) != 0 ) /*0x583870*/
  {
    NeighbourContent = (char *)v7; /*0x58388a*/
    v10 = -((v7[80] & 0x800) != 0); /*0x58388e*/
    v11 = (Cell *)v7; /*0x583890*/
    LOBYTE(v10) = v10 & 0xFE; /*0x583892*/
    v22 = v7 + 80; /*0x583894*/
    p_Cell_field_0x140 = v7 + 80; /*0x58389b*/
    v12 = v10 + 4; /*0x58389f*/
    a3 = *(__int16 **)&g_MissionQueueFrame.waypoints[2134]; /*0x5838a6*/
    v24 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x5838aa*/
    do /*0x58396c*/
    {
      if ( (*v22 & 0x100) != 0 ) /*0x5838bd*/
      {
        NeighbourContent = (char *)Cell::GetNeighbourContent((Cell *)NeighbourContent, v12); /*0x5838c7*/
        v22 = NeighbourContent + 320; /*0x5838d8*/
        if ( (*((_DWORD *)NeighbourContent + 80) & 0x100) == 0 /*0x5838fb*/
          && ((unsigned __int8)Cell::IsInRange((Cell *)NeighbourContent)
           || (unsigned __int8)Cell::IsInRange2((Cell *)NeighbourContent))
          && *((_DWORD *)NeighbourContent + 59) != 3 )
        {
          a3 = (__int16 *)*((_DWORD *)NeighbourContent + 9); /*0x583900*/
        }
      }
      if ( (*p_Cell_field_0x140 & 0x100) != 0 ) /*0x58390d*/
      {
        v11 = (Cell *)Cell::GetNeighbourContent(v11, ((_BYTE)v12 - 4) & 7); /*0x583917*/
        p_Cell_field_0x140 = &v11->Cell_field_0x140; /*0x583928*/
        if ( ((int)v11->Cell_field_0x140 & 0x100) == 0 /*0x58394b*/
          && ((unsigned __int8)Cell::IsInRange(v11) || (unsigned __int8)Cell::IsInRange2(v11))
          && *(_DWORD *)&v11->__pad_E8[4] != 3 )
        {
          v24 = *(_DWORD *)&v11->__pad_1C[8]; /*0x583950*/
        }
      }
    }
    while ( (*p_Cell_field_0x140 & 0x100) != 0 || (*v22 & 0x100) != 0 ); /*0x58396c*/
    v13 = ((_BYTE)v12 + 2) & 7; /*0x583979*/
    v26[0] = a3; /*0x58397c*/
    v14 = a5; /*0x583983*/
    v15 = ((_BYTE)v12 - 2) & 7; /*0x58399b*/
    LOWORD(v23) = LOWORD(g_DDrawSurfaceManager.scenario[v13 + 82]) + (_WORD)a3; /*0x58399e*/
    HIWORD(v23) = HIWORD(a3) + HIWORD(g_DDrawSurfaceManager.scenario[v13 + 82]); /*0x5839aa*/
    v26[1] = v23; /*0x5839b3*/
    v16 = (_WORD *)(4 * v15 + 9041544); /*0x5839b7*/
    LOWORD(a3) = (_WORD)a3 + LOWORD(g_DDrawSurfaceManager.scenario[v15 + 82]); /*0x5839cb*/
    HIWORD(a3) += HIWORD(g_DDrawSurfaceManager.scenario[v15 + 82]); /*0x5839d7*/
    LOWORD(v15) = g_DDrawSurfaceManager.scenario[v13 + 82]; /*0x5839e0*/
    v26[2] = a3; /*0x5839e3*/
    v26[3] = v24; /*0x5839ee*/
    LOWORD(a3) = v24 + v15; /*0x5839f2*/
    HIWORD(a3) = HIWORD(v24) + HIWORD(g_DDrawSurfaceManager.scenario[v13 + 82]); /*0x583a03*/
    v26[4] = a3; /*0x583a0c*/
    LOWORD(v15) = *v16; /*0x583a10*/
    LOWORD(v16) = HIWORD(v24) + v16[1]; /*0x583a1a*/
    LOWORD(a3) = v24 + v15; /*0x583a1d*/
    HIWORD(a3) = (_WORD)v16; /*0x583a22*/
    v26[5] = a3; /*0x583a2b*/
    v17 = 0; /*0x583a2f*/
    for ( i = (__int16 **)v26; ; ++i ) /*0x583a31*/
    {
      a3 = *i; /*0x583a43*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3, 1) ) /*0x583a47*/
      {
        v19 = (__int16)a3 + SHIWORD(a3) * (*((_DWORD *)this + 62) + *((_DWORD *)this + 61) + 1); /*0x583a73*/
        if ( v19 >= 0 ) /*0x583a75*/
        {
          v20 = *((_DWORD *)this + 27); /*0x583a7b*/
          if ( v19 >= v20 ) /*0x583a80*/
            v19 = v20 - 1; /*0x583a82*/
        }
        else
        {
          v19 = 0; /*0x583a77*/
        }
        if ( *(__int16 *)(*((_DWORD *)this + 28) + 2 * (a4 + 4 * v19 + v19)) == v14 ) /*0x583a97*/
          break; /*0x583a97*/
      }
      if ( ++v17 >= 6 ) /*0x583aa0*/
      {
        *a2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x583aaf*/
        return a2; /*0x583ab5*/
      }
    }
    *a2 = a3; /*0x583abf*/
    return a2; /*0x583ab8*/
  }
  else
  {
    *a2 = v7[9]; /*0x58387c*/
    return a2; /*0x583872*/
  }
}



// ==== 0x00583AD0  ObjectClass::method_583AD0  this=ObjectClass  sig=csp ====
int __thiscall sub_583AD0(ObjectClass *this, int *a2)
{
  __int16 *i; // eax
  int TileIndex; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int Capacity; // eax
  int v10; // eax
  void *Items; // ebp
  int v12; // esi
  int v13; // edx
  int v14; // eax
  int *v15; // edi
  int v16; // esi
  VectorClass v18; // [esp+10h] [ebp-18h] BYREF
  int v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  VectorClass::Construct(&v18, 0, 0); /*0x583ae1*/
  v18.vtable0 = &DynamicVectorClass<int>::`vftable'; /*0x583af1*/
  v20 = 10; /*0x583af9*/
  v19 = 0; /*0x583b05*/
  *(_DWORD *)&stru_87F5F0.__pad_58[700] = *(_DWORD *)&stru_87F5F0.__pad_58[668] /*0x583b0d*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[672]
                                        + 1;
  *(_DWORD *)&stru_87F5F0.__pad_58[704] = *(_DWORD *)&stru_87F5F0.__pad_58[672] /*0x583b22*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[660]
                                        - *(_DWORD *)&stru_87F5F0.__pad_58[668];
  for ( i = (__int16 *)MapClass::SpiralSearch((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x583b2f*/
        i;
        i = (__int16 *)MapClass::SpiralSearch((MapClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( *((_DWORD *)i + 19) == 4 ) /*0x583b39*/
    {
      TileIndex = MapClass::GetTileIndex((MapClass *)this, i + 18, 10, 0); /*0x583b49*/
      v5 = TileIndex; /*0x583b4e*/
      if ( TileIndex >= 0 ) /*0x583b52*/
      {
        v6 = v19; /*0x583b54*/
        if ( TileIndex >= v19 ) /*0x583b5a*/
        {
          v7 = TileIndex - v19 + 1; /*0x583b5e*/
          if ( v7 > 0 ) /*0x583b61*/
          {
            v8 = v7; /*0x583b63*/
            Capacity = v18.Capacity; /*0x583b65*/
            while ( 1 ) /*0x583b6f*/
            {
              if ( v6 < Capacity ) /*0x583b71*/
                goto LABEL_13; /*0x583b71*/
              if ( (v18.IsAllocated || !Capacity) && v20 > 0 ) /*0x583b85*/
                break; /*0x583b85*/
LABEL_15:
              if ( !--v8 ) /*0x583bb6*/
                goto LABEL_16; /*0x583bb6*/
              v6 = v19; /*0x583b6b*/
            }
            if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v18.vtable0 + 2))( /*0x583b94*/
                   &v18,
                   v20 + Capacity,
                   0) )
            {
LABEL_13:
              v10 = v19++; /*0x583b9b*/
              *((_DWORD *)v18.Items + v10) = 0; /*0x583baa*/
            }
            Capacity = v18.Capacity; /*0x583bb1*/
            goto LABEL_15; /*0x583bb1*/
          }
        }
LABEL_16:
        ++*((_DWORD *)v18.Items + v5); /*0x583bb8*/
      }
    }
  }
  Items = v18.Items; /*0x583bd1*/
  v12 = -1; /*0x583bd9*/
  v13 = 0; /*0x583bdc*/
  v14 = 0; /*0x583bde*/
  if ( v19 > 0 ) /*0x583be2*/
  {
    v15 = (int *)v18.Items; /*0x583be4*/
    do /*0x583bf6*/
    {
      if ( *v15 > v13 ) /*0x583bea*/
      {
        v12 = v14; /*0x583bec*/
        v13 = *v15; /*0x583bee*/
      }
      ++v14; /*0x583bf0*/
      ++v15; /*0x583bf1*/
    }
    while ( v14 < v19 ); /*0x583bf6*/
  }
  *a2 = v12; /*0x583bfe*/
  if ( v12 < 0 ) /*0x583c00*/
  {
    v18.vtable0 = &VectorClass<int>::`vftable'; /*0x583c31*/
    if ( Items && v18.IsAllocated ) /*0x583c41*/
      __3_YAXPAX_Z(Items); /*0x583c44*/
    return 0; /*0x583c4f*/
  }
  else
  {
    v16 = *((_DWORD *)Items + v12); /*0x583c02*/
    v18.vtable0 = &VectorClass<int>::`vftable'; /*0x583c06*/
    if ( Items ) /*0x583c10*/
    {
      if ( v18.IsAllocated ) /*0x583c18*/
        __3_YAXPAX_Z(Items); /*0x583c1b*/
    }
    return v16; /*0x583c23*/
  }
}



// ==== 0x00583C60  ObjectClass::CollectMatchingTileCells  this=ObjectClass  sig=csp ====
int __thiscall CollectMatchingTileCells(
        ObjectClass *this,
        _WORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
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
  TileVector *v18; // edi
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
  TileVector v30; // ecx
  int v31; // eax
  TileVector v32; // eax
  TileVector v33; // edx
  __int16 v34; // bx
  __int16 v35; // ax
  _WORD *v36; // eax
  _DWORD *v37; // eax
  __int16 v38[2]; // [esp+10h] [ebp-70h] BYREF
  int v39; // [esp+14h] [ebp-6Ch]
  int v40; // [esp+18h] [ebp-68h]
  MapClass *v41; // [esp+1Ch] [ebp-64h]
  __int16 v42[2]; // [esp+20h] [ebp-60h]
  int v43; // [esp+24h] [ebp-5Ch]
  int v44; // [esp+28h] [ebp-58h]
  int v45; // [esp+2Ch] [ebp-54h]
  __int16 v46; // [esp+30h] [ebp-50h] BYREF
  __int16 v47; // [esp+34h] [ebp-4Ch] BYREF
  __int16 v48; // [esp+38h] [ebp-48h] BYREF
  int v49; // [esp+3Ch] [ebp-44h] BYREF
  _DWORD v50[5]; // [esp+40h] [ebp-40h] BYREF
  int v51; // [esp+54h] [ebp-2Ch]
  int v52; // [esp+64h] [ebp-1Ch]
  Rect v53; // [esp+70h] [ebp-10h] BYREF

  v41 = (MapClass *)this; /*0x583c63*/
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
          v11 = a2[1] + v10; /*0x583cab*/
          LOWORD(v43) = *a2 + result; /*0x583caf*/
          HIWORD(v43) = v11; /*0x583cbb*/
          *(_DWORD *)v38 = v43; /*0x583cce*/
          if ( MapClass::GetTileIndex(v41, v38, a5, 0) == a6 ) /*0x583cde*/
          {
            v12 = v38[0]; /*0x583ce9*/
            v51 = v38[1]; /*0x583cee*/
            v13 = 0; /*0x583cf9*/
            if ( a9 <= 0 ) /*0x583cfd*/
            {
LABEL_15:
              v18 = (TileVector *)a7; /*0x583d55*/
              v19 = *(_DWORD *)(a7 + 8); /*0x583d5c*/
              if ( *(_DWORD *)(a7 + 16) < v19 /*0x583d81*/
                || (*(_BYTE *)(a7 + 13) || !v19)
                && (v20 = *(_DWORD *)(a7 + 20), v20 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a7 + 8))(a7, v19 + v20, 0) )
              {
                v21 = *(_DWORD *)(a7 + 16); /*0x583d88*/
                v22 = *(_DWORD *)(a7 + 4); /*0x583d8b*/
                *(_DWORD *)(a7 + 16) = v21 + 1; /*0x583d91*/
                *(_DWORD *)(v22 + 4 * v21) = *(_DWORD *)v38; /*0x583d98*/
              }
            }
            else
            {
              while ( 1 ) /*0x583d06*/
              {
                v14 = 0; /*0x583d06*/
                if ( a8 > 0 ) /*0x583d0a*/
                  break; /*0x583d0a*/
LABEL_13:
                if ( ++v13 >= a9 ) /*0x583d4f*/
                {
                  v10 = v39; /*0x583d51*/
                  goto LABEL_15; /*0x583d51*/
                }
              }
              v15 = v51 + v13; /*0x583d10*/
              while ( 1 ) /*0x583d1c*/
              {
                v16 = CellStruct::Set((CellStruct *)&v46, v14 + v12, v15); /*0x583d1c*/
                v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16) + 19); /*0x583d2c*/
                if ( v17 != 4 && v17 != 3 ) /*0x583d37*/
                  break; /*0x583d37*/
                if ( ++v14 >= a8 ) /*0x583d43*/
                  goto LABEL_13; /*0x583d43*/
              }
              v18 = (TileVector *)a7; /*0x583da6*/
              v10 = v39; /*0x583dad*/
            }
          }
          else
          {
            v18 = (TileVector *)a7; /*0x583d9d*/
          }
          v23 = *a2 - v40; /*0x583dc7*/
          HIWORD(v44) = a2[1] + v10; /*0x583dd1*/
          LOWORD(v44) = v23; /*0x583dda*/
          *(_DWORD *)v38 = v44; /*0x583de9*/
          if ( MapClass::GetTileIndex(v41, v38, a5, 0) == a6 ) /*0x583df9*/
          {
            v24 = v38[0]; /*0x583e04*/
            v52 = v38[1]; /*0x583e09*/
            v25 = 0; /*0x583e14*/
            if ( a9 <= 0 ) /*0x583e18*/
            {
LABEL_32:
              v30 = v18[2]; /*0x583e73*/
              if ( *(_DWORD *)&v18[4] < *(_DWORD *)&v30 /*0x583e98*/
                || (v18[3].__tail_0[1] || !*(_DWORD *)&v30)
                && (v31 = (int)v18[5], v31 > 0)
                && (*(unsigned __int8 (__thiscall **)(TileVector *, int, _DWORD))(*(_DWORD *)v18 + 8))(
                     v18,
                     *(_DWORD *)&v30 + v31,
                     0) )
              {
                v32 = v18[4]; /*0x583e9f*/
                v33 = v18[1]; /*0x583ea2*/
                v18[4] = (TileVector)(*(_DWORD *)&v32 + 1); /*0x583ea8*/
                *(_DWORD *)(*(_DWORD *)&v33 + 4 * *(_DWORD *)&v32) = *(_DWORD *)v38; /*0x583eaf*/
              }
            }
            else
            {
              while ( 1 ) /*0x583e21*/
              {
                v26 = 0; /*0x583e21*/
                if ( a8 > 0 ) /*0x583e25*/
                  break; /*0x583e25*/
LABEL_31:
                if ( ++v25 >= a9 ) /*0x583e71*/
                  goto LABEL_32; /*0x583e71*/
              }
              v27 = v52 + v25; /*0x583e2b*/
              while ( 1 ) /*0x583e37*/
              {
                v28 = CellStruct::Set((CellStruct *)&v47, v26 + v24, v27); /*0x583e37*/
                v29 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28) + 19); /*0x583e47*/
                if ( v29 != 4 && v29 != 3 ) /*0x583e52*/
                  break; /*0x583e52*/
                if ( ++v26 >= a8 ) /*0x583e5e*/
                {
                  v18 = (TileVector *)a7; /*0x583e60*/
                  goto LABEL_31; /*0x583e60*/
                }
              }
              v18 = (TileVector *)a7; /*0x583eb4*/
            }
            v10 = v39; /*0x583ebb*/
          }
          if ( v10 != v40 ) /*0x583ec5*/
          {
            v34 = v42[0]; /*0x583ecb*/
            if ( v10 != *(_DWORD *)v42 ) /*0x583ed1*/
            {
              v35 = a2[1] + v40; /*0x583eee*/
              LOWORD(v45) = *a2 + v10; /*0x583ef7*/
              HIWORD(v45) = v35; /*0x583efc*/
              *(_DWORD *)v38 = v45; /*0x583f0a*/
              if ( MapClass::GetTileIndex(v41, v38, a5, 0) == a6 ) /*0x583f1a*/
              {
                v50[1] = v38[1]; /*0x583f2d*/
                v50[0] = v38[0]; /*0x583f35*/
                v50[2] = a8; /*0x583f45*/
                v50[3] = a9; /*0x583f49*/
                if ( Map_Helper_584030(v50) ) /*0x583f4d*/
                  TileVector::PushBack(v18, v38); /*0x583f5d*/
              }
              v36 = CellStruct::Set((CellStruct *)&v48, v10, v34); /*0x583f68*/
              *(_DWORD *)v38 = *CellStruct::Add((CellStruct *)a2, &v49, v36); /*0x583f91*/
              if ( MapClass::GetTileIndex(v41, v38, a5, 0) == a6 ) /*0x583fa1*/
              {
                v37 = Rect::Set(&v53, v38[0], v38[1], a8, a9); /*0x583fc6*/
                if ( Map_Helper_584030(v37) ) /*0x583fce*/
                  TileVector::PushBack(v18, v38); /*0x583fde*/
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



// ==== 0x00584030  Map_Helper  this=MapClass  sig=csp ====
char __stdcall sub_584030(_DWORD *a1)
{
  int v2; // eax
  int v3; // ebp
  int v4; // edi
  int v5; // esi
  unsigned int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v10; // [esp+10h] [ebp-4h]
  int v11; // [esp+18h] [ebp+4h]

  v2 = a1[3]; /*0x584038*/
  v3 = a1[2]; /*0x58403b*/
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
    HIWORD(v11) = v4 + a1[1]; /*0x58405e*/
    LOWORD(v11) = v5 + *a1; /*0x584063*/
    v6 = (__int16)v11 + (SHIWORD(v11) << 9); /*0x584071*/
    if ( v6 >= 0x40000 || (v7 = *(_DWORD **)(dword_87F924 + 4 * v6)) == 0 ) /*0x584081*/
    {
      dword_ABDC74 = v11; /*0x584087*/
      v7 = unk_ABDC50; /*0x58408c*/
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



// ==== 0x005840C0  ObjectClass::CheckMapReachability  this=ObjectClass  sig=csp ====
char __thiscall CheckMapReachability(ObjectClass *this, int a2, int a3, int a4, int j)
{
  ObjectClass *v5; // ebx
  int v6; // ebp
  int *v7; // edx
  int *v8; // edi
  int v9; // edi
  __int16 *v10; // esi
  int v11; // eax
  int health; // ecx
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
  _WORD *v26; // edi
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
  unsigned int v46; // [esp+1Ch] [ebp-3Ch]
  unsigned int v47; // [esp+1Ch] [ebp-3Ch]
  int v48; // [esp+20h] [ebp-38h]
  int v49; // [esp+24h] [ebp-34h]
  int *v50; // [esp+24h] [ebp-34h]
  int v52; // [esp+2Ch] [ebp-2Ch]
  unsigned __int16 v53; // [esp+2Ch] [ebp-2Ch]
  __int16 **v54; // [esp+30h] [ebp-28h]
  __int16 v55; // [esp+34h] [ebp-24h]
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
  v59 = (WordVector)&DynamicVectorClass<unsigned short>::`vftable'; /*0x5840f0*/
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
  v9 = a2; /*0x584155*/
  v10 = (__int16 *)(a2 + 36); /*0x58415b*/
  v11 = Cell::CoordToIndex((Cell *)v5, (__int16 *)(a2 + 36)); /*0x58415f*/
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
  v13 = *(_WORD *)(v5->estimatedHealth + 2 * (a3 + 4 * v11 + v11)); /*0x58418a*/
  g_MissionQueueFrame.briefing[8] = v9; /*0x58418e*/
  v53 = v13; /*0x584197*/
  v14 = (v6 - 1) & *(__int16 *)(v9 + 38); /*0x5841a5*/
  v15 = 1; /*0x5841a7*/
  *((_BYTE *)&g_MissionQueueFrame.briefing[2 * ((v6 - 1) & *v10) + 256] + v14) = 1; /*0x5841ac*/
  v58 = &dword_82A594[8 * *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)j + 132))(j) + 1460)]; /*0x5841ce*/
  while ( 1 ) /*0x5841e1*/
  {
    v46 = 0; /*0x5841e1*/
    v49 = v15 - 1; /*0x5841e9*/
    v57 = (Cell *)g_MissionQueueFrame.briefing[v15 + 7]; /*0x5841fb*/
    v54 = (__int16 **)(4 * (v15 - 1) + 11262568); /*0x5841ff*/
    for ( i = (__int16 *)Cell::GetNeighbourContent(v57, 0); ; i = (__int16 *)Cell::GetNeighbourContent(v57, v46) ) /*0x584203*/
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
      v22 = *(_WORD *)(v5->estimatedHealth + 2 * (a3 + 4 * v20 + v20)); /*0x584259*/
      if ( !(*(int (__stdcall **)(__int16 *, unsigned int, _DWORD, _DWORD, int))(*(_DWORD *)j + 428))( /*0x584286*/
              v17,
              v46,
              *((char *)v17 + 283),
              0,
              1)
        || v58[*((_DWORD *)v17 + 19)] != 1 )
      {
        if ( v22 == v53 ) /*0x584291*/
        {
          if ( !*((_BYTE *)&g_MissionQueueFrame.briefing[2 * v18 + 256] + v19) ) /*0x584293*/
          {
            *((_BYTE *)&g_MissionQueueFrame.briefing[2 * v18 + 256] + v19) = 1; /*0x5842ab*/
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
             && (*(unsigned __int8 (__thiscall **)(WordVector *, int, _DWORD))(*(_DWORD *)&v59 + 8))(&v59, v64 + v61, 0)) )
          {
            v25 = v63++; /*0x58432a*/
            *((_WORD *)Block + v25) = v22; /*0x584335*/
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
  v26 = (_WORD *)(a2 + 36); /*0x58436a*/
  v27 = (v48 - 1) & *(_WORD *)(a2 + 36); /*0x58436d*/
  v28 = (v48 - 1) & *(_WORD *)(a2 + 38); /*0x58436f*/
  v47 = 0; /*0x584377*/
  if ( v48 > 0 ) /*0x58437f*/
  {
    v50 = &g_MissionQueueFrame.briefing[256]; /*0x584385*/
    while ( 2 ) /*0x58438d*/
    {
      for ( j = 0; j < v48; ++j ) /*0x58438d*/
      {
        LOWORD(v56) = v27 + *v26; /*0x5843a6*/
        HIWORD(v56) = v26[1] + v28; /*0x5843b1*/
        a2 = v56; /*0x5843ba*/
        if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a2, 1) ) /*0x5843c1*/
        {
          v29 = (__int16)a2 + SHIWORD(a2) * (*((_DWORD *)this + 62) + this->q03D + 1); /*0x5843e7*/
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
          if ( v53 == *(_WORD *)(this->estimatedHealth + 2 * (a3 + 4 * v29 + v29)) && !*((_BYTE *)v50 + j) ) /*0x58441c*/
          {
            v59 = (WordVector)&VectorClass<unsigned short>::`vftable'; /*0x584522*/
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
  v32 = *((_DWORD *)&this->isAliveFlag + 6 * a3) + 36 * v53; /*0x58446e*/
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
  v59 = (WordVector)&VectorClass<unsigned short>::`vftable'; /*0x5844f5*/
  if ( Block ) /*0x5844ff*/
  {
    if ( v62 ) /*0x584507*/
      __3_YAXPAX_Z(Block); /*0x58450a*/
  }
  return 0; /*0x584512*/
}



// ==== 0x00584550  Radar::Update  this=Radar  sig=csp ====
void __thiscall Radar::Update(Radar *this, __int16 *a2)
{
  Radar *v2; // ebx
  int v3; // ebp
  int v4; // ecx
  int v5; // edi
  int v6; // edi
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v12; // esi
  int v13; // edi
  __int16 v14; // bp
  int v15; // edx
  int v16; // eax
  _WORD *v17; // ecx
  int v18; // ecx
  int v19; // ebp
  _DWORD *v20; // edi
  int v21; // eax
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  _DWORD *v26; // edi
  int v27; // edx
  int v28; // ebp
  int v29; // esi
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // edi
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // edi
  int v40; // ecx
  __int16 v41; // ax
  bool v42; // zf
  int v43; // esi
  int v44; // ecx
  int *v45; // ecx
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
  int v70; // ebp
  int v71; // edi
  Radar *v72; // ecx
  int v73; // eax
  int v74; // esi
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
  int v85; // [esp+20h] [ebp-94h]
  int v86; // [esp+20h] [ebp-94h]
  int v87; // [esp+20h] [ebp-94h]
  int v88; // [esp+20h] [ebp-94h]
  int v89; // [esp+24h] [ebp-90h]
  int v90; // [esp+24h] [ebp-90h]
  int v91; // [esp+24h] [ebp-90h]
  int v92; // [esp+24h] [ebp-90h]
  char *v93; // [esp+28h] [ebp-8Ch]
  int v94; // [esp+28h] [ebp-8Ch]
  char *Radar_field_0x60; // [esp+28h] [ebp-8Ch]
  _BYTE *v96; // [esp+28h] [ebp-8Ch]
  int i; // [esp+2Ch] [ebp-88h]
  _DWORD *v98; // [esp+30h] [ebp-84h]
  int v99; // [esp+30h] [ebp-84h]
  int v100; // [esp+30h] [ebp-84h]
  int v101; // [esp+30h] [ebp-84h]
  int v102; // [esp+34h] [ebp-80h]
  char *v103; // [esp+34h] [ebp-80h]
  int v104; // [esp+38h] [ebp-7Ch] BYREF
  int v105; // [esp+3Ch] [ebp-78h]
  int v106; // [esp+40h] [ebp-74h]
  int v107; // [esp+44h] [ebp-70h]
  __int16 v108[2]; // [esp+48h] [ebp-6Ch] BYREF
  WordVector v109; // [esp+4Ch] [ebp-68h] BYREF
  void *v110; // [esp+50h] [ebp-64h]
  int v111; // [esp+54h] [ebp-60h]
  char v112; // [esp+59h] [ebp-5Bh]
  int v113; // [esp+5Ch] [ebp-58h]
  int v114; // [esp+60h] [ebp-54h]
  Radar *v115; // [esp+64h] [ebp-50h]
  __int16 v116[2]; // [esp+68h] [ebp-4Ch] BYREF
  __int16 v117[2]; // [esp+6Ch] [ebp-48h] BYREF
  __int16 v118[2]; // [esp+70h] [ebp-44h] BYREF
  __int16 v119[2]; // [esp+74h] [ebp-40h] BYREF
  __int16 v120[2]; // [esp+78h] [ebp-3Ch] BYREF
  _DWORD *v121; // [esp+7Ch] [ebp-38h]
  VectorClass v122; // [esp+80h] [ebp-34h] BYREF
  int v123; // [esp+90h] [ebp-24h]
  int v124; // [esp+94h] [ebp-20h]
  int v125; // [esp+98h] [ebp-1Ch]
  int v126; // [esp+9Ch] [ebp-18h]
  int v127; // [esp+A0h] [ebp-14h]
  int v128; // [esp+A8h] [ebp-Ch]
  int v129; // [esp+B0h] [ebp-4h]

  v2 = this; /*0x584561*/
  v115 = this; /*0x584566*/
  if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, a2, 1) )
  {
    for ( i = 2; ; --i ) /*0x584577*/
    {
      v3 = i; /*0x58457f*/
      v4 = *a2; /*0x584594*/
      v106 = 1 << (i + 1); /*0x584599*/
      v5 = a2[1]; /*0x5845a0*/
      v107 = v106; /*0x5845a6*/
      v104 = v4 - v4 % v106; /*0x5845af*/
      v105 = v5 - v5 % v106; /*0x5845b9*/
      v6 = 0; /*0x5845bd*/
      WordVector::Constructor(&v109, 0, 0); /*0x5845c1*/
      v7 = *(_DWORD **)&v2->__pad_64[4 * i + 28]; /*0x5845c6*/
      v109 = (WordVector)&DynamicVectorClass<unsigned short>::`vftable'; /*0x5845cd*/
      v114 = 10; /*0x5845d5*/
      v113 = 0; /*0x5845dd*/
      v8 = v7[2]; /*0x5845e1*/
      v121 = v7; /*0x5845e4*/
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
      v103 = &v2->__pad_64[24 * i + 40]; /*0x584623*/
      v10 = v105; /*0x584627*/
      v89 = v105; /*0x58462d*/
      v11 = v104; /*0x584633*/
      if ( v105 < v105 + v107 ) /*0x584637*/
      {
        while ( 1 ) /*0x584640*/
        {
          v12 = v11; /*0x584640*/
          if ( v11 >= v9 + v11 ) /*0x584644*/
            goto LABEL_23; /*0x584644*/
          do /*0x584723*/
          {
            v118[0] = v12; /*0x584656*/
            v118[1] = v89; /*0x58465b*/
            v13 = *(_DWORD *)&v2->__pad_64[12] + 10 * CellToTileIndexMap((ObjectClass *)v2, v118); /*0x58466f*/
            v14 = *(_WORD *)(v13 + 2 * i); /*0x584672*/
            if ( v14 ) /*0x584679*/
            {
              v15 = v113; /*0x58467b*/
              v16 = v113 - 1; /*0x58467f*/
              if ( v113 - 1 >= 0 ) /*0x584684*/
              {
                v17 = (char *)v110 + 2 * v16; /*0x58468a*/
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
                if ( v113 < v111 ) /*0x5846a5*/
                  goto LABEL_20; /*0x5846a5*/
                if ( (v112 || !v111) /*0x5846c8*/
                  && v114 > 0
                  && (*(unsigned __int8 (__thiscall **)(WordVector *, int, _DWORD))(*(_DWORD *)&v109 + 8))(
                       &v109,
                       v114 + v111,
                       0) )
                {
                  v15 = v113; /*0x5846cf*/
LABEL_20:
                  v113 = v15 + 1; /*0x5846d3*/
                  *((_WORD *)v110 + v15) = v14; /*0x5846de*/
                }
              }
            }
            v120[0] = v12; /*0x5846e2*/
            *(_WORD *)(v13 + 2 * i) = 0; /*0x5846f7*/
            v120[1] = v89; /*0x5846fd*/
            ++v12; /*0x58470a*/
            *(_WORD *)(v13 + 6) = *(_WORD *)(*(_DWORD *)&v2->__pad_64[4] /*0x584712*/
                                           + 4 * CellToTileIndexMap((ObjectClass *)v2, v120)
                                           + 2);
            v9 = v106; /*0x584716*/
            v11 = v104; /*0x58471a*/
          }
          while ( v12 < v106 + v104 ); /*0x584723*/
          v10 = v105; /*0x584729*/
LABEL_23:
          if ( ++v89 >= v10 + v107 ) /*0x58473e*/
          {
            v3 = i; /*0x584744*/
            break; /*0x584744*/
          }
        }
      }
      v18 = v113 - 1; /*0x584748*/
      v90 = v113 - 1; /*0x58474f*/
      if ( v113 - 1 >= 0 ) /*0x584753*/
      {
        v93 = &v2->__pad_64[24 * v3 + 44]; /*0x584760*/
        while ( 1 ) /*0x584776*/
        {
          v19 = *((unsigned __int16 *)v110 + v18); /*0x584776*/
          v20 = (_DWORD *)(*(_DWORD *)v93 + 36 * v19); /*0x584782*/
          v98 = v20; /*0x584785*/
          v21 = v20[4] - 1; /*0x58478c*/
          v85 = v21; /*0x58478d*/
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
              if ( --v85 < 0 ) /*0x5847fe*/
                break; /*0x5847fe*/
              v21 = v85; /*0x584795*/
            }
          }
          (*(void (__thiscall **)(_DWORD *))(*v20 + 12))(v20); /*0x584804*/
          if ( --v90 < 0 ) /*0x584810*/
            break; /*0x584810*/
          v18 = v90; /*0x584766*/
        }
        v9 = v106; /*0x584816*/
        v11 = v104; /*0x58481a*/
        v10 = v105; /*0x58481e*/
      }
      v28 = v10; /*0x584826*/
      v86 = *(_DWORD *)&v2->__pad_64[4 * i + 16]; /*0x58482c*/
      if ( v10 < v10 + v107 ) /*0x584838*/
        break; /*0x584838*/
LABEL_73:
      *(_DWORD *)&v2->__pad_64[4 * i + 16] = v86; /*0x584ab8*/
      v43 = (int)v2->Radar_field_0x60 - 1; /*0x584ac7*/
      if ( v43 >= 0 ) /*0x584ac8*/
      {
        v44 = 16 * v43; /*0x584ad0*/
        v100 = 16 * v43; /*0x584ad4*/
        Radar_field_0x60 = (char *)v2->Radar_field_0x60; /*0x584ad8*/
        do /*0x584b53*/
        {
          v45 = (int *)(*(_DWORD *)&v2->__pad_34[32] + v44); /*0x584adc*/
          v46 = *(__int16 *)v45; /*0x584adf*/
          if ( v46 >= v11 && v46 < v9 + v11 && (v47 = *((__int16 *)v45 + 1), v47 >= v10) && v47 < v10 + v107 /*0x584b1e*/
            || (v48 = *((__int16 *)v45 + 2), v48 >= v11)
            && v48 < v9 + v11
            && (v49 = *((__int16 *)v45 + 3), v49 >= v10)
            && v49 < v10 + v107 )
          {
            if ( *((_BYTE *)v45 + 8) ) /*0x584b20*/
            {
              RadarClass::RenderBlips((RadarClass *)v2, v45, i); /*0x584b2e*/
              v9 = v106; /*0x584b33*/
              v11 = v104; /*0x584b37*/
              v10 = v105; /*0x584b3b*/
            }
          }
          v44 = v100 - 16; /*0x584b47*/
          v42 = Radar_field_0x60 == (char *)1; /*0x584b4a*/
          v100 -= 16; /*0x584b4b*/
          --Radar_field_0x60; /*0x584b4f*/
        }
        while ( !v42 ); /*0x584b53*/
      }
      v50 = 0; /*0x584b55*/
      v87 = 0; /*0x584b57*/
      do /*0x584c85*/
      {
        if ( *(int *)(v50 + *v121 + 16) > 0 ) /*0x584b6b*/
        {
          v101 = *(_DWORD *)(v50 + *v121 + 16); /*0x584b74*/
          v96 = (_BYTE *)(*(_DWORD *)(*v121 + v50 + 4) + 8); /*0x584b7b*/
          do /*0x584c6a*/
          {
            v51 = *v96; /*0x584b86*/
            v52 = (unsigned __int16)*((_DWORD *)v96 - 1); /*0x584b95*/
            v53 = (unsigned __int16)HIWORD(*((_DWORD *)v96 - 1)); /*0x584b9b*/
            v54 = *((_DWORD *)v103 + 1); /*0x584ba1*/
            LOBYTE(v128) = *v96; /*0x584ba4*/
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
              v60 = v128; /*0x584beb*/
              *(_DWORD *)(v59 + 8 * v58) = v53; /*0x584bf2*/
              *(_DWORD *)(v59 + 8 * v58 + 4) = v60; /*0x584bf5*/
            }
            LOBYTE(v129) = v51; /*0x584c01*/
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
              v67 = v129; /*0x584c48*/
              *(_DWORD *)(v66 + 8 * v65) = v52; /*0x584c4f*/
              *(_DWORD *)(v66 + 8 * v65 + 4) = v67; /*0x584c52*/
            }
            v42 = v101 == 1; /*0x584c61*/
            v96 += 12; /*0x584c62*/
            --v101; /*0x584c66*/
          }
          while ( !v42 ); /*0x584c6a*/
          v50 = v87; /*0x584c70*/
          v2 = v115; /*0x584c74*/
        }
        v50 += 24; /*0x584c78*/
        v87 = v50; /*0x584c81*/
      }
      while ( v50 < 6144 ); /*0x584c85*/
      v109 = (WordVector)&VectorClass<unsigned short>::`vftable'; /*0x584c93*/
      if ( v110 && v112 ) /*0x584ca3*/
      {
        __3_YAXPAX_Z(v110); /*0x584ca6*/
        v110 = 0; /*0x584cae*/
      }
      v112 = 0; /*0x584cb6*/
      v68 = i - 1 < 0; /*0x584cbb*/
      v111 = 0; /*0x584cbc*/
      if ( v68 ) /*0x584cc4*/
      {
        v69 = a2[1]; /*0x584ce3*/
        v70 = *a2 - *a2 % 8; /*0x584ce9*/
        v104 = v70; /*0x584cf2*/
        v71 = v69 - v69 % 8; /*0x584cfd*/
        v92 = v71; /*0x584cff*/
        v72 = (Radar *)(v71 + 8); /*0x584d03*/
        v115 = (Radar *)(v71 + 8); /*0x584d08*/
        if ( !__OFSUB__(v71, v71 + 8) ) /*0x584d0c*/
        {
          v73 = v70 + 8; /*0x584d12*/
          do /*0x584e25*/
          {
            v74 = v70; /*0x584d15*/
            v88 = v70; /*0x584d19*/
            if ( v70 < v73 ) /*0x584d1d*/
            {
              do /*0x584e14*/
              {
                v108[0] = v74; /*0x584d2c*/
                v108[1] = v71; /*0x584d31*/
                if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)v2, v108, 1) ) /*0x584d36*/
                {
                  v75 = (__int16)v74 /*0x584d5c*/
                      + (__int16)v71 * (*(_DWORD *)&v2->__pad_64[148] + *(_DWORD *)&v2->__pad_64[144] + 1);
                  if ( v75 >= 0 ) /*0x584d5e*/
                  {
                    v78 = *(_DWORD *)&v2->__pad_64[8]; /*0x584dc6*/
                    if ( v75 >= v78 ) /*0x584dcb*/
                      v75 = v78 - 1; /*0x584dcd*/
                  }
                  else
                  {
                    v75 = 0; /*0x584d60*/
                  }
                  v79 = &v2->__pad_64[44]; /*0x584dd6*/
                  v80 = 2; /*0x584ddc*/
                  v81 = (__int16 *)(*(_DWORD *)&v2->__pad_64[12] + 10 * v75); /*0x584de1*/
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
                  v74 = v88; /*0x584e06*/
                }
                ++v74; /*0x584e0a*/
                v73 = v70 + 8; /*0x584e0b*/
                v88 = v74; /*0x584e10*/
              }
              while ( v74 < v70 + 8 ); /*0x584e14*/
              v72 = v115; /*0x584e1a*/
            }
            v92 = ++v71; /*0x584e21*/
          }
          while ( v71 < (int)v72 ); /*0x584e25*/
        }
        MapClass::AllocArrays(&stru_87E790.__pad_D8[80]); /*0x584e30*/
        return; /*0x584e30*/
      }
    }
    while ( 1 ) /*0x584841*/
    {
      v29 = v11; /*0x584841*/
      if ( v11 < v9 + v11 ) /*0x584845*/
        break; /*0x584845*/
LABEL_72:
      if ( ++v28 >= v10 + v107 ) /*0x584ab2*/
        goto LABEL_73; /*0x584ab2*/
    }
    v94 = 36 * v86; /*0x584855*/
    while ( 1 )
    {
      v117[0] = v29; /*0x584862*/
      v117[1] = v28; /*0x584867*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)v2, v117, 1) )
      {
        v116[0] = v29; /*0x584880*/
        v116[1] = v28; /*0x584885*/
        v30 = Cell::CoordToIndex((Cell *)v2, v116); /*0x58488a*/
        if ( v30 >= 0 ) /*0x584891*/
        {
          v31 = *(_DWORD *)&v2->__pad_64[8]; /*0x584897*/
          if ( v30 >= v31 ) /*0x58489c*/
            v30 = v31 - 1; /*0x58489e*/
        }
        else
        {
          v30 = 0; /*0x584893*/
        }
        v32 = *(_DWORD *)&v2->__pad_64[12]; /*0x5848a1*/
        v119[0] = v29; /*0x5848a7*/
        v119[1] = v28; /*0x5848ac*/
        v91 = v32 + 10 * v30; /*0x5848bb*/
        v33 = Cell::CoordToIndex((Cell *)v2, v119); /*0x5848bf*/
        if ( v33 >= 0 ) /*0x5848c6*/
        {
          v34 = *(_DWORD *)&v2->__pad_64[8]; /*0x5848cc*/
          if ( v33 >= v34 ) /*0x5848d1*/
            v33 = v34 - 1; /*0x5848d3*/
        }
        else
        {
          v33 = 0; /*0x5848c8*/
        }
        v99 = *(unsigned __int8 *)(*(_DWORD *)&v2->__pad_64[4] + 4 * v33); /*0x5848e3*/
        if ( v99 != 7 && !*(_WORD *)(v91 + 2 * i) )
        {
          v108[0] = v29; /*0x58491b*/
          v108[1] = v28; /*0x584920*/
          Radar::ProcessSubzone(v2, v91, i, v86, &v104, v108); /*0x584925*/
          VectorClass::ConstructSubzone(&v122, 0, 0); /*0x584932*/
          v122.vtable0 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58493b*/
          v124 = 10; /*0x584943*/
          v123 = 0; /*0x58494e*/
          VectorClass::CleanupSubzone((int)&v122); /*0x584955*/
          LOWORD(v125) = 0; /*0x58495b*/
          v126 = 0; /*0x584963*/
          v127 = 0; /*0x58496a*/
          v35 = (int)&v2->__pad_64[24 * i + 40]; /*0x584971*/
          v36 = *(_DWORD *)&v2->__pad_64[24 * i + 48]; /*0x584975*/
          if ( *(_DWORD *)&v2->__pad_64[24 * i + 56] < v36 /*0x58499a*/
            || (v2->__pad_64[24 * i + 53] || !v36)
            && (v37 = *(_DWORD *)&v2->__pad_64[24 * i + 60], v37 > 0)
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v103 + 8))(v103, v37 + v36, 0) )
          {
            v38 = *(_DWORD *)&v2->__pad_64[24 * i + 56]; /*0x5849a5*/
            *(_DWORD *)&v2->__pad_64[24 * i + 56] = v38 + 1; /*0x5849ae*/
            v39 = *(_DWORD *)&v2->__pad_64[24 * i + 44] + 36 * v38; /*0x5849b8*/
            Radar::CopyDataArray((Radar *)v39, (int *)&v122); /*0x5849be*/
            *(_WORD *)(v39 + 24) = v125; /*0x5849cb*/
            *(_DWORD *)(v39 + 28) = v126; /*0x5849d6*/
            *(_DWORD *)(v39 + 32) = v127; /*0x5849e0*/
            v35 = (int)&v2->__pad_64[24 * i + 40]; /*0x5849e3*/
          }
          v122.vtable0 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x5849eb*/
          if ( v122.Items && v122.IsAllocated ) /*0x5849fd*/
          {
            __3_YAXPAX_Z(v122.Items); /*0x584a00*/
            v122.Items = 0; /*0x584a08*/
          }
          v40 = v94 + *(_DWORD *)(v35 + 4); /*0x584a1b*/
          v122.IsAllocated = 0; /*0x584a20*/
          v122.Capacity = 0; /*0x584a25*/
          v41 = i == 2 ? 0 : *(_WORD *)(v91 + 2 * (i + 1));
          *(_WORD *)(v40 + 24) = v41; /*0x584a3c*/
          *(_DWORD *)(v40 + 28) = v99; /*0x584a44*/
          *(_DWORD *)(v40 + 20) = 16; /*0x584a47*/
          *(_DWORD *)(v40 + 32) = (__int16)v29 / 4 + 130 * ((__int16)v28 / 4) + 131; /*0x584a78*/
          v42 = v94 == -36; /*0x584a80*/
          ++v86; /*0x584a83*/
          v94 += 36; /*0x584a87*/
          if ( v42 ) /*0x584a8b*/
            break; /*0x584a8b*/
        }
      }
      v9 = v106; /*0x584a91*/
      v11 = v104; /*0x584a95*/
      if ( ++v29 >= v106 + v104 ) /*0x584a9f*/
      {
        v10 = v105; /*0x584aa5*/
        goto LABEL_72; /*0x584aa5*/
      }
    }
    v76 = 2; /*0x584d64*/
    v77 = &v2->__pad_64[88]; /*0x584d69*/
    do /*0x584d84*/
    {
      (*(void (__thiscall **)(char *))(*(_DWORD *)v77 + 12))(v77); /*0x584d73*/
      Subzone::BuildGraph((Subzone *)v2, v76--); /*0x584d79*/
      v77 -= 24; /*0x584d7f*/
    }
    while ( v76 >= 0 ); /*0x584d84*/
    MapClass::AllocArrays(&stru_87E790.__pad_D8[80]); /*0x584d8b*/
    v109 = (WordVector)&VectorClass<unsigned short>::`vftable'; /*0x584d94*/
    if ( v110 && v112 ) /*0x584daa*/
      __3_YAXPAX_Z(v110); /*0x584db1*/
  }
}



// ==== 0x00584E50  ObjectClass::UpdateCellConnectivityGraph  this=ObjectClass  sig=csp ====
int __thiscall UpdateCellConnectivityGraph(ObjectClass *this, int *p_isAliveFlag)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  Cell *v6; // eax
  Cell *v7; // edi
  char v8; // al
  int v9; // ecx
  int v10; // edi
  _WORD *v11; // ebx
  _WORD *v12; // edi
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  int estimatedHealth; // edx
  int v17; // eax
  int v18; // edx
  Vector8 *v19; // ebp
  int v20; // eax
  int *v21; // ebp
  Vector8 *v22; // edi
  int v23; // eax
  int v24; // edi
  int v25; // edx
  int v26; // eax
  Vector8 *v27; // ebp
  int v28; // eax
  Vector8 *v29; // ebp
  int v30; // eax
  int v31; // eax
  int health; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // ebp
  int v38; // edx
  _DWORD *v39; // edi
  int v40; // eax
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // eax
  _DWORD *v45; // edi
  int result; // eax
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  __int16 v50[2]; // [esp+10h] [ebp-4Ch] BYREF
  __int16 v51[2]; // [esp+14h] [ebp-48h] BYREF
  int v52; // [esp+18h] [ebp-44h]
  __int16 v53[2]; // [esp+1Ch] [ebp-40h] BYREF
  __int16 v54[2]; // [esp+20h] [ebp-3Ch] BYREF
  __int16 v55[2]; // [esp+24h] [ebp-38h] BYREF
  __int16 v56[2]; // [esp+28h] [ebp-34h] BYREF
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

  v3 = *p_isAliveFlag; /*0x584e5d*/
  v4 = p_isAliveFlag[1]; /*0x584e5f*/
  *(_DWORD *)v50 = v3; /*0x584e62*/
  *(_DWORD *)v51 = v4; /*0x584e66*/
  v5 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x584e75*/
  if ( v5 < 0x40000 && (v6 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v5)) != 0 ) /*0x584e8b*/
  {
    v7 = v6; /*0x584e8d*/
  }
  else
  {
    g_MissionQueueFrame.briefing[139] = v3; /*0x584e91*/
    v7 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x584e97*/
  }
  *(_DWORD *)v53 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x584ea3*/
  *(_DWORD *)v55 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x584ea7*/
  *(_DWORD *)v54 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x584eab*/
  *(_DWORD *)v56 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x584eaf*/
  if ( (unsigned __int8)Cell::IsInRange(v7) || (unsigned __int8)Cell::IsInRange2(v7) ) /*0x584ebe*/
  {
    v8 = Cell::IsInRange(v7); /*0x584ecd*/
    v9 = g_Cell_BuildabilityLUT; /*0x584ed2*/
    if ( !v8 ) /*0x584edd*/
      v9 = g_TerrainBridgeIndex; /*0x584edf*/
    v10 = dword_82A944[v7->Cell_field_0x38 - v9]; /*0x584eeb*/
    v11 = (_WORD *)(4 * (v10 & 7) + 9041544); /*0x584ef7*/
    *(_DWORD *)v53 = *CellStruct::Add((CellStruct *)v50, &p_isAliveFlag, v11); /*0x584f19*/
    v12 = (_WORD *)(4 * (((_BYTE)v10 - 4) & 7) + 9041544); /*0x584f1d*/
    *(_DWORD *)v55 = *CellStruct::Add((CellStruct *)v50, &p_isAliveFlag, v12); /*0x584f2e*/
    *(_DWORD *)v54 = *CellStruct::Add((CellStruct *)v51, &p_isAliveFlag, v11); /*0x584f4c*/
    *(_DWORD *)v56 = *CellStruct::Add((CellStruct *)v51, &p_isAliveFlag, v12); /*0x584f57*/
  }
  v13 = 0; /*0x584f61*/
  p_isAliveFlag = (int *)&this->isAliveFlag; /*0x584f63*/
  do /*0x58519f*/
  {
    v14 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v50) + 2 * v13); /*0x584f7e*/
    v15 = CellToTileIndexMap(this, v51); /*0x584f87*/
    estimatedHealth = this->estimatedHealth; /*0x584f8c*/
    LOBYTE(v58) = 0; /*0x584f92*/
    v17 = *(__int16 *)(estimatedHealth + 10 * v15 + 2 * v13); /*0x584f9e*/
    v18 = *p_isAliveFlag; /*0x584fa2*/
    v52 = v17; /*0x584fa4*/
    v57 = v17; /*0x584fa8*/
    v19 = (Vector8 *)(v18 + 36 * v14); /*0x584fb3*/
    v20 = (*(int (__thiscall **)(Vector8 *, int *))(*(_DWORD *)v19 + 16))(v19, &v57); /*0x584fbc*/
    if ( v20 != -1 ) /*0x584fc2*/
      Vector8::EraseAt(v19, v20); /*0x584fc7*/
    v21 = p_isAliveFlag; /*0x584fd0*/
    v59 = v14; /*0x584fd4*/
    LOBYTE(v60) = 0; /*0x584fd8*/
    v22 = (Vector8 *)(*p_isAliveFlag + 36 * v52); /*0x584fe3*/
    v23 = (*(int (__thiscall **)(Vector8 *, int *))(*(_DWORD *)v22 + 16))(v22, &v59); /*0x584fef*/
    if ( v23 != -1 ) /*0x584ff5*/
      Vector8::EraseAt(v22, v23); /*0x584ffa*/
    v24 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v53) + 2 * v13); /*0x58501b*/
    v25 = 5 * CellToTileIndexMap(this, v54); /*0x585024*/
    v26 = this->estimatedHealth; /*0x585027*/
    LOBYTE(v62) = 0; /*0x58502d*/
    v27 = (Vector8 *)(*v21 + 36 * v24); /*0x58503c*/
    v52 = *(__int16 *)(v26 + 2 * v25 + 2 * v13); /*0x585043*/
    v61 = v52; /*0x585047*/
    v28 = (*(int (__thiscall **)(Vector8 *, int *))(*(_DWORD *)v27 + 16))(v27, &v61); /*0x585051*/
    if ( v28 != -1 ) /*0x585057*/
      Vector8::EraseAt(v27, v28); /*0x58505c*/
    v63 = v24; /*0x585065*/
    LOBYTE(v64) = 0; /*0x585069*/
    v29 = (Vector8 *)(*p_isAliveFlag + 36 * v52); /*0x58507c*/
    v30 = (*(int (__thiscall **)(Vector8 *, int *))(*(_DWORD *)v29 + 16))(v29, &v63); /*0x585084*/
    if ( v30 != -1 ) /*0x58508a*/
      Vector8::EraseAt(v29, v30); /*0x58508f*/
    v31 = Cell::CoordToIndex((Cell *)this, v55); /*0x58509b*/
    if ( v31 >= 0 ) /*0x5850a2*/
    {
      health = this->health; /*0x5850a8*/
      if ( v31 >= health ) /*0x5850ad*/
        v31 = health - 1; /*0x5850af*/
    }
    else
    {
      v31 = 0; /*0x5850a4*/
    }
    v33 = *(__int16 *)(this->estimatedHealth + 2 * (v13 + 4 * v31 + v31)); /*0x5850bf*/
    v52 = v33; /*0x5850c5*/
    v34 = Cell::CoordToIndex((Cell *)this, v56); /*0x5850c9*/
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
    v36 = this->estimatedHealth; /*0x5850e0*/
    LOBYTE(v66) = 0; /*0x5850ec*/
    v37 = *(__int16 *)(v36 + 2 * (v13 + 4 * v34 + v34)); /*0x5850f1*/
    v38 = *p_isAliveFlag; /*0x5850f5*/
    v65 = v37; /*0x5850fe*/
    v39 = (_DWORD *)(v38 + 36 * v33); /*0x585102*/
    v40 = (*(int (__thiscall **)(_DWORD *, int *))(*v39 + 16))(v39, &v65); /*0x58510a*/
    if ( v40 != -1 ) /*0x585110*/
    {
      v41 = v39[4]; /*0x585112*/
      if ( v40 < v41 ) /*0x585117*/
      {
        v42 = v41 - 1; /*0x585119*/
        for ( v39[4] = v42; v40 < v39[4]; *(_DWORD *)(v43 + 8 * v40 - 4) = *(_DWORD *)(v43 + 8 * v40 + 4) ) /*0x58511f*/
        {
          v43 = v39[1]; /*0x585121*/
          ++v40; /*0x585124*/
          *(_DWORD *)(v43 + 8 * v40 - 8) = *(_DWORD *)(v43 + 8 * v40); /*0x585128*/
        }
      }
    }
    v67 = v52; /*0x585143*/
    v44 = *p_isAliveFlag; /*0x58514b*/
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
    p_isAliveFlag += 6; /*0x58519b*/
  }
  while ( v13 < 3 ); /*0x58519f*/
  return result; /*0x5851a5*/
}



// ==== 0x005851B0  ObjectClass::BuildTileAdjacencyTable  this=ObjectClass  sig=csp ====
int __thiscall BuildTileAdjacencyTable(ObjectClass *this, int *a2)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  Cell *v6; // eax
  Cell *v7; // edi
  char v8; // al
  int v9; // ecx
  int v10; // edi
  _WORD *v11; // ebx
  _WORD *v12; // edi
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
  __int16 v59[2]; // [esp+34h] [ebp-4Ch] BYREF
  __int16 v60[2]; // [esp+38h] [ebp-48h] BYREF
  __int16 v61[4]; // [esp+3Ch] [ebp-44h] BYREF
  __int16 v62[2]; // [esp+44h] [ebp-3Ch] BYREF
  __int16 v63[2]; // [esp+48h] [ebp-38h] BYREF
  __int16 v64[4]; // [esp+4Ch] [ebp-34h] BYREF
  int v65; // [esp+54h] [ebp-2Ch]
  int v66; // [esp+5Ch] [ebp-24h]
  int v67; // [esp+64h] [ebp-1Ch]
  int v68; // [esp+6Ch] [ebp-14h]
  int v69; // [esp+74h] [ebp-Ch]
  int v70; // [esp+7Ch] [ebp-4h]

  v3 = *a2; /*0x5851bd*/
  v4 = a2[1]; /*0x5851bf*/
  *(_DWORD *)v59 = v3; /*0x5851c2*/
  *(_DWORD *)v60 = v4; /*0x5851c6*/
  v5 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x5851d5*/
  if ( v5 < 0x40000 && (v6 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v5)) != 0 ) /*0x5851eb*/
  {
    v7 = v6; /*0x5851ed*/
  }
  else
  {
    g_MissionQueueFrame.briefing[139] = v3; /*0x5851f1*/
    v7 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x5851f7*/
  }
  *(_DWORD *)v61 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x585203*/
  if ( (unsigned __int8)Cell::IsInRange(v7) || (unsigned __int8)Cell::IsInRange2(v7) ) /*0x585212*/
  {
    v8 = Cell::IsInRange(v7); /*0x585221*/
    v9 = g_Cell_BuildabilityLUT; /*0x585226*/
    if ( !v8 ) /*0x585231*/
      v9 = g_TerrainBridgeIndex; /*0x585233*/
    v10 = dword_82A944[v7->Cell_field_0x38 - v9]; /*0x58523f*/
    v11 = (_WORD *)(4 * (v10 & 7) + 9041544); /*0x58524b*/
    *(_DWORD *)v62 = *CellStruct::Add((CellStruct *)v59, &a2, v11); /*0x585265*/
    v12 = (_WORD *)(4 * (((_BYTE)v10 - 4) & 7) + 9041544); /*0x585271*/
    *(_DWORD *)v64 = *CellStruct::Add((CellStruct *)v59, &a2, v12); /*0x58528b*/
    *(_DWORD *)v63 = *CellStruct::Add((CellStruct *)v60, &a2, v11); /*0x5852a0*/
    *(_DWORD *)v61 = *CellStruct::Add((CellStruct *)v60, &a2, v12); /*0x5852ab*/
  }
  LOBYTE(v65) = 0; /*0x5852b5*/
  LOBYTE(v66) = 0; /*0x5852ba*/
  LOBYTE(v67) = 0; /*0x5852bf*/
  LOBYTE(v68) = 0; /*0x5852c4*/
  LOBYTE(v69) = 0; /*0x5852c9*/
  LOBYTE(v70) = 0; /*0x5852ce*/
  v13 = 0; /*0x5852d3*/
  p_isAliveFlag = &this->isAliveFlag; /*0x5852d5*/
  do /*0x585581*/
  {
    v14 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v59) + v13); /*0x5852f5*/
    v15 = (int *)*(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v60) + v13); /*0x58530a*/
    a2 = v15; /*0x585312*/
    v16 = *(_DWORD *)p_isAliveFlag + 36 * v14; /*0x585318*/
    v17 = *(_DWORD *)(v16 + 8); /*0x58531b*/
    if ( *(_DWORD *)(v16 + 16) < v17 /*0x58534c*/
      || (*(_BYTE *)(v16 + 13) || !v17)
      && (v18 = *(_DWORD *)(v16 + 20), v18 > 0)
      && (v19 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 8))(v16, v17 + v18, 0), v15 = a2, v19) )
    {
      v20 = *(_DWORD *)(v16 + 16); /*0x58534e*/
      *(_DWORD *)(v16 + 16) = v20 + 1; /*0x585354*/
      v21 = *(_DWORD *)(v16 + 4); /*0x585357*/
      v22 = v65; /*0x58535a*/
      *(_DWORD *)(v21 + 8 * v20) = v15; /*0x58535e*/
      *(_DWORD *)(v21 + 8 * v20 + 4) = v22; /*0x585361*/
    }
    v23 = *(_DWORD *)p_isAliveFlag + 36 * (_DWORD)v15; /*0x585372*/
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
    v29 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v62) + v13); /*0x5853d2*/
    v30 = (int *)*(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v63) + v13); /*0x5853e7*/
    a2 = v30; /*0x5853ef*/
    v31 = *(_DWORD *)p_isAliveFlag + 36 * v29; /*0x5853f5*/
    v32 = *(_DWORD *)(v31 + 8); /*0x5853f8*/
    if ( *(_DWORD *)(v31 + 16) < v32 /*0x585429*/
      || (*(_BYTE *)(v31 + 13) || !v32)
      && (v33 = *(_DWORD *)(v31 + 20), v33 > 0)
      && (v34 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v31 + 8))(v31, v32 + v33, 0), v30 = a2, v34) )
    {
      v35 = *(_DWORD *)(v31 + 16); /*0x58542b*/
      *(_DWORD *)(v31 + 16) = v35 + 1; /*0x585431*/
      v36 = *(_DWORD *)(v31 + 4); /*0x585434*/
      v37 = v67; /*0x585437*/
      *(_DWORD *)(v36 + 8 * v35) = v30; /*0x58543b*/
      *(_DWORD *)(v36 + 8 * v35 + 4) = v37; /*0x58543e*/
    }
    v38 = *(_DWORD *)p_isAliveFlag + 36 * (_DWORD)v30; /*0x58544f*/
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
    v44 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v64) + v13); /*0x5854af*/
    v45 = (int *)*(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v61) + v13); /*0x5854c4*/
    a2 = v45; /*0x5854cc*/
    v46 = *(_DWORD *)p_isAliveFlag + 36 * v44; /*0x5854d2*/
    v47 = *(_DWORD *)(v46 + 8); /*0x5854d5*/
    if ( *(_DWORD *)(v46 + 16) < v47 /*0x585506*/
      || (*(_BYTE *)(v46 + 13) || !v47)
      && (v48 = *(_DWORD *)(v46 + 20), v48 > 0)
      && (v49 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v46 + 8))(v46, v47 + v48, 0), v45 = a2, v49) )
    {
      v50 = *(_DWORD *)(v46 + 16); /*0x585508*/
      *(_DWORD *)(v46 + 16) = v50 + 1; /*0x58550e*/
      v51 = *(_DWORD *)(v46 + 4); /*0x585511*/
      v52 = v69; /*0x585514*/
      *(_DWORD *)(v51 + 8 * v50) = v45; /*0x585518*/
      *(_DWORD *)(v51 + 8 * v50 + 4) = v52; /*0x58551b*/
    }
    v53 = *(_DWORD *)p_isAliveFlag + 36 * (_DWORD)v45; /*0x58552c*/
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
    p_isAliveFlag += 24; /*0x58557d*/
  }
  while ( v13 < 6 ); /*0x585581*/
  return result; /*0x585587*/
}



// ==== 0x005855A0  LayerClass::AssignCellOwnership  this=LayerClass  sig=csp ====
int __thiscall LayerClass::AssignCellOwnership(LayerClass *this)
{
  LayerClass *v1; // esi
  int v2; // eax
  int result; // eax
  int i; // ebp
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  ObjectClass *v8; // esi
  int v9; // eax
  int v10; // [esp+8h] [ebp-8h]

  v1 = this; /*0x5855a5*/
  v2 = *((_DWORD *)this + 61); /*0x5855ab*/
  *((_DWORD *)this + 67) = 1; /*0x5855b1*/
  *((_DWORD *)this + 68) = v2; /*0x5855bb*/
  *((_DWORD *)this + 69) = v2 - 1; /*0x5855c4*/
  *((_DWORD *)this + 70) = (v2 << 11) + *((_DWORD *)this + 79) + 4; /*0x5855d9*/
  result = LayerClass::CellIteratorNext(this); /*0x5855df*/
  for ( i = result; result; i = result ) /*0x5855e8*/
  {
    v5 = *(_DWORD *)(i + 68); /*0x5855f0*/
    if ( v5 != -1 ) /*0x5855f6*/
    {
      if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v5) + 680) ) /*0x585605*/
      {
        v6 = -1; /*0x585618*/
        v7 = 0; /*0x58561b*/
        v10 = 0x7FFFFFFF; /*0x58561d*/
        if ( stru_A8EB00.ObjectTypeClass[20] > 0 ) /*0x585627*/
        {
          do /*0x585676*/
          {
            v8 = *(ObjectClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v7); /*0x58562f*/
            v9 = ObjectClass::DistanceTo(v8, i); /*0x585634*/
            if ( v8->isAliveFlag && v8->isOnMap && *(_BYTE *)(*(_DWORD *)(v8[3].? + 52) + 423) && (v6 == -1 || v9 < v10) ) /*0x585666*/
            {
              v10 = v9; /*0x585668*/
              v6 = v7; /*0x58566c*/
            }
            ++v7; /*0x585673*/
          }
          while ( v7 < stru_A8EB00.ObjectTypeClass[20] ); /*0x585676*/
          if ( v6 != -1 ) /*0x58567b*/
            *(_DWORD *)(i + 80) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * v6) + 540) /*0x58568e*/
                                            + 48);
          v1 = this; /*0x585691*/
        }
      }
    }
    result = LayerClass::CellIteratorNext(v1); /*0x585697*/
  }
  return result; /*0x5856a8*/
}



// ==== 0x005856B0  MapClass::InitializeTileData  this=MapClass  sig=csp ====
int __thiscall MapClass::InitializeTileData(MapClass *this, int a2)
{
  int v3; // esi
  int v4; // ebp
  TileData *v5; // ebx
  int v6; // esi
  int v7; // ebp
  char *TileDataEntry; // eax
  int v9; // eax
  int v10; // edx
  char j; // bl
  int k; // eax
  Cell *m; // eax
  int v14; // edx
  int result; // eax
  int v16; // edx
  int n; // esi
  char v18; // [esp+13h] [ebp-5h]
  int i; // [esp+14h] [ebp-4h]

  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x5856c0*/
  v18 = 0; /*0x5856ca*/
  if ( !g_MissionQueueFrame.localVariables[163] ) /*0x5856d1*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth; /*0x5856d9*/
    v4 = __2_YAPAXI_Z(80 * g_MapCellWidth * g_MapCellWidth); /*0x5856e8*/
    if ( v4 ) /*0x5856ef*/
    {
      v5 = (TileData *)v4; /*0x5856f4*/
      if ( v3 - 1 >= 0 ) /*0x5856f8*/
      {
        do /*0x585708*/
        {
          TileData::Constructor(v5); /*0x5856ff*/
          v5 += 20; /*0x585704*/
          --v3; /*0x585707*/
        }
        while ( v3 ); /*0x585708*/
      }
      g_MissionQueueFrame.localVariables[163] = v4; /*0x58570a*/
    }
    else
    {
      g_MissionQueueFrame.localVariables[163] = 0; /*0x585712*/
    }
    v18 = 1; /*0x58571c*/
  }
  v6 = 0; /*0x585726*/
  v7 = g_MapCellWidth * g_MapCellWidth; /*0x58572a*/
  for ( i = g_MapCellWidth * g_MapCellWidth; v6 < v7; *((_DWORD *)TileDataEntry + 16) = -1 ) /*0x585733*/
  {
    GetTileDataEntry(v6)[74] = 1; /*0x585741*/
    TileDataEntry = GetTileDataEntry(v6++); /*0x585745*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x58575d*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x58576a*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585773*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x585782*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  v9 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x585787*/
  for ( j = 1; v9; v9 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) ) /*0x585792*/
  {
    if ( !j ) /*0x585796*/
      break; /*0x585796*/
    j = RecursiveCellClassNeighbourUpdate(this, v10, v9, 0, 0); /*0x5857a7*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x5857bd*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x5857c2*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x5857ce*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x5857dd*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5857e9*/
        k;
        k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x5857ed*/
      break; /*0x5857ed*/
    MapClass::BuildTileConnectivityGraph(this, k, 0, 0); /*0x5857f4*/
  }
  FloodFillConnectedCells((ObjectClass *)this, a2, 1); /*0x58580f*/
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x58581f*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x585824*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585830*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x58583f*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( m = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58584c*/
        m;
        m = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x585850*/
      break; /*0x585850*/
    j = GenerateMapClassCliffTransitions((Cell *)this, v14, m, 1, 0, 0); /*0x585862*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x585878*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x58587d*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585889*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x585898*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5858a4*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x5858a8*/
      break; /*0x5858a8*/
    j = GenerateMapClassCliffTransitions((Cell *)this, v16, (Cell *)result, 2, 0, 0); /*0x5858bb*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x5858cc*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1418] ) /*0x5858d4*/
  {
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87F5F0.__pad_E12[1418] + 32))( /*0x5858d9*/
               *(_DWORD *)&stru_87F5F0.__pad_E12[1418],
               1);
    *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x5858dc*/
  }
  for ( n = 0; n < i; *(_BYTE *)(result + 74) = 1 ) /*0x5858ea*/
    result = (int)GetTileDataEntry(n++); /*0x5858ee*/
  if ( v18 ) /*0x585902*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.localVariables[163]); /*0x58590a*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x585912*/
  }
  LOBYTE(result) = j; /*0x58591a*/
  return result; /*0x585918*/
}



// ==== 0x00585930  ObjectClass::FloodFillConnectedCells  this=ObjectClass  sig=csp ====
void __thiscall FloodFillConnectedCells(ObjectClass *this, int a2, int a3)
{
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
  *(_DWORD *)v41.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x585958*/
  v42 = 10; /*0x58595c*/
  *(_DWORD *)v41.__tail_10 = 0; /*0x585960*/
  Buffer::Cleanup(&v41); /*0x585964*/
  v42 = 100; /*0x58596f*/
  VectorClass::CellConstructor((VectorClass *)&v39, 0, 0); /*0x585977*/
  *(_DWORD *)v39.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x585980*/
  v40 = 10; /*0x585984*/
  *(_DWORD *)v39.__tail_10 = 0; /*0x585988*/
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
  v7 = (Tactical *)a2; /*0x5859c2*/
  if ( *(int *)v39.__tail_10 < v39.m_8 /*0x5859e4*/
    || (BYTE1(v39.m_C) || !v39.m_8)
    && v4 > 0
    && (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v39.__pad_0 + 8))(
         &v39,
         v4 + v39.m_8,
         0) )
  {
    v8 = (*(_DWORD *)v39.__tail_10)++; /*0x5859f3*/
    *(_DWORD *)(*(_DWORD *)&v39.m_1[3] + 4 * v8) = *(_DWORD *)v7->__pad_0; /*0x5859fc*/
  }
  if ( *(int *)v41.__tail_10 < v41.m_8 /*0x585a29*/
    || (BYTE1(v41.m_C) || !v41.m_8)
    && v42 > 0
    && (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v41.__pad_0 + 8))(
         &v41,
         v42 + v41.m_8,
         0) )
  {
    v9 = (*(_DWORD *)v41.__tail_10)++; /*0x585a38*/
    *(_DWORD *)(*(_DWORD *)&v41.m_1[3] + 4 * v9) = *(_DWORD *)v7->__pad_0; /*0x585a41*/
  }
  v10 = *(__int16 *)v7->__pad_0; /*0x585a44*/
  v11 = *(__int16 *)v7->Tactical_field_0x2; /*0x585a47*/
  v12 = this->q03D; /*0x585a4b*/
  if ( v10 + v11 > v12 && v10 - v11 < v12 && v11 - v10 < v12 && v10 + v11 <= v12 + 2 * *((_DWORD *)this + 62) ) /*0x585a71*/
    Tactical::GetCellData(v7)[73] = 1; /*0x585a7a*/
  v13 = *(__int16 *)v7->__pad_0 + (*(__int16 *)v7->Tactical_field_0x2 << 9); /*0x585a88*/
  if ( v13 >= 0x40000 || (v14 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v13)) == 0 ) /*0x585a9e*/
  {
    v14 = &g_MissionQueueFrame.briefing[130]; /*0x585aa2*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v7->__pad_0; /*0x585aa7*/
  }
  v15 = *(_DWORD *)v39.__tail_10; /*0x585ab4*/
  v36 = *((char *)v14 + 283); /*0x585ab8*/
  for ( i = *(_DWORD *)v39.__tail_10; *(_DWORD *)v39.__tail_10; i = *(_DWORD *)v39.__tail_10 ) /*0x585ac0*/
  {
    v17 = *(_DWORD *)&v39.m_1[3]; /*0x585ac6*/
    v18 = i - 1; /*0x585aca*/
    k = *(_DWORD *)(*(_DWORD *)&v39.m_1[3] + 4 * v18); /*0x585ad0*/
    if ( v18 < v15 ) /*0x585ad4*/
    {
      *(_DWORD *)v39.__tail_10 = v15 - 1; /*0x585ad9*/
      if ( v18 < v15 - 1 ) /*0x585add*/
      {
        while ( 1 ) /*0x585ae9*/
        {
          *(_DWORD *)(v17 + 4 * v18) = *(_DWORD *)(v17 + 4 * v18 + 4); /*0x585ae9*/
          if ( ++v18 >= *(int *)v39.__tail_10 ) /*0x585af3*/
            break; /*0x585af3*/
          v17 = *(_DWORD *)&v39.m_1[3]; /*0x585ae1*/
        }
      }
    }
    for ( j = 0; j < 8; ++j ) /*0x585af5*/
    {
      v20 = CellStruct::Add((CellStruct *)&k, &v38, (_WORD *)(4 * (j & 7) + 9041544)); /*0x585b0d*/
      v21 = this->q03D; /*0x585b14*/
      v35 = *v20; /*0x585b1a*/
      a2 = v35; /*0x585b1e*/
      v22 = SHIWORD(v35) + (__int16)v35; /*0x585b2a*/
      if ( v22 > v21 /*0x585b56*/
        && (__int16)v35 - SHIWORD(v35) < v21
        && SHIWORD(v35) - (__int16)v35 < v21
        && v22 <= v21 + 2 * *((_DWORD *)this + 62) )
      {
        CellData = Tactical::GetCellData((Tactical *)&a2); /*0x585b69*/
        v24 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x585b76*/
        if ( v24 < 0x40000 && (v25 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) != 0 ) /*0x585b8c*/
        {
          v26 = v25; /*0x585b8e*/
        }
        else
        {
          g_MissionQueueFrame.briefing[139] = a2; /*0x585b92*/
          v26 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x585b98*/
        }
        if ( !CellData[73] ) /*0x585b9d*/
        {
          if ( (_BYTE)a3 ) /*0x585bae*/
          {
            if ( !(unsigned __int8)Cell::IsGroundTypeRange(v26) ) /*0x585bb0*/
              continue; /*0x585bb7*/
          }
          else if ( v26->Cell_field_0x11B[0] != v36 || !(unsigned __int8)Cell::IsEmpty(v26) ) /*0x585bc8*/
          {
            continue; /*0x585bcf*/
          }
          if ( *(int *)v39.__tail_10 < v39.m_8 /*0x585bfe*/
            || (BYTE1(v39.m_C) || !v39.m_8)
            && v40 > 0
            && (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v39.__pad_0 + 8))(
                 &v39,
                 v40 + v39.m_8,
                 0) )
          {
            v27 = (*(_DWORD *)v39.__tail_10)++; /*0x585c0d*/
            *(_DWORD *)(*(_DWORD *)&v39.m_1[3] + 4 * v27) = a2; /*0x585c18*/
          }
          TileVector::PushBack((TileVector *)&v41, &a2); /*0x585c24*/
          CellData[73] = 1; /*0x585c29*/
        }
      }
    }
    v15 = *(_DWORD *)v39.__tail_10; /*0x585c37*/
  }
  v28 = 0; /*0x585c45*/
  for ( k = 0; v28 < *(int *)v41.__tail_10; k = v28 ) /*0x585c51*/
  {
    v29 = *(_DWORD *)(*(_DWORD *)&v41.m_1[3] + 4 * v28); /*0x585c57*/
    v36 = v29; /*0x585c5a*/
    v30 = SHIWORD(v29) - 1; /*0x585c63*/
    v31 = SHIWORD(v29) + 2; /*0x585c66*/
    if ( v30 < v31 ) /*0x585c6b*/
    {
      v32 = (__int16)v29 + 2; /*0x585c73*/
      v36 = (__int16)v29 - 1; /*0x585c76*/
      do /*0x585cbd*/
      {
        for ( m = v36; m < v32; ++m ) /*0x585c80*/
        {
          LOWORD(a3) = m; /*0x585c8b*/
          HIWORD(a3) = v30; /*0x585c90*/
          if ( (unsigned __int8)LayerClass::CoordinatesLegal(v37, (__int16 *)&a3) ) /*0x585c95*/
          {
            LOWORD(a2) = m; /*0x585ca2*/
            HIWORD(a2) = v30; /*0x585ca7*/
            Tactical::GetCellData((Tactical *)&a2)[74] = 1; /*0x585cb1*/
          }
        }
        ++v30; /*0x585cba*/
      }
      while ( v30 < v31 ); /*0x585cbd*/
      v28 = k; /*0x585cbf*/
    }
    ++v28; /*0x585cc7*/
  }
  *(_DWORD *)v39.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x585cd9*/
  Buffer::Cleanup(&v39); /*0x585cdd*/
  *(_DWORD *)v41.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x585ce6*/
  Buffer::Cleanup(&v41); /*0x585cea*/
}



// ==== 0x00585D00  MapClass::LoadTerrainData  this=MapClass  sig=csp ====
int __thiscall MapClass::LoadTerrainData(MapClass *this, int a2)
{
  int v2; // esi
  ObjectClass *v3; // ebp
  int v4; // edi
  int v5; // ebx
  TileData *v6; // esi
  int v7; // ebp
  char *TileDataEntry; // eax
  int i; // eax
  int result; // eax
  Cell *j; // esi
  int k; // esi
  char v13; // [esp+12h] [ebp-6h]
  char v14; // [esp+13h] [ebp-5h]

  v2 = 0; /*0x585d12*/
  v3 = (ObjectClass *)this; /*0x585d14*/
  v4 = g_MapCellWidth * g_MapCellWidth; /*0x585d16*/
  v13 = 1; /*0x585d1f*/
  v14 = 0; /*0x585d24*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x585d29*/
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
    v5 = __2_YAPAXI_Z(80 * v4); /*0x585d37*/
    if ( v5 ) /*0x585d3e*/
    {
      v6 = (TileData *)v5; /*0x585d43*/
      if ( v4 - 1 >= 0 ) /*0x585d47*/
      {
        v7 = v4; /*0x585d49*/
        do /*0x585d57*/
        {
          TileData::Constructor(v6); /*0x585d4e*/
          v6 += 20; /*0x585d53*/
          --v7; /*0x585d56*/
        }
        while ( v7 ); /*0x585d57*/
        v3 = (ObjectClass *)this; /*0x585d59*/
      }
      g_MissionQueueFrame.localVariables[163] = v5; /*0x585d5d*/
      v14 = 1; /*0x585d63*/
    }
    else
    {
      g_MissionQueueFrame.localVariables[163] = 0; /*0x585d6a*/
      v14 = 1; /*0x585d70*/
    }
  }
  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x585d92*/
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x585da2*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x585daf*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585db8*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x585dc7*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x585dd3*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !v13 ) /*0x585ddb*/
      break; /*0x585ddb*/
    v13 = Cliff::ProcessTransitions(i, 0); /*0x585dec*/
  }
  FloodFillConnectedCells(v3, a2, 0); /*0x585e02*/
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x585e12*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x585e17*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585e23*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x585e32*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x585e38*/
  for ( j = (Cell *)result; result; j = (Cell *)result ) /*0x585e43*/
  {
    if ( !v13 ) /*0x585e4b*/
      break; /*0x585e4b*/
    if ( !j->Cell_field_0x11B[1] && (unsigned __int8)Cell::IsEmpty(j) ) /*0x585e59*/
      v13 = Terrain::SelectTileType((int)j, 0); /*0x585e6b*/
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x585e74*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x585e85*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1418] ) /*0x585e8d*/
  {
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87F5F0.__pad_E12[1418] + 32))( /*0x585e93*/
               *(_DWORD *)&stru_87F5F0.__pad_E12[1418],
               1);
    *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x585e96*/
  }
  for ( k = 0; k < v4; *(_BYTE *)(result + 74) = 1 ) /*0x585ea0*/
    result = (int)GetTileDataEntry(k++); /*0x585ea4*/
  if ( v14 ) /*0x585eb8*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.localVariables[163]); /*0x585ec1*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x585ec9*/
  }
  LOBYTE(result) = v13; /*0x585ecf*/
  return result; /*0x585ed3*/
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
int __stdcall InterpolateTerrainLighting(int a1, int a2, int a3, int a4)
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
  __int16 v26; // [esp+18h] [ebp+8h]
  int v27; // [esp+18h] [ebp+8h]
  int v28; // [esp+1Ch] [ebp+Ch]
  int v29; // [esp+20h] [ebp+10h]
  int v30; // [esp+20h] [ebp+10h]

  if ( !a2 ) /*0x585f4b*/
    return 0; /*0x585f4b*/
  if ( a2 == 1 ) /*0x585f52*/
    return *(_DWORD *)(a1 + 4 * *(_DWORD *)(dword_87F890 + 36 * a4 + 32) + 22500); /*0x5862a9*/
  if ( a2 != 2 ) /*0x585f59*/
    return 0; /*0x5862af*/
  v4 = *(_DWORD *)(dword_87F8A8 + 36 * a3 + 32); /*0x585f71*/
  v5 = (v4 - 1) % 130; /*0x585f79*/
  v6 = 4 * v5; /*0x585f82*/
  v7 = (int)((unsigned __int64)(2114445439LL * (v4 - v5)) >> 32) >> 6; /*0x585f8b*/
  v28 = 4 * ((v7 >> 31) + v7) - 4; /*0x585fa2*/
  v8 = v6 - (v6 / 4 % 2 != 0); /*0x585fbf*/
  v9 = 4 * ((v7 >> 31) + v7) - 4 - (v28 / 4 % 2 != 0); /*0x585fde*/
  v10 = *(_DWORD *)(dword_87F8A8 + 36 * a4 + 32); /*0x585fe7*/
  v11 = (v10 - 1) % 130; /*0x585ff4*/
  v12 = 4 * v11; /*0x585ffd*/
  v13 = (int)((unsigned __int64)(2114445439LL * (v10 - v11)) >> 32) >> 6; /*0x586006*/
  v26 = v12; /*0x58600b*/
  v29 = 4 * ((v13 >> 31) + v13) - 4; /*0x586021*/
  v14 = v12 - (v12 / 4 % 2 != 0); /*0x586042*/
  v15 = v29 - (v29 / 4 % 2 != 0); /*0x586061*/
  v16 = v14 <= v8; /*0x586063*/
  if ( v14 == v8 ) /*0x586066*/
  {
    if ( v9 == v15 ) /*0x58606b*/
      return (*(_DWORD *)(a1 + 4 * ((__int16)v6 / 4 + 130 * ((__int16)v28 / 4)) + 23024) /*0x5860d1*/
            + *(_DWORD *)(a1 + 4 * (v26 / 4 + 130 * ((__int16)v29 / 4)) + 23024)) >> 1;
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
  v27 = *(_DWORD *)(a1 /*0x586174*/
                  + 4
                  * ((__int16)(LOWORD(dword_ABD460[dword_82A984[2 * v18]]) + v8) / 4
                   + 130 * ((__int16)(v9 + HIWORD(dword_ABD460[dword_82A984[2 * v18]])) / 4))
                  + 23024);
  v19 = dword_82A988[2 * v18]; /*0x586178*/
  v20 = v8 + LOWORD(dword_ABD460[v19]); /*0x58618e*/
  LOWORD(v19) = v9 + HIWORD(dword_ABD460[v19]); /*0x586195*/
  v22 = *(_DWORD *)(a1 + 4 * (v20 / 4 + 130 * ((__int16)v19 / 4)) + 23024); /*0x5861be*/
  v25 = v27; /*0x5861cb*/
  if ( v27 >= v22 ) /*0x5861cf*/
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
char __stdcall VeinholeMonsterClass_Update(__int16 *a1, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  CellClass *v10; // eax
  int v12; // [esp+14h] [ebp+4h]

  v3 = a1[1]; /*0x5862d0*/
  v4 = a2 + v3; /*0x5862d2*/
  v5 = v3 - a2; /*0x5862d4*/
  if ( v5 > v4 ) /*0x5862d8*/
    return 0; /*0x58633f*/
  while ( 1 ) /*0x5862e3*/
  {
    v6 = *a1; /*0x5862e3*/
    v7 = a2 + v6; /*0x5862e5*/
    v8 = v6 - a2; /*0x5862e7*/
    if ( v8 <= v7 ) /*0x5862eb*/
      break; /*0x5862eb*/
LABEL_9:
    if ( ++v5 > a2 + a1[1] ) /*0x58633d*/
      return 0; /*0x58633d*/
  }
  HIWORD(v12) = v5; /*0x5862f0*/
  while ( 1 ) /*0x5862fb*/
  {
    v9 = ((__int16)v5 << 9) + (__int16)v8; /*0x5862fb*/
    LOWORD(v12) = v8; /*0x5862fd*/
    if ( v9 >= 0x40000 || (v10 = *(CellClass **)(dword_87F924 + 4 * v9)) == 0 ) /*0x586311*/
    {
      dword_ABDC74 = v12; /*0x586317*/
      v10 = &unk_ABDC50; /*0x58631c*/
    }
    if ( v10->firstObject ) /*0x586321*/
      return 1; /*0x58633f*/
    if ( ++v8 > a2 + *a1 ) /*0x586332*/
      goto LABEL_9; /*0x586332*/
  }
}



// ==== 0x00586360  Cell::IsPassable  this=ObjectClass  sig=csp ====
int __stdcall Cell::IsPassable(_DWORD *a1)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // eax
  int result; // eax
  _DWORD *v5; // ecx
  unsigned int v6; // eax
  __int16 v7; // [esp+4h] [ebp-8h]
  __int16 v8; // [esp+4h] [ebp-8h]
  _DWORD *v9; // [esp+10h] [ebp+4h]
  _DWORD *v10; // [esp+10h] [ebp+4h]

  v1 = a1[2] / dword_ABDE88; /*0x58636c*/
  if ( (v1 & 1) != 0 ) /*0x586375*/
  {
    v7 = *a1 / 256; /*0x58638d*/
    v2 = v1 / 2 + 1; /*0x5863b0*/
    HIWORD(v9) = a1[1] / 256 - v2; /*0x5863b5*/
    LOWORD(v9) = v7 - v2; /*0x5863ba*/
    v3 = (__int16)(v7 - v2) + (SHIWORD(v9) << 9); /*0x5863c8*/
    if ( v3 < 0x40000 && (result = *(_DWORD *)(dword_87F924 + 4 * v3)) != 0 ) /*0x5863de*/
    {
      v5 = (_DWORD *)result; /*0x5863e0*/
    }
    else
    {
      result = (int)v9; /*0x5863e4*/
      v5 = unk_ABDC50; /*0x5863e8*/
      dword_ABDC74 = (int)v9; /*0x5863ed*/
    }
    if ( (v5[75] & 8) != 0 ) /*0x5863f9*/
      goto LABEL_13; /*0x5863f9*/
    result = (int)Cell::GetNeighbourContent(v5, 3u); /*0x586401*/
  }
  else
  {
    v8 = *a1 / 256; /*0x58641a*/
    HIWORD(v10) = a1[1] / 256 - v1 / 2; /*0x586441*/
    LOWORD(v10) = v8 - v1 / 2; /*0x586446*/
    v6 = (__int16)v10 + (SHIWORD(v10) << 9); /*0x586454*/
    if ( v6 >= 0x40000 || (result = *(_DWORD *)(dword_87F924 + 4 * v6)) == 0 ) /*0x58646a*/
    {
      dword_ABDC74 = (int)v10; /*0x586470*/
      result = (int)unk_ABDC50; /*0x586475*/
    }
  }
  if ( (*(_BYTE *)(result + 300) & 8) == 0 ) /*0x586481*/
  {
    LOBYTE(result) = 1; /*0x586483*/
    return result; /*0x586489*/
  }
LABEL_13:
  LOBYTE(result) = 0; /*0x58648c*/
  return result; /*0x586485*/
}



// ==== 0x005864A0  FogOfWar_Get  this=-  sig=csp ====
bool __stdcall sub_5864A0(_DWORD *a1)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // eax
  _DWORD *NeighbourContent; // eax
  unsigned int v6; // eax
  __int16 v8; // [esp+4h] [ebp-8h]
  __int16 v9; // [esp+4h] [ebp-8h]
  __int16 v10; // [esp+6h] [ebp-6h]
  int v11; // [esp+10h] [ebp+4h]
  int v12; // [esp+10h] [ebp+4h]

  v1 = a1[2] / dword_ABDE88; /*0x5864ac*/
  if ( (v1 & 1) != 0 ) /*0x5864b5*/
  {
    v8 = *a1 / 256; /*0x5864cd*/
    v10 = a1[1] / 256; /*0x5864e3*/
    v2 = v1 / 2 + 1; /*0x5864f0*/
    v3 = (__int16)(v8 - v2) + ((__int16)(v10 - v2) << 9); /*0x586508*/
    if ( v3 >= 0x40000 || (v4 = *(_DWORD **)(dword_87F924 + 4 * v3)) == 0 ) /*0x58651e*/
    {
      LOWORD(v11) = v8 - v2; /*0x5864fa*/
      HIWORD(v11) = v10 - v2; /*0x5864f5*/
      dword_ABDC74 = v11; /*0x586524*/
      v4 = unk_ABDC50; /*0x586529*/
    }
    if ( (int)v4[79] <= 0 ) /*0x586536*/
      return 0; /*0x586536*/
    NeighbourContent = Cell::GetNeighbourContent(v4, 3u); /*0x586540*/
  }
  else
  {
    v9 = *a1 / 256; /*0x586559*/
    HIWORD(v12) = a1[1] / 256 - v1 / 2; /*0x586580*/
    LOWORD(v12) = v9 - v1 / 2; /*0x586585*/
    v6 = (__int16)v12 + (SHIWORD(v12) << 9); /*0x586593*/
    if ( v6 >= 0x40000 || (NeighbourContent = *(_DWORD **)(dword_87F924 + 4 * v6)) == 0 ) /*0x5865a9*/
    {
      dword_ABDC74 = v12; /*0x5865af*/
      NeighbourContent = unk_ABDC50; /*0x5865b4*/
    }
  }
  return (int)NeighbourContent[79] > 0; /*0x5865c5*/
}



// ==== 0x005865E0  Game::Stub3  this=Game  sig=csp ====
int __stdcall Game::Stub3(int a1)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5865e0*/
  return result; /*0x5865e2*/
}



// ==== 0x005865F0  CellClass::SpiralFindClosest  this=CellClass  sig=csp ====
int __stdcall CellClass_SpiralFindClosest(int a1, int a2, char a3)
{
  __int16 v3; // bx
  int v4; // edi
  __int16 v5; // bp
  unsigned int v6; // eax
  char *v7; // eax
  char *v8; // esi
  int result; // eax
  _DWORD v10[2]; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+1Ch] [ebp+4h]

  v11 = *(_DWORD *)(a1 + 36); /*0x5865fe*/
  v3 = HIWORD(v11); /*0x586602*/
  v4 = 1; /*0x586607*/
  v5 = v11; /*0x58660c*/
  do /*0x5866aa*/
  {
    v6 = v5 + (v3 << 9); /*0x586618*/
    if ( v6 < 0x40000 && (v7 = *(char **)(dword_87F924 + 4 * v6)) != 0 ) /*0x58662e*/
    {
      v8 = v7; /*0x586630*/
    }
    else
    {
      v8 = (char *)&unk_ABDC50; /*0x586638*/
      dword_ABDC74 = v11; /*0x58663d*/
    }
    result = v8[283]; /*0x586643*/
    if ( result >= v4 - 2 && result <= v4 ) /*0x586653*/
    {
      if ( a3 ) /*0x58665b*/
        CellClass::RevealFogRect(v8 + 36); /*0x586666*/
      v10[0] = 0; /*0x586670*/
      v10[1] = 0; /*0x586674*/
      result = Object::FindClosestObjectCell(v8, v10, 0, 0); /*0x58667e*/
      if ( result ) /*0x586685*/
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 408))(result, a2); /*0x586690*/
    }
    ++v5; /*0x586696*/
    v4 += 2; /*0x586698*/
    ++v3; /*0x58669b*/
    LOWORD(v11) = v5; /*0x5866a0*/
    HIWORD(v11) = v3; /*0x5866a5*/
  }
  while ( v4 < 15 ); /*0x5866aa*/
  return result; /*0x5866b0*/
}



// ==== 0x005866C0  ObjectClass::SmallFunc_5866C0  this=ObjectClass  sig=csp ====
int __thiscall SmallFunc_5866C0(ObjectClass *this)
{
  int v2; // eax
  int result; // eax

  v2 = this->q03D; /*0x5866c3*/
  *((_DWORD *)this + 67) = 1; /*0x5866c9*/
  this->q044 = v2; /*0x5866d3*/
  this->u8_45 = v2 - 1; /*0x5866dc*/
  this->u32_46 = (v2 << 11) + this->q04F + 4; /*0x5866f1*/
  for ( result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x5866fe*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    if ( (*(_BYTE *)(result + 320) & 2) == 0 ) /*0x586707*/
      CellClass::CreateFoggedObjects((CellClass *)result); /*0x58670b*/
  }
  return result; /*0x58671b*/
}



// ==== 0x00586780  MapClass::IsAreaFree  this=MapClass  sig=csp ====
int __thiscall MapClass::IsAreaFree(MapClass *this, int *a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // eax
  bool v9; // sf
  int v10; // eax
  int *v11; // eax
  int *v12; // esi
  int result; // eax
  int v14; // [esp+0h] [ebp-8h]
  int *v16; // [esp+Ch] [ebp+4h]
  int v17; // [esp+10h] [ebp+8h]

  if ( a3 == -1 ) /*0x58678e*/
    v14 = 0; /*0x58679d*/
  else
    v14 = 1 << a3; /*0x586797*/
  v4 = *a2; /*0x5867ac*/
  v5 = a2[2] + *a2; /*0x5867b4*/
  v16 = (int *)v4; /*0x5867b6*/
  if ( v4 >= v5 ) /*0x5867bc*/
    return MapClass::IsRectInBounds(this, a2, 1); /*0x586874*/
  while ( 1 ) /*0x5867c2*/
  {
    v6 = a2[1]; /*0x5867c2*/
    if ( v6 < a2[3] + v6 ) /*0x5867ce*/
      break; /*0x5867ce*/
LABEL_20:
    v16 = (int *)++v4; /*0x58686a*/
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
    if ( v9 || v10 >= 0x40000 || (v11 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v10)) == 0 ) /*0x5867fd*/
    {
      v12 = &g_MissionQueueFrame.briefing[130]; /*0x586807*/
      g_MissionQueueFrame.briefing[139] = v17; /*0x58680c*/
    }
    else
    {
      v12 = v11; /*0x5867ff*/
    }
    result = (int)CellClass::FindInfantry((CellClass *)v12, 0); /*0x586816*/
    if ( result ) /*0x58681d*/
      break; /*0x58681d*/
    result = v14; /*0x58681f*/
    if ( (v12[55] & v14) != 0 ) /*0x58682b*/
      break; /*0x58682b*/
    if ( v12[17] != -1 ) /*0x586831*/
      break; /*0x586831*/
    result = v12[19]; /*0x586833*/
    if ( result ) /*0x586838*/
      break; /*0x586838*/
    result = *((unsigned __int8 *)v12 + 284); /*0x58683a*/
    if ( (_BYTE)result ) /*0x586842*/
      break; /*0x586842*/
    result = (int)Cell::IsBridge((Cell *)v12); /*0x586846*/
    if ( result ) /*0x58684d*/
      break; /*0x58684d*/
    if ( ++v6 >= a2[3] + a2[1] ) /*0x58685a*/
    {
      v4 = (int)v16; /*0x58685c*/
      goto LABEL_20; /*0x58685c*/
    }
  }
  LOBYTE(result) = 0; /*0x58688d*/
  return result; /*0x586884*/
}



// ==== 0x005868A0  ObjectClass::UpdateAreaConnectivityMap  this=ObjectClass  sig=csp ====
void __thiscall UpdateAreaConnectivityMap(ObjectClass *this, int *a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  bool v7; // cc
  int v8; // edi
  int v9; // eax
  int v10; // [esp+Ch] [ebp-18h] BYREF
  void *Block; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]
  int *v16; // [esp+28h] [ebp+4h]

  v4 = 0; /*0x5868ac*/
  v5 = *a2; /*0x5868ae*/
  v6 = 10; /*0x5868b5*/
  v7 = *a2 < *a2 + a2[2]; /*0x5868ba*/
  Block = 0; /*0x5868bc*/
  v12 = 0; /*0x5868c0*/
  LOWORD(v13) = 1; /*0x5868c4*/
  v10 = (int)&DynamicVectorClass<Cell>::`vftable'; /*0x5868cd*/
  v15 = 10; /*0x5868d5*/
  v14 = 0; /*0x5868d9*/
  if ( v7 ) /*0x5868dd*/
  {
    while ( 1 ) /*0x5868e0*/
    {
      v8 = a2[1]; /*0x5868e0*/
      if ( v8 < v8 + a2[3] ) /*0x5868ea*/
        break; /*0x5868ea*/
LABEL_12:
      if ( ++v5 >= *a2 + a2[2] ) /*0x586957*/
        goto LABEL_13; /*0x586957*/
    }
    LOWORD(v16) = v5; /*0x5868ec*/
    while ( 1 ) /*0x5868f5*/
    {
      HIWORD(v16) = v8; /*0x5868f5*/
      if ( v14 < v4 ) /*0x5868fc*/
        goto LABEL_9; /*0x5868fc*/
      if ( !BYTE1(v13) && v4 || v6 <= 0 ) /*0x58690c*/
        goto LABEL_11; /*0x58690c*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v10 + 8))(&v10, v6 + v4, 0) ) /*0x58691b*/
      {
LABEL_9:
        v9 = v14++; /*0x58692a*/
        *((_DWORD *)Block + v9) = v16; /*0x586935*/
      }
      v4 = v12; /*0x586938*/
LABEL_11:
      ++v8; /*0x58693c*/
      v6 = v15; /*0x586947*/
      if ( v8 >= a2[1] + a2[3] ) /*0x58694b*/
        goto LABEL_12; /*0x58694b*/
    }
  }
LABEL_13:
  LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v10); /*0x58695a*/
  v10 = (int)&VectorClass<Cell>::`vftable'; /*0x58696c*/
  if ( Block ) /*0x586977*/
  {
    if ( BYTE1(v13) ) /*0x58697f*/
      __3_YAXPAX_Z(Block); /*0x586982*/
  }
}



// ==== 0x00586990  LayerClass::Update_Pathfinding_2  this=LayerClass  sig=csp ====
void __thiscall LayerClass::Update_Pathfinding_2(LayerClass *this, int a2)
{
  int v2; // ebx
  int i; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  __int16 *v8; // eax
  unsigned int v9; // ecx
  int *v10; // ecx
  int j; // edi
  int v12; // eax
  int v13; // ecx

  v2 = a2; /*0x586991*/
  for ( i = *(_DWORD *)(a2 + 16) - 1; i >= 0; --i ) /*0x58699e*/
  {
    v5 = 4 * i; /*0x5869a7*/
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea(this, (__int16 *)(4 * i + *(_DWORD *)(v2 + 4)), 1) ) /*0x5869b5*/
    {
      v6 = *(__int16 *)(v5 + *(_DWORD *)(v2 + 4)) /*0x5869dd*/
         + *(__int16 *)(v5 + *(_DWORD *)(v2 + 4) + 2) * (*((_DWORD *)this + 62) + *((_DWORD *)this + 61) + 1);
      if ( v6 >= 0 ) /*0x5869df*/
      {
        v7 = *((_DWORD *)this + 27); /*0x5869e5*/
        if ( v6 >= v7 ) /*0x5869ea*/
          v6 = v7 - 1; /*0x5869ec*/
      }
      else
      {
        v6 = 0; /*0x5869e1*/
      }
      *(_WORD *)(*((_DWORD *)this + 28) + 10 * v6) = 0; /*0x5869f5*/
      v8 = (__int16 *)(v5 + *(_DWORD *)(v2 + 4)); /*0x5869fe*/
      v9 = *v8 + (v8[1] << 9); /*0x586a0a*/
      if ( v9 >= 0x40000 || (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) == 0 ) /*0x586a21*/
      {
        v10 = &g_MissionQueueFrame.briefing[130]; /*0x586a25*/
        g_MissionQueueFrame.briefing[139] = *(_DWORD *)v8; /*0x586a2a*/
      }
      House::AnnounceUpgrade((int)v10, -1); /*0x586a31*/
    }
  }
  for ( j = *(_DWORD *)(v2 + 16) - 1; j >= 0; --j ) /*0x586a41*/
  {
    a2 = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * j); /*0x586a52*/
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea(this, (__int16 *)&a2, 1) ) /*0x586a56*/
    {
      v12 = (__int16)a2 + SHIWORD(a2) * (*((_DWORD *)this + 62) + *((_DWORD *)this + 61) + 1); /*0x586a7c*/
      if ( v12 >= 0 ) /*0x586a7e*/
      {
        v13 = *((_DWORD *)this + 27); /*0x586a84*/
        if ( v12 >= v13 ) /*0x586a89*/
          v12 = v13 - 1; /*0x586a8b*/
      }
      else
      {
        v12 = 0; /*0x586a80*/
      }
      if ( !*(_WORD *)(*((_DWORD *)this + 28) + 10 * v12) ) /*0x586a94*/
        Radar::Update((Radar *)this, (__int16 *)&a2); /*0x586aa2*/
    }
  }
}



// ==== 0x00586AC0  JumpjetLocomotionClass::ClampToCellBounds  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__thiscall JumpjetLocomotionClass::ClampToCellBounds(
        JumpjetLocomotionClass *this,
        _DWORD *a2,
        __int16 *a3,
        char a4)
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
  int v15; // [esp+24h] [ebp+8h]
  int v16; // [esp+28h] [ebp+Ch]

  v4 = this->unknown_3D; /*0x586ac8*/
  v5 = *a3; /*0x586acf*/
  v6 = a3[1]; /*0x586ad4*/
  if ( (v4 & 1) != 0 ) /*0x586ae1*/
    v7 = v5 - v6 + 1; /*0x586ae5*/
  else
    v7 = v5 - v6; /*0x586ae8*/
  v8 = v4 / 2 + (v7 >> 1) - this->unknown_3F; /*0x586b05*/
  v9 = v5 + v6 - v4 - this->DestinationCoords; /*0x586b0d*/
  v15 = *((_DWORD *)this + 65) / 2; /*0x586b2d*/
  v10 = this->q042 / 2; /*0x586b36*/
  if ( (int)abs32(v8 - v15) >= (int)abs32(v9 - v10) ) /*0x586b45*/
  {
    if ( v9 >= v10 ) /*0x586b83*/
    {
      v11 = this->q042; /*0x586b98*/
      if ( a4 ) /*0x586b9e*/
        --v11; /*0x586ba0*/
    }
    else
    {
      v11 = a4 != 0; /*0x586b8d*/
    }
  }
  else if ( v8 >= v15 ) /*0x586b4b*/
  {
    if ( a4 ) /*0x586b64*/
      v8 = *((_DWORD *)this + 65) - 1; /*0x586b6c*/
    else
      v8 = *((_DWORD *)this + 65); /*0x586b75*/
    v11 = v9; /*0x586b6f*/
  }
  else
  {
    v8 = a4 != 0; /*0x586b58*/
    v11 = v9; /*0x586b5a*/
  }
  v12 = this->DestinationCoords + v11; /*0x586bb1*/
  v13 = v8 + this->unknown_3F; /*0x586bb3*/
  LOWORD(v16) = v13 + ((v12 + 1) >> 1); /*0x586bc7*/
  HIWORD(v16) = v4 + (v12 >> 1) - v13; /*0x586bcf*/
  *a2 = v16; /*0x586bdc*/
  return a2; /*0x586bb5*/
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
            if ( v8 >= 0x40000 || (v9 = *(_DWORD **)(dword_87F924 + 4 * v8)) == 0 ) /*0x586cab*/
            {
              dword_ABDC74 = i; /*0x586cad*/
              v9 = unk_ABDC50; /*0x586cb3*/
            }
            if ( (v9[80] & 0x100) == 0 ) /*0x586cc1*/
            {
              v10 = -2; /*0x586cc3*/
              HIWORD(v22) = HIWORD(i); /*0x586cc8*/
              do /*0x586d1b*/
              {
                v11 = v7 + (__int16)(v10 + i); /*0x586cd8*/
                if ( v11 >= 0x40000 || (v12 = *(_DWORD **)(dword_87F924 + 4 * v11)) == 0 ) /*0x586cef*/
                {
                  LOWORD(v22) = v10 + i; /*0x586cd0*/
                  dword_ABDC74 = v22; /*0x586cf5*/
                  v12 = unk_ABDC50; /*0x586cfa*/
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
            if ( v16 >= 0x40000 || (v17 = *(_DWORD **)(dword_87F924 + 4 * v16)) == 0 ) /*0x586da2*/
            {
              dword_ABDC74 = j; /*0x586da4*/
              v17 = unk_ABDC50; /*0x586daa*/
            }
            if ( (v17[80] & 0x100) == 0 ) /*0x586db8*/
            {
              v18 = -2; /*0x586dba*/
              LOWORD(v24) = j; /*0x586dbf*/
              do /*0x586e08*/
              {
                v19 = (__int16)j + ((__int16)(HIWORD(j) + v18) << 9); /*0x586dd2*/
                if ( v19 >= 0x40000 || (v20 = *(_DWORD **)(dword_87F924 + 4 * v19), v3 = v21, !v20) ) /*0x586ded*/
                {
                  HIWORD(v24) = HIWORD(j) + v18; /*0x586dc7*/
                  dword_ABDC74 = v24; /*0x586df3*/
                  v20 = unk_ABDC50; /*0x586df8*/
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



// ==== 0x00586E50  HouseClass::ClampToUsableCell  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::ClampToUsableCell(HouseClass *this, _DWORD *a2, __int16 *a3)
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
  int *v14; // eax
  int *v15; // ecx
  int v16; // eax
  int v17; // ecx

  v3 = *a3; /*0x586e57*/
  v5 = a3[1]; /*0x586e5d*/
  v6 = this->rofMultiplier[1]; /*0x586e61*/
  v7 = this->armorMultiplier[1]; /*0x586e67*/
  v8 = this->airspeedMultiplier[1]; /*0x586e6d*/
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
    v9 = (v3 + v8 + 2 * (1 - v7 - this->rofMultiplier[1]) - v5) / 2; /*0x586e9d*/
    v3 -= v9; /*0x586e9f*/
    v5 += v9; /*0x586ea1*/
  }
  v11 = (__int16)v5 << 9; /*0x586ecd*/
  v12 = (__int16)v3 + v11 < 0; /*0x586ed0*/
  v13 = (__int16)v3 + v11; /*0x586ed0*/
  LOWORD(a3) = v3; /*0x586ed2*/
  HIWORD(a3) = v5; /*0x586ed7*/
  if ( v12 || v13 >= 0x40000 || (v14 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v13)) == 0 ) /*0x586ef0*/
  {
    v15 = &g_MissionQueueFrame.briefing[130]; /*0x586efa*/
    g_MissionQueueFrame.briefing[139] = (int)a3; /*0x586eff*/
  }
  else
  {
    v15 = v14; /*0x586ef2*/
  }
  v16 = *((char *)v15 + 283); /*0x586f0a*/
  if ( *((_BYTE *)v15 + 284) && v5 + v3 < v16 + this->airspeedMultiplier[1] + 2 * this->rofMultiplier[0] + 4 ) /*0x586f2c*/
    ++v16; /*0x586f2e*/
  v17 = this->rofMultiplier[0]; /*0x586f2f*/
  if ( v5 + v3 > v16 + this->airspeedMultiplier[1] + 2 * v17 ) /*0x586f46*/
  {
    if ( v5 + v3 > v16 + this->airspeedMultiplier[1] + 2 * (v17 + this->costMultiplier[0]) + 2 ) /*0x586f7e*/
    {
      do /*0x586f9c*/
      {
        LOWORD(v3) = v3 - 1; /*0x586f80*/
        LOWORD(v5) = v5 - 1; /*0x586f85*/
        LOWORD(a3) = v3; /*0x586f8b*/
        HIWORD(a3) = v5; /*0x586f90*/
      }
      while ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a3, 1) ); /*0x586f9c*/
    }
  }
  else
  {
    do /*0x586f64*/
    {
      LOWORD(v3) = v3 + 1; /*0x586f48*/
      LOWORD(v5) = v5 + 1; /*0x586f4d*/
      LOWORD(a3) = v3; /*0x586f53*/
      HIWORD(a3) = v5; /*0x586f58*/
    }
    while ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a3, 1) ); /*0x586f64*/
  }
  HIWORD(a3) = v5; /*0x586fa2*/
  LOWORD(a3) = v3; /*0x586fa7*/
  *a2 = a3; /*0x586fb3*/
  return a2; /*0x586fb0*/
}



// ==== 0x00586FC0  FootClass::FindNearestApproachableCell  this=FootClass  sig=csp ====
int *__thiscall FootClass::FindNearestApproachableCell(FootClass *this, int *a2, __int16 *a3, __int16 *a4)
{
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // ebx
  int v7; // eax
  _DWORD *v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // ebx
  int v16; // edi
  int v17; // edx
  int v18; // edx
  double v20; // [esp+0h] [ebp-48h]
  __int16 v21[2]; // [esp+18h] [ebp-30h] BYREF
  int v22; // [esp+1Ch] [ebp-2Ch]
  int v23; // [esp+20h] [ebp-28h]
  int v24; // [esp+24h] [ebp-24h]
  int v25; // [esp+28h] [ebp-20h]
  int v26; // [esp+2Ch] [ebp-1Ch]
  LayerClass *v27; // [esp+30h] [ebp-18h]
  int v28; // [esp+34h] [ebp-14h]
  __int16 v29; // [esp+38h] [ebp-10h]
  __int16 i; // [esp+3Ah] [ebp-Eh]
  double v31; // [esp+40h] [ebp-8h]

  v25 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x586fd4*/
  v27 = (LayerClass *)this; /*0x586fd8*/
  v31 = 10000.0; /*0x586fdc*/
  v4 = *a3 + (a3[1] << 9); /*0x586fee*/
  if ( v4 < 0x40000 && (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x58700c*/
  {
    v6 = v5; /*0x58700e*/
  }
  else
  {
    v6 = &g_MissionQueueFrame.briefing[130]; /*0x587014*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a3; /*0x587019*/
  }
  v7 = v6[14]; /*0x58701e*/
  if ( v7 >= 0 ) /*0x587023*/
  {
    v9 = *(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v7); /*0x58703b*/
    v10 = (*(int (__thiscall **)(_DWORD *))(*v9 + 156))(v9); /*0x587042*/
    v11 = v9[186]; /*0x58704e*/
    v22 = v9[185]; /*0x587054*/
    v12 = *((unsigned __int8 *)v6 + 282); /*0x58705a*/
    v26 = v10; /*0x587060*/
    v24 = v11; /*0x587066*/
    LOWORD(v11) = v12 % v22; /*0x58706b*/
    v13 = v12; /*0x58706f*/
    v14 = v22; /*0x587071*/
    v15 = 0; /*0x587081*/
    v29 = *a3 - v11; /*0x587083*/
    for ( i = a3[1] - v13 / v22; v15 < v24; ++v15 ) /*0x58709a*/
    {
      v16 = 0; /*0x5870a0*/
      if ( v14 > 0 ) /*0x5870a4*/
      {
        HIWORD(v23) = v15 + i; /*0x5870b1*/
        do /*0x587151*/
        {
          v17 = v15 * v9[185]; /*0x5870c3*/
          LOWORD(v23) = v16 + v29; /*0x5870c6*/
          *(_DWORD *)v21 = v23; /*0x5870d5*/
          if ( *(_DWORD *)(v26 + 4 * (v16 + v17) + 16) && (unsigned __int8)LayerClass::IsWithinUsableArea(v27, v21, 1) ) /*0x5870ec*/
          {
            v18 = v21[1] - a4[1]; /*0x587110*/
            v28 = (v21[0] - *a4) * (v21[0] - *a4) + v18 * v18; /*0x58711c*/
            __asm /*0x587120*/
            {
              fild [esp+48h+var_14]
              fstp [esp+48h+var_48]; double
            }
            Math::Sqrt(v20); /*0x587127*/
            __asm { fcom [esp+48h+var_8] } /*0x58712c*/
            __asm { fnstsw ax }
            if ( (_AX & 0x100) != 0 ) /*0x587138*/
            {
              __asm { fstp [esp+40h+var_8] } /*0x58713e*/
              v25 = *(_DWORD *)v21; /*0x587142*/
            }
            else
            {
              __asm { fstp st } /*0x587148*/
            }
          }
          v14 = v22; /*0x58714a*/
          ++v16; /*0x58714e*/
        }
        while ( v16 < v22 ); /*0x587151*/
      }
    }
    *a2 = v25; /*0x58716d*/
    return a2; /*0x587164*/
  }
  else
  {
    *a2 = *(_DWORD *)a3; /*0x58702a*/
    return a2; /*0x587025*/
  }
}



// ==== 0x00587180  CellClass::SetTerrainType  this=CellClass  sig=csp ====
int __thiscall CellClass::SetTerrainType(CellClass *this, __int16 *a2)
{
  CellClass *v2; // ebp
  __int16 *v3; // ebx
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int *v10; // ecx
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int i; // esi
  __int16 *v18; // ecx
  unsigned int v19; // eax
  TechnoClass *v20; // eax
  int result; // eax
  char v22; // [esp+13h] [ebp-19h]
  int *v24; // [esp+28h] [ebp-4h]

  v2 = this; /*0x587185*/
  v22 = 0; /*0x587199*/
  v24 = &this->disguiseAsType_sensors_of_houses[10]; /*0x58719e*/
  (*(void (**)(void))(this->disguiseAsType_sensors_of_houses[10] + 12))(); /*0x5871a2*/
  v3 = a2; /*0x5871a5*/
  v4 = *a2 + (a2[1] << 9); /*0x5871b3*/
  if ( v4 < 0x40000 && (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x5871c9*/
  {
    v6 = v5; /*0x5871cb*/
  }
  else
  {
    v6 = &g_MissionQueueFrame.briefing[130]; /*0x5871d1*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5871d6*/
  }
  v7 = v6[17]; /*0x5871db*/
  if ( v7 >= 74 && v7 <= 99 ) /*0x5871e6*/
  {
    v22 = CellClass::CheckTilePassable2((int)a2); /*0x5871f0*/
    goto LABEL_42; /*0x5871f4*/
  }
  if ( v7 >= 205 && v7 <= 230 ) /*0x587205*/
  {
    v22 = CellClass::CheckTilePassable((int)a2); /*0x58720f*/
    goto LABEL_42; /*0x587213*/
  }
  v8 = v6[80]; /*0x587223*/
  v9 = v6[14] - g_Cell_BuildabilityLUT + 1; /*0x587229*/
  v10 = 0; /*0x58722a*/
  if ( (v8 & 0x100) == 0 ) /*0x58722f*/
    goto LABEL_21; /*0x58722f*/
  if ( (v8 & 0x80u) == 0 ) /*0x587238*/
  {
    v11 = *(_DWORD *)(v6[11] + 36); /*0x58726a*/
    v13 = (__int16)v11 + (SHIWORD(v11) << 9); /*0x58727c*/
    if ( v13 >= 0x40000 || (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v13)) == 0 ) /*0x587293*/
    {
LABEL_18:
      v10 = &g_MissionQueueFrame.briefing[130]; /*0x587295*/
      g_MissionQueueFrame.briefing[139] = v11; /*0x58729a*/
      if ( &g_MissionQueueFrame == (ScenarioClass *)-5720 ) /*0x5872a2*/
        goto LABEL_21; /*0x5872a2*/
    }
  }
  else
  {
    v11 = v6[9]; /*0x58723a*/
    v12 = (__int16)v11 + (SHIWORD(v11) << 9); /*0x58724c*/
    if ( v12 >= 0x40000 ) /*0x58724e*/
      goto LABEL_18; /*0x58724e*/
    v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v12); /*0x58725e*/
    if ( !v10 ) /*0x587263*/
      goto LABEL_18; /*0x587263*/
  }
  v14 = v10[17]; /*0x5872a4*/
  if ( v14 == 24 || v14 == 25 ) /*0x5872b3*/
    goto LABEL_50; /*0x5872b3*/
LABEL_21:
  if ( v9 == g_TerrainSoundTable2 /*0x5872fc*/
    || v9 == g_TerrainSoundTable2 + 1
    || v9 == g_TerrainSoundTable2 + 2
    || v9 == g_TerrainSoundTable2 + 3
    || v9 == g_TerrainSoundConfig )
  {
    goto LABEL_50; /*0x5872fc*/
  }
  if ( v9 == g_TerrainSoundConfig + 1 || v9 == g_TerrainSoundConfig + 2 ) /*0x587316*/
  {
LABEL_49:
    v3 = a2; /*0x5873fa*/
LABEL_50:
    v22 = CellClass::PropagateTerrainVariant5(v2, v3); /*0x5873fe*/
    goto LABEL_42; /*0x58740a*/
  }
  if ( v9 == g_TerrainSoundConfig + 3 ) /*0x587321*/
  {
    v2 = this; /*0x5873f6*/
    goto LABEL_49; /*0x5873f6*/
  }
  v15 = v6[14] - g_TerrainBridgeIndex + 1; /*0x587332*/
  if ( v10 && ((v16 = v10[17], v16 == 237) || v16 == 238) /*0x587370*/
    || v15 == g_TerrainSoundTable2
    || v15 == g_TerrainSoundTable2 + 1
    || v15 == g_TerrainSoundTable2 + 2
    || v15 == g_TerrainSoundTable2 + 3
    || v15 == g_TerrainSoundConfig
    || v15 == g_TerrainSoundConfig + 1
    || v15 == g_TerrainSoundConfig + 2
    || v15 == g_TerrainSoundConfig + 3 )
  {
    v22 = CellClass::PropagateTerrainVariant2(this, a2); /*0x587380*/
  }
  v2 = this; /*0x587384*/
LABEL_42:
  for ( i = 0; i < (int)v2->firstObject; ++i ) /*0x587392*/
  {
    v18 = (__int16 *)(v2->disguiseAsType_sensors_of_houses[11] + 4 * i); /*0x58739e*/
    v19 = *v18 + (v18[1] << 9); /*0x5873a9*/
    if ( v19 >= 0x40000 || (v20 = *(TechnoClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v19)) == 0 ) /*0x5873bf*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v18; /*0x5873c3*/
      v20 = (TechnoClass *)&g_MissionQueueFrame.briefing[130]; /*0x5873c8*/
    }
    TechnoClass::ApplySplashDamageToNeighbors(v20); /*0x5873cf*/
  }
  result = (*(int (__thiscall **)(int *))(*v24 + 12))(v24); /*0x5873e5*/
  LOBYTE(result) = v22; /*0x5873e8*/
  return result; /*0x5873ec*/
}



// ==== 0x00587410  CellClass::CheckConnectivity  this=CellClass  sig=csp ====
char __thiscall CellClass::CheckConnectivity(CellClass *this, int i)
{
  _WORD *v2; // esi
  int *v3; // ebx
  int v4; // ebp
  int v5; // edi
  __int16 v6; // cx
  unsigned int v7; // eax
  int *v8; // eax
  int v9; // edx
  __int16 v10; // cx
  unsigned int v11; // eax
  int *v12; // eax
  __int16 v13; // cx
  unsigned int v14; // eax
  int *v15; // eax
  __int16 v16; // dx
  int v17; // eax
  __int16 v18; // cx
  unsigned int v19; // eax
  int *v20; // eax
  __int16 v21; // cx
  int v22; // eax
  __int16 v23; // cx
  unsigned int v24; // eax
  int *v25; // eax
  int v26; // esi
  __int16 v27; // ax
  __int16 v28; // dx
  int v29; // esi
  __int16 v30; // dx
  __int16 v31; // ax
  __int16 v32; // dx
  ObjectClass *v33; // edi
  int RegionMap; // eax
  int v35; // eax
  _DWORD *v36; // eax
  int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  int *v41; // eax
  int v42; // eax
  int v43; // eax
  unsigned int v44; // eax
  int *v45; // eax
  int v46; // eax
  int v47; // eax
  unsigned int v48; // eax
  int *v49; // eax
  int v50; // eax
  int v51; // eax
  unsigned int v52; // eax
  int *v53; // eax
  int v54; // eax
  int v55; // eax
  unsigned int v56; // eax
  int *v57; // eax
  int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  int *v61; // eax
  int v62; // eax
  int v63; // eax
  unsigned int v64; // eax
  int *v65; // eax
  int v66; // eax
  int v67; // eax
  unsigned int v68; // eax
  int *v69; // eax
  int v70; // eax
  char v71; // [esp+12h] [ebp-2Eh]
  char v72; // [esp+13h] [ebp-2Dh]
  __int16 v73[2]; // [esp+14h] [ebp-2Ch] BYREF
  int v74; // [esp+18h] [ebp-28h]
  int v75; // [esp+1Ch] [ebp-24h]
  int v76; // [esp+20h] [ebp-20h]
  int v77; // [esp+24h] [ebp-1Ch]
  int v78; // [esp+28h] [ebp-18h]
  int v79; // [esp+2Ch] [ebp-14h]
  __int16 v80[4]; // [esp+34h] [ebp-Ch] BYREF
  ObjectClass *v81; // [esp+3Ch] [ebp-4h] BYREF

  v2 = (_WORD *)i; /*0x587416*/
  v81 = (ObjectClass *)this; /*0x58741b*/
  v71 = 0; /*0x58741f*/
  v72 = 0; /*0x587424*/
  v3 = 0; /*0x587429*/
  *(_DWORD *)v73 = -1; /*0x58742b*/
  v4 = -2; /*0x587433*/
  do /*0x5876b4*/
  {
    v5 = -2; /*0x587438*/
    do /*0x5876aa*/
    {
      v6 = *v2 + v5; /*0x587447*/
      HIWORD(i) = v2[1] + v4; /*0x58744a*/
      LOWORD(i) = v6; /*0x58744f*/
      v7 = v6 + (SHIWORD(i) << 9); /*0x58745d*/
      if ( v7 >= 0x40000 || (v8 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v7)) == 0 ) /*0x587473*/
      {
        g_MissionQueueFrame.briefing[139] = i; /*0x587479*/
        v8 = &g_MissionQueueFrame.briefing[130]; /*0x58747e*/
      }
      v9 = v8[14]; /*0x587483*/
      if ( v9 < g_TerrainBridgeIndex || v9 >= g_TerrainBridgeIndex + 16 ) /*0x587494*/
      {
        if ( v9 < g_Cell_BuildabilityLUT || v9 >= g_Cell_BuildabilityLUT + 16 ) /*0x587511*/
        {
          v16 = v2[1] + v4; /*0x587589*/
          LOWORD(v76) = *v2 + v5; /*0x58758d*/
          HIWORD(v76) = v16; /*0x587596*/
          *(_DWORD *)v80 = v76; /*0x5875a5*/
          v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 17); /*0x5875ae*/
          if ( v17 >= 74 && v17 <= 101 ) /*0x5875b9*/
          {
            v18 = *v2 + v5; /*0x5875c5*/
            v71 = 0; /*0x5875c8*/
            v72 = 0; /*0x5875cd*/
            HIWORD(v77) = v2[1] + v4; /*0x5875d2*/
            LOWORD(v77) = v18; /*0x5875d7*/
            v19 = v18 + (SHIWORD(v77) << 9); /*0x5875e5*/
            if ( v19 < 0x40000 ) /*0x5875e7*/
            {
              v20 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v19); /*0x5875f6*/
              if ( v20 ) /*0x5875fb*/
              {
                v3 = v20; /*0x5875fd*/
                goto LABEL_31; /*0x5875ff*/
              }
            }
            g_MissionQueueFrame.briefing[139] = v77; /*0x587608*/
LABEL_30:
            v3 = &g_MissionQueueFrame.briefing[130]; /*0x5876a1*/
            goto LABEL_31; /*0x5876a1*/
          }
          v21 = v2[1] + v4; /*0x58761c*/
          LOWORD(v78) = *v2 + v5; /*0x587620*/
          HIWORD(v78) = v21; /*0x587625*/
          *(_DWORD *)v80 = v78; /*0x587638*/
          v22 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 17); /*0x587641*/
          if ( v22 >= 205 && v22 <= 232 ) /*0x587650*/
          {
            v23 = *v2 + v5; /*0x58765c*/
            v71 = 0; /*0x58765f*/
            v72 = 1; /*0x587664*/
            HIWORD(v79) = v2[1] + v4; /*0x587669*/
            LOWORD(v79) = v23; /*0x58766e*/
            v24 = v23 + (SHIWORD(v79) << 9); /*0x58767c*/
            if ( v24 < 0x40000 ) /*0x58767e*/
            {
              v25 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24); /*0x58768d*/
              if ( v25 ) /*0x587692*/
              {
                v3 = v25; /*0x587694*/
                goto LABEL_31; /*0x587696*/
              }
            }
            g_MissionQueueFrame.briefing[139] = v79; /*0x58769c*/
            goto LABEL_30; /*0x58769c*/
          }
        }
        else
        {
          v13 = *v2 + v5; /*0x58751d*/
          v71 = 1; /*0x587520*/
          HIWORD(v75) = v2[1] + v4; /*0x587525*/
          LOWORD(v75) = v13; /*0x58752a*/
          v14 = v13 + (SHIWORD(v75) << 9); /*0x587538*/
          if ( v14 < 0x40000 && (v15 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v14)) != 0 ) /*0x58754e*/
          {
            v3 = v15; /*0x587550*/
            *(_DWORD *)v73 = v9 - g_Cell_BuildabilityLUT; /*0x587559*/
          }
          else
          {
            v3 = &g_MissionQueueFrame.briefing[130]; /*0x587566*/
            g_MissionQueueFrame.briefing[139] = v75; /*0x58756b*/
            *(_DWORD *)v73 = v9 - g_Cell_BuildabilityLUT; /*0x587577*/
          }
        }
      }
      else
      {
        v10 = *v2 + v5; /*0x5874a0*/
        v71 = 1; /*0x5874a3*/
        HIWORD(v74) = v2[1] + v4; /*0x5874a8*/
        LOWORD(v74) = v10; /*0x5874ad*/
        v11 = v10 + (SHIWORD(v74) << 9); /*0x5874bb*/
        if ( v11 < 0x40000 && (v12 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v11)) != 0 ) /*0x5874d1*/
        {
          v3 = v12; /*0x5874d3*/
          *(_DWORD *)v73 = v9 - g_TerrainBridgeIndex; /*0x5874dc*/
        }
        else
        {
          v3 = &g_MissionQueueFrame.briefing[130]; /*0x5874e9*/
          g_MissionQueueFrame.briefing[139] = v74; /*0x5874ee*/
          *(_DWORD *)v73 = v9 - g_TerrainBridgeIndex; /*0x5874fa*/
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
    v26 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v3[14]) + 740); /*0x5876da*/
    v27 = *((unsigned __int8 *)v3 + 282) / v26; /*0x5876ef*/
    v28 = *((_WORD *)v3 + 19); /*0x5876f1*/
    LOWORD(v79) = *((_WORD *)v3 + 18) - *((unsigned __int8 *)v3 + 282) % v26; /*0x5876f8*/
    v29 = dword_82AA44[*(_DWORD *)v73]; /*0x587701*/
    v30 = v28 - v27; /*0x587708*/
    v31 = word_82AA04[*(_DWORD *)v73]; /*0x58770b*/
    HIWORD(v79) = v30; /*0x587713*/
    v32 = word_82AA24[*(_DWORD *)v73]; /*0x587718*/
    v80[0] = v31; /*0x587720*/
    v80[1] = v32; /*0x587725*/
    LOWORD(i) = v79 + v31; /*0x587738*/
    HIWORD(i) = HIWORD(v79) + v32; /*0x587746*/
    *(_DWORD *)v73 = i; /*0x58774f*/
    if ( v29 != -1 ) /*0x587753*/
    {
      v33 = v81; /*0x587759*/
      while ( 1 ) /*0x58776c*/
      {
        RegionMap = GetRegionMap(v33, v73, 3, 0); /*0x58776c*/
        if ( RegionMap < 0 ) /*0x587773*/
          break; /*0x587773*/
        v35 = v33->customSound_controller[1] + 16 * RegionMap; /*0x58777f*/
        if ( !*(_BYTE *)(v35 + 8) ) /*0x587786*/
          return 1; /*0x587786*/
        if ( *(_DWORD *)v35 == i ) /*0x587794*/
        {
          i = *(_DWORD *)(v35 + 4); /*0x5877a4*/
          v36 = CellStruct::Add((CellStruct *)&i, &v81, (_WORD *)(4 * (v29 & 7) + 9041544)); /*0x5877b5*/
        }
        else
        {
          if ( *(_DWORD *)(v35 + 4) != i ) /*0x5877bb*/
            return 1; /*0x5877bb*/
          i = *(_DWORD *)v35; /*0x5877ca*/
          v36 = CellStruct::Add((CellStruct *)&i, v80, (_WORD *)(4 * (v29 & 7) + 9041544)); /*0x5877df*/
        }
        *(_DWORD *)v73 = *v36; /*0x5877e6*/
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
        for ( i = v3[9]; ; LOWORD(i) = i - 1 ) /*0x58783c*/
        {
          v39 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&i) + 17); /*0x58784f*/
          if ( v39 < 205 || v39 > 232 ) /*0x58785e*/
            break; /*0x58785e*/
          v40 = (__int16)i + (SHIWORD(i) << 9); /*0x587870*/
          if ( v40 >= 0x40000 || (v41 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v40)) == 0 ) /*0x587886*/
          {
            g_MissionQueueFrame.briefing[139] = i; /*0x58788c*/
            v41 = &g_MissionQueueFrame.briefing[130]; /*0x587891*/
          }
          v42 = v41[17]; /*0x587896*/
          if ( v42 == 231 || v42 == 232 ) /*0x5878a9*/
            return 1; /*0x5878a9*/
        }
        *(_DWORD *)v73 = v3[9]; /*0x5878be*/
        while ( 1 ) /*0x5878d1*/
        {
          v43 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v73) + 17); /*0x5878d1*/
          if ( v43 < 205 || v43 > 232 ) /*0x5878e4*/
            break; /*0x5878e4*/
          v44 = v73[0] + (v73[1] << 9); /*0x5878f7*/
          if ( v44 >= 0x40000 || (v45 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v44)) == 0 ) /*0x58790d*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v73; /*0x587913*/
            v45 = &g_MissionQueueFrame.briefing[130]; /*0x587918*/
          }
          v46 = v45[17]; /*0x58791d*/
          if ( v46 == 231 || v46 == 232 ) /*0x587930*/
            return 1; /*0x587930*/
          ++v73[0]; /*0x587936*/
        }
      }
      else
      {
        *(_DWORD *)v73 = v3[9]; /*0x587940*/
        while ( 1 ) /*0x587953*/
        {
          v47 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v73) + 17); /*0x587953*/
          if ( v47 < 205 || v47 > 232 ) /*0x587962*/
            break; /*0x587962*/
          v48 = v73[0] + (v73[1] << 9); /*0x587971*/
          if ( v48 >= 0x40000 || (v49 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v48)) == 0 ) /*0x587987*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v73; /*0x58798d*/
            v49 = &g_MissionQueueFrame.briefing[130]; /*0x587992*/
          }
          v50 = v49[17]; /*0x587997*/
          if ( v50 == 231 || v50 == 232 ) /*0x5879aa*/
            return 1; /*0x5879aa*/
          ++v73[1]; /*0x5879b0*/
        }
        for ( i = v3[9]; ; --HIWORD(i) ) /*0x5879ba*/
        {
          v51 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&i) + 17); /*0x5879cd*/
          if ( v51 < 205 || v51 > 232 ) /*0x5879e0*/
            break; /*0x5879e0*/
          v52 = (__int16)i + (SHIWORD(i) << 9); /*0x5879f6*/
          if ( v52 >= 0x40000 || (v53 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v52)) == 0 ) /*0x587a0c*/
          {
            g_MissionQueueFrame.briefing[139] = i; /*0x587a12*/
            v53 = &g_MissionQueueFrame.briefing[130]; /*0x587a17*/
          }
          v54 = v53[17]; /*0x587a1c*/
          if ( v54 == 231 || v54 == 232 ) /*0x587a2f*/
            return 1; /*0x587a2f*/
        }
      }
    }
    else if ( v38 >= 74 && v38 <= 82 || v38 >= 92 && v38 <= 95 || v38 == 100 ) /*0x587a5b*/
    {
      for ( i = v3[9]; ; LOWORD(i) = i - 1 ) /*0x587a64*/
      {
        v55 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&i) + 17); /*0x587a77*/
        if ( v55 < 74 || v55 > 101 ) /*0x587a82*/
          break; /*0x587a82*/
        v56 = (__int16)i + (SHIWORD(i) << 9); /*0x587a94*/
        if ( v56 >= 0x40000 || (v57 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v56)) == 0 ) /*0x587aaa*/
        {
          g_MissionQueueFrame.briefing[139] = i; /*0x587ab0*/
          v57 = &g_MissionQueueFrame.briefing[130]; /*0x587ab5*/
        }
        v58 = v57[17]; /*0x587aba*/
        if ( v58 == 100 || v58 == 101 ) /*0x587ac9*/
          return 1; /*0x587ac9*/
      }
      *(_DWORD *)v73 = v3[9]; /*0x587ade*/
      while ( 1 ) /*0x587af1*/
      {
        v59 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v73) + 17); /*0x587af1*/
        if ( v59 < 74 || v59 > 101 ) /*0x587b00*/
          break; /*0x587b00*/
        v60 = v73[0] + (v73[1] << 9); /*0x587b13*/
        if ( v60 >= 0x40000 || (v61 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v60)) == 0 ) /*0x587b29*/
        {
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)v73; /*0x587b2f*/
          v61 = &g_MissionQueueFrame.briefing[130]; /*0x587b34*/
        }
        v62 = v61[17]; /*0x587b39*/
        if ( v62 == 100 || v62 == 101 ) /*0x587b48*/
          return 1; /*0x587b48*/
        ++v73[0]; /*0x587b4e*/
      }
    }
    else
    {
      *(_DWORD *)v73 = v3[9]; /*0x587b58*/
      while ( 1 ) /*0x587b6b*/
      {
        v63 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v73) + 17); /*0x587b6b*/
        if ( v63 < 74 || v63 > 101 ) /*0x587b76*/
          break; /*0x587b76*/
        v64 = v73[0] + (v73[1] << 9); /*0x587b85*/
        if ( v64 >= 0x40000 || (v65 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v64)) == 0 ) /*0x587b9b*/
        {
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)v73; /*0x587ba1*/
          v65 = &g_MissionQueueFrame.briefing[130]; /*0x587ba6*/
        }
        v66 = v65[17]; /*0x587bab*/
        if ( v66 == 100 || v66 == 101 ) /*0x587bba*/
          return 1; /*0x5877f8*/
        ++v73[1]; /*0x587bc0*/
      }
      for ( i = v3[9]; ; --HIWORD(i) ) /*0x587bca*/
      {
        v67 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&i) + 17); /*0x587bdd*/
        if ( v67 < 74 || v67 > 101 ) /*0x587be8*/
          break; /*0x587be8*/
        v68 = (__int16)i + (SHIWORD(i) << 9); /*0x587bfa*/
        if ( v68 >= 0x40000 || (v69 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v68)) == 0 ) /*0x587c10*/
        {
          g_MissionQueueFrame.briefing[139] = i; /*0x587c16*/
          v69 = &g_MissionQueueFrame.briefing[130]; /*0x587c1b*/
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
char __thiscall DiagnoseMapCheck(ObjectClass *this)
{
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
  __int16 *v14; // ebp
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
  char **v32; // [esp+1Ch] [ebp-8h]
  FILE *Stream; // [esp+20h] [ebp-4h]

  v1 = (LayerClass *)this; /*0x587c55*/
  v24 = 1; /*0x587c65*/
  Stream = fopen(&stru_82ADA8.?[11], &stru_82ADA8.?[27]); /*0x587c6f*/
  count = v1[20].count; /*0x587c73*/
  v1[22].count = 1; /*0x587c79*/
  v1[22].capacity = count; /*0x587c83*/
  v1[23].items[0] = count - 1; /*0x587c8f*/
  v1[23].count = (count << 11) + v1[26].count + 4; /*0x587ca4*/
  v3 = LayerClass::CellIteratorNext(v1); /*0x587caf*/
  for ( i = v3; v3; i = v3 ) /*0x587cb7*/
  {
    if ( (unsigned __int8)Type::CheckAmbiguity((Type *)v1, v3, 1) ) /*0x587cc4*/
    {
      v4 = &off_81BA88; /*0x587cd1*/
      v29 = 0; /*0x587cd6*/
      v32 = &off_81BA88; /*0x587cde*/
      do /*0x588065*/
      {
        if ( v4 != off_81BAAC && v4 != off_81BAA0 ) /*0x587cf4*/
        {
          v27 = dword_82A594[8 * v29 + *(_DWORD *)(v3 + 76)] == 1; /*0x587d1e*/
          v8 = 0; /*0x587d5f*/
          if ( (*(_DWORD *)(v3 + 320) & 0x100) != 0 /*0x587d59*/
            && ((v5 = *(_DWORD *)(v3 + 320) & 0x800) != 0
             && ((v6 = *(_DWORD *)(v3 + 44)) == 0 || *(__int16 *)(v6 + 38) - *(__int16 *)(v3 + 38) != 2)
             || !v5 && ((v7 = *(_DWORD *)(v3 + 44)) == 0 || *(__int16 *)(v7 + 36) - *(__int16 *)(v3 + 36) != 2)) )
          {
            v8 = 1; /*0x587d22*/
          }
          v25 = v8; /*0x587d63*/
          if ( dword_82A594[8 * v29 + *(_DWORD *)(v3 + 76)] == 1 || v8 ) /*0x587d6b*/
          {
            v9 = v1[21].count; /*0x587d71*/
            v10 = v1[21].items[0]; /*0x587d77*/
            v11 = v10 + v9 + 1; /*0x587d7d*/
            v12 = v9 - v10; /*0x587d81*/
            v13 = v1[20].count; /*0x587d83*/
            v1[23].capacity = v11; /*0x587d89*/
            v1[24].items[0] = v13 + v12; /*0x587d93*/
            v14 = (__int16 *)MapClass::SpiralSearch((MapClass *)v1); /*0x587d9e*/
            if ( v14 ) /*0x587da2*/
            {
              v15 = (__int16 *)(v3 + 36); /*0x587da8*/
              do /*0x588041*/
              {
                v16 = v14 + 18; /*0x587db3*/
                v17 = v14[18] + v14[19]; /*0x587db6*/
                v18 = *(__int16 *)(v3 + 38); /*0x587db9*/
                v19 = *v15; /*0x587dbd*/
                if ( v17 > v19 + v18 || v17 == v19 + v18 && *v16 - v14[19] > v19 - v18 ) /*0x587ddc*/
                {
                  v28 = dword_82A594[8 * v29 + *((_DWORD *)v14 + 19)] == 1; /*0x587e00*/
                  v26 = 0; /*0x587e47*/
                  if ( (*((_DWORD *)v14 + 80) & 0x100) != 0 /*0x587e3e*/
                    && ((v20 = *((_DWORD *)v14 + 80) & 0x800) != 0
                     && ((v21 = *((_DWORD *)v14 + 11)) == 0 || *(__int16 *)(v21 + 38) - v14[19] != 2)
                     || !v20 && ((v22 = *((_DWORD *)v14 + 11)) == 0 || *(__int16 *)(v22 + 36) - *v16 != 2)) )
                  {
                    v26 = 1; /*0x587e08*/
                  }
                  if ( dword_82A594[8 * v29 + *((_DWORD *)v14 + 19)] == 1 /*0x587e8e*/
                    && v27
                    && MapSeed::CheckTileMatch((MapSeed *)this, v15, v14 + 18, v29, 0, 0, 0)
                    && Pathfinding::CalcDistance((int)&stru_87E790.__pad_D8[80], v15, v14 + 18, 0, 0, 0, v29) == 0x7FFFFFFF )
                  {
                    v3 = i; /*0x587e94*/
                    v24 = 0; /*0x587e9e*/
                    fprintf( /*0x587ebc*/
                      Stream,
                      (const char *const)&stru_82ADA8.?[6],
                      *v15,
                      *(__int16 *)(i + 38),
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
                        (const char *const)&stru_82ADA8.?[9],
                        *v15,
                        *(__int16 *)(v3 + 38),
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
                        (const char *const)&stru_82ADA8.?,
                        *v15,
                        *(__int16 *)(v3 + 38),
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
                    fprintf(Stream, &stru_82ADA8.?[4], *v15, *(__int16 *)(v3 + 38), *v16, v14[19], *v32); /*0x588026*/
                  }
                }
                else
                {
                  v3 = i; /*0x588030*/
                }
                v14 = (__int16 *)MapClass::SpiralSearch((MapClass *)this); /*0x58803d*/
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



// ==== 0x005880A0  MapClass::FindFirstFirestorm  this=MapClass  sig=csp ====
int *__stdcall MapClass::FindFirstFirestorm(int *a1, int *a2, int *a3, int a4)
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
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  double v28; // st7
  int v29; // edi
  int v30; // ecx
  _DWORD *v31; // ecx
  _DWORD *v32; // eax
  int v33; // eax
  __int64 v34; // [esp+Ch] [ebp-3Ch]
  int v35; // [esp+Ch] [ebp-3Ch]
  int v36; // [esp+10h] [ebp-38h]
  double v37; // [esp+10h] [ebp-38h]
  int v38; // [esp+10h] [ebp-38h]
  __int16 v39; // [esp+1Ch] [ebp-2Ch]
  int v40; // [esp+1Ch] [ebp-2Ch]
  int v41; // [esp+20h] [ebp-28h]
  int v42; // [esp+20h] [ebp-28h]
  int v43; // [esp+24h] [ebp-24h]
  double v44; // [esp+28h] [ebp-20h]
  double v45; // [esp+30h] [ebp-18h]
  double v46; // [esp+40h] [ebp-8h]

  v4 = *a3; /*0x5880b1*/
  v5 = *a2; /*0x5880b4*/
  if ( *a2 != *a3 || a2[1] != a3[1] || a2[2] != a3[2] )
  {
    LODWORD(v34) = v5 / 256; /*0x5880f3*/
    HIDWORD(v34) = v4 / 256; /*0x5880f7*/
    if ( (unsigned __int16)(v5 / 256) == (unsigned __int16)(v4 / 256) )
    {
      LOWORD(v34) = v5 / 256; /*0x588104*/
      WORD1(v34) = a2[1] / 256; /*0x58811a*/
      v6 = WORD1(v34); /*0x588138*/
      v7 = a3[1] / 256; /*0x588141*/
      v39 = SWORD1(v34) >= (unsigned __int16)v7 ? -1 : 1;
      while ( (_WORD)v34 != WORD2(v34) || v6 != (_WORD)v7 ) /*0x58815d*/
      {
        v8 = (__int16)v34 + (v6 << 9); /*0x58816c*/
        if ( v8 < 0x40000 && (v9 = *(_DWORD **)(dword_87F924 + 4 * v8)) != 0 ) /*0x588182*/
        {
          v10 = v9; /*0x588184*/
        }
        else
        {
          v10 = unk_ABDC50; /*0x58818c*/
          dword_ABDC74 = v34; /*0x588191*/
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
      v14 = a2[1]; /*0x5881d8*/
      v15 = a3[1]; /*0x5881ec*/
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
          if ( v19 < 0x40000 && (v20 = *(_DWORD **)(dword_87F924 + 4 * v19)) != 0 ) /*0x58826f*/
          {
            v21 = v20; /*0x588271*/
          }
          else
          {
            v21 = unk_ABDC50; /*0x588279*/
            dword_ABDC74 = v34; /*0x58827e*/
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
                  *a1 = (v13 << 8) + 128; /*0x5882c2*/
                  a1[1] = (v6 << 8) + 128; /*0x5882e0*/
                  a1[2] = 0; /*0x5882e3*/
                  return a1; /*0x5882ec*/
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
          v25 = v5 - v5 % 256 + 256; /*0x58834d*/
        else
          v25 = v5 - v5 % 256; /*0x588335*/
        v36 = v25; /*0x588352*/
        if ( v40 >= 0 ) /*0x58835e*/
          v26 = v14 - v14 % 256 + 256; /*0x58838e*/
        else
          v26 = v14 - v14 % 256; /*0x588372*/
        v35 = v26; /*0x588374*/
        v42 = v4 - v5; /*0x58839b*/
        v27 = v36; /*0x58839f*/
        v28 = (double)v42; /*0x5883a3*/
        v44 = (double)(v36 - v5) / v28; /*0x5883bb*/
        v37 = (double)(v15 - v14); /*0x5883c7*/
        v45 = (double)(v26 - v14) / v37; /*0x5883d1*/
        v46 = 1.0 / v37; /*0x5883ef*/
        while ( (v44 <= 1.0 || v45 <= 1.0) && v44 >= 0.0 && v45 >= 0.0 ) /*0x58843d*/
        {
          v29 = v35; /*0x588445*/
          v30 = v27 / 256 + ((v35 / 256) << 9); /*0x58846a*/
          if ( v30 < 0 || v30 >= dword_87F928 || (v31 = *(_DWORD **)(dword_87F924 + 4 * v30)) == 0 ) /*0x588481*/
          {
            LOWORD(v38) = v27 / 256; /*0x588483*/
            HIWORD(v38) = v35 / 256; /*0x588488*/
            v31 = unk_ABDC50; /*0x588491*/
            dword_ABDC74 = v38; /*0x588496*/
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
                  *a1 = v27; /*0x588528*/
                  a1[1] = v35; /*0x58852a*/
                  a1[2] = 0; /*0x58852d*/
                  return a1; /*0x588536*/
                }
              }
            }
          }
          if ( v44 >= v45 ) /*0x5884d6*/
          {
            v35 += v40; /*0x588505*/
            v45 = (double)(v40 + v29 - a2[1]) * v46; /*0x588518*/
          }
          else
          {
            v27 += v43; /*0x5884df*/
            v44 = (double)(v27 - *a2) * (1.0 / v28); /*0x5884f3*/
          }
        }
      }
    }
  }
  *a1 = dword_ABDC10; /*0x588547*/
  a1[1] = dword_ABDC14; /*0x58854f*/
  a1[2] = dword_ABDC18; /*0x588558*/
  return a1; /*0x5882e6*/
}



// ==== 0x00588570  globalHelper  this=-  sig=csp ====
char __stdcall sub_588570(int a1, int a2, int a3)
{
  char v3; // cl
  int v4; // ebp
  int v5; // eax
  _WORD *v6; // edi
  unsigned int v7; // esi
  _DWORD *v8; // ecx
  int v9; // edx
  _DWORD *v10; // esi
  _DWORD *v11; // ecx
  int v12; // ebx
  __int16 v13; // si
  int *v14; // eax
  int v15; // edx
  int v17; // [esp+10h] [ebp-28h]
  int v18; // [esp+14h] [ebp-24h]
  __int16 v19; // [esp+16h] [ebp-22h]
  int v20; // [esp+18h] [ebp-20h]
  int i; // [esp+24h] [ebp-14h]
  int v22; // [esp+28h] [ebp-10h]
  _DWORD v23[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v3 = 0; /*0x588575*/
  for ( i = 0; i < 8; i += 2 ) /*0x588579*/
  {
    v4 = a3; /*0x588581*/
    v18 = 0; /*0x588585*/
    v5 = *(int *)(a3 + 1464) >> 8; /*0x588595*/
    v17 = *(_DWORD *)a1; /*0x58859a*/
    v22 = v5; /*0x58859e*/
    if ( v5 > 0 ) /*0x5885a2*/
    {
      v6 = (_WORD *)(4 * (v3 & 7) + 9041544); /*0x5885ab*/
      while ( 1 ) /*0x5885c3*/
      {
        HIWORD(v20) = HIWORD(v17) + v6[1]; /*0x5885c3*/
        LOWORD(v20) = v17 + *v6; /*0x5885c8*/
        v17 = v20; /*0x5885da*/
        v7 = (SHIWORD(v20) << 9) + (__int16)v20; /*0x5885de*/
        if ( v7 >= 0x40000 || (v8 = *(_DWORD **)(dword_87F924 + 4 * v7)) == 0 ) /*0x5885f7*/
        {
          dword_ABDC74 = v20; /*0x5885f9*/
          v8 = unk_ABDC50; /*0x5885ff*/
        }
        v5 = (int)Cell::IsBridge(v8); /*0x588604*/
        if ( v5 ) /*0x58860b*/
        {
          if ( *(_BYTE *)(*(_DWORD *)(v5 + 1312) + 5824) ) /*0x588613*/
          {
            v9 = *(_DWORD *)(v5 + 540); /*0x58861d*/
            LOBYTE(v5) = a2; /*0x588623*/
            if ( v9 == a2 ) /*0x588629*/
              break; /*0x588629*/
          }
        }
        if ( v7 < 0x40000 && (v10 = *(_DWORD **)(dword_87F924 + 4 * v7)) != 0 ) /*0x588641*/
        {
          v11 = v10; /*0x588643*/
        }
        else
        {
          dword_ABDC74 = v20; /*0x588647*/
          v11 = unk_ABDC50; /*0x58864d*/
        }
        LOBYTE(v5) = CellClass::IsPassable((int)v11, *(_DWORD *)(a3 + 1660), a3, a2); /*0x58865f*/
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
        v13 = *v6 + *(_WORD *)a1; /*0x5886ae*/
        v19 = *(_WORD *)(a1 + 2) + v6[1]; /*0x5886b4*/
        while ( 1 ) /*0x5886ca*/
        {
          v14 = (int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 140))(v4, a2); /*0x5886ca*/
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
          v4 = a3; /*0x5886bc*/
        }
      }
    }
LABEL_21:
    v3 = i + 2; /*0x588730*/
  }
  return v5; /*0x588744*/
}



// ==== 0x00588750  ScanBuildingPlacementCells  this=-  sig=csp ====
int __stdcall ScanBuildingPlacementCells(int *a1, int a2, int *a3)
{
  int *v3; // edi
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
  int v17; // [esp+8h] [ebp-28h]
  int v18; // [esp+Ch] [ebp-24h]
  int v19; // [esp+10h] [ebp-20h]
  __int16 v20; // [esp+12h] [ebp-1Eh]
  int i; // [esp+1Ch] [ebp-14h]
  int v22; // [esp+20h] [ebp-10h]
  _DWORD v23[3]; // [esp+24h] [ebp-Ch] BYREF

  v3 = a3; /*0x588754*/
  result = a3[917]; /*0x588758*/
  v22 = result; /*0x588760*/
  if ( !result ) /*0x588764*/
    return result; /*0x588764*/
  LOBYTE(result) = 0; /*0x58876b*/
  for ( i = 0; i < 8; i += 2 ) /*0x58876f*/
  {
    v5 = v3[366] >> 8; /*0x58877d*/
    v6 = *a1; /*0x588780*/
    v19 = v5; /*0x588782*/
    v18 = *a1; /*0x588788*/
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
      LOWORD(v6) = v17; /*0x5887d0*/
      if ( v8 >= 0x40000 || (v9 = *(_DWORD **)(dword_87F924 + 4 * v8)) == 0 ) /*0x5887e8*/
      {
        dword_ABDC74 = v17; /*0x5887ea*/
        v9 = unk_ABDC50; /*0x5887f0*/
      }
      v10 = v9[17]; /*0x5887f5*/
      if ( v10 == -1 ) /*0x5887fb*/
        goto LABEL_15; /*0x5887fb*/
      if ( *(_DWORD *)(v22 + 660) == v10 ) /*0x588807*/
      {
        if ( v8 >= 0x40000 || (v11 = *(_DWORD **)(dword_87F924 + 4 * v8)) == 0 ) /*0x58881f*/
        {
          dword_ABDC74 = v17; /*0x588821*/
          v11 = unk_ABDC50; /*0x588827*/
        }
        if ( *(_DWORD *)(a2 + 48) == v11[20] ) /*0x588836*/
          break; /*0x588836*/
      }
      v5 = v19; /*0x588838*/
LABEL_15:
      if ( v8 >= 0x40000 || (v12 = *(_DWORD **)(dword_87F924 + 4 * v8)) == 0 ) /*0x588852*/
      {
        dword_ABDC74 = v17; /*0x588854*/
        v12 = unk_ABDC50; /*0x58885a*/
      }
      if ( CellClass::IsPassable((int)v12, v3[415], (int)v3, a2) ) /*0x58886e*/
      {
        if ( ++v16 < v5 ) /*0x588886*/
          continue; /*0x588886*/
      }
      goto LABEL_24; /*0x588886*/
    }
    v13 = v16; /*0x588891*/
    if ( v16 > 0 ) /*0x588897*/
    {
      v14 = *(_WORD *)a1 + *v7; /*0x5888bb*/
      v20 = *((_WORD *)a1 + 1) + v7[1]; /*0x5888bf*/
      do /*0x588933*/
      {
        v15 = (*(int (__thiscall **)(int *, int))(*v3 + 140))(v3, a2); /*0x5888ce*/
        v23[2] = 0; /*0x5888ea*/
        v23[0] = (v14 << 8) + 128; /*0x5888f5*/
        v23[1] = (v20 << 8) + 128; /*0x588903*/
        (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v15 + 216))(v15, v23, 0); /*0x58890c*/
        v3 = a3; /*0x58891c*/
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
int __thiscall Object_Create(ObjectClass *this, int a2)
{
  int v2; // eax
  int result; // eax

  v2 = *((_DWORD *)this + 82); /*0x588960*/
  if ( v2 >= a2 ) /*0x58896c*/
    v2 = a2; /*0x58896e*/
  *((_DWORD *)this + 82) = v2; /*0x588972*/
  result = v2 <= 0 ? 0 : v2;
  *((_DWORD *)this + 82) = result; /*0x588980*/
  return result; /*0x588986*/
}



// ==== 0x00588990  ScenarioClass::CalcMinShroudLevel  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::CalcMinShroudLevel(ScenarioClass *this)
{
  int v1; // edi
  int i; // esi
  int v3; // eax
  int v4; // eax

  if ( this->altNextScenario[17] >= 13 )
  {
    v1 = this->altNextScenario[15]; /*0x58899d*/
    for ( i = 0; i < v1; ++i )
    {
      v3 = *(_DWORD *)(this->altNextScenario[14] + 4 * i); /*0x5889af*/
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
int __thiscall LayerClass::ClearFactoryCellAssignments(LayerClass *this)
{
  LayerClass *v1; // ebp
  int v2; // eax
  int result; // eax
  int v4; // ecx
  int v5; // ebx
  int v6; // ecx
  int v7; // edi
  int i; // edx
  unsigned int v9; // eax
  int *v10; // eax
  int v11; // [esp+4h] [ebp-10h]
  int v13; // [esp+Ch] [ebp-8h]
  __int16 v14; // [esp+Ch] [ebp-8h]
  __int16 v15; // [esp+Eh] [ebp-6h]

  v1 = this; /*0x588ac4*/
  v2 = *((_DWORD *)this + 61); /*0x588aca*/
  *((_DWORD *)this + 67) = 1; /*0x588ad0*/
  *((_DWORD *)this + 68) = v2; /*0x588ada*/
  *((_DWORD *)this + 69) = v2 - 1; /*0x588ae3*/
  *((_DWORD *)this + 70) = (v2 << 11) + *((_DWORD *)this + 79) + 4; /*0x588af8*/
  for ( result = LayerClass::CellIteratorNext(this); result; result = LayerClass::CellIteratorNext(v1) ) /*0x588b05*/
  {
    v4 = *(_DWORD *)(result + 72); /*0x588b0e*/
    if ( v4 != -1 ) /*0x588b14*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v4); /*0x588b20*/
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
            if ( v9 >= 0x40000 || (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) == 0 ) /*0x588b99*/
            {
              LOWORD(v11) = i + v14; /*0x588b7b*/
              HIWORD(v11) = v7 + v15; /*0x588b70*/
              g_MissionQueueFrame.briefing[139] = v11; /*0x588b9f*/
              v10 = &g_MissionQueueFrame.briefing[130]; /*0x588ba4*/
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
char *__thiscall MapClass::Destru_vt04(MapClass *this, char a2)
{
  MapClass::Destruct((char *)this); /*0x588bf3*/
  if ( (a2 & 1) != 0 ) /*0x588bfd*/
    __3_YAXPAX_Z(this); /*0x588c00*/
  return (char *)this; /*0x588c0a*/
}



// ==== 0x00588C10  CellClass::CopyNeighborData  this=ObjectClass  sig=csp ====
int __thiscall sub_588C10(int this, int a2)
{
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16); /*0x588c19*/
  *(_BYTE *)(this + 20) = *(_BYTE *)(a2 + 20); /*0x588c1f*/
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24); /*0x588c25*/
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28); /*0x588c2b*/
  *(_BYTE *)(this + 32) = *(_BYTE *)(a2 + 32); /*0x588c31*/
  return this; /*0x588c34*/
}



// ==== 0x00588C40  CellClass::initCellData  this=CellClass  sig=csp ====
_WORD *__thiscall CellClass::initCellData(CellClass *this, _WORD *a2)
{
  LOWORD(this->mapCoords[0]) += *a2; /*0x588c49*/
  HIWORD(this->mapCoords[0]) += a2[1]; /*0x588c50*/
  return this; /*0x588c54*/
}



// ==== 0x00588C60  CellStruct::Sub  this=AbstractClass  sig=csp ====
_DWORD *__thiscall CellStruct::Sub(CellStruct *this, _DWORD *a2, _WORD *a3)
{
  __int16 v3; // dx
  __int16 v4; // cx
  _WORD *v6; // [esp+8h] [ebp+8h]

  v3 = this->field_0; /*0x588c60*/
  v4 = HIWORD(this->field_0) - a3[1]; /*0x588c6e*/
  LOWORD(v6) = v3 - *a3; /*0x588c76*/
  HIWORD(v6) = v4; /*0x588c7b*/
  *a2 = v6; /*0x588c84*/
  return a2; /*0x588c86*/
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
unsigned int __thiscall DynamicVectorClass_SubzoneConn::Remove(
        _DynamicVectorClass_USubzoneConnectionStruct *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x588cc0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x588cd5*/
  else
    return 0; /*0x588cc7*/
}



// ==== 0x00588CE0  _DynamicVectorClass_UZoneConnectionClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall unknown::ddtor(_DynamicVectorClass_UZoneConnectionClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x588ce6*/
  this->m_10 = 0; /*0x588ce9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x588cf0*/
  {
    __3_YAXPAX_Z(v2); /*0x588cf6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x588cfe*/
  }
  BYTE1(this->m_C) = 0; /*0x588d01*/
  this->m_8 = 0; /*0x588d04*/
}



// ==== 0x00588D10  _DynamicVectorClass_UZoneConnectionClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall unknown::Write(_DynamicVectorClass_UZoneConnectionClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x588d10*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x588d25*/
  else
    return 0; /*0x588d17*/
}



// ==== 0x00588D30  _VectorClass_UZoneConnectionClass::Seek  this=VectorClass  sig=csp ====
int __thiscall unknown::Seek(_VectorClass_UZoneConnectionClass *this, int a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3] + 16 * a3; /*0x588d3a*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x588d42*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4); /*0x588d47*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v3 + 8); /*0x588d4d*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v3 + 12); /*0x588d53*/
  return a2; /*0x588d56*/
}



// ==== 0x00588D60  _DynamicVectorClass_USubzoneTrackingStruct::ClearAndFree  this=DynamicVector  sig=csp ====
void __thiscall SubzoneConnectionVector::ClearAndFree(_DynamicVectorClass_USubzoneTrackingStruct *this)
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

  v2 = *(_DWORD *)&this->m_1[3]; /*0x588d67*/
  *(_DWORD *)&this->m_D[3] = 0; /*0x588d6a*/
  if ( v2 && this->m_D[0] ) /*0x588d71*/
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
        *(_DWORD *)v7 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x588d9a*/
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
    *(_DWORD *)&this->m_1[3] = 0; /*0x588dcb*/
  }
  this->m_D[0] = 0; /*0x588dce*/
  this->m_8 = 0; /*0x588dd1*/
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
int __thiscall VectorClass_USubzoneTrackingStruct::Clear(_VectorClass_USubzoneTrackingStruct *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx

  v3 = *(_DWORD *)&this->m_1[3] + 36 * a3; /*0x588e23*/
  *(_DWORD *)(a2 + 4) = 0; /*0x588e29*/
  *(_DWORD *)(a2 + 8) = 0; /*0x588e2c*/
  *(_BYTE *)(a2 + 12) = 1; /*0x588e2f*/
  *(_BYTE *)(a2 + 13) = 0; /*0x588e33*/
  *(_DWORD *)a2 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x588e36*/
  if ( a2 != v3 ) /*0x588e3c*/
  {
    VectorClass::Cleanup5(a2); /*0x588e40*/
    v4 = *(_DWORD *)(v3 + 8); /*0x588e46*/
    *(_DWORD *)(a2 + 8) = v4; /*0x588e4b*/
    if ( v4 ) /*0x588e4e*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x588e58*/
      if ( v5 ) /*0x588e62*/
      {
        v6 = v5; /*0x588e67*/
        if ( v4 - 1 >= 0 ) /*0x588e6b*/
        {
          v7 = v4; /*0x588e6d*/
          do /*0x588e77*/
          {
            *(_DWORD *)v6 = 0; /*0x588e6e*/
            *(_BYTE *)(v6 + 4) = 0; /*0x588e70*/
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
  *(_DWORD *)a2 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x588ec2*/
  *(_WORD *)(a2 + 24) = *(_WORD *)(v3 + 24); /*0x588ecc*/
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(v3 + 28); /*0x588ed3*/
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(v3 + 32); /*0x588ed9*/
  return a2; /*0x588eb8*/
}



// ==== 0x00588EF0  _VectorClass_PAVCellClass::InitCellVe_vt06  this=VectorClass  sig=csp ====
int __thiscall MapClass::InitCellVe_vt06(_VectorClass_PAVCellClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x588efa*/
}



// ==== 0x00588F00  _DynamicVectorClass_W4PassabilityType::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_W4PassabilityType::Destroy(_DynamicVectorClass_W4PassabilityType *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x588f06*/
  this->m_10 = 0; /*0x588f09*/
  if ( v2 && BYTE1(this->m_C) ) /*0x588f10*/
  {
    __3_YAXPAX_Z(v2); /*0x588f16*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x588f1e*/
  }
  BYTE1(this->m_C) = 0; /*0x588f21*/
  this->m_8 = 0; /*0x588f24*/
}



// ==== 0x00588F30  _DynamicVectorClass_W4PassabilityType::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_W4PassabilityType::GetItemIndex(
        _DynamicVectorClass_W4PassabilityType *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x588f30*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x588f45*/
  else
    return 0; /*0x588f37*/
}



// ==== 0x00588F50  _VectorClass_W4PassabilityType::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::Clear(_VectorClass_W4PassabilityType *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x588f5a*/
}



// ==== 0x00588F60  _DynamicVectorClass_U_HashObject_II::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_W4PassabilityType::Destroy_0(_DynamicVectorClass_U_HashObject_II *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x588f66*/
  this->m_10 = 0; /*0x588f69*/
  if ( v2 && BYTE1(this->m_C) ) /*0x588f70*/
  {
    __3_YAXPAX_Z(v2); /*0x588f76*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x588f7e*/
  }
  BYTE1(this->m_C) = 0; /*0x588f81*/
  this->m_8 = 0; /*0x588f84*/
}



// ==== 0x00588F90  _DynamicVectorClass_U_HashObject_II::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_W4PassabilityType::GetItemIndex_0(
        _DynamicVectorClass_U_HashObject_II *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x588f90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x588fa5*/
  else
    return 0; /*0x588f97*/
}



// ==== 0x00588FB0  _VectorClass_U_HashObject_II::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UHashObject_uint_uint::Clear(_VectorClass_U_HashObject_II *this, _DWORD *a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x588fb0*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x588fb7*/
  v5 = v3 + 8 * a3; /*0x588fba*/
  *a2 = v4; /*0x588fc1*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x588fc6*/
  return a2; /*0x588fc9*/
}



// ==== 0x00588FD0  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::Destroy_1  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_W4PassabilityType::Destroy_1(
        _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x588fd6*/
  this->m_10 = 0; /*0x588fd9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x588fe0*/
  {
    __3_YAXPAX_Z(v2); /*0x588fe6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x588fee*/
  }
  BYTE1(this->m_C) = 0; /*0x588ff1*/
  this->m_8 = 0; /*0x588ff4*/
}



// ==== 0x00589000  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::GetItemIndex_1  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_W4PassabilityType::GetItemIndex_1(
        _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x589000*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0xCu; /*0x58901e*/
  else
    return 0; /*0x589007*/
}



// ==== 0x00589030  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UHashObject_uint_SubzoneConn::Clear(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        int a2,
        int a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x589034*/
  v4 = *(_DWORD *)(v3 + 12 * a3); /*0x58903a*/
  v5 = v3 + 12 * a3; /*0x58903d*/
  *(_DWORD *)a2 = v4; /*0x589044*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v5 + 4); /*0x589049*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v5 + 8); /*0x58904f*/
  return a2; /*0x589052*/
}



// ==== 0x00589060  ?$VectorClass@PAVCellClass@@::InitCellVe_vt00  this=VectorClass  sig=csp ====
_DWORD *__thiscall MapClass::InitCellVe_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x589063*/
  *Block = &VectorClass<CellClass *>::`vftable'; /*0x589066*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x589070*/
  {
    __3_YAXPAX_Z(v3); /*0x589078*/
    *(Block + 1) = 0; /*0x589080*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x58908b*/
  *(Block + 2) = 0; /*0x589091*/
  if ( (a2 & 1) != 0 ) /*0x589098*/
    __3_YAXPAX_Z(Block); /*0x58909b*/
  return Block; /*0x5890a5*/
}



// ==== 0x005890B0  _DynamicVectorClass_USubzoneConnectionStruct::Add  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_SubzoneConn::Add(_DynamicVectorClass_USubzoneConnectionStruct *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5890b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x5890b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5890c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5890c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5890d0*/
  }
  BYTE1(this->m_C) = 0; /*0x5890db*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x5890e1*/
  if ( (a2 & 1) != 0 ) /*0x5890e8*/
    __3_YAXPAX_Z(this); /*0x5890eb*/
  return this->__pad_0; /*0x5890f5*/
}



// ==== 0x00589100  Subzone::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall Subzone::Constructor(Subzone *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx

  this->Subzone_field_0x04 = 0; /*0x58910d*/
  this->Subzone_field_0x08 = a2; /*0x589110*/
  this->IsInitialized = 1; /*0x589113*/
  this->IsAllocated = 0; /*0x589117*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58911a*/
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
      this->Subzone_field_0x04 = a3; /*0x58913f*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x58914c*/
      if ( v6 ) /*0x589156*/
      {
        v7 = v6; /*0x58915b*/
        if ( a2 - 1 >= 0 ) /*0x58915f*/
        {
          v8 = a2; /*0x589161*/
          do /*0x58916b*/
          {
            *(_DWORD *)v7 = 0; /*0x589162*/
            *(_BYTE *)(v7 + 4) = 0; /*0x589164*/
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
      this->Subzone_field_0x04 = v6; /*0x589171*/
      this->IsAllocated = 1; /*0x589174*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x589178*/
  *((_DWORD *)this + 5) = 10; /*0x58917e*/
  this->Items = 0; /*0x589185*/
  return this->__pad_0; /*0x58918a*/
}



// ==== 0x00589190  _DynamicVectorClass_USubzoneConnectionStruct::Release  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_SubzoneConn::Release(
        _DynamicVectorClass_USubzoneConnectionStruct *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
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
    LOBYTE(this->m_C) = 0; /*0x5891a8*/
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
      v6 = __2_YAPAXI_Z(8 * a2); /*0x5891b7*/
      if ( v6 ) /*0x5891c1*/
      {
        v7 = v6; /*0x5891c6*/
        if ( a2 - 1 >= 0 ) /*0x5891ca*/
        {
          v8 = a2; /*0x5891cc*/
          do /*0x5891d6*/
          {
            *(_DWORD *)v7 = 0; /*0x5891cd*/
            *(_BYTE *)(v7 + 4) = 0; /*0x5891cf*/
            v7 += 8; /*0x5891d2*/
            --v8; /*0x5891d5*/
          }
          while ( v8 ); /*0x5891d6*/
        }
        v5 = (char *)v6; /*0x5891d8*/
      }
      else
      {
        v5 = 0; /*0x5891dc*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x5891f7*/
    if ( !v5 ) /*0x5891fb*/
      return 0; /*0x589284*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x589201*/
    {
      v11 = *(_DWORD *)&this->__pad_5[3]; /*0x589206*/
      if ( a2 < v11 ) /*0x58920b*/
        v11 = a2; /*0x58920d*/
      v12 = 0; /*0x58920f*/
      if ( v11 > 0 ) /*0x589213*/
      {
        do /*0x589232*/
        {
          v13 = 8 * v12; /*0x589218*/
          v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v12++); /*0x589221*/
          *(_DWORD *)&v5[v13] = *v14; /*0x589228*/
          *(_DWORD *)&v5[v13 + 4] = v14[1]; /*0x58922e*/
        }
        while ( v12 < v11 ); /*0x589232*/
        v3 = a2; /*0x589234*/
      }
      if ( BYTE1(this->m_C) ) /*0x58923a*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x589243*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x58924b*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x589256*/
    *(_DWORD *)&this->__pad_5[3] = v3; /*0x58925c*/
    BYTE1(this->m_C) = a3 == 0; /*0x58925f*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_USubzoneConnectionStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x589268*/
  }
  v15 = *(_DWORD *)&this->__pad_5[3]; /*0x58926b*/
  if ( v15 < *(_DWORD *)this->__tail_10 ) /*0x589273*/
    *(_DWORD *)this->__tail_10 = v15; /*0x589275*/
  return 1; /*0x589278*/
}



// ==== 0x00589290  Vector8::EraseAt  this=Vector8  sig=csp ====
int __thiscall Vector8::EraseAt(Vector8 *this, int a2)
{
  int v2; // edx
  int result; // eax
  int v4; // edx
  int v5; // edx

  v2 = *((_DWORD *)this + 4); /*0x589290*/
  result = a2; /*0x589293*/
  if ( a2 >= v2 ) /*0x589299*/
  {
    LOBYTE(result) = 0; /*0x5892c4*/
  }
  else
  {
    v4 = v2 - 1; /*0x58929b*/
    *((_DWORD *)this + 4) = v4; /*0x58929e*/
    if ( a2 < v4 ) /*0x5892a1*/
    {
      do /*0x5892bc*/
      {
        v5 = *((_DWORD *)this + 1); /*0x5892a4*/
        ++result; /*0x5892a7*/
        *(_DWORD *)(v5 + 8 * result - 8) = *(_DWORD *)(v5 + 8 * result); /*0x5892ab*/
        *(_DWORD *)(v5 + 8 * result - 4) = *(_DWORD *)(v5 + 8 * result + 4); /*0x5892b3*/
      }
      while ( result < *((_DWORD *)this + 4) ); /*0x5892bc*/
    }
    LOBYTE(result) = 1; /*0x5892bf*/
  }
  return result; /*0x5892c1*/
}



// ==== 0x005892D0  _DynamicVectorClass_USubzoneConnectionStruct::GetSize  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_SubzoneConn::GetSize(_DynamicVectorClass_USubzoneConnectionStruct *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)this->__tail_10; /*0x5892d0*/
  result = 0; /*0x5892d3*/
  if ( v2 <= 0 ) /*0x5892d8*/
    return -1; /*0x5892ef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x5892de*/
  {
    if ( ++result >= v2 ) /*0x5892ed*/
      return -1; /*0x5892ed*/
  }
  return result; /*0x5892f2*/
}



// ==== 0x00589300  _VectorClass_UZoneConnectionClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall unknown::AddRef(_VectorClass_UZoneConnectionClass *this, int a2)
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
    v5 = *(_WORD **)&this->m_1[3]; /*0x58931a*/
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
int __thiscall MapClass::AllocateCellDataBuffer(void *this, int a2, char *a3)
{
  int v3; // ebp
  int result; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  char *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v14; // edx
  int v15; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x589373*/
  if ( !a2 ) /*0x58937f*/
  {
    result = (*(int (__thiscall **)(void *))(this->IsInitialized)(this); /*0x589492*/
    LOBYTE(result) = 1; /*0x589498*/
    return result; /*0x589498*/
  }
  result = (int)a3; /*0x589385*/
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
      result = (int)a3; /*0x5893fa*/
    }
  }
  else
  {
    result = (int)__2_YAPAXI_Z(16 * a2); /*0x589396*/
    if ( !result ) /*0x5893a0*/
    {
      v8 = 0; /*0x5893cd*/
      goto LABEL_14; /*0x5893cf*/
    }
    if ( a2 - 1 >= 0 ) /*0x5893a7*/
    {
      v6 = a2; /*0x5893a9*/
      v7 = result + 2; /*0x5893aa*/
      do /*0x5893c9*/
      {
        *(_WORD *)(v7 - 2) = 0; /*0x5893b0*/
        *(_WORD *)v7 = 0; /*0x5893b4*/
        *(_WORD *)(v7 + 2) = 0; /*0x5893b7*/
        *(_WORD *)(v7 + 4) = 0; /*0x5893bb*/
        *(_BYTE *)(v7 + 6) = 0; /*0x5893bf*/
        *(_DWORD *)(v7 + 10) = -1; /*0x5893c2*/
        v7 += 16; /*0x5893c5*/
        --v6; /*0x5893c8*/
      }
      while ( v6 ); /*0x5893c9*/
    }
  }
  v8 = result; /*0x5893fe*/
LABEL_14:
  this->IsInitialized = 1; /*0x589400*/
  if ( v8 ) /*0x589406*/
  {
    if ( this->Items ) /*0x589412*/
    {
      v11 = this->Capacity; /*0x589417*/
      if ( a2 < v11 ) /*0x58941c*/
        v11 = a2; /*0x58941e*/
      if ( v11 > 0 ) /*0x589422*/
      {
        v12 = 0; /*0x589424*/
        v15 = v11; /*0x589426*/
        do /*0x589456*/
        {
          v13 = (_DWORD *)(this->Items + v12); /*0x58942f*/
          v14 = (_DWORD *)(v12 + v8); /*0x589431*/
          v12 += 16; /*0x589434*/
          *v14 = *v13; /*0x589439*/
          v14[1] = v13[1]; /*0x58943e*/
          v14[2] = v13[2]; /*0x589444*/
          v14[3] = v13[3]; /*0x58944a*/
          --v15; /*0x589452*/
        }
        while ( v15 ); /*0x589456*/
        v3 = a2; /*0x589458*/
      }
      if ( this->IsAllocated ) /*0x58945c*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x589465*/
        this->Items = 0; /*0x58946d*/
      }
    }
    this->Items = v8; /*0x589478*/
    result = a3 == 0; /*0x58947b*/
    this->Capacity = v3; /*0x58947e*/
    this->IsAllocated = a3 == 0; /*0x589481*/
    LOBYTE(result) = 1; /*0x589487*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x58940b*/
  }
  return result; /*0x589408*/
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
char __thiscall unknown::Release(_DynamicVectorClass_UZoneConnectionClass *this, int a2, _WORD *a3)
{
  int v3; // ebx
  _WORD *v5; // esi
  _WORD *v6; // ebp
  CellStruct *v7; // esi
  int v8; // ebp
  int m_8; // ecx
  int v10; // eax
  _DWORD *v11; // ebx
  _DWORD *v12; // edx
  int v13; // eax

  v3 = a2; /*0x589551*/
  if ( a2 ) /*0x58955c*/
  {
    LOBYTE(this->m_C) = 0; /*0x589566*/
    if ( a3 ) /*0x58956c*/
    {
      if ( a2 - 1 >= 0 ) /*0x5895aa*/
      {
        v7 = (CellStruct *)(a3 + 2); /*0x5895ac*/
        v8 = a2; /*0x5895af*/
        do /*0x5895d4*/
        {
          LOWORD(v7[-1].field_2C4) = 0; /*0x5895b8*/
          HIWORD(v7[-1].field_2C4) = 0; /*0x5895bc*/
          CellStruct::Set(v7, 0, 0); /*0x5895c0*/
          LOBYTE(v7->field_4) = 0; /*0x5895c5*/
          *(_DWORD *)v7->__pad_8 = -1; /*0x5895c9*/
          v7 = (CellStruct *)((char *)v7 + 16); /*0x5895d0*/
          --v8; /*0x5895d3*/
        }
        while ( v8 ); /*0x5895d4*/
      }
      v5 = a3; /*0x5895d6*/
    }
    else
    {
      v5 = (_WORD *)__2_YAPAXI_Z(16 * a2); /*0x589579*/
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
    LOBYTE(this->m_C) = 1; /*0x5895dc*/
    if ( !v5 ) /*0x5895e0*/
      return 0; /*0x589674*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5895e6*/
    {
      m_8 = this->m_8; /*0x5895ed*/
      if ( v3 < m_8 ) /*0x5895f2*/
        m_8 = v3; /*0x5895f4*/
      if ( m_8 > 0 ) /*0x5895f8*/
      {
        v10 = 0; /*0x5895fa*/
        do /*0x58961e*/
        {
          v11 = &v5[v10]; /*0x5895ff*/
          v12 = (_DWORD *)(v10 * 2 + *(_DWORD *)&this->m_1[3]); /*0x589602*/
          v10 += 8; /*0x589604*/
          --m_8; /*0x589607*/
          *v11 = *v12; /*0x58960a*/
          v11[1] = v12[1]; /*0x58960f*/
          v11[2] = v12[2]; /*0x589615*/
          v11[3] = v12[3]; /*0x58961b*/
        }
        while ( m_8 ); /*0x58961e*/
        v3 = a2; /*0x589620*/
      }
      if ( BYTE1(this->m_C) ) /*0x589624*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58962f*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x589637*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x589649*/
    this->m_8 = v3; /*0x58964c*/
    BYTE1(this->m_C) = a3 == 0; /*0x58964f*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UZoneConnectionClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x589658*/
  }
  v13 = this->m_8; /*0x58965b*/
  if ( v13 < this->m_10 ) /*0x589663*/
    this->m_10 = v13; /*0x589665*/
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
int __thiscall unknown::Read(_DynamicVectorClass_UZoneConnectionClass *this, _WORD *a2)
{
  int m_10; // esi
  int result; // eax
  _WORD *i; // ecx

  m_10 = this->m_10; /*0x5896a2*/
  result = 0; /*0x5896a5*/
  if ( m_10 <= 0 ) /*0x5896aa*/
    return -1; /*0x5896e1*/
  for ( i = *(_WORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 8 ) /*0x5896b0*/
  {
    if ( ++result >= m_10 ) /*0x5896df*/
      return -1; /*0x5896df*/
  }
  return result; /*0x5896e4*/
}



// ==== 0x005896F0  _VectorClass_USubzoneTrackingStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_USubzoneTrackingStruct::AddRef(_VectorClass_USubzoneTrackingStruct *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  _DWORD *i; // ecx

  m_8 = this->m_8; /*0x5896f6*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5896ff*/
  {
    v3 = 0; /*0x589701*/
    if ( m_8 <= 0 ) /*0x589705*/
      return 1; /*0x589735*/
    v4 = (_DWORD *)(*(_DWORD *)(a2 + 4) + 28); /*0x58970d*/
    for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 28); *((_WORD *)i - 2) == *((_WORD *)v4 - 2) && *i == *v4; i += 9 ) /*0x589710*/
    {
      ++v3; /*0x589725*/
      v4 += 9; /*0x589726*/
      if ( v3 >= m_8 ) /*0x58972e*/
        return 1; /*0x58972e*/
    }
  }
  return 0; /*0x589730*/
}



// ==== 0x00589740  _VectorClass_USubzoneTrackingStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_USubzoneTrackingStruct::Release(_VectorClass_USubzoneTrackingStruct *this, int a2, int *a3)
{
  int v3; // edi
  _VectorClass_USubzoneTrackingStruct *v4; // ebp
  int *v5; // eax
  VectorClass *v6; // esi
  int *v7; // esi
  int *v8; // ecx
  int m_8; // eax
  int *v11; // edi
  char *v12; // esi
  int v13; // esi
  int v14; // eax
  void *v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // esi
  void *v19; // eax
  int *v20; // [esp+10h] [ebp-Ch]
  VectorClass *v22; // [esp+18h] [ebp-4h]
  int v23; // [esp+18h] [ebp-4h]
  void *v24; // [esp+18h] [ebp-4h]
  int v25; // [esp+20h] [ebp+4h]

  v3 = a2; /*0x589747*/
  v4 = this; /*0x58974d*/
  if ( a2 ) /*0x589755*/
  {
    LOBYTE(this->m_C) = 0; /*0x58975f*/
    if ( a3 ) /*0x589764*/
    {
      *a3 = a2; /*0x5897d9*/
      v7 = a3 + 1; /*0x5897de*/
      if ( a2 - 1 >= 0 ) /*0x5897e3*/
      {
        do /*0x589817*/
        {
          VectorClass::ConstructSubzone((VectorClass *)v7, 0, 0); /*0x5897f1*/
          *v7 = (int)&DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x5897f6*/
          v7[5] = 10; /*0x5897fc*/
          v7[4] = 0; /*0x5897ff*/
          (*(void (__thiscall **)(int *))(*v7 + 12))(v7); /*0x589806*/
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
        v6 = (VectorClass *)(v5 + 1); /*0x58977f*/
        v22 = (VectorClass *)(v5 + 1); /*0x589785*/
        if ( a2 - 1 >= 0 ) /*0x58978b*/
        {
          do /*0x5897bf*/
          {
            VectorClass::ConstructSubzone(v6, 0, 0); /*0x589799*/
            v6->vtable0 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58979e*/
            v6[1].Items = (void *)10; /*0x5897a4*/
            v6[1].vtable0 = 0; /*0x5897a7*/
            (*((void (__thiscall **)(VectorClass *))v6->vtable0 + 3))(v6); /*0x5897ae*/
            LOWORD(v6[1].Capacity) = 0; /*0x5897b1*/
            *(_DWORD *)&v6[1].IsInitialized = 0; /*0x5897b5*/
            v6[2].vtable0 = 0; /*0x5897b8*/
            v6 = (VectorClass *)((char *)v6 + 36); /*0x5897bb*/
            --v3; /*0x5897be*/
          }
          while ( v3 ); /*0x5897bf*/
          v3 = a2; /*0x5897c1*/
          v6 = v22; /*0x5897c5*/
          v4 = this; /*0x5897c9*/
        }
        v20 = (int *)v6; /*0x5897cd*/
      }
      else
      {
        v20 = 0; /*0x5897d3*/
      }
    }
    v8 = v20; /*0x58982c*/
    LOBYTE(v4->m_C) = 1; /*0x589830*/
    if ( v20 ) /*0x589836*/
    {
      if ( *(_DWORD *)&v4->m_1[3] ) /*0x589844*/
      {
        m_8 = v4->m_8; /*0x58984d*/
        if ( v3 < m_8 ) /*0x589852*/
          m_8 = v3; /*0x589854*/
        if ( m_8 > 0 ) /*0x589858*/
        {
          v11 = v20 + 5; /*0x58985f*/
          v23 = m_8; /*0x589864*/
          do /*0x5898a9*/
          {
            v12 = (char *)v11 + *(_DWORD *)&this->m_1[3] + -20 - (_DWORD)v20; /*0x589876*/
            VectorClass_USubzoneTrackingStruct::SetCapacity((VectorClass_USubzoneTrackingStruct *)(v11 - 5), v12); /*0x589879*/
            *(v11 - 1) = *((_DWORD *)v12 + 4); /*0x589881*/
            *v11 = *((_DWORD *)v12 + 5); /*0x589887*/
            *((_WORD *)v11 + 2) = *((_WORD *)v12 + 12); /*0x58988d*/
            v11[2] = *((_DWORD *)v12 + 7); /*0x589894*/
            v11[3] = *((_DWORD *)v12 + 8); /*0x58989e*/
            v11 += 9; /*0x5898a1*/
            --v23; /*0x5898a5*/
          }
          while ( v23 ); /*0x5898a9*/
          v3 = a2; /*0x5898ab*/
          v4 = this; /*0x5898af*/
        }
        if ( BYTE1(v4->m_C) ) /*0x5898b3*/
        {
          v13 = *(_DWORD *)&v4->m_1[3]; /*0x5898b8*/
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
                *(_DWORD *)v18 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x5898df*/
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
          *(_DWORD *)&v4->m_1[3] = 0; /*0x589916*/
        }
        v8 = v20; /*0x589919*/
      }
      *(_DWORD *)&v4->m_1[3] = v8; /*0x58991d*/
      v4->m_8 = v3; /*0x589928*/
      BYTE1(v4->m_C) = a3 == 0; /*0x58992f*/
      return 1; /*0x589934*/
    }
    else
    {
      return 0; /*0x58983b*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_USubzoneTrackingStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x589942*/
    return 1; /*0x589948*/
  }
}



// ==== 0x00589960  _VectorClass_USubzoneTrackingStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_USubzoneTrackingStruct::ddtor(_VectorClass_USubzoneTrackingStruct *this)
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

  v2 = *(_DWORD *)&this->m_1[3]; /*0x589967*/
  if ( v2 && BYTE1(this->m_C) ) /*0x58996e*/
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
        *(_DWORD *)v7 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x589997*/
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
    *(_DWORD *)&this->m_1[3] = 0; /*0x5899c8*/
  }
  BYTE1(this->m_C) = 0; /*0x5899cb*/
  this->m_8 = 0; /*0x5899ce*/
}



// ==== 0x005899E0  _VectorClass_USubzoneTrackingStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_USubzoneTrackingStruct::GetSize(_VectorClass_USubzoneTrackingStruct *this, int a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5899e0*/
    return 0; /*0x5899ee*/
  m_8 = this->m_8; /*0x5899f4*/
  result = 0; /*0x5899f7*/
  if ( m_8 <= 0 ) /*0x5899fb*/
    return -1; /*0x589a22*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 28); /*0x589a04*/
        *((_WORD *)i - 2) != *(_WORD *)(a2 + 24) || *i != *(_DWORD *)(a2 + 28);
        i += 9 )
  {
    if ( ++result >= m_8 ) /*0x589a20*/
      return -1; /*0x589a20*/
  }
  return result; /*0x5899eb*/
}



// ==== 0x00589A30  _VectorClass_USubzoneTrackingStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_USubzoneTrackingStruct::GetCapacity(
        _VectorClass_USubzoneTrackingStruct *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x589a30*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0x24u; /*0x589a4e*/
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
    v10 = this->q008; /*0x589b15*/
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
  this->q008 = v3; /*0x589b93*/
  this->IsAllocated = a3 == 0; /*0x589b96*/
LABEL_28:
  v15 = this->q008; /*0x589ba3*/
  if ( v15 < this->Items ) /*0x589bab*/
    this->Items = v15; /*0x589bad*/
  return 1; /*0x589bb0*/
}



// ==== 0x00589BD0  MapClass::allocateMapBuffers  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MapClass::allocateMapBuffers(MapClass *this)
{
  this->MapClass_field_0x4 = 0; /*0x589bd6*/
  this->MapClass_field_0x8 = 0; /*0x589bd9*/
  LOBYTE(this->MapClass_field_0xC) = 1; /*0x589bdc*/
  BYTE1(this->MapClass_field_0xC) = 0; /*0x589be0*/
  this->MapClass_field_0x0 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x589be3*/
  this->MapClass_field_0x14 = (void *)10; /*0x589be9*/
  this->MapClass_field_0x10 = 0; /*0x589bf0*/
  VectorClass::CleanupSubzone((int)this); /*0x589bf3*/
  *(_WORD *)this->__pad_18 = 0; /*0x589bf9*/
  *(_DWORD *)&this->__pad_18[4] = 0; /*0x589bfd*/
  *(_DWORD *)&this->__pad_18[8] = 0; /*0x589c00*/
  return &this->MapClass_field_0x0; /*0x589c05*/
}



// ==== 0x00589C10  _DynamicVectorClass_USubzoneTrackingStruct::FindByCoord  this=DynamicVector  sig=csp ====
int __thiscall SubzoneConnectionVector::FindByCoord(_DynamicVectorClass_USubzoneTrackingStruct *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)&this->m_D[3]; /*0x589c10*/
  result = 0; /*0x589c15*/
  if ( v2 <= 0 ) /*0x589c1b*/
    return -1; /*0x589c42*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 28); /*0x589c24*/
        *((_WORD *)i - 2) != *(_WORD *)(a2 + 24) || *i != *(_DWORD *)(a2 + 28);
        i += 9 )
  {
    if ( ++result >= v2 ) /*0x589c40*/
      return -1; /*0x589c40*/
  }
  return result; /*0x589c45*/
}



// ==== 0x00589C50  TileVector::PushBack  this=TileVector  sig=csp ====
int __thiscall TileVector::PushBack(TileVector *this, _DWORD *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // edx

  v3 = *((_DWORD *)this + 2); /*0x589c53*/
  result = *((_DWORD *)this + 4); /*0x589c56*/
  if ( result < v3 /*0x589c7d*/
    || (*((_BYTE *)this + 13) || !v3)
    && (result = *((_DWORD *)this + 5), result > 0)
    && (result = (*(int (__thiscall **)(TileVector *, int, _DWORD))(*(_DWORD *)this + 8))(this, v3 + result, 0),
        (_BYTE)result) )
  {
    result = *((_DWORD *)this + 4); /*0x589c85*/
    v5 = *((_DWORD *)this + 1); /*0x589c88*/
    *((_DWORD *)this + 4) = result + 1; /*0x589c8e*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x589c98*/
    LOBYTE(result) = 1; /*0x589c9b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x589c7f*/
  }
  return result; /*0x589c81*/
}



// ==== 0x00589CA0  _VectorClass_PAVCellClass::InitCellVe_vt01  this=VectorClass  sig=csp ====
char __thiscall MapClass::InitCellVe_vt01(_VectorClass_PAVCellClass *this, int a2)
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
    v4 = *(_DWORD **)&this->m_1[3]; /*0x589cb5*/
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
char __thiscall RadarClass::updateRadarCells(RadarClass *this, int a2, _DWORD *a3)
{
  _DWORD *RadarClass_field_0x0; // ecx
  int v4; // edx
  char *v5; // esi
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // ecx

  RadarClass_field_0x0 = this->RadarClass_field_0x0; /*0x589e24*/
  v4 = RadarClass_field_0x0[6 * a2 + 4]; /*0x589e30*/
  v5 = (char *)&RadarClass_field_0x0[6 * a2]; /*0x589e34*/
  v6 = (_DWORD *)*((_DWORD *)v5 + 1); /*0x589e37*/
  v7 = v4 - 1; /*0x589e3b*/
  if ( v4 - 1 < 0 ) /*0x589e40*/
  {
LABEL_4:
    v8 = *((_DWORD *)v5 + 2); /*0x589e4e*/
    if ( v4 < v8 /*0x589e70*/
      || (v5[13] || !v8)
      && (v9 = *((_DWORD *)v5 + 5), v9 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v5 + 8))(v5, v8 + v9, 0) )
    {
      v10 = *((_DWORD *)v5 + 4); /*0x589e77*/
      v11 = v10 + 1; /*0x589e7a*/
      v12 = 3 * v10; /*0x589e7d*/
      v13 = *((_DWORD *)v5 + 1); /*0x589e80*/
      *((_DWORD *)v5 + 4) = v11; /*0x589e83*/
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
char __thiscall VectorClass_W4PassabilityType::AddRef(_VectorClass_W4PassabilityType *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x589eb2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x589ebd*/
  {
    v3 = 0; /*0x589ebf*/
    if ( m_8 <= 0 ) /*0x589ec3*/
      return 1; /*0x589ee3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x589ec5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x589ecb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x589ed4*/
    {
      ++v3; /*0x589ed6*/
      ++v4; /*0x589ed7*/
      if ( v3 >= m_8 ) /*0x589edc*/
        return 1; /*0x589edc*/
    }
  }
  return 0; /*0x589ede*/
}



// ==== 0x00589EF0  _VectorClass_W4PassabilityType::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::Release(_VectorClass_W4PassabilityType *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x589efc*/
  {
    LOBYTE(this->m_C) = 0; /*0x589f06*/
    if ( a3 ) /*0x589f0c*/
      v4 = a3; /*0x589f22*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x589f1e*/
    LOBYTE(this->m_C) = 1; /*0x589f26*/
    if ( v4 ) /*0x589f2a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x589f35*/
      {
        m_8 = this->m_8; /*0x589f3c*/
        if ( a2 < m_8 ) /*0x589f41*/
          m_8 = a2; /*0x589f43*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x589f49*/
          ++i; /*0x589f4e*/
        if ( BYTE1(this->m_C) ) /*0x589f5b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x589f66*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x589f6e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x589f77*/
      this->m_8 = a2; /*0x589f7f*/
      BYTE1(this->m_C) = a3 == 0; /*0x589f82*/
      return 1; /*0x589f88*/
    }
    else
    {
      return 0; /*0x589f2f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_W4PassabilityType *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x589f92*/
    return 1; /*0x589f98*/
  }
}



// ==== 0x00589FA0  _VectorClass_W4PassabilityType::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_W4PassabilityType::ddtor(_VectorClass_W4PassabilityType *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x589fad*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x589fb3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x589fbb*/
  }
  BYTE1(this->m_C) = 0; /*0x589fbe*/
  this->m_8 = 0; /*0x589fc1*/
}



// ==== 0x00589FD0  _VectorClass_W4PassabilityType::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::GetSize(_VectorClass_W4PassabilityType *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x589fd0*/
    return 0; /*0x589fd8*/
  m_8 = this->m_8; /*0x589fde*/
  result = 0; /*0x589fe1*/
  if ( m_8 <= 0 ) /*0x589fe5*/
    return -1; /*0x589ffc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x589feb*/
  {
    if ( ++result >= m_8 ) /*0x589ffa*/
      return -1; /*0x589ffa*/
  }
  return result; /*0x589fda*/
}



// ==== 0x0058A010  _VectorClass_W4PassabilityType::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_W4PassabilityType::GetCapacity(_VectorClass_W4PassabilityType *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x58a010*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x58a025*/
  else
    return 0; /*0x58a017*/
}



// ==== 0x0058A030  _DynamicVectorClass_W4PassabilityType::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::SetCapacity(
        _DynamicVectorClass_W4PassabilityType *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x58a03c*/
  {
    LOBYTE(this->m_C) = 0; /*0x58a042*/
    if ( a3 ) /*0x58a048*/
      v4 = a3; /*0x58a05e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x58a05a*/
    LOBYTE(this->m_C) = 1; /*0x58a062*/
    if ( !v4 ) /*0x58a066*/
      return 0; /*0x58a0da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x58a068*/
    {
      m_8 = this->m_8; /*0x58a06f*/
      if ( a2 < m_8 ) /*0x58a074*/
        m_8 = a2; /*0x58a076*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x58a07c*/
        ++i; /*0x58a081*/
      if ( BYTE1(this->m_C) ) /*0x58a08e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58a099*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x58a0a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x58a0aa*/
    this->m_8 = a2; /*0x58a0b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x58a0b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_W4PassabilityType *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a0be*/
  }
  v7 = this->m_8; /*0x58a0c1*/
  if ( v7 < this->m_10 ) /*0x58a0c9*/
    this->m_10 = v7; /*0x58a0cb*/
  return 1; /*0x58a0ce*/
}



// ==== 0x0058A0E0  _DynamicVectorClass_W4PassabilityType::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::FindItemIndex(_DynamicVectorClass_W4PassabilityType *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x58a0e0*/
  result = 0; /*0x58a0e3*/
  if ( m_10 <= 0 ) /*0x58a0e8*/
    return -1; /*0x58a0ff*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x58a0ee*/
  {
    if ( ++result >= m_10 ) /*0x58a0fd*/
      return -1; /*0x58a0fd*/
  }
  return result; /*0x58a102*/
}



// ==== 0x0058A110  _VectorClass_U_HashObject_II::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UHashObject_uint_uint::AddRef(_VectorClass_U_HashObject_II *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x58a112*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x58a11d*/
  {
    v3 = 0; /*0x58a11f*/
    if ( m_8 <= 0 ) /*0x58a123*/
      return 1; /*0x58a143*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x58a125*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x58a12b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x58a134*/
    {
      ++v3; /*0x58a136*/
      v4 += 2; /*0x58a137*/
      if ( v3 >= m_8 ) /*0x58a13c*/
        return 1; /*0x58a13c*/
    }
  }
  return 0; /*0x58a13e*/
}



// ==== 0x0058A150  _DynamicVectorClass_U_HashObject_II::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::SetCapacity_0(
        _DynamicVectorClass_U_HashObject_II *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  int m_8; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax

  if ( a2 ) /*0x58a15c*/
  {
    v4 = a3; /*0x58a162*/
    LOBYTE(this->m_C) = 0; /*0x58a166*/
    if ( a3 ) /*0x58a16c*/
    {
      v6 = a3; /*0x58a194*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x58a176*/
      if ( v5 ) /*0x58a180*/
        v6 = (_DWORD *)v5; /*0x58a185*/
      else
        v6 = 0; /*0x58a18d*/
    }
    LOBYTE(this->m_C) = 1; /*0x58a19c*/
    if ( !v6 ) /*0x58a1a0*/
      return 0; /*0x58a220*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x58a1a2*/
    {
      m_8 = this->m_8; /*0x58a1a9*/
      if ( a2 < m_8 ) /*0x58a1ae*/
        m_8 = a2; /*0x58a1b0*/
      v8 = 0; /*0x58a1b2*/
      if ( m_8 > 0 ) /*0x58a1b6*/
      {
        do /*0x58a1ce*/
        {
          v9 = *(_DWORD *)&this->m_1[3]; /*0x58a1b8*/
          ++v8; /*0x58a1bb*/
          v6[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x58a1c2*/
          v6[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x58a1ca*/
        }
        while ( v8 < m_8 ); /*0x58a1ce*/
        v4 = a3; /*0x58a1d0*/
      }
      if ( BYTE1(this->m_C) ) /*0x58a1d4*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58a1df*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x58a1e7*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x58a1f0*/
    this->m_8 = a2; /*0x58a1f8*/
    BYTE1(this->m_C) = v4 == 0; /*0x58a1fb*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_U_HashObject_II *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a204*/
  }
  v10 = this->m_8; /*0x58a207*/
  if ( v10 < this->m_10 ) /*0x58a20f*/
    this->m_10 = v10; /*0x58a211*/
  return 1; /*0x58a214*/
}



// ==== 0x0058A230  _DynamicVectorClass_U_HashObject_II::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::FindItemIndex_0(_DynamicVectorClass_U_HashObject_II *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x58a230*/
  result = 0; /*0x58a233*/
  if ( m_10 <= 0 ) /*0x58a238*/
    return -1; /*0x58a24f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x58a23e*/
  {
    if ( ++result >= m_10 ) /*0x58a24d*/
      return -1; /*0x58a24d*/
  }
  return result; /*0x58a252*/
}



// ==== 0x0058A260  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UHashObject_uint_SubzoneConn::AddRef(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x58a262*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x58a26d*/
  {
    v3 = 0; /*0x58a26f*/
    if ( m_8 <= 0 ) /*0x58a273*/
      return 1; /*0x58a293*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x58a275*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x58a27b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x58a284*/
    {
      ++v3; /*0x58a286*/
      v4 += 3; /*0x58a287*/
      if ( v3 >= m_8 ) /*0x58a28c*/
        return 1; /*0x58a28c*/
    }
  }
  return 0; /*0x58a28e*/
}



// ==== 0x0058A2A0  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::SetCapacity_1  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::SetCapacity_1(
        _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  char *v13; // ebx
  _DWORD *v14; // edx
  int v15; // eax

  v3 = a2; /*0x58a2a2*/
  if ( a2 ) /*0x58a2ae*/
  {
    v5 = a3; /*0x58a2b4*/
    LOBYTE(this->m_C) = 0; /*0x58a2b8*/
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
      v6 = __2_YAPAXI_Z(12 * a2); /*0x58a2c7*/
      if ( v6 ) /*0x58a2d1*/
      {
        if ( a2 - 1 >= 0 ) /*0x58a2d8*/
        {
          v7 = v6 + 4; /*0x58a2da*/
          v8 = a2; /*0x58a2dd*/
          do /*0x58a2e7*/
          {
            *(_DWORD *)v7 = 0; /*0x58a2de*/
            *(_BYTE *)(v7 + 4) = 0; /*0x58a2e0*/
            v7 += 12; /*0x58a2e3*/
            --v8; /*0x58a2e6*/
          }
          while ( v8 ); /*0x58a2e7*/
        }
        v5 = (char *)v6; /*0x58a2e9*/
      }
      else
      {
        v5 = 0; /*0x58a2ed*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x58a309*/
    if ( !v5 ) /*0x58a30d*/
      return 0; /*0x58a391*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x58a30f*/
    {
      m_8 = this->m_8; /*0x58a314*/
      if ( a2 < m_8 ) /*0x58a319*/
        m_8 = a2; /*0x58a31b*/
      if ( m_8 > 0 ) /*0x58a31f*/
      {
        v12 = 0; /*0x58a321*/
        do /*0x58a33f*/
        {
          v13 = &v5[v12]; /*0x58a326*/
          v14 = (_DWORD *)(v12 + *(_DWORD *)&this->m_1[3]); /*0x58a329*/
          v12 += 12; /*0x58a32b*/
          --m_8; /*0x58a32e*/
          *(_DWORD *)v13 = *v14; /*0x58a331*/
          *((_DWORD *)v13 + 1) = v14[1]; /*0x58a336*/
          *((_DWORD *)v13 + 2) = v14[2]; /*0x58a33c*/
        }
        while ( m_8 ); /*0x58a33f*/
        v3 = a2; /*0x58a341*/
      }
      if ( BYTE1(this->m_C) ) /*0x58a347*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58a350*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x58a358*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x58a363*/
    this->m_8 = v3; /*0x58a369*/
    BYTE1(this->m_C) = a3 == 0; /*0x58a36c*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a375*/
  }
  v15 = this->m_8; /*0x58a378*/
  if ( v15 < this->m_10 ) /*0x58a380*/
    this->m_10 = v15; /*0x58a382*/
  return 1; /*0x58a385*/
}



// ==== 0x0058A3A0  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::FindItemIndex_1  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::FindItemIndex_1(
        _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x58a3a0*/
  result = 0; /*0x58a3a3*/
  if ( m_10 <= 0 ) /*0x58a3a8*/
    return -1; /*0x58a3bf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 3 ) /*0x58a3ae*/
  {
    if ( ++result >= m_10 ) /*0x58a3bd*/
      return -1; /*0x58a3bd*/
  }
  return result; /*0x58a3c2*/
}



// ==== 0x0058A3D0  _VectorClass_UZoneConnectionClass::Destruct  this=VectorClass  sig=csp ====
_DWORD *__thiscall ZoneConnectionVector::Destruct(_VectorClass_UZoneConnectionClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x58a3d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ZoneConnectionClass>::`vftable'; /*0x58a3d6*/
  if ( v3 && this->IsAllocated ) /*0x58a3e0*/
  {
    __3_YAXPAX_Z(v3); /*0x58a3e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58a3f0*/
  }
  this->IsAllocated = 0; /*0x58a3fb*/
  this->Capacity = 0; /*0x58a401*/
  if ( (a2 & 1) != 0 ) /*0x58a408*/
    __3_YAXPAX_Z(this); /*0x58a40b*/
  return this->__pad_0; /*0x58a415*/
}



// ==== 0x0058A420  _DynamicVectorClass_UZoneConnectionClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall unknown::QueryInterface(_DynamicVectorClass_UZoneConnectionClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x58a423*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ZoneConnectionClass>::`vftable'; /*0x58a426*/
  if ( v3 && BYTE1(this->m_C) ) /*0x58a430*/
  {
    __3_YAXPAX_Z(v3); /*0x58a438*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58a440*/
  }
  BYTE1(this->m_C) = 0; /*0x58a44b*/
  this->m_8 = 0; /*0x58a451*/
  if ( (a2 & 1) != 0 ) /*0x58a458*/
    __3_YAXPAX_Z(this); /*0x58a45b*/
  return this->__pad_0; /*0x58a465*/
}



// ==== 0x0058A470  _VectorClass_USubzoneTrackingStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_USubzoneTrackingStruct::QueryInterface(
        _VectorClass_USubzoneTrackingStruct *this,
        char a2)
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

  v3 = *(_DWORD *)&this->m_1[3]; /*0x58a477*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SubzoneTrackingStruct>::`vftable'; /*0x58a47a*/
  if ( v3 && BYTE1(this->m_C) ) /*0x58a484*/
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
        *(_DWORD *)v8 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58a4ad*/
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
    *(_DWORD *)&this->m_1[3] = 0; /*0x58a4de*/
  }
  BYTE1(this->m_C) = 0; /*0x58a4e5*/
  this->m_8 = 0; /*0x58a4ea*/
  if ( (a2 & 1) != 0 ) /*0x58a4ed*/
    __3_YAXPAX_Z(this); /*0x58a4f0*/
  return this->__pad_0; /*0x58a4fa*/
}



// ==== 0x0058A500  Subzone::CopyDataFrom  this=Subzone  sig=csp ====
int *__thiscall Subzone::CopyDataFrom(Subzone *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int Subzone_field_0x08; // ecx
  int v8; // eax
  int v9; // edx
  int Subzone_field_0x04; // ecx

  if ( this != (Subzone *)a2 ) /*0x58a50c*/
  {
    (*(void (__thiscall **)(Subzone *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a510*/
    v3 = *(_DWORD *)(a2 + 8); /*0x58a513*/
    this->Subzone_field_0x08 = v3; /*0x58a51a*/
    if ( v3 ) /*0x58a51d*/
    {
      v4 = __2_YAPAXI_Z(8 * v3); /*0x58a527*/
      if ( v4 ) /*0x58a531*/
      {
        v5 = v4; /*0x58a536*/
        if ( v3 - 1 >= 0 ) /*0x58a53a*/
        {
          v6 = v3; /*0x58a53c*/
          do /*0x58a546*/
          {
            *(_DWORD *)v5 = 0; /*0x58a53d*/
            *(_BYTE *)(v5 + 4) = 0; /*0x58a53f*/
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
      this->Subzone_field_0x04 = v4; /*0x58a54e*/
      if ( v4 ) /*0x58a551*/
      {
        Subzone_field_0x08 = this->Subzone_field_0x08; /*0x58a553*/
        v8 = 0; /*0x58a556*/
        *((_BYTE *)this + 13) = 1; /*0x58a55a*/
        if ( Subzone_field_0x08 > 0 ) /*0x58a55e*/
        {
          do /*0x58a57a*/
          {
            v9 = *(_DWORD *)(a2 + 4); /*0x58a560*/
            Subzone_field_0x04 = this->Subzone_field_0x04; /*0x58a563*/
            *(_DWORD *)(Subzone_field_0x04 + 8 * v8) = *(_DWORD *)(v9 + 8 * v8); /*0x58a569*/
            *(_DWORD *)(Subzone_field_0x04 + 8 * v8 + 4) = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x58a570*/
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
  this->q004 = *(_DWORD *)(a2 + 16); /*0x58a588*/
  *((_DWORD *)this + 5) = *(_DWORD *)(a2 + 20); /*0x58a58e*/
  *((_WORD *)this + 12) = *(_WORD *)(a2 + 24); /*0x58a595*/
  *((_DWORD *)this + 7) = *(_DWORD *)(a2 + 28); /*0x58a59c*/
  this->q008 = *(_DWORD *)(a2 + 32); /*0x58a5a2*/
  return (int *)this->__pad_0; /*0x58a587*/
}



// ==== 0x0058A5B0  _DynamicVectorClass_USubzoneTrackingStruct::Destruct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall SubzoneTrackingVector::Destruct(_DynamicVectorClass_USubzoneTrackingStruct *this, char a2)
{
  int v3; // ecx
  int v4; // eax
  void *v5; // ebx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // ebp

  v3 = *(_DWORD *)&this->m_1[3]; /*0x58a5b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SubzoneTrackingStruct>::`vftable'; /*0x58a5b6*/
  if ( v3 && this->m_D[0] ) /*0x58a5c0*/
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
        *v8 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58a5e5*/
        VectorClass::Cleanup5((int)v8); /*0x58a5eb*/
        --v9; /*0x58a5f0*/
      }
      while ( v9 ); /*0x58a5f1*/
    }
    __3_YAXPAX_Z(v5); /*0x58a5f5*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58a5ff*/
  }
  this->m_D[0] = 0; /*0x58a60a*/
  this->m_8 = 0; /*0x58a610*/
  if ( (a2 & 1) != 0 ) /*0x58a617*/
    __3_YAXPAX_Z(this); /*0x58a61a*/
  return this->__pad_0; /*0x58a624*/
}



// ==== 0x0058A630  _DynamicVectorClass_U_HashObject_II::Constructor  this=DynamicVector  sig=csp ====
char *__thiscall VectorClass_W4PassabilityType::Constructor(_DynamicVectorClass_U_HashObject_II *this, char a2)
{
  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x58a63a*/
  {
    v3 = *((_DWORD *)this - 1); /*0x58a63c*/
    v4 = (char *)this - 4; /*0x58a640*/
    v5 = 3 * v3; /*0x58a643*/
    v6 = v3 - 1; /*0x58a646*/
    v7 = &this->__pad_0[8 * v5]; /*0x58a647*/
    if ( v6 >= 0 ) /*0x58a64a*/
    {
      v8 = v6 + 1; /*0x58a64d*/
      do /*0x58a67a*/
      {
        v9 = (void *)*((_DWORD *)v7 - 5); /*0x58a652*/
        v7 -= 24; /*0x58a655*/
        *(_DWORD *)v7 = &VectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x58a65a*/
        if ( v9 && v7[13] ) /*0x58a662*/
        {
          __3_YAXPAX_Z(v9); /*0x58a668*/
          *((_DWORD *)v7 + 1) = 0; /*0x58a670*/
        }
        --v8; /*0x58a673*/
        v7[13] = 0; /*0x58a674*/
        *((_DWORD *)v7 + 2) = 0; /*0x58a677*/
      }
      while ( v8 ); /*0x58a67a*/
    }
    if ( (a2 & 1) != 0 ) /*0x58a682*/
      __3_YAXPAX_Z(v4); /*0x58a685*/
    return v4; /*0x58a68d*/
  }
  else
  {
    v11 = *(void **)&this->m_1[3]; /*0x58a695*/
    *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x58a69c*/
    if ( v11 && BYTE1(this->m_C) ) /*0x58a6a4*/
    {
      __3_YAXPAX_Z(v11); /*0x58a6aa*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x58a6b2*/
    }
    BYTE1(this->m_C) = 0; /*0x58a6b9*/
    this->m_8 = 0; /*0x58a6be*/
    if ( (a2 & 1) != 0 ) /*0x58a6c1*/
      __3_YAXPAX_Z(this); /*0x58a6c4*/
    return this->__pad_0; /*0x58a6cc*/
  }
}



// ==== 0x0058A6E0  _VectorClass_U_HashObject_II::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UHashObject_uint_uint::Release(_VectorClass_U_HashObject_II *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  int m_8; // ecx
  int v9; // eax
  int v10; // edx

  if ( a2 ) /*0x58a6ec*/
  {
    v4 = a3; /*0x58a6f2*/
    LOBYTE(this->m_C) = 0; /*0x58a6f6*/
    if ( a3 ) /*0x58a6fc*/
    {
      v6 = a3; /*0x58a724*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x58a706*/
      if ( v5 ) /*0x58a710*/
        v6 = (_DWORD *)v5; /*0x58a715*/
      else
        v6 = 0; /*0x58a71d*/
    }
    LOBYTE(this->m_C) = 1; /*0x58a72c*/
    if ( v6 ) /*0x58a730*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x58a73b*/
      {
        m_8 = this->m_8; /*0x58a742*/
        if ( a2 < m_8 ) /*0x58a747*/
          m_8 = a2; /*0x58a749*/
        v9 = 0; /*0x58a74b*/
        if ( m_8 > 0 ) /*0x58a74f*/
        {
          do /*0x58a767*/
          {
            v10 = *(_DWORD *)&this->m_1[3]; /*0x58a751*/
            ++v9; /*0x58a754*/
            v6[2 * v9 - 2] = *(_DWORD *)(v10 + 8 * v9 - 8); /*0x58a75b*/
            v6[2 * v9 - 1] = *(_DWORD *)(v10 + 8 * v9 - 4); /*0x58a763*/
          }
          while ( v9 < m_8 ); /*0x58a767*/
          v4 = a3; /*0x58a769*/
        }
        if ( BYTE1(this->m_C) ) /*0x58a76d*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58a778*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x58a780*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v6; /*0x58a789*/
      this->m_8 = a2; /*0x58a791*/
      BYTE1(this->m_C) = v4 == 0; /*0x58a794*/
      return 1; /*0x58a79a*/
    }
    else
    {
      return 0; /*0x58a735*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_U_HashObject_II *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a7a4*/
    return 1; /*0x58a7aa*/
  }
}



// ==== 0x0058A7B0  _VectorClass_U_HashObject_II::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UHashObject_uint_uint::ddtor(_VectorClass_U_HashObject_II *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x58a7bd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58a7c3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58a7cb*/
  }
  BYTE1(this->m_C) = 0; /*0x58a7ce*/
  this->m_8 = 0; /*0x58a7d1*/
}



// ==== 0x0058A7E0  _VectorClass_U_HashObject_II::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UHashObject_uint_uint::GetSize(_VectorClass_U_HashObject_II *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x58a7e0*/
    return 0; /*0x58a7e8*/
  m_8 = this->m_8; /*0x58a7ee*/
  result = 0; /*0x58a7f1*/
  if ( m_8 <= 0 ) /*0x58a7f5*/
    return -1; /*0x58a80c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x58a7fb*/
  {
    if ( ++result >= m_8 ) /*0x58a80a*/
      return -1; /*0x58a80a*/
  }
  return result; /*0x58a7ea*/
}



// ==== 0x0058A820  _VectorClass_U_HashObject_II::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UHashObject_uint_uint::GetCapacity(_VectorClass_U_HashObject_II *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x58a820*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x58a835*/
  else
    return 0; /*0x58a827*/
}



// ==== 0x0058A840  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::Constructor_0  this=DynamicVector  sig=csp ====
char *__thiscall VectorClass_W4PassabilityType::Constructor_0(
        _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        char a2)
{
  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x58a84a*/
  {
    v3 = *((_DWORD *)this - 1); /*0x58a84c*/
    v4 = (char *)this - 4; /*0x58a850*/
    v5 = 3 * v3; /*0x58a853*/
    v6 = v3 - 1; /*0x58a856*/
    v7 = &this->__pad_0[8 * v5]; /*0x58a857*/
    if ( v6 >= 0 ) /*0x58a85a*/
    {
      v8 = v6 + 1; /*0x58a85d*/
      do /*0x58a88a*/
      {
        v9 = (void *)*((_DWORD *)v7 - 5); /*0x58a862*/
        v7 -= 24; /*0x58a865*/
        *(_DWORD *)v7 = &VectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable'; /*0x58a86a*/
        if ( v9 && v7[13] ) /*0x58a872*/
        {
          __3_YAXPAX_Z(v9); /*0x58a878*/
          *((_DWORD *)v7 + 1) = 0; /*0x58a880*/
        }
        --v8; /*0x58a883*/
        v7[13] = 0; /*0x58a884*/
        *((_DWORD *)v7 + 2) = 0; /*0x58a887*/
      }
      while ( v8 ); /*0x58a88a*/
    }
    if ( (a2 & 1) != 0 ) /*0x58a892*/
      __3_YAXPAX_Z(v4); /*0x58a895*/
    return v4; /*0x58a89d*/
  }
  else
  {
    v11 = *(void **)&this->m_1[3]; /*0x58a8a5*/
    *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable'; /*0x58a8ac*/
    if ( v11 && BYTE1(this->m_C) ) /*0x58a8b4*/
    {
      __3_YAXPAX_Z(v11); /*0x58a8ba*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x58a8c2*/
    }
    BYTE1(this->m_C) = 0; /*0x58a8c9*/
    this->m_8 = 0; /*0x58a8ce*/
    if ( (a2 & 1) != 0 ) /*0x58a8d1*/
      __3_YAXPAX_Z(this); /*0x58a8d4*/
    return this->__pad_0; /*0x58a8dc*/
  }
}



// ==== 0x0058A8F0  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UHashObject_uint_SubzoneConn::Release(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  char *v14; // ebx
  _DWORD *v15; // edx

  v3 = a2; /*0x58a8f2*/
  if ( a2 ) /*0x58a8fe*/
  {
    v5 = a3; /*0x58a904*/
    LOBYTE(this->m_C) = 0; /*0x58a908*/
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
      v6 = __2_YAPAXI_Z(12 * a2); /*0x58a917*/
      if ( v6 ) /*0x58a921*/
      {
        if ( a2 - 1 >= 0 ) /*0x58a928*/
        {
          v7 = v6 + 4; /*0x58a92a*/
          v8 = a2; /*0x58a92d*/
          do /*0x58a937*/
          {
            *(_DWORD *)v7 = 0; /*0x58a92e*/
            *(_BYTE *)(v7 + 4) = 0; /*0x58a930*/
            v7 += 12; /*0x58a933*/
            --v8; /*0x58a936*/
          }
          while ( v8 ); /*0x58a937*/
        }
        v5 = (char *)v6; /*0x58a939*/
      }
      else
      {
        v5 = 0; /*0x58a93d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x58a959*/
    if ( v5 ) /*0x58a95d*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x58a968*/
      {
        m_8 = this->m_8; /*0x58a96d*/
        if ( a2 < m_8 ) /*0x58a972*/
          m_8 = a2; /*0x58a974*/
        if ( m_8 > 0 ) /*0x58a978*/
        {
          v13 = 0; /*0x58a97a*/
          do /*0x58a998*/
          {
            v14 = &v5[v13]; /*0x58a97f*/
            v15 = (_DWORD *)(v13 + *(_DWORD *)&this->m_1[3]); /*0x58a982*/
            v13 += 12; /*0x58a984*/
            --m_8; /*0x58a987*/
            *(_DWORD *)v14 = *v15; /*0x58a98a*/
            *((_DWORD *)v14 + 1) = v15[1]; /*0x58a98f*/
            *((_DWORD *)v14 + 2) = v15[2]; /*0x58a995*/
          }
          while ( m_8 ); /*0x58a998*/
          v3 = a2; /*0x58a99a*/
        }
        if ( BYTE1(this->m_C) ) /*0x58a9a0*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58a9a9*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x58a9b1*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x58a9bc*/
      this->m_8 = v3; /*0x58a9c2*/
      BYTE1(this->m_C) = a3 == 0; /*0x58a9c5*/
      return 1; /*0x58a9cb*/
    }
    else
    {
      return 0; /*0x58a962*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_U_HashObject_IUSubzoneConnectionStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a9d5*/
    return 1; /*0x58a9db*/
  }
}



// ==== 0x0058A9F0  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UHashObject_uint_SubzoneConn::ddtor(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x58a9fd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58aa03*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58aa0b*/
  }
  BYTE1(this->m_C) = 0; /*0x58aa0e*/
  this->m_8 = 0; /*0x58aa11*/
}



// ==== 0x0058AA20  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UHashObject_uint_SubzoneConn::GetSize(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x58aa20*/
    return 0; /*0x58aa28*/
  m_8 = this->m_8; /*0x58aa2e*/
  result = 0; /*0x58aa31*/
  if ( m_8 <= 0 ) /*0x58aa35*/
    return -1; /*0x58aa4c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 3 ) /*0x58aa3b*/
  {
    if ( ++result >= m_8 ) /*0x58aa4a*/
      return -1; /*0x58aa4a*/
  }
  return result; /*0x58aa2a*/
}



// ==== 0x0058AA60  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UHashObject_uint_SubzoneConn::GetCapacity(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x58aa60*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0xCu; /*0x58aa7e*/
  else
    return 0; /*0x58aa67*/
}



// ==== 0x0058AA90  _VectorClass_W4PassabilityType::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_W4PassabilityType::QueryInterface(_VectorClass_W4PassabilityType *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x58aa93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<enum PassabilityType>::`vftable'; /*0x58aa96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x58aaa0*/
  {
    __3_YAXPAX_Z(v3); /*0x58aaa8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58aab0*/
  }
  BYTE1(this->m_C) = 0; /*0x58aabb*/
  this->m_8 = 0; /*0x58aac1*/
  if ( (a2 & 1) != 0 ) /*0x58aac8*/
    __3_YAXPAX_Z(this); /*0x58aacb*/
  return this->__pad_0; /*0x58aad5*/
}



// ==== 0x0058AAE0  _DynamicVectorClass_W4PassabilityType::Constructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_W4PassabilityType::Constructor_1(_DynamicVectorClass_W4PassabilityType *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x58aae3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<enum PassabilityType>::`vftable'; /*0x58aae6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x58aaf0*/
  {
    __3_YAXPAX_Z(v3); /*0x58aaf8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58ab00*/
  }
  BYTE1(this->m_C) = 0; /*0x58ab0b*/
  this->m_8 = 0; /*0x58ab11*/
  if ( (a2 & 1) != 0 ) /*0x58ab18*/
    __3_YAXPAX_Z(this); /*0x58ab1b*/
  return this->__pad_0; /*0x58ab25*/
}



// ==== 0x0058AB30  _VectorClass_U_HashObject_II::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UHashObject_uint_uint::QueryInterface(_VectorClass_U_HashObject_II *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x58ab33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x58ab36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x58ab40*/
  {
    __3_YAXPAX_Z(v3); /*0x58ab48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58ab50*/
  }
  BYTE1(this->m_C) = 0; /*0x58ab5b*/
  this->m_8 = 0; /*0x58ab61*/
  if ( (a2 & 1) != 0 ) /*0x58ab68*/
    __3_YAXPAX_Z(this); /*0x58ab6b*/
  return this->__pad_0; /*0x58ab75*/
}



// ==== 0x0058AB80  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UHashObject_uint_SubzoneConn::QueryInterface(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x58ab83*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable'; /*0x58ab86*/
  if ( v3 && BYTE1(this->m_C) ) /*0x58ab90*/
  {
    __3_YAXPAX_Z(v3); /*0x58ab98*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58aba0*/
  }
  BYTE1(this->m_C) = 0; /*0x58abab*/
  this->m_8 = 0; /*0x58abb1*/
  if ( (a2 & 1) != 0 ) /*0x58abb8*/
    __3_YAXPAX_Z(this); /*0x58abbb*/
  return this->__pad_0; /*0x58abc5*/
}



// ==== 0x0058ABD0  Radar::CopyDataArray  this=Radar  sig=csp ====
int *__thiscall Radar::CopyDataArray(Radar *this, int *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  if ( this != (Radar *)a2 ) /*0x58abdc*/
  {
    (*(void (__thiscall **)(Radar *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58abe0*/
    v3 = a2[2]; /*0x58abe3*/
    *(_DWORD *)&this->Radar_field_0x6[2] = v3; /*0x58abea*/
    if ( v3 ) /*0x58abed*/
    {
      v4 = __2_YAPAXI_Z(8 * v3); /*0x58abf7*/
      if ( v4 ) /*0x58ac01*/
      {
        v5 = v4; /*0x58ac06*/
        if ( v3 - 1 >= 0 ) /*0x58ac0a*/
        {
          v6 = v3; /*0x58ac0c*/
          do /*0x58ac16*/
          {
            *(_DWORD *)v5 = 0; /*0x58ac0d*/
            *(_BYTE *)(v5 + 4) = 0; /*0x58ac0f*/
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
      *(_DWORD *)&this->Radar_field_0x2[2] = v4; /*0x58ac1e*/
      if ( v4 ) /*0x58ac21*/
      {
        v7 = *(_DWORD *)&this->Radar_field_0x6[2]; /*0x58ac23*/
        v8 = 0; /*0x58ac26*/
        BYTE1(this->Radar_field_0xC) = 1; /*0x58ac2a*/
        if ( v7 > 0 ) /*0x58ac2e*/
        {
          do /*0x58ac4a*/
          {
            v9 = a2[1]; /*0x58ac30*/
            v10 = *(_DWORD *)&this->Radar_field_0x2[2]; /*0x58ac33*/
            *(_DWORD *)(v10 + 8 * v8) = *(_DWORD *)(v9 + 8 * v8); /*0x58ac39*/
            *(_DWORD *)(v10 + 8 * v8 + 4) = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x58ac40*/
            ++v8; /*0x58ac47*/
          }
          while ( v8 < *(_DWORD *)&this->Radar_field_0x6[2] ); /*0x58ac4a*/
        }
      }
    }
    else
    {
      *(_DWORD *)&this->Radar_field_0x2[2] = 0; /*0x58ac4e*/
      BYTE1(this->Radar_field_0xC) = 0; /*0x58ac51*/
    }
  }
  *(_DWORD *)this->__pad_10 = a2[4]; /*0x58ac58*/
  this->Radar_field_0x14 = (void *)a2[5]; /*0x58ac5e*/
  return (int *)this->__pad_0; /*0x58ac57*/
}



// ==== 0x0058AC70  VectorClass::ConstructSubzone  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::ConstructSubzone(VectorClass *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char *v7; // eax
  char *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x58ac7d*/
  this->Capacity = a2; /*0x58ac80*/
  this->IsInitialized = 1; /*0x58ac83*/
  this->IsAllocated = 0; /*0x58ac87*/
  this->vtable0 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58ac8a*/
  if ( !a2 ) /*0x58ac90*/
    return &this->vtable0; /*0x58ac90*/
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
        this->IsAllocated = 1; /*0x58ace6*/
        return &this->vtable0; /*0x58acef*/
      }
    }
    else
    {
      v7 = 0; /*0x58acf2*/
    }
    this->Items = v7; /*0x58acf4*/
    this->IsAllocated = 1; /*0x58acf7*/
    return &this->vtable0; /*0x58acfb*/
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
  this->Items = (void *)a3; /*0x58acaf*/
  return &this->vtable0; /*0x58acb4*/
}



// ==== 0x0058AD10  VectorClass_USubzoneTrackingStruct::SetCapacity  this=VectorClass_USubzoneTrackingStruct  sig=csp ====
_DWORD *__thiscall VectorClass_USubzoneTrackingStruct::SetCapacity(
        VectorClass_USubzoneTrackingStruct *this,
        _DWORD *a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // ecx
  int v6; // edx
  void *Capacity; // ecx
  int v8; // eax
  int v9; // edx
  _DWORD *Items; // ecx

  if ( this == (VectorClass_USubzoneTrackingStruct *)a2 ) /*0x58ad1c*/
    return this->__pad_0; /*0x58ad1c*/
  (*(void (__thiscall **)(VectorClass_USubzoneTrackingStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58ad20*/
  v3 = a2[2]; /*0x58ad23*/
  this->Capacity = (void *)v3; /*0x58ad2a*/
  if ( !v3 ) /*0x58ad2d*/
  {
    this->Items = 0; /*0x58ad95*/
    this->IsAllocated = 0; /*0x58ad98*/
    return this->__pad_0; /*0x58ad9b*/
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
    return this->__pad_0; /*0x58ad61*/
  Capacity = this->Capacity; /*0x58ad63*/
  v8 = 0; /*0x58ad66*/
  this->IsAllocated = 1; /*0x58ad6a*/
  if ( (int)Capacity <= 0 ) /*0x58ad6e*/
    return this->__pad_0; /*0x58ad6e*/
  do /*0x58ad8a*/
  {
    v9 = a2[1]; /*0x58ad70*/
    Items = this->Items; /*0x58ad73*/
    Items[2 * v8] = *(_DWORD *)(v9 + 8 * v8); /*0x58ad79*/
    Items[2 * v8 + 1] = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x58ad80*/
    ++v8; /*0x58ad87*/
  }
  while ( v8 < (int)this->Capacity ); /*0x58ad8a*/
  return this->__pad_0; /*0x58ad8e*/
}



// ==== 0x0058ADB0  RadarClass::drawRadarTerrain  this=VectorClass  sig=csp ====
_DWORD *__thiscall RadarClass::drawRadarTerrain(RadarClass *this, int a2, int a3)
{
  void *v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  v4 = 0; /*0x58adb9*/
  this->RadarClass_field_0x4 = 0; /*0x58adbd*/
  this->RadarClass_field_0x8 = (void *)a2; /*0x58adc0*/
  this->__pad_C[0] = 1; /*0x58adc3*/
  this->__pad_C[1] = 0; /*0x58adc7*/
  this->RadarClass_field_0x0 = &VectorClass<ZoneConnectionClass>::`vftable'; /*0x58adca*/
  if ( !a2 ) /*0x58add0*/
    return &this->RadarClass_field_0x0; /*0x58ae56*/
  if ( !a3 ) /*0x58addc*/
  {
    v8 = __2_YAPAXI_Z(16 * a2); /*0x58ae18*/
    if ( v8 ) /*0x58ae22*/
    {
      if ( a2 - 1 >= 0 ) /*0x58ae29*/
      {
        v9 = a2; /*0x58ae2b*/
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
          --v9; /*0x58ae4a*/
        }
        while ( v9 ); /*0x58ae4b*/
      }
      v4 = (void *)v8; /*0x58ae4d*/
    }
    this->RadarClass_field_0x4 = v4; /*0x58ae4f*/
    this->__pad_C[1] = 1; /*0x58ae52*/
    return &this->RadarClass_field_0x0; /*0x58ae52*/
  }
  if ( a2 - 1 >= 0 ) /*0x58ade3*/
  {
    v5 = a2; /*0x58ade5*/
    v6 = a3 + 2; /*0x58ade6*/
    do /*0x58ae05*/
    {
      *(_WORD *)(v6 - 2) = 0; /*0x58adec*/
      *(_WORD *)v6 = 0; /*0x58adf0*/
      *(_WORD *)(v6 + 2) = 0; /*0x58adf3*/
      *(_WORD *)(v6 + 4) = 0; /*0x58adf7*/
      *(_BYTE *)(v6 + 6) = 0; /*0x58adfb*/
      *(_DWORD *)(v6 + 10) = -1; /*0x58adfe*/
      v6 += 16; /*0x58ae01*/
      --v5; /*0x58ae04*/
    }
    while ( v5 ); /*0x58ae05*/
  }
  this->RadarClass_field_0x4 = (void *)a3; /*0x58ae07*/
  return &this->RadarClass_field_0x0; /*0x58ae0c*/
}



// ==== 0x0058AE60  RadarClass::RenderJammerRadius  this=RadarClass  sig=csp ====
_DWORD *__thiscall RadarClass::RenderJammerRadius(RadarClass *this, int a2, _DWORD *a3)
{
  RadarClass *v3; // ebp
  void *v4; // ebx
  _DWORD *v5; // esi
  int v6; // edi
  int *v8; // eax
  _DWORD *v9; // eax
  int v10; // edi
  _DWORD *v11; // esi
  int v12; // edi
  int v14; // [esp+18h] [ebp+4h]

  v3 = this; /*0x58ae69*/
  v4 = 0; /*0x58ae6b*/
  this->RadarClass_field_0x4 = 0; /*0x58ae73*/
  this->RadarClass_field_0x8 = (void *)a2; /*0x58ae76*/
  this->__pad_C[0] = 1; /*0x58ae79*/
  this->__pad_C[1] = 0; /*0x58ae7d*/
  this->RadarClass_field_0x0 = &VectorClass<SubzoneTrackingStruct>::`vftable'; /*0x58ae80*/
  if ( !a2 ) /*0x58ae87*/
    return &v3->RadarClass_field_0x0; /*0x58af69*/
  if ( !a3 ) /*0x58ae93*/
  {
    v8 = (int *)__2_YAPAXI_Z(36 * a2 + 4); /*0x58aeff*/
    if ( v8 ) /*0x58af09*/
    {
      *v8 = a2; /*0x58af0b*/
      v9 = v8 + 1; /*0x58af0d*/
      v10 = a2 - 1; /*0x58af10*/
      v14 = (int)v9; /*0x58af11*/
      v11 = v9; /*0x58af17*/
      if ( v10 >= 0 ) /*0x58af19*/
      {
        v12 = v10 + 1; /*0x58af1b*/
        do /*0x58af55*/
        {
          v11[1] = 0; /*0x58af21*/
          v11[2] = 0; /*0x58af24*/
          *((_BYTE *)v11 + 12) = 1; /*0x58af27*/
          *((_BYTE *)v11 + 13) = 0; /*0x58af2b*/
          *v11 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58af2e*/
          *v11 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58af34*/
          v11[5] = 10; /*0x58af3a*/
          v11[4] = 0; /*0x58af3d*/
          (*(void (__thiscall **)(_DWORD *))(*v11 + 12))(v11); /*0x58af44*/
          *((_WORD *)v11 + 12) = 0; /*0x58af47*/
          v11[7] = 0; /*0x58af4b*/
          v11[8] = 0; /*0x58af4e*/
          v11 += 9; /*0x58af51*/
          --v12; /*0x58af54*/
        }
        while ( v12 ); /*0x58af55*/
        v3 = this; /*0x58af57*/
        v9 = (_DWORD *)v14; /*0x58af5b*/
      }
      v4 = v9; /*0x58af5f*/
    }
    v3->RadarClass_field_0x4 = v4; /*0x58af61*/
    v3->__pad_C[1] = 1; /*0x58af64*/
    return &v3->RadarClass_field_0x0; /*0x58af64*/
  }
  *a3 = a2; /*0x58ae95*/
  v5 = a3 + 1; /*0x58ae98*/
  if ( a2 - 1 >= 0 ) /*0x58aea1*/
  {
    v6 = a2; /*0x58aea3*/
    do /*0x58aedd*/
    {
      v5[1] = 0; /*0x58aea9*/
      v5[2] = 0; /*0x58aeac*/
      *((_BYTE *)v5 + 12) = 1; /*0x58aeaf*/
      *((_BYTE *)v5 + 13) = 0; /*0x58aeb3*/
      *v5 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58aeb6*/
      *v5 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58aebc*/
      v5[5] = 10; /*0x58aec2*/
      v5[4] = 0; /*0x58aec5*/
      (*(void (__thiscall **)(_DWORD *))(*v5 + 12))(v5); /*0x58aecc*/
      *((_WORD *)v5 + 12) = 0; /*0x58aecf*/
      v5[7] = 0; /*0x58aed3*/
      v5[8] = 0; /*0x58aed6*/
      v5 += 9; /*0x58aed9*/
      --v6; /*0x58aedc*/
    }
    while ( v6 ); /*0x58aedd*/
    v3 = this; /*0x58aedf*/
    v5 = a3 + 1; /*0x58aee3*/
  }
  v3->RadarClass_field_0x4 = v5; /*0x58aee7*/
  return &v3->RadarClass_field_0x0; /*0x58aeea*/
}



// ==== 0x0058AF80  RadarClass::drawRadarEvents  this=RadarClass  sig=csp ====
char __thiscall RadarClass::drawRadarEvents(RadarClass *this, _DWORD *a2)
{
  void *RadarClass_field_0x8; // ecx
  int v4; // eax
  void *RadarClass_field_0x10; // eax
  void *v7; // ecx
  int v8; // edx
  char *RadarClass_field_0x4; // eax
  char *v10; // ecx

  RadarClass_field_0x8 = this->RadarClass_field_0x8; /*0x58af83*/
  if ( (int)this->RadarClass_field_0x10 >= (int)RadarClass_field_0x8 ) /*0x58af8b*/
  {
    if ( !this->__pad_C[1] && RadarClass_field_0x8 ) /*0x58af96*/
      return 0; /*0x58af96*/
    v4 = *(_DWORD *)this->__pad_14; /*0x58af98*/
    if ( v4 <= 0 /*0x58afa8*/
      || !(*((unsigned __int8 (__thiscall **)(RadarClass *, int, _DWORD))this->RadarClass_field_0x0 + 2))(
            this,
            (int)RadarClass_field_0x8 + v4,
            0) )
    {
      return 0; /*0x58afaf*/
    }
  }
  RadarClass_field_0x10 = this->RadarClass_field_0x10; /*0x58afb5*/
  v7 = (char *)RadarClass_field_0x10 + 1; /*0x58afb8*/
  v8 = 3 * (_DWORD)RadarClass_field_0x10; /*0x58afbb*/
  RadarClass_field_0x4 = (char *)this->RadarClass_field_0x4; /*0x58afbe*/
  this->RadarClass_field_0x10 = v7; /*0x58afc1*/
  v10 = &RadarClass_field_0x4[4 * v8]; /*0x58afc5*/
  *(_DWORD *)v10 = *a2; /*0x58afce*/
  *((_DWORD *)v10 + 1) = a2[1]; /*0x58afd3*/
  *((_DWORD *)v10 + 2) = a2[2]; /*0x58afdb*/
  return 1; /*0x58afb1*/
}



// ==== 0x0058AFF0  HashVector_UInt::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall HashVector_UInt::Construct(HashVector_UInt *this, int a2, int a3)
{
  int v5; // eax

  this->Items = 0; /*0x58affa*/
  this->Capacity = a2; /*0x58b001*/
  this->IsInitialized = 1; /*0x58b004*/
  this->IsAllocated = 0; /*0x58b008*/
  *this = (HashVector_UInt)&VectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x58b00c*/
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
      this->IsAllocated = 1; /*0x58b047*/
      return this; /*0x58b04f*/
    }
    this->IsAllocated = 1; /*0x58b054*/
    this->Items = 0; /*0x58b058*/
  }
  return this; /*0x58b026*/
}



// ==== 0x0058B070  SubzoneHashVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall SubzoneHashVector::Construct(SubzoneHashVector *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x58b07d*/
  this->Capacity = a2; /*0x58b080*/
  this->IsInitialized = 1; /*0x58b083*/
  this->IsAllocated = 0; /*0x58b087*/
  *this = (SubzoneHashVector)&VectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable'; /*0x58b08a*/
  if ( !a2 ) /*0x58b090*/
    return this; /*0x58b090*/
  if ( !a3 ) /*0x58b098*/
  {
    v7 = __2_YAPAXI_Z(12 * a2); /*0x58b0c2*/
    if ( v7 ) /*0x58b0cc*/
    {
      if ( a2 - 1 >= 0 ) /*0x58b0d3*/
      {
        v8 = v7 + 4; /*0x58b0d5*/
        v9 = a2; /*0x58b0d8*/
        do /*0x58b0e2*/
        {
          *(_DWORD *)v8 = 0; /*0x58b0d9*/
          *(_BYTE *)(v8 + 4) = 0; /*0x58b0db*/
          v8 += 12; /*0x58b0de*/
          --v9; /*0x58b0e1*/
        }
        while ( v9 ); /*0x58b0e2*/
        this->Items = v7; /*0x58b0e4*/
        this->IsAllocated = 1; /*0x58b0e7*/
        return this; /*0x58b0f0*/
      }
    }
    else
    {
      v7 = 0; /*0x58b0f3*/
    }
    this->Items = v7; /*0x58b0f5*/
    this->IsAllocated = 1; /*0x58b0f8*/
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
  *(double *)&unk_ABECA0[40] = Math::ArcTan((double)(2 * dword_ABED00) / dbl_ABE368); /*0x58b692*/
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
  *(_DWORD *)&unk_ABECA0[24] = 0; /*0x58b6e2*/
  *(_DWORD *)&unk_ABECA0[28] = 0; /*0x58b6e7*/
  *(_DWORD *)&unk_ABECA0[32] = 0; /*0x58b6ec*/
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
  MapResourceClass::Constructor((int)byte_ABDFD8); /*0x58b745*/
  return atexit(unknown_libname_23); /*0x58b755*/
}



// ==== 0x0058B760  unknown_libname_23  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_23()
{
  RandomMap::CleanupRandomMapData((int)byte_ABDFD8); /*0x58b765*/
}



// ==== 0x0058B770  unknown_libname_24  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
_DWORD *unknown_libname_24()
{
  return SeedInitRNG(&unk_ABE890, 0); /*0x58b77c*/
}



// ==== 0x0058B780  sub_58B780  this=-  sig=ida-proto ====
void sub_58B780()
{
  byte_ABDFB8 = 0; /*0x58b780*/
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
int sub_58B810()
{
  return dword_ABECD0; /*0x58b815*/
}



// ==== 0x0058B820  ObjectClass::ComputeMapCameraBounds  this=ObjectClass  sig=csp ====
void *ComputeMapCameraBounds(ObjectClass *this)
{
  void *result; // eax
  int v2; // ebp
  int i; // edi
  __int16 *Waypoint_Location; // eax
  void *v5; // esi
  int v6; // eax
  int *v7; // eax
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  int v12; // edi
  int v13; // ebx
  __int16 *j; // esi
  int v15; // eax
  int *v16; // eax
  int v17; // edx
  int v18; // edi
  AbstractClass *v19; // ebx
  int v20; // eax
  char *v21; // esi
  int v22; // ecx
  void *v23; // edx
  void *v24; // esi
  int v25; // [esp+10h] [ebp-28h] BYREF
  int v26; // [esp+14h] [ebp-24h] BYREF
  char *k; // [esp+18h] [ebp-20h] BYREF
  char v28[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  char v29[8]; // [esp+20h] [ebp-18h] BYREF
  char v30[4]; // [esp+28h] [ebp-10h] BYREF
  char v31[12]; // [esp+2Ch] [ebp-Ch] BYREF

  result = dword_A8B230; /*0x58b820*/
  v2 = 0; /*0x58b82a*/
  g_MissionQueueFrame.localVariables[162] = 0; /*0x58b830*/
  if ( dword_A8B230 && g_TacticalClass_Instance ) /*0x58b842*/
  {
    for ( i = 0; i < 8; ++i ) /*0x58b848*/
    {
      if ( !(unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, i) ) /*0x58b851*/
        break; /*0x58b858*/
      Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &k, i); /*0x58b86a*/
      v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], Waypoint_Location); /*0x58b87e*/
      v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)v5 + 72))(v5); /*0x58b88f*/
      v7 = (int *)(*(int (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)v5 + 72))(v5, v30, *(_DWORD *)(v6 + 4)); /*0x58b89f*/
      IsoCoord::ToScreenOffset(*v7, (int)v29, &v25, &v26); /*0x58b8ab*/
      v8 = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v28, i); /*0x58b8bc*/
      v9 = g_MissionQueueFrame.localVariables[162]; /*0x58b8c1*/
      v10 = v25; /*0x58b8c9*/
      *(_DWORD *)&g_MissionQueueFrame.globalVariables[4 * g_MissionQueueFrame.localVariables[162] + 132] = *v8; /*0x58b8d2*/
      v11 = (unsigned __int64)(2290649225LL * v26) >> 32; /*0x58b8f4*/
      *(_DWORD *)&g_MissionQueueFrame.globalVariables[8 * v9 + 168] = v10 / 60; /*0x58b8f6*/
      *(_DWORD *)&g_MissionQueueFrame.globalVariables[8 * v9 + 172] = ((unsigned int)v11 >> 31) + (v11 >> 4); /*0x58b907*/
      g_MissionQueueFrame.localVariables[162] = v9 + 1; /*0x58b910*/
    }
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58b924*/
    v12 = 10000; /*0x58b929*/
    v25 = 10000; /*0x58b933*/
    v13 = 0; /*0x58b937*/
    for ( j = (__int16 *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58b942*/
          j;
          j = (__int16 *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], j + 18, 1) ) /*0x58b953*/
      {
        v15 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)j + 72))(j); /*0x58b973*/
        v16 = (int *)(*(int (__thiscall **)(__int16 *, char *, _DWORD))(*(_DWORD *)j + 72))( /*0x58b983*/
                       j,
                       v28,
                       *(_DWORD *)(v15 + 4));
        IsoCoord::ToScreenOffset(*v16, (int)v31, &v26, (int *)&k); /*0x58b98f*/
        v17 = (int)k / 30; /*0x58b9c2*/
        if ( v26 / 60 < v12 ) /*0x58b9c6*/
          v12 = v26 / 60; /*0x58b9c8*/
        if ( v26 / 60 > v2 ) /*0x58b9cc*/
          v2 = v26 / 60; /*0x58b9ce*/
        if ( v17 < v25 ) /*0x58b9d4*/
          v25 = (int)k / 30; /*0x58b9d6*/
        if ( v17 > v13 ) /*0x58b9dc*/
          v13 = (int)k / 30; /*0x58b9de*/
      }
    }
    g_MissionQueueFrame.briefing[354] = v25; /*0x58b9fa*/
    result = dword_A8B230; /*0x58ba01*/
    g_MissionQueueFrame.briefing[355] = v12; /*0x58ba06*/
    g_MissionQueueFrame.localVariables[131] = v2 - v12; /*0x58ba0e*/
    g_MissionQueueFrame.localVariables[147] = v13 - v25; /*0x58ba14*/
    if ( dword_A8B230 ) /*0x58ba1a*/
    {
      v18 = 0; /*0x58ba26*/
      dword_A8B230[122].abstractFlags = g_MissionQueueFrame.localVariables[162]; /*0x58ba28*/
      v19 = dword_A8B230; /*0x58ba2e*/
      if ( dword_A8B230[122].abstractFlags > 0 ) /*0x58ba3c*/
      {
        v20 = 4416; /*0x58ba3e*/
        v21 = &g_MissionQueueFrame.waypoints[1470]; /*0x58ba48*/
        v22 = 4544; /*0x58ba4f*/
        for ( k = &g_MissionQueueFrame.waypoints[1470]; ; v21 = k ) /*0x58ba54*/
        {
          if ( v20 < 4416 || v18 >= g_MissionQueueFrame.localVariables[162] ) /*0x58ba71*/
          {
            v23 = 0; /*0x58ba7c*/
            v24 = 0; /*0x58ba7e*/
          }
          else
          {
            v23 = *(void **)&v21[v20]; /*0x58ba73*/
            v24 = *(void **)&v21[v20 + 4]; /*0x58ba76*/
          }
          *(void **)((char *)&v19->vtable0 + v20) = v23; /*0x58ba80*/
          ++v18; /*0x58ba89*/
          v22 += 4; /*0x58ba8a*/
          *(void **)((char *)&dword_A8B230->vtable1 + v20) = v24; /*0x58ba8d*/
          v20 += 8; /*0x58ba9b*/
          *(_DWORD *)((char *)dword_A8B230 + v22 - 4) = *(_DWORD *)&g_MissionQueueFrame.waypoints[v22 + 1302]; /*0x58ba9e*/
          v19 = dword_A8B230; /*0x58baa2*/
          if ( v18 >= dword_A8B230[122].abstractFlags ) /*0x58baae*/
            break; /*0x58baae*/
        }
      }
      v19[122].vtable1 = (void *)g_MissionQueueFrame.briefing[355]; /*0x58bab5*/
      dword_A8B230[122].vtable2 = (void *)g_MissionQueueFrame.briefing[354]; /*0x58bac7*/
      dword_A8B230[122].vtable3 = (void *)g_MissionQueueFrame.localVariables[131]; /*0x58bad8*/
      result = (void *)g_MissionQueueFrame.localVariables[147]; /*0x58bae4*/
      dword_A8B230[122].uniqueId = g_MissionQueueFrame.localVariables[147]; /*0x58bae9*/
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
void *ScenarioClass::CopyStartPositions(ScenarioClass *this)
{
  void *result; // eax
  AbstractClass *v2; // ebx
  int v3; // edi
  int v4; // eax
  char *v5; // esi
  int v6; // ecx
  void *v7; // edx
  void *v8; // esi

  result = dword_A8B230; /*0x58bb31*/
  if ( dword_A8B230 ) /*0x58bb38*/
  {
    dword_A8B230[122].abstractFlags = g_MissionQueueFrame.localVariables[162]; /*0x58bb45*/
    v2 = dword_A8B230; /*0x58bb4b*/
    v3 = 0; /*0x58bb52*/
    if ( dword_A8B230[122].abstractFlags > 0 ) /*0x58bb5c*/
    {
      v4 = 4416; /*0x58bb60*/
      v5 = &g_MissionQueueFrame.waypoints[1470]; /*0x58bb6a*/
      v6 = 4544; /*0x58bb71*/
      while ( 1 ) /*0x58bb8b*/
      {
        if ( v4 < 4416 || v3 >= g_MissionQueueFrame.localVariables[162] ) /*0x58bb93*/
        {
          v7 = 0; /*0x58bb9e*/
          v8 = 0; /*0x58bba0*/
        }
        else
        {
          v7 = *(void **)&v5[v4]; /*0x58bb95*/
          v8 = *(void **)&v5[v4 + 4]; /*0x58bb98*/
        }
        *(void **)((char *)&v2->vtable0 + v4) = v7; /*0x58bba2*/
        ++v3; /*0x58bbab*/
        v6 += 4; /*0x58bbac*/
        *(void **)((char *)&dword_A8B230->vtable1 + v4) = v8; /*0x58bbaf*/
        v4 += 8; /*0x58bbbd*/
        *(_DWORD *)((char *)dword_A8B230 + v6 - 4) = *(_DWORD *)&g_MissionQueueFrame.waypoints[v6 + 1302]; /*0x58bbc0*/
        v2 = dword_A8B230; /*0x58bbc4*/
        if ( v3 >= dword_A8B230[122].abstractFlags ) /*0x58bbd0*/
          break; /*0x58bbd0*/
        v5 = &g_MissionQueueFrame.waypoints[1470]; /*0x58bb82*/
      }
    }
    v2[122].vtable1 = (void *)g_MissionQueueFrame.briefing[355]; /*0x58bbda*/
    dword_A8B230[122].vtable2 = (void *)g_MissionQueueFrame.briefing[354]; /*0x58bbed*/
    dword_A8B230[122].vtable3 = (void *)g_MissionQueueFrame.localVariables[131]; /*0x58bbfe*/
    result = (void *)g_MissionQueueFrame.localVariables[147]; /*0x58bc0a*/
    dword_A8B230[122].uniqueId = g_MissionQueueFrame.localVariables[147]; /*0x58bc0f*/
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
  dword_ABDF94 = 0; /*0x58bc37*/
  dword_ABDF98 = 0; /*0x58bc3c*/
  byte_ABDF9C = 1; /*0x58bc41*/
  byte_ABDF9D = 0; /*0x58bc48*/
  dword_ABDF90 = (int)&off_7ED858; /*0x58bc4d*/
  dword_ABDFA4 = 10; /*0x58bc57*/
  dword_ABDFA0 = 0; /*0x58bc61*/
  return atexit(sub_58BC70); /*0x58bc6c*/
}



// ==== 0x0058BC70  sub_58BC70  this=-  sig=ida-proto ====
void __cdecl sub_58BC70()
{
  if ( (byte_ABDFB0 & 1) == 0 ) /*0x58bc7a*/
  {
    dword_ABDF90 = (int)&VectorClass<MapRegionClass *>::`vftable'; /*0x58bc7e*/
    byte_ABDFB0 |= 1u; /*0x58bc91*/
    if ( dword_ABDF94 ) /*0x58bc97*/
    {
      if ( byte_ABDF9D ) /*0x58bca1*/
      {
        __3_YAXPAX_Z(dword_ABDF94); /*0x58bca4*/
        dword_ABDF94 = 0; /*0x58bcac*/
      }
    }
    byte_ABDF9D = 0; /*0x58bcb6*/
    dword_ABDF98 = 0; /*0x58bcbd*/
  }
}



// ==== 0x0058BDC0  TileData::Constructor  this=TileData  sig=csp ====
_DWORD *__thiscall TileData::Constructor(TileData *this)
{
  this->u16_2 = 0; /*0x58bdc4*/
  *((_DWORD *)this + 4) = 0; /*0x58bdc7*/
  *((_DWORD *)this + 6) = 0; /*0x58bdca*/
  this->u16_2 = 0; /*0x58bdcd*/
  *((_DWORD *)this + 10) = 0; /*0x58bdd0*/
  *((_DWORD *)this + 12) = 0; /*0x58bdd3*/
  *(_WORD *)this->__tail_0 = 0; /*0x58bdd6*/
  *(_WORD *)&this->__tail_0[2] = 0; /*0x58bdd9*/
  *((_DWORD *)this + 3) = 0; /*0x58bddd*/
  *((_DWORD *)this + 5) = 0; /*0x58bde0*/
  *((_DWORD *)this + 7) = 0; /*0x58bde3*/
  *((_DWORD *)this + 9) = 0; /*0x58bde6*/
  *((_DWORD *)this + 11) = 0; /*0x58bde9*/
  *((_DWORD *)this + 13) = 0; /*0x58bdec*/
  *((_DWORD *)this + 14) = 0; /*0x58bdef*/
  *((_DWORD *)this + 15) = 0; /*0x58bdf2*/
  *((_DWORD *)this + 16) = -1; /*0x58bdf5*/
  *((_BYTE *)this + 68) = 0; /*0x58bdfc*/
  *((_BYTE *)this + 69) = 0; /*0x58bdff*/
  *((_BYTE *)this + 70) = 0; /*0x58be02*/
  *((_BYTE *)this + 71) = 0; /*0x58be05*/
  *((_BYTE *)this + 72) = 0; /*0x58be08*/
  *((_BYTE *)this + 73) = 0; /*0x58be0b*/
  *((_BYTE *)this + 74) = 1; /*0x58be0e*/
  *((_BYTE *)this + 75) = 0; /*0x58be12*/
  return this; /*0x58be15*/
}



// ==== 0x0058BE20  ObjectClass::method_58BE20  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58BE20(ObjectClass *this)
{
  unsigned int v2; // esi
  unsigned int v3; // eax
  _WORD *v4; // ecx
  int v5; // ecx
  __int64 v7; // [esp+14h] [ebp-10h]

  v2 = g_MapCellWidth * g_MapCellWidth - 1; /*0x58be30*/
  do /*0x58be88*/
  {
    do /*0x58be6f*/
    {
      v7 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58be52*/
      LOWORD(v3) = Math::RoundToInt((double)v7 * (double)(v2 + 1) * 2.328306437080797e-10); /*0x58be68*/
    }
    while ( v3 > v2 ); /*0x58be6f*/
    v4 = (_WORD *)(g_MissionQueueFrame.localVariables[163] + 80 * v3); /*0x58be7d*/
  }
  while ( !*v4 && !v4[1] ); /*0x58be88*/
  v5 = 80 * v3; /*0x58be8e*/
  this->AbstractClass = *(void **)(v5 + g_MissionQueueFrame.localVariables[163]); /*0x58be97*/
  return &this->AbstractClass; /*0x58be8d*/
}



// ==== 0x0058BEA0  ObjectClass::method_58BEA0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58BEA0(ObjectClass *this)
{
  int v2; // ebx
  unsigned int v3; // esi
  unsigned int v4; // eax
  _WORD *v5; // ecx
  Cell *v6; // eax
  __int16 v8[2]; // [esp+10h] [ebp-1Ch] BYREF
  __int64 v9; // [esp+14h] [ebp-18h]
  __int64 v10; // [esp+1Ch] [ebp-10h]
  double v11; // [esp+24h] [ebp-8h]

  v2 = 0; /*0x58beab*/
  do /*0x58bf34*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth - 1; /*0x58beb5*/
    do /*0x58bf0b*/
    {
      v9 = v3 + 1; /*0x58bebf*/
      v11 = (double)v9; /*0x58bec7*/
      do /*0x58bef2*/
      {
        v10 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58bed5*/
        LOWORD(v4) = Math::RoundToInt((double)v10 * v11 * 2.328306437080797e-10); /*0x58beeb*/
      }
      while ( v4 > v3 ); /*0x58bef2*/
      v5 = (_WORD *)(g_MissionQueueFrame.localVariables[163] + 80 * v4); /*0x58bf00*/
    }
    while ( !*v5 && !v5[1] ); /*0x58bf0b*/
    ++v2; /*0x58bf13*/
    *(_DWORD *)v8 = *(_DWORD *)(80 * v4 + g_MissionQueueFrame.localVariables[163]); /*0x58bf1d*/
    if ( v2 > 200 ) /*0x58bf21*/
    {
      v8[0] = 0; /*0x58bf42*/
      v8[1] = 0; /*0x58bf47*/
      this->AbstractClass = 0; /*0x58bf51*/
      return &this->AbstractClass; /*0x58bf5c*/
    }
    v6 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8); /*0x58bf2d*/
  }
  while ( !(unsigned __int8)Cell::IsEmpty(v6) ); /*0x58bf34*/
  this->AbstractClass = *(void **)v8; /*0x58bf62*/
  return &this->AbstractClass; /*0x58bf50*/
}



// ==== 0x0058BF70  RandomMap::TerrainTileDataConstructor  this=RandomMap  sig=csp ====
_DWORD *__thiscall RandomMap::TerrainTileDataConstructor(RandomMap *this, int a2)
{
  Cell *v3; // eax
  char IsGroundTypeRange; // al
  void *v5; // ecx
  int v6; // eax

  *(_DWORD *)this->__pad_0 = 0; /*0x58bf7a*/
  *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x58bf7c*/
  this->RandomMap_field_0x8 = (void *)g_MissionQueueFrame.localVariables[164]; /*0x58bf8a*/
  this->RandomMap_field_0xC = 0; /*0x58bf8d*/
  this->RandomMap_field_0x10 = (void *)*((char *)CellCoord::To_CellObj( /*0x58bfa6*/
                                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                   (__int16 *)&a2)
                                       + 283);
  v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x58bfa9*/
  IsGroundTypeRange = Cell::IsGroundTypeRange(v3); /*0x58bfb0*/
  v5 = (void *)a2; /*0x58bfb5*/
  LOBYTE(this->RandomMap_field_0x14) = IsGroundTypeRange; /*0x58bfb9*/
  *(void **)((char *)&this->RandomMap_field_0x14 + 2) = v5; /*0x58bfbe*/
  BYTE2(this->RandomMap_field_0x18) = 0; /*0x58bfc1*/
  HIBYTE(this->RandomMap_field_0x18) = 1; /*0x58bfc4*/
  this->RandomMap_field_0x1C = 0; /*0x58bfc7*/
  this->RandomMap_field_0x20 = 0; /*0x58bfca*/
  LOBYTE(this->RandomMap_field_0x24[0]) = 0; /*0x58bfcd*/
  this->RandomMap_field_0x2C[0] = 0; /*0x58bfd0*/
  this->RandomMap_field_0x30 = 0; /*0x58bfd3*/
  LOBYTE(this->RandomMap_field_0x34[0]) = 1; /*0x58bfd6*/
  BYTE1(this->RandomMap_field_0x34[0]) = 0; /*0x58bfd9*/
  this->RandomMap_field_0x28[0] = (int)&DynamicVectorClass<Cell>::`vftable'; /*0x58bfdc*/
  this->RandomMap_field_0x3C[0] = 10; /*0x58bfe3*/
  this->RandomMap_field_0x38[0] = 0; /*0x58bfea*/
  this->RandomMap_field_0x40[0] = 0; /*0x58bfed*/
  *(_DWORD *)this->__pad_44 = 0; /*0x58bff0*/
  this->RandomMap_field_0x48 = 0; /*0x58bff3*/
  *(_DWORD *)this->__pad_4C = 0; /*0x58bff6*/
  this->RandomMap_field_0x3C[0] = 100000; /*0x58bff9*/
  ++g_MissionQueueFrame.localVariables[164]; /*0x58c014*/
  if ( g_MissionQueueFrame.briefing[342] < g_MissionQueueFrame.briefing[340] /*0x58c041*/
    || (BYTE1(g_MissionQueueFrame.briefing[341]) || !g_MissionQueueFrame.briefing[340])
    && g_MissionQueueFrame.briefing[343] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.briefing[338] + 8))(
         &g_MissionQueueFrame.briefing[338],
         g_MissionQueueFrame.briefing[340] + g_MissionQueueFrame.briefing[343],
         0) )
  {
    v6 = g_MissionQueueFrame.briefing[342]++; /*0x58c04e*/
    *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v6) = this; /*0x58c05d*/
  }
  return this->__pad_0; /*0x58c062*/
}



// ==== 0x0058C070  TileNode::Cleanup  this=TileNode  sig=csp ====
int __thiscall TileNode::Cleanup(TileNode *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // eax
  int result; // eax
  TileNode *v5; // [esp+8h] [ebp-4h] BYREF

  v2 = (void (__thiscall ***)(_DWORD, int))*this; /*0x58c077*/
  if ( v2 ) /*0x58c07b*/
  {
    (**v2)(v2, 1); /*0x58c081*/
    *this = 0; /*0x58c083*/
  }
  v5 = this; /*0x58c095*/
  v3 = (*(int (__thiscall **)(int *, TileNode **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x58c099*/
         &g_MissionQueueFrame.briefing[338],
         &v5);
  if ( v3 != -1 && v3 < g_MissionQueueFrame.briefing[342] ) /*0x58c0a9*/
  {
    --g_MissionQueueFrame.briefing[342]; /*0x58c0ae*/
    for ( ; /*0x58c0b4*/
          v3 < g_MissionQueueFrame.briefing[342];
          *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                  + 4 * v3) )
    {
      ++v3; /*0x58c0bc*/
    }
  }
  result = *((_DWORD *)this + 11); /*0x58c0ce*/
  *((_DWORD *)this + 10) = &VectorClass<Cell>::`vftable'; /*0x58c0d1*/
  if ( result && *((_BYTE *)this + 53) ) /*0x58c0dc*/
  {
    __3_YAXPAX_Z((void *)result); /*0x58c0e2*/
    *((_DWORD *)this + 11) = 0; /*0x58c0ea*/
  }
  *((_BYTE *)this + 53) = 0; /*0x58c0ed*/
  *((_DWORD *)this + 12) = 0; /*0x58c0f0*/
  return result; /*0x58c0f3*/
}



// ==== 0x0058C100  ObjectClass::method_58C100  this=ObjectClass  sig=csp ====
void sub_58C100(ObjectClass *this)
{
  int v1; // edi
  _DWORD *v2; // esi
  int v3; // eax
  void *v4; // eax
  _DWORD *v5; // [esp+8h] [ebp-4h] BYREF

  v1 = g_MissionQueueFrame.briefing[342] - 1; /*0x58c10a*/
  for ( g_MissionQueueFrame.localVariables[164] = 0; v1 >= 0; --v1 ) /*0x58c115*/
  {
    v2 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * v1); /*0x58c122*/
    if ( v2 ) /*0x58c127*/
    {
      if ( *v2 ) /*0x58c12d*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 1); /*0x58c137*/
        *v2 = 0; /*0x58c139*/
      }
      v5 = v2; /*0x58c14b*/
      v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x58c14f*/
             &g_MissionQueueFrame.briefing[338],
             &v5);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.briefing[342] ) /*0x58c15f*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x58c164*/
        for ( ; /*0x58c16a*/
              v3 < g_MissionQueueFrame.briefing[342];
              *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                      + 4 * v3) )
        {
          ++v3; /*0x58c172*/
        }
      }
      v4 = (void *)v2[11]; /*0x58c184*/
      v2[10] = &VectorClass<Cell>::`vftable'; /*0x58c187*/
      if ( v4 ) /*0x58c190*/
      {
        if ( *((_BYTE *)v2 + 53) ) /*0x58c192*/
        {
          __3_YAXPAX_Z(v4); /*0x58c198*/
          v2[11] = 0; /*0x58c1a0*/
        }
      }
      *((_BYTE *)v2 + 53) = 0; /*0x58c1a4*/
      v2[12] = 0; /*0x58c1a7*/
      __3_YAXPAX_Z(v2); /*0x58c1aa*/
    }
  }
}



// ==== 0x0058C2A0  Tactical::GetCellData  this=Tactical  sig=csp ====
char *__thiscall Tactical::GetCellData(Tactical *this)
{
  return (char *)(g_MissionQueueFrame.localVariables[163] /*0x58c2be*/
                + 80 * (*(__int16 *)this->__pad_0 + g_MapCellWidth * *(__int16 *)this->Tactical_field_0x2));
}



// ==== 0x0058C2C0  GetTileDataEntry  this=-  sig=ida-proto ====
char *__fastcall TileData_GetEntry(int a1)
{
  return (char *)dword_ABED10 + 80 * a1; /*0x58c2ce*/
}



// ==== 0x0058C320  ObjectClass::method_58C320  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58C320(ObjectClass *this, _DWORD *a2)
{
  int v2; // ebx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // ecx
  __int64 v8; // [esp+18h] [ebp-10h]

  v2 = g_MapCellWidth * g_MapCellWidth; /*0x58c32e*/
  do /*0x58c38f*/
  {
    do /*0x58c372*/
    {
      v8 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58c355*/
      LOWORD(v4) = Math::RoundToInt((double)v8 * (double)(unsigned int)v2 * 2.328306437080797e-10); /*0x58c36b*/
    }
    while ( v4 > v2 - 1 ); /*0x58c372*/
    v5 = g_MissionQueueFrame.localVariables[163] + 80 * v4; /*0x58c380*/
  }
  while ( *(void **)(v5 + 56) != this->? || !*(_WORD *)v5 && !*(_WORD *)(v5 + 2) ); /*0x58c38f*/
  v6 = *(_DWORD *)(80 * v4 + g_MissionQueueFrame.localVariables[163]); /*0x58c39e*/
  *a2 = v6; /*0x58c3a6*/
  return a2; /*0x58c398*/
}



// ==== 0x0058C3B0  ObjectClass::method_58C3B0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58C3B0(ObjectClass *this, _DWORD *a2)
{
  int v3; // ebx
  unsigned int v4; // eax
  int v5; // ecx
  Cell *v6; // eax
  int v8; // [esp+10h] [ebp-20h]
  __int16 v9[2]; // [esp+14h] [ebp-1Ch] BYREF
  __int64 v10; // [esp+18h] [ebp-18h]
  __int64 v11; // [esp+20h] [ebp-10h]
  double v12; // [esp+28h] [ebp-8h]

  v8 = 0; /*0x58c3bb*/
  do /*0x58c457*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth; /*0x58c3c6*/
    do /*0x58c423*/
    {
      v10 = (unsigned int)v3; /*0x58c3d3*/
      v12 = (double)(unsigned int)v3; /*0x58c3db*/
      do /*0x58c406*/
      {
        v11 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58c3e9*/
        LOWORD(v4) = Math::RoundToInt((double)v11 * v12 * 2.328306437080797e-10); /*0x58c3ff*/
      }
      while ( v4 > v3 - 1 ); /*0x58c406*/
      v5 = g_MissionQueueFrame.localVariables[163] + 80 * v4; /*0x58c414*/
    }
    while ( *(void **)(v5 + 56) != this->? || !*(_WORD *)v5 && !*(_WORD *)(v5 + 2) ); /*0x58c423*/
    *(_DWORD *)v9 = *(_DWORD *)(80 * v4 + g_MissionQueueFrame.localVariables[163]); /*0x58c432*/
    if ( ++v8 > 200 ) /*0x58c444*/
    {
      *a2 = 0; /*0x58c47a*/
      return a2; /*0x58c480*/
    }
    v6 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x58c450*/
  }
  while ( !(unsigned __int8)Cell::IsEmpty(v6) ); /*0x58c457*/
  *a2 = *(_DWORD *)v9; /*0x58c48e*/
  return a2; /*0x58c477*/
}



// ==== 0x0058C4A0  ObjectClass::method_58C4A0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58C4A0(ObjectClass *this, _DWORD *a2)
{
  _WORD *v2; // ebp
  int v3; // ebx
  unsigned int v4; // eax
  Cell *v5; // eax
  int v7; // [esp+10h] [ebp-20h]
  __int64 v9; // [esp+20h] [ebp-10h]

  v2 = (_WORD *)g_MissionQueueFrame.localVariables[163]; /*0x58c4b3*/
  v7 = g_MapCellWidth * g_MapCellWidth; /*0x58c4bd*/
  v3 = 0; /*0x58c4c1*/
  while ( 1 ) /*0x58c559*/
  {
    do /*0x58c508*/
    {
      v9 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58c4eb*/
      LOWORD(v4) = Math::RoundToInt((double)v9 * (double)(unsigned int)v7 * 2.328306437080797e-10); /*0x58c501*/
    }
    while ( v4 > v7 - 1 ); /*0x58c508*/
    ++v3; /*0x58c518*/
    qmemcpy(v2, (const void *)(g_MissionQueueFrame.localVariables[163] + 80 * v4), 0x50u); /*0x58c523*/
    if ( v3 >= 100 ) /*0x58c525*/
    {
      *a2 = 0; /*0x58c57e*/
      return a2; /*0x58c584*/
    }
    if ( (void *)*((_DWORD *)v2 + 14) == this->? && (*v2 || v2[1]) ) /*0x58c53a*/
    {
      if ( *((_BYTE *)v2 + 68) ) /*0x58c541*/
      {
        v5 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v2); /*0x58c552*/
        if ( (unsigned __int8)Cell::IsEmpty(v5) ) /*0x58c559*/
          break; /*0x58c559*/
      }
    }
  }
  *a2 = *(_DWORD *)v2; /*0x58c591*/
  return a2; /*0x58c569*/
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

  v3 = dword_ABED10; /*0x58c5b2*/
  v11 = g_MapCellWidth * g_MapCellWidth; /*0x58c5c1*/
  v9 = 0; /*0x58c5c5*/
  do /*0x58c67e*/
  {
    do /*0x58c60a*/
    {
      v13 = (unsigned int)Random::State(&unk_ABE890); /*0x58c5ed*/
      v4 = Math::RoundToInt((double)v13 * (double)(unsigned int)v11 * 2.328306437080797e-10); /*0x58c603*/
    }
    while ( v4 > v11 - 1 ); /*0x58c60a*/
    v5 = v9 + 1 < 100; /*0x58c626*/
    qmemcpy(v3, (char *)dword_ABED10 + 80 * v4, 0x50u); /*0x58c629*/
    ++v9; /*0x58c62b*/
    if ( !v5 ) /*0x58c62f*/
    {
      *a1 = 0; /*0x58c69a*/
      return a1; /*0x58c6a0*/
    }
    v6 = CellCoord::To_CellObj(&dword_87F7E8, v3); /*0x58c637*/
    v7 = v6; /*0x58c63f*/
  }
  while ( !*v3 && !v3[1] /*0x58c67e*/
       || MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)v6 + 18, 0, 0) != a2
       || !Cell::IsEmpty(v7)
       || a3 != -1 && *((_DWORD *)v3 + 14) != a3 );
  *a1 = *(_DWORD *)v3; /*0x58c6ac*/
  return a1; /*0x58c697*/
}



// ==== 0x0058C6F0  Memory_Helper_58C6F0  this=ObjectClass  sig=csp ====
double __stdcall sub_58C6F0(__int16 *a1, __int16 *a2, double a3)
{
  double v3; // st7
  double v4; // st7
  char v6; // c0
  int v8; // [esp+Ch] [ebp-10h]
  double v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+24h] [ebp+8h]
  double v11; // [esp+28h] [ebp+Ch]

  v8 = *a2 - *a1; /*0x58c71d*/
  v10 = a2[1] - a1[1]; /*0x58c725*/
  v9 = Math::Sqrt((double)(v8 * v8 + v10 * v10)); /*0x58c735*/
  if ( v8 ) /*0x58c73e*/
  {
    v3 = Math::ArcTan(-((double)v10 / (double)v8)); /*0x58c754*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 * 2.5 + 1.5 * v11 + 0.15 * v9; /*0x58c7ee*/
}



// ==== 0x0058C800  RandomMap::GenerateTerrain  this=RandomMap  sig=csp ====
_DWORD *__thiscall RandomMap::GenerateTerrain(RandomMap *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // edx
  int v5; // edx
  int i; // ebx
  int v7; // edi
  int v8; // eax
  int v9; // esi
  char *v10; // eax
  Cell *v11; // eax
  Cell *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  char v16; // bl
  _DWORD *v17; // ebp
  unsigned int v18; // esi
  unsigned int v19; // eax
  int v20; // edi
  int v21; // edx
  _BYTE *v22; // esi
  Cell *v23; // eax
  int v24; // esi
  int j; // eax
  int v26; // ecx
  char v27; // cl
  int v29; // edx
  __int16 v30; // bp
  int v31; // ecx
  int v32; // esi
  int v33; // edx
  int v34; // edi
  int v35; // esi
  int v36; // eax
  int v37; // ebx
  int v38; // ecx
  char v39; // cl
  RandomMap *v40; // eax
  _DWORD *v41; // esi
  char v42; // al
  int v43; // edi
  int v44; // ebp
  int v45; // [esp+10h] [ebp-44h] BYREF
  __int16 v46[2]; // [esp+14h] [ebp-40h] BYREF
  __int16 v47[2]; // [esp+18h] [ebp-3Ch] BYREF
  int v48; // [esp+1Ch] [ebp-38h]
  __int16 v49[2]; // [esp+20h] [ebp-34h] BYREF
  RandomMap *v50; // [esp+24h] [ebp-30h]
  int v51; // [esp+28h] [ebp-2Ch] BYREF
  double v52; // [esp+2Ch] [ebp-28h]
  __int64 v53; // [esp+34h] [ebp-20h] BYREF
  _VectorClass_VCell v54; // [esp+3Ch] [ebp-18h] BYREF
  int v55; // [esp+50h] [ebp-4h]

  v50 = this; /*0x58c816*/
  *(_DWORD *)v47 = g_MissionQueueFrame.localVariables[164]; /*0x58c81a*/
  VectorClass::CellConstructor((VectorClass *)&v54, 0, 0); /*0x58c81e*/
  v2 = this->RandomMap_field_0x24[0]; /*0x58c823*/
  *(_DWORD *)v54.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58c826*/
  *(_DWORD *)v54.__tail_10 = 0; /*0x58c832*/
  v55 = 50000; /*0x58c838*/
  if ( v54.m_8 > 0 || (BYTE1(v54.m_C) || !v54.m_8) && VectorClass::ResizeEx(&v54, v54.m_8 + 50000, 0) ) /*0x58c859*/
  {
    v3 = (*(_DWORD *)v54.__tail_10)++; /*0x58c867*/
    *(_DWORD *)(*(_DWORD *)&v54.m_1[3] + 4 * v3) = v2; /*0x58c872*/
  }
  if ( (unsigned __int8)Cell::IsGroundTypeRange((Cell *)this) /*0x58c882*/
    || (LOBYTE(v48) = 0, (unsigned __int8)Cell::IsShore((Cell *)this)) )
  {
    LOBYTE(v48) = 1; /*0x58c890*/
  }
  v51 = this->__pad_4C[207]; /*0x58c89c*/
  v4 = *(_DWORD *)v54.__tail_10; /*0x58c8a0*/
  *(_DWORD *)v49 = 0; /*0x58c8a6*/
  if ( *(_DWORD *)v54.__tail_10 ) /*0x58c8aa*/
  {
    do /*0x58ca9c*/
    {
      v45 = *(_DWORD *)(*(_DWORD *)&v54.m_1[3] + 4 * v4 - 4); /*0x58c8b8*/
      if ( v4 - 1 < v4 ) /*0x58c8c1*/
        *(_DWORD *)v54.__tail_10 = v4 - 1; /*0x58c8c7*/
      v5 = *(_DWORD *)v47; /*0x58c8f4*/
      *(_DWORD *)(80 * ((__int16)v45 + g_MapCellWidth * SHIWORD(v45)) + g_MissionQueueFrame.localVariables[163] + 60) = *(_DWORD *)v47; /*0x58c906*/
      if ( g_MissionQueueFrame.localVariables[163] ) /*0x58c912*/
        *(_DWORD *)(80 * ((__int16)v45 + g_MapCellWidth * SHIWORD(v45)) + g_MissionQueueFrame.localVariables[163] + 56) = v5; /*0x58c92d*/
      for ( i = 0; i < 8; ++i ) /*0x58c931*/
      {
        LODWORD(v52) = *CellStruct::Add((CellStruct *)&v45, &v53, (_WORD *)(4 * (i & 7) + 9041544)); /*0x58c956*/
        *(_DWORD *)v46 = LODWORD(v52); /*0x58c95a*/
        v7 = g_MissionQueueFrame.localVariables[160]; /*0x58c968*/
        v8 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v52) + g_MapCellWidth * SWORD1(v52)); /*0x58c97d*/
        v9 = SWORD1(v52) + SLOWORD(v52); /*0x58c97f*/
        if ( v9 > g_MissionQueueFrame.localVariables[160] /*0x58c9bf*/
          && SLOWORD(v52) - SWORD1(v52) < g_MissionQueueFrame.localVariables[160]
          && SWORD1(v52) - SLOWORD(v52) < g_MissionQueueFrame.localVariables[160]
          && v9 <= g_MissionQueueFrame.localVariables[161]
          && *(_DWORD *)(v8 + 56) == -1
          && *(_DWORD *)(v8 + 60) != *(_DWORD *)v47 )
        {
          *(_DWORD *)(v8 + 60) = *(_DWORD *)v47; /*0x58c9c5*/
          v10 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v46); /*0x58c9d2*/
          if ( v10[283] == v51 ) /*0x58c9e2*/
          {
            v11 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v46); /*0x58c9f2*/
            v13 = 1; /*0x58ca20*/
            if ( !(unsigned __int8)Cell::IsGroundTypeRange(v11) ) /*0x58c9f9*/
            {
              v12 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v46); /*0x58ca0c*/
              if ( !(unsigned __int8)Cell::IsShore(v12) ) /*0x58ca13*/
                v13 = 0; /*0x58c9f9*/
            }
            if ( v13 == (unsigned __int8)v48 /*0x58ca60*/
              && (*(int *)v54.__tail_10 < v54.m_8
               || (BYTE1(v54.m_C) || !v54.m_8)
               && v55 > 0
               && (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v54.__pad_0 + 8))(
                    &v54,
                    v55 + v54.m_8,
                    0)) )
            {
              v14 = (*(_DWORD *)v54.__tail_10)++; /*0x58ca6f*/
              *(_DWORD *)(*(_DWORD *)&v54.m_1[3] + 4 * v14) = *(_DWORD *)v46; /*0x58ca7a*/
            }
          }
          v7 = g_MissionQueueFrame.localVariables[160]; /*0x58ca7d*/
        }
      }
      v4 = *(_DWORD *)v54.__tail_10; /*0x58ca91*/
      v15 = ++*(_DWORD *)v49; /*0x58ca95*/
    }
    while ( *(_DWORD *)v54.__tail_10 ); /*0x58ca9c*/
    if ( v15 >= 75 ) /*0x58caa7*/
      goto LABEL_84; /*0x58caa7*/
  }
  else
  {
    v7 = g_MissionQueueFrame.localVariables[160]; /*0x58caaf*/
  }
  if ( !(_BYTE)v48 ) /*0x58cabb*/
  {
    v16 = 0; /*0x58cac5*/
    if ( *(_DWORD *)v47 ) /*0x58cac9*/
    {
      v29 = v50->RandomMap_field_0x24[0]; /*0x58cca4*/
      LODWORD(v52) = v29; /*0x58cca9*/
      v49[1] = HIWORD(v29); /*0x58ccb3*/
      v49[0] = v29 - 1; /*0x58ccb8*/
      v30 = v29 - 1; /*0x58ccbd*/
      v31 = (__int16)(v29 - 1); /*0x58ccc1*/
      v32 = SHIWORD(v29) + v31; /*0x58cccb*/
      if ( v32 <= v7 /*0x58cce6*/
        || v31 - SWORD1(v52) >= v7
        || SWORD1(v52) - v31 >= v7
        || v32 > g_MissionQueueFrame.localVariables[161] )
      {
        LODWORD(v53) = v29; /*0x58cce8*/
        *(_DWORD *)v49 = v29 - 0x10000; /*0x58ccf6*/
        v30 = v29; /*0x58ccfb*/
      }
      v33 = v30 + v49[1]; /*0x58cd0b*/
      if ( v33 > v7 && v30 - v49[1] < v7 && v49[1] - v30 < v7 && v33 <= g_MissionQueueFrame.localVariables[161] ) /*0x58cd34*/
      {
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x58cd44*/
          v34 = *(_DWORD *)(80 * (v30 + g_MapCellWidth * v49[1]) + g_MissionQueueFrame.localVariables[163] + 56); /*0x58cd5a*/
        else
          v34 = -1; /*0x58cd46*/
        v35 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49) + 283); /*0x58cd6d*/
        LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58cd79*/
        v36 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58cd83*/
        if ( v36 ) /*0x58cd8a*/
        {
          v37 = *(_DWORD *)v47; /*0x58cd90*/
          do /*0x58cdef*/
          {
            LODWORD(v52) = *(_DWORD *)(v36 + 36); /*0x58cd97*/
            v38 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v52) + g_MapCellWidth * SWORD1(v52)); /*0x58cdb8*/
            if ( *(_DWORD *)(v38 + 56) == v37 ) /*0x58cdbd*/
            {
              *(_DWORD *)(v38 + 56) = v34; /*0x58cdbf*/
              *(_BYTE *)(v38 + 75) = 0; /*0x58cdc2*/
              *(_DWORD *)(v36 + 56) = 0; /*0x58cdc6*/
              *(_BYTE *)(v36 + 282) = 0; /*0x58cdc9*/
              v39 = g_MissionQueueFrame.globalVariables[100]; /*0x58cdd0*/
              if ( v35 != -1 ) /*0x58cdd9*/
                v39 = v35; /*0x58cddb*/
              *(_BYTE *)(v36 + 283) = v39; /*0x58cddd*/
            }
            v36 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58cde8*/
          }
          while ( v36 ); /*0x58cdef*/
        }
        goto LABEL_63; /*0x58cdef*/
      }
      goto LABEL_84; /*0x58cd34*/
    }
    v17 = RandomMap::CellListAlloc((RandomMap *)&g_MissionQueueFrame.briefing[356], 0); /*0x58cadc*/
    HIDWORD(v53) = 0; /*0x58cade*/
    *(_DWORD *)v46 = v17; /*0x58cae2*/
    v18 = v17[4] - 1; /*0x58cae9*/
    v53 = (unsigned int)v17[4]; /*0x58caed*/
    v52 = (double)v53; /*0x58caf5*/
    do /*0x58cb20*/
    {
      v53 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58cb03*/
      LOWORD(v19) = Math::RoundToInt((double)v53 * v52 * 2.328306437080797e-10); /*0x58cb19*/
    }
    while ( v19 > v18 ); /*0x58cb20*/
    v20 = 0; /*0x58cb25*/
    *(_DWORD *)v47 = *(_DWORD *)(v17[1] + 4 * v19); /*0x58cb2a*/
    while ( 1 ) /*0x58cb51*/
    {
      LODWORD(v52) = *CellStruct::Add((CellStruct *)v47, &v53, (_WORD *)(4 * (v20 & 7) + 9041544)); /*0x58cb51*/
      *(_DWORD *)v49 = LODWORD(v52); /*0x58cb55*/
      v21 = SWORD1(v52) + SLOWORD(v52); /*0x58cb61*/
      if ( v21 > g_MissionQueueFrame.localVariables[160] ) /*0x58cb66*/
      {
        if ( SLOWORD(v52) - SWORD1(v52) < g_MissionQueueFrame.localVariables[160] /*0x58cb7c*/
          && SWORD1(v52) - SLOWORD(v52) < g_MissionQueueFrame.localVariables[160]
          && v21 <= g_MissionQueueFrame.localVariables[161] )
        {
          v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x58cb91*/
          if ( v22[283] != *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v47) + 283) ) /*0x58cbac*/
          {
            v23 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x58cbb8*/
            if ( !(unsigned __int8)Cell::IsGroundTypeRange(v23) ) /*0x58cbc6*/
            {
              v24 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49) + 283); /*0x58cbea*/
              LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58cbf6*/
              for ( j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58cc09*/
                    j;
                    j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
              {
                LODWORD(v52) = *(_DWORD *)(j + 36); /*0x58cc17*/
                v26 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v52) + g_MapCellWidth * SWORD1(v52)); /*0x58cc32*/
                if ( !*(_DWORD *)(v26 + 56) ) /*0x58cc34*/
                {
                  *(_DWORD *)(v26 + 56) = -1; /*0x58cc39*/
                  *(_BYTE *)(v26 + 75) = 0; /*0x58cc3c*/
                  *(_DWORD *)(j + 56) = 0; /*0x58cc40*/
                  *(_BYTE *)(j + 282) = 0; /*0x58cc43*/
                  v27 = g_MissionQueueFrame.globalVariables[100]; /*0x58cc4a*/
                  if ( v24 != -1 ) /*0x58cc52*/
                    v27 = v24; /*0x58cc54*/
                  *(_BYTE *)(j + 283) = v27; /*0x58cc56*/
                }
              }
              v17 = *(_DWORD **)v46; /*0x58cc6a*/
              v16 = 1; /*0x58cc6e*/
LABEL_60:
              if ( v17 ) /*0x58cc72*/
                (*(void (__thiscall **)(_DWORD *, int))*v17)(v17, 1); /*0x58cc7b*/
              if ( v16 ) /*0x58cc7f*/
              {
LABEL_63:
                *(_DWORD *)v54.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x58cc85*/
                Buffer::Cleanup(&v54); /*0x58cc91*/
                return 0; /*0x58cc9f*/
              }
              break; /*0x58cc7f*/
            }
          }
        }
        v17 = *(_DWORD **)v46; /*0x58cbc8*/
      }
      if ( ++v20 >= 8 ) /*0x58cbd0*/
        goto LABEL_60; /*0x58cbd0*/
    }
  }
LABEL_84:
  v40 = (RandomMap *)__2_YAPAXI_Z(0x50u); /*0x58cdf6*/
  if ( v40 ) /*0x58ce02*/
    v41 = RandomMap::TerrainTileDataConstructor(v40, v50->RandomMap_field_0x24[0]); /*0x58ce13*/
  else
    v41 = 0; /*0x58ce17*/
  v42 = v48; /*0x58ce1d*/
  v41[4] = v51; /*0x58ce21*/
  *((_BYTE *)v41 + 20) = v42; /*0x58ce24*/
  v41[3] = 0; /*0x58ce27*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58ce38*/
  {
    v43 = 0; /*0x58ce3c*/
    v44 = g_MapCellWidth * g_MapCellWidth; /*0x58ce3e*/
    do /*0x58ce71*/
    {
      if ( *(_DWORD *)(v43 + g_MissionQueueFrame.localVariables[163] + 56) == v41[2] ) /*0x58ce50*/
      {
        v51 = 0; /*0x58ce56*/
        if ( (unsigned __int8)Coord::Compare2D((Coord *)(v43 + g_MissionQueueFrame.localVariables[163]), &v51) ) /*0x58ce61*/
          ++v41[3]; /*0x58ce6a*/
      }
      v43 += 80; /*0x58ce6d*/
      --v44; /*0x58ce70*/
    }
    while ( v44 ); /*0x58ce71*/
  }
  *(_DWORD *)v54.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x58ce77*/
  Buffer::Cleanup(&v54); /*0x58ce7f*/
  return v41; /*0x58cc98*/
}



// ==== 0x0058CE90  ObjectClass::Map_Helper_58CE90  this=ObjectClass  sig=csp ====
void Map_Helper_58CE90(ObjectClass *this)
{
  int v1; // ecx
  int v2; // eax
  int i; // edi
  _DWORD *v4; // esi
  int v5; // eax
  void *v6; // eax
  _DWORD *v7; // [esp+Ch] [ebp-4h] BYREF

  if ( g_MissionQueueFrame.localVariables[163] ) /*0x58ce9d*/
  {
    v1 = g_MapCellWidth * g_MapCellWidth; /*0x58cea5*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58ceaa*/
    {
      v2 = 0; /*0x58ceac*/
      do /*0x58cec9*/
      {
        *(_DWORD *)(v2 + g_MissionQueueFrame.localVariables[163] + 56) = -1; /*0x58ceb7*/
        *(_DWORD *)(v2 + g_MissionQueueFrame.localVariables[163] + 60) = -1; /*0x58cec1*/
        v2 += 80; /*0x58cec5*/
        --v1; /*0x58cec8*/
      }
      while ( v1 ); /*0x58cec9*/
    }
  }
  for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x58ced5*/
  {
    v4 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x58cee1*/
    if ( v4 ) /*0x58cee6*/
    {
      if ( *v4 ) /*0x58ceec*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v4)(*v4, 1); /*0x58cef6*/
        *v4 = 0; /*0x58cef8*/
      }
      v7 = v4; /*0x58cf0a*/
      v5 = (*(int (__thiscall **)(int *, _DWORD **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x58cf0e*/
             &g_MissionQueueFrame.briefing[338],
             &v7);
      if ( v5 != -1 && v5 < g_MissionQueueFrame.briefing[342] ) /*0x58cf1e*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x58cf23*/
        for ( ; /*0x58cf29*/
              v5 < g_MissionQueueFrame.briefing[342];
              *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v5 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                      + 4 * v5) )
        {
          ++v5; /*0x58cf31*/
        }
      }
      v6 = (void *)v4[11]; /*0x58cf43*/
      v4[10] = &VectorClass<Cell>::`vftable'; /*0x58cf46*/
      if ( v6 && *((_BYTE *)v4 + 53) ) /*0x58cf51*/
      {
        __3_YAXPAX_Z(v6); /*0x58cf57*/
        v4[11] = 0; /*0x58cf5f*/
      }
      *((_BYTE *)v4 + 53) = 0; /*0x58cf63*/
      v4[12] = 0; /*0x58cf66*/
      __3_YAXPAX_Z(v4); /*0x58cf69*/
    }
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x58cf79*/
}



// ==== 0x0058CF90  RandomMap::GenerateTerrainForAllCells  this=RandomMap  sig=csp ====
int __thiscall RandomMap::GenerateTerrainForAllCells(RandomMap *this)
{
  int result; // eax
  int v2; // ebx
  int v3; // esi
  RandomMap *v4; // edi
  __int16 v5[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v5 = this; /*0x58cf90*/
  result = g_MapCellWidth * g_MapCellWidth; /*0x58cf96*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58cf9b*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x58cf9f*/
    result = g_MissionQueueFrame.localVariables[163]; /*0x58cfa1*/
    v3 = 0; /*0x58cfa7*/
    do /*0x58d002*/
    {
      *(_DWORD *)v5 = *(_DWORD *)(v3 + result); /*0x58cfb6*/
      v4 = (RandomMap *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v5); /*0x58cfbf*/
      result = g_MissionQueueFrame.localVariables[163]; /*0x58cfc1*/
      if ( *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] + 56) == -1 /*0x58cfd4*/
        && (*(_WORD *)(v3 + g_MissionQueueFrame.localVariables[163])
         || *(_WORD *)(v3 + g_MissionQueueFrame.localVariables[163] + 2)) )
      {
        if ( (unsigned __int8)Cell::IsGroundTypeRange((Cell *)v4) || (unsigned __int8)Cell::IsShore((Cell *)v4) ) /*0x58cfe9*/
          RandomMap::GenerateTerrain(v4); /*0x58cff4*/
        result = g_MissionQueueFrame.localVariables[163]; /*0x58cff9*/
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

  result = g_MapCellWidth * g_MapCellWidth; /*0x58d016*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58d01d*/
  {
    v3 = 0; /*0x58d021*/
    v4 = g_MapCellWidth * g_MapCellWidth; /*0x58d023*/
    do /*0x58d05c*/
    {
      result = (int)dword_ABED10 + v3; /*0x58d02a*/
      if ( *(_DWORD *)((char *)dword_ABED10 + v3 + 56) == -1 && (*(_WORD *)result || *(_WORD *)(result + 2)) ) /*0x58d038*/
      {
        v5 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)((char *)dword_ABED10 + v3)); /*0x58d045*/
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

  if ( dword_ABED10 ) /*0x58d079*/
  {
    result = 80 * (*a1 + g_MapCellWidth * a1[1]); /*0x58d08e*/
    *(_DWORD *)((char *)dword_ABED10 + result + 56) = a2; /*0x58d091*/
  }
  return result; /*0x58d095*/
}



// ==== 0x0058D0A0  TileSystem::LookupMapTile  this=TileSystem  sig=csp ====
int __thiscall TileSystem::LookupMapTile(TileSystem *this)
{
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d0a8*/
    return *(_DWORD *)(80 * (*(__int16 *)this->__pad_0 + g_MapCellWidth * *(__int16 *)&this->__pad_0[2]) /*0x58d0c4*/
                     + g_MissionQueueFrame.localVariables[163]
                     + 56);
  else
    return -1; /*0x58d0aa*/
}



// ==== 0x0058D120  ObjectClass::method_58D120  this=ObjectClass  sig=csp ====
int __thiscall sub_58D120(ObjectClass *this, int a2, int a3)
{
  int result; // eax
  int v4; // ebx
  int v5; // esi
  _DWORD *v6; // eax
  ObjectClass *v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  result = g_MapCellWidth * g_MapCellWidth; /*0x58d129*/
  v7 = this; /*0x58d12e*/
  if ( g_MapCellWidth * g_MapCellWidth <= 0 ) /*0x58d134*/
  {
    this->? = 0; /*0x58d1b3*/
  }
  else
  {
    v4 = a3; /*0x58d137*/
    v5 = 0; /*0x58d141*/
    v8 = g_MapCellWidth * g_MapCellWidth; /*0x58d143*/
    do /*0x58d1a4*/
    {
      if ( *(void **)(v5 + g_MissionQueueFrame.localVariables[163] + 56) == this->? ) /*0x58d153*/
      {
        *(_DWORD *)(v5 + g_MissionQueueFrame.localVariables[163] + 56) = a2; /*0x58d155*/
        *(_BYTE *)(v5 + g_MissionQueueFrame.localVariables[163] + 75) = 0; /*0x58d15e*/
        a3 = *(_DWORD *)(v5 + g_MissionQueueFrame.localVariables[163]); /*0x58d176*/
        v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x58d17a*/
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
    this->? = 0; /*0x58d1a8*/
  }
  return result; /*0x58d1ac*/
}



// ==== 0x0058D1C0  RandomMap::ExpandTerrainCells  this=RandomMap  sig=csp ====
int __thiscall RandomMap::ExpandTerrainCells(RandomMap *this, int a2, int a3)
{
  int result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // ecx
  int v7; // edi
  int i; // esi
  int v9; // ecx
  VectorClass *v10; // eax
  VectorClass *v11; // esi
  VectorClass *v12; // ebx
  int v13; // edi
  int v14; // edx
  char v15; // al
  __int16 v16; // cx
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  int Capacity; // ecx
  int v21; // eax
  void *vtable0; // eax
  _DWORD *Items; // edx
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
    v6 = g_MapCellWidth * g_MapCellWidth; /*0x58d1e3*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58d1e8*/
    {
      result = 0; /*0x58d1ea*/
      do /*0x58d1fe*/
      {
        result += 80; /*0x58d1f2*/
        --v6; /*0x58d1f5*/
        *(_DWORD *)(result + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58d1f6*/
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
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d228*/
        {
          result = 80 * ((__int16)v9 + g_MapCellWidth * SHIWORD(v9)); /*0x58d242*/
          *(_DWORD *)(result + g_MissionQueueFrame.localVariables[163] + 56) = a3; /*0x58d245*/
        }
      }
      if ( v7 < v4 - 1 ) /*0x58d251*/
      {
        v10 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x58d259*/
        v11 = v10; /*0x58d25e*/
        v12 = 0; /*0x58d260*/
        if ( v10 ) /*0x58d267*/
        {
          VectorClass::CellConstructor(v10, 0, 0); /*0x58d26d*/
          v11[1].vtable0 = 0; /*0x58d272*/
          v11->vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58d275*/
          v11[1].Items = (void *)10; /*0x58d27b*/
          v12 = v11; /*0x58d282*/
        }
        v12[1].Items = *(void **)(v5 + 16); /*0x58d287*/
        result = *(_DWORD *)(v5 + 16) - 1; /*0x58d28d*/
        v30 = result; /*0x58d28e*/
        if ( result >= 0 ) /*0x58d292*/
        {
          v13 = g_MissionQueueFrame.localVariables[160]; /*0x58d298*/
          do /*0x58d39d*/
          {
            v14 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * result); /*0x58d2a1*/
            v15 = 0; /*0x58d2a4*/
            v27 = v14; /*0x58d2a6*/
            for ( j = 0; j < 8; ++j ) /*0x58d2aa*/
            {
              v16 = HIWORD(v27) + HIWORD(g_DDrawSurfaceManager.scenario[(v15 & 7) + 82]); /*0x58d2c4*/
              LOWORD(v28) = LOWORD(g_DDrawSurfaceManager.scenario[(v15 & 7) + 82]) + v27; /*0x58d2c9*/
              v17 = v16; /*0x58d2d1*/
              HIWORD(v28) = v16; /*0x58d2d4*/
              v18 = v16 + (__int16)v28; /*0x58d2d9*/
              if ( v18 > v13 /*0x58d302*/
                && (__int16)v28 - v17 < v13
                && v17 - (__int16)v28 < v13
                && v18 <= g_MissionQueueFrame.localVariables[161] )
              {
                v19 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v28 + g_MapCellWidth * v17); /*0x58d31f*/
                if ( *(void **)(v19 + 56) == this->RandomMap_field_0x8 ) /*0x58d326*/
                {
                  if ( *(_DWORD *)(v19 + 60) != v26 + 1 ) /*0x58d334*/
                  {
                    Capacity = v12->Capacity; /*0x58d336*/
                    if ( (int)v12[1].vtable0 < Capacity /*0x58d35b*/
                      || (v12->IsAllocated || !Capacity)
                      && (v21 = (int)v12[1].Items, v21 > 0)
                      && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v12->vtable0 + 2))(
                           v12,
                           Capacity + v21,
                           0) )
                    {
                      vtable0 = v12[1].vtable0; /*0x58d362*/
                      Items = v12->Items; /*0x58d365*/
                      v12[1].vtable0 = (char *)vtable0 + 1; /*0x58d36b*/
                      Items[(_DWORD)vtable0] = v28; /*0x58d372*/
                    }
                    *(_DWORD *)(v19 + 60) = v26 + 1; /*0x58d375*/
                    v13 = g_MissionQueueFrame.localVariables[160]; /*0x58d378*/
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
    v24 = g_MapCellWidth * g_MapCellWidth; /*0x58d3e7*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58d3ec*/
    {
      result = 0; /*0x58d3ee*/
      do /*0x58d402*/
      {
        result += 80; /*0x58d3f6*/
        --v24; /*0x58d3f9*/
        *(_DWORD *)(result + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58d3fa*/
      }
      while ( v24 ); /*0x58d402*/
    }
  }
  return result; /*0x58d3da*/
}



// ==== 0x0058D410  RandomMap::TerrainAlloc  this=DynamicVector  sig=csp ====
_DWORD *__thiscall RandomMap::TerrainAlloc(RandomMap *this)
{
  VectorClass *v1; // eax
  VectorClass *v2; // esi
  VectorClass *v3; // ebx
  int v4; // ebp
  int v5; // ecx
  int v6; // eax
  signed int i; // edi
  int v8; // edx
  void *v9; // eax
  int Capacity; // eax
  int v11; // ebp
  int v12; // ecx
  void *vtable0; // eax
  _DWORD *Items; // edx
  char v16; // [esp+Fh] [ebp-Dh]
  VectorClass *v17; // [esp+10h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-4h]

  v1 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x58d41c*/
  v2 = v1; /*0x58d421*/
  if ( v1 ) /*0x58d428*/
  {
    VectorClass::CellConstructor(v1, 0, 0); /*0x58d430*/
    v2->vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58d435*/
    v2[1].Items = (void *)10; /*0x58d43b*/
    v2[1].vtable0 = 0; /*0x58d442*/
    v3 = v2; /*0x58d449*/
  }
  else
  {
    v3 = 0; /*0x58d44d*/
  }
  v17 = v3; /*0x58d454*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58d458*/
  v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58d467*/
  if ( !v4 ) /*0x58d46b*/
    return &v3->vtable0; /*0x58d592*/
  do
  {
    v5 = *(_DWORD *)(v4 + 36); /*0x58d478*/
    if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d481*/
      v6 = *(_DWORD *)(80 * ((__int16)v5 + g_MapCellWidth * SHIWORD(v5)) + g_MissionQueueFrame.localVariables[163] + 56); /*0x58d49f*/
    else
      v6 = -1; /*0x58d483*/
    if ( (void *)v6 == this->RandomMap_field_0x8 )
    {
      v16 = 0; /*0x58d4b0*/
      for ( i = 0; i < 8; ++i )
      {
        v19 = *((_DWORD *)Cell::GetNeighbourContent((Cell *)v4, i) + 9); /*0x58d4c8*/
        v8 = SHIWORD(v19) + (__int16)v19; /*0x58d4d4*/
        if ( v8 > g_MissionQueueFrame.localVariables[160] )
        {
          if ( (__int16)v19 - SHIWORD(v19) < g_MissionQueueFrame.localVariables[160]
            && SHIWORD(v19) - (__int16)v19 < g_MissionQueueFrame.localVariables[160]
            && v8 <= g_MissionQueueFrame.localVariables[161] )
          {
            v9 = g_MissionQueueFrame.localVariables[163]
               ? *(void **)(80 * ((__int16)v19 + g_MapCellWidth * SHIWORD(v19))
                          + g_MissionQueueFrame.localVariables[163]
                          + 56)
               : (void *)-1;
            if ( v9 != this->RandomMap_field_0x8 ) /*0x58d51c*/
              v16 = 1; /*0x58d51e*/
          }
          v3 = v17; /*0x58d523*/
        }
      }
      if ( v16 ) /*0x58d533*/
      {
        Capacity = v3->Capacity; /*0x58d535*/
        v11 = *(_DWORD *)(v4 + 36); /*0x58d53b*/
        if ( (int)v3[1].vtable0 < Capacity /*0x58d55d*/
          || (v3->IsAllocated || !Capacity)
          && (v12 = (int)v3[1].Items, v12 > 0)
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v3->vtable0 + 2))(v3, Capacity + v12, 0) )
        {
          vtable0 = v3[1].vtable0; /*0x58d564*/
          Items = v3->Items; /*0x58d567*/
          v3[1].vtable0 = (char *)vtable0 + 1; /*0x58d56d*/
          Items[(_DWORD)vtable0] = v11; /*0x58d570*/
        }
      }
    }
    v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58d57d*/
  }
  while ( v4 );
  return &v3->vtable0; /*0x58d588*/
}



// ==== 0x0058D620  TileSystem::BuildNodes  this=TileSystem  sig=csp ====
char __thiscall TileSystem::BuildNodes(TileSystem *this)
{
  double v1; // st7
  char v3; // al
  int v5; // esi
  void *v6; // eax
  Heap *v7; // eax
  Heap *v8; // esi
  int TileSystem_field_0x0C; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int i; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int j; // ecx
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // eax
  int v25; // ecx
  _DWORD *v26; // edi
  unsigned int v27; // ecx
  unsigned int v28; // edx
  Heap v29; // ebx
  unsigned int v32; // eax
  CellStruct *v33; // edi
  Heap v34; // eax
  CellStruct *v35; // ecx
  float *v36; // ebp
  int v37; // edx
  int v38; // eax
  Cell *v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // edx
  _DWORD *v42; // edx
  int v43; // eax
  int v45; // eax
  float *v46; // edi
  int v47; // edx
  int v48; // eax
  unsigned int v49; // ecx
  unsigned int v50; // edx
  Heap v51; // ebx
  Heap v53; // eax
  bool v54; // cc
  Heap v55; // ecx
  bool v56; // zf
  Heap v57; // eax
  CellStruct *v58; // edi
  int v59; // ecx
  int v60; // eax
  _DWORD *v61; // edi
  Heap v62; // eax
  Heap v63; // eax
  int TileSystem_field_0x08; // ebx
  int v65; // edx
  int v66; // ecx
  int v67; // ebp
  int v68; // esi
  RandomMap *v69; // eax
  _DWORD *v70; // ebx
  int v71; // ecx
  int v72; // eax
  _DWORD *v73; // edi
  int v74; // eax
  int v75; // eax
  int v76; // edx
  int v77; // eax
  int v78; // eax
  int m_10; // edx
  int k; // eax
  int v81; // ecx
  int v82; // eax
  char v83; // al
  int v84; // ebx
  int v85; // edx
  int v86; // esi
  int v87; // ecx
  int v88; // eax
  int v89; // eax
  int v90; // edx
  _DWORD *v91; // eax
  int v92; // eax
  CellStruct *v93; // eax
  int v94; // eax
  _DWORD *v95; // ebx
  void *v96; // ecx
  int v97; // eax
  int v98; // eax
  int v99; // edi
  int v100; // edx
  int v101; // eax
  int v102; // ebx
  int v103; // edx
  int v104; // esi
  int v105; // edi
  int v106; // eax
  int v107; // ecx
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // esi
  int v112; // eax
  int m_8; // eax
  int v114; // eax
  int v115; // eax
  int v116; // esi
  int v117; // eax
  int v118; // eax
  int v119; // esi
  int v120; // edx
  int v121; // ecx
  int v122; // eax
  int v123; // edi
  unsigned int v124; // esi
  unsigned int v125; // eax
  int v126; // eax
  char v127; // bl
  int v128; // esi
  _DWORD *v129; // edi
  _DWORD *v130; // ebp
  int v131; // eax
  char v132; // bl
  int jj; // esi
  int kk; // ebx
  int v135; // eax
  int v136; // ecx
  int v137; // edi
  int v138; // ecx
  int v139; // eax
  int v140; // edx
  int v141; // edi
  int v142; // ecx
  TileNode *v143; // eax
  void *v144; // esi
  void *TileSystem_field_0x04; // eax
  char v146; // [esp+34h] [ebp-A0h]
  int m; // [esp+34h] [ebp-A0h]
  int ii; // [esp+34h] [ebp-A0h]
  int v149; // [esp+34h] [ebp-A0h]
  _DynamicVectorClass_H v150; // [esp+38h] [ebp-9Ch] BYREF
  int v151; // [esp+4Ch] [ebp-88h]
  CellStruct *v152; // [esp+50h] [ebp-84h]
  double v153; // [esp+54h] [ebp-80h]
  void *Block; // [esp+60h] [ebp-74h]
  void *n; // [esp+64h] [ebp-70h]
  int v156; // [esp+68h] [ebp-6Ch]
  TileSystem v157; // [esp+6Ch] [ebp-68h] BYREF
  double v158; // [esp+7Ch] [ebp-58h] BYREF
  __int16 v159[2]; // [esp+84h] [ebp-50h] BYREF
  int v160; // [esp+88h] [ebp-4Ch] BYREF
  double v161; // [esp+8Ch] [ebp-48h] BYREF
  __int64 v162; // [esp+98h] [ebp-3Ch]
  TileSystem v163; // [esp+A0h] [ebp-34h] BYREF
  int v164; // [esp+B0h] [ebp-24h]
  int v165; // [esp+B4h] [ebp-20h]
  int v166; // [esp+B8h] [ebp-1Ch]
  VectorClass v167; // [esp+BCh] [ebp-18h] BYREF
  int v168; // [esp+CCh] [ebp-8h]
  int v169; // [esp+D0h] [ebp-4h]

  v3 = *((_BYTE *)this + 26); /*0x58d631*/
  v157.TileSystem_field_0x08 = (int)this; /*0x58d637*/
  if ( v3 ) /*0x58d63d*/
    return 0; /*0x58d648*/
  v5 = 2 * this->TileSystem_field_0x0C + 10; /*0x58d64c*/
  v6 = (void *)__2_YAPAXI_Z(8 * v5); /*0x58d658*/
  if ( v6 ) /*0x58d662*/
  {
    Block = v6; /*0x58d665*/
    LODWORD(v158) = v5 - 1; /*0x58d669*/
  }
  else
  {
    Block = 0; /*0x58d66f*/
  }
  v7 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x58d675*/
  v8 = v7; /*0x58d67a*/
  if ( v7 ) /*0x58d684*/
  {
    TileSystem_field_0x0C = this->TileSystem_field_0x0C; /*0x58d686*/
    v7[3] = 0; /*0x58d689*/
    v7[4] = (Heap)-1; /*0x58d68c*/
    *v7 = 0; /*0x58d68f*/
    v10 = 2 * TileSystem_field_0x0C + 10; /*0x58d691*/
    v8[1] = (Heap)v10; /*0x58d695*/
    v11 = __2_YAPAXI_Z(4 * v10 + 4); /*0x58d6a0*/
    v12 = (int)v8[1]; /*0x58d6a5*/
    v8[2] = (Heap)v11; /*0x58d6a8*/
    v13 = 0; /*0x58d6ae*/
    if ( v12 >= 0 ) /*0x58d6b2*/
    {
      do /*0x58d6c1*/
      {
        ++v13; /*0x58d6b7*/
        *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * v13 - 4) = 0; /*0x58d6b8*/
      }
      while ( v13 <= *(_DWORD *)&v8[1] ); /*0x58d6c1*/
    }
  }
  else
  {
    v8 = 0; /*0x58d6c5*/
  }
  for ( i = 0; i <= *(_DWORD *)v8; *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * i - 4) = 0 ) /*0x58d6cd*/
    ++i; /*0x58d6d2*/
  *v8 = 0; /*0x58d6dd*/
  v15 = g_MapCellWidth * g_MapCellWidth; /*0x58d6e4*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58d6e9*/
  {
    v16 = 0; /*0x58d6eb*/
    do /*0x58d6fb*/
    {
      v16 += 80; /*0x58d6f3*/
      --v15; /*0x58d6f6*/
      *(_DWORD *)(v16 + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58d6f7*/
    }
    while ( v15 ); /*0x58d6fb*/
  }
  v17 = *((_DWORD *)this + 14); /*0x58d6fd*/
  n = 0; /*0x58d700*/
  for ( j = v17 - 1; j >= 0; *(_DWORD *)(v19 + g_MissionQueueFrame.localVariables[163] + 56) = -2 ) /*0x58d705*/
  {
    v19 = 80 /*0x58d72b*/
        * (*(__int16 *)(*(_DWORD *)(v157.TileSystem_field_0x08 + 44) + 4 * j)
         + g_MapCellWidth * *(__int16 *)(*(_DWORD *)(v157.TileSystem_field_0x08 + 44) + 4 * j + 2));
    --j; /*0x58d72e*/
  }
  v20 = *(_DWORD *)(v157.TileSystem_field_0x08 + 12) / 3; /*0x58d750*/
  v21 = *(_DWORD *)(v157.TileSystem_field_0x08 + 12) / 8; /*0x58d75a*/
  *(_QWORD *)&v153 = v20 - v21 + 1; /*0x58d762*/
  __asm { fild [esp+0B0h+var_80] } /*0x58d76a*/
  LODWORD(v153) = v21; /*0x58d76e*/
  __asm /*0x58d776*/
  {
    fstp [esp+0B0h+var_48]
    fild [esp+0B0h+var_80]
    fstp [esp+0B0h+var_58]
  }
  do /*0x58d7b4*/
  {
    *(_QWORD *)&v153 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58d78c*/
    __asm /*0x58d794*/
    {
      fild [esp+0B0h+var_80]
      fmul [esp+0B0h+var_48]
      fmul ds:dbl_7ED898
      fadd [esp+0B0h+var_58]
    }
    LOWORD(v22) = Math::RoundToInt(v1); /*0x58d7a6*/
    v166 = v22; /*0x58d7ad*/
  }
  while ( v22 > v20 ); /*0x58d7b4*/
  v23 = *(_DWORD *)(v157.TileSystem_field_0x08 + 56) - 1; /*0x58d7bd*/
  *(_QWORD *)&v153 = *(unsigned int *)(v157.TileSystem_field_0x08 + 56); /*0x58d7c1*/
  __asm /*0x58d7c5*/
  {
    fild [esp+0B0h+var_80]
    fstp [esp+0B0h+var_48]
  }
  do /*0x58d7f4*/
  {
    *(_QWORD *)&v153 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58d7d7*/
    __asm /*0x58d7df*/
    {
      fild [esp+0B0h+var_80]
      fmul [esp+0B0h+var_48]
      fmul ds:dbl_7ED898
    }
    LOWORD(v24) = Math::RoundToInt(v1); /*0x58d7ed*/
  }
  while ( v24 > v23 ); /*0x58d7f4*/
  v25 = *(_DWORD *)(v157.TileSystem_field_0x08 + 44); /*0x58d7f6*/
  v26 = Block; /*0x58d7f9*/
  v157.TileSystem_field_0x0C = 1; /*0x58d7fd*/
  v160 = *(_DWORD *)(v25 + 4 * v24); /*0x58d808*/
  *(_DWORD *)Block = v160; /*0x58d80c*/
  v26[1] = 0; /*0x58d80e*/
  *(_DWORD *)(80 * ((__int16)v160 + g_MapCellWidth * SHIWORD(v160)) + g_MissionQueueFrame.localVariables[163] + 60) = -3; /*0x58d830*/
  v27 = *(_DWORD *)v8 + 1; /*0x58d83d*/
  v156 = v26[1]; /*0x58d840*/
  v28 = v27 >> 1; /*0x58d847*/
  if ( v27 < *(_DWORD *)&v8[1] ) /*0x58d84b*/
  {
    for ( ; v27 > 1; v28 >>= 1 ) /*0x58d850*/
    {
      v29 = v8[2]; /*0x58d852*/
      _EBP = *(_DWORD *)(*(_DWORD *)&v29 + 4 * v28); /*0x58d855*/
      __asm /*0x58d858*/
      {
        fld dword ptr [ebp+4]
        fcomp [esp+0B0h+var_6C]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x58d864*/
        break; /*0x58d864*/
      *(_DWORD *)(*(_DWORD *)&v29 + 4 * v27) = _EBP; /*0x58d866*/
      v27 = v28; /*0x58d869*/
    }
    *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * v27) = v26; /*0x58d877*/
    v32 = (unsigned int)v8[3]; /*0x58d87c*/
    ++*(_DWORD *)v8; /*0x58d882*/
    if ( (unsigned int)v26 > v32 ) /*0x58d884*/
      v8[3] = (Heap)v26; /*0x58d886*/
    if ( (unsigned int)v26 < *(_DWORD *)&v8[4] ) /*0x58d88c*/
      v8[4] = (Heap)v26; /*0x58d88e*/
  }
  if ( *v8 ) /*0x58d891*/
  {
    v34 = v8[2]; /*0x58d89b*/
    v33 = *(CellStruct **)(*(_DWORD *)&v34 + 4); /*0x58d8a3*/
    *(_DWORD *)(*(_DWORD *)&v34 + 4) = *(_DWORD *)(*(_DWORD *)&v34 + 4 * *(_DWORD *)v8); /*0x58d8a6*/
    *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * (*(_DWORD *)v8)--) = 0; /*0x58d8ae*/
    Heap::SiftDown(v8, 1); /*0x58d8b8*/
  }
  else
  {
    v33 = 0; /*0x58d897*/
  }
  v152 = v33; /*0x58d8c2*/
  *(_QWORD *)&v153 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58d8cb*/
  __asm { fild [esp+0B0h+var_80] } /*0x58d8d3*/
  __asm
  {
    fmul ds:dbl_7ED8A8
    fstp [esp+0B0h+var_80]
  }
  if ( v33 ) /*0x58d8e3*/
  {
    do /*0x58db35*/
    {
      if ( (int)n >= v166 ) /*0x58d8f6*/
        break; /*0x58d8f6*/
      v35 = v152; /*0x58d902*/
      if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d908*/
        *(_DWORD *)(80 * (SLOWORD(v152->field_0) + g_MapCellWidth * SHIWORD(v152->field_0)) /*0x58d920*/
                  + g_MissionQueueFrame.localVariables[163]
                  + 56) = -3;
      *(_DWORD *)v157.__pad_0 = SLOWORD(v35->field_0) + g_MapCellWidth * SHIWORD(v35->field_0); /*0x58d93c*/
      v146 = 0; /*0x58d944*/
      v156 = (int)dword_89A304; /*0x58d94c*/
      v36 = (float *)((char *)Block + 8 * v157.TileSystem_field_0x0C); /*0x58d954*/
      while ( 1 ) /*0x58d97e*/
      {
        LODWORD(v162) = *CellStruct::Add(v35, &v161, (_WORD *)(4 * (v146 & 7) + 9041544)); /*0x58d97e*/
        *(_DWORD *)v159 = v162; /*0x58d982*/
        v37 = SWORD1(v162) + (__int16)v162; /*0x58d98e*/
        if ( v37 > g_MissionQueueFrame.localVariables[160] /*0x58d9b7*/
          && (__int16)v162 - SWORD1(v162) < g_MissionQueueFrame.localVariables[160]
          && SWORD1(v162) - (__int16)v162 < g_MissionQueueFrame.localVariables[160]
          && v37 <= g_MissionQueueFrame.localVariables[161] )
        {
          if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d9c5*/
          {
            v38 = 80 * ((__int16)v162 + g_MapCellWidth * SWORD1(v162)) + g_MissionQueueFrame.localVariables[163]; /*0x58d9da*/
            if ( *(_DWORD *)(v38 + 56) == -2 && *(_DWORD *)(v38 + 60) != -3 ) /*0x58d9ee*/
            {
              v39 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v159); /*0x58d9fe*/
              if ( (unsigned __int8)Cell::IsEmpty(v39) ) /*0x58da05*/
              {
                v40 = HIDWORD(v153); /*0x58da16*/
                v41 = LODWORD(v153); /*0x58da1a*/
                *v36 = *(float *)v159; /*0x58da1e*/
                v1 = Memory_Helper_58C6F0((__int16 *)&v160, v159, COERCE_DOUBLE(__PAIR64__(v40, v41))); /*0x58da31*/
                v42 = (_DWORD *)v156; /*0x58da36*/
                v43 = *(_DWORD *)v157.__pad_0; /*0x58da3a*/
                __asm { fstp dword ptr [ebp+4] } /*0x58da3e*/
                v36[1] = _ET1; /*0x58da3e*/
                v45 = *v42 + v43; /*0x58da49*/
                v46 = v36; /*0x58da4f*/
                v36 += 2; /*0x58da51*/
                v47 = v157.TileSystem_field_0x0C + 1; /*0x58da5a*/
                *(_DWORD *)(80 * v45 + g_MissionQueueFrame.localVariables[163] + 60) = -3; /*0x58da5b*/
                v48 = *((_DWORD *)v46 + 1); /*0x58da65*/
                v49 = *(_DWORD *)v8 + 1; /*0x58da68*/
                v157.TileSystem_field_0x0C = v47; /*0x58da69*/
                LODWORD(v158) = v48; /*0x58da6f*/
                v50 = v49 >> 1; /*0x58da76*/
                if ( v49 < *(_DWORD *)&v8[1] ) /*0x58da7a*/
                {
                  for ( ; v49 > 1; v50 >>= 1 ) /*0x58da7f*/
                  {
                    v51 = v8[2]; /*0x58da81*/
                    _EAX = *(_DWORD *)(*(_DWORD *)&v51 + 4 * v50); /*0x58da84*/
                    __asm /*0x58da87*/
                    {
                      fld dword ptr [eax+4]
                      fcomp dword ptr [esp+0B0h+var_58]
                      fnstsw ax
                    }
                    if ( (_EAX & 0x4100) != 0 ) /*0x58da93*/
                      break; /*0x58da93*/
                    *(_DWORD *)(*(_DWORD *)&v51 + 4 * v49) = *(_DWORD *)(*(_DWORD *)&v51 + 4 * v50); /*0x58da98*/
                    v49 = v50; /*0x58da9b*/
                  }
                  *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * v49) = v46; /*0x58daa7*/
                  v53 = v8[3]; /*0x58daac*/
                  ++*(_DWORD *)v8; /*0x58dab2*/
                  if ( (unsigned int)v46 > *(_DWORD *)&v53 ) /*0x58dab4*/
                    v8[3] = (Heap)v46; /*0x58dab6*/
                  if ( (unsigned int)v46 < *(_DWORD *)&v8[4] ) /*0x58dabc*/
                    v8[4] = (Heap)v46; /*0x58dabe*/
                }
              }
            }
          }
        }
        v54 = v156 + 8 < (int)&unk_89A324; /*0x58dacf*/
        v146 += 2; /*0x58dad4*/
        v156 += 8; /*0x58dad8*/
        if ( !v54 ) /*0x58dadc*/
          break; /*0x58dadc*/
        v35 = v152; /*0x58d959*/
      }
      n = (char *)n + 1; /*0x58dae7*/
      Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x58daf0*/
      __asm { fmul ds:dbl_7ED8A0 } /*0x58daf5*/
      v55 = *v8; /*0x58dafb*/
      v56 = *v8 == 0; /*0x58dafd*/
      __asm /*0x58daff*/
      {
        fadd [esp+0B0h+var_80]
        fstp [esp+0B0h+var_80]
      }
      if ( v56 ) /*0x58db07*/
        break; /*0x58db07*/
      v57 = v8[2]; /*0x58db09*/
      v58 = *(CellStruct **)(*(_DWORD *)&v57 + 4); /*0x58db11*/
      *(_DWORD *)(*(_DWORD *)&v57 + 4) = *(_DWORD *)(*(_DWORD *)&v57 + 4 * *(_DWORD *)&v55); /*0x58db14*/
      *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * (*(_DWORD *)v8)--) = 0; /*0x58db1e*/
      Heap::SiftDown(v8, 1); /*0x58db2a*/
      v152 = v58; /*0x58db31*/
    }
    while ( v58 ); /*0x58db35*/
  }
  v59 = g_MapCellWidth * g_MapCellWidth; /*0x58db41*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58db46*/
  {
    v60 = 0; /*0x58db48*/
    do /*0x58db5b*/
    {
      v60 += 80; /*0x58db53*/
      --v59; /*0x58db56*/
      *(_DWORD *)(v60 + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58db57*/
    }
    while ( v59 ); /*0x58db5b*/
  }
  if ( *v8 ) /*0x58db5d*/
  {
    v62 = v8[2]; /*0x58db67*/
    v61 = *(_DWORD **)(*(_DWORD *)&v62 + 4); /*0x58db6f*/
    *(_DWORD *)(*(_DWORD *)&v62 + 4) = *(_DWORD *)(*(_DWORD *)&v62 + 4 * *(_DWORD *)v8); /*0x58db72*/
    *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * (*(_DWORD *)v8)--) = 0; /*0x58db7a*/
    Heap::SiftDown(v8, 1); /*0x58db88*/
  }
  else
  {
    v61 = 0; /*0x58db63*/
  }
  VectorClass::CellConstructor(&v167, 0, 0); /*0x58db98*/
  v167.vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58dba2*/
  v169 = 10; /*0x58dbaf*/
  v168 = 0; /*0x58dbb6*/
  while ( v61 ) /*0x58dbc1*/
  {
    LODWORD(v158) = *v61; /*0x58dbca*/
    *(_DWORD *)(80 * (SLOWORD(v158) + g_MapCellWidth * SWORD1(v158)) + g_MissionQueueFrame.localVariables[163] + 56) = -3; /*0x58dbea*/
    if ( !*(_DWORD *)v8 ) /*0x58dbee*/
      break; /*0x58dbf2*/
    v63 = v8[2]; /*0x58dbf4*/
    v61 = *(_DWORD **)(*(_DWORD *)&v63 + 4); /*0x58dbfc*/
    *(_DWORD *)(*(_DWORD *)&v63 + 4) = *(_DWORD *)(*(_DWORD *)&v63 + 4 * *(_DWORD *)v8); /*0x58dbff*/
    *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * (*(_DWORD *)v8)--) = 0; /*0x58dc09*/
    Heap::SiftDown(v8, 1); /*0x58dc15*/
  }
  __3_YAXPAX_Z(Block); /*0x58dc23*/
  if ( v8 ) /*0x58dc2d*/
  {
    __3_YAXPAX_Z(*(void **)&v8[2]); /*0x58dc33*/
    __3_YAXPAX_Z(v8); /*0x58dc39*/
  }
  TileSystem::Constructor(&v163, 0, 0); /*0x58dc4c*/
  TileSystem_field_0x08 = v157.TileSystem_field_0x08; /*0x58dc51*/
  *(_DWORD *)v163.__pad_0 = &off_7ED858; /*0x58dc55*/
  v165 = 10; /*0x58dc5d*/
  v164 = 0; /*0x58dc64*/
  v65 = *(_DWORD *)(v157.TileSystem_field_0x08 + 56) - 1; /*0x58dc72*/
  v152 = (CellStruct *)v65; /*0x58dc73*/
  if ( v65 >= 0 ) /*0x58dc77*/
  {
    v66 = g_MissionQueueFrame.localVariables[163]; /*0x58dc7d*/
    do /*0x58df7f*/
    {
      v67 = *(_DWORD *)(*(_DWORD *)(TileSystem_field_0x08 + 44) + 4 * v65); /*0x58dc86*/
      LODWORD(v158) = v67; /*0x58dc89*/
      v68 = 80 * ((__int16)v67 + g_MapCellWidth * SHIWORD(v67)); /*0x58dca1*/
      if ( *(int *)(v68 + v66 + 56) < -1 ) /*0x58dcab*/
      {
        LODWORD(v162) = *(_DWORD *)(v68 + v66 + 56); /*0x58dcb5*/
        v69 = (RandomMap *)__2_YAPAXI_Z(0x50u); /*0x58dcb9*/
        if ( v69 ) /*0x58dcc3*/
          v70 = RandomMap::TerrainTileDataConstructor(v69, v67); /*0x58dccd*/
        else
          v70 = 0; /*0x58dcd1*/
        v71 = v70[12]; /*0x58dcd3*/
        v72 = v70[14]; /*0x58dcd6*/
        v73 = v70 + 10; /*0x58dcd9*/
        n = v70; /*0x58dcde*/
        if ( v72 < v71 /*0x58dcff*/
          || (*((_BYTE *)v70 + 53) || !v71)
          && (v74 = v70[15], v74 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v73 + 8))(v70 + 10, v71 + v74, 0) )
        {
          v75 = v70[14]; /*0x58dd06*/
          v76 = v70[11]; /*0x58dd09*/
          v70[14] = v75 + 1; /*0x58dd0f*/
          *(_DWORD *)(v76 + 4 * v75) = v67; /*0x58dd12*/
        }
        ++v70[3]; /*0x58dd19*/
        if ( v164 < v163.TileSystem_field_0x08 /*0x58dd59*/
          || (BYTE1(v163.TileSystem_field_0x0C) || !v163.TileSystem_field_0x08)
          && v165 > 0
          && (*(unsigned __int8 (__thiscall **)(TileSystem *, int, _DWORD))(*(_DWORD *)v163.__pad_0 + 8))(
               &v163,
               v165 + v163.TileSystem_field_0x08,
               0) )
        {
          v77 = v164++; /*0x58dd67*/
          *(_DWORD *)(v163.TileSystem_field_0x04 + 4 * v77) = v70; /*0x58dd78*/
        }
        *(_DWORD *)(v68 + g_MissionQueueFrame.localVariables[163] + 56) = v70[2]; /*0x58dd8b*/
        VectorClass::CellConstructor((VectorClass *)&v150, 0, 0); /*0x58dd8f*/
        *(_DWORD *)v150.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58dd98*/
        v150.m_10 = 0; /*0x58dda2*/
        v151 = 100000; /*0x58ddaa*/
        if ( v150.m_8 > 0 || (BYTE1(v150.m_C) || !v150.m_8) && VectorClass::ResizeEx(&v150, v150.m_8 + 100000, 0) ) /*0x58ddcc*/
        {
          v78 = v150.m_10++; /*0x58ddda*/
          *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v78) = v67; /*0x58dde5*/
        }
        m_10 = v150.m_10; /*0x58dde8*/
        for ( k = v150.m_10; v150.m_10; k = v150.m_10 ) /*0x58ddf0*/
        {
          v81 = *(_DWORD *)&v150.m_1[3]; /*0x58ddf6*/
          v82 = k - 1; /*0x58ddfa*/
          *(_DWORD *)v157.__pad_0 = *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v82); /*0x58de00*/
          if ( v82 < m_10 ) /*0x58de04*/
          {
            v150.m_10 = m_10 - 1; /*0x58de09*/
            if ( v82 < m_10 - 1 ) /*0x58de0d*/
            {
              while ( 1 ) /*0x58de19*/
              {
                *(_DWORD *)(v81 + 4 * v82) = *(_DWORD *)(v81 + 4 * v82 + 4); /*0x58de19*/
                if ( ++v82 >= v150.m_10 ) /*0x58de23*/
                  break; /*0x58de23*/
                v81 = *(_DWORD *)&v150.m_1[3]; /*0x58de11*/
              }
            }
          }
          v83 = 0; /*0x58de25*/
          for ( m = 0; m < 8; ++m ) /*0x58de27*/
          {
            v84 = *CellStruct::Add((CellStruct *)&v157, &v161, (_WORD *)(4 * (v83 & 7) + 9041544)); /*0x58de44*/
            LODWORD(v158) = v84; /*0x58de4c*/
            v85 = SHIWORD(v84) + (__int16)v84; /*0x58de58*/
            if ( v85 > g_MissionQueueFrame.localVariables[160] /*0x58de81*/
              && (__int16)v84 - SHIWORD(v84) < g_MissionQueueFrame.localVariables[160]
              && SHIWORD(v84) - (__int16)v84 < g_MissionQueueFrame.localVariables[160]
              && v85 <= g_MissionQueueFrame.localVariables[161] )
            {
              v86 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v84 + g_MapCellWidth * SHIWORD(v84)); /*0x58dea0*/
              if ( *(_DWORD *)(v86 + 56) == (_DWORD)v162 ) /*0x58dea5*/
              {
                v87 = v73[2]; /*0x58deab*/
                if ( v73[4] < v87 /*0x58ded0*/
                  || (*((_BYTE *)v73 + 13) || !v87)
                  && (v88 = v73[5], v88 > 0)
                  && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v73 + 8))(v73, v88 + v87, 0) )
                {
                  v89 = v73[4]; /*0x58ded7*/
                  v90 = v73[1]; /*0x58deda*/
                  v73[4] = v89 + 1; /*0x58dee0*/
                  *(_DWORD *)(v90 + 4 * v89) = v84; /*0x58dee3*/
                }
                v91 = n; /*0x58dee6*/
                ++*((_DWORD *)n + 3); /*0x58deee*/
                *(_DWORD *)(v86 + 56) = v91[2]; /*0x58def4*/
                if ( v150.m_10 < v150.m_8 /*0x58df22*/
                  || (BYTE1(v150.m_C) || !v150.m_8)
                  && v151 > 0
                  && (*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_H *, int, _DWORD))(*(_DWORD *)v150.__pad_0
                                                                                             + 8))(
                       &v150,
                       v151 + v150.m_8,
                       0) )
                {
                  v92 = v150.m_10++; /*0x58df2d*/
                  *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v92) = v84; /*0x58df38*/
                }
              }
            }
            v83 = m + 1; /*0x58df3f*/
          }
          m_10 = v150.m_10; /*0x58df4d*/
        }
        *(_DWORD *)v150.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x58df5f*/
        Buffer::Cleanup((_VectorClass_VCell *)&v150); /*0x58df67*/
        v66 = g_MissionQueueFrame.localVariables[163]; /*0x58df6c*/
        TileSystem_field_0x08 = v157.TileSystem_field_0x08; /*0x58df72*/
        v65 = (int)v152; /*0x58df76*/
      }
      v152 = (CellStruct *)--v65; /*0x58df7b*/
    }
    while ( v65 >= 0 ); /*0x58df7f*/
  }
  v93 = (CellStruct *)(v164 - 1); /*0x58df8c*/
  v152 = (CellStruct *)(v164 - 1); /*0x58df91*/
  if ( v164 - 1 >= 0 ) /*0x58df95*/
  {
    while ( 1 ) /*0x58dfa8*/
    {
      v94 = *(_DWORD *)(v163.TileSystem_field_0x04 + 4 * (_DWORD)v93); /*0x58dfa8*/
      Block = (void *)v94; /*0x58dfab*/
      if ( *(_BYTE *)(v94 + 36) ) /*0x58dfaf*/
        goto LABEL_226; /*0x58dfb4*/
      v95 = TileSystem::AnalyzeTileConnectivity((TileSystem *)v94); /*0x58dfc7*/
      v96 = (void *)__2_YAPAXI_Z(g_MissionQueueFrame.localVariables[164]); /*0x58dfd5*/
      v97 = 0; /*0x58dfda*/
      for ( n = v96; v97 < g_MissionQueueFrame.localVariables[164]; ++v97 ) /*0x58dfe2*/
        *((_BYTE *)v96 + v97) = 0; /*0x58dfe4*/
      v98 = v95[4] - 1; /*0x58dff6*/
      for ( ii = v98; ii >= 0; --ii ) /*0x58dffb*/
      {
        v99 = 0; /*0x58e004*/
        LODWORD(v158) = *(_DWORD *)(v95[1] + 4 * v98); /*0x58e009*/
        do /*0x58e08d*/
        {
          *(_DWORD *)v157.__pad_0 = *CellStruct::Add((CellStruct *)&v158, &v161, (_WORD *)(4 * (v99 & 7) + 9041544)); /*0x58e030*/
          v100 = *(__int16 *)&v157.__pad_0[2] + *(__int16 *)v157.__pad_0; /*0x58e03c*/
          if ( v100 > g_MissionQueueFrame.localVariables[160] /*0x58e059*/
            && *(__int16 *)v157.__pad_0 - *(__int16 *)&v157.__pad_0[2] < g_MissionQueueFrame.localVariables[160]
            && *(__int16 *)&v157.__pad_0[2] - *(__int16 *)v157.__pad_0 < g_MissionQueueFrame.localVariables[160]
            && v100 <= g_MissionQueueFrame.localVariables[161] )
          {
            v101 = *(_DWORD *)(80 * (*(__int16 *)v157.__pad_0 + g_MapCellWidth * *(__int16 *)&v157.__pad_0[2]) /*0x58e070*/
                             + g_MissionQueueFrame.localVariables[163]
                             + 56);
            if ( v101 >= 0 && v101 != *((_DWORD *)Block + 2) ) /*0x58e07f*/
              *((_BYTE *)n + v101) = 1; /*0x58e085*/
          }
          ++v99; /*0x58e089*/
        }
        while ( v99 < 8 ); /*0x58e08d*/
        v98 = ii - 1; /*0x58e097*/
      }
      if ( v95 ) /*0x58e0a4*/
        (*(void (__thiscall **)(_DWORD *, int))*v95)(v95, 1); /*0x58e0ac*/
      v102 = -1; /*0x58e0b3*/
      v103 = 0; /*0x58e0b6*/
      v149 = 0; /*0x58e0b8*/
      v157.TileSystem_field_0x0C = -1; /*0x58e0c2*/
      v156 = -1; /*0x58e0c6*/
      v104 = -1; /*0x58e0ca*/
      v105 = -1; /*0x58e0cc*/
      if ( g_MissionQueueFrame.localVariables[164] > 0 ) /*0x58e0ce*/
      {
        do /*0x58e157*/
        {
          if ( *((_BYTE *)n + v103) ) /*0x58e0de*/
          {
            v106 = 0; /*0x58e0e4*/
            if ( g_MissionQueueFrame.briefing[342] <= 0 ) /*0x58e0e8*/
            {
LABEL_145:
              v108 = 0; /*0x58e0ff*/
            }
            else
            {
              v107 = g_MissionQueueFrame.briefing[339]; /*0x58e0ea*/
              while ( *(_DWORD *)(*(_DWORD *)v107 + 8) != v103 ) /*0x58e0f5*/
              {
                ++v106; /*0x58e0f7*/
                v107 += 4; /*0x58e0f8*/
                if ( v106 >= g_MissionQueueFrame.briefing[342] ) /*0x58e0fd*/
                  goto LABEL_145; /*0x58e0fd*/
              }
              v108 = *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v106); /*0x58e13b*/
            }
            if ( !*(_BYTE *)(v108 + 36) ) /*0x58e101*/
            {
              if ( *(_DWORD *)(v108 + 12) > v156 && !*(_BYTE *)(v108 + 20) ) /*0x58e113*/
              {
                v156 = *(_DWORD *)(v108 + 12); /*0x58e11a*/
                v149 = v108; /*0x58e121*/
                v157.TileSystem_field_0x0C = *(_DWORD *)(v108 + 16); /*0x58e125*/
              }
              if ( v104 == -1 ) /*0x58e12c*/
              {
                v104 = *(_DWORD *)(v108 + 16); /*0x58e12e*/
                v105 = v104; /*0x58e131*/
              }
              else
              {
                v109 = *(_DWORD *)(v108 + 16); /*0x58e140*/
                if ( v109 > v105 ) /*0x58e145*/
                  v105 = v109; /*0x58e147*/
                if ( v109 < v104 ) /*0x58e14b*/
                  v104 = v109; /*0x58e14d*/
              }
            }
          }
          ++v103; /*0x58e154*/
        }
        while ( v103 < g_MissionQueueFrame.localVariables[164] ); /*0x58e157*/
        v102 = v157.TileSystem_field_0x0C; /*0x58e159*/
      }
      VectorClass::Construct((VectorClass *)&v150, 0, 0); /*0x58e165*/
      *(_DWORD *)v150.__pad_0 = &DynamicVectorClass<int>::`vftable'; /*0x58e16c*/
      v110 = v105 - v104; /*0x58e174*/
      v151 = 10; /*0x58e176*/
      v150.m_10 = 0; /*0x58e17e*/
      if ( v105 != v104 ) /*0x58e186*/
      {
        if ( v110 != 4 ) /*0x58e18f*/
        {
          if ( v110 == 8 ) /*0x58e194*/
          {
            v111 = (v105 + v104) / 2; /*0x58e1a6*/
            if ( v150.m_8 > 0 || (BYTE1(v150.m_C) || !v150.m_8) && VectorClass::Resize(&v150, v150.m_8 + 10, 0) ) /*0x58e1c6*/
            {
              v112 = v150.m_10++; /*0x58e1dc*/
              *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v112) = v111; /*0x58e1e3*/
            }
          }
          goto LABEL_193; /*0x58e1e6*/
        }
        m_8 = v150.m_8; /*0x58e1eb*/
        if ( v150.m_8 <= 0 ) /*0x58e1f1*/
        {
          if ( BYTE1(v150.m_C) || !v150.m_8 ) /*0x58e1fd*/
          {
            if ( VectorClass::Resize(&v150, v150.m_8 + 10, 0) ) /*0x58e209*/
              goto LABEL_171; /*0x58e211*/
LABEL_172:
            m_8 = v150.m_8; /*0x58e225*/
          }
          if ( v150.m_10 >= m_8 /*0x58e25c*/
            && (!BYTE1(v150.m_C) && m_8
             || v151 <= 0
             || !(*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_H *, int, _DWORD))(*(_DWORD *)v150.__pad_0 + 8))(
                   &v150,
                   v151 + m_8,
                   0)) )
          {
            goto LABEL_193; /*0x58e261*/
          }
          goto LABEL_192; /*0x58e261*/
        }
LABEL_171:
        v114 = v150.m_10++; /*0x58e213*/
        *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v114) = v105; /*0x58e222*/
        goto LABEL_172; /*0x58e222*/
      }
      if ( v104 >= 4 ) /*0x58e26c*/
      {
        v115 = v150.m_8; /*0x58e26e*/
        v116 = v104 - 4; /*0x58e272*/
        if ( v150.m_8 > 0 ) /*0x58e277*/
          goto LABEL_184; /*0x58e277*/
        if ( !BYTE1(v150.m_C) && v150.m_8 ) /*0x58e283*/
          goto LABEL_186; /*0x58e283*/
        if ( VectorClass::Resize(&v150, v150.m_8 + 10, 0) ) /*0x58e28f*/
        {
LABEL_184:
          v117 = v150.m_10++; /*0x58e2a1*/
          *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v117) = v116; /*0x58e2a8*/
        }
      }
      v115 = v150.m_8; /*0x58e2ab*/
LABEL_186:
      if ( v105 > 7 ) /*0x58e2b2*/
        goto LABEL_193; /*0x58e2b2*/
      v104 = v105 + 4; /*0x58e2b8*/
      if ( v150.m_10 >= v115 /*0x58e2e0*/
        && (!BYTE1(v150.m_C) && v115
         || v151 <= 0
         || !(*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_H *, int, _DWORD))(*(_DWORD *)v150.__pad_0 + 8))(
               &v150,
               v151 + v115,
               0)) )
      {
        goto LABEL_193; /*0x58e2e5*/
      }
LABEL_192:
      v118 = v150.m_10++; /*0x58e2e7*/
      *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v118) = v104; /*0x58e2f6*/
LABEL_193:
      if ( g_MissionQueueFrame.briefing[371] == 3 || g_MissionQueueFrame.briefing[371] == 4 ) /*0x58e306*/
      {
        v119 = v150.m_10; /*0x58e308*/
        v120 = v150.m_10 - 1; /*0x58e30c*/
        if ( v150.m_10 - 1 >= 0 ) /*0x58e311*/
        {
          v121 = *(_DWORD *)&v150.m_1[3]; /*0x58e313*/
          do /*0x58e341*/
          {
            if ( !*(_DWORD *)(v121 + 4 * v120) && v120 < v119 ) /*0x58e31f*/
            {
              --v119; /*0x58e321*/
              v122 = v120; /*0x58e322*/
              for ( v150.m_10 = v119; v122 < v150.m_10; ++v122 ) /*0x58e32a*/
              {
                *(_DWORD *)(v121 + 4 * v122) = *(_DWORD *)(v121 + 4 * v122 + 4); /*0x58e330*/
                v119 = v150.m_10; /*0x58e333*/
                v121 = *(_DWORD *)&v150.m_1[3]; /*0x58e337*/
              }
            }
            --v120; /*0x58e340*/
          }
          while ( v120 >= 0 ); /*0x58e341*/
        }
      }
      __3_YAXPAX_Z(n); /*0x58e348*/
      if ( *((int *)Block + 3) <= 100 ) /*0x58e358*/
      {
        if ( v149 ) /*0x58e410*/
        {
          v130 = Block; /*0x58e416*/
          v131 = *((_DWORD *)Block + 4); /*0x58e41f*/
          *((_DWORD *)Block + 4) = v102; /*0x58e422*/
          v132 = v102 - v131; /*0x58e425*/
          LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58e427*/
          for ( jj = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58e43a*/
                jj;
                jj = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
          {
            *(_DWORD *)v157.__pad_0 = *(_DWORD *)(jj + 36); /*0x58e443*/
            if ( TileSystem::LookupMapTile(&v157) == v130[2] ) /*0x58e44f*/
              *(_BYTE *)(jj + 283) += v132; /*0x58e451*/
          }
          for ( kk = v130[14] - 1; /*0x58e46b*/
                kk >= 0;
                *(_DWORD *)(80 * ((__int16)v137 + g_MapCellWidth * *(__int16 *)&v157.__pad_0[2])
                          + g_MissionQueueFrame.localVariables[163]
                          + 56) = *(_DWORD *)(v149 + 8) )
          {
            v135 = *(_DWORD *)(v149 + 48); /*0x58e477*/
            v136 = *(_DWORD *)(v149 + 56); /*0x58e47a*/
            v137 = *(_DWORD *)(v130[11] + 4 * kk); /*0x58e47d*/
            *(_DWORD *)v157.__pad_0 = v137; /*0x58e482*/
            if ( v136 < v135 /*0x58e4a3*/
              || (*(_BYTE *)(v149 + 53) || !v135)
              && (v138 = *(_DWORD *)(v149 + 60), v138 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v149 + 40) + 8))(
                   v149 + 40,
                   v138 + v135,
                   0) )
            {
              v139 = *(_DWORD *)(v149 + 56); /*0x58e4aa*/
              v140 = *(_DWORD *)(v149 + 44); /*0x58e4ad*/
              *(_DWORD *)(v149 + 56) = v139 + 1; /*0x58e4b3*/
              *(_DWORD *)(v140 + 4 * v139) = v137; /*0x58e4b6*/
            }
            ++*(_DWORD *)(v149 + 12); /*0x58e4c4*/
            --kk; /*0x58e4e4*/
          }
          *((_BYTE *)v130 + 36) = 1; /*0x58e4eb*/
        }
      }
      else
      {
        v123 = *((_DWORD *)Block + 4); /*0x58e35e*/
        v124 = v150.m_10 - 1; /*0x58e367*/
        *(_QWORD *)&v153 = (unsigned int)v150.m_10; /*0x58e371*/
        __asm /*0x58e375*/
        {
          fild [esp+0B0h+var_80]
          fstp qword ptr [esp+0B0h+var_68.__pad_0]
        }
        do /*0x58e3a4*/
        {
          v162 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58e387*/
          __asm /*0x58e38f*/
          {
            fild [esp+0B0h+var_3C]
            fmul qword ptr [esp+0B0h+var_68.__pad_0]
            fmul ds:dbl_7ED898
          }
          LOWORD(v125) = Math::RoundToInt(v1); /*0x58e39d*/
        }
        while ( v125 > v124 ); /*0x58e3a4*/
        v126 = *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v125); /*0x58e3ae*/
        *((_DWORD *)Block + 4) = v126; /*0x58e3b1*/
        v127 = v126 - v123; /*0x58e3bb*/
        LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58e3bd*/
        v128 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58e3cc*/
        if ( v128 ) /*0x58e3d0*/
        {
          v129 = Block; /*0x58e3d6*/
          do /*0x58e403*/
          {
            *(_DWORD *)v157.__pad_0 = *(_DWORD *)(v128 + 36); /*0x58e3e1*/
            if ( TileSystem::LookupMapTile(&v157) == v129[2] ) /*0x58e3ed*/
              *(_BYTE *)(v128 + 283) += v127; /*0x58e3ef*/
            v128 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58e3ff*/
          }
          while ( v128 ); /*0x58e403*/
        }
      }
      *(_DWORD *)v150.__pad_0 = &VectorClass<int>::`vftable'; /*0x58e4f3*/
      VectorClass::Destroy((int)&v150); /*0x58e4fb*/
LABEL_226:
      v152 = (CellStruct *)((char *)v152 - 1); /*0x58e500*/
      if ( (int)v152 < 0 ) /*0x58e509*/
      {
        TileSystem_field_0x08 = v157.TileSystem_field_0x08; /*0x58e50f*/
        break; /*0x58e50f*/
      }
      v93 = v152; /*0x58df9d*/
    }
  }
  v141 = g_MissionQueueFrame.briefing[342] - 1; /*0x58e513*/
  if ( g_MissionQueueFrame.briefing[342] - 1 >= 0 ) /*0x58e51f*/
  {
    v142 = g_MissionQueueFrame.briefing[339]; /*0x58e521*/
    do /*0x58e552*/
    {
      v143 = *(TileNode **)(v142 + 4 * v141); /*0x58e527*/
      if ( v143 != (TileNode *)TileSystem_field_0x08 ) /*0x58e52c*/
      {
        if ( v143[9].__tail_0[0] ) /*0x58e52e*/
        {
          v144 = *(void **)(v142 + 4 * v141); /*0x58e535*/
          if ( v143 ) /*0x58e539*/
          {
            TileNode::Cleanup(v143); /*0x58e53d*/
            __3_YAXPAX_Z(v144); /*0x58e543*/
            v142 = g_MissionQueueFrame.briefing[339]; /*0x58e548*/
          }
        }
      }
      --v141; /*0x58e551*/
    }
    while ( v141 >= 0 ); /*0x58e552*/
  }
  TileSystem_field_0x04 = (void *)v163.TileSystem_field_0x04; /*0x58e557*/
  v56 = v163.TileSystem_field_0x04 == 0; /*0x58e55f*/
  ++*(_DWORD *)(TileSystem_field_0x08 + 28); /*0x58e561*/
  *(_DWORD *)v163.__pad_0 = &VectorClass<MapRegionClass *>::`vftable'; /*0x58e564*/
  if ( !v56 && BYTE1(v163.TileSystem_field_0x0C) ) /*0x58e577*/
  {
    __3_YAXPAX_Z(TileSystem_field_0x04); /*0x58e57a*/
    v163.TileSystem_field_0x04 = 0; /*0x58e582*/
  }
  BYTE1(v163.TileSystem_field_0x0C) = 0; /*0x58e590*/
  v163.TileSystem_field_0x08 = 0; /*0x58e59a*/
  v167.vtable0 = &VectorClass<Cell>::`vftable'; /*0x58e5a1*/
  if ( v167.Items ) /*0x58e5ac*/
  {
    if ( v167.IsAllocated ) /*0x58e5b7*/
      __3_YAXPAX_Z(v167.Items); /*0x58e5ba*/
  }
  return 1; /*0x58d641*/
}


// ==== 0x0058E5D0  TileSystem::AnalyzeTileConnectivity  this=TileSystem  sig=csp ====
_DWORD *__thiscall TileSystem::AnalyzeTileConnectivity(TileSystem *this)
{
  TileSystem *v1; // ebx
  VectorClass *v2; // eax
  VectorClass *v3; // esi
  VectorClass *v4; // ebp
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
  int Capacity; // ecx
  int Items; // eax
  void *vtable0; // eax
  _DWORD *v19; // edx
  VectorClass *v21; // [esp+Ch] [ebp-10h]
  int v22; // [esp+10h] [ebp-Ch]

  v1 = this; /*0x58e5d6*/
  v2 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x58e5de*/
  v3 = v2; /*0x58e5e3*/
  v4 = 0; /*0x58e5e5*/
  if ( v2 ) /*0x58e5ec*/
  {
    VectorClass::CellConstructor(v2, 0, 0); /*0x58e5f2*/
    v3[1].vtable0 = 0; /*0x58e5f7*/
    v3->vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58e5fa*/
    v3[1].Items = (void *)10; /*0x58e600*/
    v4 = v3; /*0x58e607*/
  }
  v21 = v4; /*0x58e60c*/
  v5 = v1->TileSystem_field_0x0C / 2; /*0x58e613*/
  if ( v5 < 10 ) /*0x58e618*/
    v5 = 10; /*0x58e61a*/
  v4[1].Items = (void *)v5; /*0x58e61f*/
  v6 = v1[3].TileSystem_field_0x08 - 1; /*0x58e625*/
  v22 = v6; /*0x58e626*/
  if ( v6 < 0 ) /*0x58e62a*/
    return &v4->vtable0; /*0x58e728*/
  v7 = g_MissionQueueFrame.localVariables[160]; /*0x58e631*/
  while ( 2 )
  {
    v8 = 0; /*0x58e641*/
    v9 = *(_DWORD *)(v1[2].TileSystem_field_0x0C + 4 * v6); /*0x58e646*/
    while ( 1 ) /*0x58e64f*/
    {
      v10 = v8 & 7; /*0x58e64f*/
      v11 = HIWORD(v9) + HIWORD(g_DDrawSurfaceManager.scenario[v10 + 82]); /*0x58e668*/
      v12 = (__int16)(v9 + LOWORD(g_DDrawSurfaceManager.scenario[v10 + 82])); /*0x58e66d*/
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
      || v14 > g_MissionQueueFrame.localVariables[161]
      || (g_MissionQueueFrame.localVariables[163]
        ? (v15 = *(_DWORD *)(80 * (v12 + g_MapCellWidth * v13) + g_MissionQueueFrame.localVariables[163] + 56))
        : (v15 = -1),
          v15 == this->TileSystem_field_0x08) )
    {
      v4 = v21; /*0x58e6bd*/
      goto LABEL_18; /*0x58e6bd*/
    }
    v4 = v21; /*0x58e6c9*/
    Capacity = v21->Capacity; /*0x58e6cd*/
    if ( (int)v21[1].vtable0 < Capacity ) /*0x58e6d5*/
      goto LABEL_25; /*0x58e6d5*/
    if ( v21->IsAllocated || !Capacity ) /*0x58e6e0*/
    {
      Items = (int)v21[1].Items; /*0x58e6e2*/
      if ( Items > 0 ) /*0x58e6e7*/
      {
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v21->vtable0 + 2))( /*0x58e6f3*/
               v21,
               Capacity + Items,
               0) )
        {
LABEL_25:
          vtable0 = v21[1].vtable0; /*0x58e6fa*/
          v19 = v21->Items; /*0x58e6fd*/
          v21[1].vtable0 = (char *)vtable0 + 1; /*0x58e703*/
          v19[(_DWORD)vtable0] = v9; /*0x58e706*/
        }
        v7 = g_MissionQueueFrame.localVariables[160]; /*0x58e709*/
      }
    }
LABEL_27:
    if ( --v22 >= 0 ) /*0x58e718*/
    {
      v6 = v22; /*0x58e639*/
      v1 = this; /*0x58e63d*/
      continue; /*0x58e63d*/
    }
    return &v4->vtable0; /*0x58e721*/
  }
}



// ==== 0x0058E740  RandomMap::CollectTerrainCells  this=RandomMap  sig=csp ====
char __thiscall RandomMap::CollectTerrainCells(RandomMap *this, int a2)
{
  VectorClass *v2; // eax
  VectorClass *v3; // esi
  VectorClass *v4; // ebp
  _DWORD *v5; // ecx
  int v6; // esi
  int v7; // ebx
  _WORD *v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // edx
  char *v12; // eax
  int v13; // esi
  void *v14; // edi
  Cell *v15; // eax
  Cell *v16; // eax
  int Capacity; // ecx
  int v18; // eax
  void *vtable0; // eax
  _DWORD *Items; // edx
  RandomMap *v21; // edi
  int v22; // edx
  __int16 v24[2]; // [esp+10h] [ebp-18h] BYREF
  _DWORD *p_vtable0; // [esp+14h] [ebp-14h]
  RandomMap *v26; // [esp+18h] [ebp-10h]
  int v27; // [esp+1Ch] [ebp-Ch]
  int v28; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  v26 = this; /*0x58e747*/
  p_vtable0 = RandomMap::TerrainAlloc(this); /*0x58e750*/
  for ( i = 0; i < a2; ++i ) /*0x58e760*/
  {
    v2 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x58e768*/
    v3 = v2; /*0x58e76d*/
    if ( v2 ) /*0x58e774*/
    {
      VectorClass::CellConstructor(v2, 0, 0); /*0x58e77a*/
      v3->vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58e77f*/
      v3[1].Items = (void *)10; /*0x58e785*/
      v3[1].vtable0 = 0; /*0x58e78c*/
      v4 = v3; /*0x58e78f*/
    }
    else
    {
      v4 = 0; /*0x58e793*/
    }
    v5 = p_vtable0; /*0x58e795*/
    v27 = 0; /*0x58e799*/
    v4[1].Items = (void *)(3 * p_vtable0[4]); /*0x58e7a3*/
    if ( (int)v5[4] > 0 ) /*0x58e7ab*/
    {
      v6 = g_MissionQueueFrame.localVariables[160]; /*0x58e7b1*/
      while ( 2 ) /*0x58e7b7*/
      {
        v7 = 0; /*0x58e7b7*/
        while ( 1 ) /*0x58e7d2*/
        {
          v8 = (_WORD *)(v5[1] + 4 * v27); /*0x58e7d2*/
          v9 = v8[1] + HIWORD(g_DDrawSurfaceManager.scenario[(v7 & 7) + 82]); /*0x58e7e5*/
          LOWORD(v28) = LOWORD(g_DDrawSurfaceManager.scenario[(v7 & 7) + 82]) + *v8; /*0x58e7e9*/
          HIWORD(v28) = v9; /*0x58e7ee*/
          *(_DWORD *)v24 = v28; /*0x58e7f7*/
          v10 = v9; /*0x58e7fe*/
          v11 = v9 + (__int16)v28; /*0x58e801*/
          if ( v11 > v6 /*0x58e828*/
            && (__int16)v28 - v10 < v6
            && v10 - (__int16)v28 < v6
            && v11 <= g_MissionQueueFrame.localVariables[161] )
          {
            v12 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x58e838*/
            if ( (void *)v12[283] == v26->RandomMap_field_0x10 ) /*0x58e84b*/
            {
              v13 = g_MissionQueueFrame.localVariables[163] + 80 * (v24[0] + g_MapCellWidth * v24[1]); /*0x58e870*/
              v14 = *(void **)(v13 + 56); /*0x58e872*/
              if ( v14 == (void *)-1 /*0x58e8a9*/
                && ((v15 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24),
                     (unsigned __int8)Cell::IsEmpty(v15))
                 || (v16 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24),
                     (unsigned __int8)Cell::IsShore(v16))) )
              {
                Capacity = v4->Capacity; /*0x58e8b2*/
                if ( (int)v4[1].vtable0 < Capacity /*0x58e8d8*/
                  || (v4->IsAllocated || !Capacity)
                  && (v18 = (int)v4[1].Items, v18 > 0)
                  && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v4->vtable0 + 2))(
                       v4,
                       Capacity + v18,
                       0) )
                {
                  vtable0 = v4[1].vtable0; /*0x58e8df*/
                  Items = v4->Items; /*0x58e8e2*/
                  v4[1].vtable0 = (char *)vtable0 + 1; /*0x58e8e8*/
                  Items[(_DWORD)vtable0] = *(_DWORD *)v24; /*0x58e8ef*/
                }
                v21 = v26; /*0x58e8f2*/
                *(_DWORD *)(v13 + 56) = v26->RandomMap_field_0x8; /*0x58e903*/
                *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24) + 283) = v21->RandomMap_field_0x10; /*0x58e90e*/
              }
              else if ( v14 != v26->RandomMap_field_0x8 ) /*0x58e91d*/
              {
                if ( p_vtable0 ) /*0x58e98c*/
                  (*(void (__thiscall **)(_DWORD *, int))*p_vtable0)(p_vtable0, 1); /*0x58e992*/
                if ( v4 ) /*0x58e996*/
                  (*(void (__thiscall **)(VectorClass *, int))v4->vtable0)(v4, 1); /*0x58e99f*/
                return 0; /*0x58e9a4*/
              }
            }
            v6 = g_MissionQueueFrame.localVariables[160]; /*0x58e91f*/
          }
          if ( ++v7 >= 8 ) /*0x58e929*/
            break; /*0x58e929*/
          v5 = p_vtable0; /*0x58e7bb*/
        }
        v5 = p_vtable0; /*0x58e92f*/
        v22 = p_vtable0[4]; /*0x58e938*/
        if ( ++v27 < v22 ) /*0x58e941*/
          continue; /*0x58e941*/
        break;
      }
    }
    if ( v5 ) /*0x58e94b*/
      (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x58e951*/
    p_vtable0 = &v4->vtable0; /*0x58e95c*/
  }
  if ( p_vtable0 ) /*0x58e972*/
    (*(void (__thiscall **)(_DWORD *, int))*p_vtable0)(p_vtable0, 1); /*0x58e978*/
  return 1; /*0x58e97a*/
}



// ==== 0x0058E9B0  RandomMap::PlaceRandomMapTerrain  this=RandomMap  sig=csp ====
char __thiscall RandomMap::PlaceRandomMapTerrain(RandomMap *this)
{
  _DWORD *v1; // esi
  int v2; // ecx
  int v3; // ebx
  int Capacity; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // ecx
  int i; // eax
  int v9; // eax
  int v10; // ebx
  int k; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v17; // [esp+14h] [ebp-24h]
  VectorClass v19; // [esp+20h] [ebp-18h] BYREF
  int j; // [esp+30h] [ebp-8h]
  int v21; // [esp+34h] [ebp-4h]

  v1 = RandomMap::TerrainAlloc(this); /*0x58e9c7*/
  VectorClass::CellConstructor(&v19, 0, 0); /*0x58e9c9*/
  v2 = 50000; /*0x58e9ce*/
  v19.vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58e9d3*/
  j = 0; /*0x58e9db*/
  v21 = 50000; /*0x58e9e3*/
  v3 = 0; /*0x58e9ea*/
  if ( (int)v1[4] > 0 ) /*0x58e9ee*/
  {
    Capacity = v19.Capacity; /*0x58e9f0*/
    while ( 1 ) /*0x58e9fd*/
    {
      v5 = (_DWORD *)(v1[1] + 4 * v3); /*0x58e9fd*/
      if ( j < Capacity ) /*0x58ea06*/
        goto LABEL_9; /*0x58ea06*/
      if ( (v19.IsAllocated || !Capacity) && v2 > 0 ) /*0x58ea16*/
        break; /*0x58ea16*/
LABEL_11:
      if ( ++v3 >= v1[4] ) /*0x58ea4a*/
        goto LABEL_12; /*0x58ea4a*/
      v2 = v21; /*0x58e9f6*/
    }
    if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v19.vtable0 + 2))(&v19, v2 + Capacity, 0) ) /*0x58ea25*/
    {
LABEL_9:
      v6 = j++; /*0x58ea2c*/
      *((_DWORD *)v19.Items + v6) = *v5; /*0x58ea3d*/
    }
    Capacity = v19.Capacity; /*0x58ea40*/
    goto LABEL_11; /*0x58ea40*/
  }
LABEL_12:
  if ( v1 ) /*0x58ea4e*/
    (*(void (__thiscall **)(_DWORD *, int))*v1)(v1, 1); /*0x58ea56*/
  v7 = j; /*0x58ea58*/
  for ( i = j; j > 0; i = j ) /*0x58ea60*/
  {
    v9 = i - 1; /*0x58ea6b*/
    v10 = *((_DWORD *)v19.Items + v9); /*0x58ea6e*/
    if ( v9 < v7 ) /*0x58ea75*/
    {
      for ( j = v7 - 1; v9 < j; *((_DWORD *)v19.Items + v9 - 1) = *((_DWORD *)v19.Items + v9) ) /*0x58ea7e*/
        ++v9; /*0x58ea84*/
    }
    for ( k = 0; k < 8; ++k ) /*0x58ea99*/
    {
      v12 = k & 7; /*0x58eaa3*/
      LOWORD(v17) = v10 + LOWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x58eabf*/
      HIWORD(v17) = HIWORD(v10) + HIWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x58eac4*/
      v13 = SHIWORD(v17) + (__int16)v17; /*0x58eacf*/
      if ( v13 > g_MissionQueueFrame.localVariables[160] /*0x58eafc*/
        && (__int16)v17 - SHIWORD(v17) < g_MissionQueueFrame.localVariables[160]
        && SHIWORD(v17) - (__int16)v17 < g_MissionQueueFrame.localVariables[160]
        && v13 <= g_MissionQueueFrame.localVariables[161] )
      {
        v14 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v17 + g_MapCellWidth * SHIWORD(v17)); /*0x58eb13*/
        if ( *(_DWORD *)(v14 + 56) == -1 ) /*0x58eb19*/
        {
          if ( *(_BYTE *)(v14 + 75) ) /*0x58eb1b*/
          {
            *(_DWORD *)(v14 + 56) = this->RandomMap_field_0x8; /*0x58eb29*/
            if ( j < v19.Capacity /*0x58eb57*/
              || (v19.IsAllocated || !v19.Capacity)
              && v21 > 0
              && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v19.vtable0 + 2))(
                   &v19,
                   v21 + v19.Capacity,
                   0) )
            {
              v15 = j++; /*0x58eb66*/
              *((_DWORD *)v19.Items + v15) = v17; /*0x58eb71*/
            }
          }
        }
      }
    }
    v7 = j; /*0x58eb7e*/
  }
  v19.vtable0 = &VectorClass<Cell>::`vftable'; /*0x58eb93*/
  if ( v19.Items && v19.IsAllocated ) /*0x58eba6*/
    __3_YAXPAX_Z(v19.Items); /*0x58eba9*/
  return 1; /*0x58eb91*/
}



// ==== 0x0058EBC0  ObjectClass::BuildRandomMapTiles  this=ObjectClass  sig=csp ====
int BuildRandomMapTiles(ObjectClass *this)
{
  int i; // esi
  _DWORD *v2; // ecx
  int v3; // eax
  int v4; // esi
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // ebx
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  int *v16; // eax
  int v17; // ecx
  int v18; // esi
  int v19; // ecx
  int v20; // esi
  bool v21; // zf
  double v22; // st7
  int v23; // eax
  int v24; // ebx
  int result; // eax
  int j; // edi
  int v27; // esi
  int v28; // eax
  void *v29; // eax
  int v30; // [esp+10h] [ebp-Ch]
  int v31; // [esp+14h] [ebp-8h]
  int v32; // [esp+18h] [ebp-4h] BYREF

  for ( i = 0; i < g_MissionQueueFrame.briefing[342]; v2[3] = 0 ) /*0x58ebd0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * i) + 40) + 12))(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * i) + 40); /*0x58ebe9*/
    *(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * i) + 12) = 0; /*0x58ebf4*/
    v2 = (_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * i++) + 64); /*0x58ec07*/
    *v2 = 9999; /*0x58ec0c*/
    v2[1] = 9999; /*0x58ec0e*/
    v2[2] = 0; /*0x58ec11*/
  }
  v3 = g_MapCellWidth * g_MapCellWidth - 1; /*0x58ec28*/
  if ( v3 >= 0 ) /*0x58ec29*/
  {
    v4 = g_MissionQueueFrame.localVariables[160]; /*0x58ec2f*/
    v5 = 80 * v3; /*0x58ec38*/
    v30 = 80 * v3; /*0x58ec3c*/
    v32 = g_MapCellWidth * g_MapCellWidth; /*0x58ec40*/
    while ( 1 ) /*0x58ec49*/
    {
      v6 = *(_DWORD *)(v5 + g_MissionQueueFrame.localVariables[163]); /*0x58ec49*/
      v31 = v6; /*0x58ec4c*/
      v7 = SHIWORD(v6); /*0x58ec50*/
      v8 = (__int16)v6; /*0x58ec55*/
      v9 = SHIWORD(v6) + (__int16)v6; /*0x58ec58*/
      if ( v9 > v4 /*0x58ec81*/
        && (__int16)v6 - SHIWORD(v6) < v4
        && SHIWORD(v6) - (__int16)v6 < v4
        && v9 <= g_MissionQueueFrame.localVariables[161] )
      {
        v10 = *(_DWORD *)(v5 + g_MissionQueueFrame.localVariables[163] + 56); /*0x58ec8c*/
        if ( v10 >= 0 && v10 < g_MissionQueueFrame.briefing[342] ) /*0x58ec9e*/
          break; /*0x58ec9e*/
      }
LABEL_30:
      v5 -= 80; /*0x58ed73*/
      v21 = v32 == 1; /*0x58ed7a*/
      v30 = v5; /*0x58ed7b*/
      --v32; /*0x58ed7f*/
      if ( v21 ) /*0x58ed83*/
        goto LABEL_31; /*0x58ed83*/
    }
    ++*(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v10) + 12); /*0x58ecb0*/
    v11 = *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v10); /*0x58ecb8*/
    v12 = *(_DWORD *)(v11 + 48); /*0x58ecbb*/
    v13 = v11 + 40; /*0x58ecbe*/
    if ( *(_DWORD *)(v13 + 16) >= v12 ) /*0x58ecc4*/
    {
      if ( !*(_BYTE *)(v13 + 13) && v12 ) /*0x58eccf*/
        goto LABEL_19; /*0x58eccf*/
      v14 = *(_DWORD *)(v13 + 20); /*0x58ecd1*/
      if ( v14 <= 0 ) /*0x58ecd6*/
        goto LABEL_19; /*0x58ecd6*/
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 8))(v13, v12 + v14, 0) ) /*0x58ece6*/
      {
LABEL_18:
        v5 = v30; /*0x58ecfb*/
LABEL_19:
        v16 = (int *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v10) + 64); /*0x58ecff*/
        if ( !*(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v10) + 72) ) /*0x58ed0a*/
        {
          *v16 = v8; /*0x58ed16*/
          v16[1] = v7; /*0x58ed18*/
          v16[2] = 1; /*0x58ed1b*/
          v16[3] = 1; /*0x58ed1e*/
        }
        v17 = *v16; /*0x58ed21*/
        if ( v8 >= v16[2] + *v16 ) /*0x58ed2c*/
          v16[2] = v8 - v17 + 1; /*0x58ed33*/
        if ( v8 < v17 ) /*0x58ed38*/
        {
          v18 = v16[2]; /*0x58ed3a*/
          *v16 = v8; /*0x58ed41*/
          v16[2] = v17 - v8 + v18; /*0x58ed43*/
        }
        v19 = v16[1]; /*0x58ed46*/
        if ( v7 >= v16[3] + v19 ) /*0x58ed52*/
          v16[3] = v7 - v19 + 1; /*0x58ed59*/
        if ( v7 < v19 ) /*0x58ed5e*/
        {
          v20 = v16[3]; /*0x58ed60*/
          v16[1] = v7; /*0x58ed67*/
          v16[3] = v19 - v7 + v20; /*0x58ed6a*/
        }
        v4 = g_MissionQueueFrame.localVariables[160]; /*0x58ed6d*/
        goto LABEL_30; /*0x58ed6d*/
      }
      v6 = v31; /*0x58ece8*/
    }
    v15 = *(_DWORD *)(v13 + 16); /*0x58ecec*/
    *(_DWORD *)(v13 + 16) = v15 + 1; /*0x58ecf2*/
    *(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * v15) = v6; /*0x58ecf8*/
    goto LABEL_18; /*0x58ecf8*/
  }
LABEL_31:
  v22 = ((double)g_MissionQueueFrame.briefing[384] * 0.005 + 0.05) /*0x58ed89*/
      * (double)g_MissionQueueFrame.briefing[453]
      * (double)g_MissionQueueFrame.briefing[452];
  LOWORD(v23) = Math::RoundToInt(v22 + v22); /*0x58eda9*/
  v24 = v23; /*0x58edae*/
LABEL_32:
  result = g_MissionQueueFrame.briefing[342]; /*0x58edb5*/
  for ( j = 0; j < g_MissionQueueFrame.briefing[342]; ++j ) /*0x58edbe*/
  {
    v27 = *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * j); /*0x58edca*/
    if ( !*(_BYTE *)(v27 + 26) && !*(_BYTE *)(v27 + 20) ) /*0x58edd4*/
    {
      if ( *(_DWORD *)(v27 + 12) <= v24 ) /*0x58edde*/
      {
        *(_BYTE *)(v27 + 26) = 1; /*0x58eded*/
      }
      else if ( TileSystem::BuildNodes(*(TileSystem **)(g_MissionQueueFrame.briefing[339] + 4 * j)) ) /*0x58ede2*/
      {
        if ( v27 ) /*0x58ee03*/
        {
          if ( *(_DWORD *)v27 ) /*0x58ee05*/
          {
            (***(void (__thiscall ****)(_DWORD, int))v27)(*(_DWORD *)v27, 1); /*0x58ee11*/
            *(_DWORD *)v27 = 0; /*0x58ee13*/
          }
          v32 = v27; /*0x58ee25*/
          v28 = (*(int (__thiscall **)(int *, int *))(g_MissionQueueFrame.briefing[338] + 16))( /*0x58ee29*/
                  &g_MissionQueueFrame.briefing[338],
                  &v32);
          if ( v28 != -1 && v28 < g_MissionQueueFrame.briefing[342] ) /*0x58ee39*/
          {
            --g_MissionQueueFrame.briefing[342]; /*0x58ee3e*/
            for ( ; /*0x58ee44*/
                  v28 < g_MissionQueueFrame.briefing[342];
                  *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v28 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                           + 4 * v28) )
            {
              ++v28; /*0x58ee4c*/
            }
          }
          v29 = *(void **)(v27 + 44); /*0x58ee5e*/
          *(_DWORD *)(v27 + 40) = &VectorClass<Cell>::`vftable'; /*0x58ee61*/
          if ( v29 ) /*0x58ee66*/
          {
            if ( *(_BYTE *)(v27 + 53) ) /*0x58ee68*/
            {
              __3_YAXPAX_Z(v29); /*0x58ee70*/
              *(_DWORD *)(v27 + 44) = 0; /*0x58ee78*/
            }
          }
          *(_BYTE *)(v27 + 53) = 0; /*0x58ee7c*/
          *(_DWORD *)(v27 + 48) = 0; /*0x58ee80*/
          __3_YAXPAX_Z((void *)v27); /*0x58ee83*/
        }
        goto LABEL_32; /*0x58ee8b*/
      }
    }
    result = g_MissionQueueFrame.briefing[342]; /*0x58edf1*/
  }
  return result; /*0x58ee90*/
}



// ==== 0x0058EF10  ObjectClass::ResetMapState  this=ObjectClass  sig=csp ====
char ResetMapState(ObjectClass *this)
{
  int i; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  void *v6; // esi
  int v7; // esi
  int v8; // edi
  RandomMap *v9; // eax
  _DWORD *Terrain; // eax
  int v11; // esi
  int v12; // esi
  int v13; // esi
  void (__thiscall ***v14)(_DWORD, int); // ecx
  char v16; // [esp+Fh] [ebp-5h]
  _WORD v17[2]; // [esp+10h] [ebp-4h] BYREF

  v16 = 1; /*0x58ef1e*/
  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x58ef23*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58ef2d*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58ef41*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !v16 ) /*0x58ef47*/
      break; /*0x58ef47*/
    v16 = Cliff::ProcessTransitions(i, -1); /*0x58ef5a*/
  }
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x58ef6d*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x58ef75*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58ef7a*/
    {
      v3 = 0; /*0x58ef7c*/
      do /*0x58ef96*/
      {
        v3 += 80; /*0x58ef84*/
        --v2; /*0x58ef87*/
        *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] - 24) = -1; /*0x58ef88*/
        *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58ef92*/
      }
      while ( v2 ); /*0x58ef96*/
    }
  }
  v4 = g_MissionQueueFrame.briefing[342]; /*0x58ef98*/
  v5 = g_MissionQueueFrame.briefing[342] - 1; /*0x58ef9f*/
  if ( g_MissionQueueFrame.briefing[342] - 1 >= 0 ) /*0x58efa4*/
  {
    do /*0x58efc3*/
    {
      v6 = *(void **)(g_MissionQueueFrame.briefing[339] + 4 * v5); /*0x58efab*/
      if ( v6 ) /*0x58efb0*/
      {
        TileNode::Cleanup(*(TileNode **)(g_MissionQueueFrame.briefing[339] + 4 * v5)); /*0x58efb4*/
        __3_YAXPAX_Z(v6); /*0x58efba*/
      }
      --v5; /*0x58efc2*/
    }
    while ( v5 >= 0 ); /*0x58efc3*/
    v4 = g_MissionQueueFrame.briefing[342]; /*0x58efc5*/
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x58efd0*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58efdb*/
  {
    v7 = 0; /*0x58efdd*/
    v8 = g_MapCellWidth * g_MapCellWidth; /*0x58efdf*/
    do /*0x58f02b*/
    {
      if ( *(_DWORD *)(v7 + g_MissionQueueFrame.localVariables[163] + 56) == -1 ) /*0x58efec*/
      {
        v17[0] = 0; /*0x58eff2*/
        v17[1] = 0; /*0x58eff8*/
        if ( (unsigned __int8)Coord::Compare2D((Coord *)(v7 + g_MissionQueueFrame.localVariables[163]), v17) ) /*0x58effd*/
        {
          v9 = (RandomMap *)CellCoord::To_CellObj( /*0x58f014*/
                              (CellCoord *)&stru_87F5F0.__pad_58[416],
                              (__int16 *)(v7 + g_MissionQueueFrame.localVariables[163]));
          Terrain = RandomMap::GenerateTerrain(v9); /*0x58f01b*/
          if ( Terrain ) /*0x58f022*/
            *((_BYTE *)Terrain + 26) = 0; /*0x58f024*/
        }
      }
      v7 += 80; /*0x58f027*/
      --v8; /*0x58f02a*/
    }
    while ( v8 ); /*0x58f02b*/
    v4 = g_MissionQueueFrame.briefing[342]; /*0x58f02d*/
  }
  if ( v16 ) /*0x58f03a*/
  {
    v11 = 0; /*0x58f03c*/
    if ( v4 > 0 ) /*0x58f040*/
    {
      do /*0x58f059*/
      {
        RandomMap::CollectBorderCells(*(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * v11)); /*0x58f04b*/
        v4 = g_MissionQueueFrame.briefing[342]; /*0x58f050*/
        ++v11; /*0x58f056*/
      }
      while ( v11 < g_MissionQueueFrame.briefing[342] ); /*0x58f059*/
    }
    v12 = 0; /*0x58f05b*/
    if ( v4 > 0 ) /*0x58f05f*/
    {
      do /*0x58f077*/
      {
        RandomMap::AllocateArea(*(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * v12)); /*0x58f069*/
        v4 = g_MissionQueueFrame.briefing[342]; /*0x58f06e*/
        ++v12; /*0x58f074*/
      }
      while ( v12 < g_MissionQueueFrame.briefing[342] ); /*0x58f077*/
    }
    v13 = 0; /*0x58f079*/
    if ( v4 > 0 ) /*0x58f07d*/
    {
      do /*0x58f0aa*/
      {
        v14 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v13) + 4); /*0x58f088*/
        if ( v14 ) /*0x58f08d*/
          (**v14)(v14, 1); /*0x58f093*/
        ++v13; /*0x58f09b*/
        *(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v13 - 4) + 4) = 0; /*0x58f0a0*/
      }
      while ( v13 < g_MissionQueueFrame.briefing[342] ); /*0x58f0aa*/
    }
  }
  return 1; /*0x58f0ac*/
}



// ==== 0x0058F0C0  RandomMap::CollectBorderCells  this=RandomMap  sig=csp ====
void __thiscall RandomMap::CollectBorderCells(RandomMap *this)
{
  RandomMap *v1; // ebx
  VectorClass *v2; // eax
  VectorClass *v3; // esi
  int v4; // ecx
  int v5; // eax
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
  int i; // edi
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  void *RandomMap_field_0x8; // esi
  int v26; // edx
  _BYTE *Block; // [esp+10h] [ebp-14h]
  int v28; // [esp+14h] [ebp-10h]
  _DWORD *v29; // [esp+1Ch] [ebp-8h]

  v1 = this; /*0x58f0c7*/
  v2 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x58f0cf*/
  v3 = v2; /*0x58f0d4*/
  if ( v2 ) /*0x58f0db*/
  {
    VectorClass::Construct(v2, 0, 0); /*0x58f0e3*/
    v3->vtable0 = &DynamicVectorClass<int>::`vftable'; /*0x58f0e8*/
    v3[1].Items = (void *)10; /*0x58f0ee*/
    v3[1].vtable0 = 0; /*0x58f0f5*/
  }
  else
  {
    v3 = 0; /*0x58f0fe*/
  }
  *(_DWORD *)&v1->RandomMap_field_0x2[2] = v3; /*0x58f100*/
  v4 = __2_YAPAXI_Z(g_MissionQueueFrame.localVariables[164]); /*0x58f114*/
  v5 = 0; /*0x58f119*/
  for ( Block = (_BYTE *)v4; v5 < g_MissionQueueFrame.localVariables[164]; ++v5 ) /*0x58f121*/
    *(_BYTE *)(v5 + v4) = 0; /*0x58f123*/
  v6 = RandomMap::TerrainAlloc(v1); /*0x58f139*/
  v7 = 0; /*0x58f13b*/
  v29 = v6; /*0x58f13d*/
  v28 = 0; /*0x58f141*/
  if ( (int)v6[4] > 0 ) /*0x58f14a*/
  {
    v8 = g_MissionQueueFrame.localVariables[160]; /*0x58f150*/
    do /*0x58f1ee*/
    {
      v9 = 0; /*0x58f159*/
      v10 = *(_DWORD *)(v6[1] + 4 * v7); /*0x58f15b*/
      do /*0x58f1da*/
      {
        v11 = v9 & 7; /*0x58f164*/
        v12 = HIWORD(v10) + HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x58f17d*/
        v13 = (__int16)(v10 + LOWORD(g_DDrawSurfaceManager.scenario[v11 + 82])); /*0x58f182*/
        v14 = v12; /*0x58f185*/
        v15 = v12 + v13; /*0x58f188*/
        if ( v15 > v8 && v13 - v14 < v8 && v14 - v13 < v8 && v15 <= g_MissionQueueFrame.localVariables[161] ) /*0x58f1a5*/
        {
          if ( g_MissionQueueFrame.localVariables[163] ) /*0x58f1af*/
          {
            v16 = *(_DWORD *)(80 * (v13 + g_MapCellWidth * v14) + g_MissionQueueFrame.localVariables[163] + 56); /*0x58f1c0*/
            if ( v16 >= 0 ) /*0x58f1c6*/
            {
              Block[v16] = 1; /*0x58f1cc*/
              v8 = g_MissionQueueFrame.localVariables[160]; /*0x58f1d0*/
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
  for ( i = 0; i < g_MissionQueueFrame.localVariables[164]; ++i ) /*0x58f201*/
  {
    if ( Block[i] && (void *)i != v1->RandomMap_field_0x8 ) /*0x58f210*/
    {
      v18 = *(_DWORD *)&v1->RandomMap_field_0x2[2]; /*0x58f212*/
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
  v1->RandomMap_field_0xC = 0; /*0x58f25c*/
  v24 = g_MapCellWidth * g_MapCellWidth; /*0x58f265*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58f26a*/
  {
    RandomMap_field_0x8 = v1->RandomMap_field_0x8; /*0x58f26c*/
    v26 = g_MissionQueueFrame.localVariables[163]; /*0x58f26f*/
    do /*0x58f29b*/
    {
      if ( *(void **)(v23 + v26 + 56) == RandomMap_field_0x8 && (*(_WORD *)(v23 + v26) || *(_WORD *)(v23 + v26 + 2)) ) /*0x58f282*/
      {
        ++v1->RandomMap_field_0xC; /*0x58f28e*/
        v26 = g_MissionQueueFrame.localVariables[163]; /*0x58f291*/
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
char __thiscall RandomMap::PlaceBuildings(RandomMap *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char result; // al
  int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // esi
  int v10; // ebp
  _WORD *v11; // eax
  CellLand *v12; // esi
  CellLand *v13; // ebp
  CellLand *v14; // esi
  CellLand *v15; // ebp
  CellLand *v16; // esi
  CellLand *v17; // ebp
  CellLand *v18; // esi
  CellLand *v19; // ebp
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
 ... [24770 chars total]



// ==== 0x005800D0  CellClass::ApplyTileModification5  this=CellClass  sig=csp ====
int __thiscall CellClass::ApplyTileModification5(CellClass *this, _DWORD *a2)
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

  v52 = (Terrain *)this; /*0x5800dd*/
  *(_DWORD *)v45 = *a2; /*0x5800e7*/
  v44 = 0; /*0x5800eb*/
  do /*0x580113*/
  {
    --v45[0]; /*0x5800f0*/
    v2 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45) + 17); /*0x580104*/
  }
  while ( v2 >= 205 && v2 <= 232 ); /*0x580113*/
  v3 = ++v45[0]; /*0x58011a*/
  v46 = 0; /*0x580123*/
  v47 = 0; /*0x580127*/
  v48 = 0; /*0x58012b*/
  v49 = 0; /*0x58012f*/
  while ( 1 ) /*0x58014f*/
  {
    v4 = v3 + (v45[1] << 9); /*0x58014d*/
    if ( v4 < 0x40000 && (v5 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x58015d*/
    {
      v6 = v5; /*0x58015f*/
    }
    else
    {
      v6 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x580167*/
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v45; /*0x58016c*/
    }
    v51 = v6; /*0x580175*/
    LOWORD(v53) = v3; /*0x58017f*/
    HIWORD(v53) = v45[1] - 1; /*0x580184*/
    v7 = v3 + ((__int16)(v45[1] - 1) << 9); /*0x58018f*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v7)) != 0 ) /*0x58019f*/
    {
      v58 = v8; /*0x5801a1*/
    }
    else
    {
      v58 = (int)&g_MissionQueueFrame.briefing[130]; /*0x5801ab*/
      g_MissionQueueFrame.briefing[139] = v53; /*0x5801b3*/
    }
    LOWORD(v57) = v3; /*0x5801bb*/
    HIWORD(v57) = v45[1] + 1; /*0x5801c0*/
    v9 = v3 + ((__int16)(v45[1] + 1) << 9); /*0x5801cb*/
    if ( v9 < 0x40000 && (v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x5801db*/
    {
      v55 = v10; /*0x5801dd*/
    }
    else
    {
      v55 = (int)&g_MissionQueueFrame.briefing[130]; /*0x5801e7*/
      g_MissionQueueFrame.briefing[139] = v57; /*0x5801ef*/
    }
    PlacementRect = BuildingClass::GetPlacementRect(v6, v77); /*0x580204*/
    StartCoords = House::GetStartCoords((House *)v6, v74); /*0x580210*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x580225*/
    {
      v13 = *PlacementRect; /*0x5802ab*/
      v15 = PlacementRect[1]; /*0x5802ad*/
      v19 = PlacementRect[2]; /*0x5802b0*/
      v17 = PlacementRect[3]; /*0x5802b3*/
    }
    else
    {
      v59 = PlacementRect[2]; /*0x580230*/
      if ( v59 <= 0 || (v50 = PlacementRect[3], v50 <= 0) ) /*0x58023f*/
      {
        v13 = *StartCoords; /*0x58029e*/
        v15 = StartCoords[1]; /*0x5802a0*/
        v19 = StartCoords[2]; /*0x5802a3*/
        v17 = StartCoords[3]; /*0x5802a6*/
      }
      else
      {
        v13 = *StartCoords; /*0x580241*/
        v14 = *PlacementRect; /*0x580243*/
        v15 = StartCoords[1]; /*0x580245*/
        v16 = StartCoords[2]; /*0x580248*/
        v17 = StartCoords[3]; /*0x58024b*/
        if ( v13 > *PlacementRect ) /*0x580250*/
        {
          v16 += v13 - v14; /*0x580254*/
          v13 = *PlacementRect; /*0x580256*/
        }
        v18 = PlacementRect[1]; /*0x580258*/
        v67 = v18; /*0x58025d*/
        if ( v15 > v18 ) /*0x580261*/
        {
          v17 += v15 - v18; /*0x580265*/
          v15 = v18; /*0x580267*/
        }
        if ( v13 + v16 < v14 + v59 ) /*0x580274*/
          v16 = v14 - v13 + v59 + 1; /*0x58027c*/
        if ( v17 + v15 < v50 + v67 ) /*0x58028f*/
          v17 = v50 + v67 - v15 + 1; /*0x580294*/
        v6 = v51; /*0x580296*/
        v19 = v16; /*0x58029a*/
      }
    }
    v62 = v13; /*0x5802b6*/
    v63 = v15; /*0x5802ba*/
    v64 = v19; /*0x5802be*/
    v65 = v17; /*0x5802c2*/
    v20 = v6->?[2]; /*0x5802c6*/
    v50 = v20; /*0x5802c9*/
    switch ( v20 ) /*0x5802e4*/
    {
      case 209: /*0x5802e4*/
      case 210: /*0x5802e4*/
      case 211: /*0x5802e4*/
      case 212: /*0x5802e4*/
      case 213: /*0x5802e4*/
      case 231: /*0x5802e4*/
        v22 = Range_RandomInt(0, 3u); /*0x580306*/
        v23 = v48; /*0x580310*/
        v21 = v22 + 205; /*0x580314*/
        v24 = v45[0]; /*0x580319*/
        v25 = v45[1] - 1; /*0x58031e*/
        v26 = 3; /*0x580326*/
        if ( v48 <= 0 || v49 <= 0 ) /*0x580332*/
        {
          v23 = 1; /*0x5803a3*/
        }
        else
        {
          v61 = v49; /*0x58033c*/
          v60 = v46; /*0x580344*/
          v27 = v47; /*0x580348*/
          if ( v46 > v45[0] ) /*0x58034e*/
          {
            v60 = v45[0]; /*0x580352*/
            v23 = v46 + v48 - v45[0]; /*0x580356*/
          }
          if ( v47 > v25 ) /*0x58035a*/
          {
            v27 = v45[1] - 1; /*0x580364*/
            v61 += v47 - v25; /*0x580366*/
          }
          if ( v23 + v60 < v45[0] + 1 ) /*0x580375*/
            v23 = v45[0] - v60 + 2; /*0x58037e*/
          v28 = v61; /*0x580380*/
          if ( v61 + v27 < v25 + 3 ) /*0x58038c*/
            v28 = v25 - v27 + 4; /*0x580393*/
          v24 = v60; /*0x580395*/
          v25 = v27; /*0x580399*/
          v26 = v28; /*0x58039b*/
          v6 = v51; /*0x58039d*/
        }
        v48 = v23; /*0x5803a5*/
        v20 = v50; /*0x5803a9*/
        v46 = v24; /*0x5803ad*/
        v47 = v25; /*0x5803b1*/
        v49 = v26; /*0x5803b5*/
        v44 = 1; /*0x5803b9*/
        goto LABEL_49; /*0x5803b9*/
      case 223: /*0x5802e4*/
      case 224: /*0x5802e4*/
        v21 = 223; /*0x5802eb*/
        goto LABEL_49; /*0x5802f0*/
      case 225: /*0x5802e4*/
      case 226: /*0x5802e4*/
        v21 = 225; /*0x5802f5*/
LABEL_49:
        if ( v21 != v20 ) /*0x5803c0*/
        {
          v29 = v58; /*0x5803c6*/
          v30 = v55; /*0x5803ca*/
          v6->?[2] = v21; /*0x5803ce*/
          *(_DWORD *)(v29 + 68) = v21; /*0x5803d1*/
          *(_DWORD *)(v30 + 68) = v21; /*0x5803d4*/
          v69[0] = DSurface_ViewBounds.field_0; /*0x5803e2*/
          v69[1] = DSurface_ViewBounds.field_4; /*0x5803f0*/
          v38 = (struct tagRECT *)BuildingClass::GetPlacementRect(v6, v76); /*0x580406*/
          House::GetStartCoords((House *)v6, v75); /*0x58040a*/
          v31 = (struct tagRECT *)Rect::Union(v38, v40, v42); /*0x580418*/
          v32 = Rect::Union(v31, v41, v43); /*0x580429*/
          v39 = *(_DWORD *)(v32 + 12); /*0x580434*/
          v37 = *(_DWORD *)(v32 + 8); /*0x58043c*/
          v33 = (Coord2D *)CellStruct::Copy((CellStruct *)v32, &v73); /*0x580450*/
          v34 = Coord2D::Sub(v33, &v72, v69); /*0x580457*/
          v35 = Rect::Construct(&v78, v34, v37, v39); /*0x580464*/
          v62 = *v35; /*0x580472*/
          v63 = v35[1]; /*0x580479*/
          v64 = v35[2]; /*0x580480*/
          v65 = v35[3]; /*0x58048c*/
          Cell::CreateCrater(*v35, v35[1], v35[2], v35[3], 0); /*0x5804af*/
          if ( v20 == 231 ) /*0x5804ba*/
          {
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v45); /*0x5804ca*/
            v54[0] = 0; /*0x5804e5*/
            v54[1] = 1; /*0x5804ec*/
            v66 = *CellStruct::Add((CellStruct *)v45, &v70, v54); /*0x5804fc*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v66); /*0x580506*/
            v56[0] = 0; /*0x58051c*/
            v56[1] = 1; /*0x580523*/
            v68 = *CellStruct::Sub((CellStruct *)v45, &v71, v56); /*0x580539*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v68); /*0x580540*/
          }
          House::AnnounceUpgrade((int)v6, -1); /*0x580549*/
          House::AnnounceUpgrade(v29, -1); /*0x580552*/
          House::AnnounceUpgrade(v30, -1); /*0x58055b*/
          Cell::SearchEnemies((int)v6, 0); /*0x580564*/
          Cell::SearchEnemies(v29, 0); /*0x58056d*/
          Cell::SearchEnemies(v30, 0); /*0x580576*/
        }
        break; /*0x580576*/
      default:
        break;
    }
    ++v45[0]; /*0x58057b*/
    if ( !CellClass::applyTileDamage((CellClass *)v45) ) /*0x580584*/
      break; /*0x580584*/
    v3 = v45[0]; /*0x580135*/
  }
  if ( v44 ) /*0x580597*/
    Terrain::ConnectivityGraph(v52); /*0x58059d*/
  result = v48; /*0x5805a2*/
  if ( v48 > 0 ) /*0x5805a8*/
  {
    result = v49; /*0x5805aa*/
    if ( v49 > 0 ) /*0x5805b0*/
      UpdateAreaConnectivityMap((ObjectClass *)v52, &v46); /*0x5805bb*/
  }
  return result; /*0x5805c0*/
}



// ==== 0x00580600  CellClass::ApplyTileModification8  this=CellClass  sig=csp ====
void __thiscall CellClass::ApplyTileModification8(CellClass *this, int *a2)
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

  v57 = (Terrain *)this; /*0x58060e*/
  *(_DWORD *)v48 = *a2; /*0x580619*/
  v50 = 0; /*0x58061d*/
  v51 = 0; /*0x580621*/
  v52 = 0; /*0x580625*/
  v53 = 0; /*0x580629*/
  v49 = 0; /*0x58062d*/
  do /*0x580655*/
  {
    --v48[1]; /*0x580632*/
    v2 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48) + 17); /*0x580646*/
  }
  while ( v2 >= 205 && v2 <= 232 ); /*0x580655*/
  for ( i = ++v48[1]; ; i = v48[1] ) /*0x58065c*/
  {
    v4 = v48[0] + (i << 9); /*0x580683*/
    if ( v4 < 0x40000 && (v5 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x580693*/
    {
      v6 = v5; /*0x580695*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v48; /*0x580699*/
      v6 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x58069f*/
    }
    HIWORD(v58) = i; /*0x5806aa*/
    LOWORD(v58) = v48[0] - 1; /*0x5806af*/
    v7 = (__int16)(v48[0] - 1); /*0x5806b7*/
    v8 = i << 9; /*0x5806ba*/
    v9 = v7 + v8 < 0; /*0x5806bd*/
    v10 = v7 + v8; /*0x5806bd*/
    v54 = v6; /*0x5806bf*/
    if ( v9 || v10 >= 0x40000 || (v11 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v10)) == 0 ) /*0x5806d1*/
    {
      v61 = (int)&g_MissionQueueFrame.briefing[130]; /*0x5806dd*/
      g_MissionQueueFrame.briefing[139] = v58; /*0x5806e5*/
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
    if ( v9 || v14 >= 0x40000 || (v15 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v14)) == 0 ) /*0x58070e*/
    {
      v56 = (int)&g_MissionQueueFrame.briefing[130]; /*0x58071a*/
      g_MissionQueueFrame.briefing[139] = v60; /*0x580722*/
    }
    else
    {
      v56 = v15; /*0x580710*/
    }
    PlacementRect = BuildingClass::GetPlacementRect(v6, v81); /*0x580740*/
    StartCoords = House::GetStartCoords((House *)v6, v78); /*0x580742*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x580757*/
    {
      v18 = *PlacementRect; /*0x5807d6*/
      v20 = PlacementRect[1]; /*0x5807d8*/
      v24 = PlacementRect[2]; /*0x5807db*/
      v22 = PlacementRect[3]; /*0x5807de*/
    }
    else
    {
      v71 = PlacementRect[2]; /*0x58075e*/
      if ( v71 <= 0 || (v55 = PlacementRect[3], v55 <= 0) ) /*0x58076d*/
      {
        v18 = *StartCoords; /*0x5807c9*/
        v20 = StartCoords[1]; /*0x5807cb*/
        v24 = StartCoords[2]; /*0x5807ce*/
        v22 = StartCoords[3]; /*0x5807d1*/
      }
      else
      {
        v18 = *StartCoords; /*0x58076f*/
        v19 = *PlacementRect; /*0x580771*/
        v20 = StartCoords[1]; /*0x580773*/
        v21 = StartCoords[2]; /*0x580776*/
        v22 = StartCoords[3]; /*0x580779*/
        if ( v18 > *PlacementRect ) /*0x58077e*/
        {
          v21 += v18 - v19; /*0x580782*/
          v18 = *PlacementRect; /*0x580784*/
        }
        v23 = PlacementRect[1]; /*0x580786*/
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
        v6 = v54; /*0x5807c3*/
      }
    }
    v63 = v18; /*0x5807e1*/
    v64 = v20; /*0x5807e5*/
    v65 = v24; /*0x5807e9*/
    v66 = v22; /*0x5807ed*/
    v25 = v6->?[2]; /*0x5807f1*/
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
        v28 = v52; /*0x58083b*/
        v26 = v27 + 214; /*0x58083f*/
        v29 = v48[1]; /*0x580844*/
        v30 = v48[0] - 1; /*0x580849*/
        if ( v52 <= 0 || v53 <= 0 ) /*0x58085d*/
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
            v28 = v50 + v52 - v30; /*0x580881*/
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
          v6 = v54; /*0x5808c4*/
          v29 = v31; /*0x5808c8*/
          v33 = v32; /*0x5808ca*/
        }
        v51 = v29; /*0x5808d2*/
        v25 = v55; /*0x5808d6*/
        v50 = v30; /*0x5808da*/
        v52 = v28; /*0x5808de*/
        v53 = v33; /*0x5808e2*/
        v49 = 1; /*0x5808e6*/
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
          v34 = v61; /*0x5808f3*/
          v35 = v56; /*0x5808f7*/
          v6->?[2] = v26; /*0x5808fb*/
          *(_DWORD *)(v34 + 68) = v26; /*0x580905*/
          *(_DWORD *)(v35 + 68) = v26; /*0x580908*/
          v73[1] = DSurface_ViewBounds.field_4; /*0x580916*/
          v73[0] = DSurface_ViewBounds.field_0; /*0x580920*/
          v42 = (struct tagRECT *)BuildingClass::GetPlacementRect(v6, v80); /*0x58092c*/
          House::GetStartCoords((House *)v6, v79); /*0x580937*/
          v36 = (struct tagRECT *)Rect::Union(v42, v44, v46); /*0x580945*/
          v37 = Rect::Union(v36, v45, v47); /*0x580956*/
          v43 = *(_DWORD *)(v37 + 12); /*0x580961*/
          v41 = *(_DWORD *)(v37 + 8); /*0x580969*/
          v38 = (Coord2D *)CellStruct::Copy((CellStruct *)v37, &v76); /*0x58097d*/
          v39 = Coord2D::Sub(v38, &v77, v73); /*0x580984*/
          v40 = Rect::Construct(&v82, v39, v41, v43); /*0x580991*/
          v63 = *v40; /*0x58099f*/
          v64 = v40[1]; /*0x5809a6*/
          v65 = v40[2]; /*0x5809ad*/
          v66 = v40[3]; /*0x5809b6*/
          Cell::CreateCrater(*v40, v40[1], v40[2], v40[3], 0); /*0x5809d6*/
          if ( v25 == 232 ) /*0x5809e1*/
          {
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v48); /*0x5809f1*/
            v59[0] = 1; /*0x580a0c*/
            v59[1] = 0; /*0x580a11*/
            v72 = *CellStruct::Add((CellStruct *)v48, &v74, v59); /*0x580a23*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v72); /*0x580a2d*/
            v62[0] = 1; /*0x580a43*/
            v62[1] = 0; /*0x580a48*/
            v69 = *CellStruct::Sub((CellStruct *)v48, &v75, v62); /*0x580a60*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v69); /*0x580a64*/
          }
          House::AnnounceUpgrade((int)v6, -1); /*0x580a6d*/
          House::AnnounceUpgrade(v34, -1); /*0x580a76*/
          House::AnnounceUpgrade(v35, -1); /*0x580a7f*/
          Cell::SearchEnemies((int)v6, 0); /*0x580a88*/
          Cell::SearchEnemies(v34, 0); /*0x580a91*/
          Cell::SearchEnemies(v35, 0); /*0x580a9a*/
        }
        break; /*0x580a9a*/
      default:
        break;
    }
    ++v48[1]; /*0x580a9f*/
    if ( !CellClass::applyTileDamage((CellClass *)v48) ) /*0x580aa8*/
      break; /*0x580aa8*/
  }
  if ( v49 ) /*0x580abb*/
    Terrain::ConnectivityGraph(v57); /*0x580ac1*/
  if ( v52 > 0 && v53 > 0 ) /*0x580ad4*/
    UpdateAreaConnectivityMap((ObjectClass *)v57, &v50); /*0x580adf*/
}



// ==== 0x00580B20  CellClass::updateLighting  this=CellClass  sig=csp ====
BOOL __thiscall CellClass::updateLighting(CellClass *this)
{
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // eax

  v1 = SLOWORD(this->mapCoords[0]) + (SHIWORD(this->mapCoords[0]) << 9); /*0x580b2a*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x580b40*/
  {
    g_MissionQueueFrame.briefing[139] = this->mapCoords[0]; /*0x580b44*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x580b49*/
  }
  v3 = v2[17]; /*0x580b4e*/
  return v3 >= 74 && v3 <= 101; /*0x580b60*/
}



// ==== 0x00580B70  CellClass::applyTileDamage  this=CellClass  sig=csp ====
BOOL __thiscall CellClass::applyTileDamage(CellClass *this)
{
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // eax

  v1 = SLOWORD(this->mapCoords[0]) + (SHIWORD(this->mapCoords[0]) << 9); /*0x580b7a*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x580b90*/
  {
    g_MissionQueueFrame.briefing[139] = this->mapCoords[0]; /*0x580b94*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x580b99*/
  }
  v3 = v2[17]; /*0x580b9e*/
  return v3 >= 205 && v3 <= 232; /*0x580bb4*/
}



// ==== 0x00580BC0  ObjectClass::FindMapSpawnCell  this=ObjectClass  sig=csp ====
CellClass *__thiscall FindMapSpawnCell(ObjectClass *this, int a2)
{
  int *v3; // eax
  int v4; // kr08_4
  int v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  _DWORD *v13; // ebx
  __int16 v14; // si
  CellClass *v15; // eax
  int v16; // esi
  CellClass *v17; // eax
  int v18; // ecx
  int v19; // ebx
  _DWORD *v20; // ebp
  __int16 v21; // si
  CellClass *v22; // eax
  int v23; // ecx
  int v24; // ecx
  int *v25; // ecx
  int *v26; // eax
  int v27; // eax
  int *v28; // ecx
  unsigned int v29; // eax
  CellClass *result; // eax
  unsigned int v31; // ecx
  __int16 v32[2]; // [esp+8h] [ebp-E8h] BYREF
  int v33; // [esp+Ch] [ebp-E4h]
  int v34; // [esp+10h] [ebp-E0h]
  int v35; // [esp+14h] [ebp-DCh]
  int v36; // [esp+18h] [ebp-D8h]
  int v37; // [esp+1Ch] [ebp-D4h]
  int v38; // [esp+20h] [ebp-D0h]
  int v39; // [esp+24h] [ebp-CCh]
  int v40; // [esp+28h] [ebp-C8h]
  int v41; // [esp+2Ch] [ebp-C4h]
  int v42; // [esp+30h] [ebp-C0h]
  int v43; // [esp+34h] [ebp-BCh]
  int v44; // [esp+38h] [ebp-B8h]
  int v45; // [esp+3Ch] [ebp-B4h] BYREF
  int v46; // [esp+40h] [ebp-B0h]
  int v47; // [esp+44h] [ebp-ACh]
  int v48; // [esp+48h] [ebp-A8h] BYREF
  int v49; // [esp+4Ch] [ebp-A4h]
  int v50; // [esp+50h] [ebp-A0h]
  int v51; // [esp+54h] [ebp-9Ch] BYREF
  int v52; // [esp+58h] [ebp-98h]
  int v53; // [esp+5Ch] [ebp-94h]
  int v54; // [esp+60h] [ebp-90h] BYREF
  int v55; // [esp+64h] [ebp-8Ch]
  int inited; // [esp+68h] [ebp-88h]
  _DWORD v57[2]; // [esp+6Ch] [ebp-84h] BYREF
  _DWORD v58[2]; // [esp+74h] [ebp-7Ch] BYREF
  _DWORD v59[2]; // [esp+7Ch] [ebp-74h] BYREF
  _DWORD v60[2]; // [esp+84h] [ebp-6Ch] BYREF
  _WORD v61[50]; // [esp+8Ch] [ebp-64h] BYREF

  v3 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a2 + 72))(a2, &v51); /*0x580bd8*/
  v38 = 32; /*0x580bdd*/
  v4 = *v3; /*0x580bf0*/
  v5 = v3[1]; /*0x580bf2*/
  v6 = this->q03D; /*0x580bf9*/
  LOWORD(v39) = v4 / 256; /*0x580bff*/
  v36 = (__int16)v39; /*0x580c0f*/
  HIWORD(v39) = v5 / 256; /*0x580c16*/
  v7 = 0; /*0x580c1b*/
  v8 = SHIWORD(v39); /*0x580c1d*/
  v9 = *((_DWORD *)this + 62); /*0x580c20*/
  v33 = 0; /*0x580c26*/
  v10 = v6 + v9; /*0x580c2a*/
  v35 = SHIWORD(v39); /*0x580c2c*/
  if ( v10 <= 32 ) /*0x580c33*/
    v38 = v10; /*0x580c35*/
  v11 = 0; /*0x580c3d*/
  v34 = 0; /*0x580c41*/
  if ( v38 > 0 ) /*0x580c45*/
  {
    v12 = 0; /*0x580c4d*/
    v37 = 0; /*0x580c4f*/
    while ( v12 > v11 ) /*0x580c5b*/
    {
LABEL_18:
      v19 = v12 + 1; /*0x580de5*/
      v44 = v11 - 1; /*0x580ded*/
      if ( v12 + 1 <= v11 - 1 ) /*0x580df1*/
      {
        v20 = &v61[2 * v7 + 2]; /*0x580dfb*/
        LOWORD(v40) = v36 - v11; /*0x580e04*/
        while ( 1 ) /*0x580e14*/
        {
          v21 = v19 + v35; /*0x580e14*/
          HIWORD(v40) = v19 + v35; /*0x580e19*/
          *(_DWORD *)v32 = v40; /*0x580e22*/
          if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v32, 1) ) /*0x580e26*/
          {
            inited = 0; /*0x580e46*/
            v54 = (v32[0] << 8) + 128; /*0x580e50*/
            v58[0] = v54; /*0x580e54*/
            v55 = (v32[1] << 8) + 128; /*0x580e60*/
            v58[1] = v55; /*0x580e64*/
            v22 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v54); /*0x580e72*/
            inited = Isometric::InitTables((int)v22, v58); /*0x580e82*/
            if ( (unsigned __int8)Cell::IsPassable(&v54) ) /*0x580e89*/
            {
              v23 = v33 + 1; /*0x580e9a*/
              *v20 = *(_DWORD *)v32; /*0x580e9b*/
              v33 = v23; /*0x580e9e*/
              ++v20; /*0x580ea2*/
            }
          }
          if ( v33 == 24 ) /*0x580eaa*/
            goto LABEL_36; /*0x580fa6*/
          HIWORD(v41) = v21; /*0x580eba*/
          LOWORD(v41) = v36 + v34; /*0x580ebf*/
          *(_DWORD *)v32 = v41; /*0x580ed1*/
          if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v32, 1) ) /*0x580ed5*/
          {
            v51 = (v32[0] << 8) + 128; /*0x580ef6*/
            v53 = 0; /*0x580efa*/
            v60[0] = v51; /*0x580efe*/
            v52 = (v32[1] << 8) + 128; /*0x580f22*/
            v60[1] = v52; /*0x580f28*/
            v24 = v51 / 256 + ((v52 / 256) << 9); /*0x580f3a*/
            if ( v24 < 0 /*0x580f51*/
              || v24 >= *(int *)&stru_87F5F0.__pad_58[736]
              || (v25 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) == 0 )
            {
              v26 = (int *)CellStruct::Set((CellStruct *)v61, v51 / 256, v52 / 256); /*0x580f5c*/
              v25 = &g_MissionQueueFrame.briefing[130]; /*0x580f63*/
              g_MissionQueueFrame.briefing[139] = *v26; /*0x580f68*/
            }
            v53 = Isometric::InitTables((int)v25, v60); /*0x580f7a*/
            if ( (unsigned __int8)Cell::IsPassable(&v51) ) /*0x580f85*/
            {
              *v20++ = *(_DWORD *)v32; /*0x580f92*/
              ++v33; /*0x580f9d*/
            }
          }
          if ( v33 == 24 ) /*0x580fa6*/
            goto LABEL_36; /*0x580fa6*/
          if ( ++v19 > v44 ) /*0x580faf*/
          {
            v7 = v33; /*0x580fb5*/
            v11 = v34; /*0x580fb9*/
            v12 = v37; /*0x580fbd*/
            break; /*0x580fbd*/
          }
        }
      }
      ++v11; /*0x580fc6*/
      --v12; /*0x580fcb*/
      v34 = v11; /*0x580fce*/
      v37 = v12; /*0x580fd2*/
      if ( v11 >= v38 ) /*0x580fd6*/
        goto LABEL_37; /*0x580fd6*/
      LOWORD(v8) = v35; /*0x580c55*/
    }
    v13 = &v61[2 * v7 + 2]; /*0x580c63*/
    HIWORD(v43) = v8 - v11; /*0x580c6a*/
    while ( 1 ) /*0x580c7a*/
    {
      v14 = v36 + v12; /*0x580c7a*/
      LOWORD(v43) = v36 + v12; /*0x580c7f*/
      *(_DWORD *)v32 = v43; /*0x580c88*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v32, 1) ) /*0x580c8c*/
      {
        v46 = (v32[1] << 8) + 128; /*0x580caa*/
        v59[1] = v46; /*0x580cae*/
        v47 = 0; /*0x580cb8*/
        v45 = (v32[0] << 8) + 128; /*0x580cd3*/
        v59[0] = v45; /*0x580cd7*/
        v15 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v45); /*0x580cde*/
        v47 = Isometric::InitTables((int)v15, v59); /*0x580cea*/
        if ( (unsigned __int8)Cell::IsPassable(&v45) ) /*0x580cf5*/
        {
          *v13++ = *(_DWORD *)v32; /*0x580d02*/
          ++v33; /*0x580d0c*/
        }
      }
      if ( v33 == 24 ) /*0x580d15*/
        break; /*0x580d15*/
      LOWORD(v42) = v14; /*0x580d1f*/
      v16 = v34; /*0x580d24*/
      HIWORD(v42) = v34 + v35; /*0x580d31*/
      *(_DWORD *)v32 = v42; /*0x580d3a*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v32, 1) ) /*0x580d41*/
      {
        v48 = (v32[0] << 8) + 128; /*0x580d65*/
        v57[0] = v48; /*0x580d69*/
        v49 = (v32[1] << 8) + 128; /*0x580d6d*/
        v57[1] = v49; /*0x580d71*/
        v50 = 0; /*0x580d86*/
        v17 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v48); /*0x580d8a*/
        v50 = Isometric::InitTables((int)v17, v57); /*0x580d9d*/
        if ( (unsigned __int8)Cell::IsPassable(&v48) ) /*0x580da1*/
        {
          v18 = v33 + 1; /*0x580db2*/
          *v13 = *(_DWORD *)v32; /*0x580db3*/
          v33 = v18; /*0x580db5*/
          ++v13; /*0x580db9*/
        }
      }
      if ( v33 == 24 ) /*0x580dc3*/
        break; /*0x580dc3*/
      if ( ++v12 > v16 ) /*0x580dcc*/
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
      v27 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v7 - 1); /*0x580ff8*/
      v28 = (int *)&v61[2 * v27 + 2]; /*0x581005*/
      v29 = *(__int16 *)v28 + ((__int16)v61[2 * v27 + 3] << 9); /*0x581017*/
      if ( v29 >= 0x40000 || (result = *(CellClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v29)) == 0 ) /*0x58102d*/
      {
        g_MissionQueueFrame.briefing[139] = *v28; /*0x581032*/
        return (CellClass *)&g_MissionQueueFrame.briefing[130]; /*0x581037*/
      }
      return result; /*0x581043*/
    }
    v8 = v35; /*0x581046*/
  }
  v31 = v36 + (v8 << 9); /*0x581051*/
  if ( v31 >= 0x40000 || (result = *(CellClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v31)) == 0 ) /*0x581069*/
  {
    g_MissionQueueFrame.briefing[139] = v39; /*0x581074*/
    return (CellClass *)&g_MissionQueueFrame.briefing[130]; /*0x58106f*/
  }
  return result; /*0x581031*/
}



// ==== 0x00581090  ObjectClass::CleanupMapSystems  this=ObjectClass  sig=csp ====
int __thiscall CleanupMapSystems(ObjectClass *this)
{
  int v2; // ebx
  int *p_nextArrayIndex; // esi
  _DWORD *abstractFlags; // esi
  char *p_needsRedraw; // ebx
  char *p_onBridge; // edi
  int v7; // ebp
  _DWORD *v8; // esi

  v2 = 13; /*0x581096*/
  p_nextArrayIndex = &this->?; /*0x58109b*/
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
  abstractFlags = (_DWORD *)this->?; /*0x5810b9*/
  if ( abstractFlags ) /*0x5810be*/
  {
    if ( *abstractFlags ) /*0x5810c0*/
      (**(void (__thiscall ***)(_DWORD, int))*abstractFlags)(*abstractFlags, 3); /*0x5810ca*/
    __3_YAXPAX_Z(abstractFlags); /*0x5810cd*/
    this->? = 0; /*0x5810d5*/
  }
  p_needsRedraw = &this->needsRedraw; /*0x5810dc*/
  p_onBridge = &this->onBridge; /*0x5810e2*/
  v7 = 3; /*0x5810e8*/
  do /*0x58111c*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)p_onBridge + 12))(p_onBridge); /*0x5810f1*/
    v8 = *(_DWORD **)p_needsRedraw; /*0x5810f4*/
    if ( *(_DWORD *)p_needsRedraw ) /*0x5810f4*/
    {
      if ( *v8 ) /*0x5810fa*/
        (**(void (__thiscall ***)(_DWORD, int))*v8)(*v8, 3); /*0x581104*/
      __3_YAXPAX_Z(v8); /*0x581107*/
      *(_DWORD *)p_needsRedraw = 0; /*0x58110f*/
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
  i... [21605 chars total]



// ==== 0x00581F50  MapClass::BuildSubzones  this=MapClass  sig=csp ====
_DWORD *__thiscall MapClass::BuildSubzones(MapClass *this)
{
  int v2; // esi
  char *pad_BC; // edi

  v2 = 2; /*0x581f55*/
  pad_BC = this->__pad_BC; /*0x581f5a*/
  do /*0x581f75*/
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)pad_BC + 12))(pad_BC); /*0x581f64*/
    Subzone::BuildGraph((Subzone *)this, v2--); /*0x581f6a*/
    pad_BC -= 24; /*0x581f70*/
  }
  while ( v2 >= 0 ); /*0x581f75*/
  return MapClass::AllocArrays(&stru_87E790.__pad_D8[80]); /*0x581f81*/
}



// ==== 0x00581F90  Subzone::BuildGraph  this=Subzone  sig=csp ====
int __thiscall Subzone::BuildGraph(Subzone *this, int a2)
{
  Subzone *v2; // esi
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edi
  int p_Subzone_field_0x08; // ebx
  unsigned int v7; // ecx
  bool v8; // cc
  unsigned int Subzone_field_0x04; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // edi
  unsigned __int8 *Subzone_field_0x08; // edx
  int v17; // ebp
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  __int16 v25; // dx
  int v26; // ecx
  int v27; // ebp
  int v28; // edi
  int v29; // eax
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
  int v53; // [esp+14h] [ebp-68h]
  int v54; // [esp+18h] [ebp-64h]
  int v55; // [esp+18h] [ebp-64h]
  int v56; // [esp+1Ch] [ebp-60h]
  unsigned __int8 *v57; // [esp+1Ch] [ebp-60h]
  unsigned int v58; // [esp+20h] [ebp-5Ch]
  _BYTE *i; // [esp+20h] [ebp-5Ch]
  __int16 v60[2]; // [esp+24h] [ebp-58h] BYREF
  int v61; // [esp+28h] [ebp-54h]
  int v62; // [esp+2Ch] [ebp-50h]
  int v63; // [esp+30h] [ebp-4Ch]
  Subzone *v64; // [esp+34h] [ebp-48h]
  int v65; // [esp+38h] [ebp-44h]
  int v66; // [esp+3Ch] [ebp-40h]
  int v67; // [esp+40h] [ebp-3Ch]
  _DWORD *v68; // [esp+44h] [ebp-38h]
  int v69; // [esp+48h] [ebp-34h] BYREF
  int v70; // [esp+4Ch] [ebp-30h]
  int v71; // [esp+50h] [ebp-2Ch]
  int v72; // [esp+54h] [ebp-28h]
  VectorClass v73; // [esp+58h] [ebp-24h] BYREF
  int v74; // [esp+68h] [ebp-14h]
  int v75; // [esp+6Ch] [ebp-10h]
  int v76; // [esp+70h] [ebp-Ch]
  int v77; // [esp+74h] [ebp-8h]
  int v78; // [esp+78h] [ebp-4h]
  char v79; // [esp+80h] [ebp+4h]

  v2 = this; /*0x581f9a*/
  v64 = this; /*0x581fa1*/
  v3 = *((_DWORD *)this + 27); /*0x581fa5*/
  v4 = *((_DWORD *)this + 28); /*0x581fa8*/
  v5 = (_DWORD *)*(&v64[10].Subzone_field_0x08 + a2); /*0x581fab*/
  p_Subzone_field_0x08 = (int)&v64[2 * a2 + 11].Subzone_field_0x08; /*0x581fb2*/
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
  Subzone_field_0x04 = v2[9].Subzone_field_0x04; /*0x582004*/
  if ( Subzone_field_0x04 < v7 ) /*0x58200c*/
  {
    v10 = v2[8].Subzone_field_0x08 + 1; /*0x58200e*/
    do /*0x58202a*/
    {
      *(_WORD *)(Subzone_field_0x04 + 2 * a2) = 0; /*0x58200f*/
      *(_WORD *)(Subzone_field_0x04 + 6) = *(_WORD *)(v10 + 1); /*0x582019*/
      *(_BYTE *)(Subzone_field_0x04 + 8) = *(_BYTE *)v10; /*0x58201f*/
      Subzone_field_0x04 += 10; /*0x582022*/
      v10 += 4; /*0x582025*/
    }
    while ( Subzone_field_0x04 < v7 ); /*0x58202a*/
  }
  v53 = 1; /*0x582034*/
  Subzone::Constructor((Subzone *)&v73, 0, 0); /*0x58203c*/
  (*((void (__thiscall **)(VectorClass *))v73.vtable0 + 3))(&v73); /*0x582049*/
  v11 = *(_DWORD *)(p_Subzone_field_0x08 + 8); /*0x58204c*/
  v12 = *(_DWORD *)(p_Subzone_field_0x08 + 16); /*0x58204f*/
  LOWORD(v76) = 0; /*0x582056*/
  v77 = 0; /*0x58205b*/
  v78 = 0; /*0x58205f*/
  if ( v12 < v11 /*0x58207f*/
    || (*(_BYTE *)(p_Subzone_field_0x08 + 13) || !v11)
    && (v13 = *(_DWORD *)(p_Subzone_field_0x08 + 20), v13 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)p_Subzone_field_0x08 + 8))(
         p_Subzone_field_0x08,
         v11 + v13,
         0) )
  {
    v14 = *(_DWORD *)(p_Subzone_field_0x08 + 16); /*0x582086*/
    *(_DWORD *)(p_Subzone_field_0x08 + 16) = v14 + 1; /*0x582094*/
    Subzone::CopyDataFrom((Subzone *)(*(_DWORD *)(p_Subzone_field_0x08 + 4) + 36 * v14), (int)&v73); /*0x58209d*/
  }
  v73.vtable0 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x5820a6*/
  VectorClass::Cleanup5((int)&v73); /*0x5820ae*/
  *(_WORD *)(*(_DWORD *)(p_Subzone_field_0x08 + 4) + 24) = 0; /*0x5820b9*/
  *(_DWORD *)(*(_DWORD *)(p_Subzone_field_0x08 + 4) + 28) = 7; /*0x5820c0*/
  v15 = v2[9].Subzone_field_0x04; /*0x5820d4*/
  Subzone_field_0x08 = (unsigned __int8 *)v2[8].Subzone_field_0x08; /*0x5820d7*/
  v57 = Subzone_field_0x08; /*0x5820da*/
  v71 = 1 << (a2 + 1); /*0x5820de*/
  v72 = v71; /*0x5820e2*/
  v62 = v71 - 1; /*0x5820ed*/
  v17 = 0; /*0x5820fb*/
  v66 = *(_DWORD *)&stru_87F5F0.__pad_58[660] + *(_DWORD *)&stru_87F5F0.__pad_58[664] + 1; /*0x5820ff*/
  v69 = 0; /*0x582103*/
  v70 = 0; /*0x582107*/
  v55 = 0; /*0x58210b*/
  v52 = 0; /*0x58210f*/
  while ( v15 < v58 ) /*0x582113*/
  {
    v18 = *Subzone_field_0x08; /*0x582122*/
    v63 = v18; /*0x582128*/
    if ( a2 + 1 >= 3 ) /*0x58212c*/
      v61 = 0; /*0x582138*/
    else
      v61 = *(__int16 *)(v15 + 2 * (a2 + 1)); /*0x582132*/
    if ( v18 == 7 || *(_WORD *)(v15 + 2 * a2) ) /*0x582150*/
    {
      v15 += 10; /*0x5822d0*/
      Subzone_field_0x08 += 4; /*0x5822d3*/
      ++v17; /*0x5822d6*/
      v57 = Subzone_field_0x08; /*0x5822d7*/
      v55 = v17; /*0x5822db*/
    }
    else
    {
      v60[1] = v52; /*0x582164*/
      g_MissionQueueFrame.briefing[273] = 0; /*0x582178*/
      v60[0] = v17; /*0x582182*/
      v19 = Radar::ProcessSubzone((Radar *)v2, v15, a2, v53, &v69, v60); /*0x582194*/
      VectorClass::ConstructSubzone(&v73, 0, 0); /*0x582196*/
      v73.vtable0 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58219f*/
      v75 = 10; /*0x5821a7*/
      v74 = 0; /*0x5821af*/
      VectorClass::CleanupSubzone((int)&v73); /*0x5821b7*/
      v20 = *(_DWORD *)(p_Subzone_field_0x08 + 8); /*0x5821bd*/
      v21 = *(_DWORD *)(p_Subzone_field_0x08 + 16); /*0x5821c0*/
      LOWORD(v76) = 0; /*0x5821c7*/
      v77 = 0; /*0x5821cc*/
      v78 = 0; /*0x5821d0*/
      if ( v21 < v20 /*0x5821f1*/
        || (*(_BYTE *)(p_Subzone_field_0x08 + 13) || !v20)
        && (v22 = *(_DWORD *)(p_Subzone_field_0x08 + 20), v22 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)p_Subzone_field_0x08 + 8))(
             p_Subzone_field_0x08,
             v20 + v22,
             0) )
      {
        v23 = *(_DWORD *)(p_Subzone_field_0x08 + 16); /*0x5821f8*/
        *(_DWORD *)(p_Subzone_field_0x08 + 16) = v23 + 1; /*0x582206*/
        Subzone::CopyDataFrom((Subzone *)(*(_DWORD *)(p_Subzone_field_0x08 + 4) + 36 * v23), (int)&v73); /*0x58220f*/
      }
      v73.vtable0 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x582218*/
      if ( v73.Items && v73.IsAllocated ) /*0x58222a*/
      {
        __3_YAXPAX_Z(v73.Items); /*0x58222d*/
        v73.Items = 0; /*0x582235*/
      }
      v73.IsAllocated = 0; /*0x582241*/
      v73.Capacity = 0; /*0x58224b*/
      v24 = *(_DWORD *)(p_Subzone_field_0x08 + 4) + 36 * (unsigned __int16)v53; /*0x582259*/
      v25 = v61; /*0x582260*/
      *(_DWORD *)(v24 + 28) = v63; /*0x582265*/
      *(_WORD *)(v24 + 24) = v25; /*0x582268*/
      *(_DWORD *)(v24 + 20) = 16; /*0x582275*/
      v63 = 65 * ((__int16)v52 / 4); /*0x58228b*/
      *(_DWORD *)(v24 + 32) = (__int16)v17 / 4 + 130 * ((__int16)v52 / 4) + 131; /*0x5822ab*/
      Subzone_field_0x08 = &v57[4 * v19]; /*0x5822b3*/
      ++v53; /*0x5822b6*/
      v26 = 5 * v19; /*0x5822ba*/
      v17 = v19 + v55; /*0x5822bd*/
      v2 = v64; /*0x5822bf*/
      v15 += 2 * v26; /*0x5822c3*/
      v57 = Subzone_field_0x08; /*0x5822c6*/
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
  v27 = 0; /*0x582330*/
  *(&v2[9].Subzone_field_0x08 + a2) = (unsigned __int16)v53; /*0x582332*/
  if ( *(int *)v2[8].__pad_0 > 0 ) /*0x58233b*/
  {
    v28 = 0; /*0x58233d*/
    do /*0x582366*/
    {
      v29 = *(_DWORD *)v2[7].__pad_0 + v28; /*0x582344*/
      if ( *(_BYTE *)(v29 + 8) ) /*0x582346*/
        RadarClass::RenderBlips((RadarClass *)v2, (int *)v29, a2); /*0x582358*/
      ++v27; /*0x582360*/
      v28 += 16; /*0x582361*/
    }
    while ( v27 < *(_DWORD *)v2[8].__pad_0 ); /*0x582366*/
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
        v79 = *v34; /*0x5823a4*/
        LOBYTE(v67) = *v34; /*0x5823ab*/
        v37 = *(_DWORD *)(p_Subzone_field_0x08 + 4) + 36 * (unsigned __int16)v35; /*0x5823b8*/
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
        v44 = *(_DWORD *)(p_Subzone_field_0x08 + 4); /*0x582406*/
        LOBYTE(v65) = v79; /*0x582414*/
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



// ==== 0x005824A0  Radar::ProcessSubzone  this=Radar  sig=csp ====
int __thiscall Radar::ProcessSubzone(Radar *this, int a2, int a3, int a4, int *a5, __int16 *a6)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // esi
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
  int v47; // ebp
  int v48; // eax
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
  int v68; // esi
  int v69; // ecx
  int v70; // edx
  int v71; // eax
  __int16 *v72; // ebp
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
  __int16 v95[2]; // [esp+24h] [ebp-50h] BYREF
  int v96; // [esp+28h] [ebp-4Ch]
  int v97; // [esp+2Ch] [ebp-48h]
  int v98; // [esp+30h] [ebp-44h]
  int v99; // [esp+34h] [ebp-40h]
  int v100; // [esp+38h] [ebp-3Ch]
  __int16 v101[2]; // [esp+3Ch] [ebp-38h] BYREF
  _DWORD *v102; // [esp+40h] [ebp-34h]
  int v103; // [esp+44h] [ebp-30h]
  int v104; // [esp+48h] [ebp-2Ch] BYREF
  __int16 v105[2]; // [esp+4Ch] [ebp-28h] BYREF
  int v106; // [esp+50h] [ebp-24h]
  __int16 v107[2]; // [esp+54h] [ebp-20h] BYREF
  __int16 v108[2]; // [esp+58h] [ebp-1Ch] BYREF
  int v109; // [esp+5Ch] [ebp-18h]
  int v110; // [esp+60h] [ebp-14h]
  int v111; // [esp+64h] [ebp-10h]
  int v112; // [esp+6Ch] [ebp-8h]
  int v113; // [esp+70h] [ebp-4h]
  int v114; // [esp+78h] [ebp+4h]
  __int16 *v115; // [esp+88h] [ebp+14h]

  v6 = a2; /*0x5824a5*/
  v98 = *(__int16 *)(a2 + 6); /*0x5824b3*/
  v7 = a2; /*0x5824be*/
  v8 = a2; /*0x5824c0*/
  v9 = *a6; /*0x5824c6*/
  v115 = (__int16 *)a6[1]; /*0x5824cd*/
  v112 = 0; /*0x5824d4*/
  LOBYTE(v113) = 0; /*0x5824dc*/
  v10 = *a5; /*0x5824e4*/
  v106 = a5[1]; /*0x5824e6*/
  v11 = a5[2]; /*0x5824ea*/
  v12 = a5[3]; /*0x5824ed*/
  v97 = -1; /*0x5824f0*/
  v96 = v9; /*0x5824fc*/
  v100 = v11 + v10 - 1; /*0x582500*/
  v94 = v9; /*0x582508*/
  v99 = v10; /*0x58250c*/
  v111 = v12 + v106 - 1; /*0x582518*/
  v102 = *(_DWORD **)&this->__pad_64[4 * a3 + 28]; /*0x582527*/
  v13 = *(unsigned __int8 *)(a2 + 8); /*0x58252d*/
  while ( v9 >= v10 ) /*0x582538*/
  {
    v14 = *(unsigned __int8 *)(v7 + 8) - v13; /*0x582541*/
    if ( (int)((HIDWORD(v14) ^ v14) - HIDWORD(v14)) >= 2 ) /*0x582549*/
      break; /*0x582549*/
    *(_WORD *)(v7 + 2 * a3) = a4; /*0x582556*/
    v13 = *(unsigned __int8 *)(v7 + 8); /*0x58255a*/
    v15 = *(__int16 *)(v7 - 4); /*0x58255d*/
    v7 -= 10; /*0x582565*/
    --v9; /*0x582568*/
    if ( v15 != v98 ) /*0x58256b*/
      break; /*0x58256b*/
    v10 = v99; /*0x582532*/
  }
  v96 = v9; /*0x582571*/
  v89 = *(__int16 *)(v7 + 2 * a3); /*0x58257b*/
  if ( v89 > 0 ) /*0x58257f*/
  {
    v16 = *(unsigned __int8 *)(v7 + 8) - v13; /*0x58258c*/
    if ( (int)((HIDWORD(v16) ^ v16) - HIDWORD(v16)) < 2 && v89 != -1 ) /*0x58259f*/
    {
      v101[1] = (__int16)v115; /*0x5825b1*/
      v101[0] = v9; /*0x5825bd*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v101, 1) ) /*0x5825c2*/
      {
        v101[1] = (__int16)v115; /*0x5825de*/
        v101[0] = v9 + 1; /*0x5825ea*/
        if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v101, 1) ) /*0x5825ef*/
        {
          v17 = (unsigned __int16)a4 | (v89 << 16); /*0x582612*/
          LOBYTE(v113) = 0; /*0x58261a*/
          v18 = *(_DWORD *)(*v102 + 24 * (a4 & 0xF | (16 * (v89 & 0xF))) + 16); /*0x58262a*/
          v19 = *v102 + 24 * (a4 & 0xF | (16 * (v89 & 0xF))); /*0x58262e*/
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
          v6 = a2; /*0x582693*/
          v9 = v96; /*0x582697*/
          v97 = v89; /*0x58269b*/
        }
      }
    }
  }
  v30 = *(unsigned __int8 *)(v6 + 8); /*0x5826a9*/
  if ( *(__int16 *)(v6 + 6) == v98 ) /*0x5826ae*/
  {
    do /*0x5826f5*/
    {
      if ( v94 > v100 ) /*0x5826ba*/
        break; /*0x5826ba*/
      v31 = *(unsigned __int8 *)(v8 + 8) - v30; /*0x5826c3*/
      if ( (int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) >= 2 ) /*0x5826cb*/
        break; /*0x5826cb*/
      *(_WORD *)(v8 + 2 * a3) = a4; /*0x5826da*/
      v30 = *(unsigned __int8 *)(v8 + 8); /*0x5826e0*/
      v8 += 10; /*0x5826e7*/
      ++v94; /*0x5826eb*/
    }
    while ( *(__int16 *)(v8 + 6) == v98 ); /*0x5826f5*/
  }
  v90 = *(__int16 *)(v8 + 2 * a3); /*0x582701*/
  if ( v90 > 0 ) /*0x582705*/
  {
    v32 = *(unsigned __int8 *)(v8 + 8) - v30; /*0x582712*/
    if ( (int)((HIDWORD(v32) ^ v32) - HIDWORD(v32)) < 2 && v90 != v97 ) /*0x58272a*/
    {
      v101[0] = v94; /*0x582741*/
      v101[1] = (__int16)v115; /*0x58274d*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v101, 1) ) /*0x582752*/
      {
        v101[0] = v94 - 1; /*0x582770*/
        v101[1] = (__int16)v115; /*0x58277c*/
        if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v101, 1) ) /*0x582781*/
        {
          v33 = (unsigned __int16)a4 | (v90 << 16); /*0x5827a8*/
          LOBYTE(v113) = 0; /*0x5827b2*/
          v34 = *v102 + 24 * (a4 & 0xF | (16 * (v90 & 0xF))); /*0x5827bc*/
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
          v6 = a2; /*0x582824*/
          v9 = v96; /*0x582828*/
          v97 = v90; /*0x58282c*/
        }
      }
    }
  }
  v46 = *(_DWORD *)&this->__pad_64[148]; /*0x58284b*/
  v110 = (v8 - v6) / 10 - 1; /*0x582851*/
  v109 = v46 + *(_DWORD *)&this->__pad_64[144] + 1; /*0x58285f*/
  *(_DWORD *)v101 = 10 * v109; /*0x582868*/
  v47 = v7 - 10 * v109; /*0x58286c*/
  v48 = v7 + 10 * v109; /*0x58286e*/
  v49 = v9; /*0x582870*/
  v114 = v48; /*0x582872*/
  v95[0] = 0; /*0x582878*/
  v95[1] = 0; /*0x58287d*/
  if ( v9 > v94 ) /*0x582886*/
    return v110; /*0x582886*/
  do /*0x582aca*/
  {
    v50 = *(__int16 *)(v47 + 2 * a3); /*0x582892*/
    v91 = v50; /*0x582897*/
    if ( v49 == v9 ) /*0x58289b*/
    {
      v51 = v49; /*0x5828a5*/
      HIWORD(v103) = (_WORD)v115; /*0x5828a7*/
      LOWORD(v103) = v49 + 1; /*0x5828b3*/
      *(_DWORD *)v95 = v103; /*0x5828c0*/
      v52 = v47 + 2 * (5 * v109 + 5); /*0x5828c4*/
    }
    else
    {
      v51 = v49; /*0x5828ce*/
      if ( v49 >= v94 ) /*0x5828d2*/
      {
        v105[0] = v49 - 1; /*0x582902*/
        v105[1] = (__int16)v115; /*0x582907*/
        *(_DWORD *)v95 = *(_DWORD *)v105; /*0x582914*/
        v52 = *(_DWORD *)v101 + v47 - 10; /*0x582918*/
      }
      else
      {
        LOWORD(v104) = v49; /*0x5828dc*/
        HIWORD(v104) = (_WORD)v115; /*0x5828e1*/
        *(_DWORD *)v95 = v104; /*0x5828ee*/
        v52 = *(_DWORD *)v101 + v47; /*0x5828f2*/
      }
    }
    if ( v50 || (int)v115 <= v106 || v49 < v99 || v49 > v100 ) /*0x582939*/
    {
      if ( v50 != (unsigned __int16)a4 && v50 != v97 ) /*0x5829ad*/
      {
        if ( v50 ) /*0x5829b5*/
        {
          v54 = *(unsigned __int8 *)(v52 + 8) - *(unsigned __int8 *)(v47 + 8); /*0x5829c9*/
          if ( (int)((HIDWORD(v54) ^ v54) - HIDWORD(v54)) < 2 ) /*0x5829d1*/
          {
            if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v95, 1) ) /*0x5829e2*/
            {
              v108[1] = (_WORD)v115 - 1; /*0x5829fd*/
              v108[0] = v51; /*0x582a07*/
              if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v108, 1) ) /*0x582a0c*/
              {
                v55 = (unsigned __int16)a4 | (v91 << 16); /*0x582a26*/
                if ( v49 < v99 || (LOBYTE(v113) = 0, v49 > v100) ) /*0x582a37*/
                  LOBYTE(v113) = 1; /*0x582a39*/
                v56 = *v102 + 24 * (a4 & 0xF | (16 * (v91 & 0xF))); /*0x582a52*/
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
    }
    else if ( *(__int16 *)(v47 + 6) == v98 ) /*0x582943*/
    {
      v53 = *(unsigned __int8 *)(v52 + 8) - *(unsigned __int8 *)(v47 + 8); /*0x582957*/
      if ( (int)((HIDWORD(v53) ^ v53) - HIDWORD(v53)) < 2 ) /*0x58295f*/
      {
        v107[0] = v51; /*0x58297f*/
        v107[1] = (_WORD)v115 - 1; /*0x582984*/
        Radar::ProcessSubzone(this, v47, a3, a4, a5, v107); /*0x582989*/
        goto LABEL_73; /*0x58298e*/
      }
    }
    v47 += 10; /*0x582abc*/
    ++v49; /*0x582abf*/
LABEL_73:
    v9 = v96; /*0x582ac0*/
  }
  while ( v49 <= v94 ); /*0x582aca*/
  if ( v96 <= v94 ) /*0x582ad2*/
  {
    v68 = v114; /*0x582ad8*/
    do /*0x582ae6*/
    {
      v69 = *(__int16 *)(v68 + 2 * a3); /*0x582ae6*/
      v92 = v69; /*0x582aea*/
      if ( v9 == v96 ) /*0x582aee*/
      {
        v108[0] = v9 + 1; /*0x582af9*/
        v108[1] = (__int16)v115; /*0x582b08*/
        v70 = *(_DWORD *)v108; /*0x582b0d*/
        v71 = v68 - *(_DWORD *)v101 + 10; /*0x582b11*/
      }
      else
      {
        if ( v9 < v94 ) /*0x582b1a*/
        {
          v72 = v115; /*0x582b20*/
          v107[0] = v9; /*0x582b29*/
          v71 = v68 - *(_DWORD *)v101; /*0x582b2e*/
          v107[1] = (__int16)v115; /*0x582b30*/
          *(_DWORD *)v95 = *(_DWORD *)v107; /*0x582b39*/
          goto LABEL_82; /*0x582b3d*/
        }
        v71 = v68 - 2 * (5 * v109 + 5); /*0x582b4d*/
        LOWORD(v106) = v9 - 1; /*0x582b52*/
        HIWORD(v106) = (_WORD)v115; /*0x582b5f*/
        v70 = v106; /*0x582b64*/
      }
      v72 = v115; /*0x582b68*/
      *(_DWORD *)v95 = v70; /*0x582b6f*/
LABEL_82:
      if ( v69 || (int)v72 >= v111 || v9 < v99 || v9 > v100 ) /*0x582b87*/
      {
        if ( v69 != (unsigned __int16)a4 && v69 != v97 ) /*0x582bfa*/
        {
          if ( v69 ) /*0x582c02*/
          {
            v74 = *(unsigned __int8 *)(v114 + 8) - *(unsigned __int8 *)(v71 + 8); /*0x582c18*/
            if ( (int)((HIDWORD(v74) ^ v74) - HIDWORD(v74)) < 2 ) /*0x582c20*/
            {
              if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v95, 1) ) /*0x582c33*/
              {
                LOWORD(v104) = v9; /*0x582c4a*/
                HIWORD(v104) = (_WORD)v72 + 1; /*0x582c4f*/
                if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&v104, 1) ) /*0x582c54*/
                {
                  v75 = (unsigned __int16)a4 | (v92 << 16); /*0x582c6e*/
                  if ( v9 < v99 || (LOBYTE(v113) = 0, v9 > v100) ) /*0x582c7f*/
                    LOBYTE(v113) = 1; /*0x582c81*/
                  v76 = *v102 + 24 * (a4 & 0xF | (16 * (v92 & 0xF))); /*0x582c9c*/
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
        }
        ++v9; /*0x582d09*/
        v114 += 10; /*0x582d0a*/
        v68 = v114; /*0x582d0e*/
      }
      else if ( *(__int16 *)(v68 + 6) == v98 /*0x582ba7*/
             && (v73 = *(unsigned __int8 *)(v68 + 8) - *(unsigned __int8 *)(v71 + 8),
                 (int)((HIDWORD(v73) ^ v73) - HIDWORD(v73)) < 2) )
      {
        v105[0] = v9; /*0x582bc3*/
        v105[1] = (_WORD)v72 + 1; /*0x582bc8*/
        Radar::ProcessSubzone(this, v68, a3, a4, a5, v105); /*0x582bcd*/
      }
      else
      {
        v68 += 10; /*0x582bd7*/
        ++v9; /*0x582bda*/
        v114 = v68; /*0x582bdb*/
      }
    }
    while ( v9 <= v94 ); /*0x582ae6*/
  }
  return v110; /*0x582d1e*/
}



// ==== 0x00582D30  ObjectClass::SmallFunc_582D30  this=ObjectClass  sig=csp ====
int __thiscall SmallFunc_582D30(ObjectClass *this, int a2)
{
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
      if ( *(_BYTE *)(v6 + v5 + 8) ) /*0x582d4c*/
        RadarClass::RenderBlips((RadarClass *)this, (int *)(v6 + v5), a2); /*0x582d57*/
      result = this->customSound_controller[4]; /*0x582d5c*/
      ++v3; /*0x582d5f*/
      v5 += 16; /*0x582d60*/
    }
    while ( v3 < result ); /*0x582d65*/
  }
  return result; /*0x582d69*/
}



// ==== 0x00582D70  RadarClass::RenderBlips  this=RadarClass  sig=csp ====
int __thiscall RadarClass::RenderBlips(RadarClass *this, int *a2, int a3)
{
  int v3; // ebx
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // eax
  Cell *v8; // eax
  Cell *v9; // esi
  int v10; // esi
  int v11; // ecx
  int v12; // esi
  __int16 v13; // ax
  unsigned int v14; // eax
  InfantryClass *v15; // eax
  InfantryClass *v16; // ecx
  int Type; // ebp
  unsigned int v18; // eax
  InfantryClass *v19; // eax
  InfantryClass *v20; // ecx
  int result; // eax
  int v22; // esi
  char v23; // al
  int v24; // ecx
  int v25; // esi
  _WORD *v26; // ebp
  _WORD *v27; // esi
  int v28; // eax
  int v29; // ecx
  int v30; // esi
  int v31; // eax
  int v32; // ecx
  RadarClass *v33; // ebp
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  _DWORD *v37; // esi
  RadarClass *v38; // ecx
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
  RadarClass *v49; // ecx
  int v50; // edx
  int v51; // eax
  int v52; // ecx
  int v53; // esi
  int v54; // eax
  int v55; // ecx
  int v56; // ecx
  __int16 v57[2]; // [esp+10h] [ebp-28h] BYREF
  __int16 v58[2]; // [esp+14h] [ebp-24h] BYREF
  int *v59; // [esp+18h] [ebp-20h]
  __int16 v60[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  __int16 v61[2]; // [esp+20h] [ebp-18h] BYREF
  int v62; // [esp+24h] [ebp-14h] BYREF
  RadarClass *v63; // [esp+28h] [ebp-10h]
  int v64; // [esp+2Ch] [ebp-Ch] BYREF
  int v65; // [esp+30h] [ebp-8h]
  char v66; // [esp+34h] [ebp-4h]

  v3 = a3; /*0x582d74*/
  v65 = 0; /*0x582d7d*/
  v66 = 0; /*0x582d85*/
  v63 = *(RadarClass **)&this->__pad_64[4 * a3 + 28]; /*0x582d91*/
  v5 = *a2; /*0x582d99*/
  v6 = a2[1]; /*0x582d9b*/
  a3 = v5; /*0x582d9e*/
  *(_DWORD *)v57 = v6; /*0x582da2*/
  v7 = (__int16)v5 + (SHIWORD(v5) << 9); /*0x582db1*/
  if ( v7 < 0x40000 && (v8 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v7)) != 0 ) /*0x582dc7*/
  {
    v9 = v8; /*0x582dc9*/
  }
  else
  {
    g_MissionQueueFrame.briefing[139] = v5; /*0x582dcd*/
    v9 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x582dd3*/
  }
  if ( (unsigned __int8)Cell::IsInRange(v9) || (unsigned __int8)Cell::IsInRange2(v9) ) /*0x582de9*/
  {
    v23 = Cell::IsInRange(v9); /*0x582f24*/
    v24 = g_Cell_BuildabilityLUT; /*0x582f29*/
    if ( !v23 ) /*0x582f34*/
      v24 = g_TerrainBridgeIndex; /*0x582f36*/
    v25 = dword_82A944[v9->Cell_field_0x38 - v24]; /*0x582f42*/
    v26 = (_WORD *)(4 * (v25 & 7) + 9041544); /*0x582f52*/
    *(_DWORD *)v58 = *CellStruct::Add((CellStruct *)&a3, &v62, v26); /*0x582f6c*/
    v27 = (_WORD *)(4 * (((_BYTE)v25 - 4) & 7) + 9041544); /*0x582f70*/
    a2 = (int *)*CellStruct::Add((CellStruct *)&a3, &v62, v27); /*0x582f8e*/
    *(_DWORD *)v60 = *CellStruct::Add((CellStruct *)v57, &v62, v26); /*0x582f9a*/
    *(_DWORD *)v61 = *CellStruct::Add((CellStruct *)v57, &v62, v27); /*0x582fae*/
  }
  else
  {
    v10 = *(_DWORD *)(InfantryClass::GetType((InfantryClass *)v9) + 44); /*0x582dfd*/
    v11 = *CellStruct::Add((CellStruct *)&a3, &v62, (_WORD *)(4 * (((_BYTE)v10 + 2) & 7) + 9041544)); /*0x582e1c*/
    v12 = ((_BYTE)v10 - 2) & 7; /*0x582e21*/
    *(_DWORD *)v58 = v11; /*0x582e24*/
    v62 = v11; /*0x582e28*/
    v13 = HIWORD(a3) + HIWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x582e44*/
    LOWORD(v59) = a3 + LOWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x582e49*/
    HIWORD(v59) = v13; /*0x582e4e*/
    a2 = v59; /*0x582e5c*/
    v14 = (__int16)v11 + (SHIWORD(v11) << 9); /*0x582e66*/
    if ( v14 < 0x40000 && (v15 = *(InfantryClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v14)) != 0 ) /*0x582e7c*/
    {
      v16 = v15; /*0x582e7e*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = v11; /*0x582e82*/
      v16 = (InfantryClass *)&g_MissionQueueFrame.briefing[130]; /*0x582e88*/
    }
    Type = InfantryClass::GetType(v16); /*0x582e96*/
    v18 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x582ea3*/
    if ( v18 < 0x40000 && (v19 = *(InfantryClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) != 0 ) /*0x582eb9*/
    {
      v20 = v19; /*0x582ebb*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = (int)a2; /*0x582ebf*/
      v20 = (InfantryClass *)&g_MissionQueueFrame.briefing[130]; /*0x582ec5*/
    }
    result = InfantryClass::GetType(v20); /*0x582eca*/
    v22 = result; /*0x582ed1*/
    if ( !Type || !result ) /*0x582edb*/
      return result; /*0x582edb*/
    *(_DWORD *)v60 = *WalkPathClassPath(&v62, (int *)v58, *(_DWORD *)(Type + 448), (int *)(Type + 48)); /*0x582efe*/
    *(_DWORD *)v61 = *WalkPathClassPath(&v62, (int *)&a2, *(_DWORD *)(v22 + 448), (int *)(v22 + 48)); /*0x582f19*/
  }
  v28 = Cell::CoordToIndex((Cell *)this, (__int16 *)&a3); /*0x582fb9*/
  if ( v28 >= 0 ) /*0x582fc0*/
  {
    v29 = *(_DWORD *)&this->__pad_64[8]; /*0x582fc6*/
    if ( v28 >= v29 ) /*0x582fcb*/
      v28 = v29 - 1; /*0x582fcd*/
  }
  else
  {
    v28 = 0; /*0x582fc2*/
  }
  v30 = *(__int16 *)(*(_DWORD *)&this->__pad_64[12] + 2 * (v3 + 4 * v28 + v28)); /*0x582fdd*/
  v31 = Cell::CoordToIndex((Cell *)this, v57); /*0x582fe3*/
  if ( v31 >= 0 ) /*0x582fea*/
  {
    v32 = *(_DWORD *)&this->__pad_64[8]; /*0x582ff0*/
    if ( v31 >= v32 ) /*0x582ff5*/
      v31 = v32 - 1; /*0x582ff7*/
  }
  else
  {
    v31 = 0; /*0x582fec*/
  }
  v33 = v63; /*0x583002*/
  v34 = *(__int16 *)(*(_DWORD *)&this->__pad_64[12] + 2 * (v3 + 4 * v31 + v31)); /*0x583006*/
  v35 = v34 | (v30 << 16); /*0x583012*/
  v64 = v35; /*0x58301c*/
  v65 = v35; /*0x583020*/
  v66 = 0; /*0x583024*/
  v36 = 3 * (v34 & 0xF | (16 * (v30 & 0xF))); /*0x58302c*/
  v37 = (_DWORD *)*((_DWORD *)v63->RadarClass_field_0x0 + 2 * v36 + 1); /*0x58302f*/
  v38 = (RadarClass *)((char *)v63->RadarClass_field_0x0 + 8 * v36); /*0x583033*/
  v39 = (int)v38->RadarClass_field_0x10 - 1; /*0x583039*/
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
  v40 = Cell::CoordToIndex((Cell *)this, v58); /*0x583057*/
  if ( v40 >= 0 ) /*0x58305e*/
  {
    v41 = *(_DWORD *)&this->__pad_64[8]; /*0x583064*/
    if ( v40 >= v41 ) /*0x583069*/
      v40 = v41 - 1; /*0x58306b*/
  }
  else
  {
    v40 = 0; /*0x583060*/
  }
  v42 = *(__int16 *)(*(_DWORD *)&this->__pad_64[12] + 2 * (v3 + 4 * v40 + v40)); /*0x58307b*/
  v43 = Cell::CoordToIndex((Cell *)this, v60); /*0x583081*/
  if ( v43 >= 0 ) /*0x583088*/
  {
    v44 = *(_DWORD *)&this->__pad_64[8]; /*0x58308e*/
    if ( v43 >= v44 ) /*0x583093*/
      v43 = v44 - 1; /*0x583095*/
  }
  else
  {
    v43 = 0; /*0x58308a*/
  }
  v45 = *(__int16 *)(*(_DWORD *)&this->__pad_64[12] + 2 * (v3 + 4 * v43 + v43)); /*0x5830a0*/
  v46 = v45 | (v42 << 16); /*0x5830ac*/
  v64 = v46; /*0x5830b6*/
  v65 = v46; /*0x5830ba*/
  v66 = 0; /*0x5830be*/
  v47 = 3 * (v45 & 0xF | (16 * (v42 & 0xF))); /*0x5830c6*/
  v48 = (_DWORD *)*((_DWORD *)v33->RadarClass_field_0x0 + 2 * v47 + 1); /*0x5830c9*/
  v49 = (RadarClass *)((char *)v33->RadarClass_field_0x0 + 8 * v47); /*0x5830cd*/
  v50 = (int)v49->RadarClass_field_0x10 - 1; /*0x5830d3*/
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
  v51 = Cell::CoordToIndex((Cell *)this, (__int16 *)&a2); /*0x5830f1*/
  if ( v51 >= 0 ) /*0x5830f8*/
  {
    v52 = *(_DWORD *)&this->__pad_64[8]; /*0x5830fe*/
    if ( v51 >= v52 ) /*0x583103*/
      v51 = v52 - 1; /*0x583105*/
  }
  else
  {
    v51 = 0; /*0x5830fa*/
  }
  v53 = *(__int16 *)(*(_DWORD *)&this->__pad_64[12] + 2 * (v3 + 4 * v51 + v51)); /*0x583115*/
  v54 = Cell::CoordToIndex((Cell *)this, v61); /*0x58311b*/
  if ( v54 >= 0 ) /*0x583122*/
  {
    v55 = *(_DWORD *)&this->__pad_64[8]; /*0x583128*/
    if ( v54 >= v55 ) /*0x58312d*/
      v54 = v55 - 1; /*0x58312f*/
  }
  else
  {
    v54 = 0; /*0x583124*/
  }
  v56 = *(__int16 *)(*(_DWORD *)&this->__pad_64[12] + 2 * (v3 + 4 * v54 + v54)); /*0x58313a*/
  v64 = v56 | (v53 << 16); /*0x58314b*/
  v65 = v64; /*0x58314f*/
  v66 = 0; /*0x583160*/
  LOBYTE(result) = RadarClass::updateRadarCells(v33, v56 & 0xF | (16 * (v53 & 0xF)), &v64); /*0x583165*/
  return result; /*0x58316a*/
}



// ==== 0x00583180  Pathfinding::CrossBridge  this=Pathfinding  sig=csp ====
int *__stdcall Pathfinding_CrossBridge(int *a1, int a2, int a3)
{
  int *NeighbourContent; // ebx
  _WORD *v4; // edi
  int Region; // esi
  int v6; // eax
  int *result; // eax
  int v8; // eax
  char *v9; // esi
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
  __int16 v20; // [esp+20h] [ebp+8h]
  int v21; // [esp+20h] [ebp+8h]
  int v22; // [esp+20h] [ebp+8h]

  NeighbourContent = (int *)a2; /*0x583185*/
  if ( (_BYTE)a3 && (*(_DWORD *)(a2 + 320) & 0x100) != 0 )
  {
    v4 = (_WORD *)(a2 + 36); /*0x5831a5*/
    Region = GetRegionMap((int *)&dword_87F7E8, (__int16 *)(a2 + 36), 2, 0); /*0x5831b7*/
    if ( Region != -1 || (v6 = *(_DWORD *)FindCliffSeedCell(&a3, a2 + 36, a2 + 36), a3 = v6, v6 == dword_ABD480) )
    {
      v8 = *(_DWORD *)(a2 + 320); /*0x5831fe*/
      v9 = (char *)dword_87F83C + 16 * Region; /*0x583207*/
      if ( (v8 & 0x800) != 0 ) /*0x58320c*/
      {
        v10 = *(_WORD *)(a2 + 38); /*0x58320e*/
        LOWORD(a3) = 0; /*0x583212*/
        HIWORD(a3) = v10 - *((_WORD *)v9 + 1); /*0x58321d*/
      }
      else
      {
        a3 = (unsigned __int16)(*v4 - *(_WORD *)v9); /*0x583235*/
      }
      v11 = a3; /*0x583222*/
      if ( v9[8] )
      {
        v12 = HIWORD(a3); /*0x583251*/
        v13 = (double)(__int16)(HIWORD(a3) + *((_WORD *)v9 + 1) - *(_WORD *)(a2 + 38)); /*0x583273*/
        a3 = (__int16)(a3 + *(_WORD *)v9 - *v4); /*0x583277*/
        v14 = Math::Sqrt((double)a3 * (double)a3 + v13 * v13); /*0x583290*/
        v20 = Math::RoundToInt(v14); /*0x58329e*/
        v15 = (double)(__int16)(v12 + *((_WORD *)v9 + 3) - v4[1]); /*0x5832bd*/
        a3 = (__int16)(v11 + *((_WORD *)v9 + 2) - *v4); /*0x5832c1*/
        v16 = Math::Sqrt((double)a3 * (double)a3 + v15 * v15); /*0x5832da*/
        if ( v20 >= (__int16)Math::RoundToInt(v16) ) /*0x5832ec*/
        {
          v18 = *((_WORD *)v9 + 2) + v11; /*0x58331a*/
          HIWORD(a3) = v12 + *((_WORD *)v9 + 3); /*0x583322*/
          result = a1; /*0x583327*/
          LOWORD(a3) = v18; /*0x58332b*/
        }
        else
        {
          v17 = *((_WORD *)v9 + 1); /*0x5832f1*/
          LOWORD(a3) = v11 + *(_WORD *)v9; /*0x5832fb*/
          result = a1; /*0x583300*/
          HIWORD(a3) = v12 + v17; /*0x583304*/
        }
        *a1 = a3; /*0x583310*/
      }
      else
      {
        v19 = *((_WORD *)v9 + 2) != *(_WORD *)v9 ? 2 : 4;
        if ( (v8 & 0x100) != 0 ) /*0x583351*/
        {
          do /*0x583366*/
            NeighbourContent = (int *)Cell::GetNeighbourContent(NeighbourContent, v19); /*0x58335b*/
          while ( (NeighbourContent[80] & 0x100) != 0 ); /*0x583366*/
        }
        if ( (Cell::IsInRange(NeighbourContent) || Cell::IsInRange2(NeighbourContent)) && NeighbourContent[59] != 3 ) /*0x583385*/
        {
          LOWORD(v21) = v11 + *((_WORD *)v9 + 2); /*0x583397*/
          HIWORD(v21) = HIWORD(a3) + *((_WORD *)v9 + 3); /*0x58339d*/
          *a1 = v21; /*0x5833ac*/
          return a1; /*0x5833a2*/
        }
        else
        {
          LOWORD(v22) = v11 + *(_WORD *)v9; /*0x5833c1*/
          HIWORD(v22) = HIWORD(a3) + *((_WORD *)v9 + 1); /*0x5833c7*/
          *a1 = v22; /*0x5833d6*/
          return a1; /*0x5833cc*/
        }
      }
    }
    else
    {
      *a1 = v6; /*0x5831f0*/
      return a1; /*0x5831f2*/
    }
  }
  else
  {
    *a1 = *(_DWORD *)(a2 + 36); /*0x5833e6*/
    return a1; /*0x5833dc*/
  }
  return result; /*0x5831ed*/
}



// ==== 0x005833F0  Pathfinding::SelectRegionPath  this=Pathfinding  sig=csp ====
int *__stdcall Pathfinding_SelectRegionPath(int *a1, __int16 *a2, int a3)
{
  int Region; // eax
  char *v4; // esi
  _WORD *v5; // edi
  double v6; // st7
  double v7; // st7
  __int16 v8; // bx
  double v9; // st7
  double v10; // st7
  unsigned int v12; // edi
  unsigned int v13; // eax
  int *v14; // eax
  int *NeighbourContent; // ebx
  int v16; // eax

  Region = GetRegionMap((int *)&dword_87F7E8, a2, 1, 0); /*0x583404*/
  if ( Region == -1 )
  {
    v16 = *(_DWORD *)FindCliffSeedCell(&a3, a2, a3); /*0x583590*/
    a3 = v16; /*0x583599*/
    if ( v16 == dword_ABD480 ) /*0x58359d*/
    {
      *a1 = *(_DWORD *)a2; /*0x5835c6*/
      return a1; /*0x5835bc*/
    }
    else
    {
      *a1 = v16; /*0x5835b4*/
      return a1; /*0x5835b6*/
    }
  }
  else
  {
    v4 = (char *)dword_87F83C + 16 * Region; /*0x58341d*/
    if ( v4[8] )
    {
      v5 = (_WORD *)a3; /*0x58342a*/
      v6 = (double)(__int16)(*(_WORD *)(a3 + 2) - *((_WORD *)v4 + 1)); /*0x583449*/
      a3 = (__int16)(*(_WORD *)a3 - *(_WORD *)v4); /*0x58344d*/
      v7 = Math::Sqrt((double)a3 * (double)a3 + v6 * v6); /*0x583466*/
      v8 = Math::RoundToInt(v7); /*0x583470*/
      v9 = (double)(__int16)(v5[1] - *((_WORD *)v4 + 3)); /*0x58348b*/
      a3 = (__int16)(*v5 - *((_WORD *)v4 + 2)); /*0x58348f*/
      v10 = Math::Sqrt((double)a3 * (double)a3 + v9 * v9); /*0x5834a8*/
      if ( v8 >= (__int16)Math::RoundToInt(v10) ) /*0x5834b8*/
      {
        *a1 = *((_DWORD *)v4 + 1); /*0x5834d3*/
        return a1; /*0x5834cc*/
      }
      else
      {
        *a1 = *(_DWORD *)v4; /*0x5834c3*/
        return a1; /*0x5834bc*/
      }
    }
    else
    {
      v12 = *((_WORD *)v4 + 2) != *(_WORD *)v4 ? 2 : 4;
      v13 = *a2 + (a2[1] << 9); /*0x5834f6*/
      if ( v13 < 0x40000 && (v14 = *(int **)(dword_87F924 + 4 * v13)) != 0 ) /*0x58350c*/
      {
        NeighbourContent = v14; /*0x58350e*/
      }
      else
      {
        NeighbourContent = (int *)&unk_ABDC50; /*0x583515*/
        dword_ABDC74 = *(_DWORD *)a2; /*0x58351a*/
      }
      for ( ; /*0x58352c*/
            (NeighbourContent[80] & 0x100) != 0;
            NeighbourContent = (int *)Cell::GetNeighbourContent(NeighbourContent, v12) )
      {
        ; /*0x583536*/
      }
      if ( (Cell::IsInRange(NeighbourContent) || Cell::IsInRange2(NeighbourContent)) && NeighbourContent[59] != 3 ) /*0x58355d*/
      {
        *a1 = *((_DWORD *)v4 + 1); /*0x583569*/
        return a1; /*0x583562*/
      }
      else
      {
        *a1 = *(_DWORD *)v4; /*0x583578*/
        return a1; /*0x583571*/
      }
    }
  }
}



// ==== 0x005835D0  FindCliffSeedCell  this=-  sig=csp ====
int *__stdcall FindCliffSeedCell(int *a1, __int16 *a2, int a3)
{
  unsigned int v3; // eax
  int *v4; // eax
  int *v5; // ecx
  int v7; // eax
  unsigned int v8; // eax
  int *NeighbourContent; // edi
  _DWORD *v10; // ebp
  _DWORD *v11; // ebx
  int *v12; // esi
  int v13; // ebx
  _WORD *v14; // esi
  double v15; // st7
  double v16; // st7
  __int16 v17; // di
  __int16 v18; // ax
  double v19; // st7
  double v20; // st7
  int v21; // [esp+18h] [ebp-Ch] BYREF
  int v22; // [esp+1Ch] [ebp-8h]
  unsigned int v23; // [esp+20h] [ebp-4h]

  v3 = *a2 + (a2[1] << 9); /*0x5835e1*/
  if ( v3 < 0x40000 && (v4 = *(int **)(dword_87F924 + 4 * v3)) != 0 ) /*0x5835f7*/
  {
    v5 = v4; /*0x5835f9*/
  }
  else
  {
    v5 = unk_ABDC50; /*0x5835ff*/
    dword_ABDC74 = *(_DWORD *)a2; /*0x583604*/
  }
  if ( (v5[80] & 0x100) != 0 ) /*0x583618*/
  {
    v7 = -((v5[80] & 0x800) != 0); /*0x583631*/
    LOBYTE(v7) = v7 & 0xFE; /*0x583634*/
    v8 = v7 + 4; /*0x583637*/
    NeighbourContent = v5; /*0x58363b*/
    v22 = v8; /*0x58363d*/
    v10 = v5 + 80; /*0x583644*/
    v11 = v5 + 80; /*0x583649*/
    v23 = ((_BYTE)v8 - 4) & 7; /*0x58364b*/
    v12 = v5; /*0x58364f*/
    a2 = (__int16 *)dword_ABD480; /*0x583657*/
    v21 = dword_ABD480; /*0x58365b*/
    while ( 1 ) /*0x583665*/
    {
      if ( (*v10 & 0x100) != 0 ) /*0x58366b*/
      {
        NeighbourContent = (int *)Cell::GetNeighbourContent(NeighbourContent, v8); /*0x583675*/
        v10 = NeighbourContent + 80; /*0x583680*/
        if ( (NeighbourContent[80] & 0x100) == 0 /*0x5836a5*/
          && (Cell::IsInRange(NeighbourContent) || Cell::IsInRange2(NeighbourContent))
          && NeighbourContent[59] != 3 )
        {
          a2 = (__int16 *)NeighbourContent[9]; /*0x5836aa*/
        }
      }
      if ( (*v11 & 0x100) == 0 ) /*0x5836b3*/
        goto LABEL_22; /*0x5836b3*/
      v12 = (int *)Cell::GetNeighbourContent(v12, v23); /*0x5836c1*/
      v11 = v12 + 80; /*0x5836cc*/
      if ( (v12[80] & 0x100) == 0 ) /*0x5836d2*/
      {
        if ( (Cell::IsInRange(v12) || Cell::IsInRange2(v12)) && v12[59] != 3 ) /*0x5836f1*/
          v21 = v12[9]; /*0x5836f6*/
        if ( (*v11 & 0x100) == 0 ) /*0x5836ff*/
        {
LABEL_22:
          if ( (*v10 & 0x100) == 0 ) /*0x58370b*/
            break; /*0x58370b*/
        }
      }
      v8 = v22; /*0x583661*/
    }
    v13 = dword_ABD480; /*0x583711*/
    v22 = dword_ABD480; /*0x583723*/
    if ( LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)&a2, 1) ) /*0x583727*/
    {
      v13 = (int)a2; /*0x583730*/
      v22 = (int)a2; /*0x583734*/
    }
    if ( LayerClass::IsWithinUsableArea(&dword_87F7E8, (__int16 *)&v21, 1) ) /*0x583744*/
    {
      if ( __PAIR32__(HIWORD(v22), v13) == dword_ABD480 ) /*0x583758*/
        goto LABEL_28; /*0x583758*/
      v14 = (_WORD *)a3; /*0x58376c*/
      v15 = (double)(__int16)(HIWORD(v21) - *(_WORD *)(a3 + 2)); /*0x58378e*/
      a3 = (__int16)(v21 - *(_WORD *)a3); /*0x583792*/
      v16 = Math::Sqrt((double)a3 * (double)a3 + v15 * v15); /*0x5837ab*/
      v17 = Math::RoundToInt(v16); /*0x5837ba*/
      v18 = (_WORD)a2 - *v14; /*0x5837c5*/
      a3 = (__int16)(HIWORD(a2) - v14[1]); /*0x5837ce*/
      v19 = (double)a3; /*0x5837d2*/
      a3 = v18; /*0x5837d6*/
      v20 = Math::Sqrt((double)v18 * (double)v18 + v19 * v19); /*0x5837ef*/
      if ( v17 < (__int16)Math::RoundToInt(v20) ) /*0x5837ff*/
LABEL_28:
        v13 = v21; /*0x583801*/
    }
    *a1 = v13; /*0x58380c*/
    return a1; /*0x583805*/
  }
  else
  {
    *a1 = v5[9]; /*0x583621*/
    return a1; /*0x58361a*/
  }
}



// ==== 0x00583820  Pathfinding::CheckCliff  this=Pathfinding  sig=csp ====
_DWORD *__thiscall Pathfinding::CheckCliff(Pathfinding *this, _DWORD *a2, __int16 *a3, int a4, int a5)
{
  unsigned int v5; // eax
  int *v6; // eax
  int *v7; // ecx
  char *NeighbourContent; // ebx
  int v10; // eax
  Cell *v11; // edi
  unsigned int v12; // esi
  int v13; // edx
  int v14; // ebp
  int v15; // esi
  _WORD *v16; // ecx
  int v17; // edi
  __int16 **i; // esi
  int v19; // eax
  int v20; // edx
  _DWORD *p_Cell_field_0x140; // [esp+0h] [ebp-28h]
  _DWORD *v22; // [esp+4h] [ebp-24h]
  int v23; // [esp+4h] [ebp-24h]
  int v24; // [esp+8h] [ebp-20h]
  _DWORD v26[6]; // [esp+10h] [ebp-18h] BYREF

  v5 = *a3 + (a3[1] << 9); /*0x583835*/
  if ( v5 < 0x40000 && (v6 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v5)) != 0 ) /*0x58384b*/
  {
    v7 = v6; /*0x58384d*/
  }
  else
  {
    v7 = &g_MissionQueueFrame.briefing[130]; /*0x583853*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a3; /*0x583858*/
  }
  if ( (v7[80] & 0x100) != 0 ) /*0x583870*/
  {
    NeighbourContent = (char *)v7; /*0x58388a*/
    v10 = -((v7[80] & 0x800) != 0); /*0x58388e*/
    v11 = (Cell *)v7; /*0x583890*/
    LOBYTE(v10) = v10 & 0xFE; /*0x583892*/
    v22 = v7 + 80; /*0x583894*/
    p_Cell_field_0x140 = v7 + 80; /*0x58389b*/
    v12 = v10 + 4; /*0x58389f*/
    a3 = *(__int16 **)&g_MissionQueueFrame.waypoints[2134]; /*0x5838a6*/
    v24 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x5838aa*/
    do /*0x58396c*/
    {
      if ( (*v22 & 0x100) != 0 ) /*0x5838bd*/
      {
        NeighbourContent = (char *)Cell::GetNeighbourContent((Cell *)NeighbourContent, v12); /*0x5838c7*/
        v22 = NeighbourContent + 320; /*0x5838d8*/
        if ( (*((_DWORD *)NeighbourContent + 80) & 0x100) == 0 /*0x5838fb*/
          && ((unsigned __int8)Cell::IsInRange((Cell *)NeighbourContent)
           || (unsigned __int8)Cell::IsInRange2((Cell *)NeighbourContent))
          && *((_DWORD *)NeighbourContent + 59) != 3 )
        {
          a3 = (__int16 *)*((_DWORD *)NeighbourContent + 9); /*0x583900*/
        }
      }
      if ( (*p_Cell_field_0x140 & 0x100) != 0 ) /*0x58390d*/
      {
        v11 = (Cell *)Cell::GetNeighbourContent(v11, ((_BYTE)v12 - 4) & 7); /*0x583917*/
        p_Cell_field_0x140 = &v11->Cell_field_0x140; /*0x583928*/
        if ( ((int)v11->Cell_field_0x140 & 0x100) == 0 /*0x58394b*/
          && ((unsigned __int8)Cell::IsInRange(v11) || (unsigned __int8)Cell::IsInRange2(v11))
          && *(_DWORD *)&v11->__pad_E8[4] != 3 )
        {
          v24 = *(_DWORD *)&v11->__pad_1C[8]; /*0x583950*/
        }
      }
    }
    while ( (*p_Cell_field_0x140 & 0x100) != 0 || (*v22 & 0x100) != 0 ); /*0x58396c*/
    v13 = ((_BYTE)v12 + 2) & 7; /*0x583979*/
    v26[0] = a3; /*0x58397c*/
    v14 = a5; /*0x583983*/
    v15 = ((_BYTE)v12 - 2) & 7; /*0x58399b*/
    LOWORD(v23) = LOWORD(g_DDrawSurfaceManager.scenario[v13 + 82]) + (_WORD)a3; /*0x58399e*/
    HIWORD(v23) = HIWORD(a3) + HIWORD(g_DDrawSurfaceManager.scenario[v13 + 82]); /*0x5839aa*/
    v26[1] = v23; /*0x5839b3*/
    v16 = (_WORD *)(4 * v15 + 9041544); /*0x5839b7*/
    LOWORD(a3) = (_WORD)a3 + LOWORD(g_DDrawSurfaceManager.scenario[v15 + 82]); /*0x5839cb*/
    HIWORD(a3) += HIWORD(g_DDrawSurfaceManager.scenario[v15 + 82]); /*0x5839d7*/
    LOWORD(v15) = g_DDrawSurfaceManager.scenario[v13 + 82]; /*0x5839e0*/
    v26[2] = a3; /*0x5839e3*/
    v26[3] = v24; /*0x5839ee*/
    LOWORD(a3) = v24 + v15; /*0x5839f2*/
    HIWORD(a3) = HIWORD(v24) + HIWORD(g_DDrawSurfaceManager.scenario[v13 + 82]); /*0x583a03*/
    v26[4] = a3; /*0x583a0c*/
    LOWORD(v15) = *v16; /*0x583a10*/
    LOWORD(v16) = HIWORD(v24) + v16[1]; /*0x583a1a*/
    LOWORD(a3) = v24 + v15; /*0x583a1d*/
    HIWORD(a3) = (_WORD)v16; /*0x583a22*/
    v26[5] = a3; /*0x583a2b*/
    v17 = 0; /*0x583a2f*/
    for ( i = (__int16 **)v26; ; ++i ) /*0x583a31*/
    {
      a3 = *i; /*0x583a43*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3, 1) ) /*0x583a47*/
      {
        v19 = (__int16)a3 + SHIWORD(a3) * (*((_DWORD *)this + 62) + *((_DWORD *)this + 61) + 1); /*0x583a73*/
        if ( v19 >= 0 ) /*0x583a75*/
        {
          v20 = *((_DWORD *)this + 27); /*0x583a7b*/
          if ( v19 >= v20 ) /*0x583a80*/
            v19 = v20 - 1; /*0x583a82*/
        }
        else
        {
          v19 = 0; /*0x583a77*/
        }
        if ( *(__int16 *)(*((_DWORD *)this + 28) + 2 * (a4 + 4 * v19 + v19)) == v14 ) /*0x583a97*/
          break; /*0x583a97*/
      }
      if ( ++v17 >= 6 ) /*0x583aa0*/
      {
        *a2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x583aaf*/
        return a2; /*0x583ab5*/
      }
    }
    *a2 = a3; /*0x583abf*/
    return a2; /*0x583ab8*/
  }
  else
  {
    *a2 = v7[9]; /*0x58387c*/
    return a2; /*0x583872*/
  }
}



// ==== 0x00583AD0  ObjectClass::method_583AD0  this=ObjectClass  sig=csp ====
int __thiscall sub_583AD0(ObjectClass *this, int *a2)
{
  __int16 *i; // eax
  int TileIndex; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int Capacity; // eax
  int v10; // eax
  void *Items; // ebp
  int v12; // esi
  int v13; // edx
  int v14; // eax
  int *v15; // edi
  int v16; // esi
  VectorClass v18; // [esp+10h] [ebp-18h] BYREF
  int v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  VectorClass::Construct(&v18, 0, 0); /*0x583ae1*/
  v18.vtable0 = &DynamicVectorClass<int>::`vftable'; /*0x583af1*/
  v20 = 10; /*0x583af9*/
  v19 = 0; /*0x583b05*/
  *(_DWORD *)&stru_87F5F0.__pad_58[700] = *(_DWORD *)&stru_87F5F0.__pad_58[668] /*0x583b0d*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[672]
                                        + 1;
  *(_DWORD *)&stru_87F5F0.__pad_58[704] = *(_DWORD *)&stru_87F5F0.__pad_58[672] /*0x583b22*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[660]
                                        - *(_DWORD *)&stru_87F5F0.__pad_58[668];
  for ( i = (__int16 *)MapClass::SpiralSearch((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x583b2f*/
        i;
        i = (__int16 *)MapClass::SpiralSearch((MapClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( *((_DWORD *)i + 19) == 4 ) /*0x583b39*/
    {
      TileIndex = MapClass::GetTileIndex((MapClass *)this, i + 18, 10, 0); /*0x583b49*/
      v5 = TileIndex; /*0x583b4e*/
      if ( TileIndex >= 0 ) /*0x583b52*/
      {
        v6 = v19; /*0x583b54*/
        if ( TileIndex >= v19 ) /*0x583b5a*/
        {
          v7 = TileIndex - v19 + 1; /*0x583b5e*/
          if ( v7 > 0 ) /*0x583b61*/
          {
            v8 = v7; /*0x583b63*/
            Capacity = v18.Capacity; /*0x583b65*/
            while ( 1 ) /*0x583b6f*/
            {
              if ( v6 < Capacity ) /*0x583b71*/
                goto LABEL_13; /*0x583b71*/
              if ( (v18.IsAllocated || !Capacity) && v20 > 0 ) /*0x583b85*/
                break; /*0x583b85*/
LABEL_15:
              if ( !--v8 ) /*0x583bb6*/
                goto LABEL_16; /*0x583bb6*/
              v6 = v19; /*0x583b6b*/
            }
            if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v18.vtable0 + 2))( /*0x583b94*/
                   &v18,
                   v20 + Capacity,
                   0) )
            {
LABEL_13:
              v10 = v19++; /*0x583b9b*/
              *((_DWORD *)v18.Items + v10) = 0; /*0x583baa*/
            }
            Capacity = v18.Capacity; /*0x583bb1*/
            goto LABEL_15; /*0x583bb1*/
          }
        }
LABEL_16:
        ++*((_DWORD *)v18.Items + v5); /*0x583bb8*/
      }
    }
  }
  Items = v18.Items; /*0x583bd1*/
  v12 = -1; /*0x583bd9*/
  v13 = 0; /*0x583bdc*/
  v14 = 0; /*0x583bde*/
  if ( v19 > 0 ) /*0x583be2*/
  {
    v15 = (int *)v18.Items; /*0x583be4*/
    do /*0x583bf6*/
    {
      if ( *v15 > v13 ) /*0x583bea*/
      {
        v12 = v14; /*0x583bec*/
        v13 = *v15; /*0x583bee*/
      }
      ++v14; /*0x583bf0*/
      ++v15; /*0x583bf1*/
    }
    while ( v14 < v19 ); /*0x583bf6*/
  }
  *a2 = v12; /*0x583bfe*/
  if ( v12 < 0 ) /*0x583c00*/
  {
    v18.vtable0 = &VectorClass<int>::`vftable'; /*0x583c31*/
    if ( Items && v18.IsAllocated ) /*0x583c41*/
      __3_YAXPAX_Z(Items); /*0x583c44*/
    return 0; /*0x583c4f*/
  }
  else
  {
    v16 = *((_DWORD *)Items + v12); /*0x583c02*/
    v18.vtable0 = &VectorClass<int>::`vftable'; /*0x583c06*/
    if ( Items ) /*0x583c10*/
    {
      if ( v18.IsAllocated ) /*0x583c18*/
        __3_YAXPAX_Z(Items); /*0x583c1b*/
    }
    return v16; /*0x583c23*/
  }
}



// ==== 0x00583C60  ObjectClass::CollectMatchingTileCells  this=ObjectClass  sig=csp ====
int __thiscall CollectMatchingTileCells(
        ObjectClass *this,
        _WORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
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
  TileVector *v18; // edi
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
  TileVector v30; // ecx
  int v31; // eax
  TileVector v32; // eax
  TileVector v33; // edx
  __int16 v34; // bx
  __int16 v35; // ax
  _WORD *v36; // eax
  _DWORD *v37; // eax
  __int16 v38[2]; // [esp+10h] [ebp-70h] BYREF
  int v39; // [esp+14h] [ebp-6Ch]
  int v40; // [esp+18h] [ebp-68h]
  MapClass *v41; // [esp+1Ch] [ebp-64h]
  __int16 v42[2]; // [esp+20h] [ebp-60h]
  int v43; // [esp+24h] [ebp-5Ch]
  int v44; // [esp+28h] [ebp-58h]
  int v45; // [esp+2Ch] [ebp-54h]
  __int16 v46; // [esp+30h] [ebp-50h] BYREF
  __int16 v47; // [esp+34h] [ebp-4Ch] BYREF
  __int16 v48; // [esp+38h] [ebp-48h] BYREF
  int v49; // [esp+3Ch] [ebp-44h] BYREF
  _DWORD v50[5]; // [esp+40h] [ebp-40h] BYREF
  int v51; // [esp+54h] [ebp-2Ch]
  int v52; // [esp+64h] [ebp-1Ch]
  Rect v53; // [esp+70h] [ebp-10h] BYREF

  v41 = (MapClass *)this; /*0x583c63*/
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
          v11 = a2[1] + v10; /*0x583cab*/
          LOWORD(v43) = *a2 + result; /*0x583caf*/
          HIWORD(v43) = v11; /*0x583cbb*/
          *(_DWORD *)v38 = v43; /*0x583cce*/
          if ( MapClass::GetTileIndex(v41, v38, a5, 0) == a6 ) /*0x583cde*/
          {
            v12 = v38[0]; /*0x583ce9*/
            v51 = v38[1]; /*0x583cee*/
            v13 = 0; /*0x583cf9*/
            if ( a9 <= 0 ) /*0x583cfd*/
            {
LABEL_15:
              v18 = (TileVector *)a7; /*0x583d55*/
              v19 = *(_DWORD *)(a7 + 8); /*0x583d5c*/
              if ( *(_DWORD *)(a7 + 16) < v19 /*0x583d81*/
                || (*(_BYTE *)(a7 + 13) || !v19)
                && (v20 = *(_DWORD *)(a7 + 20), v20 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a7 + 8))(a7, v19 + v20, 0) )
              {
                v21 = *(_DWORD *)(a7 + 16); /*0x583d88*/
                v22 = *(_DWORD *)(a7 + 4); /*0x583d8b*/
                *(_DWORD *)(a7 + 16) = v21 + 1; /*0x583d91*/
                *(_DWORD *)(v22 + 4 * v21) = *(_DWORD *)v38; /*0x583d98*/
              }
            }
            else
            {
              while ( 1 ) /*0x583d06*/
              {
                v14 = 0; /*0x583d06*/
                if ( a8 > 0 ) /*0x583d0a*/
                  break; /*0x583d0a*/
LABEL_13:
                if ( ++v13 >= a9 ) /*0x583d4f*/
                {
                  v10 = v39; /*0x583d51*/
                  goto LABEL_15; /*0x583d51*/
                }
              }
              v15 = v51 + v13; /*0x583d10*/
              while ( 1 ) /*0x583d1c*/
              {
                v16 = CellStruct::Set((CellStruct *)&v46, v14 + v12, v15); /*0x583d1c*/
                v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16) + 19); /*0x583d2c*/
                if ( v17 != 4 && v17 != 3 ) /*0x583d37*/
                  break; /*0x583d37*/
                if ( ++v14 >= a8 ) /*0x583d43*/
                  goto LABEL_13; /*0x583d43*/
              }
              v18 = (TileVector *)a7; /*0x583da6*/
              v10 = v39; /*0x583dad*/
            }
          }
          else
          {
            v18 = (TileVector *)a7; /*0x583d9d*/
          }
          v23 = *a2 - v40; /*0x583dc7*/
          HIWORD(v44) = a2[1] + v10; /*0x583dd1*/
          LOWORD(v44) = v23; /*0x583dda*/
          *(_DWORD *)v38 = v44; /*0x583de9*/
          if ( MapClass::GetTileIndex(v41, v38, a5, 0) == a6 ) /*0x583df9*/
          {
            v24 = v38[0]; /*0x583e04*/
            v52 = v38[1]; /*0x583e09*/
            v25 = 0; /*0x583e14*/
            if ( a9 <= 0 ) /*0x583e18*/
            {
LABEL_32:
              v30 = v18[2]; /*0x583e73*/
              if ( *(_DWORD *)&v18[4] < *(_DWORD *)&v30 /*0x583e98*/
                || (v18[3].__tail_0[1] || !*(_DWORD *)&v30)
                && (v31 = (int)v18[5], v31 > 0)
                && (*(unsigned __int8 (__thiscall **)(TileVector *, int, _DWORD))(*(_DWORD *)v18 + 8))(
                     v18,
                     *(_DWORD *)&v30 + v31,
                     0) )
              {
                v32 = v18[4]; /*0x583e9f*/
                v33 = v18[1]; /*0x583ea2*/
                v18[4] = (TileVector)(*(_DWORD *)&v32 + 1); /*0x583ea8*/
                *(_DWORD *)(*(_DWORD *)&v33 + 4 * *(_DWORD *)&v32) = *(_DWORD *)v38; /*0x583eaf*/
              }
            }
            else
            {
              while ( 1 ) /*0x583e21*/
              {
                v26 = 0; /*0x583e21*/
                if ( a8 > 0 ) /*0x583e25*/
                  break; /*0x583e25*/
LABEL_31:
                if ( ++v25 >= a9 ) /*0x583e71*/
                  goto LABEL_32; /*0x583e71*/
              }
              v27 = v52 + v25; /*0x583e2b*/
              while ( 1 ) /*0x583e37*/
              {
                v28 = CellStruct::Set((CellStruct *)&v47, v26 + v24, v27); /*0x583e37*/
                v29 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28) + 19); /*0x583e47*/
                if ( v29 != 4 && v29 != 3 ) /*0x583e52*/
                  break; /*0x583e52*/
                if ( ++v26 >= a8 ) /*0x583e5e*/
                {
                  v18 = (TileVector *)a7; /*0x583e60*/
                  goto LABEL_31; /*0x583e60*/
                }
              }
              v18 = (TileVector *)a7; /*0x583eb4*/
            }
            v10 = v39; /*0x583ebb*/
          }
          if ( v10 != v40 ) /*0x583ec5*/
          {
            v34 = v42[0]; /*0x583ecb*/
            if ( v10 != *(_DWORD *)v42 ) /*0x583ed1*/
            {
              v35 = a2[1] + v40; /*0x583eee*/
              LOWORD(v45) = *a2 + v10; /*0x583ef7*/
              HIWORD(v45) = v35; /*0x583efc*/
              *(_DWORD *)v38 = v45; /*0x583f0a*/
              if ( MapClass::GetTileIndex(v41, v38, a5, 0) == a6 ) /*0x583f1a*/
              {
                v50[1] = v38[1]; /*0x583f2d*/
                v50[0] = v38[0]; /*0x583f35*/
                v50[2] = a8; /*0x583f45*/
                v50[3] = a9; /*0x583f49*/
                if ( Map_Helper_584030(v50) ) /*0x583f4d*/
                  TileVector::PushBack(v18, v38); /*0x583f5d*/
              }
              v36 = CellStruct::Set((CellStruct *)&v48, v10, v34); /*0x583f68*/
              *(_DWORD *)v38 = *CellStruct::Add((CellStruct *)a2, &v49, v36); /*0x583f91*/
              if ( MapClass::GetTileIndex(v41, v38, a5, 0) == a6 ) /*0x583fa1*/
              {
                v37 = Rect::Set(&v53, v38[0], v38[1], a8, a9); /*0x583fc6*/
                if ( Map_Helper_584030(v37) ) /*0x583fce*/
                  TileVector::PushBack(v18, v38); /*0x583fde*/
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



// ==== 0x00584030  Map_Helper  this=MapClass  sig=csp ====
char __stdcall sub_584030(_DWORD *a1)
{
  int v2; // eax
  int v3; // ebp
  int v4; // edi
  int v5; // esi
  unsigned int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v10; // [esp+10h] [ebp-4h]
  int v11; // [esp+18h] [ebp+4h]

  v2 = a1[3]; /*0x584038*/
  v3 = a1[2]; /*0x58403b*/
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
    HIWORD(v11) = v4 + a1[1]; /*0x58405e*/
    LOWORD(v11) = v5 + *a1; /*0x584063*/
    v6 = (__int16)v11 + (SHIWORD(v11) << 9); /*0x584071*/
    if ( v6 >= 0x40000 || (v7 = *(_DWORD **)(dword_87F924 + 4 * v6)) == 0 ) /*0x584081*/
    {
      dword_ABDC74 = v11; /*0x584087*/
      v7 = unk_ABDC50; /*0x58408c*/
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



// ==== 0x005840C0  ObjectClass::CheckMapReachability  this=ObjectClass  sig=csp ====
char __thiscall CheckMapReachability(ObjectClass *this, int a2, int a3, int a4, int j)
{
  ObjectClass *v5; // ebx
  int v6; // ebp
  int *v7; // edx
  int *v8; // edi
  int v9; // edi
  __int16 *v10; // esi
  int v11; // eax
  int health; // ecx
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
  _WORD *v26; // edi
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
  unsigned int v46; // [esp+1Ch] [ebp-3Ch]
  unsigned int v47; // [esp+1Ch] [ebp-3Ch]
  int v48; // [esp+20h] [ebp-38h]
  int v49; // [esp+24h] [ebp-34h]
  int *v50; // [esp+24h] [ebp-34h]
  int v52; // [esp+2Ch] [ebp-2Ch]
  unsigned __int16 v53; // [esp+2Ch] [ebp-2Ch]
  __int16 **v54; // [esp+30h] [ebp-28h]
  __int16 v55; // [esp+34h] [ebp-24h]
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
  v59 = (WordVector)&DynamicVectorClass<unsigned short>::`vftable'; /*0x5840f0*/
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
  v9 = a2; /*0x584155*/
  v10 = (__int16 *)(a2 + 36); /*0x58415b*/
  v11 = Cell::CoordToIndex((Cell *)v5, (__int16 *)(a2 + 36)); /*0x58415f*/
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
  v13 = *(_WORD *)(v5->estimatedHealth + 2 * (a3 + 4 * v11 + v11)); /*0x58418a*/
  g_MissionQueueFrame.briefing[8] = v9; /*0x58418e*/
  v53 = v13; /*0x584197*/
  v14 = (v6 - 1) & *(__int16 *)(v9 + 38); /*0x5841a5*/
  v15 = 1; /*0x5841a7*/
  *((_BYTE *)&g_MissionQueueFrame.briefing[2 * ((v6 - 1) & *v10) + 256] + v14) = 1; /*0x5841ac*/
  v58 = &dword_82A594[8 * *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)j + 132))(j) + 1460)]; /*0x5841ce*/
  while ( 1 ) /*0x5841e1*/
  {
    v46 = 0; /*0x5841e1*/
    v49 = v15 - 1; /*0x5841e9*/
    v57 = (Cell *)g_MissionQueueFrame.briefing[v15 + 7]; /*0x5841fb*/
    v54 = (__int16 **)(4 * (v15 - 1) + 11262568); /*0x5841ff*/
    for ( i = (__int16 *)Cell::GetNeighbourContent(v57, 0); ; i = (__int16 *)Cell::GetNeighbourContent(v57, v46) ) /*0x584203*/
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
      v22 = *(_WORD *)(v5->estimatedHealth + 2 * (a3 + 4 * v20 + v20)); /*0x584259*/
      if ( !(*(int (__stdcall **)(__int16 *, unsigned int, _DWORD, _DWORD, int))(*(_DWORD *)j + 428))( /*0x584286*/
              v17,
              v46,
              *((char *)v17 + 283),
              0,
              1)
        || v58[*((_DWORD *)v17 + 19)] != 1 )
      {
        if ( v22 == v53 ) /*0x584291*/
        {
          if ( !*((_BYTE *)&g_MissionQueueFrame.briefing[2 * v18 + 256] + v19) ) /*0x584293*/
          {
            *((_BYTE *)&g_MissionQueueFrame.briefing[2 * v18 + 256] + v19) = 1; /*0x5842ab*/
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
             && (*(unsigned __int8 (__thiscall **)(WordVector *, int, _DWORD))(*(_DWORD *)&v59 + 8))(&v59, v64 + v61, 0)) )
          {
            v25 = v63++; /*0x58432a*/
            *((_WORD *)Block + v25) = v22; /*0x584335*/
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
  v26 = (_WORD *)(a2 + 36); /*0x58436a*/
  v27 = (v48 - 1) & *(_WORD *)(a2 + 36); /*0x58436d*/
  v28 = (v48 - 1) & *(_WORD *)(a2 + 38); /*0x58436f*/
  v47 = 0; /*0x584377*/
  if ( v48 > 0 ) /*0x58437f*/
  {
    v50 = &g_MissionQueueFrame.briefing[256]; /*0x584385*/
    while ( 2 ) /*0x58438d*/
    {
      for ( j = 0; j < v48; ++j ) /*0x58438d*/
      {
        LOWORD(v56) = v27 + *v26; /*0x5843a6*/
        HIWORD(v56) = v26[1] + v28; /*0x5843b1*/
        a2 = v56; /*0x5843ba*/
        if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a2, 1) ) /*0x5843c1*/
        {
          v29 = (__int16)a2 + SHIWORD(a2) * (*((_DWORD *)this + 62) + this->q03D + 1); /*0x5843e7*/
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
          if ( v53 == *(_WORD *)(this->estimatedHealth + 2 * (a3 + 4 * v29 + v29)) && !*((_BYTE *)v50 + j) ) /*0x58441c*/
          {
            v59 = (WordVector)&VectorClass<unsigned short>::`vftable'; /*0x584522*/
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
  v32 = *((_DWORD *)&this->isAliveFlag + 6 * a3) + 36 * v53; /*0x58446e*/
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
  v59 = (WordVector)&VectorClass<unsigned short>::`vftable'; /*0x5844f5*/
  if ( Block ) /*0x5844ff*/
  {
    if ( v62 ) /*0x584507*/
      __3_YAXPAX_Z(Block); /*0x58450a*/
  }
  return 0; /*0x584512*/
}



// ==== 0x00584550  Radar::Update  this=Radar  sig=csp ====
void __thiscall Radar::Update(Radar *this, __int16 *a2)
{
  Radar *v2; // ebx
  int v3; // ebp
  int v4; // ecx
  int v5; // edi
  int v6; // edi
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v12; // esi
  int v13; // edi
  __int16 v14; // bp
  int v15; // edx
  int v16; // eax
  _WORD *v17; // ecx
  int v18; // ecx
  int v19; // ebp
  _DWORD *v20; // edi
  int v21; // eax
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  _DWORD *v26; // edi
  int v27; // edx
  int v28; // ebp
  int v29; // esi
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // edi
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // edi
  int v40; // ecx
  __int16 v41; // ax
  bool v42; // zf
  int v43; // esi
  int v44; // ecx
  int *v45; // ecx
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
  int v70; // ebp
  int v71; // edi
  Radar *v72; // ecx
  int v73; // eax
  int v74; // esi
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
  int v85; // [esp+20h] [ebp-94h]
  int v86; // [esp+20h] [ebp-94h]
  int v87; // [esp+20h] [ebp-94h]
  int v88; // [esp+20h] [ebp-94h]
  int v89; // [esp+24h] [ebp-90h]
  int v90; // [esp+24h] [ebp-90h]
  int v91; // [esp+24h] [ebp-90h]
  int v92; // [esp+24h] [ebp-90h]
  char *v93; // [esp+28h] [ebp-8Ch]
  int v94; // [esp+28h] [ebp-8Ch]
  char *Radar_field_0x60; // [esp+28h] [ebp-8Ch]
  _BYTE *v96; // [esp+28h] [ebp-8Ch]
  int i; // [esp+2Ch] [ebp-88h]
  _DWORD *v98; // [esp+30h] [ebp-84h]
  int v99; // [esp+30h] [ebp-84h]
  int v100; // [esp+30h] [ebp-84h]
  int v101; // [esp+30h] [ebp-84h]
  int v102; // [esp+34h] [ebp-80h]
  char *v103; // [esp+34h] [ebp-80h]
  int v104; // [esp+38h] [ebp-7Ch] BYREF
  int v105; // [esp+3Ch] [ebp-78h]
  int v106; // [esp+40h] [ebp-74h]
  int v107; // [esp+44h] [ebp-70h]
  __int16 v108[2]; // [esp+48h] [ebp-6Ch] BYREF
  WordVector v109; // [esp+4Ch] [ebp-68h] BYREF
  void *v110; // [esp+50h] [ebp-64h]
  int v111; // [esp+54h] [ebp-60h]
  char v112; // [esp+59h] [ebp-5Bh]
  int v113; // [esp+5Ch] [ebp-58h]
  int v114; // [esp+60h] [ebp-54h]
  Radar *v115; // [esp+64h] [ebp-50h]
  __int16 v116[2]; // [esp+68h] [ebp-4Ch] BYREF
  __int16 v117[2]; // [esp+6Ch] [ebp-48h] BYREF
  __int16 v118[2]; // [esp+70h] [ebp-44h] BYREF
  __int16 v119[2]; // [esp+74h] [ebp-40h] BYREF
  __int16 v120[2]; // [esp+78h] [ebp-3Ch] BYREF
  _DWORD *v121; // [esp+7Ch] [ebp-38h]
  VectorClass v122; // [esp+80h] [ebp-34h] BYREF
  int v123; // [esp+90h] [ebp-24h]
  int v124; // [esp+94h] [ebp-20h]
  int v125; // [esp+98h] [ebp-1Ch]
  int v126; // [esp+9Ch] [ebp-18h]
  int v127; // [esp+A0h] [ebp-14h]
  int v128; // [esp+A8h] [ebp-Ch]
  int v129; // [esp+B0h] [ebp-4h]

  v2 = this; /*0x584561*/
  v115 = this; /*0x584566*/
  if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, a2, 1) )
  {
    for ( i = 2; ; --i ) /*0x584577*/
    {
      v3 = i; /*0x58457f*/
      v4 = *a2; /*0x584594*/
      v106 = 1 << (i + 1); /*0x584599*/
      v5 = a2[1]; /*0x5845a0*/
      v107 = v106; /*0x5845a6*/
      v104 = v4 - v4 % v106; /*0x5845af*/
      v105 = v5 - v5 % v106; /*0x5845b9*/
      v6 = 0; /*0x5845bd*/
      WordVector::Constructor(&v109, 0, 0); /*0x5845c1*/
      v7 = *(_DWORD **)&v2->__pad_64[4 * i + 28]; /*0x5845c6*/
      v109 = (WordVector)&DynamicVectorClass<unsigned short>::`vftable'; /*0x5845cd*/
      v114 = 10; /*0x5845d5*/
      v113 = 0; /*0x5845dd*/
      v8 = v7[2]; /*0x5845e1*/
      v121 = v7; /*0x5845e4*/
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
      v103 = &v2->__pad_64[24 * i + 40]; /*0x584623*/
      v10 = v105; /*0x584627*/
      v89 = v105; /*0x58462d*/
      v11 = v104; /*0x584633*/
      if ( v105 < v105 + v107 ) /*0x584637*/
      {
        while ( 1 ) /*0x584640*/
        {
          v12 = v11; /*0x584640*/
          if ( v11 >= v9 + v11 ) /*0x584644*/
            goto LABEL_23; /*0x584644*/
          do /*0x584723*/
          {
            v118[0] = v12; /*0x584656*/
            v118[1] = v89; /*0x58465b*/
            v13 = *(_DWORD *)&v2->__pad_64[12] + 10 * CellToTileIndexMap((ObjectClass *)v2, v118); /*0x58466f*/
            v14 = *(_WORD *)(v13 + 2 * i); /*0x584672*/
            if ( v14 ) /*0x584679*/
            {
              v15 = v113; /*0x58467b*/
              v16 = v113 - 1; /*0x58467f*/
              if ( v113 - 1 >= 0 ) /*0x584684*/
              {
                v17 = (char *)v110 + 2 * v16; /*0x58468a*/
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
                if ( v113 < v111 ) /*0x5846a5*/
                  goto LABEL_20; /*0x5846a5*/
                if ( (v112 || !v111) /*0x5846c8*/
                  && v114 > 0
                  && (*(unsigned __int8 (__thiscall **)(WordVector *, int, _DWORD))(*(_DWORD *)&v109 + 8))(
                       &v109,
                       v114 + v111,
                       0) )
                {
                  v15 = v113; /*0x5846cf*/
LABEL_20:
                  v113 = v15 + 1; /*0x5846d3*/
                  *((_WORD *)v110 + v15) = v14; /*0x5846de*/
                }
              }
            }
            v120[0] = v12; /*0x5846e2*/
            *(_WORD *)(v13 + 2 * i) = 0; /*0x5846f7*/
            v120[1] = v89; /*0x5846fd*/
            ++v12; /*0x58470a*/
            *(_WORD *)(v13 + 6) = *(_WORD *)(*(_DWORD *)&v2->__pad_64[4] /*0x584712*/
                                           + 4 * CellToTileIndexMap((ObjectClass *)v2, v120)
                                           + 2);
            v9 = v106; /*0x584716*/
            v11 = v104; /*0x58471a*/
          }
          while ( v12 < v106 + v104 ); /*0x584723*/
          v10 = v105; /*0x584729*/
LABEL_23:
          if ( ++v89 >= v10 + v107 ) /*0x58473e*/
          {
            v3 = i; /*0x584744*/
            break; /*0x584744*/
          }
        }
      }
      v18 = v113 - 1; /*0x584748*/
      v90 = v113 - 1; /*0x58474f*/
      if ( v113 - 1 >= 0 ) /*0x584753*/
      {
        v93 = &v2->__pad_64[24 * v3 + 44]; /*0x584760*/
        while ( 1 ) /*0x584776*/
        {
          v19 = *((unsigned __int16 *)v110 + v18); /*0x584776*/
          v20 = (_DWORD *)(*(_DWORD *)v93 + 36 * v19); /*0x584782*/
          v98 = v20; /*0x584785*/
          v21 = v20[4] - 1; /*0x58478c*/
          v85 = v21; /*0x58478d*/
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
              if ( --v85 < 0 ) /*0x5847fe*/
                break; /*0x5847fe*/
              v21 = v85; /*0x584795*/
            }
          }
          (*(void (__thiscall **)(_DWORD *))(*v20 + 12))(v20); /*0x584804*/
          if ( --v90 < 0 ) /*0x584810*/
            break; /*0x584810*/
          v18 = v90; /*0x584766*/
        }
        v9 = v106; /*0x584816*/
        v11 = v104; /*0x58481a*/
        v10 = v105; /*0x58481e*/
      }
      v28 = v10; /*0x584826*/
      v86 = *(_DWORD *)&v2->__pad_64[4 * i + 16]; /*0x58482c*/
      if ( v10 < v10 + v107 ) /*0x584838*/
        break; /*0x584838*/
LABEL_73:
      *(_DWORD *)&v2->__pad_64[4 * i + 16] = v86; /*0x584ab8*/
      v43 = (int)v2->Radar_field_0x60 - 1; /*0x584ac7*/
      if ( v43 >= 0 ) /*0x584ac8*/
      {
        v44 = 16 * v43; /*0x584ad0*/
        v100 = 16 * v43; /*0x584ad4*/
        Radar_field_0x60 = (char *)v2->Radar_field_0x60; /*0x584ad8*/
        do /*0x584b53*/
        {
          v45 = (int *)(*(_DWORD *)&v2->__pad_34[32] + v44); /*0x584adc*/
          v46 = *(__int16 *)v45; /*0x584adf*/
          if ( v46 >= v11 && v46 < v9 + v11 && (v47 = *((__int16 *)v45 + 1), v47 >= v10) && v47 < v10 + v107 /*0x584b1e*/
            || (v48 = *((__int16 *)v45 + 2), v48 >= v11)
            && v48 < v9 + v11
            && (v49 = *((__int16 *)v45 + 3), v49 >= v10)
            && v49 < v10 + v107 )
          {
            if ( *((_BYTE *)v45 + 8) ) /*0x584b20*/
            {
              RadarClass::RenderBlips((RadarClass *)v2, v45, i); /*0x584b2e*/
              v9 = v106; /*0x584b33*/
              v11 = v104; /*0x584b37*/
              v10 = v105; /*0x584b3b*/
            }
          }
          v44 = v100 - 16; /*0x584b47*/
          v42 = Radar_field_0x60 == (char *)1; /*0x584b4a*/
          v100 -= 16; /*0x584b4b*/
          --Radar_field_0x60; /*0x584b4f*/
        }
        while ( !v42 ); /*0x584b53*/
      }
      v50 = 0; /*0x584b55*/
      v87 = 0; /*0x584b57*/
      do /*0x584c85*/
      {
        if ( *(int *)(v50 + *v121 + 16) > 0 ) /*0x584b6b*/
        {
          v101 = *(_DWORD *)(v50 + *v121 + 16); /*0x584b74*/
          v96 = (_BYTE *)(*(_DWORD *)(*v121 + v50 + 4) + 8); /*0x584b7b*/
          do /*0x584c6a*/
          {
            v51 = *v96; /*0x584b86*/
            v52 = (unsigned __int16)*((_DWORD *)v96 - 1); /*0x584b95*/
            v53 = (unsigned __int16)HIWORD(*((_DWORD *)v96 - 1)); /*0x584b9b*/
            v54 = *((_DWORD *)v103 + 1); /*0x584ba1*/
            LOBYTE(v128) = *v96; /*0x584ba4*/
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
              v60 = v128; /*0x584beb*/
              *(_DWORD *)(v59 + 8 * v58) = v53; /*0x584bf2*/
              *(_DWORD *)(v59 + 8 * v58 + 4) = v60; /*0x584bf5*/
            }
            LOBYTE(v129) = v51; /*0x584c01*/
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
              v67 = v129; /*0x584c48*/
              *(_DWORD *)(v66 + 8 * v65) = v52; /*0x584c4f*/
              *(_DWORD *)(v66 + 8 * v65 + 4) = v67; /*0x584c52*/
            }
            v42 = v101 == 1; /*0x584c61*/
            v96 += 12; /*0x584c62*/
            --v101; /*0x584c66*/
          }
          while ( !v42 ); /*0x584c6a*/
          v50 = v87; /*0x584c70*/
          v2 = v115; /*0x584c74*/
        }
        v50 += 24; /*0x584c78*/
        v87 = v50; /*0x584c81*/
      }
      while ( v50 < 6144 ); /*0x584c85*/
      v109 = (WordVector)&VectorClass<unsigned short>::`vftable'; /*0x584c93*/
      if ( v110 && v112 ) /*0x584ca3*/
      {
        __3_YAXPAX_Z(v110); /*0x584ca6*/
        v110 = 0; /*0x584cae*/
      }
      v112 = 0; /*0x584cb6*/
      v68 = i - 1 < 0; /*0x584cbb*/
      v111 = 0; /*0x584cbc*/
      if ( v68 ) /*0x584cc4*/
      {
        v69 = a2[1]; /*0x584ce3*/
        v70 = *a2 - *a2 % 8; /*0x584ce9*/
        v104 = v70; /*0x584cf2*/
        v71 = v69 - v69 % 8; /*0x584cfd*/
        v92 = v71; /*0x584cff*/
        v72 = (Radar *)(v71 + 8); /*0x584d03*/
        v115 = (Radar *)(v71 + 8); /*0x584d08*/
        if ( !__OFSUB__(v71, v71 + 8) ) /*0x584d0c*/
        {
          v73 = v70 + 8; /*0x584d12*/
          do /*0x584e25*/
          {
            v74 = v70; /*0x584d15*/
            v88 = v70; /*0x584d19*/
            if ( v70 < v73 ) /*0x584d1d*/
            {
              do /*0x584e14*/
              {
                v108[0] = v74; /*0x584d2c*/
                v108[1] = v71; /*0x584d31*/
                if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)v2, v108, 1) ) /*0x584d36*/
                {
                  v75 = (__int16)v74 /*0x584d5c*/
                      + (__int16)v71 * (*(_DWORD *)&v2->__pad_64[148] + *(_DWORD *)&v2->__pad_64[144] + 1);
                  if ( v75 >= 0 ) /*0x584d5e*/
                  {
                    v78 = *(_DWORD *)&v2->__pad_64[8]; /*0x584dc6*/
                    if ( v75 >= v78 ) /*0x584dcb*/
                      v75 = v78 - 1; /*0x584dcd*/
                  }
                  else
                  {
                    v75 = 0; /*0x584d60*/
                  }
                  v79 = &v2->__pad_64[44]; /*0x584dd6*/
                  v80 = 2; /*0x584ddc*/
                  v81 = (__int16 *)(*(_DWORD *)&v2->__pad_64[12] + 10 * v75); /*0x584de1*/
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
                  v74 = v88; /*0x584e06*/
                }
                ++v74; /*0x584e0a*/
                v73 = v70 + 8; /*0x584e0b*/
                v88 = v74; /*0x584e10*/
              }
              while ( v74 < v70 + 8 ); /*0x584e14*/
              v72 = v115; /*0x584e1a*/
            }
            v92 = ++v71; /*0x584e21*/
          }
          while ( v71 < (int)v72 ); /*0x584e25*/
        }
        MapClass::AllocArrays(&stru_87E790.__pad_D8[80]); /*0x584e30*/
        return; /*0x584e30*/
      }
    }
    while ( 1 ) /*0x584841*/
    {
      v29 = v11; /*0x584841*/
      if ( v11 < v9 + v11 ) /*0x584845*/
        break; /*0x584845*/
LABEL_72:
      if ( ++v28 >= v10 + v107 ) /*0x584ab2*/
        goto LABEL_73; /*0x584ab2*/
    }
    v94 = 36 * v86; /*0x584855*/
    while ( 1 )
    {
      v117[0] = v29; /*0x584862*/
      v117[1] = v28; /*0x584867*/
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)v2, v117, 1) )
      {
        v116[0] = v29; /*0x584880*/
        v116[1] = v28; /*0x584885*/
        v30 = Cell::CoordToIndex((Cell *)v2, v116); /*0x58488a*/
        if ( v30 >= 0 ) /*0x584891*/
        {
          v31 = *(_DWORD *)&v2->__pad_64[8]; /*0x584897*/
          if ( v30 >= v31 ) /*0x58489c*/
            v30 = v31 - 1; /*0x58489e*/
        }
        else
        {
          v30 = 0; /*0x584893*/
        }
        v32 = *(_DWORD *)&v2->__pad_64[12]; /*0x5848a1*/
        v119[0] = v29; /*0x5848a7*/
        v119[1] = v28; /*0x5848ac*/
        v91 = v32 + 10 * v30; /*0x5848bb*/
        v33 = Cell::CoordToIndex((Cell *)v2, v119); /*0x5848bf*/
        if ( v33 >= 0 ) /*0x5848c6*/
        {
          v34 = *(_DWORD *)&v2->__pad_64[8]; /*0x5848cc*/
          if ( v33 >= v34 ) /*0x5848d1*/
            v33 = v34 - 1; /*0x5848d3*/
        }
        else
        {
          v33 = 0; /*0x5848c8*/
        }
        v99 = *(unsigned __int8 *)(*(_DWORD *)&v2->__pad_64[4] + 4 * v33); /*0x5848e3*/
        if ( v99 != 7 && !*(_WORD *)(v91 + 2 * i) )
        {
          v108[0] = v29; /*0x58491b*/
          v108[1] = v28; /*0x584920*/
          Radar::ProcessSubzone(v2, v91, i, v86, &v104, v108); /*0x584925*/
          VectorClass::ConstructSubzone(&v122, 0, 0); /*0x584932*/
          v122.vtable0 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58493b*/
          v124 = 10; /*0x584943*/
          v123 = 0; /*0x58494e*/
          VectorClass::CleanupSubzone((int)&v122); /*0x584955*/
          LOWORD(v125) = 0; /*0x58495b*/
          v126 = 0; /*0x584963*/
          v127 = 0; /*0x58496a*/
          v35 = (int)&v2->__pad_64[24 * i + 40]; /*0x584971*/
          v36 = *(_DWORD *)&v2->__pad_64[24 * i + 48]; /*0x584975*/
          if ( *(_DWORD *)&v2->__pad_64[24 * i + 56] < v36 /*0x58499a*/
            || (v2->__pad_64[24 * i + 53] || !v36)
            && (v37 = *(_DWORD *)&v2->__pad_64[24 * i + 60], v37 > 0)
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v103 + 8))(v103, v37 + v36, 0) )
          {
            v38 = *(_DWORD *)&v2->__pad_64[24 * i + 56]; /*0x5849a5*/
            *(_DWORD *)&v2->__pad_64[24 * i + 56] = v38 + 1; /*0x5849ae*/
            v39 = *(_DWORD *)&v2->__pad_64[24 * i + 44] + 36 * v38; /*0x5849b8*/
            Radar::CopyDataArray((Radar *)v39, (int *)&v122); /*0x5849be*/
            *(_WORD *)(v39 + 24) = v125; /*0x5849cb*/
            *(_DWORD *)(v39 + 28) = v126; /*0x5849d6*/
            *(_DWORD *)(v39 + 32) = v127; /*0x5849e0*/
            v35 = (int)&v2->__pad_64[24 * i + 40]; /*0x5849e3*/
          }
          v122.vtable0 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x5849eb*/
          if ( v122.Items && v122.IsAllocated ) /*0x5849fd*/
          {
            __3_YAXPAX_Z(v122.Items); /*0x584a00*/
            v122.Items = 0; /*0x584a08*/
          }
          v40 = v94 + *(_DWORD *)(v35 + 4); /*0x584a1b*/
          v122.IsAllocated = 0; /*0x584a20*/
          v122.Capacity = 0; /*0x584a25*/
          v41 = i == 2 ? 0 : *(_WORD *)(v91 + 2 * (i + 1));
          *(_WORD *)(v40 + 24) = v41; /*0x584a3c*/
          *(_DWORD *)(v40 + 28) = v99; /*0x584a44*/
          *(_DWORD *)(v40 + 20) = 16; /*0x584a47*/
          *(_DWORD *)(v40 + 32) = (__int16)v29 / 4 + 130 * ((__int16)v28 / 4) + 131; /*0x584a78*/
          v42 = v94 == -36; /*0x584a80*/
          ++v86; /*0x584a83*/
          v94 += 36; /*0x584a87*/
          if ( v42 ) /*0x584a8b*/
            break; /*0x584a8b*/
        }
      }
      v9 = v106; /*0x584a91*/
      v11 = v104; /*0x584a95*/
      if ( ++v29 >= v106 + v104 ) /*0x584a9f*/
      {
        v10 = v105; /*0x584aa5*/
        goto LABEL_72; /*0x584aa5*/
      }
    }
    v76 = 2; /*0x584d64*/
    v77 = &v2->__pad_64[88]; /*0x584d69*/
    do /*0x584d84*/
    {
      (*(void (__thiscall **)(char *))(*(_DWORD *)v77 + 12))(v77); /*0x584d73*/
      Subzone::BuildGraph((Subzone *)v2, v76--); /*0x584d79*/
      v77 -= 24; /*0x584d7f*/
    }
    while ( v76 >= 0 ); /*0x584d84*/
    MapClass::AllocArrays(&stru_87E790.__pad_D8[80]); /*0x584d8b*/
    v109 = (WordVector)&VectorClass<unsigned short>::`vftable'; /*0x584d94*/
    if ( v110 && v112 ) /*0x584daa*/
      __3_YAXPAX_Z(v110); /*0x584db1*/
  }
}



// ==== 0x00584E50  ObjectClass::UpdateCellConnectivityGraph  this=ObjectClass  sig=csp ====
int __thiscall UpdateCellConnectivityGraph(ObjectClass *this, int *p_isAliveFlag)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  Cell *v6; // eax
  Cell *v7; // edi
  char v8; // al
  int v9; // ecx
  int v10; // edi
  _WORD *v11; // ebx
  _WORD *v12; // edi
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  int estimatedHealth; // edx
  int v17; // eax
  int v18; // edx
  Vector8 *v19; // ebp
  int v20; // eax
  int *v21; // ebp
  Vector8 *v22; // edi
  int v23; // eax
  int v24; // edi
  int v25; // edx
  int v26; // eax
  Vector8 *v27; // ebp
  int v28; // eax
  Vector8 *v29; // ebp
  int v30; // eax
  int v31; // eax
  int health; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // ebp
  int v38; // edx
  _DWORD *v39; // edi
  int v40; // eax
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // eax
  _DWORD *v45; // edi
  int result; // eax
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  __int16 v50[2]; // [esp+10h] [ebp-4Ch] BYREF
  __int16 v51[2]; // [esp+14h] [ebp-48h] BYREF
  int v52; // [esp+18h] [ebp-44h]
  __int16 v53[2]; // [esp+1Ch] [ebp-40h] BYREF
  __int16 v54[2]; // [esp+20h] [ebp-3Ch] BYREF
  __int16 v55[2]; // [esp+24h] [ebp-38h] BYREF
  __int16 v56[2]; // [esp+28h] [ebp-34h] BYREF
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

  v3 = *p_isAliveFlag; /*0x584e5d*/
  v4 = p_isAliveFlag[1]; /*0x584e5f*/
  *(_DWORD *)v50 = v3; /*0x584e62*/
  *(_DWORD *)v51 = v4; /*0x584e66*/
  v5 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x584e75*/
  if ( v5 < 0x40000 && (v6 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v5)) != 0 ) /*0x584e8b*/
  {
    v7 = v6; /*0x584e8d*/
  }
  else
  {
    g_MissionQueueFrame.briefing[139] = v3; /*0x584e91*/
    v7 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x584e97*/
  }
  *(_DWORD *)v53 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x584ea3*/
  *(_DWORD *)v55 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x584ea7*/
  *(_DWORD *)v54 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x584eab*/
  *(_DWORD *)v56 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x584eaf*/
  if ( (unsigned __int8)Cell::IsInRange(v7) || (unsigned __int8)Cell::IsInRange2(v7) ) /*0x584ebe*/
  {
    v8 = Cell::IsInRange(v7); /*0x584ecd*/
    v9 = g_Cell_BuildabilityLUT; /*0x584ed2*/
    if ( !v8 ) /*0x584edd*/
      v9 = g_TerrainBridgeIndex; /*0x584edf*/
    v10 = dword_82A944[v7->Cell_field_0x38 - v9]; /*0x584eeb*/
    v11 = (_WORD *)(4 * (v10 & 7) + 9041544); /*0x584ef7*/
    *(_DWORD *)v53 = *CellStruct::Add((CellStruct *)v50, &p_isAliveFlag, v11); /*0x584f19*/
    v12 = (_WORD *)(4 * (((_BYTE)v10 - 4) & 7) + 9041544); /*0x584f1d*/
    *(_DWORD *)v55 = *CellStruct::Add((CellStruct *)v50, &p_isAliveFlag, v12); /*0x584f2e*/
    *(_DWORD *)v54 = *CellStruct::Add((CellStruct *)v51, &p_isAliveFlag, v11); /*0x584f4c*/
    *(_DWORD *)v56 = *CellStruct::Add((CellStruct *)v51, &p_isAliveFlag, v12); /*0x584f57*/
  }
  v13 = 0; /*0x584f61*/
  p_isAliveFlag = (int *)&this->isAliveFlag; /*0x584f63*/
  do /*0x58519f*/
  {
    v14 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v50) + 2 * v13); /*0x584f7e*/
    v15 = CellToTileIndexMap(this, v51); /*0x584f87*/
    estimatedHealth = this->estimatedHealth; /*0x584f8c*/
    LOBYTE(v58) = 0; /*0x584f92*/
    v17 = *(__int16 *)(estimatedHealth + 10 * v15 + 2 * v13); /*0x584f9e*/
    v18 = *p_isAliveFlag; /*0x584fa2*/
    v52 = v17; /*0x584fa4*/
    v57 = v17; /*0x584fa8*/
    v19 = (Vector8 *)(v18 + 36 * v14); /*0x584fb3*/
    v20 = (*(int (__thiscall **)(Vector8 *, int *))(*(_DWORD *)v19 + 16))(v19, &v57); /*0x584fbc*/
    if ( v20 != -1 ) /*0x584fc2*/
      Vector8::EraseAt(v19, v20); /*0x584fc7*/
    v21 = p_isAliveFlag; /*0x584fd0*/
    v59 = v14; /*0x584fd4*/
    LOBYTE(v60) = 0; /*0x584fd8*/
    v22 = (Vector8 *)(*p_isAliveFlag + 36 * v52); /*0x584fe3*/
    v23 = (*(int (__thiscall **)(Vector8 *, int *))(*(_DWORD *)v22 + 16))(v22, &v59); /*0x584fef*/
    if ( v23 != -1 ) /*0x584ff5*/
      Vector8::EraseAt(v22, v23); /*0x584ffa*/
    v24 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v53) + 2 * v13); /*0x58501b*/
    v25 = 5 * CellToTileIndexMap(this, v54); /*0x585024*/
    v26 = this->estimatedHealth; /*0x585027*/
    LOBYTE(v62) = 0; /*0x58502d*/
    v27 = (Vector8 *)(*v21 + 36 * v24); /*0x58503c*/
    v52 = *(__int16 *)(v26 + 2 * v25 + 2 * v13); /*0x585043*/
    v61 = v52; /*0x585047*/
    v28 = (*(int (__thiscall **)(Vector8 *, int *))(*(_DWORD *)v27 + 16))(v27, &v61); /*0x585051*/
    if ( v28 != -1 ) /*0x585057*/
      Vector8::EraseAt(v27, v28); /*0x58505c*/
    v63 = v24; /*0x585065*/
    LOBYTE(v64) = 0; /*0x585069*/
    v29 = (Vector8 *)(*p_isAliveFlag + 36 * v52); /*0x58507c*/
    v30 = (*(int (__thiscall **)(Vector8 *, int *))(*(_DWORD *)v29 + 16))(v29, &v63); /*0x585084*/
    if ( v30 != -1 ) /*0x58508a*/
      Vector8::EraseAt(v29, v30); /*0x58508f*/
    v31 = Cell::CoordToIndex((Cell *)this, v55); /*0x58509b*/
    if ( v31 >= 0 ) /*0x5850a2*/
    {
      health = this->health; /*0x5850a8*/
      if ( v31 >= health ) /*0x5850ad*/
        v31 = health - 1; /*0x5850af*/
    }
    else
    {
      v31 = 0; /*0x5850a4*/
    }
    v33 = *(__int16 *)(this->estimatedHealth + 2 * (v13 + 4 * v31 + v31)); /*0x5850bf*/
    v52 = v33; /*0x5850c5*/
    v34 = Cell::CoordToIndex((Cell *)this, v56); /*0x5850c9*/
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
    v36 = this->estimatedHealth; /*0x5850e0*/
    LOBYTE(v66) = 0; /*0x5850ec*/
    v37 = *(__int16 *)(v36 + 2 * (v13 + 4 * v34 + v34)); /*0x5850f1*/
    v38 = *p_isAliveFlag; /*0x5850f5*/
    v65 = v37; /*0x5850fe*/
    v39 = (_DWORD *)(v38 + 36 * v33); /*0x585102*/
    v40 = (*(int (__thiscall **)(_DWORD *, int *))(*v39 + 16))(v39, &v65); /*0x58510a*/
    if ( v40 != -1 ) /*0x585110*/
    {
      v41 = v39[4]; /*0x585112*/
      if ( v40 < v41 ) /*0x585117*/
      {
        v42 = v41 - 1; /*0x585119*/
        for ( v39[4] = v42; v40 < v39[4]; *(_DWORD *)(v43 + 8 * v40 - 4) = *(_DWORD *)(v43 + 8 * v40 + 4) ) /*0x58511f*/
        {
          v43 = v39[1]; /*0x585121*/
          ++v40; /*0x585124*/
          *(_DWORD *)(v43 + 8 * v40 - 8) = *(_DWORD *)(v43 + 8 * v40); /*0x585128*/
        }
      }
    }
    v67 = v52; /*0x585143*/
    v44 = *p_isAliveFlag; /*0x58514b*/
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
    p_isAliveFlag += 6; /*0x58519b*/
  }
  while ( v13 < 3 ); /*0x58519f*/
  return result; /*0x5851a5*/
}



// ==== 0x005851B0  ObjectClass::BuildTileAdjacencyTable  this=ObjectClass  sig=csp ====
int __thiscall BuildTileAdjacencyTable(ObjectClass *this, int *a2)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  Cell *v6; // eax
  Cell *v7; // edi
  char v8; // al
  int v9; // ecx
  int v10; // edi
  _WORD *v11; // ebx
  _WORD *v12; // edi
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
  __int16 v59[2]; // [esp+34h] [ebp-4Ch] BYREF
  __int16 v60[2]; // [esp+38h] [ebp-48h] BYREF
  __int16 v61[4]; // [esp+3Ch] [ebp-44h] BYREF
  __int16 v62[2]; // [esp+44h] [ebp-3Ch] BYREF
  __int16 v63[2]; // [esp+48h] [ebp-38h] BYREF
  __int16 v64[4]; // [esp+4Ch] [ebp-34h] BYREF
  int v65; // [esp+54h] [ebp-2Ch]
  int v66; // [esp+5Ch] [ebp-24h]
  int v67; // [esp+64h] [ebp-1Ch]
  int v68; // [esp+6Ch] [ebp-14h]
  int v69; // [esp+74h] [ebp-Ch]
  int v70; // [esp+7Ch] [ebp-4h]

  v3 = *a2; /*0x5851bd*/
  v4 = a2[1]; /*0x5851bf*/
  *(_DWORD *)v59 = v3; /*0x5851c2*/
  *(_DWORD *)v60 = v4; /*0x5851c6*/
  v5 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x5851d5*/
  if ( v5 < 0x40000 && (v6 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v5)) != 0 ) /*0x5851eb*/
  {
    v7 = v6; /*0x5851ed*/
  }
  else
  {
    g_MissionQueueFrame.briefing[139] = v3; /*0x5851f1*/
    v7 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x5851f7*/
  }
  *(_DWORD *)v61 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x585203*/
  if ( (unsigned __int8)Cell::IsInRange(v7) || (unsigned __int8)Cell::IsInRange2(v7) ) /*0x585212*/
  {
    v8 = Cell::IsInRange(v7); /*0x585221*/
    v9 = g_Cell_BuildabilityLUT; /*0x585226*/
    if ( !v8 ) /*0x585231*/
      v9 = g_TerrainBridgeIndex; /*0x585233*/
    v10 = dword_82A944[v7->Cell_field_0x38 - v9]; /*0x58523f*/
    v11 = (_WORD *)(4 * (v10 & 7) + 9041544); /*0x58524b*/
    *(_DWORD *)v62 = *CellStruct::Add((CellStruct *)v59, &a2, v11); /*0x585265*/
    v12 = (_WORD *)(4 * (((_BYTE)v10 - 4) & 7) + 9041544); /*0x585271*/
    *(_DWORD *)v64 = *CellStruct::Add((CellStruct *)v59, &a2, v12); /*0x58528b*/
    *(_DWORD *)v63 = *CellStruct::Add((CellStruct *)v60, &a2, v11); /*0x5852a0*/
    *(_DWORD *)v61 = *CellStruct::Add((CellStruct *)v60, &a2, v12); /*0x5852ab*/
  }
  LOBYTE(v65) = 0; /*0x5852b5*/
  LOBYTE(v66) = 0; /*0x5852ba*/
  LOBYTE(v67) = 0; /*0x5852bf*/
  LOBYTE(v68) = 0; /*0x5852c4*/
  LOBYTE(v69) = 0; /*0x5852c9*/
  LOBYTE(v70) = 0; /*0x5852ce*/
  v13 = 0; /*0x5852d3*/
  p_isAliveFlag = &this->isAliveFlag; /*0x5852d5*/
  do /*0x585581*/
  {
    v14 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v59) + v13); /*0x5852f5*/
    v15 = (int *)*(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v60) + v13); /*0x58530a*/
    a2 = v15; /*0x585312*/
    v16 = *(_DWORD *)p_isAliveFlag + 36 * v14; /*0x585318*/
    v17 = *(_DWORD *)(v16 + 8); /*0x58531b*/
    if ( *(_DWORD *)(v16 + 16) < v17 /*0x58534c*/
      || (*(_BYTE *)(v16 + 13) || !v17)
      && (v18 = *(_DWORD *)(v16 + 20), v18 > 0)
      && (v19 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 8))(v16, v17 + v18, 0), v15 = a2, v19) )
    {
      v20 = *(_DWORD *)(v16 + 16); /*0x58534e*/
      *(_DWORD *)(v16 + 16) = v20 + 1; /*0x585354*/
      v21 = *(_DWORD *)(v16 + 4); /*0x585357*/
      v22 = v65; /*0x58535a*/
      *(_DWORD *)(v21 + 8 * v20) = v15; /*0x58535e*/
      *(_DWORD *)(v21 + 8 * v20 + 4) = v22; /*0x585361*/
    }
    v23 = *(_DWORD *)p_isAliveFlag + 36 * (_DWORD)v15; /*0x585372*/
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
    v29 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v62) + v13); /*0x5853d2*/
    v30 = (int *)*(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v63) + v13); /*0x5853e7*/
    a2 = v30; /*0x5853ef*/
    v31 = *(_DWORD *)p_isAliveFlag + 36 * v29; /*0x5853f5*/
    v32 = *(_DWORD *)(v31 + 8); /*0x5853f8*/
    if ( *(_DWORD *)(v31 + 16) < v32 /*0x585429*/
      || (*(_BYTE *)(v31 + 13) || !v32)
      && (v33 = *(_DWORD *)(v31 + 20), v33 > 0)
      && (v34 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v31 + 8))(v31, v32 + v33, 0), v30 = a2, v34) )
    {
      v35 = *(_DWORD *)(v31 + 16); /*0x58542b*/
      *(_DWORD *)(v31 + 16) = v35 + 1; /*0x585431*/
      v36 = *(_DWORD *)(v31 + 4); /*0x585434*/
      v37 = v67; /*0x585437*/
      *(_DWORD *)(v36 + 8 * v35) = v30; /*0x58543b*/
      *(_DWORD *)(v36 + 8 * v35 + 4) = v37; /*0x58543e*/
    }
    v38 = *(_DWORD *)p_isAliveFlag + 36 * (_DWORD)v30; /*0x58544f*/
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
    v44 = *(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v64) + v13); /*0x5854af*/
    v45 = (int *)*(__int16 *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v61) + v13); /*0x5854c4*/
    a2 = v45; /*0x5854cc*/
    v46 = *(_DWORD *)p_isAliveFlag + 36 * v44; /*0x5854d2*/
    v47 = *(_DWORD *)(v46 + 8); /*0x5854d5*/
    if ( *(_DWORD *)(v46 + 16) < v47 /*0x585506*/
      || (*(_BYTE *)(v46 + 13) || !v47)
      && (v48 = *(_DWORD *)(v46 + 20), v48 > 0)
      && (v49 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v46 + 8))(v46, v47 + v48, 0), v45 = a2, v49) )
    {
      v50 = *(_DWORD *)(v46 + 16); /*0x585508*/
      *(_DWORD *)(v46 + 16) = v50 + 1; /*0x58550e*/
      v51 = *(_DWORD *)(v46 + 4); /*0x585511*/
      v52 = v69; /*0x585514*/
      *(_DWORD *)(v51 + 8 * v50) = v45; /*0x585518*/
      *(_DWORD *)(v51 + 8 * v50 + 4) = v52; /*0x58551b*/
    }
    v53 = *(_DWORD *)p_isAliveFlag + 36 * (_DWORD)v45; /*0x58552c*/
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
    p_isAliveFlag += 24; /*0x58557d*/
  }
  while ( v13 < 6 ); /*0x585581*/
  return result; /*0x585587*/
}



// ==== 0x005855A0  LayerClass::AssignCellOwnership  this=LayerClass  sig=csp ====
int __thiscall LayerClass::AssignCellOwnership(LayerClass *this)
{
  LayerClass *v1; // esi
  int v2; // eax
  int result; // eax
  int i; // ebp
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  ObjectClass *v8; // esi
  int v9; // eax
  int v10; // [esp+8h] [ebp-8h]

  v1 = this; /*0x5855a5*/
  v2 = *((_DWORD *)this + 61); /*0x5855ab*/
  *((_DWORD *)this + 67) = 1; /*0x5855b1*/
  *((_DWORD *)this + 68) = v2; /*0x5855bb*/
  *((_DWORD *)this + 69) = v2 - 1; /*0x5855c4*/
  *((_DWORD *)this + 70) = (v2 << 11) + *((_DWORD *)this + 79) + 4; /*0x5855d9*/
  result = LayerClass::CellIteratorNext(this); /*0x5855df*/
  for ( i = result; result; i = result ) /*0x5855e8*/
  {
    v5 = *(_DWORD *)(i + 68); /*0x5855f0*/
    if ( v5 != -1 ) /*0x5855f6*/
    {
      if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v5) + 680) ) /*0x585605*/
      {
        v6 = -1; /*0x585618*/
        v7 = 0; /*0x58561b*/
        v10 = 0x7FFFFFFF; /*0x58561d*/
        if ( stru_A8EB00.ObjectTypeClass[20] > 0 ) /*0x585627*/
        {
          do /*0x585676*/
          {
            v8 = *(ObjectClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v7); /*0x58562f*/
            v9 = ObjectClass::DistanceTo(v8, i); /*0x585634*/
            if ( v8->isAliveFlag && v8->isOnMap && *(_BYTE *)(*(_DWORD *)(v8[3].? + 52) + 423) && (v6 == -1 || v9 < v10) ) /*0x585666*/
            {
              v10 = v9; /*0x585668*/
              v6 = v7; /*0x58566c*/
            }
            ++v7; /*0x585673*/
          }
          while ( v7 < stru_A8EB00.ObjectTypeClass[20] ); /*0x585676*/
          if ( v6 != -1 ) /*0x58567b*/
            *(_DWORD *)(i + 80) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * v6) + 540) /*0x58568e*/
                                            + 48);
          v1 = this; /*0x585691*/
        }
      }
    }
    result = LayerClass::CellIteratorNext(v1); /*0x585697*/
  }
  return result; /*0x5856a8*/
}



// ==== 0x005856B0  MapClass::InitializeTileData  this=MapClass  sig=csp ====
int __thiscall MapClass::InitializeTileData(MapClass *this, int a2)
{
  int v3; // esi
  int v4; // ebp
  TileData *v5; // ebx
  int v6; // esi
  int v7; // ebp
  char *TileDataEntry; // eax
  int v9; // eax
  int v10; // edx
  char j; // bl
  int k; // eax
  Cell *m; // eax
  int v14; // edx
  int result; // eax
  int v16; // edx
  int n; // esi
  char v18; // [esp+13h] [ebp-5h]
  int i; // [esp+14h] [ebp-4h]

  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x5856c0*/
  v18 = 0; /*0x5856ca*/
  if ( !g_MissionQueueFrame.localVariables[163] ) /*0x5856d1*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth; /*0x5856d9*/
    v4 = __2_YAPAXI_Z(80 * g_MapCellWidth * g_MapCellWidth); /*0x5856e8*/
    if ( v4 ) /*0x5856ef*/
    {
      v5 = (TileData *)v4; /*0x5856f4*/
      if ( v3 - 1 >= 0 ) /*0x5856f8*/
      {
        do /*0x585708*/
        {
          TileData::Constructor(v5); /*0x5856ff*/
          v5 += 20; /*0x585704*/
          --v3; /*0x585707*/
        }
        while ( v3 ); /*0x585708*/
      }
      g_MissionQueueFrame.localVariables[163] = v4; /*0x58570a*/
    }
    else
    {
      g_MissionQueueFrame.localVariables[163] = 0; /*0x585712*/
    }
    v18 = 1; /*0x58571c*/
  }
  v6 = 0; /*0x585726*/
  v7 = g_MapCellWidth * g_MapCellWidth; /*0x58572a*/
  for ( i = g_MapCellWidth * g_MapCellWidth; v6 < v7; *((_DWORD *)TileDataEntry + 16) = -1 ) /*0x585733*/
  {
    GetTileDataEntry(v6)[74] = 1; /*0x585741*/
    TileDataEntry = GetTileDataEntry(v6++); /*0x585745*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x58575d*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x58576a*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585773*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x585782*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  v9 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x585787*/
  for ( j = 1; v9; v9 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) ) /*0x585792*/
  {
    if ( !j ) /*0x585796*/
      break; /*0x585796*/
    j = RecursiveCellClassNeighbourUpdate(this, v10, v9, 0, 0); /*0x5857a7*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x5857bd*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x5857c2*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x5857ce*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x5857dd*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5857e9*/
        k;
        k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x5857ed*/
      break; /*0x5857ed*/
    MapClass::BuildTileConnectivityGraph(this, k, 0, 0); /*0x5857f4*/
  }
  FloodFillConnectedCells((ObjectClass *)this, a2, 1); /*0x58580f*/
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x58581f*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x585824*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585830*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x58583f*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( m = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58584c*/
        m;
        m = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x585850*/
      break; /*0x585850*/
    j = GenerateMapClassCliffTransitions((Cell *)this, v14, m, 1, 0, 0); /*0x585862*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x585878*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x58587d*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585889*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x585898*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x5858a4*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x5858a8*/
      break; /*0x5858a8*/
    j = GenerateMapClassCliffTransitions((Cell *)this, v16, (Cell *)result, 2, 0, 0); /*0x5858bb*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x5858cc*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1418] ) /*0x5858d4*/
  {
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87F5F0.__pad_E12[1418] + 32))( /*0x5858d9*/
               *(_DWORD *)&stru_87F5F0.__pad_E12[1418],
               1);
    *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x5858dc*/
  }
  for ( n = 0; n < i; *(_BYTE *)(result + 74) = 1 ) /*0x5858ea*/
    result = (int)GetTileDataEntry(n++); /*0x5858ee*/
  if ( v18 ) /*0x585902*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.localVariables[163]); /*0x58590a*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x585912*/
  }
  LOBYTE(result) = j; /*0x58591a*/
  return result; /*0x585918*/
}



// ==== 0x00585930  ObjectClass::FloodFillConnectedCells  this=ObjectClass  sig=csp ====
void __thiscall FloodFillConnectedCells(ObjectClass *this, int a2, int a3)
{
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
  *(_DWORD *)v41.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x585958*/
  v42 = 10; /*0x58595c*/
  *(_DWORD *)v41.__tail_10 = 0; /*0x585960*/
  Buffer::Cleanup(&v41); /*0x585964*/
  v42 = 100; /*0x58596f*/
  VectorClass::CellConstructor((VectorClass *)&v39, 0, 0); /*0x585977*/
  *(_DWORD *)v39.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x585980*/
  v40 = 10; /*0x585984*/
  *(_DWORD *)v39.__tail_10 = 0; /*0x585988*/
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
  v7 = (Tactical *)a2; /*0x5859c2*/
  if ( *(int *)v39.__tail_10 < v39.m_8 /*0x5859e4*/
    || (BYTE1(v39.m_C) || !v39.m_8)
    && v4 > 0
    && (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v39.__pad_0 + 8))(
         &v39,
         v4 + v39.m_8,
         0) )
  {
    v8 = (*(_DWORD *)v39.__tail_10)++; /*0x5859f3*/
    *(_DWORD *)(*(_DWORD *)&v39.m_1[3] + 4 * v8) = *(_DWORD *)v7->__pad_0; /*0x5859fc*/
  }
  if ( *(int *)v41.__tail_10 < v41.m_8 /*0x585a29*/
    || (BYTE1(v41.m_C) || !v41.m_8)
    && v42 > 0
    && (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v41.__pad_0 + 8))(
         &v41,
         v42 + v41.m_8,
         0) )
  {
    v9 = (*(_DWORD *)v41.__tail_10)++; /*0x585a38*/
    *(_DWORD *)(*(_DWORD *)&v41.m_1[3] + 4 * v9) = *(_DWORD *)v7->__pad_0; /*0x585a41*/
  }
  v10 = *(__int16 *)v7->__pad_0; /*0x585a44*/
  v11 = *(__int16 *)v7->Tactical_field_0x2; /*0x585a47*/
  v12 = this->q03D; /*0x585a4b*/
  if ( v10 + v11 > v12 && v10 - v11 < v12 && v11 - v10 < v12 && v10 + v11 <= v12 + 2 * *((_DWORD *)this + 62) ) /*0x585a71*/
    Tactical::GetCellData(v7)[73] = 1; /*0x585a7a*/
  v13 = *(__int16 *)v7->__pad_0 + (*(__int16 *)v7->Tactical_field_0x2 << 9); /*0x585a88*/
  if ( v13 >= 0x40000 || (v14 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v13)) == 0 ) /*0x585a9e*/
  {
    v14 = &g_MissionQueueFrame.briefing[130]; /*0x585aa2*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v7->__pad_0; /*0x585aa7*/
  }
  v15 = *(_DWORD *)v39.__tail_10; /*0x585ab4*/
  v36 = *((char *)v14 + 283); /*0x585ab8*/
  for ( i = *(_DWORD *)v39.__tail_10; *(_DWORD *)v39.__tail_10; i = *(_DWORD *)v39.__tail_10 ) /*0x585ac0*/
  {
    v17 = *(_DWORD *)&v39.m_1[3]; /*0x585ac6*/
    v18 = i - 1; /*0x585aca*/
    k = *(_DWORD *)(*(_DWORD *)&v39.m_1[3] + 4 * v18); /*0x585ad0*/
    if ( v18 < v15 ) /*0x585ad4*/
    {
      *(_DWORD *)v39.__tail_10 = v15 - 1; /*0x585ad9*/
      if ( v18 < v15 - 1 ) /*0x585add*/
      {
        while ( 1 ) /*0x585ae9*/
        {
          *(_DWORD *)(v17 + 4 * v18) = *(_DWORD *)(v17 + 4 * v18 + 4); /*0x585ae9*/
          if ( ++v18 >= *(int *)v39.__tail_10 ) /*0x585af3*/
            break; /*0x585af3*/
          v17 = *(_DWORD *)&v39.m_1[3]; /*0x585ae1*/
        }
      }
    }
    for ( j = 0; j < 8; ++j ) /*0x585af5*/
    {
      v20 = CellStruct::Add((CellStruct *)&k, &v38, (_WORD *)(4 * (j & 7) + 9041544)); /*0x585b0d*/
      v21 = this->q03D; /*0x585b14*/
      v35 = *v20; /*0x585b1a*/
      a2 = v35; /*0x585b1e*/
      v22 = SHIWORD(v35) + (__int16)v35; /*0x585b2a*/
      if ( v22 > v21 /*0x585b56*/
        && (__int16)v35 - SHIWORD(v35) < v21
        && SHIWORD(v35) - (__int16)v35 < v21
        && v22 <= v21 + 2 * *((_DWORD *)this + 62) )
      {
        CellData = Tactical::GetCellData((Tactical *)&a2); /*0x585b69*/
        v24 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x585b76*/
        if ( v24 < 0x40000 && (v25 = *(Cell **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) != 0 ) /*0x585b8c*/
        {
          v26 = v25; /*0x585b8e*/
        }
        else
        {
          g_MissionQueueFrame.briefing[139] = a2; /*0x585b92*/
          v26 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x585b98*/
        }
        if ( !CellData[73] ) /*0x585b9d*/
        {
          if ( (_BYTE)a3 ) /*0x585bae*/
          {
            if ( !(unsigned __int8)Cell::IsGroundTypeRange(v26) ) /*0x585bb0*/
              continue; /*0x585bb7*/
          }
          else if ( v26->Cell_field_0x11B[0] != v36 || !(unsigned __int8)Cell::IsEmpty(v26) ) /*0x585bc8*/
          {
            continue; /*0x585bcf*/
          }
          if ( *(int *)v39.__tail_10 < v39.m_8 /*0x585bfe*/
            || (BYTE1(v39.m_C) || !v39.m_8)
            && v40 > 0
            && (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v39.__pad_0 + 8))(
                 &v39,
                 v40 + v39.m_8,
                 0) )
          {
            v27 = (*(_DWORD *)v39.__tail_10)++; /*0x585c0d*/
            *(_DWORD *)(*(_DWORD *)&v39.m_1[3] + 4 * v27) = a2; /*0x585c18*/
          }
          TileVector::PushBack((TileVector *)&v41, &a2); /*0x585c24*/
          CellData[73] = 1; /*0x585c29*/
        }
      }
    }
    v15 = *(_DWORD *)v39.__tail_10; /*0x585c37*/
  }
  v28 = 0; /*0x585c45*/
  for ( k = 0; v28 < *(int *)v41.__tail_10; k = v28 ) /*0x585c51*/
  {
    v29 = *(_DWORD *)(*(_DWORD *)&v41.m_1[3] + 4 * v28); /*0x585c57*/
    v36 = v29; /*0x585c5a*/
    v30 = SHIWORD(v29) - 1; /*0x585c63*/
    v31 = SHIWORD(v29) + 2; /*0x585c66*/
    if ( v30 < v31 ) /*0x585c6b*/
    {
      v32 = (__int16)v29 + 2; /*0x585c73*/
      v36 = (__int16)v29 - 1; /*0x585c76*/
      do /*0x585cbd*/
      {
        for ( m = v36; m < v32; ++m ) /*0x585c80*/
        {
          LOWORD(a3) = m; /*0x585c8b*/
          HIWORD(a3) = v30; /*0x585c90*/
          if ( (unsigned __int8)LayerClass::CoordinatesLegal(v37, (__int16 *)&a3) ) /*0x585c95*/
          {
            LOWORD(a2) = m; /*0x585ca2*/
            HIWORD(a2) = v30; /*0x585ca7*/
            Tactical::GetCellData((Tactical *)&a2)[74] = 1; /*0x585cb1*/
          }
        }
        ++v30; /*0x585cba*/
      }
      while ( v30 < v31 ); /*0x585cbd*/
      v28 = k; /*0x585cbf*/
    }
    ++v28; /*0x585cc7*/
  }
  *(_DWORD *)v39.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x585cd9*/
  Buffer::Cleanup(&v39); /*0x585cdd*/
  *(_DWORD *)v41.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x585ce6*/
  Buffer::Cleanup(&v41); /*0x585cea*/
}



// ==== 0x00585D00  MapClass::LoadTerrainData  this=MapClass  sig=csp ====
int __thiscall MapClass::LoadTerrainData(MapClass *this, int a2)
{
  int v2; // esi
  ObjectClass *v3; // ebp
  int v4; // edi
  int v5; // ebx
  TileData *v6; // esi
  int v7; // ebp
  char *TileDataEntry; // eax
  int i; // eax
  int result; // eax
  Cell *j; // esi
  int k; // esi
  char v13; // [esp+12h] [ebp-6h]
  char v14; // [esp+13h] [ebp-5h]

  v2 = 0; /*0x585d12*/
  v3 = (ObjectClass *)this; /*0x585d14*/
  v4 = g_MapCellWidth * g_MapCellWidth; /*0x585d16*/
  v13 = 1; /*0x585d1f*/
  v14 = 0; /*0x585d24*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x585d29*/
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
    v5 = __2_YAPAXI_Z(80 * v4); /*0x585d37*/
    if ( v5 ) /*0x585d3e*/
    {
      v6 = (TileData *)v5; /*0x585d43*/
      if ( v4 - 1 >= 0 ) /*0x585d47*/
      {
        v7 = v4; /*0x585d49*/
        do /*0x585d57*/
        {
          TileData::Constructor(v6); /*0x585d4e*/
          v6 += 20; /*0x585d53*/
          --v7; /*0x585d56*/
        }
        while ( v7 ); /*0x585d57*/
        v3 = (ObjectClass *)this; /*0x585d59*/
      }
      g_MissionQueueFrame.localVariables[163] = v5; /*0x585d5d*/
      v14 = 1; /*0x585d63*/
    }
    else
    {
      g_MissionQueueFrame.localVariables[163] = 0; /*0x585d6a*/
      v14 = 1; /*0x585d70*/
    }
  }
  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x585d92*/
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x585da2*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x585daf*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585db8*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x585dc7*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x585dd3*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !v13 ) /*0x585ddb*/
      break; /*0x585ddb*/
    v13 = Cliff::ProcessTransitions(i, 0); /*0x585dec*/
  }
  FloodFillConnectedCells(v3, a2, 0); /*0x585e02*/
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x585e12*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x585e17*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x585e23*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x585e32*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x585e38*/
  for ( j = (Cell *)result; result; j = (Cell *)result ) /*0x585e43*/
  {
    if ( !v13 ) /*0x585e4b*/
      break; /*0x585e4b*/
    if ( !j->Cell_field_0x11B[1] && (unsigned __int8)Cell::IsEmpty(j) ) /*0x585e59*/
      v13 = Terrain::SelectTileType((int)j, 0); /*0x585e6b*/
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x585e74*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x585e85*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1418] ) /*0x585e8d*/
  {
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87F5F0.__pad_E12[1418] + 32))( /*0x585e93*/
               *(_DWORD *)&stru_87F5F0.__pad_E12[1418],
               1);
    *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x585e96*/
  }
  for ( k = 0; k < v4; *(_BYTE *)(result + 74) = 1 ) /*0x585ea0*/
    result = (int)GetTileDataEntry(k++); /*0x585ea4*/
  if ( v14 ) /*0x585eb8*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.localVariables[163]); /*0x585ec1*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x585ec9*/
  }
  LOBYTE(result) = v13; /*0x585ecf*/
  return result; /*0x585ed3*/
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
int __stdcall InterpolateTerrainLighting(int a1, int a2, int a3, int a4)
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
  __int16 v26; // [esp+18h] [ebp+8h]
  int v27; // [esp+18h] [ebp+8h]
  int v28; // [esp+1Ch] [ebp+Ch]
  int v29; // [esp+20h] [ebp+10h]
  int v30; // [esp+20h] [ebp+10h]

  if ( !a2 ) /*0x585f4b*/
    return 0; /*0x585f4b*/
  if ( a2 == 1 ) /*0x585f52*/
    return *(_DWORD *)(a1 + 4 * *(_DWORD *)(dword_87F890 + 36 * a4 + 32) + 22500); /*0x5862a9*/
  if ( a2 != 2 ) /*0x585f59*/
    return 0; /*0x5862af*/
  v4 = *(_DWORD *)(dword_87F8A8 + 36 * a3 + 32); /*0x585f71*/
  v5 = (v4 - 1) % 130; /*0x585f79*/
  v6 = 4 * v5; /*0x585f82*/
  v7 = (int)((unsigned __int64)(2114445439LL * (v4 - v5)) >> 32) >> 6; /*0x585f8b*/
  v28 = 4 * ((v7 >> 31) + v7) - 4; /*0x585fa2*/
  v8 = v6 - (v6 / 4 % 2 != 0); /*0x585fbf*/
  v9 = 4 * ((v7 >> 31) + v7) - 4 - (v28 / 4 % 2 != 0); /*0x585fde*/
  v10 = *(_DWORD *)(dword_87F8A8 + 36 * a4 + 32); /*0x585fe7*/
  v11 = (v10 - 1) % 130; /*0x585ff4*/
  v12 = 4 * v11; /*0x585ffd*/
  v13 = (int)((unsigned __int64)(2114445439LL * (v10 - v11)) >> 32) >> 6; /*0x586006*/
  v26 = v12; /*0x58600b*/
  v29 = 4 * ((v13 >> 31) + v13) - 4; /*0x586021*/
  v14 = v12 - (v12 / 4 % 2 != 0); /*0x586042*/
  v15 = v29 - (v29 / 4 % 2 != 0); /*0x586061*/
  v16 = v14 <= v8; /*0x586063*/
  if ( v14 == v8 ) /*0x586066*/
  {
    if ( v9 == v15 ) /*0x58606b*/
      return (*(_DWORD *)(a1 + 4 * ((__int16)v6 / 4 + 130 * ((__int16)v28 / 4)) + 23024) /*0x5860d1*/
            + *(_DWORD *)(a1 + 4 * (v26 / 4 + 130 * ((__int16)v29 / 4)) + 23024)) >> 1;
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
  v27 = *(_DWORD *)(a1 /*0x586174*/
                  + 4
                  * ((__int16)(LOWORD(dword_ABD460[dword_82A984[2 * v18]]) + v8) / 4
                   + 130 * ((__int16)(v9 + HIWORD(dword_ABD460[dword_82A984[2 * v18]])) / 4))
                  + 23024);
  v19 = dword_82A988[2 * v18]; /*0x586178*/
  v20 = v8 + LOWORD(dword_ABD460[v19]); /*0x58618e*/
  LOWORD(v19) = v9 + HIWORD(dword_ABD460[v19]); /*0x586195*/
  v22 = *(_DWORD *)(a1 + 4 * (v20 / 4 + 130 * ((__int16)v19 / 4)) + 23024); /*0x5861be*/
  v25 = v27; /*0x5861cb*/
  if ( v27 >= v22 ) /*0x5861cf*/
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
char __stdcall VeinholeMonsterClass_Update(__int16 *a1, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  CellClass *v10; // eax
  int v12; // [esp+14h] [ebp+4h]

  v3 = a1[1]; /*0x5862d0*/
  v4 = a2 + v3; /*0x5862d2*/
  v5 = v3 - a2; /*0x5862d4*/
  if ( v5 > v4 ) /*0x5862d8*/
    return 0; /*0x58633f*/
  while ( 1 ) /*0x5862e3*/
  {
    v6 = *a1; /*0x5862e3*/
    v7 = a2 + v6; /*0x5862e5*/
    v8 = v6 - a2; /*0x5862e7*/
    if ( v8 <= v7 ) /*0x5862eb*/
      break; /*0x5862eb*/
LABEL_9:
    if ( ++v5 > a2 + a1[1] ) /*0x58633d*/
      return 0; /*0x58633d*/
  }
  HIWORD(v12) = v5; /*0x5862f0*/
  while ( 1 ) /*0x5862fb*/
  {
    v9 = ((__int16)v5 << 9) + (__int16)v8; /*0x5862fb*/
    LOWORD(v12) = v8; /*0x5862fd*/
    if ( v9 >= 0x40000 || (v10 = *(CellClass **)(dword_87F924 + 4 * v9)) == 0 ) /*0x586311*/
    {
      dword_ABDC74 = v12; /*0x586317*/
      v10 = &unk_ABDC50; /*0x58631c*/
    }
    if ( v10->firstObject ) /*0x586321*/
      return 1; /*0x58633f*/
    if ( ++v8 > a2 + *a1 ) /*0x586332*/
      goto LABEL_9; /*0x586332*/
  }
}



// ==== 0x00586360  Cell::IsPassable  this=ObjectClass  sig=csp ====
int __stdcall Cell::IsPassable(_DWORD *a1)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // eax
  int result; // eax
  _DWORD *v5; // ecx
  unsigned int v6; // eax
  __int16 v7; // [esp+4h] [ebp-8h]
  __int16 v8; // [esp+4h] [ebp-8h]
  _DWORD *v9; // [esp+10h] [ebp+4h]
  _DWORD *v10; // [esp+10h] [ebp+4h]

  v1 = a1[2] / dword_ABDE88; /*0x58636c*/
  if ( (v1 & 1) != 0 ) /*0x586375*/
  {
    v7 = *a1 / 256; /*0x58638d*/
    v2 = v1 / 2 + 1; /*0x5863b0*/
    HIWORD(v9) = a1[1] / 256 - v2; /*0x5863b5*/
    LOWORD(v9) = v7 - v2; /*0x5863ba*/
    v3 = (__int16)(v7 - v2) + (SHIWORD(v9) << 9); /*0x5863c8*/
    if ( v3 < 0x40000 && (result = *(_DWORD *)(dword_87F924 + 4 * v3)) != 0 ) /*0x5863de*/
    {
      v5 = (_DWORD *)result; /*0x5863e0*/
    }
    else
    {
      result = (int)v9; /*0x5863e4*/
      v5 = unk_ABDC50; /*0x5863e8*/
      dword_ABDC74 = (int)v9; /*0x5863ed*/
    }
    if ( (v5[75] & 8) != 0 ) /*0x5863f9*/
      goto LABEL_13; /*0x5863f9*/
    result = (int)Cell::GetNeighbourContent(v5, 3u); /*0x586401*/
  }
  else
  {
    v8 = *a1 / 256; /*0x58641a*/
    HIWORD(v10) = a1[1] / 256 - v1 / 2; /*0x586441*/
    LOWORD(v10) = v8 - v1 / 2; /*0x586446*/
    v6 = (__int16)v10 + (SHIWORD(v10) << 9); /*0x586454*/
    if ( v6 >= 0x40000 || (result = *(_DWORD *)(dword_87F924 + 4 * v6)) == 0 ) /*0x58646a*/
    {
      dword_ABDC74 = (int)v10; /*0x586470*/
      result = (int)unk_ABDC50; /*0x586475*/
    }
  }
  if ( (*(_BYTE *)(result + 300) & 8) == 0 ) /*0x586481*/
  {
    LOBYTE(result) = 1; /*0x586483*/
    return result; /*0x586489*/
  }
LABEL_13:
  LOBYTE(result) = 0; /*0x58648c*/
  return result; /*0x586485*/
}



// ==== 0x005864A0  FogOfWar_Get  this=-  sig=csp ====
bool __stdcall sub_5864A0(_DWORD *a1)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // eax
  _DWORD *NeighbourContent; // eax
  unsigned int v6; // eax
  __int16 v8; // [esp+4h] [ebp-8h]
  __int16 v9; // [esp+4h] [ebp-8h]
  __int16 v10; // [esp+6h] [ebp-6h]
  int v11; // [esp+10h] [ebp+4h]
  int v12; // [esp+10h] [ebp+4h]

  v1 = a1[2] / dword_ABDE88; /*0x5864ac*/
  if ( (v1 & 1) != 0 ) /*0x5864b5*/
  {
    v8 = *a1 / 256; /*0x5864cd*/
    v10 = a1[1] / 256; /*0x5864e3*/
    v2 = v1 / 2 + 1; /*0x5864f0*/
    v3 = (__int16)(v8 - v2) + ((__int16)(v10 - v2) << 9); /*0x586508*/
    if ( v3 >= 0x40000 || (v4 = *(_DWORD **)(dword_87F924 + 4 * v3)) == 0 ) /*0x58651e*/
    {
      LOWORD(v11) = v8 - v2; /*0x5864fa*/
      HIWORD(v11) = v10 - v2; /*0x5864f5*/
      dword_ABDC74 = v11; /*0x586524*/
      v4 = unk_ABDC50; /*0x586529*/
    }
    if ( (int)v4[79] <= 0 ) /*0x586536*/
      return 0; /*0x586536*/
    NeighbourContent = Cell::GetNeighbourContent(v4, 3u); /*0x586540*/
  }
  else
  {
    v9 = *a1 / 256; /*0x586559*/
    HIWORD(v12) = a1[1] / 256 - v1 / 2; /*0x586580*/
    LOWORD(v12) = v9 - v1 / 2; /*0x586585*/
    v6 = (__int16)v12 + (SHIWORD(v12) << 9); /*0x586593*/
    if ( v6 >= 0x40000 || (NeighbourContent = *(_DWORD **)(dword_87F924 + 4 * v6)) == 0 ) /*0x5865a9*/
    {
      dword_ABDC74 = v12; /*0x5865af*/
      NeighbourContent = unk_ABDC50; /*0x5865b4*/
    }
  }
  return (int)NeighbourContent[79] > 0; /*0x5865c5*/
}



// ==== 0x005865E0  Game::Stub3  this=Game  sig=csp ====
int __stdcall Game::Stub3(int a1)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x5865e0*/
  return result; /*0x5865e2*/
}



// ==== 0x005865F0  CellClass::SpiralFindClosest  this=CellClass  sig=csp ====
int __stdcall CellClass_SpiralFindClosest(int a1, int a2, char a3)
{
  __int16 v3; // bx
  int v4; // edi
  __int16 v5; // bp
  unsigned int v6; // eax
  char *v7; // eax
  char *v8; // esi
  int result; // eax
  _DWORD v10[2]; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+1Ch] [ebp+4h]

  v11 = *(_DWORD *)(a1 + 36); /*0x5865fe*/
  v3 = HIWORD(v11); /*0x586602*/
  v4 = 1; /*0x586607*/
  v5 = v11; /*0x58660c*/
  do /*0x5866aa*/
  {
    v6 = v5 + (v3 << 9); /*0x586618*/
    if ( v6 < 0x40000 && (v7 = *(char **)(dword_87F924 + 4 * v6)) != 0 ) /*0x58662e*/
    {
      v8 = v7; /*0x586630*/
    }
    else
    {
      v8 = (char *)&unk_ABDC50; /*0x586638*/
      dword_ABDC74 = v11; /*0x58663d*/
    }
    result = v8[283]; /*0x586643*/
    if ( result >= v4 - 2 && result <= v4 ) /*0x586653*/
    {
      if ( a3 ) /*0x58665b*/
        CellClass::RevealFogRect(v8 + 36); /*0x586666*/
      v10[0] = 0; /*0x586670*/
      v10[1] = 0; /*0x586674*/
      result = Object::FindClosestObjectCell(v8, v10, 0, 0); /*0x58667e*/
      if ( result ) /*0x586685*/
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 408))(result, a2); /*0x586690*/
    }
    ++v5; /*0x586696*/
    v4 += 2; /*0x586698*/
    ++v3; /*0x58669b*/
    LOWORD(v11) = v5; /*0x5866a0*/
    HIWORD(v11) = v3; /*0x5866a5*/
  }
  while ( v4 < 15 ); /*0x5866aa*/
  return result; /*0x5866b0*/
}



// ==== 0x005866C0  ObjectClass::SmallFunc_5866C0  this=ObjectClass  sig=csp ====
int __thiscall SmallFunc_5866C0(ObjectClass *this)
{
  int v2; // eax
  int result; // eax

  v2 = this->q03D; /*0x5866c3*/
  *((_DWORD *)this + 67) = 1; /*0x5866c9*/
  this->q044 = v2; /*0x5866d3*/
  this->u8_45 = v2 - 1; /*0x5866dc*/
  this->u32_46 = (v2 << 11) + this->q04F + 4; /*0x5866f1*/
  for ( result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x5866fe*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    if ( (*(_BYTE *)(result + 320) & 2) == 0 ) /*0x586707*/
      CellClass::CreateFoggedObjects((CellClass *)result); /*0x58670b*/
  }
  return result; /*0x58671b*/
}



// ==== 0x00586780  MapClass::IsAreaFree  this=MapClass  sig=csp ====
int __thiscall MapClass::IsAreaFree(MapClass *this, int *a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // eax
  bool v9; // sf
  int v10; // eax
  int *v11; // eax
  int *v12; // esi
  int result; // eax
  int v14; // [esp+0h] [ebp-8h]
  int *v16; // [esp+Ch] [ebp+4h]
  int v17; // [esp+10h] [ebp+8h]

  if ( a3 == -1 ) /*0x58678e*/
    v14 = 0; /*0x58679d*/
  else
    v14 = 1 << a3; /*0x586797*/
  v4 = *a2; /*0x5867ac*/
  v5 = a2[2] + *a2; /*0x5867b4*/
  v16 = (int *)v4; /*0x5867b6*/
  if ( v4 >= v5 ) /*0x5867bc*/
    return MapClass::IsRectInBounds(this, a2, 1); /*0x586874*/
  while ( 1 ) /*0x5867c2*/
  {
    v6 = a2[1]; /*0x5867c2*/
    if ( v6 < a2[3] + v6 ) /*0x5867ce*/
      break; /*0x5867ce*/
LABEL_20:
    v16 = (int *)++v4; /*0x58686a*/
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
    if ( v9 || v10 >= 0x40000 || (v11 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v10)) == 0 ) /*0x5867fd*/
    {
      v12 = &g_MissionQueueFrame.briefing[130]; /*0x586807*/
      g_MissionQueueFrame.briefing[139] = v17; /*0x58680c*/
    }
    else
    {
      v12 = v11; /*0x5867ff*/
    }
    result = (int)CellClass::FindInfantry((CellClass *)v12, 0); /*0x586816*/
    if ( result ) /*0x58681d*/
      break; /*0x58681d*/
    result = v14; /*0x58681f*/
    if ( (v12[55] & v14) != 0 ) /*0x58682b*/
      break; /*0x58682b*/
    if ( v12[17] != -1 ) /*0x586831*/
      break; /*0x586831*/
    result = v12[19]; /*0x586833*/
    if ( result ) /*0x586838*/
      break; /*0x586838*/
    result = *((unsigned __int8 *)v12 + 284); /*0x58683a*/
    if ( (_BYTE)result ) /*0x586842*/
      break; /*0x586842*/
    result = (int)Cell::IsBridge((Cell *)v12); /*0x586846*/
    if ( result ) /*0x58684d*/
      break; /*0x58684d*/
    if ( ++v6 >= a2[3] + a2[1] ) /*0x58685a*/
    {
      v4 = (int)v16; /*0x58685c*/
      goto LABEL_20; /*0x58685c*/
    }
  }
  LOBYTE(result) = 0; /*0x58688d*/
  return result; /*0x586884*/
}



// ==== 0x005868A0  ObjectClass::UpdateAreaConnectivityMap  this=ObjectClass  sig=csp ====
void __thiscall UpdateAreaConnectivityMap(ObjectClass *this, int *a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  bool v7; // cc
  int v8; // edi
  int v9; // eax
  int v10; // [esp+Ch] [ebp-18h] BYREF
  void *Block; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]
  int *v16; // [esp+28h] [ebp+4h]

  v4 = 0; /*0x5868ac*/
  v5 = *a2; /*0x5868ae*/
  v6 = 10; /*0x5868b5*/
  v7 = *a2 < *a2 + a2[2]; /*0x5868ba*/
  Block = 0; /*0x5868bc*/
  v12 = 0; /*0x5868c0*/
  LOWORD(v13) = 1; /*0x5868c4*/
  v10 = (int)&DynamicVectorClass<Cell>::`vftable'; /*0x5868cd*/
  v15 = 10; /*0x5868d5*/
  v14 = 0; /*0x5868d9*/
  if ( v7 ) /*0x5868dd*/
  {
    while ( 1 ) /*0x5868e0*/
    {
      v8 = a2[1]; /*0x5868e0*/
      if ( v8 < v8 + a2[3] ) /*0x5868ea*/
        break; /*0x5868ea*/
LABEL_12:
      if ( ++v5 >= *a2 + a2[2] ) /*0x586957*/
        goto LABEL_13; /*0x586957*/
    }
    LOWORD(v16) = v5; /*0x5868ec*/
    while ( 1 ) /*0x5868f5*/
    {
      HIWORD(v16) = v8; /*0x5868f5*/
      if ( v14 < v4 ) /*0x5868fc*/
        goto LABEL_9; /*0x5868fc*/
      if ( !BYTE1(v13) && v4 || v6 <= 0 ) /*0x58690c*/
        goto LABEL_11; /*0x58690c*/
      if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v10 + 8))(&v10, v6 + v4, 0) ) /*0x58691b*/
      {
LABEL_9:
        v9 = v14++; /*0x58692a*/
        *((_DWORD *)Block + v9) = v16; /*0x586935*/
      }
      v4 = v12; /*0x586938*/
LABEL_11:
      ++v8; /*0x58693c*/
      v6 = v15; /*0x586947*/
      if ( v8 >= a2[1] + a2[3] ) /*0x58694b*/
        goto LABEL_12; /*0x58694b*/
    }
  }
LABEL_13:
  LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v10); /*0x58695a*/
  v10 = (int)&VectorClass<Cell>::`vftable'; /*0x58696c*/
  if ( Block ) /*0x586977*/
  {
    if ( BYTE1(v13) ) /*0x58697f*/
      __3_YAXPAX_Z(Block); /*0x586982*/
  }
}



// ==== 0x00586990  LayerClass::Update_Pathfinding_2  this=LayerClass  sig=csp ====
void __thiscall LayerClass::Update_Pathfinding_2(LayerClass *this, int a2)
{
  int v2; // ebx
  int i; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  __int16 *v8; // eax
  unsigned int v9; // ecx
  int *v10; // ecx
  int j; // edi
  int v12; // eax
  int v13; // ecx

  v2 = a2; /*0x586991*/
  for ( i = *(_DWORD *)(a2 + 16) - 1; i >= 0; --i ) /*0x58699e*/
  {
    v5 = 4 * i; /*0x5869a7*/
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea(this, (__int16 *)(4 * i + *(_DWORD *)(v2 + 4)), 1) ) /*0x5869b5*/
    {
      v6 = *(__int16 *)(v5 + *(_DWORD *)(v2 + 4)) /*0x5869dd*/
         + *(__int16 *)(v5 + *(_DWORD *)(v2 + 4) + 2) * (*((_DWORD *)this + 62) + *((_DWORD *)this + 61) + 1);
      if ( v6 >= 0 ) /*0x5869df*/
      {
        v7 = *((_DWORD *)this + 27); /*0x5869e5*/
        if ( v6 >= v7 ) /*0x5869ea*/
          v6 = v7 - 1; /*0x5869ec*/
      }
      else
      {
        v6 = 0; /*0x5869e1*/
      }
      *(_WORD *)(*((_DWORD *)this + 28) + 10 * v6) = 0; /*0x5869f5*/
      v8 = (__int16 *)(v5 + *(_DWORD *)(v2 + 4)); /*0x5869fe*/
      v9 = *v8 + (v8[1] << 9); /*0x586a0a*/
      if ( v9 >= 0x40000 || (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) == 0 ) /*0x586a21*/
      {
        v10 = &g_MissionQueueFrame.briefing[130]; /*0x586a25*/
        g_MissionQueueFrame.briefing[139] = *(_DWORD *)v8; /*0x586a2a*/
      }
      House::AnnounceUpgrade((int)v10, -1); /*0x586a31*/
    }
  }
  for ( j = *(_DWORD *)(v2 + 16) - 1; j >= 0; --j ) /*0x586a41*/
  {
    a2 = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * j); /*0x586a52*/
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea(this, (__int16 *)&a2, 1) ) /*0x586a56*/
    {
      v12 = (__int16)a2 + SHIWORD(a2) * (*((_DWORD *)this + 62) + *((_DWORD *)this + 61) + 1); /*0x586a7c*/
      if ( v12 >= 0 ) /*0x586a7e*/
      {
        v13 = *((_DWORD *)this + 27); /*0x586a84*/
        if ( v12 >= v13 ) /*0x586a89*/
          v12 = v13 - 1; /*0x586a8b*/
      }
      else
      {
        v12 = 0; /*0x586a80*/
      }
      if ( !*(_WORD *)(*((_DWORD *)this + 28) + 10 * v12) ) /*0x586a94*/
        Radar::Update((Radar *)this, (__int16 *)&a2); /*0x586aa2*/
    }
  }
}



// ==== 0x00586AC0  JumpjetLocomotionClass::ClampToCellBounds  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__thiscall JumpjetLocomotionClass::ClampToCellBounds(
        JumpjetLocomotionClass *this,
        _DWORD *a2,
        __int16 *a3,
        char a4)
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
  int v15; // [esp+24h] [ebp+8h]
  int v16; // [esp+28h] [ebp+Ch]

  v4 = this->unknown_3D; /*0x586ac8*/
  v5 = *a3; /*0x586acf*/
  v6 = a3[1]; /*0x586ad4*/
  if ( (v4 & 1) != 0 ) /*0x586ae1*/
    v7 = v5 - v6 + 1; /*0x586ae5*/
  else
    v7 = v5 - v6; /*0x586ae8*/
  v8 = v4 / 2 + (v7 >> 1) - this->unknown_3F; /*0x586b05*/
  v9 = v5 + v6 - v4 - this->DestinationCoords; /*0x586b0d*/
  v15 = *((_DWORD *)this + 65) / 2; /*0x586b2d*/
  v10 = this->q042 / 2; /*0x586b36*/
  if ( (int)abs32(v8 - v15) >= (int)abs32(v9 - v10) ) /*0x586b45*/
  {
    if ( v9 >= v10 ) /*0x586b83*/
    {
      v11 = this->q042; /*0x586b98*/
      if ( a4 ) /*0x586b9e*/
        --v11; /*0x586ba0*/
    }
    else
    {
      v11 = a4 != 0; /*0x586b8d*/
    }
  }
  else if ( v8 >= v15 ) /*0x586b4b*/
  {
    if ( a4 ) /*0x586b64*/
      v8 = *((_DWORD *)this + 65) - 1; /*0x586b6c*/
    else
      v8 = *((_DWORD *)this + 65); /*0x586b75*/
    v11 = v9; /*0x586b6f*/
  }
  else
  {
    v8 = a4 != 0; /*0x586b58*/
    v11 = v9; /*0x586b5a*/
  }
  v12 = this->DestinationCoords + v11; /*0x586bb1*/
  v13 = v8 + this->unknown_3F; /*0x586bb3*/
  LOWORD(v16) = v13 + ((v12 + 1) >> 1); /*0x586bc7*/
  HIWORD(v16) = v4 + (v12 >> 1) - v13; /*0x586bcf*/
  *a2 = v16; /*0x586bdc*/
  return a2; /*0x586bb5*/
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
            if ( v8 >= 0x40000 || (v9 = *(_DWORD **)(dword_87F924 + 4 * v8)) == 0 ) /*0x586cab*/
            {
              dword_ABDC74 = i; /*0x586cad*/
              v9 = unk_ABDC50; /*0x586cb3*/
            }
            if ( (v9[80] & 0x100) == 0 ) /*0x586cc1*/
            {
              v10 = -2; /*0x586cc3*/
              HIWORD(v22) = HIWORD(i); /*0x586cc8*/
              do /*0x586d1b*/
              {
                v11 = v7 + (__int16)(v10 + i); /*0x586cd8*/
                if ( v11 >= 0x40000 || (v12 = *(_DWORD **)(dword_87F924 + 4 * v11)) == 0 ) /*0x586cef*/
                {
                  LOWORD(v22) = v10 + i; /*0x586cd0*/
                  dword_ABDC74 = v22; /*0x586cf5*/
                  v12 = unk_ABDC50; /*0x586cfa*/
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
            if ( v16 >= 0x40000 || (v17 = *(_DWORD **)(dword_87F924 + 4 * v16)) == 0 ) /*0x586da2*/
            {
              dword_ABDC74 = j; /*0x586da4*/
              v17 = unk_ABDC50; /*0x586daa*/
            }
            if ( (v17[80] & 0x100) == 0 ) /*0x586db8*/
            {
              v18 = -2; /*0x586dba*/
              LOWORD(v24) = j; /*0x586dbf*/
              do /*0x586e08*/
              {
                v19 = (__int16)j + ((__int16)(HIWORD(j) + v18) << 9); /*0x586dd2*/
                if ( v19 >= 0x40000 || (v20 = *(_DWORD **)(dword_87F924 + 4 * v19), v3 = v21, !v20) ) /*0x586ded*/
                {
                  HIWORD(v24) = HIWORD(j) + v18; /*0x586dc7*/
                  dword_ABDC74 = v24; /*0x586df3*/
                  v20 = unk_ABDC50; /*0x586df8*/
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



// ==== 0x00586E50  HouseClass::ClampToUsableCell  this=HouseClass  sig=csp ====
_DWORD *__thiscall HouseClass::ClampToUsableCell(HouseClass *this, _DWORD *a2, __int16 *a3)
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
  int *v14; // eax
  int *v15; // ecx
  int v16; // eax
  int v17; // ecx

  v3 = *a3; /*0x586e57*/
  v5 = a3[1]; /*0x586e5d*/
  v6 = this->rofMultiplier[1]; /*0x586e61*/
  v7 = this->armorMultiplier[1]; /*0x586e67*/
  v8 = this->airspeedMultiplier[1]; /*0x586e6d*/
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
    v9 = (v3 + v8 + 2 * (1 - v7 - this->rofMultiplier[1]) - v5) / 2; /*0x586e9d*/
    v3 -= v9; /*0x586e9f*/
    v5 += v9; /*0x586ea1*/
  }
  v11 = (__int16)v5 << 9; /*0x586ecd*/
  v12 = (__int16)v3 + v11 < 0; /*0x586ed0*/
  v13 = (__int16)v3 + v11; /*0x586ed0*/
  LOWORD(a3) = v3; /*0x586ed2*/
  HIWORD(a3) = v5; /*0x586ed7*/
  if ( v12 || v13 >= 0x40000 || (v14 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v13)) == 0 ) /*0x586ef0*/
  {
    v15 = &g_MissionQueueFrame.briefing[130]; /*0x586efa*/
    g_MissionQueueFrame.briefing[139] = (int)a3; /*0x586eff*/
  }
  else
  {
    v15 = v14; /*0x586ef2*/
  }
  v16 = *((char *)v15 + 283); /*0x586f0a*/
  if ( *((_BYTE *)v15 + 284) && v5 + v3 < v16 + this->airspeedMultiplier[1] + 2 * this->rofMultiplier[0] + 4 ) /*0x586f2c*/
    ++v16; /*0x586f2e*/
  v17 = this->rofMultiplier[0]; /*0x586f2f*/
  if ( v5 + v3 > v16 + this->airspeedMultiplier[1] + 2 * v17 ) /*0x586f46*/
  {
    if ( v5 + v3 > v16 + this->airspeedMultiplier[1] + 2 * (v17 + this->costMultiplier[0]) + 2 ) /*0x586f7e*/
    {
      do /*0x586f9c*/
      {
        LOWORD(v3) = v3 - 1; /*0x586f80*/
        LOWORD(v5) = v5 - 1; /*0x586f85*/
        LOWORD(a3) = v3; /*0x586f8b*/
        HIWORD(a3) = v5; /*0x586f90*/
      }
      while ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a3, 1) ); /*0x586f9c*/
    }
  }
  else
  {
    do /*0x586f64*/
    {
      LOWORD(v3) = v3 + 1; /*0x586f48*/
      LOWORD(v5) = v5 + 1; /*0x586f4d*/
      LOWORD(a3) = v3; /*0x586f53*/
      HIWORD(a3) = v5; /*0x586f58*/
    }
    while ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a3, 1) ); /*0x586f64*/
  }
  HIWORD(a3) = v5; /*0x586fa2*/
  LOWORD(a3) = v3; /*0x586fa7*/
  *a2 = a3; /*0x586fb3*/
  return a2; /*0x586fb0*/
}



// ==== 0x00586FC0  FootClass::FindNearestApproachableCell  this=FootClass  sig=csp ====
int *__thiscall FootClass::FindNearestApproachableCell(FootClass *this, int *a2, __int16 *a3, __int16 *a4)
{
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // ebx
  int v7; // eax
  _DWORD *v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // ebx
  int v16; // edi
  int v17; // edx
  int v18; // edx
  double v20; // [esp+0h] [ebp-48h]
  __int16 v21[2]; // [esp+18h] [ebp-30h] BYREF
  int v22; // [esp+1Ch] [ebp-2Ch]
  int v23; // [esp+20h] [ebp-28h]
  int v24; // [esp+24h] [ebp-24h]
  int v25; // [esp+28h] [ebp-20h]
  int v26; // [esp+2Ch] [ebp-1Ch]
  LayerClass *v27; // [esp+30h] [ebp-18h]
  int v28; // [esp+34h] [ebp-14h]
  __int16 v29; // [esp+38h] [ebp-10h]
  __int16 i; // [esp+3Ah] [ebp-Eh]
  double v31; // [esp+40h] [ebp-8h]

  v25 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2134]; /*0x586fd4*/
  v27 = (LayerClass *)this; /*0x586fd8*/
  v31 = 10000.0; /*0x586fdc*/
  v4 = *a3 + (a3[1] << 9); /*0x586fee*/
  if ( v4 < 0x40000 && (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x58700c*/
  {
    v6 = v5; /*0x58700e*/
  }
  else
  {
    v6 = &g_MissionQueueFrame.briefing[130]; /*0x587014*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a3; /*0x587019*/
  }
  v7 = v6[14]; /*0x58701e*/
  if ( v7 >= 0 ) /*0x587023*/
  {
    v9 = *(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v7); /*0x58703b*/
    v10 = (*(int (__thiscall **)(_DWORD *))(*v9 + 156))(v9); /*0x587042*/
    v11 = v9[186]; /*0x58704e*/
    v22 = v9[185]; /*0x587054*/
    v12 = *((unsigned __int8 *)v6 + 282); /*0x58705a*/
    v26 = v10; /*0x587060*/
    v24 = v11; /*0x587066*/
    LOWORD(v11) = v12 % v22; /*0x58706b*/
    v13 = v12; /*0x58706f*/
    v14 = v22; /*0x587071*/
    v15 = 0; /*0x587081*/
    v29 = *a3 - v11; /*0x587083*/
    for ( i = a3[1] - v13 / v22; v15 < v24; ++v15 ) /*0x58709a*/
    {
      v16 = 0; /*0x5870a0*/
      if ( v14 > 0 ) /*0x5870a4*/
      {
        HIWORD(v23) = v15 + i; /*0x5870b1*/
        do /*0x587151*/
        {
          v17 = v15 * v9[185]; /*0x5870c3*/
          LOWORD(v23) = v16 + v29; /*0x5870c6*/
          *(_DWORD *)v21 = v23; /*0x5870d5*/
          if ( *(_DWORD *)(v26 + 4 * (v16 + v17) + 16) && (unsigned __int8)LayerClass::IsWithinUsableArea(v27, v21, 1) ) /*0x5870ec*/
          {
            v18 = v21[1] - a4[1]; /*0x587110*/
            v28 = (v21[0] - *a4) * (v21[0] - *a4) + v18 * v18; /*0x58711c*/
            __asm /*0x587120*/
            {
              fild [esp+48h+var_14]
              fstp [esp+48h+var_48]; double
            }
            Math::Sqrt(v20); /*0x587127*/
            __asm { fcom [esp+48h+var_8] } /*0x58712c*/
            __asm { fnstsw ax }
            if ( (_AX & 0x100) != 0 ) /*0x587138*/
            {
              __asm { fstp [esp+40h+var_8] } /*0x58713e*/
              v25 = *(_DWORD *)v21; /*0x587142*/
            }
            else
            {
              __asm { fstp st } /*0x587148*/
            }
          }
          v14 = v22; /*0x58714a*/
          ++v16; /*0x58714e*/
        }
        while ( v16 < v22 ); /*0x587151*/
      }
    }
    *a2 = v25; /*0x58716d*/
    return a2; /*0x587164*/
  }
  else
  {
    *a2 = *(_DWORD *)a3; /*0x58702a*/
    return a2; /*0x587025*/
  }
}



// ==== 0x00587180  CellClass::SetTerrainType  this=CellClass  sig=csp ====
int __thiscall CellClass::SetTerrainType(CellClass *this, __int16 *a2)
{
  CellClass *v2; // ebp
  __int16 *v3; // ebx
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int *v10; // ecx
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int i; // esi
  __int16 *v18; // ecx
  unsigned int v19; // eax
  TechnoClass *v20; // eax
  int result; // eax
  char v22; // [esp+13h] [ebp-19h]
  int *v24; // [esp+28h] [ebp-4h]

  v2 = this; /*0x587185*/
  v22 = 0; /*0x587199*/
  v24 = &this->disguiseAsType_sensors_of_houses[10]; /*0x58719e*/
  (*(void (**)(void))(this->disguiseAsType_sensors_of_houses[10] + 12))(); /*0x5871a2*/
  v3 = a2; /*0x5871a5*/
  v4 = *a2 + (a2[1] << 9); /*0x5871b3*/
  if ( v4 < 0x40000 && (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x5871c9*/
  {
    v6 = v5; /*0x5871cb*/
  }
  else
  {
    v6 = &g_MissionQueueFrame.briefing[130]; /*0x5871d1*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5871d6*/
  }
  v7 = v6[17]; /*0x5871db*/
  if ( v7 >= 74 && v7 <= 99 ) /*0x5871e6*/
  {
    v22 = CellClass::CheckTilePassable2((int)a2); /*0x5871f0*/
    goto LABEL_42; /*0x5871f4*/
  }
  if ( v7 >= 205 && v7 <= 230 ) /*0x587205*/
  {
    v22 = CellClass::CheckTilePassable((int)a2); /*0x58720f*/
    goto LABEL_42; /*0x587213*/
  }
  v8 = v6[80]; /*0x587223*/
  v9 = v6[14] - g_Cell_BuildabilityLUT + 1; /*0x587229*/
  v10 = 0; /*0x58722a*/
  if ( (v8 & 0x100) == 0 ) /*0x58722f*/
    goto LABEL_21; /*0x58722f*/
  if ( (v8 & 0x80u) == 0 ) /*0x587238*/
  {
    v11 = *(_DWORD *)(v6[11] + 36); /*0x58726a*/
    v13 = (__int16)v11 + (SHIWORD(v11) << 9); /*0x58727c*/
    if ( v13 >= 0x40000 || (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v13)) == 0 ) /*0x587293*/
    {
LABEL_18:
      v10 = &g_MissionQueueFrame.briefing[130]; /*0x587295*/
      g_MissionQueueFrame.briefing[139] = v11; /*0x58729a*/
      if ( &g_MissionQueueFrame == (ScenarioClass *)-5720 ) /*0x5872a2*/
        goto LABEL_21; /*0x5872a2*/
    }
  }
  else
  {
    v11 = v6[9]; /*0x58723a*/
    v12 = (__int16)v11 + (SHIWORD(v11) << 9); /*0x58724c*/
    if ( v12 >= 0x40000 ) /*0x58724e*/
      goto LABEL_18; /*0x58724e*/
    v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v12); /*0x58725e*/
    if ( !v10 ) /*0x587263*/
      goto LABEL_18; /*0x587263*/
  }
  v14 = v10[17]; /*0x5872a4*/
  if ( v14 == 24 || v14 == 25 ) /*0x5872b3*/
    goto LABEL_50; /*0x5872b3*/
LABEL_21:
  if ( v9 == g_TerrainSoundTable2 /*0x5872fc*/
    || v9 == g_TerrainSoundTable2 + 1
    || v9 == g_TerrainSoundTable2 + 2
    || v9 == g_TerrainSoundTable2 + 3
    || v9 == g_TerrainSoundConfig )
  {
    goto LABEL_50; /*0x5872fc*/
  }
  if ( v9 == g_TerrainSoundConfig + 1 || v9 == g_TerrainSoundConfig + 2 ) /*0x587316*/
  {
LABEL_49:
    v3 = a2; /*0x5873fa*/
LABEL_50:
    v22 = CellClass::PropagateTerrainVariant5(v2, v3); /*0x5873fe*/
    goto LABEL_42; /*0x58740a*/
  }
  if ( v9 == g_TerrainSoundConfig + 3 ) /*0x587321*/
  {
    v2 = this; /*0x5873f6*/
    goto LABEL_49; /*0x5873f6*/
  }
  v15 = v6[14] - g_TerrainBridgeIndex + 1; /*0x587332*/
  if ( v10 && ((v16 = v10[17], v16 == 237) || v16 == 238) /*0x587370*/
    || v15 == g_TerrainSoundTable2
    || v15 == g_TerrainSoundTable2 + 1
    || v15 == g_TerrainSoundTable2 + 2
    || v15 == g_TerrainSoundTable2 + 3
    || v15 == g_TerrainSoundConfig
    || v15 == g_TerrainSoundConfig + 1
    || v15 == g_TerrainSoundConfig + 2
    || v15 == g_TerrainSoundConfig + 3 )
  {
    v22 = CellClass::PropagateTerrainVariant2(this, a2); /*0x587380*/
  }
  v2 = this; /*0x587384*/
LABEL_42:
  for ( i = 0; i < (int)v2->firstObject; ++i ) /*0x587392*/
  {
    v18 = (__int16 *)(v2->disguiseAsType_sensors_of_houses[11] + 4 * i); /*0x58739e*/
    v19 = *v18 + (v18[1] << 9); /*0x5873a9*/
    if ( v19 >= 0x40000 || (v20 = *(TechnoClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v19)) == 0 ) /*0x5873bf*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v18; /*0x5873c3*/
      v20 = (TechnoClass *)&g_MissionQueueFrame.briefing[130]; /*0x5873c8*/
    }
    TechnoClass::ApplySplashDamageToNeighbors(v20); /*0x5873cf*/
  }
  result = (*(int (__thiscall **)(int *))(*v24 + 12))(v24); /*0x5873e5*/
  LOBYTE(result) = v22; /*0x5873e8*/
  return result; /*0x5873ec*/
}



// ==== 0x00587410  CellClass::CheckConnectivity  this=CellClass  sig=csp ====
char __thiscall CellClass::CheckConnectivity(CellClass *this, int i)
{
  _WORD *v2; // esi
  int *v3; // ebx
  int v4; // ebp
  int v5; // edi
  __int16 v6; // cx
  unsigned int v7; // eax
  int *v8; // eax
  int v9; // edx
  __int16 v10; // cx
  unsigned int v11; // eax
  int *v12; // eax
  __int16 v13; // cx
  unsigned int v14; // eax
  int *v15; // eax
  __int16 v16; // dx
  int v17; // eax
  __int16 v18; // cx
  unsigned int v19; // eax
  int *v20; // eax
  __int16 v21; // cx
  int v22; // eax
  __int16 v23; // cx
  unsigned int v24; // eax
  int *v25; // eax
  int v26; // esi
  __int16 v27; // ax
  __int16 v28; // dx
  int v29; // esi
  __int16 v30; // dx
  __int16 v31; // ax
  __int16 v32; // dx
  ObjectClass *v33; // edi
  int RegionMap; // eax
  int v35; // eax
  _DWORD *v36; // eax
  int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  int *v41; // eax
  int v42; // eax
  int v43; // eax
  unsigned int v44; // eax
  int *v45; // eax
  int v46; // eax
  int v47; // eax
  unsigned int v48; // eax
  int *v49; // eax
  int v50; // eax
  int v51; // eax
  unsigned int v52; // eax
  int *v53; // eax
  int v54; // eax
  int v55; // eax
  unsigned int v56; // eax
  int *v57; // eax
  int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  int *v61; // eax
  int v62; // eax
  int v63; // eax
  unsigned int v64; // eax
  int *v65; // eax
  int v66; // eax
  int v67; // eax
  unsigned int v68; // eax
  int *v69; // eax
  int v70; // eax
  char v71; // [esp+12h] [ebp-2Eh]
  char v72; // [esp+13h] [ebp-2Dh]
  __int16 v73[2]; // [esp+14h] [ebp-2Ch] BYREF
  int v74; // [esp+18h] [ebp-28h]
  int v75; // [esp+1Ch] [ebp-24h]
  int v76; // [esp+20h] [ebp-20h]
  int v77; // [esp+24h] [ebp-1Ch]
  int v78; // [esp+28h] [ebp-18h]
  int v79; // [esp+2Ch] [ebp-14h]
  __int16 v80[4]; // [esp+34h] [ebp-Ch] BYREF
  ObjectClass *v81; // [esp+3Ch] [ebp-4h] BYREF

  v2 = (_WORD *)i; /*0x587416*/
  v81 = (ObjectClass *)this; /*0x58741b*/
  v71 = 0; /*0x58741f*/
  v72 = 0; /*0x587424*/
  v3 = 0; /*0x587429*/
  *(_DWORD *)v73 = -1; /*0x58742b*/
  v4 = -2; /*0x587433*/
  do /*0x5876b4*/
  {
    v5 = -2; /*0x587438*/
    do /*0x5876aa*/
    {
      v6 = *v2 + v5; /*0x587447*/
      HIWORD(i) = v2[1] + v4; /*0x58744a*/
      LOWORD(i) = v6; /*0x58744f*/
      v7 = v6 + (SHIWORD(i) << 9); /*0x58745d*/
      if ( v7 >= 0x40000 || (v8 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v7)) == 0 ) /*0x587473*/
      {
        g_MissionQueueFrame.briefing[139] = i; /*0x587479*/
        v8 = &g_MissionQueueFrame.briefing[130]; /*0x58747e*/
      }
      v9 = v8[14]; /*0x587483*/
      if ( v9 < g_TerrainBridgeIndex || v9 >= g_TerrainBridgeIndex + 16 ) /*0x587494*/
      {
        if ( v9 < g_Cell_BuildabilityLUT || v9 >= g_Cell_BuildabilityLUT + 16 ) /*0x587511*/
        {
          v16 = v2[1] + v4; /*0x587589*/
          LOWORD(v76) = *v2 + v5; /*0x58758d*/
          HIWORD(v76) = v16; /*0x587596*/
          *(_DWORD *)v80 = v76; /*0x5875a5*/
          v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 17); /*0x5875ae*/
          if ( v17 >= 74 && v17 <= 101 ) /*0x5875b9*/
          {
            v18 = *v2 + v5; /*0x5875c5*/
            v71 = 0; /*0x5875c8*/
            v72 = 0; /*0x5875cd*/
            HIWORD(v77) = v2[1] + v4; /*0x5875d2*/
            LOWORD(v77) = v18; /*0x5875d7*/
            v19 = v18 + (SHIWORD(v77) << 9); /*0x5875e5*/
            if ( v19 < 0x40000 ) /*0x5875e7*/
            {
              v20 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v19); /*0x5875f6*/
              if ( v20 ) /*0x5875fb*/
              {
                v3 = v20; /*0x5875fd*/
                goto LABEL_31; /*0x5875ff*/
              }
            }
            g_MissionQueueFrame.briefing[139] = v77; /*0x587608*/
LABEL_30:
            v3 = &g_MissionQueueFrame.briefing[130]; /*0x5876a1*/
            goto LABEL_31; /*0x5876a1*/
          }
          v21 = v2[1] + v4; /*0x58761c*/
          LOWORD(v78) = *v2 + v5; /*0x587620*/
          HIWORD(v78) = v21; /*0x587625*/
          *(_DWORD *)v80 = v78; /*0x587638*/
          v22 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80) + 17); /*0x587641*/
          if ( v22 >= 205 && v22 <= 232 ) /*0x587650*/
          {
            v23 = *v2 + v5; /*0x58765c*/
            v71 = 0; /*0x58765f*/
            v72 = 1; /*0x587664*/
            HIWORD(v79) = v2[1] + v4; /*0x587669*/
            LOWORD(v79) = v23; /*0x58766e*/
            v24 = v23 + (SHIWORD(v79) << 9); /*0x58767c*/
            if ( v24 < 0x40000 ) /*0x58767e*/
            {
              v25 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24); /*0x58768d*/
              if ( v25 ) /*0x587692*/
              {
                v3 = v25; /*0x587694*/
                goto LABEL_31; /*0x587696*/
              }
            }
            g_MissionQueueFrame.briefing[139] = v79; /*0x58769c*/
            goto LABEL_30; /*0x58769c*/
          }
        }
        else
        {
          v13 = *v2 + v5; /*0x58751d*/
          v71 = 1; /*0x587520*/
          HIWORD(v75) = v2[1] + v4; /*0x587525*/
          LOWORD(v75) = v13; /*0x58752a*/
          v14 = v13 + (SHIWORD(v75) << 9); /*0x587538*/
          if ( v14 < 0x40000 && (v15 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v14)) != 0 ) /*0x58754e*/
          {
            v3 = v15; /*0x587550*/
            *(_DWORD *)v73 = v9 - g_Cell_BuildabilityLUT; /*0x587559*/
          }
          else
          {
            v3 = &g_MissionQueueFrame.briefing[130]; /*0x587566*/
            g_MissionQueueFrame.briefing[139] = v75; /*0x58756b*/
            *(_DWORD *)v73 = v9 - g_Cell_BuildabilityLUT; /*0x587577*/
          }
        }
      }
      else
      {
        v10 = *v2 + v5; /*0x5874a0*/
        v71 = 1; /*0x5874a3*/
        HIWORD(v74) = v2[1] + v4; /*0x5874a8*/
        LOWORD(v74) = v10; /*0x5874ad*/
        v11 = v10 + (SHIWORD(v74) << 9); /*0x5874bb*/
        if ( v11 < 0x40000 && (v12 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v11)) != 0 ) /*0x5874d1*/
        {
          v3 = v12; /*0x5874d3*/
          *(_DWORD *)v73 = v9 - g_TerrainBridgeIndex; /*0x5874dc*/
        }
        else
        {
          v3 = &g_MissionQueueFrame.briefing[130]; /*0x5874e9*/
          g_MissionQueueFrame.briefing[139] = v74; /*0x5874ee*/
          *(_DWORD *)v73 = v9 - g_TerrainBridgeIndex; /*0x5874fa*/
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
    v26 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v3[14]) + 740); /*0x5876da*/
    v27 = *((unsigned __int8 *)v3 + 282) / v26; /*0x5876ef*/
    v28 = *((_WORD *)v3 + 19); /*0x5876f1*/
    LOWORD(v79) = *((_WORD *)v3 + 18) - *((unsigned __int8 *)v3 + 282) % v26; /*0x5876f8*/
    v29 = dword_82AA44[*(_DWORD *)v73]; /*0x587701*/
    v30 = v28 - v27; /*0x587708*/
    v31 = word_82AA04[*(_DWORD *)v73]; /*0x58770b*/
    HIWORD(v79) = v30; /*0x587713*/
    v32 = word_82AA24[*(_DWORD *)v73]; /*0x587718*/
    v80[0] = v31; /*0x587720*/
    v80[1] = v32; /*0x587725*/
    LOWORD(i) = v79 + v31; /*0x587738*/
    HIWORD(i) = HIWORD(v79) + v32; /*0x587746*/
    *(_DWORD *)v73 = i; /*0x58774f*/
    if ( v29 != -1 ) /*0x587753*/
    {
      v33 = v81; /*0x587759*/
      while ( 1 ) /*0x58776c*/
      {
        RegionMap = GetRegionMap(v33, v73, 3, 0); /*0x58776c*/
        if ( RegionMap < 0 ) /*0x587773*/
          break; /*0x587773*/
        v35 = v33->customSound_controller[1] + 16 * RegionMap; /*0x58777f*/
        if ( !*(_BYTE *)(v35 + 8) ) /*0x587786*/
          return 1; /*0x587786*/
        if ( *(_DWORD *)v35 == i ) /*0x587794*/
        {
          i = *(_DWORD *)(v35 + 4); /*0x5877a4*/
          v36 = CellStruct::Add((CellStruct *)&i, &v81, (_WORD *)(4 * (v29 & 7) + 9041544)); /*0x5877b5*/
        }
        else
        {
          if ( *(_DWORD *)(v35 + 4) != i ) /*0x5877bb*/
            return 1; /*0x5877bb*/
          i = *(_DWORD *)v35; /*0x5877ca*/
          v36 = CellStruct::Add((CellStruct *)&i, v80, (_WORD *)(4 * (v29 & 7) + 9041544)); /*0x5877df*/
        }
        *(_DWORD *)v73 = *v36; /*0x5877e6*/
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
        for ( i = v3[9]; ; LOWORD(i) = i - 1 ) /*0x58783c*/
        {
          v39 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&i) + 17); /*0x58784f*/
          if ( v39 < 205 || v39 > 232 ) /*0x58785e*/
            break; /*0x58785e*/
          v40 = (__int16)i + (SHIWORD(i) << 9); /*0x587870*/
          if ( v40 >= 0x40000 || (v41 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v40)) == 0 ) /*0x587886*/
          {
            g_MissionQueueFrame.briefing[139] = i; /*0x58788c*/
            v41 = &g_MissionQueueFrame.briefing[130]; /*0x587891*/
          }
          v42 = v41[17]; /*0x587896*/
          if ( v42 == 231 || v42 == 232 ) /*0x5878a9*/
            return 1; /*0x5878a9*/
        }
        *(_DWORD *)v73 = v3[9]; /*0x5878be*/
        while ( 1 ) /*0x5878d1*/
        {
          v43 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v73) + 17); /*0x5878d1*/
          if ( v43 < 205 || v43 > 232 ) /*0x5878e4*/
            break; /*0x5878e4*/
          v44 = v73[0] + (v73[1] << 9); /*0x5878f7*/
          if ( v44 >= 0x40000 || (v45 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v44)) == 0 ) /*0x58790d*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v73; /*0x587913*/
            v45 = &g_MissionQueueFrame.briefing[130]; /*0x587918*/
          }
          v46 = v45[17]; /*0x58791d*/
          if ( v46 == 231 || v46 == 232 ) /*0x587930*/
            return 1; /*0x587930*/
          ++v73[0]; /*0x587936*/
        }
      }
      else
      {
        *(_DWORD *)v73 = v3[9]; /*0x587940*/
        while ( 1 ) /*0x587953*/
        {
          v47 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v73) + 17); /*0x587953*/
          if ( v47 < 205 || v47 > 232 ) /*0x587962*/
            break; /*0x587962*/
          v48 = v73[0] + (v73[1] << 9); /*0x587971*/
          if ( v48 >= 0x40000 || (v49 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v48)) == 0 ) /*0x587987*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v73; /*0x58798d*/
            v49 = &g_MissionQueueFrame.briefing[130]; /*0x587992*/
          }
          v50 = v49[17]; /*0x587997*/
          if ( v50 == 231 || v50 == 232 ) /*0x5879aa*/
            return 1; /*0x5879aa*/
          ++v73[1]; /*0x5879b0*/
        }
        for ( i = v3[9]; ; --HIWORD(i) ) /*0x5879ba*/
        {
          v51 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&i) + 17); /*0x5879cd*/
          if ( v51 < 205 || v51 > 232 ) /*0x5879e0*/
            break; /*0x5879e0*/
          v52 = (__int16)i + (SHIWORD(i) << 9); /*0x5879f6*/
          if ( v52 >= 0x40000 || (v53 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v52)) == 0 ) /*0x587a0c*/
          {
            g_MissionQueueFrame.briefing[139] = i; /*0x587a12*/
            v53 = &g_MissionQueueFrame.briefing[130]; /*0x587a17*/
          }
          v54 = v53[17]; /*0x587a1c*/
          if ( v54 == 231 || v54 == 232 ) /*0x587a2f*/
            return 1; /*0x587a2f*/
        }
      }
    }
    else if ( v38 >= 74 && v38 <= 82 || v38 >= 92 && v38 <= 95 || v38 == 100 ) /*0x587a5b*/
    {
      for ( i = v3[9]; ; LOWORD(i) = i - 1 ) /*0x587a64*/
      {
        v55 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&i) + 17); /*0x587a77*/
        if ( v55 < 74 || v55 > 101 ) /*0x587a82*/
          break; /*0x587a82*/
        v56 = (__int16)i + (SHIWORD(i) << 9); /*0x587a94*/
        if ( v56 >= 0x40000 || (v57 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v56)) == 0 ) /*0x587aaa*/
        {
          g_MissionQueueFrame.briefing[139] = i; /*0x587ab0*/
          v57 = &g_MissionQueueFrame.briefing[130]; /*0x587ab5*/
        }
        v58 = v57[17]; /*0x587aba*/
        if ( v58 == 100 || v58 == 101 ) /*0x587ac9*/
          return 1; /*0x587ac9*/
      }
      *(_DWORD *)v73 = v3[9]; /*0x587ade*/
      while ( 1 ) /*0x587af1*/
      {
        v59 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v73) + 17); /*0x587af1*/
        if ( v59 < 74 || v59 > 101 ) /*0x587b00*/
          break; /*0x587b00*/
        v60 = v73[0] + (v73[1] << 9); /*0x587b13*/
        if ( v60 >= 0x40000 || (v61 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v60)) == 0 ) /*0x587b29*/
        {
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)v73; /*0x587b2f*/
          v61 = &g_MissionQueueFrame.briefing[130]; /*0x587b34*/
        }
        v62 = v61[17]; /*0x587b39*/
        if ( v62 == 100 || v62 == 101 ) /*0x587b48*/
          return 1; /*0x587b48*/
        ++v73[0]; /*0x587b4e*/
      }
    }
    else
    {
      *(_DWORD *)v73 = v3[9]; /*0x587b58*/
      while ( 1 ) /*0x587b6b*/
      {
        v63 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v73) + 17); /*0x587b6b*/
        if ( v63 < 74 || v63 > 101 ) /*0x587b76*/
          break; /*0x587b76*/
        v64 = v73[0] + (v73[1] << 9); /*0x587b85*/
        if ( v64 >= 0x40000 || (v65 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v64)) == 0 ) /*0x587b9b*/
        {
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)v73; /*0x587ba1*/
          v65 = &g_MissionQueueFrame.briefing[130]; /*0x587ba6*/
        }
        v66 = v65[17]; /*0x587bab*/
        if ( v66 == 100 || v66 == 101 ) /*0x587bba*/
          return 1; /*0x5877f8*/
        ++v73[1]; /*0x587bc0*/
      }
      for ( i = v3[9]; ; --HIWORD(i) ) /*0x587bca*/
      {
        v67 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&i) + 17); /*0x587bdd*/
        if ( v67 < 74 || v67 > 101 ) /*0x587be8*/
          break; /*0x587be8*/
        v68 = (__int16)i + (SHIWORD(i) << 9); /*0x587bfa*/
        if ( v68 >= 0x40000 || (v69 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v68)) == 0 ) /*0x587c10*/
        {
          g_MissionQueueFrame.briefing[139] = i; /*0x587c16*/
          v69 = &g_MissionQueueFrame.briefing[130]; /*0x587c1b*/
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
char __thiscall DiagnoseMapCheck(ObjectClass *this)
{
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
  __int16 *v14; // ebp
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
  char **v32; // [esp+1Ch] [ebp-8h]
  FILE *Stream; // [esp+20h] [ebp-4h]

  v1 = (LayerClass *)this; /*0x587c55*/
  v24 = 1; /*0x587c65*/
  Stream = fopen(&stru_82ADA8.?[11], &stru_82ADA8.?[27]); /*0x587c6f*/
  count = v1[20].count; /*0x587c73*/
  v1[22].count = 1; /*0x587c79*/
  v1[22].capacity = count; /*0x587c83*/
  v1[23].items[0] = count - 1; /*0x587c8f*/
  v1[23].count = (count << 11) + v1[26].count + 4; /*0x587ca4*/
  v3 = LayerClass::CellIteratorNext(v1); /*0x587caf*/
  for ( i = v3; v3; i = v3 ) /*0x587cb7*/
  {
    if ( (unsigned __int8)Type::CheckAmbiguity((Type *)v1, v3, 1) ) /*0x587cc4*/
    {
      v4 = &off_81BA88; /*0x587cd1*/
      v29 = 0; /*0x587cd6*/
      v32 = &off_81BA88; /*0x587cde*/
      do /*0x588065*/
      {
        if ( v4 != off_81BAAC && v4 != off_81BAA0 ) /*0x587cf4*/
        {
          v27 = dword_82A594[8 * v29 + *(_DWORD *)(v3 + 76)] == 1; /*0x587d1e*/
          v8 = 0; /*0x587d5f*/
          if ( (*(_DWORD *)(v3 + 320) & 0x100) != 0 /*0x587d59*/
            && ((v5 = *(_DWORD *)(v3 + 320) & 0x800) != 0
             && ((v6 = *(_DWORD *)(v3 + 44)) == 0 || *(__int16 *)(v6 + 38) - *(__int16 *)(v3 + 38) != 2)
             || !v5 && ((v7 = *(_DWORD *)(v3 + 44)) == 0 || *(__int16 *)(v7 + 36) - *(__int16 *)(v3 + 36) != 2)) )
          {
            v8 = 1; /*0x587d22*/
          }
          v25 = v8; /*0x587d63*/
          if ( dword_82A594[8 * v29 + *(_DWORD *)(v3 + 76)] == 1 || v8 ) /*0x587d6b*/
          {
            v9 = v1[21].count; /*0x587d71*/
            v10 = v1[21].items[0]; /*0x587d77*/
            v11 = v10 + v9 + 1; /*0x587d7d*/
            v12 = v9 - v10; /*0x587d81*/
            v13 = v1[20].count; /*0x587d83*/
            v1[23].capacity = v11; /*0x587d89*/
            v1[24].items[0] = v13 + v12; /*0x587d93*/
            v14 = (__int16 *)MapClass::SpiralSearch((MapClass *)v1); /*0x587d9e*/
            if ( v14 ) /*0x587da2*/
            {
              v15 = (__int16 *)(v3 + 36); /*0x587da8*/
              do /*0x588041*/
              {
                v16 = v14 + 18; /*0x587db3*/
                v17 = v14[18] + v14[19]; /*0x587db6*/
                v18 = *(__int16 *)(v3 + 38); /*0x587db9*/
                v19 = *v15; /*0x587dbd*/
                if ( v17 > v19 + v18 || v17 == v19 + v18 && *v16 - v14[19] > v19 - v18 ) /*0x587ddc*/
                {
                  v28 = dword_82A594[8 * v29 + *((_DWORD *)v14 + 19)] == 1; /*0x587e00*/
                  v26 = 0; /*0x587e47*/
                  if ( (*((_DWORD *)v14 + 80) & 0x100) != 0 /*0x587e3e*/
                    && ((v20 = *((_DWORD *)v14 + 80) & 0x800) != 0
                     && ((v21 = *((_DWORD *)v14 + 11)) == 0 || *(__int16 *)(v21 + 38) - v14[19] != 2)
                     || !v20 && ((v22 = *((_DWORD *)v14 + 11)) == 0 || *(__int16 *)(v22 + 36) - *v16 != 2)) )
                  {
                    v26 = 1; /*0x587e08*/
                  }
                  if ( dword_82A594[8 * v29 + *((_DWORD *)v14 + 19)] == 1 /*0x587e8e*/
                    && v27
                    && MapSeed::CheckTileMatch((MapSeed *)this, v15, v14 + 18, v29, 0, 0, 0)
                    && Pathfinding::CalcDistance((int)&stru_87E790.__pad_D8[80], v15, v14 + 18, 0, 0, 0, v29) == 0x7FFFFFFF )
                  {
                    v3 = i; /*0x587e94*/
                    v24 = 0; /*0x587e9e*/
                    fprintf( /*0x587ebc*/
                      Stream,
                      (const char *const)&stru_82ADA8.?[6],
                      *v15,
                      *(__int16 *)(i + 38),
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
                        (const char *const)&stru_82ADA8.?[9],
                        *v15,
                        *(__int16 *)(v3 + 38),
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
                        (const char *const)&stru_82ADA8.?,
                        *v15,
                        *(__int16 *)(v3 + 38),
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
                    fprintf(Stream, &stru_82ADA8.?[4], *v15, *(__int16 *)(v3 + 38), *v16, v14[19], *v32); /*0x588026*/
                  }
                }
                else
                {
                  v3 = i; /*0x588030*/
                }
                v14 = (__int16 *)MapClass::SpiralSearch((MapClass *)this); /*0x58803d*/
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



// ==== 0x005880A0  MapClass::FindFirstFirestorm  this=MapClass  sig=csp ====
int *__stdcall MapClass::FindFirstFirestorm(int *a1, int *a2, int *a3, int a4)
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
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  double v28; // st7
  int v29; // edi
  int v30; // ecx
  _DWORD *v31; // ecx
  _DWORD *v32; // eax
  int v33; // eax
  __int64 v34; // [esp+Ch] [ebp-3Ch]
  int v35; // [esp+Ch] [ebp-3Ch]
  int v36; // [esp+10h] [ebp-38h]
  double v37; // [esp+10h] [ebp-38h]
  int v38; // [esp+10h] [ebp-38h]
  __int16 v39; // [esp+1Ch] [ebp-2Ch]
  int v40; // [esp+1Ch] [ebp-2Ch]
  int v41; // [esp+20h] [ebp-28h]
  int v42; // [esp+20h] [ebp-28h]
  int v43; // [esp+24h] [ebp-24h]
  double v44; // [esp+28h] [ebp-20h]
  double v45; // [esp+30h] [ebp-18h]
  double v46; // [esp+40h] [ebp-8h]

  v4 = *a3; /*0x5880b1*/
  v5 = *a2; /*0x5880b4*/
  if ( *a2 != *a3 || a2[1] != a3[1] || a2[2] != a3[2] )
  {
    LODWORD(v34) = v5 / 256; /*0x5880f3*/
    HIDWORD(v34) = v4 / 256; /*0x5880f7*/
    if ( (unsigned __int16)(v5 / 256) == (unsigned __int16)(v4 / 256) )
    {
      LOWORD(v34) = v5 / 256; /*0x588104*/
      WORD1(v34) = a2[1] / 256; /*0x58811a*/
      v6 = WORD1(v34); /*0x588138*/
      v7 = a3[1] / 256; /*0x588141*/
      v39 = SWORD1(v34) >= (unsigned __int16)v7 ? -1 : 1;
      while ( (_WORD)v34 != WORD2(v34) || v6 != (_WORD)v7 ) /*0x58815d*/
      {
        v8 = (__int16)v34 + (v6 << 9); /*0x58816c*/
        if ( v8 < 0x40000 && (v9 = *(_DWORD **)(dword_87F924 + 4 * v8)) != 0 ) /*0x588182*/
        {
          v10 = v9; /*0x588184*/
        }
        else
        {
          v10 = unk_ABDC50; /*0x58818c*/
          dword_ABDC74 = v34; /*0x588191*/
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
      v14 = a2[1]; /*0x5881d8*/
      v15 = a3[1]; /*0x5881ec*/
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
          if ( v19 < 0x40000 && (v20 = *(_DWORD **)(dword_87F924 + 4 * v19)) != 0 ) /*0x58826f*/
          {
            v21 = v20; /*0x588271*/
          }
          else
          {
            v21 = unk_ABDC50; /*0x588279*/
            dword_ABDC74 = v34; /*0x58827e*/
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
                  *a1 = (v13 << 8) + 128; /*0x5882c2*/
                  a1[1] = (v6 << 8) + 128; /*0x5882e0*/
                  a1[2] = 0; /*0x5882e3*/
                  return a1; /*0x5882ec*/
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
          v25 = v5 - v5 % 256 + 256; /*0x58834d*/
        else
          v25 = v5 - v5 % 256; /*0x588335*/
        v36 = v25; /*0x588352*/
        if ( v40 >= 0 ) /*0x58835e*/
          v26 = v14 - v14 % 256 + 256; /*0x58838e*/
        else
          v26 = v14 - v14 % 256; /*0x588372*/
        v35 = v26; /*0x588374*/
        v42 = v4 - v5; /*0x58839b*/
        v27 = v36; /*0x58839f*/
        v28 = (double)v42; /*0x5883a3*/
        v44 = (double)(v36 - v5) / v28; /*0x5883bb*/
        v37 = (double)(v15 - v14); /*0x5883c7*/
        v45 = (double)(v26 - v14) / v37; /*0x5883d1*/
        v46 = 1.0 / v37; /*0x5883ef*/
        while ( (v44 <= 1.0 || v45 <= 1.0) && v44 >= 0.0 && v45 >= 0.0 ) /*0x58843d*/
        {
          v29 = v35; /*0x588445*/
          v30 = v27 / 256 + ((v35 / 256) << 9); /*0x58846a*/
          if ( v30 < 0 || v30 >= dword_87F928 || (v31 = *(_DWORD **)(dword_87F924 + 4 * v30)) == 0 ) /*0x588481*/
          {
            LOWORD(v38) = v27 / 256; /*0x588483*/
            HIWORD(v38) = v35 / 256; /*0x588488*/
            v31 = unk_ABDC50; /*0x588491*/
            dword_ABDC74 = v38; /*0x588496*/
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
                  *a1 = v27; /*0x588528*/
                  a1[1] = v35; /*0x58852a*/
                  a1[2] = 0; /*0x58852d*/
                  return a1; /*0x588536*/
                }
              }
            }
          }
          if ( v44 >= v45 ) /*0x5884d6*/
          {
            v35 += v40; /*0x588505*/
            v45 = (double)(v40 + v29 - a2[1]) * v46; /*0x588518*/
          }
          else
          {
            v27 += v43; /*0x5884df*/
            v44 = (double)(v27 - *a2) * (1.0 / v28); /*0x5884f3*/
          }
        }
      }
    }
  }
  *a1 = dword_ABDC10; /*0x588547*/
  a1[1] = dword_ABDC14; /*0x58854f*/
  a1[2] = dword_ABDC18; /*0x588558*/
  return a1; /*0x5882e6*/
}



// ==== 0x00588570  globalHelper  this=-  sig=csp ====
char __stdcall sub_588570(int a1, int a2, int a3)
{
  char v3; // cl
  int v4; // ebp
  int v5; // eax
  _WORD *v6; // edi
  unsigned int v7; // esi
  _DWORD *v8; // ecx
  int v9; // edx
  _DWORD *v10; // esi
  _DWORD *v11; // ecx
  int v12; // ebx
  __int16 v13; // si
  int *v14; // eax
  int v15; // edx
  int v17; // [esp+10h] [ebp-28h]
  int v18; // [esp+14h] [ebp-24h]
  __int16 v19; // [esp+16h] [ebp-22h]
  int v20; // [esp+18h] [ebp-20h]
  int i; // [esp+24h] [ebp-14h]
  int v22; // [esp+28h] [ebp-10h]
  _DWORD v23[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v3 = 0; /*0x588575*/
  for ( i = 0; i < 8; i += 2 ) /*0x588579*/
  {
    v4 = a3; /*0x588581*/
    v18 = 0; /*0x588585*/
    v5 = *(int *)(a3 + 1464) >> 8; /*0x588595*/
    v17 = *(_DWORD *)a1; /*0x58859a*/
    v22 = v5; /*0x58859e*/
    if ( v5 > 0 ) /*0x5885a2*/
    {
      v6 = (_WORD *)(4 * (v3 & 7) + 9041544); /*0x5885ab*/
      while ( 1 ) /*0x5885c3*/
      {
        HIWORD(v20) = HIWORD(v17) + v6[1]; /*0x5885c3*/
        LOWORD(v20) = v17 + *v6; /*0x5885c8*/
        v17 = v20; /*0x5885da*/
        v7 = (SHIWORD(v20) << 9) + (__int16)v20; /*0x5885de*/
        if ( v7 >= 0x40000 || (v8 = *(_DWORD **)(dword_87F924 + 4 * v7)) == 0 ) /*0x5885f7*/
        {
          dword_ABDC74 = v20; /*0x5885f9*/
          v8 = unk_ABDC50; /*0x5885ff*/
        }
        v5 = (int)Cell::IsBridge(v8); /*0x588604*/
        if ( v5 ) /*0x58860b*/
        {
          if ( *(_BYTE *)(*(_DWORD *)(v5 + 1312) + 5824) ) /*0x588613*/
          {
            v9 = *(_DWORD *)(v5 + 540); /*0x58861d*/
            LOBYTE(v5) = a2; /*0x588623*/
            if ( v9 == a2 ) /*0x588629*/
              break; /*0x588629*/
          }
        }
        if ( v7 < 0x40000 && (v10 = *(_DWORD **)(dword_87F924 + 4 * v7)) != 0 ) /*0x588641*/
        {
          v11 = v10; /*0x588643*/
        }
        else
        {
          dword_ABDC74 = v20; /*0x588647*/
          v11 = unk_ABDC50; /*0x58864d*/
        }
        LOBYTE(v5) = CellClass::IsPassable((int)v11, *(_DWORD *)(a3 + 1660), a3, a2); /*0x58865f*/
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
        v13 = *v6 + *(_WORD *)a1; /*0x5886ae*/
        v19 = *(_WORD *)(a1 + 2) + v6[1]; /*0x5886b4*/
        while ( 1 ) /*0x5886ca*/
        {
          v14 = (int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 140))(v4, a2); /*0x5886ca*/
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
          v4 = a3; /*0x5886bc*/
        }
      }
    }
LABEL_21:
    v3 = i + 2; /*0x588730*/
  }
  return v5; /*0x588744*/
}



// ==== 0x00588750  ScanBuildingPlacementCells  this=-  sig=csp ====
int __stdcall ScanBuildingPlacementCells(int *a1, int a2, int *a3)
{
  int *v3; // edi
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
  int v17; // [esp+8h] [ebp-28h]
  int v18; // [esp+Ch] [ebp-24h]
  int v19; // [esp+10h] [ebp-20h]
  __int16 v20; // [esp+12h] [ebp-1Eh]
  int i; // [esp+1Ch] [ebp-14h]
  int v22; // [esp+20h] [ebp-10h]
  _DWORD v23[3]; // [esp+24h] [ebp-Ch] BYREF

  v3 = a3; /*0x588754*/
  result = a3[917]; /*0x588758*/
  v22 = result; /*0x588760*/
  if ( !result ) /*0x588764*/
    return result; /*0x588764*/
  LOBYTE(result) = 0; /*0x58876b*/
  for ( i = 0; i < 8; i += 2 ) /*0x58876f*/
  {
    v5 = v3[366] >> 8; /*0x58877d*/
    v6 = *a1; /*0x588780*/
    v19 = v5; /*0x588782*/
    v18 = *a1; /*0x588788*/
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
      LOWORD(v6) = v17; /*0x5887d0*/
      if ( v8 >= 0x40000 || (v9 = *(_DWORD **)(dword_87F924 + 4 * v8)) == 0 ) /*0x5887e8*/
      {
        dword_ABDC74 = v17; /*0x5887ea*/
        v9 = unk_ABDC50; /*0x5887f0*/
      }
      v10 = v9[17]; /*0x5887f5*/
      if ( v10 == -1 ) /*0x5887fb*/
        goto LABEL_15; /*0x5887fb*/
      if ( *(_DWORD *)(v22 + 660) == v10 ) /*0x588807*/
      {
        if ( v8 >= 0x40000 || (v11 = *(_DWORD **)(dword_87F924 + 4 * v8)) == 0 ) /*0x58881f*/
        {
          dword_ABDC74 = v17; /*0x588821*/
          v11 = unk_ABDC50; /*0x588827*/
        }
        if ( *(_DWORD *)(a2 + 48) == v11[20] ) /*0x588836*/
          break; /*0x588836*/
      }
      v5 = v19; /*0x588838*/
LABEL_15:
      if ( v8 >= 0x40000 || (v12 = *(_DWORD **)(dword_87F924 + 4 * v8)) == 0 ) /*0x588852*/
      {
        dword_ABDC74 = v17; /*0x588854*/
        v12 = unk_ABDC50; /*0x58885a*/
      }
      if ( CellClass::IsPassable((int)v12, v3[415], (int)v3, a2) ) /*0x58886e*/
      {
        if ( ++v16 < v5 ) /*0x588886*/
          continue; /*0x588886*/
      }
      goto LABEL_24; /*0x588886*/
    }
    v13 = v16; /*0x588891*/
    if ( v16 > 0 ) /*0x588897*/
    {
      v14 = *(_WORD *)a1 + *v7; /*0x5888bb*/
      v20 = *((_WORD *)a1 + 1) + v7[1]; /*0x5888bf*/
      do /*0x588933*/
      {
        v15 = (*(int (__thiscall **)(int *, int))(*v3 + 140))(v3, a2); /*0x5888ce*/
        v23[2] = 0; /*0x5888ea*/
        v23[0] = (v14 << 8) + 128; /*0x5888f5*/
        v23[1] = (v20 << 8) + 128; /*0x588903*/
        (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v15 + 216))(v15, v23, 0); /*0x58890c*/
        v3 = a3; /*0x58891c*/
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
int __thiscall Object_Create(ObjectClass *this, int a2)
{
  int v2; // eax
  int result; // eax

  v2 = *((_DWORD *)this + 82); /*0x588960*/
  if ( v2 >= a2 ) /*0x58896c*/
    v2 = a2; /*0x58896e*/
  *((_DWORD *)this + 82) = v2; /*0x588972*/
  result = v2 <= 0 ? 0 : v2;
  *((_DWORD *)this + 82) = result; /*0x588980*/
  return result; /*0x588986*/
}



// ==== 0x00588990  ScenarioClass::CalcMinShroudLevel  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::CalcMinShroudLevel(ScenarioClass *this)
{
  int v1; // edi
  int i; // esi
  int v3; // eax
  int v4; // eax

  if ( this->altNextScenario[17] >= 13 )
  {
    v1 = this->altNextScenario[15]; /*0x58899d*/
    for ( i = 0; i < v1; ++i )
    {
      v3 = *(_DWORD *)(this->altNextScenario[14] + 4 * i); /*0x5889af*/
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
int __thiscall LayerClass::ClearFactoryCellAssignments(LayerClass *this)
{
  LayerClass *v1; // ebp
  int v2; // eax
  int result; // eax
  int v4; // ecx
  int v5; // ebx
  int v6; // ecx
  int v7; // edi
  int i; // edx
  unsigned int v9; // eax
  int *v10; // eax
  int v11; // [esp+4h] [ebp-10h]
  int v13; // [esp+Ch] [ebp-8h]
  __int16 v14; // [esp+Ch] [ebp-8h]
  __int16 v15; // [esp+Eh] [ebp-6h]

  v1 = this; /*0x588ac4*/
  v2 = *((_DWORD *)this + 61); /*0x588aca*/
  *((_DWORD *)this + 67) = 1; /*0x588ad0*/
  *((_DWORD *)this + 68) = v2; /*0x588ada*/
  *((_DWORD *)this + 69) = v2 - 1; /*0x588ae3*/
  *((_DWORD *)this + 70) = (v2 << 11) + *((_DWORD *)this + 79) + 4; /*0x588af8*/
  for ( result = LayerClass::CellIteratorNext(this); result; result = LayerClass::CellIteratorNext(v1) ) /*0x588b05*/
  {
    v4 = *(_DWORD *)(result + 72); /*0x588b0e*/
    if ( v4 != -1 ) /*0x588b14*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v4); /*0x588b20*/
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
            if ( v9 >= 0x40000 || (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) == 0 ) /*0x588b99*/
            {
              LOWORD(v11) = i + v14; /*0x588b7b*/
              HIWORD(v11) = v7 + v15; /*0x588b70*/
              g_MissionQueueFrame.briefing[139] = v11; /*0x588b9f*/
              v10 = &g_MissionQueueFrame.briefing[130]; /*0x588ba4*/
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
char *__thiscall MapClass::Destru_vt04(MapClass *this, char a2)
{
  MapClass::Destruct((char *)this); /*0x588bf3*/
  if ( (a2 & 1) != 0 ) /*0x588bfd*/
    __3_YAXPAX_Z(this); /*0x588c00*/
  return (char *)this; /*0x588c0a*/
}



// ==== 0x00588C10  CellClass::CopyNeighborData  this=ObjectClass  sig=csp ====
int __thiscall sub_588C10(int this, int a2)
{
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16); /*0x588c19*/
  *(_BYTE *)(this + 20) = *(_BYTE *)(a2 + 20); /*0x588c1f*/
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24); /*0x588c25*/
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28); /*0x588c2b*/
  *(_BYTE *)(this + 32) = *(_BYTE *)(a2 + 32); /*0x588c31*/
  return this; /*0x588c34*/
}



// ==== 0x00588C40  CellClass::initCellData  this=CellClass  sig=csp ====
_WORD *__thiscall CellClass::initCellData(CellClass *this, _WORD *a2)
{
  LOWORD(this->mapCoords[0]) += *a2; /*0x588c49*/
  HIWORD(this->mapCoords[0]) += a2[1]; /*0x588c50*/
  return this; /*0x588c54*/
}



// ==== 0x00588C60  CellStruct::Sub  this=AbstractClass  sig=csp ====
_DWORD *__thiscall CellStruct::Sub(CellStruct *this, _DWORD *a2, _WORD *a3)
{
  __int16 v3; // dx
  __int16 v4; // cx
  _WORD *v6; // [esp+8h] [ebp+8h]

  v3 = this->field_0; /*0x588c60*/
  v4 = HIWORD(this->field_0) - a3[1]; /*0x588c6e*/
  LOWORD(v6) = v3 - *a3; /*0x588c76*/
  HIWORD(v6) = v4; /*0x588c7b*/
  *a2 = v6; /*0x588c84*/
  return a2; /*0x588c86*/
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
unsigned int __thiscall DynamicVectorClass_SubzoneConn::Remove(
        _DynamicVectorClass_USubzoneConnectionStruct *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x588cc0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x588cd5*/
  else
    return 0; /*0x588cc7*/
}



// ==== 0x00588CE0  _DynamicVectorClass_UZoneConnectionClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall unknown::ddtor(_DynamicVectorClass_UZoneConnectionClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x588ce6*/
  this->m_10 = 0; /*0x588ce9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x588cf0*/
  {
    __3_YAXPAX_Z(v2); /*0x588cf6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x588cfe*/
  }
  BYTE1(this->m_C) = 0; /*0x588d01*/
  this->m_8 = 0; /*0x588d04*/
}



// ==== 0x00588D10  _DynamicVectorClass_UZoneConnectionClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall unknown::Write(_DynamicVectorClass_UZoneConnectionClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x588d10*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x588d25*/
  else
    return 0; /*0x588d17*/
}



// ==== 0x00588D30  _VectorClass_UZoneConnectionClass::Seek  this=VectorClass  sig=csp ====
int __thiscall unknown::Seek(_VectorClass_UZoneConnectionClass *this, int a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3] + 16 * a3; /*0x588d3a*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x588d42*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4); /*0x588d47*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v3 + 8); /*0x588d4d*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v3 + 12); /*0x588d53*/
  return a2; /*0x588d56*/
}



// ==== 0x00588D60  _DynamicVectorClass_USubzoneTrackingStruct::ClearAndFree  this=DynamicVector  sig=csp ====
void __thiscall SubzoneConnectionVector::ClearAndFree(_DynamicVectorClass_USubzoneTrackingStruct *this)
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

  v2 = *(_DWORD *)&this->m_1[3]; /*0x588d67*/
  *(_DWORD *)&this->m_D[3] = 0; /*0x588d6a*/
  if ( v2 && this->m_D[0] ) /*0x588d71*/
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
        *(_DWORD *)v7 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x588d9a*/
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
    *(_DWORD *)&this->m_1[3] = 0; /*0x588dcb*/
  }
  this->m_D[0] = 0; /*0x588dce*/
  this->m_8 = 0; /*0x588dd1*/
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
int __thiscall VectorClass_USubzoneTrackingStruct::Clear(_VectorClass_USubzoneTrackingStruct *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx

  v3 = *(_DWORD *)&this->m_1[3] + 36 * a3; /*0x588e23*/
  *(_DWORD *)(a2 + 4) = 0; /*0x588e29*/
  *(_DWORD *)(a2 + 8) = 0; /*0x588e2c*/
  *(_BYTE *)(a2 + 12) = 1; /*0x588e2f*/
  *(_BYTE *)(a2 + 13) = 0; /*0x588e33*/
  *(_DWORD *)a2 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x588e36*/
  if ( a2 != v3 ) /*0x588e3c*/
  {
    VectorClass::Cleanup5(a2); /*0x588e40*/
    v4 = *(_DWORD *)(v3 + 8); /*0x588e46*/
    *(_DWORD *)(a2 + 8) = v4; /*0x588e4b*/
    if ( v4 ) /*0x588e4e*/
    {
      v5 = __2_YAPAXI_Z(8 * v4); /*0x588e58*/
      if ( v5 ) /*0x588e62*/
      {
        v6 = v5; /*0x588e67*/
        if ( v4 - 1 >= 0 ) /*0x588e6b*/
        {
          v7 = v4; /*0x588e6d*/
          do /*0x588e77*/
          {
            *(_DWORD *)v6 = 0; /*0x588e6e*/
            *(_BYTE *)(v6 + 4) = 0; /*0x588e70*/
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
  *(_DWORD *)a2 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x588ec2*/
  *(_WORD *)(a2 + 24) = *(_WORD *)(v3 + 24); /*0x588ecc*/
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(v3 + 28); /*0x588ed3*/
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(v3 + 32); /*0x588ed9*/
  return a2; /*0x588eb8*/
}



// ==== 0x00588EF0  _VectorClass_PAVCellClass::InitCellVe_vt06  this=VectorClass  sig=csp ====
int __thiscall MapClass::InitCellVe_vt06(_VectorClass_PAVCellClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x588efa*/
}



// ==== 0x00588F00  _DynamicVectorClass_W4PassabilityType::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_W4PassabilityType::Destroy(_DynamicVectorClass_W4PassabilityType *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x588f06*/
  this->m_10 = 0; /*0x588f09*/
  if ( v2 && BYTE1(this->m_C) ) /*0x588f10*/
  {
    __3_YAXPAX_Z(v2); /*0x588f16*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x588f1e*/
  }
  BYTE1(this->m_C) = 0; /*0x588f21*/
  this->m_8 = 0; /*0x588f24*/
}



// ==== 0x00588F30  _DynamicVectorClass_W4PassabilityType::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_W4PassabilityType::GetItemIndex(
        _DynamicVectorClass_W4PassabilityType *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x588f30*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x588f45*/
  else
    return 0; /*0x588f37*/
}



// ==== 0x00588F50  _VectorClass_W4PassabilityType::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::Clear(_VectorClass_W4PassabilityType *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x588f5a*/
}



// ==== 0x00588F60  _DynamicVectorClass_U_HashObject_II::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_W4PassabilityType::Destroy_0(_DynamicVectorClass_U_HashObject_II *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x588f66*/
  this->m_10 = 0; /*0x588f69*/
  if ( v2 && BYTE1(this->m_C) ) /*0x588f70*/
  {
    __3_YAXPAX_Z(v2); /*0x588f76*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x588f7e*/
  }
  BYTE1(this->m_C) = 0; /*0x588f81*/
  this->m_8 = 0; /*0x588f84*/
}



// ==== 0x00588F90  _DynamicVectorClass_U_HashObject_II::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_W4PassabilityType::GetItemIndex_0(
        _DynamicVectorClass_U_HashObject_II *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x588f90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x588fa5*/
  else
    return 0; /*0x588f97*/
}



// ==== 0x00588FB0  _VectorClass_U_HashObject_II::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UHashObject_uint_uint::Clear(_VectorClass_U_HashObject_II *this, _DWORD *a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x588fb0*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x588fb7*/
  v5 = v3 + 8 * a3; /*0x588fba*/
  *a2 = v4; /*0x588fc1*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x588fc6*/
  return a2; /*0x588fc9*/
}



// ==== 0x00588FD0  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::Destroy_1  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_W4PassabilityType::Destroy_1(
        _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x588fd6*/
  this->m_10 = 0; /*0x588fd9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x588fe0*/
  {
    __3_YAXPAX_Z(v2); /*0x588fe6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x588fee*/
  }
  BYTE1(this->m_C) = 0; /*0x588ff1*/
  this->m_8 = 0; /*0x588ff4*/
}



// ==== 0x00589000  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::GetItemIndex_1  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_W4PassabilityType::GetItemIndex_1(
        _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x589000*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0xCu; /*0x58901e*/
  else
    return 0; /*0x589007*/
}



// ==== 0x00589030  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UHashObject_uint_SubzoneConn::Clear(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        int a2,
        int a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x589034*/
  v4 = *(_DWORD *)(v3 + 12 * a3); /*0x58903a*/
  v5 = v3 + 12 * a3; /*0x58903d*/
  *(_DWORD *)a2 = v4; /*0x589044*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v5 + 4); /*0x589049*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v5 + 8); /*0x58904f*/
  return a2; /*0x589052*/
}



// ==== 0x00589060  ?$VectorClass@PAVCellClass@@::InitCellVe_vt00  this=VectorClass  sig=csp ====
_DWORD *__thiscall MapClass::InitCellVe_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x589063*/
  *Block = &VectorClass<CellClass *>::`vftable'; /*0x589066*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x589070*/
  {
    __3_YAXPAX_Z(v3); /*0x589078*/
    *(Block + 1) = 0; /*0x589080*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x58908b*/
  *(Block + 2) = 0; /*0x589091*/
  if ( (a2 & 1) != 0 ) /*0x589098*/
    __3_YAXPAX_Z(Block); /*0x58909b*/
  return Block; /*0x5890a5*/
}



// ==== 0x005890B0  _DynamicVectorClass_USubzoneConnectionStruct::Add  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_SubzoneConn::Add(_DynamicVectorClass_USubzoneConnectionStruct *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5890b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x5890b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5890c0*/
  {
    __3_YAXPAX_Z(v3); /*0x5890c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5890d0*/
  }
  BYTE1(this->m_C) = 0; /*0x5890db*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x5890e1*/
  if ( (a2 & 1) != 0 ) /*0x5890e8*/
    __3_YAXPAX_Z(this); /*0x5890eb*/
  return this->__pad_0; /*0x5890f5*/
}



// ==== 0x00589100  Subzone::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall Subzone::Constructor(Subzone *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx

  this->Subzone_field_0x04 = 0; /*0x58910d*/
  this->Subzone_field_0x08 = a2; /*0x589110*/
  this->IsInitialized = 1; /*0x589113*/
  this->IsAllocated = 0; /*0x589117*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58911a*/
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
      this->Subzone_field_0x04 = a3; /*0x58913f*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x58914c*/
      if ( v6 ) /*0x589156*/
      {
        v7 = v6; /*0x58915b*/
        if ( a2 - 1 >= 0 ) /*0x58915f*/
        {
          v8 = a2; /*0x589161*/
          do /*0x58916b*/
          {
            *(_DWORD *)v7 = 0; /*0x589162*/
            *(_BYTE *)(v7 + 4) = 0; /*0x589164*/
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
      this->Subzone_field_0x04 = v6; /*0x589171*/
      this->IsAllocated = 1; /*0x589174*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x589178*/
  *((_DWORD *)this + 5) = 10; /*0x58917e*/
  this->Items = 0; /*0x589185*/
  return this->__pad_0; /*0x58918a*/
}



// ==== 0x00589190  _DynamicVectorClass_USubzoneConnectionStruct::Release  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_SubzoneConn::Release(
        _DynamicVectorClass_USubzoneConnectionStruct *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
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
    LOBYTE(this->m_C) = 0; /*0x5891a8*/
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
      v6 = __2_YAPAXI_Z(8 * a2); /*0x5891b7*/
      if ( v6 ) /*0x5891c1*/
      {
        v7 = v6; /*0x5891c6*/
        if ( a2 - 1 >= 0 ) /*0x5891ca*/
        {
          v8 = a2; /*0x5891cc*/
          do /*0x5891d6*/
          {
            *(_DWORD *)v7 = 0; /*0x5891cd*/
            *(_BYTE *)(v7 + 4) = 0; /*0x5891cf*/
            v7 += 8; /*0x5891d2*/
            --v8; /*0x5891d5*/
          }
          while ( v8 ); /*0x5891d6*/
        }
        v5 = (char *)v6; /*0x5891d8*/
      }
      else
      {
        v5 = 0; /*0x5891dc*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x5891f7*/
    if ( !v5 ) /*0x5891fb*/
      return 0; /*0x589284*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x589201*/
    {
      v11 = *(_DWORD *)&this->__pad_5[3]; /*0x589206*/
      if ( a2 < v11 ) /*0x58920b*/
        v11 = a2; /*0x58920d*/
      v12 = 0; /*0x58920f*/
      if ( v11 > 0 ) /*0x589213*/
      {
        do /*0x589232*/
        {
          v13 = 8 * v12; /*0x589218*/
          v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 8 * v12++); /*0x589221*/
          *(_DWORD *)&v5[v13] = *v14; /*0x589228*/
          *(_DWORD *)&v5[v13 + 4] = v14[1]; /*0x58922e*/
        }
        while ( v12 < v11 ); /*0x589232*/
        v3 = a2; /*0x589234*/
      }
      if ( BYTE1(this->m_C) ) /*0x58923a*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x589243*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x58924b*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x589256*/
    *(_DWORD *)&this->__pad_5[3] = v3; /*0x58925c*/
    BYTE1(this->m_C) = a3 == 0; /*0x58925f*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_USubzoneConnectionStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x589268*/
  }
  v15 = *(_DWORD *)&this->__pad_5[3]; /*0x58926b*/
  if ( v15 < *(_DWORD *)this->__tail_10 ) /*0x589273*/
    *(_DWORD *)this->__tail_10 = v15; /*0x589275*/
  return 1; /*0x589278*/
}



// ==== 0x00589290  Vector8::EraseAt  this=Vector8  sig=csp ====
int __thiscall Vector8::EraseAt(Vector8 *this, int a2)
{
  int v2; // edx
  int result; // eax
  int v4; // edx
  int v5; // edx

  v2 = *((_DWORD *)this + 4); /*0x589290*/
  result = a2; /*0x589293*/
  if ( a2 >= v2 ) /*0x589299*/
  {
    LOBYTE(result) = 0; /*0x5892c4*/
  }
  else
  {
    v4 = v2 - 1; /*0x58929b*/
    *((_DWORD *)this + 4) = v4; /*0x58929e*/
    if ( a2 < v4 ) /*0x5892a1*/
    {
      do /*0x5892bc*/
      {
        v5 = *((_DWORD *)this + 1); /*0x5892a4*/
        ++result; /*0x5892a7*/
        *(_DWORD *)(v5 + 8 * result - 8) = *(_DWORD *)(v5 + 8 * result); /*0x5892ab*/
        *(_DWORD *)(v5 + 8 * result - 4) = *(_DWORD *)(v5 + 8 * result + 4); /*0x5892b3*/
      }
      while ( result < *((_DWORD *)this + 4) ); /*0x5892bc*/
    }
    LOBYTE(result) = 1; /*0x5892bf*/
  }
  return result; /*0x5892c1*/
}



// ==== 0x005892D0  _DynamicVectorClass_USubzoneConnectionStruct::GetSize  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_SubzoneConn::GetSize(_DynamicVectorClass_USubzoneConnectionStruct *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)this->__tail_10; /*0x5892d0*/
  result = 0; /*0x5892d3*/
  if ( v2 <= 0 ) /*0x5892d8*/
    return -1; /*0x5892ef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x5892de*/
  {
    if ( ++result >= v2 ) /*0x5892ed*/
      return -1; /*0x5892ed*/
  }
  return result; /*0x5892f2*/
}



// ==== 0x00589300  _VectorClass_UZoneConnectionClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall unknown::AddRef(_VectorClass_UZoneConnectionClass *this, int a2)
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
    v5 = *(_WORD **)&this->m_1[3]; /*0x58931a*/
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
int __thiscall MapClass::AllocateCellDataBuffer(void *this, int a2, char *a3)
{
  int v3; // ebp
  int result; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  char *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // ecx
  _DWORD *v14; // edx
  int v15; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x589373*/
  if ( !a2 ) /*0x58937f*/
  {
    result = (*(int (__thiscall **)(void *))(this->IsInitialized)(this); /*0x589492*/
    LOBYTE(result) = 1; /*0x589498*/
    return result; /*0x589498*/
  }
  result = (int)a3; /*0x589385*/
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
      result = (int)a3; /*0x5893fa*/
    }
  }
  else
  {
    result = (int)__2_YAPAXI_Z(16 * a2); /*0x589396*/
    if ( !result ) /*0x5893a0*/
    {
      v8 = 0; /*0x5893cd*/
      goto LABEL_14; /*0x5893cf*/
    }
    if ( a2 - 1 >= 0 ) /*0x5893a7*/
    {
      v6 = a2; /*0x5893a9*/
      v7 = result + 2; /*0x5893aa*/
      do /*0x5893c9*/
      {
        *(_WORD *)(v7 - 2) = 0; /*0x5893b0*/
        *(_WORD *)v7 = 0; /*0x5893b4*/
        *(_WORD *)(v7 + 2) = 0; /*0x5893b7*/
        *(_WORD *)(v7 + 4) = 0; /*0x5893bb*/
        *(_BYTE *)(v7 + 6) = 0; /*0x5893bf*/
        *(_DWORD *)(v7 + 10) = -1; /*0x5893c2*/
        v7 += 16; /*0x5893c5*/
        --v6; /*0x5893c8*/
      }
      while ( v6 ); /*0x5893c9*/
    }
  }
  v8 = result; /*0x5893fe*/
LABEL_14:
  this->IsInitialized = 1; /*0x589400*/
  if ( v8 ) /*0x589406*/
  {
    if ( this->Items ) /*0x589412*/
    {
      v11 = this->Capacity; /*0x589417*/
      if ( a2 < v11 ) /*0x58941c*/
        v11 = a2; /*0x58941e*/
      if ( v11 > 0 ) /*0x589422*/
      {
        v12 = 0; /*0x589424*/
        v15 = v11; /*0x589426*/
        do /*0x589456*/
        {
          v13 = (_DWORD *)(this->Items + v12); /*0x58942f*/
          v14 = (_DWORD *)(v12 + v8); /*0x589431*/
          v12 += 16; /*0x589434*/
          *v14 = *v13; /*0x589439*/
          v14[1] = v13[1]; /*0x58943e*/
          v14[2] = v13[2]; /*0x589444*/
          v14[3] = v13[3]; /*0x58944a*/
          --v15; /*0x589452*/
        }
        while ( v15 ); /*0x589456*/
        v3 = a2; /*0x589458*/
      }
      if ( this->IsAllocated ) /*0x58945c*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x589465*/
        this->Items = 0; /*0x58946d*/
      }
    }
    this->Items = v8; /*0x589478*/
    result = a3 == 0; /*0x58947b*/
    this->Capacity = v3; /*0x58947e*/
    this->IsAllocated = a3 == 0; /*0x589481*/
    LOBYTE(result) = 1; /*0x589487*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x58940b*/
  }
  return result; /*0x589408*/
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
char __thiscall unknown::Release(_DynamicVectorClass_UZoneConnectionClass *this, int a2, _WORD *a3)
{
  int v3; // ebx
  _WORD *v5; // esi
  _WORD *v6; // ebp
  CellStruct *v7; // esi
  int v8; // ebp
  int m_8; // ecx
  int v10; // eax
  _DWORD *v11; // ebx
  _DWORD *v12; // edx
  int v13; // eax

  v3 = a2; /*0x589551*/
  if ( a2 ) /*0x58955c*/
  {
    LOBYTE(this->m_C) = 0; /*0x589566*/
    if ( a3 ) /*0x58956c*/
    {
      if ( a2 - 1 >= 0 ) /*0x5895aa*/
      {
        v7 = (CellStruct *)(a3 + 2); /*0x5895ac*/
        v8 = a2; /*0x5895af*/
        do /*0x5895d4*/
        {
          LOWORD(v7[-1].field_2C4) = 0; /*0x5895b8*/
          HIWORD(v7[-1].field_2C4) = 0; /*0x5895bc*/
          CellStruct::Set(v7, 0, 0); /*0x5895c0*/
          LOBYTE(v7->field_4) = 0; /*0x5895c5*/
          *(_DWORD *)v7->__pad_8 = -1; /*0x5895c9*/
          v7 = (CellStruct *)((char *)v7 + 16); /*0x5895d0*/
          --v8; /*0x5895d3*/
        }
        while ( v8 ); /*0x5895d4*/
      }
      v5 = a3; /*0x5895d6*/
    }
    else
    {
      v5 = (_WORD *)__2_YAPAXI_Z(16 * a2); /*0x589579*/
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
    LOBYTE(this->m_C) = 1; /*0x5895dc*/
    if ( !v5 ) /*0x5895e0*/
      return 0; /*0x589674*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5895e6*/
    {
      m_8 = this->m_8; /*0x5895ed*/
      if ( v3 < m_8 ) /*0x5895f2*/
        m_8 = v3; /*0x5895f4*/
      if ( m_8 > 0 ) /*0x5895f8*/
      {
        v10 = 0; /*0x5895fa*/
        do /*0x58961e*/
        {
          v11 = &v5[v10]; /*0x5895ff*/
          v12 = (_DWORD *)(v10 * 2 + *(_DWORD *)&this->m_1[3]); /*0x589602*/
          v10 += 8; /*0x589604*/
          --m_8; /*0x589607*/
          *v11 = *v12; /*0x58960a*/
          v11[1] = v12[1]; /*0x58960f*/
          v11[2] = v12[2]; /*0x589615*/
          v11[3] = v12[3]; /*0x58961b*/
        }
        while ( m_8 ); /*0x58961e*/
        v3 = a2; /*0x589620*/
      }
      if ( BYTE1(this->m_C) ) /*0x589624*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58962f*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x589637*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x589649*/
    this->m_8 = v3; /*0x58964c*/
    BYTE1(this->m_C) = a3 == 0; /*0x58964f*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UZoneConnectionClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x589658*/
  }
  v13 = this->m_8; /*0x58965b*/
  if ( v13 < this->m_10 ) /*0x589663*/
    this->m_10 = v13; /*0x589665*/
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
int __thiscall unknown::Read(_DynamicVectorClass_UZoneConnectionClass *this, _WORD *a2)
{
  int m_10; // esi
  int result; // eax
  _WORD *i; // ecx

  m_10 = this->m_10; /*0x5896a2*/
  result = 0; /*0x5896a5*/
  if ( m_10 <= 0 ) /*0x5896aa*/
    return -1; /*0x5896e1*/
  for ( i = *(_WORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 8 ) /*0x5896b0*/
  {
    if ( ++result >= m_10 ) /*0x5896df*/
      return -1; /*0x5896df*/
  }
  return result; /*0x5896e4*/
}



// ==== 0x005896F0  _VectorClass_USubzoneTrackingStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_USubzoneTrackingStruct::AddRef(_VectorClass_USubzoneTrackingStruct *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  _DWORD *i; // ecx

  m_8 = this->m_8; /*0x5896f6*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5896ff*/
  {
    v3 = 0; /*0x589701*/
    if ( m_8 <= 0 ) /*0x589705*/
      return 1; /*0x589735*/
    v4 = (_DWORD *)(*(_DWORD *)(a2 + 4) + 28); /*0x58970d*/
    for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 28); *((_WORD *)i - 2) == *((_WORD *)v4 - 2) && *i == *v4; i += 9 ) /*0x589710*/
    {
      ++v3; /*0x589725*/
      v4 += 9; /*0x589726*/
      if ( v3 >= m_8 ) /*0x58972e*/
        return 1; /*0x58972e*/
    }
  }
  return 0; /*0x589730*/
}



// ==== 0x00589740  _VectorClass_USubzoneTrackingStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_USubzoneTrackingStruct::Release(_VectorClass_USubzoneTrackingStruct *this, int a2, int *a3)
{
  int v3; // edi
  _VectorClass_USubzoneTrackingStruct *v4; // ebp
  int *v5; // eax
  VectorClass *v6; // esi
  int *v7; // esi
  int *v8; // ecx
  int m_8; // eax
  int *v11; // edi
  char *v12; // esi
  int v13; // esi
  int v14; // eax
  void *v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // esi
  void *v19; // eax
  int *v20; // [esp+10h] [ebp-Ch]
  VectorClass *v22; // [esp+18h] [ebp-4h]
  int v23; // [esp+18h] [ebp-4h]
  void *v24; // [esp+18h] [ebp-4h]
  int v25; // [esp+20h] [ebp+4h]

  v3 = a2; /*0x589747*/
  v4 = this; /*0x58974d*/
  if ( a2 ) /*0x589755*/
  {
    LOBYTE(this->m_C) = 0; /*0x58975f*/
    if ( a3 ) /*0x589764*/
    {
      *a3 = a2; /*0x5897d9*/
      v7 = a3 + 1; /*0x5897de*/
      if ( a2 - 1 >= 0 ) /*0x5897e3*/
      {
        do /*0x589817*/
        {
          VectorClass::ConstructSubzone((VectorClass *)v7, 0, 0); /*0x5897f1*/
          *v7 = (int)&DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x5897f6*/
          v7[5] = 10; /*0x5897fc*/
          v7[4] = 0; /*0x5897ff*/
          (*(void (__thiscall **)(int *))(*v7 + 12))(v7); /*0x589806*/
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
        v6 = (VectorClass *)(v5 + 1); /*0x58977f*/
        v22 = (VectorClass *)(v5 + 1); /*0x589785*/
        if ( a2 - 1 >= 0 ) /*0x58978b*/
        {
          do /*0x5897bf*/
          {
            VectorClass::ConstructSubzone(v6, 0, 0); /*0x589799*/
            v6->vtable0 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58979e*/
            v6[1].Items = (void *)10; /*0x5897a4*/
            v6[1].vtable0 = 0; /*0x5897a7*/
            (*((void (__thiscall **)(VectorClass *))v6->vtable0 + 3))(v6); /*0x5897ae*/
            LOWORD(v6[1].Capacity) = 0; /*0x5897b1*/
            *(_DWORD *)&v6[1].IsInitialized = 0; /*0x5897b5*/
            v6[2].vtable0 = 0; /*0x5897b8*/
            v6 = (VectorClass *)((char *)v6 + 36); /*0x5897bb*/
            --v3; /*0x5897be*/
          }
          while ( v3 ); /*0x5897bf*/
          v3 = a2; /*0x5897c1*/
          v6 = v22; /*0x5897c5*/
          v4 = this; /*0x5897c9*/
        }
        v20 = (int *)v6; /*0x5897cd*/
      }
      else
      {
        v20 = 0; /*0x5897d3*/
      }
    }
    v8 = v20; /*0x58982c*/
    LOBYTE(v4->m_C) = 1; /*0x589830*/
    if ( v20 ) /*0x589836*/
    {
      if ( *(_DWORD *)&v4->m_1[3] ) /*0x589844*/
      {
        m_8 = v4->m_8; /*0x58984d*/
        if ( v3 < m_8 ) /*0x589852*/
          m_8 = v3; /*0x589854*/
        if ( m_8 > 0 ) /*0x589858*/
        {
          v11 = v20 + 5; /*0x58985f*/
          v23 = m_8; /*0x589864*/
          do /*0x5898a9*/
          {
            v12 = (char *)v11 + *(_DWORD *)&this->m_1[3] + -20 - (_DWORD)v20; /*0x589876*/
            VectorClass_USubzoneTrackingStruct::SetCapacity((VectorClass_USubzoneTrackingStruct *)(v11 - 5), v12); /*0x589879*/
            *(v11 - 1) = *((_DWORD *)v12 + 4); /*0x589881*/
            *v11 = *((_DWORD *)v12 + 5); /*0x589887*/
            *((_WORD *)v11 + 2) = *((_WORD *)v12 + 12); /*0x58988d*/
            v11[2] = *((_DWORD *)v12 + 7); /*0x589894*/
            v11[3] = *((_DWORD *)v12 + 8); /*0x58989e*/
            v11 += 9; /*0x5898a1*/
            --v23; /*0x5898a5*/
          }
          while ( v23 ); /*0x5898a9*/
          v3 = a2; /*0x5898ab*/
          v4 = this; /*0x5898af*/
        }
        if ( BYTE1(v4->m_C) ) /*0x5898b3*/
        {
          v13 = *(_DWORD *)&v4->m_1[3]; /*0x5898b8*/
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
                *(_DWORD *)v18 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x5898df*/
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
          *(_DWORD *)&v4->m_1[3] = 0; /*0x589916*/
        }
        v8 = v20; /*0x589919*/
      }
      *(_DWORD *)&v4->m_1[3] = v8; /*0x58991d*/
      v4->m_8 = v3; /*0x589928*/
      BYTE1(v4->m_C) = a3 == 0; /*0x58992f*/
      return 1; /*0x589934*/
    }
    else
    {
      return 0; /*0x58983b*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_USubzoneTrackingStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x589942*/
    return 1; /*0x589948*/
  }
}



// ==== 0x00589960  _VectorClass_USubzoneTrackingStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_USubzoneTrackingStruct::ddtor(_VectorClass_USubzoneTrackingStruct *this)
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

  v2 = *(_DWORD *)&this->m_1[3]; /*0x589967*/
  if ( v2 && BYTE1(this->m_C) ) /*0x58996e*/
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
        *(_DWORD *)v7 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x589997*/
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
    *(_DWORD *)&this->m_1[3] = 0; /*0x5899c8*/
  }
  BYTE1(this->m_C) = 0; /*0x5899cb*/
  this->m_8 = 0; /*0x5899ce*/
}



// ==== 0x005899E0  _VectorClass_USubzoneTrackingStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_USubzoneTrackingStruct::GetSize(_VectorClass_USubzoneTrackingStruct *this, int a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5899e0*/
    return 0; /*0x5899ee*/
  m_8 = this->m_8; /*0x5899f4*/
  result = 0; /*0x5899f7*/
  if ( m_8 <= 0 ) /*0x5899fb*/
    return -1; /*0x589a22*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 28); /*0x589a04*/
        *((_WORD *)i - 2) != *(_WORD *)(a2 + 24) || *i != *(_DWORD *)(a2 + 28);
        i += 9 )
  {
    if ( ++result >= m_8 ) /*0x589a20*/
      return -1; /*0x589a20*/
  }
  return result; /*0x5899eb*/
}



// ==== 0x00589A30  _VectorClass_USubzoneTrackingStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_USubzoneTrackingStruct::GetCapacity(
        _VectorClass_USubzoneTrackingStruct *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x589a30*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0x24u; /*0x589a4e*/
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
    v10 = this->q008; /*0x589b15*/
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
  this->q008 = v3; /*0x589b93*/
  this->IsAllocated = a3 == 0; /*0x589b96*/
LABEL_28:
  v15 = this->q008; /*0x589ba3*/
  if ( v15 < this->Items ) /*0x589bab*/
    this->Items = v15; /*0x589bad*/
  return 1; /*0x589bb0*/
}



// ==== 0x00589BD0  MapClass::allocateMapBuffers  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MapClass::allocateMapBuffers(MapClass *this)
{
  this->MapClass_field_0x4 = 0; /*0x589bd6*/
  this->MapClass_field_0x8 = 0; /*0x589bd9*/
  LOBYTE(this->MapClass_field_0xC) = 1; /*0x589bdc*/
  BYTE1(this->MapClass_field_0xC) = 0; /*0x589be0*/
  this->MapClass_field_0x0 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x589be3*/
  this->MapClass_field_0x14 = (void *)10; /*0x589be9*/
  this->MapClass_field_0x10 = 0; /*0x589bf0*/
  VectorClass::CleanupSubzone((int)this); /*0x589bf3*/
  *(_WORD *)this->__pad_18 = 0; /*0x589bf9*/
  *(_DWORD *)&this->__pad_18[4] = 0; /*0x589bfd*/
  *(_DWORD *)&this->__pad_18[8] = 0; /*0x589c00*/
  return &this->MapClass_field_0x0; /*0x589c05*/
}



// ==== 0x00589C10  _DynamicVectorClass_USubzoneTrackingStruct::FindByCoord  this=DynamicVector  sig=csp ====
int __thiscall SubzoneConnectionVector::FindByCoord(_DynamicVectorClass_USubzoneTrackingStruct *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)&this->m_D[3]; /*0x589c10*/
  result = 0; /*0x589c15*/
  if ( v2 <= 0 ) /*0x589c1b*/
    return -1; /*0x589c42*/
  for ( i = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 28); /*0x589c24*/
        *((_WORD *)i - 2) != *(_WORD *)(a2 + 24) || *i != *(_DWORD *)(a2 + 28);
        i += 9 )
  {
    if ( ++result >= v2 ) /*0x589c40*/
      return -1; /*0x589c40*/
  }
  return result; /*0x589c45*/
}



// ==== 0x00589C50  TileVector::PushBack  this=TileVector  sig=csp ====
int __thiscall TileVector::PushBack(TileVector *this, _DWORD *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // edx

  v3 = *((_DWORD *)this + 2); /*0x589c53*/
  result = *((_DWORD *)this + 4); /*0x589c56*/
  if ( result < v3 /*0x589c7d*/
    || (*((_BYTE *)this + 13) || !v3)
    && (result = *((_DWORD *)this + 5), result > 0)
    && (result = (*(int (__thiscall **)(TileVector *, int, _DWORD))(*(_DWORD *)this + 8))(this, v3 + result, 0),
        (_BYTE)result) )
  {
    result = *((_DWORD *)this + 4); /*0x589c85*/
    v5 = *((_DWORD *)this + 1); /*0x589c88*/
    *((_DWORD *)this + 4) = result + 1; /*0x589c8e*/
    *(_DWORD *)(v5 + 4 * result) = *a2; /*0x589c98*/
    LOBYTE(result) = 1; /*0x589c9b*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x589c7f*/
  }
  return result; /*0x589c81*/
}



// ==== 0x00589CA0  _VectorClass_PAVCellClass::InitCellVe_vt01  this=VectorClass  sig=csp ====
char __thiscall MapClass::InitCellVe_vt01(_VectorClass_PAVCellClass *this, int a2)
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
    v4 = *(_DWORD **)&this->m_1[3]; /*0x589cb5*/
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
char __thiscall RadarClass::updateRadarCells(RadarClass *this, int a2, _DWORD *a3)
{
  _DWORD *RadarClass_field_0x0; // ecx
  int v4; // edx
  char *v5; // esi
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // ecx

  RadarClass_field_0x0 = this->RadarClass_field_0x0; /*0x589e24*/
  v4 = RadarClass_field_0x0[6 * a2 + 4]; /*0x589e30*/
  v5 = (char *)&RadarClass_field_0x0[6 * a2]; /*0x589e34*/
  v6 = (_DWORD *)*((_DWORD *)v5 + 1); /*0x589e37*/
  v7 = v4 - 1; /*0x589e3b*/
  if ( v4 - 1 < 0 ) /*0x589e40*/
  {
LABEL_4:
    v8 = *((_DWORD *)v5 + 2); /*0x589e4e*/
    if ( v4 < v8 /*0x589e70*/
      || (v5[13] || !v8)
      && (v9 = *((_DWORD *)v5 + 5), v9 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v5 + 8))(v5, v8 + v9, 0) )
    {
      v10 = *((_DWORD *)v5 + 4); /*0x589e77*/
      v11 = v10 + 1; /*0x589e7a*/
      v12 = 3 * v10; /*0x589e7d*/
      v13 = *((_DWORD *)v5 + 1); /*0x589e80*/
      *((_DWORD *)v5 + 4) = v11; /*0x589e83*/
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
char __thiscall VectorClass_W4PassabilityType::AddRef(_VectorClass_W4PassabilityType *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x589eb2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x589ebd*/
  {
    v3 = 0; /*0x589ebf*/
    if ( m_8 <= 0 ) /*0x589ec3*/
      return 1; /*0x589ee3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x589ec5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x589ecb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x589ed4*/
    {
      ++v3; /*0x589ed6*/
      ++v4; /*0x589ed7*/
      if ( v3 >= m_8 ) /*0x589edc*/
        return 1; /*0x589edc*/
    }
  }
  return 0; /*0x589ede*/
}



// ==== 0x00589EF0  _VectorClass_W4PassabilityType::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::Release(_VectorClass_W4PassabilityType *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x589efc*/
  {
    LOBYTE(this->m_C) = 0; /*0x589f06*/
    if ( a3 ) /*0x589f0c*/
      v4 = a3; /*0x589f22*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x589f1e*/
    LOBYTE(this->m_C) = 1; /*0x589f26*/
    if ( v4 ) /*0x589f2a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x589f35*/
      {
        m_8 = this->m_8; /*0x589f3c*/
        if ( a2 < m_8 ) /*0x589f41*/
          m_8 = a2; /*0x589f43*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x589f49*/
          ++i; /*0x589f4e*/
        if ( BYTE1(this->m_C) ) /*0x589f5b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x589f66*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x589f6e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x589f77*/
      this->m_8 = a2; /*0x589f7f*/
      BYTE1(this->m_C) = a3 == 0; /*0x589f82*/
      return 1; /*0x589f88*/
    }
    else
    {
      return 0; /*0x589f2f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_W4PassabilityType *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x589f92*/
    return 1; /*0x589f98*/
  }
}



// ==== 0x00589FA0  _VectorClass_W4PassabilityType::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_W4PassabilityType::ddtor(_VectorClass_W4PassabilityType *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x589fad*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x589fb3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x589fbb*/
  }
  BYTE1(this->m_C) = 0; /*0x589fbe*/
  this->m_8 = 0; /*0x589fc1*/
}



// ==== 0x00589FD0  _VectorClass_W4PassabilityType::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::GetSize(_VectorClass_W4PassabilityType *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x589fd0*/
    return 0; /*0x589fd8*/
  m_8 = this->m_8; /*0x589fde*/
  result = 0; /*0x589fe1*/
  if ( m_8 <= 0 ) /*0x589fe5*/
    return -1; /*0x589ffc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x589feb*/
  {
    if ( ++result >= m_8 ) /*0x589ffa*/
      return -1; /*0x589ffa*/
  }
  return result; /*0x589fda*/
}



// ==== 0x0058A010  _VectorClass_W4PassabilityType::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_W4PassabilityType::GetCapacity(_VectorClass_W4PassabilityType *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x58a010*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x58a025*/
  else
    return 0; /*0x58a017*/
}



// ==== 0x0058A030  _DynamicVectorClass_W4PassabilityType::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::SetCapacity(
        _DynamicVectorClass_W4PassabilityType *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x58a03c*/
  {
    LOBYTE(this->m_C) = 0; /*0x58a042*/
    if ( a3 ) /*0x58a048*/
      v4 = a3; /*0x58a05e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x58a05a*/
    LOBYTE(this->m_C) = 1; /*0x58a062*/
    if ( !v4 ) /*0x58a066*/
      return 0; /*0x58a0da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x58a068*/
    {
      m_8 = this->m_8; /*0x58a06f*/
      if ( a2 < m_8 ) /*0x58a074*/
        m_8 = a2; /*0x58a076*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x58a07c*/
        ++i; /*0x58a081*/
      if ( BYTE1(this->m_C) ) /*0x58a08e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58a099*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x58a0a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x58a0aa*/
    this->m_8 = a2; /*0x58a0b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x58a0b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_W4PassabilityType *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a0be*/
  }
  v7 = this->m_8; /*0x58a0c1*/
  if ( v7 < this->m_10 ) /*0x58a0c9*/
    this->m_10 = v7; /*0x58a0cb*/
  return 1; /*0x58a0ce*/
}



// ==== 0x0058A0E0  _DynamicVectorClass_W4PassabilityType::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::FindItemIndex(_DynamicVectorClass_W4PassabilityType *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x58a0e0*/
  result = 0; /*0x58a0e3*/
  if ( m_10 <= 0 ) /*0x58a0e8*/
    return -1; /*0x58a0ff*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x58a0ee*/
  {
    if ( ++result >= m_10 ) /*0x58a0fd*/
      return -1; /*0x58a0fd*/
  }
  return result; /*0x58a102*/
}



// ==== 0x0058A110  _VectorClass_U_HashObject_II::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UHashObject_uint_uint::AddRef(_VectorClass_U_HashObject_II *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x58a112*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x58a11d*/
  {
    v3 = 0; /*0x58a11f*/
    if ( m_8 <= 0 ) /*0x58a123*/
      return 1; /*0x58a143*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x58a125*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x58a12b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x58a134*/
    {
      ++v3; /*0x58a136*/
      v4 += 2; /*0x58a137*/
      if ( v3 >= m_8 ) /*0x58a13c*/
        return 1; /*0x58a13c*/
    }
  }
  return 0; /*0x58a13e*/
}



// ==== 0x0058A150  _DynamicVectorClass_U_HashObject_II::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::SetCapacity_0(
        _DynamicVectorClass_U_HashObject_II *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  int m_8; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax

  if ( a2 ) /*0x58a15c*/
  {
    v4 = a3; /*0x58a162*/
    LOBYTE(this->m_C) = 0; /*0x58a166*/
    if ( a3 ) /*0x58a16c*/
    {
      v6 = a3; /*0x58a194*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x58a176*/
      if ( v5 ) /*0x58a180*/
        v6 = (_DWORD *)v5; /*0x58a185*/
      else
        v6 = 0; /*0x58a18d*/
    }
    LOBYTE(this->m_C) = 1; /*0x58a19c*/
    if ( !v6 ) /*0x58a1a0*/
      return 0; /*0x58a220*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x58a1a2*/
    {
      m_8 = this->m_8; /*0x58a1a9*/
      if ( a2 < m_8 ) /*0x58a1ae*/
        m_8 = a2; /*0x58a1b0*/
      v8 = 0; /*0x58a1b2*/
      if ( m_8 > 0 ) /*0x58a1b6*/
      {
        do /*0x58a1ce*/
        {
          v9 = *(_DWORD *)&this->m_1[3]; /*0x58a1b8*/
          ++v8; /*0x58a1bb*/
          v6[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x58a1c2*/
          v6[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x58a1ca*/
        }
        while ( v8 < m_8 ); /*0x58a1ce*/
        v4 = a3; /*0x58a1d0*/
      }
      if ( BYTE1(this->m_C) ) /*0x58a1d4*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58a1df*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x58a1e7*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x58a1f0*/
    this->m_8 = a2; /*0x58a1f8*/
    BYTE1(this->m_C) = v4 == 0; /*0x58a1fb*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_U_HashObject_II *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a204*/
  }
  v10 = this->m_8; /*0x58a207*/
  if ( v10 < this->m_10 ) /*0x58a20f*/
    this->m_10 = v10; /*0x58a211*/
  return 1; /*0x58a214*/
}



// ==== 0x0058A230  _DynamicVectorClass_U_HashObject_II::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::FindItemIndex_0(_DynamicVectorClass_U_HashObject_II *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x58a230*/
  result = 0; /*0x58a233*/
  if ( m_10 <= 0 ) /*0x58a238*/
    return -1; /*0x58a24f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x58a23e*/
  {
    if ( ++result >= m_10 ) /*0x58a24d*/
      return -1; /*0x58a24d*/
  }
  return result; /*0x58a252*/
}



// ==== 0x0058A260  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UHashObject_uint_SubzoneConn::AddRef(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x58a262*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x58a26d*/
  {
    v3 = 0; /*0x58a26f*/
    if ( m_8 <= 0 ) /*0x58a273*/
      return 1; /*0x58a293*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x58a275*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x58a27b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x58a284*/
    {
      ++v3; /*0x58a286*/
      v4 += 3; /*0x58a287*/
      if ( v3 >= m_8 ) /*0x58a28c*/
        return 1; /*0x58a28c*/
    }
  }
  return 0; /*0x58a28e*/
}



// ==== 0x0058A2A0  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::SetCapacity_1  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_W4PassabilityType::SetCapacity_1(
        _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  char *v13; // ebx
  _DWORD *v14; // edx
  int v15; // eax

  v3 = a2; /*0x58a2a2*/
  if ( a2 ) /*0x58a2ae*/
  {
    v5 = a3; /*0x58a2b4*/
    LOBYTE(this->m_C) = 0; /*0x58a2b8*/
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
      v6 = __2_YAPAXI_Z(12 * a2); /*0x58a2c7*/
      if ( v6 ) /*0x58a2d1*/
      {
        if ( a2 - 1 >= 0 ) /*0x58a2d8*/
        {
          v7 = v6 + 4; /*0x58a2da*/
          v8 = a2; /*0x58a2dd*/
          do /*0x58a2e7*/
          {
            *(_DWORD *)v7 = 0; /*0x58a2de*/
            *(_BYTE *)(v7 + 4) = 0; /*0x58a2e0*/
            v7 += 12; /*0x58a2e3*/
            --v8; /*0x58a2e6*/
          }
          while ( v8 ); /*0x58a2e7*/
        }
        v5 = (char *)v6; /*0x58a2e9*/
      }
      else
      {
        v5 = 0; /*0x58a2ed*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x58a309*/
    if ( !v5 ) /*0x58a30d*/
      return 0; /*0x58a391*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x58a30f*/
    {
      m_8 = this->m_8; /*0x58a314*/
      if ( a2 < m_8 ) /*0x58a319*/
        m_8 = a2; /*0x58a31b*/
      if ( m_8 > 0 ) /*0x58a31f*/
      {
        v12 = 0; /*0x58a321*/
        do /*0x58a33f*/
        {
          v13 = &v5[v12]; /*0x58a326*/
          v14 = (_DWORD *)(v12 + *(_DWORD *)&this->m_1[3]); /*0x58a329*/
          v12 += 12; /*0x58a32b*/
          --m_8; /*0x58a32e*/
          *(_DWORD *)v13 = *v14; /*0x58a331*/
          *((_DWORD *)v13 + 1) = v14[1]; /*0x58a336*/
          *((_DWORD *)v13 + 2) = v14[2]; /*0x58a33c*/
        }
        while ( m_8 ); /*0x58a33f*/
        v3 = a2; /*0x58a341*/
      }
      if ( BYTE1(this->m_C) ) /*0x58a347*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58a350*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x58a358*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x58a363*/
    this->m_8 = v3; /*0x58a369*/
    BYTE1(this->m_C) = a3 == 0; /*0x58a36c*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a375*/
  }
  v15 = this->m_8; /*0x58a378*/
  if ( v15 < this->m_10 ) /*0x58a380*/
    this->m_10 = v15; /*0x58a382*/
  return 1; /*0x58a385*/
}



// ==== 0x0058A3A0  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::FindItemIndex_1  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_W4PassabilityType::FindItemIndex_1(
        _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x58a3a0*/
  result = 0; /*0x58a3a3*/
  if ( m_10 <= 0 ) /*0x58a3a8*/
    return -1; /*0x58a3bf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 3 ) /*0x58a3ae*/
  {
    if ( ++result >= m_10 ) /*0x58a3bd*/
      return -1; /*0x58a3bd*/
  }
  return result; /*0x58a3c2*/
}



// ==== 0x0058A3D0  _VectorClass_UZoneConnectionClass::Destruct  this=VectorClass  sig=csp ====
_DWORD *__thiscall ZoneConnectionVector::Destruct(_VectorClass_UZoneConnectionClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x58a3d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ZoneConnectionClass>::`vftable'; /*0x58a3d6*/
  if ( v3 && this->IsAllocated ) /*0x58a3e0*/
  {
    __3_YAXPAX_Z(v3); /*0x58a3e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58a3f0*/
  }
  this->IsAllocated = 0; /*0x58a3fb*/
  this->Capacity = 0; /*0x58a401*/
  if ( (a2 & 1) != 0 ) /*0x58a408*/
    __3_YAXPAX_Z(this); /*0x58a40b*/
  return this->__pad_0; /*0x58a415*/
}



// ==== 0x0058A420  _DynamicVectorClass_UZoneConnectionClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall unknown::QueryInterface(_DynamicVectorClass_UZoneConnectionClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x58a423*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ZoneConnectionClass>::`vftable'; /*0x58a426*/
  if ( v3 && BYTE1(this->m_C) ) /*0x58a430*/
  {
    __3_YAXPAX_Z(v3); /*0x58a438*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58a440*/
  }
  BYTE1(this->m_C) = 0; /*0x58a44b*/
  this->m_8 = 0; /*0x58a451*/
  if ( (a2 & 1) != 0 ) /*0x58a458*/
    __3_YAXPAX_Z(this); /*0x58a45b*/
  return this->__pad_0; /*0x58a465*/
}



// ==== 0x0058A470  _VectorClass_USubzoneTrackingStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_USubzoneTrackingStruct::QueryInterface(
        _VectorClass_USubzoneTrackingStruct *this,
        char a2)
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

  v3 = *(_DWORD *)&this->m_1[3]; /*0x58a477*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SubzoneTrackingStruct>::`vftable'; /*0x58a47a*/
  if ( v3 && BYTE1(this->m_C) ) /*0x58a484*/
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
        *(_DWORD *)v8 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58a4ad*/
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
    *(_DWORD *)&this->m_1[3] = 0; /*0x58a4de*/
  }
  BYTE1(this->m_C) = 0; /*0x58a4e5*/
  this->m_8 = 0; /*0x58a4ea*/
  if ( (a2 & 1) != 0 ) /*0x58a4ed*/
    __3_YAXPAX_Z(this); /*0x58a4f0*/
  return this->__pad_0; /*0x58a4fa*/
}



// ==== 0x0058A500  Subzone::CopyDataFrom  this=Subzone  sig=csp ====
int *__thiscall Subzone::CopyDataFrom(Subzone *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int Subzone_field_0x08; // ecx
  int v8; // eax
  int v9; // edx
  int Subzone_field_0x04; // ecx

  if ( this != (Subzone *)a2 ) /*0x58a50c*/
  {
    (*(void (__thiscall **)(Subzone *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a510*/
    v3 = *(_DWORD *)(a2 + 8); /*0x58a513*/
    this->Subzone_field_0x08 = v3; /*0x58a51a*/
    if ( v3 ) /*0x58a51d*/
    {
      v4 = __2_YAPAXI_Z(8 * v3); /*0x58a527*/
      if ( v4 ) /*0x58a531*/
      {
        v5 = v4; /*0x58a536*/
        if ( v3 - 1 >= 0 ) /*0x58a53a*/
        {
          v6 = v3; /*0x58a53c*/
          do /*0x58a546*/
          {
            *(_DWORD *)v5 = 0; /*0x58a53d*/
            *(_BYTE *)(v5 + 4) = 0; /*0x58a53f*/
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
      this->Subzone_field_0x04 = v4; /*0x58a54e*/
      if ( v4 ) /*0x58a551*/
      {
        Subzone_field_0x08 = this->Subzone_field_0x08; /*0x58a553*/
        v8 = 0; /*0x58a556*/
        *((_BYTE *)this + 13) = 1; /*0x58a55a*/
        if ( Subzone_field_0x08 > 0 ) /*0x58a55e*/
        {
          do /*0x58a57a*/
          {
            v9 = *(_DWORD *)(a2 + 4); /*0x58a560*/
            Subzone_field_0x04 = this->Subzone_field_0x04; /*0x58a563*/
            *(_DWORD *)(Subzone_field_0x04 + 8 * v8) = *(_DWORD *)(v9 + 8 * v8); /*0x58a569*/
            *(_DWORD *)(Subzone_field_0x04 + 8 * v8 + 4) = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x58a570*/
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
  this->q004 = *(_DWORD *)(a2 + 16); /*0x58a588*/
  *((_DWORD *)this + 5) = *(_DWORD *)(a2 + 20); /*0x58a58e*/
  *((_WORD *)this + 12) = *(_WORD *)(a2 + 24); /*0x58a595*/
  *((_DWORD *)this + 7) = *(_DWORD *)(a2 + 28); /*0x58a59c*/
  this->q008 = *(_DWORD *)(a2 + 32); /*0x58a5a2*/
  return (int *)this->__pad_0; /*0x58a587*/
}



// ==== 0x0058A5B0  _DynamicVectorClass_USubzoneTrackingStruct::Destruct  this=DynamicVector  sig=csp ====
_DWORD *__thiscall SubzoneTrackingVector::Destruct(_DynamicVectorClass_USubzoneTrackingStruct *this, char a2)
{
  int v3; // ecx
  int v4; // eax
  void *v5; // ebx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // ebp

  v3 = *(_DWORD *)&this->m_1[3]; /*0x58a5b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SubzoneTrackingStruct>::`vftable'; /*0x58a5b6*/
  if ( v3 && this->m_D[0] ) /*0x58a5c0*/
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
        *v8 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58a5e5*/
        VectorClass::Cleanup5((int)v8); /*0x58a5eb*/
        --v9; /*0x58a5f0*/
      }
      while ( v9 ); /*0x58a5f1*/
    }
    __3_YAXPAX_Z(v5); /*0x58a5f5*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58a5ff*/
  }
  this->m_D[0] = 0; /*0x58a60a*/
  this->m_8 = 0; /*0x58a610*/
  if ( (a2 & 1) != 0 ) /*0x58a617*/
    __3_YAXPAX_Z(this); /*0x58a61a*/
  return this->__pad_0; /*0x58a624*/
}



// ==== 0x0058A630  _DynamicVectorClass_U_HashObject_II::Constructor  this=DynamicVector  sig=csp ====
char *__thiscall VectorClass_W4PassabilityType::Constructor(_DynamicVectorClass_U_HashObject_II *this, char a2)
{
  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x58a63a*/
  {
    v3 = *((_DWORD *)this - 1); /*0x58a63c*/
    v4 = (char *)this - 4; /*0x58a640*/
    v5 = 3 * v3; /*0x58a643*/
    v6 = v3 - 1; /*0x58a646*/
    v7 = &this->__pad_0[8 * v5]; /*0x58a647*/
    if ( v6 >= 0 ) /*0x58a64a*/
    {
      v8 = v6 + 1; /*0x58a64d*/
      do /*0x58a67a*/
      {
        v9 = (void *)*((_DWORD *)v7 - 5); /*0x58a652*/
        v7 -= 24; /*0x58a655*/
        *(_DWORD *)v7 = &VectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x58a65a*/
        if ( v9 && v7[13] ) /*0x58a662*/
        {
          __3_YAXPAX_Z(v9); /*0x58a668*/
          *((_DWORD *)v7 + 1) = 0; /*0x58a670*/
        }
        --v8; /*0x58a673*/
        v7[13] = 0; /*0x58a674*/
        *((_DWORD *)v7 + 2) = 0; /*0x58a677*/
      }
      while ( v8 ); /*0x58a67a*/
    }
    if ( (a2 & 1) != 0 ) /*0x58a682*/
      __3_YAXPAX_Z(v4); /*0x58a685*/
    return v4; /*0x58a68d*/
  }
  else
  {
    v11 = *(void **)&this->m_1[3]; /*0x58a695*/
    *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x58a69c*/
    if ( v11 && BYTE1(this->m_C) ) /*0x58a6a4*/
    {
      __3_YAXPAX_Z(v11); /*0x58a6aa*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x58a6b2*/
    }
    BYTE1(this->m_C) = 0; /*0x58a6b9*/
    this->m_8 = 0; /*0x58a6be*/
    if ( (a2 & 1) != 0 ) /*0x58a6c1*/
      __3_YAXPAX_Z(this); /*0x58a6c4*/
    return this->__pad_0; /*0x58a6cc*/
  }
}



// ==== 0x0058A6E0  _VectorClass_U_HashObject_II::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UHashObject_uint_uint::Release(_VectorClass_U_HashObject_II *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  int m_8; // ecx
  int v9; // eax
  int v10; // edx

  if ( a2 ) /*0x58a6ec*/
  {
    v4 = a3; /*0x58a6f2*/
    LOBYTE(this->m_C) = 0; /*0x58a6f6*/
    if ( a3 ) /*0x58a6fc*/
    {
      v6 = a3; /*0x58a724*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x58a706*/
      if ( v5 ) /*0x58a710*/
        v6 = (_DWORD *)v5; /*0x58a715*/
      else
        v6 = 0; /*0x58a71d*/
    }
    LOBYTE(this->m_C) = 1; /*0x58a72c*/
    if ( v6 ) /*0x58a730*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x58a73b*/
      {
        m_8 = this->m_8; /*0x58a742*/
        if ( a2 < m_8 ) /*0x58a747*/
          m_8 = a2; /*0x58a749*/
        v9 = 0; /*0x58a74b*/
        if ( m_8 > 0 ) /*0x58a74f*/
        {
          do /*0x58a767*/
          {
            v10 = *(_DWORD *)&this->m_1[3]; /*0x58a751*/
            ++v9; /*0x58a754*/
            v6[2 * v9 - 2] = *(_DWORD *)(v10 + 8 * v9 - 8); /*0x58a75b*/
            v6[2 * v9 - 1] = *(_DWORD *)(v10 + 8 * v9 - 4); /*0x58a763*/
          }
          while ( v9 < m_8 ); /*0x58a767*/
          v4 = a3; /*0x58a769*/
        }
        if ( BYTE1(this->m_C) ) /*0x58a76d*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58a778*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x58a780*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v6; /*0x58a789*/
      this->m_8 = a2; /*0x58a791*/
      BYTE1(this->m_C) = v4 == 0; /*0x58a794*/
      return 1; /*0x58a79a*/
    }
    else
    {
      return 0; /*0x58a735*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_U_HashObject_II *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a7a4*/
    return 1; /*0x58a7aa*/
  }
}



// ==== 0x0058A7B0  _VectorClass_U_HashObject_II::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UHashObject_uint_uint::ddtor(_VectorClass_U_HashObject_II *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x58a7bd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58a7c3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58a7cb*/
  }
  BYTE1(this->m_C) = 0; /*0x58a7ce*/
  this->m_8 = 0; /*0x58a7d1*/
}



// ==== 0x0058A7E0  _VectorClass_U_HashObject_II::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UHashObject_uint_uint::GetSize(_VectorClass_U_HashObject_II *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x58a7e0*/
    return 0; /*0x58a7e8*/
  m_8 = this->m_8; /*0x58a7ee*/
  result = 0; /*0x58a7f1*/
  if ( m_8 <= 0 ) /*0x58a7f5*/
    return -1; /*0x58a80c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 2 ) /*0x58a7fb*/
  {
    if ( ++result >= m_8 ) /*0x58a80a*/
      return -1; /*0x58a80a*/
  }
  return result; /*0x58a7ea*/
}



// ==== 0x0058A820  _VectorClass_U_HashObject_II::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UHashObject_uint_uint::GetCapacity(_VectorClass_U_HashObject_II *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x58a820*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x58a835*/
  else
    return 0; /*0x58a827*/
}



// ==== 0x0058A840  _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct::Constructor_0  this=DynamicVector  sig=csp ====
char *__thiscall VectorClass_W4PassabilityType::Constructor_0(
        _DynamicVectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        char a2)
{
  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x58a84a*/
  {
    v3 = *((_DWORD *)this - 1); /*0x58a84c*/
    v4 = (char *)this - 4; /*0x58a850*/
    v5 = 3 * v3; /*0x58a853*/
    v6 = v3 - 1; /*0x58a856*/
    v7 = &this->__pad_0[8 * v5]; /*0x58a857*/
    if ( v6 >= 0 ) /*0x58a85a*/
    {
      v8 = v6 + 1; /*0x58a85d*/
      do /*0x58a88a*/
      {
        v9 = (void *)*((_DWORD *)v7 - 5); /*0x58a862*/
        v7 -= 24; /*0x58a865*/
        *(_DWORD *)v7 = &VectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable'; /*0x58a86a*/
        if ( v9 && v7[13] ) /*0x58a872*/
        {
          __3_YAXPAX_Z(v9); /*0x58a878*/
          *((_DWORD *)v7 + 1) = 0; /*0x58a880*/
        }
        --v8; /*0x58a883*/
        v7[13] = 0; /*0x58a884*/
        *((_DWORD *)v7 + 2) = 0; /*0x58a887*/
      }
      while ( v8 ); /*0x58a88a*/
    }
    if ( (a2 & 1) != 0 ) /*0x58a892*/
      __3_YAXPAX_Z(v4); /*0x58a895*/
    return v4; /*0x58a89d*/
  }
  else
  {
    v11 = *(void **)&this->m_1[3]; /*0x58a8a5*/
    *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable'; /*0x58a8ac*/
    if ( v11 && BYTE1(this->m_C) ) /*0x58a8b4*/
    {
      __3_YAXPAX_Z(v11); /*0x58a8ba*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x58a8c2*/
    }
    BYTE1(this->m_C) = 0; /*0x58a8c9*/
    this->m_8 = 0; /*0x58a8ce*/
    if ( (a2 & 1) != 0 ) /*0x58a8d1*/
      __3_YAXPAX_Z(this); /*0x58a8d4*/
    return this->__pad_0; /*0x58a8dc*/
  }
}



// ==== 0x0058A8F0  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UHashObject_uint_SubzoneConn::Release(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  char *v14; // ebx
  _DWORD *v15; // edx

  v3 = a2; /*0x58a8f2*/
  if ( a2 ) /*0x58a8fe*/
  {
    v5 = a3; /*0x58a904*/
    LOBYTE(this->m_C) = 0; /*0x58a908*/
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
      v6 = __2_YAPAXI_Z(12 * a2); /*0x58a917*/
      if ( v6 ) /*0x58a921*/
      {
        if ( a2 - 1 >= 0 ) /*0x58a928*/
        {
          v7 = v6 + 4; /*0x58a92a*/
          v8 = a2; /*0x58a92d*/
          do /*0x58a937*/
          {
            *(_DWORD *)v7 = 0; /*0x58a92e*/
            *(_BYTE *)(v7 + 4) = 0; /*0x58a930*/
            v7 += 12; /*0x58a933*/
            --v8; /*0x58a936*/
          }
          while ( v8 ); /*0x58a937*/
        }
        v5 = (char *)v6; /*0x58a939*/
      }
      else
      {
        v5 = 0; /*0x58a93d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x58a959*/
    if ( v5 ) /*0x58a95d*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x58a968*/
      {
        m_8 = this->m_8; /*0x58a96d*/
        if ( a2 < m_8 ) /*0x58a972*/
          m_8 = a2; /*0x58a974*/
        if ( m_8 > 0 ) /*0x58a978*/
        {
          v13 = 0; /*0x58a97a*/
          do /*0x58a998*/
          {
            v14 = &v5[v13]; /*0x58a97f*/
            v15 = (_DWORD *)(v13 + *(_DWORD *)&this->m_1[3]); /*0x58a982*/
            v13 += 12; /*0x58a984*/
            --m_8; /*0x58a987*/
            *(_DWORD *)v14 = *v15; /*0x58a98a*/
            *((_DWORD *)v14 + 1) = v15[1]; /*0x58a98f*/
            *((_DWORD *)v14 + 2) = v15[2]; /*0x58a995*/
          }
          while ( m_8 ); /*0x58a998*/
          v3 = a2; /*0x58a99a*/
        }
        if ( BYTE1(this->m_C) ) /*0x58a9a0*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58a9a9*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x58a9b1*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x58a9bc*/
      this->m_8 = v3; /*0x58a9c2*/
      BYTE1(this->m_C) = a3 == 0; /*0x58a9c5*/
      return 1; /*0x58a9cb*/
    }
    else
    {
      return 0; /*0x58a962*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_U_HashObject_IUSubzoneConnectionStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58a9d5*/
    return 1; /*0x58a9db*/
  }
}



// ==== 0x0058A9F0  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UHashObject_uint_SubzoneConn::ddtor(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x58a9fd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x58aa03*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58aa0b*/
  }
  BYTE1(this->m_C) = 0; /*0x58aa0e*/
  this->m_8 = 0; /*0x58aa11*/
}



// ==== 0x0058AA20  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UHashObject_uint_SubzoneConn::GetSize(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x58aa20*/
    return 0; /*0x58aa28*/
  m_8 = this->m_8; /*0x58aa2e*/
  result = 0; /*0x58aa31*/
  if ( m_8 <= 0 ) /*0x58aa35*/
    return -1; /*0x58aa4c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; i += 3 ) /*0x58aa3b*/
  {
    if ( ++result >= m_8 ) /*0x58aa4a*/
      return -1; /*0x58aa4a*/
  }
  return result; /*0x58aa2a*/
}



// ==== 0x0058AA60  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UHashObject_uint_SubzoneConn::GetCapacity(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x58aa60*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0xCu; /*0x58aa7e*/
  else
    return 0; /*0x58aa67*/
}



// ==== 0x0058AA90  _VectorClass_W4PassabilityType::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_W4PassabilityType::QueryInterface(_VectorClass_W4PassabilityType *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x58aa93*/
  *(_DWORD *)this->__pad_0 = &VectorClass<enum PassabilityType>::`vftable'; /*0x58aa96*/
  if ( v3 && BYTE1(this->m_C) ) /*0x58aaa0*/
  {
    __3_YAXPAX_Z(v3); /*0x58aaa8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58aab0*/
  }
  BYTE1(this->m_C) = 0; /*0x58aabb*/
  this->m_8 = 0; /*0x58aac1*/
  if ( (a2 & 1) != 0 ) /*0x58aac8*/
    __3_YAXPAX_Z(this); /*0x58aacb*/
  return this->__pad_0; /*0x58aad5*/
}



// ==== 0x0058AAE0  _DynamicVectorClass_W4PassabilityType::Constructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_W4PassabilityType::Constructor_1(_DynamicVectorClass_W4PassabilityType *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x58aae3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<enum PassabilityType>::`vftable'; /*0x58aae6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x58aaf0*/
  {
    __3_YAXPAX_Z(v3); /*0x58aaf8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58ab00*/
  }
  BYTE1(this->m_C) = 0; /*0x58ab0b*/
  this->m_8 = 0; /*0x58ab11*/
  if ( (a2 & 1) != 0 ) /*0x58ab18*/
    __3_YAXPAX_Z(this); /*0x58ab1b*/
  return this->__pad_0; /*0x58ab25*/
}



// ==== 0x0058AB30  _VectorClass_U_HashObject_II::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UHashObject_uint_uint::QueryInterface(_VectorClass_U_HashObject_II *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x58ab33*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x58ab36*/
  if ( v3 && BYTE1(this->m_C) ) /*0x58ab40*/
  {
    __3_YAXPAX_Z(v3); /*0x58ab48*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58ab50*/
  }
  BYTE1(this->m_C) = 0; /*0x58ab5b*/
  this->m_8 = 0; /*0x58ab61*/
  if ( (a2 & 1) != 0 ) /*0x58ab68*/
    __3_YAXPAX_Z(this); /*0x58ab6b*/
  return this->__pad_0; /*0x58ab75*/
}



// ==== 0x0058AB80  _VectorClass_U_HashObject_IUSubzoneConnectionStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UHashObject_uint_SubzoneConn::QueryInterface(
        _VectorClass_U_HashObject_IUSubzoneConnectionStruct *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x58ab83*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable'; /*0x58ab86*/
  if ( v3 && BYTE1(this->m_C) ) /*0x58ab90*/
  {
    __3_YAXPAX_Z(v3); /*0x58ab98*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x58aba0*/
  }
  BYTE1(this->m_C) = 0; /*0x58abab*/
  this->m_8 = 0; /*0x58abb1*/
  if ( (a2 & 1) != 0 ) /*0x58abb8*/
    __3_YAXPAX_Z(this); /*0x58abbb*/
  return this->__pad_0; /*0x58abc5*/
}



// ==== 0x0058ABD0  Radar::CopyDataArray  this=Radar  sig=csp ====
int *__thiscall Radar::CopyDataArray(Radar *this, int *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  if ( this != (Radar *)a2 ) /*0x58abdc*/
  {
    (*(void (__thiscall **)(Radar *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58abe0*/
    v3 = a2[2]; /*0x58abe3*/
    *(_DWORD *)&this->Radar_field_0x6[2] = v3; /*0x58abea*/
    if ( v3 ) /*0x58abed*/
    {
      v4 = __2_YAPAXI_Z(8 * v3); /*0x58abf7*/
      if ( v4 ) /*0x58ac01*/
      {
        v5 = v4; /*0x58ac06*/
        if ( v3 - 1 >= 0 ) /*0x58ac0a*/
        {
          v6 = v3; /*0x58ac0c*/
          do /*0x58ac16*/
          {
            *(_DWORD *)v5 = 0; /*0x58ac0d*/
            *(_BYTE *)(v5 + 4) = 0; /*0x58ac0f*/
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
      *(_DWORD *)&this->Radar_field_0x2[2] = v4; /*0x58ac1e*/
      if ( v4 ) /*0x58ac21*/
      {
        v7 = *(_DWORD *)&this->Radar_field_0x6[2]; /*0x58ac23*/
        v8 = 0; /*0x58ac26*/
        BYTE1(this->Radar_field_0xC) = 1; /*0x58ac2a*/
        if ( v7 > 0 ) /*0x58ac2e*/
        {
          do /*0x58ac4a*/
          {
            v9 = a2[1]; /*0x58ac30*/
            v10 = *(_DWORD *)&this->Radar_field_0x2[2]; /*0x58ac33*/
            *(_DWORD *)(v10 + 8 * v8) = *(_DWORD *)(v9 + 8 * v8); /*0x58ac39*/
            *(_DWORD *)(v10 + 8 * v8 + 4) = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x58ac40*/
            ++v8; /*0x58ac47*/
          }
          while ( v8 < *(_DWORD *)&this->Radar_field_0x6[2] ); /*0x58ac4a*/
        }
      }
    }
    else
    {
      *(_DWORD *)&this->Radar_field_0x2[2] = 0; /*0x58ac4e*/
      BYTE1(this->Radar_field_0xC) = 0; /*0x58ac51*/
    }
  }
  *(_DWORD *)this->__pad_10 = a2[4]; /*0x58ac58*/
  this->Radar_field_0x14 = (void *)a2[5]; /*0x58ac5e*/
  return (int *)this->__pad_0; /*0x58ac57*/
}



// ==== 0x0058AC70  VectorClass::ConstructSubzone  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::ConstructSubzone(VectorClass *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char *v7; // eax
  char *v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x58ac7d*/
  this->Capacity = a2; /*0x58ac80*/
  this->IsInitialized = 1; /*0x58ac83*/
  this->IsAllocated = 0; /*0x58ac87*/
  this->vtable0 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58ac8a*/
  if ( !a2 ) /*0x58ac90*/
    return &this->vtable0; /*0x58ac90*/
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
        this->IsAllocated = 1; /*0x58ace6*/
        return &this->vtable0; /*0x58acef*/
      }
    }
    else
    {
      v7 = 0; /*0x58acf2*/
    }
    this->Items = v7; /*0x58acf4*/
    this->IsAllocated = 1; /*0x58acf7*/
    return &this->vtable0; /*0x58acfb*/
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
  this->Items = (void *)a3; /*0x58acaf*/
  return &this->vtable0; /*0x58acb4*/
}



// ==== 0x0058AD10  VectorClass_USubzoneTrackingStruct::SetCapacity  this=VectorClass_USubzoneTrackingStruct  sig=csp ====
_DWORD *__thiscall VectorClass_USubzoneTrackingStruct::SetCapacity(
        VectorClass_USubzoneTrackingStruct *this,
        _DWORD *a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // ecx
  int v6; // edx
  void *Capacity; // ecx
  int v8; // eax
  int v9; // edx
  _DWORD *Items; // ecx

  if ( this == (VectorClass_USubzoneTrackingStruct *)a2 ) /*0x58ad1c*/
    return this->__pad_0; /*0x58ad1c*/
  (*(void (__thiscall **)(VectorClass_USubzoneTrackingStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x58ad20*/
  v3 = a2[2]; /*0x58ad23*/
  this->Capacity = (void *)v3; /*0x58ad2a*/
  if ( !v3 ) /*0x58ad2d*/
  {
    this->Items = 0; /*0x58ad95*/
    this->IsAllocated = 0; /*0x58ad98*/
    return this->__pad_0; /*0x58ad9b*/
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
    return this->__pad_0; /*0x58ad61*/
  Capacity = this->Capacity; /*0x58ad63*/
  v8 = 0; /*0x58ad66*/
  this->IsAllocated = 1; /*0x58ad6a*/
  if ( (int)Capacity <= 0 ) /*0x58ad6e*/
    return this->__pad_0; /*0x58ad6e*/
  do /*0x58ad8a*/
  {
    v9 = a2[1]; /*0x58ad70*/
    Items = this->Items; /*0x58ad73*/
    Items[2 * v8] = *(_DWORD *)(v9 + 8 * v8); /*0x58ad79*/
    Items[2 * v8 + 1] = *(_DWORD *)(v9 + 8 * v8 + 4); /*0x58ad80*/
    ++v8; /*0x58ad87*/
  }
  while ( v8 < (int)this->Capacity ); /*0x58ad8a*/
  return this->__pad_0; /*0x58ad8e*/
}



// ==== 0x0058ADB0  RadarClass::drawRadarTerrain  this=VectorClass  sig=csp ====
_DWORD *__thiscall RadarClass::drawRadarTerrain(RadarClass *this, int a2, int a3)
{
  void *v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  v4 = 0; /*0x58adb9*/
  this->RadarClass_field_0x4 = 0; /*0x58adbd*/
  this->RadarClass_field_0x8 = (void *)a2; /*0x58adc0*/
  this->__pad_C[0] = 1; /*0x58adc3*/
  this->__pad_C[1] = 0; /*0x58adc7*/
  this->RadarClass_field_0x0 = &VectorClass<ZoneConnectionClass>::`vftable'; /*0x58adca*/
  if ( !a2 ) /*0x58add0*/
    return &this->RadarClass_field_0x0; /*0x58ae56*/
  if ( !a3 ) /*0x58addc*/
  {
    v8 = __2_YAPAXI_Z(16 * a2); /*0x58ae18*/
    if ( v8 ) /*0x58ae22*/
    {
      if ( a2 - 1 >= 0 ) /*0x58ae29*/
      {
        v9 = a2; /*0x58ae2b*/
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
          --v9; /*0x58ae4a*/
        }
        while ( v9 ); /*0x58ae4b*/
      }
      v4 = (void *)v8; /*0x58ae4d*/
    }
    this->RadarClass_field_0x4 = v4; /*0x58ae4f*/
    this->__pad_C[1] = 1; /*0x58ae52*/
    return &this->RadarClass_field_0x0; /*0x58ae52*/
  }
  if ( a2 - 1 >= 0 ) /*0x58ade3*/
  {
    v5 = a2; /*0x58ade5*/
    v6 = a3 + 2; /*0x58ade6*/
    do /*0x58ae05*/
    {
      *(_WORD *)(v6 - 2) = 0; /*0x58adec*/
      *(_WORD *)v6 = 0; /*0x58adf0*/
      *(_WORD *)(v6 + 2) = 0; /*0x58adf3*/
      *(_WORD *)(v6 + 4) = 0; /*0x58adf7*/
      *(_BYTE *)(v6 + 6) = 0; /*0x58adfb*/
      *(_DWORD *)(v6 + 10) = -1; /*0x58adfe*/
      v6 += 16; /*0x58ae01*/
      --v5; /*0x58ae04*/
    }
    while ( v5 ); /*0x58ae05*/
  }
  this->RadarClass_field_0x4 = (void *)a3; /*0x58ae07*/
  return &this->RadarClass_field_0x0; /*0x58ae0c*/
}



// ==== 0x0058AE60  RadarClass::RenderJammerRadius  this=RadarClass  sig=csp ====
_DWORD *__thiscall RadarClass::RenderJammerRadius(RadarClass *this, int a2, _DWORD *a3)
{
  RadarClass *v3; // ebp
  void *v4; // ebx
  _DWORD *v5; // esi
  int v6; // edi
  int *v8; // eax
  _DWORD *v9; // eax
  int v10; // edi
  _DWORD *v11; // esi
  int v12; // edi
  int v14; // [esp+18h] [ebp+4h]

  v3 = this; /*0x58ae69*/
  v4 = 0; /*0x58ae6b*/
  this->RadarClass_field_0x4 = 0; /*0x58ae73*/
  this->RadarClass_field_0x8 = (void *)a2; /*0x58ae76*/
  this->__pad_C[0] = 1; /*0x58ae79*/
  this->__pad_C[1] = 0; /*0x58ae7d*/
  this->RadarClass_field_0x0 = &VectorClass<SubzoneTrackingStruct>::`vftable'; /*0x58ae80*/
  if ( !a2 ) /*0x58ae87*/
    return &v3->RadarClass_field_0x0; /*0x58af69*/
  if ( !a3 ) /*0x58ae93*/
  {
    v8 = (int *)__2_YAPAXI_Z(36 * a2 + 4); /*0x58aeff*/
    if ( v8 ) /*0x58af09*/
    {
      *v8 = a2; /*0x58af0b*/
      v9 = v8 + 1; /*0x58af0d*/
      v10 = a2 - 1; /*0x58af10*/
      v14 = (int)v9; /*0x58af11*/
      v11 = v9; /*0x58af17*/
      if ( v10 >= 0 ) /*0x58af19*/
      {
        v12 = v10 + 1; /*0x58af1b*/
        do /*0x58af55*/
        {
          v11[1] = 0; /*0x58af21*/
          v11[2] = 0; /*0x58af24*/
          *((_BYTE *)v11 + 12) = 1; /*0x58af27*/
          *((_BYTE *)v11 + 13) = 0; /*0x58af2b*/
          *v11 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58af2e*/
          *v11 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58af34*/
          v11[5] = 10; /*0x58af3a*/
          v11[4] = 0; /*0x58af3d*/
          (*(void (__thiscall **)(_DWORD *))(*v11 + 12))(v11); /*0x58af44*/
          *((_WORD *)v11 + 12) = 0; /*0x58af47*/
          v11[7] = 0; /*0x58af4b*/
          v11[8] = 0; /*0x58af4e*/
          v11 += 9; /*0x58af51*/
          --v12; /*0x58af54*/
        }
        while ( v12 ); /*0x58af55*/
        v3 = this; /*0x58af57*/
        v9 = (_DWORD *)v14; /*0x58af5b*/
      }
      v4 = v9; /*0x58af5f*/
    }
    v3->RadarClass_field_0x4 = v4; /*0x58af61*/
    v3->__pad_C[1] = 1; /*0x58af64*/
    return &v3->RadarClass_field_0x0; /*0x58af64*/
  }
  *a3 = a2; /*0x58ae95*/
  v5 = a3 + 1; /*0x58ae98*/
  if ( a2 - 1 >= 0 ) /*0x58aea1*/
  {
    v6 = a2; /*0x58aea3*/
    do /*0x58aedd*/
    {
      v5[1] = 0; /*0x58aea9*/
      v5[2] = 0; /*0x58aeac*/
      *((_BYTE *)v5 + 12) = 1; /*0x58aeaf*/
      *((_BYTE *)v5 + 13) = 0; /*0x58aeb3*/
      *v5 = &VectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58aeb6*/
      *v5 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable'; /*0x58aebc*/
      v5[5] = 10; /*0x58aec2*/
      v5[4] = 0; /*0x58aec5*/
      (*(void (__thiscall **)(_DWORD *))(*v5 + 12))(v5); /*0x58aecc*/
      *((_WORD *)v5 + 12) = 0; /*0x58aecf*/
      v5[7] = 0; /*0x58aed3*/
      v5[8] = 0; /*0x58aed6*/
      v5 += 9; /*0x58aed9*/
      --v6; /*0x58aedc*/
    }
    while ( v6 ); /*0x58aedd*/
    v3 = this; /*0x58aedf*/
    v5 = a3 + 1; /*0x58aee3*/
  }
  v3->RadarClass_field_0x4 = v5; /*0x58aee7*/
  return &v3->RadarClass_field_0x0; /*0x58aeea*/
}



// ==== 0x0058AF80  RadarClass::drawRadarEvents  this=RadarClass  sig=csp ====
char __thiscall RadarClass::drawRadarEvents(RadarClass *this, _DWORD *a2)
{
  void *RadarClass_field_0x8; // ecx
  int v4; // eax
  void *RadarClass_field_0x10; // eax
  void *v7; // ecx
  int v8; // edx
  char *RadarClass_field_0x4; // eax
  char *v10; // ecx

  RadarClass_field_0x8 = this->RadarClass_field_0x8; /*0x58af83*/
  if ( (int)this->RadarClass_field_0x10 >= (int)RadarClass_field_0x8 ) /*0x58af8b*/
  {
    if ( !this->__pad_C[1] && RadarClass_field_0x8 ) /*0x58af96*/
      return 0; /*0x58af96*/
    v4 = *(_DWORD *)this->__pad_14; /*0x58af98*/
    if ( v4 <= 0 /*0x58afa8*/
      || !(*((unsigned __int8 (__thiscall **)(RadarClass *, int, _DWORD))this->RadarClass_field_0x0 + 2))(
            this,
            (int)RadarClass_field_0x8 + v4,
            0) )
    {
      return 0; /*0x58afaf*/
    }
  }
  RadarClass_field_0x10 = this->RadarClass_field_0x10; /*0x58afb5*/
  v7 = (char *)RadarClass_field_0x10 + 1; /*0x58afb8*/
  v8 = 3 * (_DWORD)RadarClass_field_0x10; /*0x58afbb*/
  RadarClass_field_0x4 = (char *)this->RadarClass_field_0x4; /*0x58afbe*/
  this->RadarClass_field_0x10 = v7; /*0x58afc1*/
  v10 = &RadarClass_field_0x4[4 * v8]; /*0x58afc5*/
  *(_DWORD *)v10 = *a2; /*0x58afce*/
  *((_DWORD *)v10 + 1) = a2[1]; /*0x58afd3*/
  *((_DWORD *)v10 + 2) = a2[2]; /*0x58afdb*/
  return 1; /*0x58afb1*/
}



// ==== 0x0058AFF0  HashVector_UInt::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall HashVector_UInt::Construct(HashVector_UInt *this, int a2, int a3)
{
  int v5; // eax

  this->Items = 0; /*0x58affa*/
  this->Capacity = a2; /*0x58b001*/
  this->IsInitialized = 1; /*0x58b004*/
  this->IsAllocated = 0; /*0x58b008*/
  *this = (HashVector_UInt)&VectorClass<HashObject<unsigned int,unsigned int>>::`vftable'; /*0x58b00c*/
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
      this->IsAllocated = 1; /*0x58b047*/
      return this; /*0x58b04f*/
    }
    this->IsAllocated = 1; /*0x58b054*/
    this->Items = 0; /*0x58b058*/
  }
  return this; /*0x58b026*/
}



// ==== 0x0058B070  SubzoneHashVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall SubzoneHashVector::Construct(SubzoneHashVector *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx

  this->Items = 0; /*0x58b07d*/
  this->Capacity = a2; /*0x58b080*/
  this->IsInitialized = 1; /*0x58b083*/
  this->IsAllocated = 0; /*0x58b087*/
  *this = (SubzoneHashVector)&VectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable'; /*0x58b08a*/
  if ( !a2 ) /*0x58b090*/
    return this; /*0x58b090*/
  if ( !a3 ) /*0x58b098*/
  {
    v7 = __2_YAPAXI_Z(12 * a2); /*0x58b0c2*/
    if ( v7 ) /*0x58b0cc*/
    {
      if ( a2 - 1 >= 0 ) /*0x58b0d3*/
      {
        v8 = v7 + 4; /*0x58b0d5*/
        v9 = a2; /*0x58b0d8*/
        do /*0x58b0e2*/
        {
          *(_DWORD *)v8 = 0; /*0x58b0d9*/
          *(_BYTE *)(v8 + 4) = 0; /*0x58b0db*/
          v8 += 12; /*0x58b0de*/
          --v9; /*0x58b0e1*/
        }
        while ( v9 ); /*0x58b0e2*/
        this->Items = v7; /*0x58b0e4*/
        this->IsAllocated = 1; /*0x58b0e7*/
        return this; /*0x58b0f0*/
      }
    }
    else
    {
      v7 = 0; /*0x58b0f3*/
    }
    this->Items = v7; /*0x58b0f5*/
    this->IsAllocated = 1; /*0x58b0f8*/
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
  *(double *)&unk_ABECA0[40] = Math::ArcTan((double)(2 * dword_ABED00) / dbl_ABE368); /*0x58b692*/
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
  *(_DWORD *)&unk_ABECA0[24] = 0; /*0x58b6e2*/
  *(_DWORD *)&unk_ABECA0[28] = 0; /*0x58b6e7*/
  *(_DWORD *)&unk_ABECA0[32] = 0; /*0x58b6ec*/
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
  MapResourceClass::Constructor((int)byte_ABDFD8); /*0x58b745*/
  return atexit(unknown_libname_23); /*0x58b755*/
}



// ==== 0x0058B760  unknown_libname_23  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_23()
{
  RandomMap::CleanupRandomMapData((int)byte_ABDFD8); /*0x58b765*/
}



// ==== 0x0058B770  unknown_libname_24  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
_DWORD *unknown_libname_24()
{
  return SeedInitRNG(&unk_ABE890, 0); /*0x58b77c*/
}



// ==== 0x0058B780  sub_58B780  this=-  sig=ida-proto ====
void sub_58B780()
{
  byte_ABDFB8 = 0; /*0x58b780*/
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
int sub_58B810()
{
  return dword_ABECD0; /*0x58b815*/
}



// ==== 0x0058B820  ObjectClass::ComputeMapCameraBounds  this=ObjectClass  sig=csp ====
void *ComputeMapCameraBounds(ObjectClass *this)
{
  void *result; // eax
  int v2; // ebp
  int i; // edi
  __int16 *Waypoint_Location; // eax
  void *v5; // esi
  int v6; // eax
  int *v7; // eax
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  int v12; // edi
  int v13; // ebx
  __int16 *j; // esi
  int v15; // eax
  int *v16; // eax
  int v17; // edx
  int v18; // edi
  AbstractClass *v19; // ebx
  int v20; // eax
  char *v21; // esi
  int v22; // ecx
  void *v23; // edx
  void *v24; // esi
  int v25; // [esp+10h] [ebp-28h] BYREF
  int v26; // [esp+14h] [ebp-24h] BYREF
  char *k; // [esp+18h] [ebp-20h] BYREF
  char v28[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  char v29[8]; // [esp+20h] [ebp-18h] BYREF
  char v30[4]; // [esp+28h] [ebp-10h] BYREF
  char v31[12]; // [esp+2Ch] [ebp-Ch] BYREF

  result = dword_A8B230; /*0x58b820*/
  v2 = 0; /*0x58b82a*/
  g_MissionQueueFrame.localVariables[162] = 0; /*0x58b830*/
  if ( dword_A8B230 && g_TacticalClass_Instance ) /*0x58b842*/
  {
    for ( i = 0; i < 8; ++i ) /*0x58b848*/
    {
      if ( !(unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, i) ) /*0x58b851*/
        break; /*0x58b858*/
      Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &k, i); /*0x58b86a*/
      v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], Waypoint_Location); /*0x58b87e*/
      v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)v5 + 72))(v5); /*0x58b88f*/
      v7 = (int *)(*(int (__thiscall **)(void *, char *, _DWORD))(*(_DWORD *)v5 + 72))(v5, v30, *(_DWORD *)(v6 + 4)); /*0x58b89f*/
      IsoCoord::ToScreenOffset(*v7, (int)v29, &v25, &v26); /*0x58b8ab*/
      v8 = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v28, i); /*0x58b8bc*/
      v9 = g_MissionQueueFrame.localVariables[162]; /*0x58b8c1*/
      v10 = v25; /*0x58b8c9*/
      *(_DWORD *)&g_MissionQueueFrame.globalVariables[4 * g_MissionQueueFrame.localVariables[162] + 132] = *v8; /*0x58b8d2*/
      v11 = (unsigned __int64)(2290649225LL * v26) >> 32; /*0x58b8f4*/
      *(_DWORD *)&g_MissionQueueFrame.globalVariables[8 * v9 + 168] = v10 / 60; /*0x58b8f6*/
      *(_DWORD *)&g_MissionQueueFrame.globalVariables[8 * v9 + 172] = ((unsigned int)v11 >> 31) + (v11 >> 4); /*0x58b907*/
      g_MissionQueueFrame.localVariables[162] = v9 + 1; /*0x58b910*/
    }
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58b924*/
    v12 = 10000; /*0x58b929*/
    v25 = 10000; /*0x58b933*/
    v13 = 0; /*0x58b937*/
    for ( j = (__int16 *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58b942*/
          j;
          j = (__int16 *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], j + 18, 1) ) /*0x58b953*/
      {
        v15 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)j + 72))(j); /*0x58b973*/
        v16 = (int *)(*(int (__thiscall **)(__int16 *, char *, _DWORD))(*(_DWORD *)j + 72))( /*0x58b983*/
                       j,
                       v28,
                       *(_DWORD *)(v15 + 4));
        IsoCoord::ToScreenOffset(*v16, (int)v31, &v26, (int *)&k); /*0x58b98f*/
        v17 = (int)k / 30; /*0x58b9c2*/
        if ( v26 / 60 < v12 ) /*0x58b9c6*/
          v12 = v26 / 60; /*0x58b9c8*/
        if ( v26 / 60 > v2 ) /*0x58b9cc*/
          v2 = v26 / 60; /*0x58b9ce*/
        if ( v17 < v25 ) /*0x58b9d4*/
          v25 = (int)k / 30; /*0x58b9d6*/
        if ( v17 > v13 ) /*0x58b9dc*/
          v13 = (int)k / 30; /*0x58b9de*/
      }
    }
    g_MissionQueueFrame.briefing[354] = v25; /*0x58b9fa*/
    result = dword_A8B230; /*0x58ba01*/
    g_MissionQueueFrame.briefing[355] = v12; /*0x58ba06*/
    g_MissionQueueFrame.localVariables[131] = v2 - v12; /*0x58ba0e*/
    g_MissionQueueFrame.localVariables[147] = v13 - v25; /*0x58ba14*/
    if ( dword_A8B230 ) /*0x58ba1a*/
    {
      v18 = 0; /*0x58ba26*/
      dword_A8B230[122].abstractFlags = g_MissionQueueFrame.localVariables[162]; /*0x58ba28*/
      v19 = dword_A8B230; /*0x58ba2e*/
      if ( dword_A8B230[122].abstractFlags > 0 ) /*0x58ba3c*/
      {
        v20 = 4416; /*0x58ba3e*/
        v21 = &g_MissionQueueFrame.waypoints[1470]; /*0x58ba48*/
        v22 = 4544; /*0x58ba4f*/
        for ( k = &g_MissionQueueFrame.waypoints[1470]; ; v21 = k ) /*0x58ba54*/
        {
          if ( v20 < 4416 || v18 >= g_MissionQueueFrame.localVariables[162] ) /*0x58ba71*/
          {
            v23 = 0; /*0x58ba7c*/
            v24 = 0; /*0x58ba7e*/
          }
          else
          {
            v23 = *(void **)&v21[v20]; /*0x58ba73*/
            v24 = *(void **)&v21[v20 + 4]; /*0x58ba76*/
          }
          *(void **)((char *)&v19->vtable0 + v20) = v23; /*0x58ba80*/
          ++v18; /*0x58ba89*/
          v22 += 4; /*0x58ba8a*/
          *(void **)((char *)&dword_A8B230->vtable1 + v20) = v24; /*0x58ba8d*/
          v20 += 8; /*0x58ba9b*/
          *(_DWORD *)((char *)dword_A8B230 + v22 - 4) = *(_DWORD *)&g_MissionQueueFrame.waypoints[v22 + 1302]; /*0x58ba9e*/
          v19 = dword_A8B230; /*0x58baa2*/
          if ( v18 >= dword_A8B230[122].abstractFlags ) /*0x58baae*/
            break; /*0x58baae*/
        }
      }
      v19[122].vtable1 = (void *)g_MissionQueueFrame.briefing[355]; /*0x58bab5*/
      dword_A8B230[122].vtable2 = (void *)g_MissionQueueFrame.briefing[354]; /*0x58bac7*/
      dword_A8B230[122].vtable3 = (void *)g_MissionQueueFrame.localVariables[131]; /*0x58bad8*/
      result = (void *)g_MissionQueueFrame.localVariables[147]; /*0x58bae4*/
      dword_A8B230[122].uniqueId = g_MissionQueueFrame.localVariables[147]; /*0x58bae9*/
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
void *ScenarioClass::CopyStartPositions(ScenarioClass *this)
{
  void *result; // eax
  AbstractClass *v2; // ebx
  int v3; // edi
  int v4; // eax
  char *v5; // esi
  int v6; // ecx
  void *v7; // edx
  void *v8; // esi

  result = dword_A8B230; /*0x58bb31*/
  if ( dword_A8B230 ) /*0x58bb38*/
  {
    dword_A8B230[122].abstractFlags = g_MissionQueueFrame.localVariables[162]; /*0x58bb45*/
    v2 = dword_A8B230; /*0x58bb4b*/
    v3 = 0; /*0x58bb52*/
    if ( dword_A8B230[122].abstractFlags > 0 ) /*0x58bb5c*/
    {
      v4 = 4416; /*0x58bb60*/
      v5 = &g_MissionQueueFrame.waypoints[1470]; /*0x58bb6a*/
      v6 = 4544; /*0x58bb71*/
      while ( 1 ) /*0x58bb8b*/
      {
        if ( v4 < 4416 || v3 >= g_MissionQueueFrame.localVariables[162] ) /*0x58bb93*/
        {
          v7 = 0; /*0x58bb9e*/
          v8 = 0; /*0x58bba0*/
        }
        else
        {
          v7 = *(void **)&v5[v4]; /*0x58bb95*/
          v8 = *(void **)&v5[v4 + 4]; /*0x58bb98*/
        }
        *(void **)((char *)&v2->vtable0 + v4) = v7; /*0x58bba2*/
        ++v3; /*0x58bbab*/
        v6 += 4; /*0x58bbac*/
        *(void **)((char *)&dword_A8B230->vtable1 + v4) = v8; /*0x58bbaf*/
        v4 += 8; /*0x58bbbd*/
        *(_DWORD *)((char *)dword_A8B230 + v6 - 4) = *(_DWORD *)&g_MissionQueueFrame.waypoints[v6 + 1302]; /*0x58bbc0*/
        v2 = dword_A8B230; /*0x58bbc4*/
        if ( v3 >= dword_A8B230[122].abstractFlags ) /*0x58bbd0*/
          break; /*0x58bbd0*/
        v5 = &g_MissionQueueFrame.waypoints[1470]; /*0x58bb82*/
      }
    }
    v2[122].vtable1 = (void *)g_MissionQueueFrame.briefing[355]; /*0x58bbda*/
    dword_A8B230[122].vtable2 = (void *)g_MissionQueueFrame.briefing[354]; /*0x58bbed*/
    dword_A8B230[122].vtable3 = (void *)g_MissionQueueFrame.localVariables[131]; /*0x58bbfe*/
    result = (void *)g_MissionQueueFrame.localVariables[147]; /*0x58bc0a*/
    dword_A8B230[122].uniqueId = g_MissionQueueFrame.localVariables[147]; /*0x58bc0f*/
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
  dword_ABDF94 = 0; /*0x58bc37*/
  dword_ABDF98 = 0; /*0x58bc3c*/
  byte_ABDF9C = 1; /*0x58bc41*/
  byte_ABDF9D = 0; /*0x58bc48*/
  dword_ABDF90 = (int)&off_7ED858; /*0x58bc4d*/
  dword_ABDFA4 = 10; /*0x58bc57*/
  dword_ABDFA0 = 0; /*0x58bc61*/
  return atexit(sub_58BC70); /*0x58bc6c*/
}



// ==== 0x0058BC70  sub_58BC70  this=-  sig=ida-proto ====
void __cdecl sub_58BC70()
{
  if ( (byte_ABDFB0 & 1) == 0 ) /*0x58bc7a*/
  {
    dword_ABDF90 = (int)&VectorClass<MapRegionClass *>::`vftable'; /*0x58bc7e*/
    byte_ABDFB0 |= 1u; /*0x58bc91*/
    if ( dword_ABDF94 ) /*0x58bc97*/
    {
      if ( byte_ABDF9D ) /*0x58bca1*/
      {
        __3_YAXPAX_Z(dword_ABDF94); /*0x58bca4*/
        dword_ABDF94 = 0; /*0x58bcac*/
      }
    }
    byte_ABDF9D = 0; /*0x58bcb6*/
    dword_ABDF98 = 0; /*0x58bcbd*/
  }
}



// ==== 0x0058BDC0  TileData::Constructor  this=TileData  sig=csp ====
_DWORD *__thiscall TileData::Constructor(TileData *this)
{
  this->u16_2 = 0; /*0x58bdc4*/
  *((_DWORD *)this + 4) = 0; /*0x58bdc7*/
  *((_DWORD *)this + 6) = 0; /*0x58bdca*/
  this->u16_2 = 0; /*0x58bdcd*/
  *((_DWORD *)this + 10) = 0; /*0x58bdd0*/
  *((_DWORD *)this + 12) = 0; /*0x58bdd3*/
  *(_WORD *)this->__tail_0 = 0; /*0x58bdd6*/
  *(_WORD *)&this->__tail_0[2] = 0; /*0x58bdd9*/
  *((_DWORD *)this + 3) = 0; /*0x58bddd*/
  *((_DWORD *)this + 5) = 0; /*0x58bde0*/
  *((_DWORD *)this + 7) = 0; /*0x58bde3*/
  *((_DWORD *)this + 9) = 0; /*0x58bde6*/
  *((_DWORD *)this + 11) = 0; /*0x58bde9*/
  *((_DWORD *)this + 13) = 0; /*0x58bdec*/
  *((_DWORD *)this + 14) = 0; /*0x58bdef*/
  *((_DWORD *)this + 15) = 0; /*0x58bdf2*/
  *((_DWORD *)this + 16) = -1; /*0x58bdf5*/
  *((_BYTE *)this + 68) = 0; /*0x58bdfc*/
  *((_BYTE *)this + 69) = 0; /*0x58bdff*/
  *((_BYTE *)this + 70) = 0; /*0x58be02*/
  *((_BYTE *)this + 71) = 0; /*0x58be05*/
  *((_BYTE *)this + 72) = 0; /*0x58be08*/
  *((_BYTE *)this + 73) = 0; /*0x58be0b*/
  *((_BYTE *)this + 74) = 1; /*0x58be0e*/
  *((_BYTE *)this + 75) = 0; /*0x58be12*/
  return this; /*0x58be15*/
}



// ==== 0x0058BE20  ObjectClass::method_58BE20  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58BE20(ObjectClass *this)
{
  unsigned int v2; // esi
  unsigned int v3; // eax
  _WORD *v4; // ecx
  int v5; // ecx
  __int64 v7; // [esp+14h] [ebp-10h]

  v2 = g_MapCellWidth * g_MapCellWidth - 1; /*0x58be30*/
  do /*0x58be88*/
  {
    do /*0x58be6f*/
    {
      v7 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58be52*/
      LOWORD(v3) = Math::RoundToInt((double)v7 * (double)(v2 + 1) * 2.328306437080797e-10); /*0x58be68*/
    }
    while ( v3 > v2 ); /*0x58be6f*/
    v4 = (_WORD *)(g_MissionQueueFrame.localVariables[163] + 80 * v3); /*0x58be7d*/
  }
  while ( !*v4 && !v4[1] ); /*0x58be88*/
  v5 = 80 * v3; /*0x58be8e*/
  this->AbstractClass = *(void **)(v5 + g_MissionQueueFrame.localVariables[163]); /*0x58be97*/
  return &this->AbstractClass; /*0x58be8d*/
}



// ==== 0x0058BEA0  ObjectClass::method_58BEA0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58BEA0(ObjectClass *this)
{
  int v2; // ebx
  unsigned int v3; // esi
  unsigned int v4; // eax
  _WORD *v5; // ecx
  Cell *v6; // eax
  __int16 v8[2]; // [esp+10h] [ebp-1Ch] BYREF
  __int64 v9; // [esp+14h] [ebp-18h]
  __int64 v10; // [esp+1Ch] [ebp-10h]
  double v11; // [esp+24h] [ebp-8h]

  v2 = 0; /*0x58beab*/
  do /*0x58bf34*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth - 1; /*0x58beb5*/
    do /*0x58bf0b*/
    {
      v9 = v3 + 1; /*0x58bebf*/
      v11 = (double)v9; /*0x58bec7*/
      do /*0x58bef2*/
      {
        v10 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58bed5*/
        LOWORD(v4) = Math::RoundToInt((double)v10 * v11 * 2.328306437080797e-10); /*0x58beeb*/
      }
      while ( v4 > v3 ); /*0x58bef2*/
      v5 = (_WORD *)(g_MissionQueueFrame.localVariables[163] + 80 * v4); /*0x58bf00*/
    }
    while ( !*v5 && !v5[1] ); /*0x58bf0b*/
    ++v2; /*0x58bf13*/
    *(_DWORD *)v8 = *(_DWORD *)(80 * v4 + g_MissionQueueFrame.localVariables[163]); /*0x58bf1d*/
    if ( v2 > 200 ) /*0x58bf21*/
    {
      v8[0] = 0; /*0x58bf42*/
      v8[1] = 0; /*0x58bf47*/
      this->AbstractClass = 0; /*0x58bf51*/
      return &this->AbstractClass; /*0x58bf5c*/
    }
    v6 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8); /*0x58bf2d*/
  }
  while ( !(unsigned __int8)Cell::IsEmpty(v6) ); /*0x58bf34*/
  this->AbstractClass = *(void **)v8; /*0x58bf62*/
  return &this->AbstractClass; /*0x58bf50*/
}



// ==== 0x0058BF70  RandomMap::TerrainTileDataConstructor  this=RandomMap  sig=csp ====
_DWORD *__thiscall RandomMap::TerrainTileDataConstructor(RandomMap *this, int a2)
{
  Cell *v3; // eax
  char IsGroundTypeRange; // al
  void *v5; // ecx
  int v6; // eax

  *(_DWORD *)this->__pad_0 = 0; /*0x58bf7a*/
  *(_DWORD *)&this->RandomMap_field_0x2[2] = 0; /*0x58bf7c*/
  this->RandomMap_field_0x8 = (void *)g_MissionQueueFrame.localVariables[164]; /*0x58bf8a*/
  this->RandomMap_field_0xC = 0; /*0x58bf8d*/
  this->RandomMap_field_0x10 = (void *)*((char *)CellCoord::To_CellObj( /*0x58bfa6*/
                                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                   (__int16 *)&a2)
                                       + 283);
  v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x58bfa9*/
  IsGroundTypeRange = Cell::IsGroundTypeRange(v3); /*0x58bfb0*/
  v5 = (void *)a2; /*0x58bfb5*/
  LOBYTE(this->RandomMap_field_0x14) = IsGroundTypeRange; /*0x58bfb9*/
  *(void **)((char *)&this->RandomMap_field_0x14 + 2) = v5; /*0x58bfbe*/
  BYTE2(this->RandomMap_field_0x18) = 0; /*0x58bfc1*/
  HIBYTE(this->RandomMap_field_0x18) = 1; /*0x58bfc4*/
  this->RandomMap_field_0x1C = 0; /*0x58bfc7*/
  this->RandomMap_field_0x20 = 0; /*0x58bfca*/
  LOBYTE(this->RandomMap_field_0x24[0]) = 0; /*0x58bfcd*/
  this->RandomMap_field_0x2C[0] = 0; /*0x58bfd0*/
  this->RandomMap_field_0x30 = 0; /*0x58bfd3*/
  LOBYTE(this->RandomMap_field_0x34[0]) = 1; /*0x58bfd6*/
  BYTE1(this->RandomMap_field_0x34[0]) = 0; /*0x58bfd9*/
  this->RandomMap_field_0x28[0] = (int)&DynamicVectorClass<Cell>::`vftable'; /*0x58bfdc*/
  this->RandomMap_field_0x3C[0] = 10; /*0x58bfe3*/
  this->RandomMap_field_0x38[0] = 0; /*0x58bfea*/
  this->RandomMap_field_0x40[0] = 0; /*0x58bfed*/
  *(_DWORD *)this->__pad_44 = 0; /*0x58bff0*/
  this->RandomMap_field_0x48 = 0; /*0x58bff3*/
  *(_DWORD *)this->__pad_4C = 0; /*0x58bff6*/
  this->RandomMap_field_0x3C[0] = 100000; /*0x58bff9*/
  ++g_MissionQueueFrame.localVariables[164]; /*0x58c014*/
  if ( g_MissionQueueFrame.briefing[342] < g_MissionQueueFrame.briefing[340] /*0x58c041*/
    || (BYTE1(g_MissionQueueFrame.briefing[341]) || !g_MissionQueueFrame.briefing[340])
    && g_MissionQueueFrame.briefing[343] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.briefing[338] + 8))(
         &g_MissionQueueFrame.briefing[338],
         g_MissionQueueFrame.briefing[340] + g_MissionQueueFrame.briefing[343],
         0) )
  {
    v6 = g_MissionQueueFrame.briefing[342]++; /*0x58c04e*/
    *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v6) = this; /*0x58c05d*/
  }
  return this->__pad_0; /*0x58c062*/
}



// ==== 0x0058C070  TileNode::Cleanup  this=TileNode  sig=csp ====
int __thiscall TileNode::Cleanup(TileNode *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // eax
  int result; // eax
  TileNode *v5; // [esp+8h] [ebp-4h] BYREF

  v2 = (void (__thiscall ***)(_DWORD, int))*this; /*0x58c077*/
  if ( v2 ) /*0x58c07b*/
  {
    (**v2)(v2, 1); /*0x58c081*/
    *this = 0; /*0x58c083*/
  }
  v5 = this; /*0x58c095*/
  v3 = (*(int (__thiscall **)(int *, TileNode **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x58c099*/
         &g_MissionQueueFrame.briefing[338],
         &v5);
  if ( v3 != -1 && v3 < g_MissionQueueFrame.briefing[342] ) /*0x58c0a9*/
  {
    --g_MissionQueueFrame.briefing[342]; /*0x58c0ae*/
    for ( ; /*0x58c0b4*/
          v3 < g_MissionQueueFrame.briefing[342];
          *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                  + 4 * v3) )
    {
      ++v3; /*0x58c0bc*/
    }
  }
  result = *((_DWORD *)this + 11); /*0x58c0ce*/
  *((_DWORD *)this + 10) = &VectorClass<Cell>::`vftable'; /*0x58c0d1*/
  if ( result && *((_BYTE *)this + 53) ) /*0x58c0dc*/
  {
    __3_YAXPAX_Z((void *)result); /*0x58c0e2*/
    *((_DWORD *)this + 11) = 0; /*0x58c0ea*/
  }
  *((_BYTE *)this + 53) = 0; /*0x58c0ed*/
  *((_DWORD *)this + 12) = 0; /*0x58c0f0*/
  return result; /*0x58c0f3*/
}



// ==== 0x0058C100  ObjectClass::method_58C100  this=ObjectClass  sig=csp ====
void sub_58C100(ObjectClass *this)
{
  int v1; // edi
  _DWORD *v2; // esi
  int v3; // eax
  void *v4; // eax
  _DWORD *v5; // [esp+8h] [ebp-4h] BYREF

  v1 = g_MissionQueueFrame.briefing[342] - 1; /*0x58c10a*/
  for ( g_MissionQueueFrame.localVariables[164] = 0; v1 >= 0; --v1 ) /*0x58c115*/
  {
    v2 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * v1); /*0x58c122*/
    if ( v2 ) /*0x58c127*/
    {
      if ( *v2 ) /*0x58c12d*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 1); /*0x58c137*/
        *v2 = 0; /*0x58c139*/
      }
      v5 = v2; /*0x58c14b*/
      v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x58c14f*/
             &g_MissionQueueFrame.briefing[338],
             &v5);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.briefing[342] ) /*0x58c15f*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x58c164*/
        for ( ; /*0x58c16a*/
              v3 < g_MissionQueueFrame.briefing[342];
              *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                      + 4 * v3) )
        {
          ++v3; /*0x58c172*/
        }
      }
      v4 = (void *)v2[11]; /*0x58c184*/
      v2[10] = &VectorClass<Cell>::`vftable'; /*0x58c187*/
      if ( v4 ) /*0x58c190*/
      {
        if ( *((_BYTE *)v2 + 53) ) /*0x58c192*/
        {
          __3_YAXPAX_Z(v4); /*0x58c198*/
          v2[11] = 0; /*0x58c1a0*/
        }
      }
      *((_BYTE *)v2 + 53) = 0; /*0x58c1a4*/
      v2[12] = 0; /*0x58c1a7*/
      __3_YAXPAX_Z(v2); /*0x58c1aa*/
    }
  }
}



// ==== 0x0058C2A0  Tactical::GetCellData  this=Tactical  sig=csp ====
char *__thiscall Tactical::GetCellData(Tactical *this)
{
  return (char *)(g_MissionQueueFrame.localVariables[163] /*0x58c2be*/
                + 80 * (*(__int16 *)this->__pad_0 + g_MapCellWidth * *(__int16 *)this->Tactical_field_0x2));
}



// ==== 0x0058C2C0  GetTileDataEntry  this=-  sig=ida-proto ====
char *__fastcall TileData_GetEntry(int a1)
{
  return (char *)dword_ABED10 + 80 * a1; /*0x58c2ce*/
}



// ==== 0x0058C320  ObjectClass::method_58C320  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58C320(ObjectClass *this, _DWORD *a2)
{
  int v2; // ebx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // ecx
  __int64 v8; // [esp+18h] [ebp-10h]

  v2 = g_MapCellWidth * g_MapCellWidth; /*0x58c32e*/
  do /*0x58c38f*/
  {
    do /*0x58c372*/
    {
      v8 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58c355*/
      LOWORD(v4) = Math::RoundToInt((double)v8 * (double)(unsigned int)v2 * 2.328306437080797e-10); /*0x58c36b*/
    }
    while ( v4 > v2 - 1 ); /*0x58c372*/
    v5 = g_MissionQueueFrame.localVariables[163] + 80 * v4; /*0x58c380*/
  }
  while ( *(void **)(v5 + 56) != this->? || !*(_WORD *)v5 && !*(_WORD *)(v5 + 2) ); /*0x58c38f*/
  v6 = *(_DWORD *)(80 * v4 + g_MissionQueueFrame.localVariables[163]); /*0x58c39e*/
  *a2 = v6; /*0x58c3a6*/
  return a2; /*0x58c398*/
}



// ==== 0x0058C3B0  ObjectClass::method_58C3B0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58C3B0(ObjectClass *this, _DWORD *a2)
{
  int v3; // ebx
  unsigned int v4; // eax
  int v5; // ecx
  Cell *v6; // eax
  int v8; // [esp+10h] [ebp-20h]
  __int16 v9[2]; // [esp+14h] [ebp-1Ch] BYREF
  __int64 v10; // [esp+18h] [ebp-18h]
  __int64 v11; // [esp+20h] [ebp-10h]
  double v12; // [esp+28h] [ebp-8h]

  v8 = 0; /*0x58c3bb*/
  do /*0x58c457*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth; /*0x58c3c6*/
    do /*0x58c423*/
    {
      v10 = (unsigned int)v3; /*0x58c3d3*/
      v12 = (double)(unsigned int)v3; /*0x58c3db*/
      do /*0x58c406*/
      {
        v11 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58c3e9*/
        LOWORD(v4) = Math::RoundToInt((double)v11 * v12 * 2.328306437080797e-10); /*0x58c3ff*/
      }
      while ( v4 > v3 - 1 ); /*0x58c406*/
      v5 = g_MissionQueueFrame.localVariables[163] + 80 * v4; /*0x58c414*/
    }
    while ( *(void **)(v5 + 56) != this->? || !*(_WORD *)v5 && !*(_WORD *)(v5 + 2) ); /*0x58c423*/
    *(_DWORD *)v9 = *(_DWORD *)(80 * v4 + g_MissionQueueFrame.localVariables[163]); /*0x58c432*/
    if ( ++v8 > 200 ) /*0x58c444*/
    {
      *a2 = 0; /*0x58c47a*/
      return a2; /*0x58c480*/
    }
    v6 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x58c450*/
  }
  while ( !(unsigned __int8)Cell::IsEmpty(v6) ); /*0x58c457*/
  *a2 = *(_DWORD *)v9; /*0x58c48e*/
  return a2; /*0x58c477*/
}



// ==== 0x0058C4A0  ObjectClass::method_58C4A0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_58C4A0(ObjectClass *this, _DWORD *a2)
{
  _WORD *v2; // ebp
  int v3; // ebx
  unsigned int v4; // eax
  Cell *v5; // eax
  int v7; // [esp+10h] [ebp-20h]
  __int64 v9; // [esp+20h] [ebp-10h]

  v2 = (_WORD *)g_MissionQueueFrame.localVariables[163]; /*0x58c4b3*/
  v7 = g_MapCellWidth * g_MapCellWidth; /*0x58c4bd*/
  v3 = 0; /*0x58c4c1*/
  while ( 1 ) /*0x58c559*/
  {
    do /*0x58c508*/
    {
      v9 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58c4eb*/
      LOWORD(v4) = Math::RoundToInt((double)v9 * (double)(unsigned int)v7 * 2.328306437080797e-10); /*0x58c501*/
    }
    while ( v4 > v7 - 1 ); /*0x58c508*/
    ++v3; /*0x58c518*/
    qmemcpy(v2, (const void *)(g_MissionQueueFrame.localVariables[163] + 80 * v4), 0x50u); /*0x58c523*/
    if ( v3 >= 100 ) /*0x58c525*/
    {
      *a2 = 0; /*0x58c57e*/
      return a2; /*0x58c584*/
    }
    if ( (void *)*((_DWORD *)v2 + 14) == this->? && (*v2 || v2[1]) ) /*0x58c53a*/
    {
      if ( *((_BYTE *)v2 + 68) ) /*0x58c541*/
      {
        v5 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v2); /*0x58c552*/
        if ( (unsigned __int8)Cell::IsEmpty(v5) ) /*0x58c559*/
          break; /*0x58c559*/
      }
    }
  }
  *a2 = *(_DWORD *)v2; /*0x58c591*/
  return a2; /*0x58c569*/
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

  v3 = dword_ABED10; /*0x58c5b2*/
  v11 = g_MapCellWidth * g_MapCellWidth; /*0x58c5c1*/
  v9 = 0; /*0x58c5c5*/
  do /*0x58c67e*/
  {
    do /*0x58c60a*/
    {
      v13 = (unsigned int)Random::State(&unk_ABE890); /*0x58c5ed*/
      v4 = Math::RoundToInt((double)v13 * (double)(unsigned int)v11 * 2.328306437080797e-10); /*0x58c603*/
    }
    while ( v4 > v11 - 1 ); /*0x58c60a*/
    v5 = v9 + 1 < 100; /*0x58c626*/
    qmemcpy(v3, (char *)dword_ABED10 + 80 * v4, 0x50u); /*0x58c629*/
    ++v9; /*0x58c62b*/
    if ( !v5 ) /*0x58c62f*/
    {
      *a1 = 0; /*0x58c69a*/
      return a1; /*0x58c6a0*/
    }
    v6 = CellCoord::To_CellObj(&dword_87F7E8, v3); /*0x58c637*/
    v7 = v6; /*0x58c63f*/
  }
  while ( !*v3 && !v3[1] /*0x58c67e*/
       || MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)v6 + 18, 0, 0) != a2
       || !Cell::IsEmpty(v7)
       || a3 != -1 && *((_DWORD *)v3 + 14) != a3 );
  *a1 = *(_DWORD *)v3; /*0x58c6ac*/
  return a1; /*0x58c697*/
}



// ==== 0x0058C6F0  Memory_Helper_58C6F0  this=ObjectClass  sig=csp ====
double __stdcall sub_58C6F0(__int16 *a1, __int16 *a2, double a3)
{
  double v3; // st7
  double v4; // st7
  char v6; // c0
  int v8; // [esp+Ch] [ebp-10h]
  double v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+24h] [ebp+8h]
  double v11; // [esp+28h] [ebp+Ch]

  v8 = *a2 - *a1; /*0x58c71d*/
  v10 = a2[1] - a1[1]; /*0x58c725*/
  v9 = Math::Sqrt((double)(v8 * v8 + v10 * v10)); /*0x58c735*/
  if ( v8 ) /*0x58c73e*/
  {
    v3 = Math::ArcTan(-((double)v10 / (double)v8)); /*0x58c754*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 * 2.5 + 1.5 * v11 + 0.15 * v9; /*0x58c7ee*/
}



// ==== 0x0058C800  RandomMap::GenerateTerrain  this=RandomMap  sig=csp ====
_DWORD *__thiscall RandomMap::GenerateTerrain(RandomMap *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // edx
  int v5; // edx
  int i; // ebx
  int v7; // edi
  int v8; // eax
  int v9; // esi
  char *v10; // eax
  Cell *v11; // eax
  Cell *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  char v16; // bl
  _DWORD *v17; // ebp
  unsigned int v18; // esi
  unsigned int v19; // eax
  int v20; // edi
  int v21; // edx
  _BYTE *v22; // esi
  Cell *v23; // eax
  int v24; // esi
  int j; // eax
  int v26; // ecx
  char v27; // cl
  int v29; // edx
  __int16 v30; // bp
  int v31; // ecx
  int v32; // esi
  int v33; // edx
  int v34; // edi
  int v35; // esi
  int v36; // eax
  int v37; // ebx
  int v38; // ecx
  char v39; // cl
  RandomMap *v40; // eax
  _DWORD *v41; // esi
  char v42; // al
  int v43; // edi
  int v44; // ebp
  int v45; // [esp+10h] [ebp-44h] BYREF
  __int16 v46[2]; // [esp+14h] [ebp-40h] BYREF
  __int16 v47[2]; // [esp+18h] [ebp-3Ch] BYREF
  int v48; // [esp+1Ch] [ebp-38h]
  __int16 v49[2]; // [esp+20h] [ebp-34h] BYREF
  RandomMap *v50; // [esp+24h] [ebp-30h]
  int v51; // [esp+28h] [ebp-2Ch] BYREF
  double v52; // [esp+2Ch] [ebp-28h]
  __int64 v53; // [esp+34h] [ebp-20h] BYREF
  _VectorClass_VCell v54; // [esp+3Ch] [ebp-18h] BYREF
  int v55; // [esp+50h] [ebp-4h]

  v50 = this; /*0x58c816*/
  *(_DWORD *)v47 = g_MissionQueueFrame.localVariables[164]; /*0x58c81a*/
  VectorClass::CellConstructor((VectorClass *)&v54, 0, 0); /*0x58c81e*/
  v2 = this->RandomMap_field_0x24[0]; /*0x58c823*/
  *(_DWORD *)v54.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58c826*/
  *(_DWORD *)v54.__tail_10 = 0; /*0x58c832*/
  v55 = 50000; /*0x58c838*/
  if ( v54.m_8 > 0 || (BYTE1(v54.m_C) || !v54.m_8) && VectorClass::ResizeEx(&v54, v54.m_8 + 50000, 0) ) /*0x58c859*/
  {
    v3 = (*(_DWORD *)v54.__tail_10)++; /*0x58c867*/
    *(_DWORD *)(*(_DWORD *)&v54.m_1[3] + 4 * v3) = v2; /*0x58c872*/
  }
  if ( (unsigned __int8)Cell::IsGroundTypeRange((Cell *)this) /*0x58c882*/
    || (LOBYTE(v48) = 0, (unsigned __int8)Cell::IsShore((Cell *)this)) )
  {
    LOBYTE(v48) = 1; /*0x58c890*/
  }
  v51 = this->__pad_4C[207]; /*0x58c89c*/
  v4 = *(_DWORD *)v54.__tail_10; /*0x58c8a0*/
  *(_DWORD *)v49 = 0; /*0x58c8a6*/
  if ( *(_DWORD *)v54.__tail_10 ) /*0x58c8aa*/
  {
    do /*0x58ca9c*/
    {
      v45 = *(_DWORD *)(*(_DWORD *)&v54.m_1[3] + 4 * v4 - 4); /*0x58c8b8*/
      if ( v4 - 1 < v4 ) /*0x58c8c1*/
        *(_DWORD *)v54.__tail_10 = v4 - 1; /*0x58c8c7*/
      v5 = *(_DWORD *)v47; /*0x58c8f4*/
      *(_DWORD *)(80 * ((__int16)v45 + g_MapCellWidth * SHIWORD(v45)) + g_MissionQueueFrame.localVariables[163] + 60) = *(_DWORD *)v47; /*0x58c906*/
      if ( g_MissionQueueFrame.localVariables[163] ) /*0x58c912*/
        *(_DWORD *)(80 * ((__int16)v45 + g_MapCellWidth * SHIWORD(v45)) + g_MissionQueueFrame.localVariables[163] + 56) = v5; /*0x58c92d*/
      for ( i = 0; i < 8; ++i ) /*0x58c931*/
      {
        LODWORD(v52) = *CellStruct::Add((CellStruct *)&v45, &v53, (_WORD *)(4 * (i & 7) + 9041544)); /*0x58c956*/
        *(_DWORD *)v46 = LODWORD(v52); /*0x58c95a*/
        v7 = g_MissionQueueFrame.localVariables[160]; /*0x58c968*/
        v8 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v52) + g_MapCellWidth * SWORD1(v52)); /*0x58c97d*/
        v9 = SWORD1(v52) + SLOWORD(v52); /*0x58c97f*/
        if ( v9 > g_MissionQueueFrame.localVariables[160] /*0x58c9bf*/
          && SLOWORD(v52) - SWORD1(v52) < g_MissionQueueFrame.localVariables[160]
          && SWORD1(v52) - SLOWORD(v52) < g_MissionQueueFrame.localVariables[160]
          && v9 <= g_MissionQueueFrame.localVariables[161]
          && *(_DWORD *)(v8 + 56) == -1
          && *(_DWORD *)(v8 + 60) != *(_DWORD *)v47 )
        {
          *(_DWORD *)(v8 + 60) = *(_DWORD *)v47; /*0x58c9c5*/
          v10 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v46); /*0x58c9d2*/
          if ( v10[283] == v51 ) /*0x58c9e2*/
          {
            v11 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v46); /*0x58c9f2*/
            v13 = 1; /*0x58ca20*/
            if ( !(unsigned __int8)Cell::IsGroundTypeRange(v11) ) /*0x58c9f9*/
            {
              v12 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v46); /*0x58ca0c*/
              if ( !(unsigned __int8)Cell::IsShore(v12) ) /*0x58ca13*/
                v13 = 0; /*0x58c9f9*/
            }
            if ( v13 == (unsigned __int8)v48 /*0x58ca60*/
              && (*(int *)v54.__tail_10 < v54.m_8
               || (BYTE1(v54.m_C) || !v54.m_8)
               && v55 > 0
               && (*(unsigned __int8 (__thiscall **)(_VectorClass_VCell *, int, _DWORD))(*(_DWORD *)v54.__pad_0 + 8))(
                    &v54,
                    v55 + v54.m_8,
                    0)) )
            {
              v14 = (*(_DWORD *)v54.__tail_10)++; /*0x58ca6f*/
              *(_DWORD *)(*(_DWORD *)&v54.m_1[3] + 4 * v14) = *(_DWORD *)v46; /*0x58ca7a*/
            }
          }
          v7 = g_MissionQueueFrame.localVariables[160]; /*0x58ca7d*/
        }
      }
      v4 = *(_DWORD *)v54.__tail_10; /*0x58ca91*/
      v15 = ++*(_DWORD *)v49; /*0x58ca95*/
    }
    while ( *(_DWORD *)v54.__tail_10 ); /*0x58ca9c*/
    if ( v15 >= 75 ) /*0x58caa7*/
      goto LABEL_84; /*0x58caa7*/
  }
  else
  {
    v7 = g_MissionQueueFrame.localVariables[160]; /*0x58caaf*/
  }
  if ( !(_BYTE)v48 ) /*0x58cabb*/
  {
    v16 = 0; /*0x58cac5*/
    if ( *(_DWORD *)v47 ) /*0x58cac9*/
    {
      v29 = v50->RandomMap_field_0x24[0]; /*0x58cca4*/
      LODWORD(v52) = v29; /*0x58cca9*/
      v49[1] = HIWORD(v29); /*0x58ccb3*/
      v49[0] = v29 - 1; /*0x58ccb8*/
      v30 = v29 - 1; /*0x58ccbd*/
      v31 = (__int16)(v29 - 1); /*0x58ccc1*/
      v32 = SHIWORD(v29) + v31; /*0x58cccb*/
      if ( v32 <= v7 /*0x58cce6*/
        || v31 - SWORD1(v52) >= v7
        || SWORD1(v52) - v31 >= v7
        || v32 > g_MissionQueueFrame.localVariables[161] )
      {
        LODWORD(v53) = v29; /*0x58cce8*/
        *(_DWORD *)v49 = v29 - 0x10000; /*0x58ccf6*/
        v30 = v29; /*0x58ccfb*/
      }
      v33 = v30 + v49[1]; /*0x58cd0b*/
      if ( v33 > v7 && v30 - v49[1] < v7 && v49[1] - v30 < v7 && v33 <= g_MissionQueueFrame.localVariables[161] ) /*0x58cd34*/
      {
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x58cd44*/
          v34 = *(_DWORD *)(80 * (v30 + g_MapCellWidth * v49[1]) + g_MissionQueueFrame.localVariables[163] + 56); /*0x58cd5a*/
        else
          v34 = -1; /*0x58cd46*/
        v35 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49) + 283); /*0x58cd6d*/
        LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58cd79*/
        v36 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58cd83*/
        if ( v36 ) /*0x58cd8a*/
        {
          v37 = *(_DWORD *)v47; /*0x58cd90*/
          do /*0x58cdef*/
          {
            LODWORD(v52) = *(_DWORD *)(v36 + 36); /*0x58cd97*/
            v38 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v52) + g_MapCellWidth * SWORD1(v52)); /*0x58cdb8*/
            if ( *(_DWORD *)(v38 + 56) == v37 ) /*0x58cdbd*/
            {
              *(_DWORD *)(v38 + 56) = v34; /*0x58cdbf*/
              *(_BYTE *)(v38 + 75) = 0; /*0x58cdc2*/
              *(_DWORD *)(v36 + 56) = 0; /*0x58cdc6*/
              *(_BYTE *)(v36 + 282) = 0; /*0x58cdc9*/
              v39 = g_MissionQueueFrame.globalVariables[100]; /*0x58cdd0*/
              if ( v35 != -1 ) /*0x58cdd9*/
                v39 = v35; /*0x58cddb*/
              *(_BYTE *)(v36 + 283) = v39; /*0x58cddd*/
            }
            v36 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58cde8*/
          }
          while ( v36 ); /*0x58cdef*/
        }
        goto LABEL_63; /*0x58cdef*/
      }
      goto LABEL_84; /*0x58cd34*/
    }
    v17 = RandomMap::CellListAlloc((RandomMap *)&g_MissionQueueFrame.briefing[356], 0); /*0x58cadc*/
    HIDWORD(v53) = 0; /*0x58cade*/
    *(_DWORD *)v46 = v17; /*0x58cae2*/
    v18 = v17[4] - 1; /*0x58cae9*/
    v53 = (unsigned int)v17[4]; /*0x58caed*/
    v52 = (double)v53; /*0x58caf5*/
    do /*0x58cb20*/
    {
      v53 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58cb03*/
      LOWORD(v19) = Math::RoundToInt((double)v53 * v52 * 2.328306437080797e-10); /*0x58cb19*/
    }
    while ( v19 > v18 ); /*0x58cb20*/
    v20 = 0; /*0x58cb25*/
    *(_DWORD *)v47 = *(_DWORD *)(v17[1] + 4 * v19); /*0x58cb2a*/
    while ( 1 ) /*0x58cb51*/
    {
      LODWORD(v52) = *CellStruct::Add((CellStruct *)v47, &v53, (_WORD *)(4 * (v20 & 7) + 9041544)); /*0x58cb51*/
      *(_DWORD *)v49 = LODWORD(v52); /*0x58cb55*/
      v21 = SWORD1(v52) + SLOWORD(v52); /*0x58cb61*/
      if ( v21 > g_MissionQueueFrame.localVariables[160] ) /*0x58cb66*/
      {
        if ( SLOWORD(v52) - SWORD1(v52) < g_MissionQueueFrame.localVariables[160] /*0x58cb7c*/
          && SWORD1(v52) - SLOWORD(v52) < g_MissionQueueFrame.localVariables[160]
          && v21 <= g_MissionQueueFrame.localVariables[161] )
        {
          v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x58cb91*/
          if ( v22[283] != *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v47) + 283) ) /*0x58cbac*/
          {
            v23 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x58cbb8*/
            if ( !(unsigned __int8)Cell::IsGroundTypeRange(v23) ) /*0x58cbc6*/
            {
              v24 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49) + 283); /*0x58cbea*/
              LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58cbf6*/
              for ( j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58cc09*/
                    j;
                    j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
              {
                LODWORD(v52) = *(_DWORD *)(j + 36); /*0x58cc17*/
                v26 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v52) + g_MapCellWidth * SWORD1(v52)); /*0x58cc32*/
                if ( !*(_DWORD *)(v26 + 56) ) /*0x58cc34*/
                {
                  *(_DWORD *)(v26 + 56) = -1; /*0x58cc39*/
                  *(_BYTE *)(v26 + 75) = 0; /*0x58cc3c*/
                  *(_DWORD *)(j + 56) = 0; /*0x58cc40*/
                  *(_BYTE *)(j + 282) = 0; /*0x58cc43*/
                  v27 = g_MissionQueueFrame.globalVariables[100]; /*0x58cc4a*/
                  if ( v24 != -1 ) /*0x58cc52*/
                    v27 = v24; /*0x58cc54*/
                  *(_BYTE *)(j + 283) = v27; /*0x58cc56*/
                }
              }
              v17 = *(_DWORD **)v46; /*0x58cc6a*/
              v16 = 1; /*0x58cc6e*/
LABEL_60:
              if ( v17 ) /*0x58cc72*/
                (*(void (__thiscall **)(_DWORD *, int))*v17)(v17, 1); /*0x58cc7b*/
              if ( v16 ) /*0x58cc7f*/
              {
LABEL_63:
                *(_DWORD *)v54.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x58cc85*/
                Buffer::Cleanup(&v54); /*0x58cc91*/
                return 0; /*0x58cc9f*/
              }
              break; /*0x58cc7f*/
            }
          }
        }
        v17 = *(_DWORD **)v46; /*0x58cbc8*/
      }
      if ( ++v20 >= 8 ) /*0x58cbd0*/
        goto LABEL_60; /*0x58cbd0*/
    }
  }
LABEL_84:
  v40 = (RandomMap *)__2_YAPAXI_Z(0x50u); /*0x58cdf6*/
  if ( v40 ) /*0x58ce02*/
    v41 = RandomMap::TerrainTileDataConstructor(v40, v50->RandomMap_field_0x24[0]); /*0x58ce13*/
  else
    v41 = 0; /*0x58ce17*/
  v42 = v48; /*0x58ce1d*/
  v41[4] = v51; /*0x58ce21*/
  *((_BYTE *)v41 + 20) = v42; /*0x58ce24*/
  v41[3] = 0; /*0x58ce27*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58ce38*/
  {
    v43 = 0; /*0x58ce3c*/
    v44 = g_MapCellWidth * g_MapCellWidth; /*0x58ce3e*/
    do /*0x58ce71*/
    {
      if ( *(_DWORD *)(v43 + g_MissionQueueFrame.localVariables[163] + 56) == v41[2] ) /*0x58ce50*/
      {
        v51 = 0; /*0x58ce56*/
        if ( (unsigned __int8)Coord::Compare2D((Coord *)(v43 + g_MissionQueueFrame.localVariables[163]), &v51) ) /*0x58ce61*/
          ++v41[3]; /*0x58ce6a*/
      }
      v43 += 80; /*0x58ce6d*/
      --v44; /*0x58ce70*/
    }
    while ( v44 ); /*0x58ce71*/
  }
  *(_DWORD *)v54.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x58ce77*/
  Buffer::Cleanup(&v54); /*0x58ce7f*/
  return v41; /*0x58cc98*/
}



// ==== 0x0058CE90  ObjectClass::Map_Helper_58CE90  this=ObjectClass  sig=csp ====
void Map_Helper_58CE90(ObjectClass *this)
{
  int v1; // ecx
  int v2; // eax
  int i; // edi
  _DWORD *v4; // esi
  int v5; // eax
  void *v6; // eax
  _DWORD *v7; // [esp+Ch] [ebp-4h] BYREF

  if ( g_MissionQueueFrame.localVariables[163] ) /*0x58ce9d*/
  {
    v1 = g_MapCellWidth * g_MapCellWidth; /*0x58cea5*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58ceaa*/
    {
      v2 = 0; /*0x58ceac*/
      do /*0x58cec9*/
      {
        *(_DWORD *)(v2 + g_MissionQueueFrame.localVariables[163] + 56) = -1; /*0x58ceb7*/
        *(_DWORD *)(v2 + g_MissionQueueFrame.localVariables[163] + 60) = -1; /*0x58cec1*/
        v2 += 80; /*0x58cec5*/
        --v1; /*0x58cec8*/
      }
      while ( v1 ); /*0x58cec9*/
    }
  }
  for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x58ced5*/
  {
    v4 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x58cee1*/
    if ( v4 ) /*0x58cee6*/
    {
      if ( *v4 ) /*0x58ceec*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v4)(*v4, 1); /*0x58cef6*/
        *v4 = 0; /*0x58cef8*/
      }
      v7 = v4; /*0x58cf0a*/
      v5 = (*(int (__thiscall **)(int *, _DWORD **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x58cf0e*/
             &g_MissionQueueFrame.briefing[338],
             &v7);
      if ( v5 != -1 && v5 < g_MissionQueueFrame.briefing[342] ) /*0x58cf1e*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x58cf23*/
        for ( ; /*0x58cf29*/
              v5 < g_MissionQueueFrame.briefing[342];
              *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v5 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                      + 4 * v5) )
        {
          ++v5; /*0x58cf31*/
        }
      }
      v6 = (void *)v4[11]; /*0x58cf43*/
      v4[10] = &VectorClass<Cell>::`vftable'; /*0x58cf46*/
      if ( v6 && *((_BYTE *)v4 + 53) ) /*0x58cf51*/
      {
        __3_YAXPAX_Z(v6); /*0x58cf57*/
        v4[11] = 0; /*0x58cf5f*/
      }
      *((_BYTE *)v4 + 53) = 0; /*0x58cf63*/
      v4[12] = 0; /*0x58cf66*/
      __3_YAXPAX_Z(v4); /*0x58cf69*/
    }
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x58cf79*/
}



// ==== 0x0058CF90  RandomMap::GenerateTerrainForAllCells  this=RandomMap  sig=csp ====
int __thiscall RandomMap::GenerateTerrainForAllCells(RandomMap *this)
{
  int result; // eax
  int v2; // ebx
  int v3; // esi
  RandomMap *v4; // edi
  __int16 v5[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v5 = this; /*0x58cf90*/
  result = g_MapCellWidth * g_MapCellWidth; /*0x58cf96*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58cf9b*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x58cf9f*/
    result = g_MissionQueueFrame.localVariables[163]; /*0x58cfa1*/
    v3 = 0; /*0x58cfa7*/
    do /*0x58d002*/
    {
      *(_DWORD *)v5 = *(_DWORD *)(v3 + result); /*0x58cfb6*/
      v4 = (RandomMap *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v5); /*0x58cfbf*/
      result = g_MissionQueueFrame.localVariables[163]; /*0x58cfc1*/
      if ( *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] + 56) == -1 /*0x58cfd4*/
        && (*(_WORD *)(v3 + g_MissionQueueFrame.localVariables[163])
         || *(_WORD *)(v3 + g_MissionQueueFrame.localVariables[163] + 2)) )
      {
        if ( (unsigned __int8)Cell::IsGroundTypeRange((Cell *)v4) || (unsigned __int8)Cell::IsShore((Cell *)v4) ) /*0x58cfe9*/
          RandomMap::GenerateTerrain(v4); /*0x58cff4*/
        result = g_MissionQueueFrame.localVariables[163]; /*0x58cff9*/
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

  result = g_MapCellWidth * g_MapCellWidth; /*0x58d016*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58d01d*/
  {
    v3 = 0; /*0x58d021*/
    v4 = g_MapCellWidth * g_MapCellWidth; /*0x58d023*/
    do /*0x58d05c*/
    {
      result = (int)dword_ABED10 + v3; /*0x58d02a*/
      if ( *(_DWORD *)((char *)dword_ABED10 + v3 + 56) == -1 && (*(_WORD *)result || *(_WORD *)(result + 2)) ) /*0x58d038*/
      {
        v5 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)((char *)dword_ABED10 + v3)); /*0x58d045*/
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

  if ( dword_ABED10 ) /*0x58d079*/
  {
    result = 80 * (*a1 + g_MapCellWidth * a1[1]); /*0x58d08e*/
    *(_DWORD *)((char *)dword_ABED10 + result + 56) = a2; /*0x58d091*/
  }
  return result; /*0x58d095*/
}



// ==== 0x0058D0A0  TileSystem::LookupMapTile  this=TileSystem  sig=csp ====
int __thiscall TileSystem::LookupMapTile(TileSystem *this)
{
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d0a8*/
    return *(_DWORD *)(80 * (*(__int16 *)this->__pad_0 + g_MapCellWidth * *(__int16 *)&this->__pad_0[2]) /*0x58d0c4*/
                     + g_MissionQueueFrame.localVariables[163]
                     + 56);
  else
    return -1; /*0x58d0aa*/
}



// ==== 0x0058D120  ObjectClass::method_58D120  this=ObjectClass  sig=csp ====
int __thiscall sub_58D120(ObjectClass *this, int a2, int a3)
{
  int result; // eax
  int v4; // ebx
  int v5; // esi
  _DWORD *v6; // eax
  ObjectClass *v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  result = g_MapCellWidth * g_MapCellWidth; /*0x58d129*/
  v7 = this; /*0x58d12e*/
  if ( g_MapCellWidth * g_MapCellWidth <= 0 ) /*0x58d134*/
  {
    this->? = 0; /*0x58d1b3*/
  }
  else
  {
    v4 = a3; /*0x58d137*/
    v5 = 0; /*0x58d141*/
    v8 = g_MapCellWidth * g_MapCellWidth; /*0x58d143*/
    do /*0x58d1a4*/
    {
      if ( *(void **)(v5 + g_MissionQueueFrame.localVariables[163] + 56) == this->? ) /*0x58d153*/
      {
        *(_DWORD *)(v5 + g_MissionQueueFrame.localVariables[163] + 56) = a2; /*0x58d155*/
        *(_BYTE *)(v5 + g_MissionQueueFrame.localVariables[163] + 75) = 0; /*0x58d15e*/
        a3 = *(_DWORD *)(v5 + g_MissionQueueFrame.localVariables[163]); /*0x58d176*/
        v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x58d17a*/
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
    this->? = 0; /*0x58d1a8*/
  }
  return result; /*0x58d1ac*/
}



// ==== 0x0058D1C0  RandomMap::ExpandTerrainCells  this=RandomMap  sig=csp ====
int __thiscall RandomMap::ExpandTerrainCells(RandomMap *this, int a2, int a3)
{
  int result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // ecx
  int v7; // edi
  int i; // esi
  int v9; // ecx
  VectorClass *v10; // eax
  VectorClass *v11; // esi
  VectorClass *v12; // ebx
  int v13; // edi
  int v14; // edx
  char v15; // al
  __int16 v16; // cx
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  int Capacity; // ecx
  int v21; // eax
  void *vtable0; // eax
  _DWORD *Items; // edx
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
    v6 = g_MapCellWidth * g_MapCellWidth; /*0x58d1e3*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58d1e8*/
    {
      result = 0; /*0x58d1ea*/
      do /*0x58d1fe*/
      {
        result += 80; /*0x58d1f2*/
        --v6; /*0x58d1f5*/
        *(_DWORD *)(result + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58d1f6*/
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
        if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d228*/
        {
          result = 80 * ((__int16)v9 + g_MapCellWidth * SHIWORD(v9)); /*0x58d242*/
          *(_DWORD *)(result + g_MissionQueueFrame.localVariables[163] + 56) = a3; /*0x58d245*/
        }
      }
      if ( v7 < v4 - 1 ) /*0x58d251*/
      {
        v10 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x58d259*/
        v11 = v10; /*0x58d25e*/
        v12 = 0; /*0x58d260*/
        if ( v10 ) /*0x58d267*/
        {
          VectorClass::CellConstructor(v10, 0, 0); /*0x58d26d*/
          v11[1].vtable0 = 0; /*0x58d272*/
          v11->vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58d275*/
          v11[1].Items = (void *)10; /*0x58d27b*/
          v12 = v11; /*0x58d282*/
        }
        v12[1].Items = *(void **)(v5 + 16); /*0x58d287*/
        result = *(_DWORD *)(v5 + 16) - 1; /*0x58d28d*/
        v30 = result; /*0x58d28e*/
        if ( result >= 0 ) /*0x58d292*/
        {
          v13 = g_MissionQueueFrame.localVariables[160]; /*0x58d298*/
          do /*0x58d39d*/
          {
            v14 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * result); /*0x58d2a1*/
            v15 = 0; /*0x58d2a4*/
            v27 = v14; /*0x58d2a6*/
            for ( j = 0; j < 8; ++j ) /*0x58d2aa*/
            {
              v16 = HIWORD(v27) + HIWORD(g_DDrawSurfaceManager.scenario[(v15 & 7) + 82]); /*0x58d2c4*/
              LOWORD(v28) = LOWORD(g_DDrawSurfaceManager.scenario[(v15 & 7) + 82]) + v27; /*0x58d2c9*/
              v17 = v16; /*0x58d2d1*/
              HIWORD(v28) = v16; /*0x58d2d4*/
              v18 = v16 + (__int16)v28; /*0x58d2d9*/
              if ( v18 > v13 /*0x58d302*/
                && (__int16)v28 - v17 < v13
                && v17 - (__int16)v28 < v13
                && v18 <= g_MissionQueueFrame.localVariables[161] )
              {
                v19 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v28 + g_MapCellWidth * v17); /*0x58d31f*/
                if ( *(void **)(v19 + 56) == this->RandomMap_field_0x8 ) /*0x58d326*/
                {
                  if ( *(_DWORD *)(v19 + 60) != v26 + 1 ) /*0x58d334*/
                  {
                    Capacity = v12->Capacity; /*0x58d336*/
                    if ( (int)v12[1].vtable0 < Capacity /*0x58d35b*/
                      || (v12->IsAllocated || !Capacity)
                      && (v21 = (int)v12[1].Items, v21 > 0)
                      && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v12->vtable0 + 2))(
                           v12,
                           Capacity + v21,
                           0) )
                    {
                      vtable0 = v12[1].vtable0; /*0x58d362*/
                      Items = v12->Items; /*0x58d365*/
                      v12[1].vtable0 = (char *)vtable0 + 1; /*0x58d36b*/
                      Items[(_DWORD)vtable0] = v28; /*0x58d372*/
                    }
                    *(_DWORD *)(v19 + 60) = v26 + 1; /*0x58d375*/
                    v13 = g_MissionQueueFrame.localVariables[160]; /*0x58d378*/
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
    v24 = g_MapCellWidth * g_MapCellWidth; /*0x58d3e7*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58d3ec*/
    {
      result = 0; /*0x58d3ee*/
      do /*0x58d402*/
      {
        result += 80; /*0x58d3f6*/
        --v24; /*0x58d3f9*/
        *(_DWORD *)(result + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58d3fa*/
      }
      while ( v24 ); /*0x58d402*/
    }
  }
  return result; /*0x58d3da*/
}



// ==== 0x0058D410  RandomMap::TerrainAlloc  this=DynamicVector  sig=csp ====
_DWORD *__thiscall RandomMap::TerrainAlloc(RandomMap *this)
{
  VectorClass *v1; // eax
  VectorClass *v2; // esi
  VectorClass *v3; // ebx
  int v4; // ebp
  int v5; // ecx
  int v6; // eax
  signed int i; // edi
  int v8; // edx
  void *v9; // eax
  int Capacity; // eax
  int v11; // ebp
  int v12; // ecx
  void *vtable0; // eax
  _DWORD *Items; // edx
  char v16; // [esp+Fh] [ebp-Dh]
  VectorClass *v17; // [esp+10h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-4h]

  v1 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x58d41c*/
  v2 = v1; /*0x58d421*/
  if ( v1 ) /*0x58d428*/
  {
    VectorClass::CellConstructor(v1, 0, 0); /*0x58d430*/
    v2->vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58d435*/
    v2[1].Items = (void *)10; /*0x58d43b*/
    v2[1].vtable0 = 0; /*0x58d442*/
    v3 = v2; /*0x58d449*/
  }
  else
  {
    v3 = 0; /*0x58d44d*/
  }
  v17 = v3; /*0x58d454*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58d458*/
  v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58d467*/
  if ( !v4 ) /*0x58d46b*/
    return &v3->vtable0; /*0x58d592*/
  do
  {
    v5 = *(_DWORD *)(v4 + 36); /*0x58d478*/
    if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d481*/
      v6 = *(_DWORD *)(80 * ((__int16)v5 + g_MapCellWidth * SHIWORD(v5)) + g_MissionQueueFrame.localVariables[163] + 56); /*0x58d49f*/
    else
      v6 = -1; /*0x58d483*/
    if ( (void *)v6 == this->RandomMap_field_0x8 )
    {
      v16 = 0; /*0x58d4b0*/
      for ( i = 0; i < 8; ++i )
      {
        v19 = *((_DWORD *)Cell::GetNeighbourContent((Cell *)v4, i) + 9); /*0x58d4c8*/
        v8 = SHIWORD(v19) + (__int16)v19; /*0x58d4d4*/
        if ( v8 > g_MissionQueueFrame.localVariables[160] )
        {
          if ( (__int16)v19 - SHIWORD(v19) < g_MissionQueueFrame.localVariables[160]
            && SHIWORD(v19) - (__int16)v19 < g_MissionQueueFrame.localVariables[160]
            && v8 <= g_MissionQueueFrame.localVariables[161] )
          {
            v9 = g_MissionQueueFrame.localVariables[163]
               ? *(void **)(80 * ((__int16)v19 + g_MapCellWidth * SHIWORD(v19))
                          + g_MissionQueueFrame.localVariables[163]
                          + 56)
               : (void *)-1;
            if ( v9 != this->RandomMap_field_0x8 ) /*0x58d51c*/
              v16 = 1; /*0x58d51e*/
          }
          v3 = v17; /*0x58d523*/
        }
      }
      if ( v16 ) /*0x58d533*/
      {
        Capacity = v3->Capacity; /*0x58d535*/
        v11 = *(_DWORD *)(v4 + 36); /*0x58d53b*/
        if ( (int)v3[1].vtable0 < Capacity /*0x58d55d*/
          || (v3->IsAllocated || !Capacity)
          && (v12 = (int)v3[1].Items, v12 > 0)
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v3->vtable0 + 2))(v3, Capacity + v12, 0) )
        {
          vtable0 = v3[1].vtable0; /*0x58d564*/
          Items = v3->Items; /*0x58d567*/
          v3[1].vtable0 = (char *)vtable0 + 1; /*0x58d56d*/
          Items[(_DWORD)vtable0] = v11; /*0x58d570*/
        }
      }
    }
    v4 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58d57d*/
  }
  while ( v4 );
  return &v3->vtable0; /*0x58d588*/
}



// ==== 0x0058D620  TileSystem::BuildNodes  this=TileSystem  sig=csp ====
char __thiscall TileSystem::BuildNodes(TileSystem *this)
{
  double v1; // st7
  char v3; // al
  int v5; // esi
  void *v6; // eax
  Heap *v7; // eax
  Heap *v8; // esi
  int TileSystem_field_0x0C; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int i; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int j; // ecx
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // eax
  int v25; // ecx
  _DWORD *v26; // edi
  unsigned int v27; // ecx
  unsigned int v28; // edx
  Heap v29; // ebx
  unsigned int v32; // eax
  CellStruct *v33; // edi
  Heap v34; // eax
  CellStruct *v35; // ecx
  float *v36; // ebp
  int v37; // edx
  int v38; // eax
  Cell *v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // edx
  _DWORD *v42; // edx
  int v43; // eax
  int v45; // eax
  float *v46; // edi
  int v47; // edx
  int v48; // eax
  unsigned int v49; // ecx
  unsigned int v50; // edx
  Heap v51; // ebx
  Heap v53; // eax
  bool v54; // cc
  Heap v55; // ecx
  bool v56; // zf
  Heap v57; // eax
  CellStruct *v58; // edi
  int v59; // ecx
  int v60; // eax
  _DWORD *v61; // edi
  Heap v62; // eax
  Heap v63; // eax
  int TileSystem_field_0x08; // ebx
  int v65; // edx
  int v66; // ecx
  int v67; // ebp
  int v68; // esi
  RandomMap *v69; // eax
  _DWORD *v70; // ebx
  int v71; // ecx
  int v72; // eax
  _DWORD *v73; // edi
  int v74; // eax
  int v75; // eax
  int v76; // edx
  int v77; // eax
  int v78; // eax
  int m_10; // edx
  int k; // eax
  int v81; // ecx
  int v82; // eax
  char v83; // al
  int v84; // ebx
  int v85; // edx
  int v86; // esi
  int v87; // ecx
  int v88; // eax
  int v89; // eax
  int v90; // edx
  _DWORD *v91; // eax
  int v92; // eax
  CellStruct *v93; // eax
  int v94; // eax
  _DWORD *v95; // ebx
  void *v96; // ecx
  int v97; // eax
  int v98; // eax
  int v99; // edi
  int v100; // edx
  int v101; // eax
  int v102; // ebx
  int v103; // edx
  int v104; // esi
  int v105; // edi
  int v106; // eax
  int v107; // ecx
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // esi
  int v112; // eax
  int m_8; // eax
  int v114; // eax
  int v115; // eax
  int v116; // esi
  int v117; // eax
  int v118; // eax
  int v119; // esi
  int v120; // edx
  int v121; // ecx
  int v122; // eax
  int v123; // edi
  unsigned int v124; // esi
  unsigned int v125; // eax
  int v126; // eax
  char v127; // bl
  int v128; // esi
  _DWORD *v129; // edi
  _DWORD *v130; // ebp
  int v131; // eax
  char v132; // bl
  int jj; // esi
  int kk; // ebx
  int v135; // eax
  int v136; // ecx
  int v137; // edi
  int v138; // ecx
  int v139; // eax
  int v140; // edx
  int v141; // edi
  int v142; // ecx
  TileNode *v143; // eax
  void *v144; // esi
  void *TileSystem_field_0x04; // eax
  char v146; // [esp+34h] [ebp-A0h]
  int m; // [esp+34h] [ebp-A0h]
  int ii; // [esp+34h] [ebp-A0h]
  int v149; // [esp+34h] [ebp-A0h]
  _DynamicVectorClass_H v150; // [esp+38h] [ebp-9Ch] BYREF
  int v151; // [esp+4Ch] [ebp-88h]
  CellStruct *v152; // [esp+50h] [ebp-84h]
  double v153; // [esp+54h] [ebp-80h]
  void *Block; // [esp+60h] [ebp-74h]
  void *n; // [esp+64h] [ebp-70h]
  int v156; // [esp+68h] [ebp-6Ch]
  TileSystem v157; // [esp+6Ch] [ebp-68h] BYREF
  double v158; // [esp+7Ch] [ebp-58h] BYREF
  __int16 v159[2]; // [esp+84h] [ebp-50h] BYREF
  int v160; // [esp+88h] [ebp-4Ch] BYREF
  double v161; // [esp+8Ch] [ebp-48h] BYREF
  __int64 v162; // [esp+98h] [ebp-3Ch]
  TileSystem v163; // [esp+A0h] [ebp-34h] BYREF
  int v164; // [esp+B0h] [ebp-24h]
  int v165; // [esp+B4h] [ebp-20h]
  int v166; // [esp+B8h] [ebp-1Ch]
  VectorClass v167; // [esp+BCh] [ebp-18h] BYREF
  int v168; // [esp+CCh] [ebp-8h]
  int v169; // [esp+D0h] [ebp-4h]

  v3 = *((_BYTE *)this + 26); /*0x58d631*/
  v157.TileSystem_field_0x08 = (int)this; /*0x58d637*/
  if ( v3 ) /*0x58d63d*/
    return 0; /*0x58d648*/
  v5 = 2 * this->TileSystem_field_0x0C + 10; /*0x58d64c*/
  v6 = (void *)__2_YAPAXI_Z(8 * v5); /*0x58d658*/
  if ( v6 ) /*0x58d662*/
  {
    Block = v6; /*0x58d665*/
    LODWORD(v158) = v5 - 1; /*0x58d669*/
  }
  else
  {
    Block = 0; /*0x58d66f*/
  }
  v7 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x58d675*/
  v8 = v7; /*0x58d67a*/
  if ( v7 ) /*0x58d684*/
  {
    TileSystem_field_0x0C = this->TileSystem_field_0x0C; /*0x58d686*/
    v7[3] = 0; /*0x58d689*/
    v7[4] = (Heap)-1; /*0x58d68c*/
    *v7 = 0; /*0x58d68f*/
    v10 = 2 * TileSystem_field_0x0C + 10; /*0x58d691*/
    v8[1] = (Heap)v10; /*0x58d695*/
    v11 = __2_YAPAXI_Z(4 * v10 + 4); /*0x58d6a0*/
    v12 = (int)v8[1]; /*0x58d6a5*/
    v8[2] = (Heap)v11; /*0x58d6a8*/
    v13 = 0; /*0x58d6ae*/
    if ( v12 >= 0 ) /*0x58d6b2*/
    {
      do /*0x58d6c1*/
      {
        ++v13; /*0x58d6b7*/
        *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * v13 - 4) = 0; /*0x58d6b8*/
      }
      while ( v13 <= *(_DWORD *)&v8[1] ); /*0x58d6c1*/
    }
  }
  else
  {
    v8 = 0; /*0x58d6c5*/
  }
  for ( i = 0; i <= *(_DWORD *)v8; *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * i - 4) = 0 ) /*0x58d6cd*/
    ++i; /*0x58d6d2*/
  *v8 = 0; /*0x58d6dd*/
  v15 = g_MapCellWidth * g_MapCellWidth; /*0x58d6e4*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58d6e9*/
  {
    v16 = 0; /*0x58d6eb*/
    do /*0x58d6fb*/
    {
      v16 += 80; /*0x58d6f3*/
      --v15; /*0x58d6f6*/
      *(_DWORD *)(v16 + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58d6f7*/
    }
    while ( v15 ); /*0x58d6fb*/
  }
  v17 = *((_DWORD *)this + 14); /*0x58d6fd*/
  n = 0; /*0x58d700*/
  for ( j = v17 - 1; j >= 0; *(_DWORD *)(v19 + g_MissionQueueFrame.localVariables[163] + 56) = -2 ) /*0x58d705*/
  {
    v19 = 80 /*0x58d72b*/
        * (*(__int16 *)(*(_DWORD *)(v157.TileSystem_field_0x08 + 44) + 4 * j)
         + g_MapCellWidth * *(__int16 *)(*(_DWORD *)(v157.TileSystem_field_0x08 + 44) + 4 * j + 2));
    --j; /*0x58d72e*/
  }
  v20 = *(_DWORD *)(v157.TileSystem_field_0x08 + 12) / 3; /*0x58d750*/
  v21 = *(_DWORD *)(v157.TileSystem_field_0x08 + 12) / 8; /*0x58d75a*/
  *(_QWORD *)&v153 = v20 - v21 + 1; /*0x58d762*/
  __asm { fild [esp+0B0h+var_80] } /*0x58d76a*/
  LODWORD(v153) = v21; /*0x58d76e*/
  __asm /*0x58d776*/
  {
    fstp [esp+0B0h+var_48]
    fild [esp+0B0h+var_80]
    fstp [esp+0B0h+var_58]
  }
  do /*0x58d7b4*/
  {
    *(_QWORD *)&v153 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58d78c*/
    __asm /*0x58d794*/
    {
      fild [esp+0B0h+var_80]
      fmul [esp+0B0h+var_48]
      fmul ds:dbl_7ED898
      fadd [esp+0B0h+var_58]
    }
    LOWORD(v22) = Math::RoundToInt(v1); /*0x58d7a6*/
    v166 = v22; /*0x58d7ad*/
  }
  while ( v22 > v20 ); /*0x58d7b4*/
  v23 = *(_DWORD *)(v157.TileSystem_field_0x08 + 56) - 1; /*0x58d7bd*/
  *(_QWORD *)&v153 = *(unsigned int *)(v157.TileSystem_field_0x08 + 56); /*0x58d7c1*/
  __asm /*0x58d7c5*/
  {
    fild [esp+0B0h+var_80]
    fstp [esp+0B0h+var_48]
  }
  do /*0x58d7f4*/
  {
    *(_QWORD *)&v153 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58d7d7*/
    __asm /*0x58d7df*/
    {
      fild [esp+0B0h+var_80]
      fmul [esp+0B0h+var_48]
      fmul ds:dbl_7ED898
    }
    LOWORD(v24) = Math::RoundToInt(v1); /*0x58d7ed*/
  }
  while ( v24 > v23 ); /*0x58d7f4*/
  v25 = *(_DWORD *)(v157.TileSystem_field_0x08 + 44); /*0x58d7f6*/
  v26 = Block; /*0x58d7f9*/
  v157.TileSystem_field_0x0C = 1; /*0x58d7fd*/
  v160 = *(_DWORD *)(v25 + 4 * v24); /*0x58d808*/
  *(_DWORD *)Block = v160; /*0x58d80c*/
  v26[1] = 0; /*0x58d80e*/
  *(_DWORD *)(80 * ((__int16)v160 + g_MapCellWidth * SHIWORD(v160)) + g_MissionQueueFrame.localVariables[163] + 60) = -3; /*0x58d830*/
  v27 = *(_DWORD *)v8 + 1; /*0x58d83d*/
  v156 = v26[1]; /*0x58d840*/
  v28 = v27 >> 1; /*0x58d847*/
  if ( v27 < *(_DWORD *)&v8[1] ) /*0x58d84b*/
  {
    for ( ; v27 > 1; v28 >>= 1 ) /*0x58d850*/
    {
      v29 = v8[2]; /*0x58d852*/
      _EBP = *(_DWORD *)(*(_DWORD *)&v29 + 4 * v28); /*0x58d855*/
      __asm /*0x58d858*/
      {
        fld dword ptr [ebp+4]
        fcomp [esp+0B0h+var_6C]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x58d864*/
        break; /*0x58d864*/
      *(_DWORD *)(*(_DWORD *)&v29 + 4 * v27) = _EBP; /*0x58d866*/
      v27 = v28; /*0x58d869*/
    }
    *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * v27) = v26; /*0x58d877*/
    v32 = (unsigned int)v8[3]; /*0x58d87c*/
    ++*(_DWORD *)v8; /*0x58d882*/
    if ( (unsigned int)v26 > v32 ) /*0x58d884*/
      v8[3] = (Heap)v26; /*0x58d886*/
    if ( (unsigned int)v26 < *(_DWORD *)&v8[4] ) /*0x58d88c*/
      v8[4] = (Heap)v26; /*0x58d88e*/
  }
  if ( *v8 ) /*0x58d891*/
  {
    v34 = v8[2]; /*0x58d89b*/
    v33 = *(CellStruct **)(*(_DWORD *)&v34 + 4); /*0x58d8a3*/
    *(_DWORD *)(*(_DWORD *)&v34 + 4) = *(_DWORD *)(*(_DWORD *)&v34 + 4 * *(_DWORD *)v8); /*0x58d8a6*/
    *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * (*(_DWORD *)v8)--) = 0; /*0x58d8ae*/
    Heap::SiftDown(v8, 1); /*0x58d8b8*/
  }
  else
  {
    v33 = 0; /*0x58d897*/
  }
  v152 = v33; /*0x58d8c2*/
  *(_QWORD *)&v153 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58d8cb*/
  __asm { fild [esp+0B0h+var_80] } /*0x58d8d3*/
  __asm
  {
    fmul ds:dbl_7ED8A8
    fstp [esp+0B0h+var_80]
  }
  if ( v33 ) /*0x58d8e3*/
  {
    do /*0x58db35*/
    {
      if ( (int)n >= v166 ) /*0x58d8f6*/
        break; /*0x58d8f6*/
      v35 = v152; /*0x58d902*/
      if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d908*/
        *(_DWORD *)(80 * (SLOWORD(v152->field_0) + g_MapCellWidth * SHIWORD(v152->field_0)) /*0x58d920*/
                  + g_MissionQueueFrame.localVariables[163]
                  + 56) = -3;
      *(_DWORD *)v157.__pad_0 = SLOWORD(v35->field_0) + g_MapCellWidth * SHIWORD(v35->field_0); /*0x58d93c*/
      v146 = 0; /*0x58d944*/
      v156 = (int)dword_89A304; /*0x58d94c*/
      v36 = (float *)((char *)Block + 8 * v157.TileSystem_field_0x0C); /*0x58d954*/
      while ( 1 ) /*0x58d97e*/
      {
        LODWORD(v162) = *CellStruct::Add(v35, &v161, (_WORD *)(4 * (v146 & 7) + 9041544)); /*0x58d97e*/
        *(_DWORD *)v159 = v162; /*0x58d982*/
        v37 = SWORD1(v162) + (__int16)v162; /*0x58d98e*/
        if ( v37 > g_MissionQueueFrame.localVariables[160] /*0x58d9b7*/
          && (__int16)v162 - SWORD1(v162) < g_MissionQueueFrame.localVariables[160]
          && SWORD1(v162) - (__int16)v162 < g_MissionQueueFrame.localVariables[160]
          && v37 <= g_MissionQueueFrame.localVariables[161] )
        {
          if ( g_MissionQueueFrame.localVariables[163] ) /*0x58d9c5*/
          {
            v38 = 80 * ((__int16)v162 + g_MapCellWidth * SWORD1(v162)) + g_MissionQueueFrame.localVariables[163]; /*0x58d9da*/
            if ( *(_DWORD *)(v38 + 56) == -2 && *(_DWORD *)(v38 + 60) != -3 ) /*0x58d9ee*/
            {
              v39 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v159); /*0x58d9fe*/
              if ( (unsigned __int8)Cell::IsEmpty(v39) ) /*0x58da05*/
              {
                v40 = HIDWORD(v153); /*0x58da16*/
                v41 = LODWORD(v153); /*0x58da1a*/
                *v36 = *(float *)v159; /*0x58da1e*/
                v1 = Memory_Helper_58C6F0((__int16 *)&v160, v159, COERCE_DOUBLE(__PAIR64__(v40, v41))); /*0x58da31*/
                v42 = (_DWORD *)v156; /*0x58da36*/
                v43 = *(_DWORD *)v157.__pad_0; /*0x58da3a*/
                __asm { fstp dword ptr [ebp+4] } /*0x58da3e*/
                v36[1] = _ET1; /*0x58da3e*/
                v45 = *v42 + v43; /*0x58da49*/
                v46 = v36; /*0x58da4f*/
                v36 += 2; /*0x58da51*/
                v47 = v157.TileSystem_field_0x0C + 1; /*0x58da5a*/
                *(_DWORD *)(80 * v45 + g_MissionQueueFrame.localVariables[163] + 60) = -3; /*0x58da5b*/
                v48 = *((_DWORD *)v46 + 1); /*0x58da65*/
                v49 = *(_DWORD *)v8 + 1; /*0x58da68*/
                v157.TileSystem_field_0x0C = v47; /*0x58da69*/
                LODWORD(v158) = v48; /*0x58da6f*/
                v50 = v49 >> 1; /*0x58da76*/
                if ( v49 < *(_DWORD *)&v8[1] ) /*0x58da7a*/
                {
                  for ( ; v49 > 1; v50 >>= 1 ) /*0x58da7f*/
                  {
                    v51 = v8[2]; /*0x58da81*/
                    _EAX = *(_DWORD *)(*(_DWORD *)&v51 + 4 * v50); /*0x58da84*/
                    __asm /*0x58da87*/
                    {
                      fld dword ptr [eax+4]
                      fcomp dword ptr [esp+0B0h+var_58]
                      fnstsw ax
                    }
                    if ( (_EAX & 0x4100) != 0 ) /*0x58da93*/
                      break; /*0x58da93*/
                    *(_DWORD *)(*(_DWORD *)&v51 + 4 * v49) = *(_DWORD *)(*(_DWORD *)&v51 + 4 * v50); /*0x58da98*/
                    v49 = v50; /*0x58da9b*/
                  }
                  *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * v49) = v46; /*0x58daa7*/
                  v53 = v8[3]; /*0x58daac*/
                  ++*(_DWORD *)v8; /*0x58dab2*/
                  if ( (unsigned int)v46 > *(_DWORD *)&v53 ) /*0x58dab4*/
                    v8[3] = (Heap)v46; /*0x58dab6*/
                  if ( (unsigned int)v46 < *(_DWORD *)&v8[4] ) /*0x58dabc*/
                    v8[4] = (Heap)v46; /*0x58dabe*/
                }
              }
            }
          }
        }
        v54 = v156 + 8 < (int)&unk_89A324; /*0x58dacf*/
        v146 += 2; /*0x58dad4*/
        v156 += 8; /*0x58dad8*/
        if ( !v54 ) /*0x58dadc*/
          break; /*0x58dadc*/
        v35 = v152; /*0x58d959*/
      }
      n = (char *)n + 1; /*0x58dae7*/
      Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x58daf0*/
      __asm { fmul ds:dbl_7ED8A0 } /*0x58daf5*/
      v55 = *v8; /*0x58dafb*/
      v56 = *v8 == 0; /*0x58dafd*/
      __asm /*0x58daff*/
      {
        fadd [esp+0B0h+var_80]
        fstp [esp+0B0h+var_80]
      }
      if ( v56 ) /*0x58db07*/
        break; /*0x58db07*/
      v57 = v8[2]; /*0x58db09*/
      v58 = *(CellStruct **)(*(_DWORD *)&v57 + 4); /*0x58db11*/
      *(_DWORD *)(*(_DWORD *)&v57 + 4) = *(_DWORD *)(*(_DWORD *)&v57 + 4 * *(_DWORD *)&v55); /*0x58db14*/
      *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * (*(_DWORD *)v8)--) = 0; /*0x58db1e*/
      Heap::SiftDown(v8, 1); /*0x58db2a*/
      v152 = v58; /*0x58db31*/
    }
    while ( v58 ); /*0x58db35*/
  }
  v59 = g_MapCellWidth * g_MapCellWidth; /*0x58db41*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58db46*/
  {
    v60 = 0; /*0x58db48*/
    do /*0x58db5b*/
    {
      v60 += 80; /*0x58db53*/
      --v59; /*0x58db56*/
      *(_DWORD *)(v60 + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58db57*/
    }
    while ( v59 ); /*0x58db5b*/
  }
  if ( *v8 ) /*0x58db5d*/
  {
    v62 = v8[2]; /*0x58db67*/
    v61 = *(_DWORD **)(*(_DWORD *)&v62 + 4); /*0x58db6f*/
    *(_DWORD *)(*(_DWORD *)&v62 + 4) = *(_DWORD *)(*(_DWORD *)&v62 + 4 * *(_DWORD *)v8); /*0x58db72*/
    *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * (*(_DWORD *)v8)--) = 0; /*0x58db7a*/
    Heap::SiftDown(v8, 1); /*0x58db88*/
  }
  else
  {
    v61 = 0; /*0x58db63*/
  }
  VectorClass::CellConstructor(&v167, 0, 0); /*0x58db98*/
  v167.vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58dba2*/
  v169 = 10; /*0x58dbaf*/
  v168 = 0; /*0x58dbb6*/
  while ( v61 ) /*0x58dbc1*/
  {
    LODWORD(v158) = *v61; /*0x58dbca*/
    *(_DWORD *)(80 * (SLOWORD(v158) + g_MapCellWidth * SWORD1(v158)) + g_MissionQueueFrame.localVariables[163] + 56) = -3; /*0x58dbea*/
    if ( !*(_DWORD *)v8 ) /*0x58dbee*/
      break; /*0x58dbf2*/
    v63 = v8[2]; /*0x58dbf4*/
    v61 = *(_DWORD **)(*(_DWORD *)&v63 + 4); /*0x58dbfc*/
    *(_DWORD *)(*(_DWORD *)&v63 + 4) = *(_DWORD *)(*(_DWORD *)&v63 + 4 * *(_DWORD *)v8); /*0x58dbff*/
    *(_DWORD *)(*(_DWORD *)&v8[2] + 4 * (*(_DWORD *)v8)--) = 0; /*0x58dc09*/
    Heap::SiftDown(v8, 1); /*0x58dc15*/
  }
  __3_YAXPAX_Z(Block); /*0x58dc23*/
  if ( v8 ) /*0x58dc2d*/
  {
    __3_YAXPAX_Z(*(void **)&v8[2]); /*0x58dc33*/
    __3_YAXPAX_Z(v8); /*0x58dc39*/
  }
  TileSystem::Constructor(&v163, 0, 0); /*0x58dc4c*/
  TileSystem_field_0x08 = v157.TileSystem_field_0x08; /*0x58dc51*/
  *(_DWORD *)v163.__pad_0 = &off_7ED858; /*0x58dc55*/
  v165 = 10; /*0x58dc5d*/
  v164 = 0; /*0x58dc64*/
  v65 = *(_DWORD *)(v157.TileSystem_field_0x08 + 56) - 1; /*0x58dc72*/
  v152 = (CellStruct *)v65; /*0x58dc73*/
  if ( v65 >= 0 ) /*0x58dc77*/
  {
    v66 = g_MissionQueueFrame.localVariables[163]; /*0x58dc7d*/
    do /*0x58df7f*/
    {
      v67 = *(_DWORD *)(*(_DWORD *)(TileSystem_field_0x08 + 44) + 4 * v65); /*0x58dc86*/
      LODWORD(v158) = v67; /*0x58dc89*/
      v68 = 80 * ((__int16)v67 + g_MapCellWidth * SHIWORD(v67)); /*0x58dca1*/
      if ( *(int *)(v68 + v66 + 56) < -1 ) /*0x58dcab*/
      {
        LODWORD(v162) = *(_DWORD *)(v68 + v66 + 56); /*0x58dcb5*/
        v69 = (RandomMap *)__2_YAPAXI_Z(0x50u); /*0x58dcb9*/
        if ( v69 ) /*0x58dcc3*/
          v70 = RandomMap::TerrainTileDataConstructor(v69, v67); /*0x58dccd*/
        else
          v70 = 0; /*0x58dcd1*/
        v71 = v70[12]; /*0x58dcd3*/
        v72 = v70[14]; /*0x58dcd6*/
        v73 = v70 + 10; /*0x58dcd9*/
        n = v70; /*0x58dcde*/
        if ( v72 < v71 /*0x58dcff*/
          || (*((_BYTE *)v70 + 53) || !v71)
          && (v74 = v70[15], v74 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v73 + 8))(v70 + 10, v71 + v74, 0) )
        {
          v75 = v70[14]; /*0x58dd06*/
          v76 = v70[11]; /*0x58dd09*/
          v70[14] = v75 + 1; /*0x58dd0f*/
          *(_DWORD *)(v76 + 4 * v75) = v67; /*0x58dd12*/
        }
        ++v70[3]; /*0x58dd19*/
        if ( v164 < v163.TileSystem_field_0x08 /*0x58dd59*/
          || (BYTE1(v163.TileSystem_field_0x0C) || !v163.TileSystem_field_0x08)
          && v165 > 0
          && (*(unsigned __int8 (__thiscall **)(TileSystem *, int, _DWORD))(*(_DWORD *)v163.__pad_0 + 8))(
               &v163,
               v165 + v163.TileSystem_field_0x08,
               0) )
        {
          v77 = v164++; /*0x58dd67*/
          *(_DWORD *)(v163.TileSystem_field_0x04 + 4 * v77) = v70; /*0x58dd78*/
        }
        *(_DWORD *)(v68 + g_MissionQueueFrame.localVariables[163] + 56) = v70[2]; /*0x58dd8b*/
        VectorClass::CellConstructor((VectorClass *)&v150, 0, 0); /*0x58dd8f*/
        *(_DWORD *)v150.__pad_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58dd98*/
        v150.m_10 = 0; /*0x58dda2*/
        v151 = 100000; /*0x58ddaa*/
        if ( v150.m_8 > 0 || (BYTE1(v150.m_C) || !v150.m_8) && VectorClass::ResizeEx(&v150, v150.m_8 + 100000, 0) ) /*0x58ddcc*/
        {
          v78 = v150.m_10++; /*0x58ddda*/
          *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v78) = v67; /*0x58dde5*/
        }
        m_10 = v150.m_10; /*0x58dde8*/
        for ( k = v150.m_10; v150.m_10; k = v150.m_10 ) /*0x58ddf0*/
        {
          v81 = *(_DWORD *)&v150.m_1[3]; /*0x58ddf6*/
          v82 = k - 1; /*0x58ddfa*/
          *(_DWORD *)v157.__pad_0 = *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v82); /*0x58de00*/
          if ( v82 < m_10 ) /*0x58de04*/
          {
            v150.m_10 = m_10 - 1; /*0x58de09*/
            if ( v82 < m_10 - 1 ) /*0x58de0d*/
            {
              while ( 1 ) /*0x58de19*/
              {
                *(_DWORD *)(v81 + 4 * v82) = *(_DWORD *)(v81 + 4 * v82 + 4); /*0x58de19*/
                if ( ++v82 >= v150.m_10 ) /*0x58de23*/
                  break; /*0x58de23*/
                v81 = *(_DWORD *)&v150.m_1[3]; /*0x58de11*/
              }
            }
          }
          v83 = 0; /*0x58de25*/
          for ( m = 0; m < 8; ++m ) /*0x58de27*/
          {
            v84 = *CellStruct::Add((CellStruct *)&v157, &v161, (_WORD *)(4 * (v83 & 7) + 9041544)); /*0x58de44*/
            LODWORD(v158) = v84; /*0x58de4c*/
            v85 = SHIWORD(v84) + (__int16)v84; /*0x58de58*/
            if ( v85 > g_MissionQueueFrame.localVariables[160] /*0x58de81*/
              && (__int16)v84 - SHIWORD(v84) < g_MissionQueueFrame.localVariables[160]
              && SHIWORD(v84) - (__int16)v84 < g_MissionQueueFrame.localVariables[160]
              && v85 <= g_MissionQueueFrame.localVariables[161] )
            {
              v86 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v84 + g_MapCellWidth * SHIWORD(v84)); /*0x58dea0*/
              if ( *(_DWORD *)(v86 + 56) == (_DWORD)v162 ) /*0x58dea5*/
              {
                v87 = v73[2]; /*0x58deab*/
                if ( v73[4] < v87 /*0x58ded0*/
                  || (*((_BYTE *)v73 + 13) || !v87)
                  && (v88 = v73[5], v88 > 0)
                  && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v73 + 8))(v73, v88 + v87, 0) )
                {
                  v89 = v73[4]; /*0x58ded7*/
                  v90 = v73[1]; /*0x58deda*/
                  v73[4] = v89 + 1; /*0x58dee0*/
                  *(_DWORD *)(v90 + 4 * v89) = v84; /*0x58dee3*/
                }
                v91 = n; /*0x58dee6*/
                ++*((_DWORD *)n + 3); /*0x58deee*/
                *(_DWORD *)(v86 + 56) = v91[2]; /*0x58def4*/
                if ( v150.m_10 < v150.m_8 /*0x58df22*/
                  || (BYTE1(v150.m_C) || !v150.m_8)
                  && v151 > 0
                  && (*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_H *, int, _DWORD))(*(_DWORD *)v150.__pad_0
                                                                                             + 8))(
                       &v150,
                       v151 + v150.m_8,
                       0) )
                {
                  v92 = v150.m_10++; /*0x58df2d*/
                  *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v92) = v84; /*0x58df38*/
                }
              }
            }
            v83 = m + 1; /*0x58df3f*/
          }
          m_10 = v150.m_10; /*0x58df4d*/
        }
        *(_DWORD *)v150.__pad_0 = &VectorClass<Cell>::`vftable'; /*0x58df5f*/
        Buffer::Cleanup((_VectorClass_VCell *)&v150); /*0x58df67*/
        v66 = g_MissionQueueFrame.localVariables[163]; /*0x58df6c*/
        TileSystem_field_0x08 = v157.TileSystem_field_0x08; /*0x58df72*/
        v65 = (int)v152; /*0x58df76*/
      }
      v152 = (CellStruct *)--v65; /*0x58df7b*/
    }
    while ( v65 >= 0 ); /*0x58df7f*/
  }
  v93 = (CellStruct *)(v164 - 1); /*0x58df8c*/
  v152 = (CellStruct *)(v164 - 1); /*0x58df91*/
  if ( v164 - 1 >= 0 ) /*0x58df95*/
  {
    while ( 1 ) /*0x58dfa8*/
    {
      v94 = *(_DWORD *)(v163.TileSystem_field_0x04 + 4 * (_DWORD)v93); /*0x58dfa8*/
      Block = (void *)v94; /*0x58dfab*/
      if ( *(_BYTE *)(v94 + 36) ) /*0x58dfaf*/
        goto LABEL_226; /*0x58dfb4*/
      v95 = TileSystem::AnalyzeTileConnectivity((TileSystem *)v94); /*0x58dfc7*/
      v96 = (void *)__2_YAPAXI_Z(g_MissionQueueFrame.localVariables[164]); /*0x58dfd5*/
      v97 = 0; /*0x58dfda*/
      for ( n = v96; v97 < g_MissionQueueFrame.localVariables[164]; ++v97 ) /*0x58dfe2*/
        *((_BYTE *)v96 + v97) = 0; /*0x58dfe4*/
      v98 = v95[4] - 1; /*0x58dff6*/
      for ( ii = v98; ii >= 0; --ii ) /*0x58dffb*/
      {
        v99 = 0; /*0x58e004*/
        LODWORD(v158) = *(_DWORD *)(v95[1] + 4 * v98); /*0x58e009*/
        do /*0x58e08d*/
        {
          *(_DWORD *)v157.__pad_0 = *CellStruct::Add((CellStruct *)&v158, &v161, (_WORD *)(4 * (v99 & 7) + 9041544)); /*0x58e030*/
          v100 = *(__int16 *)&v157.__pad_0[2] + *(__int16 *)v157.__pad_0; /*0x58e03c*/
          if ( v100 > g_MissionQueueFrame.localVariables[160] /*0x58e059*/
            && *(__int16 *)v157.__pad_0 - *(__int16 *)&v157.__pad_0[2] < g_MissionQueueFrame.localVariables[160]
            && *(__int16 *)&v157.__pad_0[2] - *(__int16 *)v157.__pad_0 < g_MissionQueueFrame.localVariables[160]
            && v100 <= g_MissionQueueFrame.localVariables[161] )
          {
            v101 = *(_DWORD *)(80 * (*(__int16 *)v157.__pad_0 + g_MapCellWidth * *(__int16 *)&v157.__pad_0[2]) /*0x58e070*/
                             + g_MissionQueueFrame.localVariables[163]
                             + 56);
            if ( v101 >= 0 && v101 != *((_DWORD *)Block + 2) ) /*0x58e07f*/
              *((_BYTE *)n + v101) = 1; /*0x58e085*/
          }
          ++v99; /*0x58e089*/
        }
        while ( v99 < 8 ); /*0x58e08d*/
        v98 = ii - 1; /*0x58e097*/
      }
      if ( v95 ) /*0x58e0a4*/
        (*(void (__thiscall **)(_DWORD *, int))*v95)(v95, 1); /*0x58e0ac*/
      v102 = -1; /*0x58e0b3*/
      v103 = 0; /*0x58e0b6*/
      v149 = 0; /*0x58e0b8*/
      v157.TileSystem_field_0x0C = -1; /*0x58e0c2*/
      v156 = -1; /*0x58e0c6*/
      v104 = -1; /*0x58e0ca*/
      v105 = -1; /*0x58e0cc*/
      if ( g_MissionQueueFrame.localVariables[164] > 0 ) /*0x58e0ce*/
      {
        do /*0x58e157*/
        {
          if ( *((_BYTE *)n + v103) ) /*0x58e0de*/
          {
            v106 = 0; /*0x58e0e4*/
            if ( g_MissionQueueFrame.briefing[342] <= 0 ) /*0x58e0e8*/
            {
LABEL_145:
              v108 = 0; /*0x58e0ff*/
            }
            else
            {
              v107 = g_MissionQueueFrame.briefing[339]; /*0x58e0ea*/
              while ( *(_DWORD *)(*(_DWORD *)v107 + 8) != v103 ) /*0x58e0f5*/
              {
                ++v106; /*0x58e0f7*/
                v107 += 4; /*0x58e0f8*/
                if ( v106 >= g_MissionQueueFrame.briefing[342] ) /*0x58e0fd*/
                  goto LABEL_145; /*0x58e0fd*/
              }
              v108 = *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v106); /*0x58e13b*/
            }
            if ( !*(_BYTE *)(v108 + 36) ) /*0x58e101*/
            {
              if ( *(_DWORD *)(v108 + 12) > v156 && !*(_BYTE *)(v108 + 20) ) /*0x58e113*/
              {
                v156 = *(_DWORD *)(v108 + 12); /*0x58e11a*/
                v149 = v108; /*0x58e121*/
                v157.TileSystem_field_0x0C = *(_DWORD *)(v108 + 16); /*0x58e125*/
              }
              if ( v104 == -1 ) /*0x58e12c*/
              {
                v104 = *(_DWORD *)(v108 + 16); /*0x58e12e*/
                v105 = v104; /*0x58e131*/
              }
              else
              {
                v109 = *(_DWORD *)(v108 + 16); /*0x58e140*/
                if ( v109 > v105 ) /*0x58e145*/
                  v105 = v109; /*0x58e147*/
                if ( v109 < v104 ) /*0x58e14b*/
                  v104 = v109; /*0x58e14d*/
              }
            }
          }
          ++v103; /*0x58e154*/
        }
        while ( v103 < g_MissionQueueFrame.localVariables[164] ); /*0x58e157*/
        v102 = v157.TileSystem_field_0x0C; /*0x58e159*/
      }
      VectorClass::Construct((VectorClass *)&v150, 0, 0); /*0x58e165*/
      *(_DWORD *)v150.__pad_0 = &DynamicVectorClass<int>::`vftable'; /*0x58e16c*/
      v110 = v105 - v104; /*0x58e174*/
      v151 = 10; /*0x58e176*/
      v150.m_10 = 0; /*0x58e17e*/
      if ( v105 != v104 ) /*0x58e186*/
      {
        if ( v110 != 4 ) /*0x58e18f*/
        {
          if ( v110 == 8 ) /*0x58e194*/
          {
            v111 = (v105 + v104) / 2; /*0x58e1a6*/
            if ( v150.m_8 > 0 || (BYTE1(v150.m_C) || !v150.m_8) && VectorClass::Resize(&v150, v150.m_8 + 10, 0) ) /*0x58e1c6*/
            {
              v112 = v150.m_10++; /*0x58e1dc*/
              *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v112) = v111; /*0x58e1e3*/
            }
          }
          goto LABEL_193; /*0x58e1e6*/
        }
        m_8 = v150.m_8; /*0x58e1eb*/
        if ( v150.m_8 <= 0 ) /*0x58e1f1*/
        {
          if ( BYTE1(v150.m_C) || !v150.m_8 ) /*0x58e1fd*/
          {
            if ( VectorClass::Resize(&v150, v150.m_8 + 10, 0) ) /*0x58e209*/
              goto LABEL_171; /*0x58e211*/
LABEL_172:
            m_8 = v150.m_8; /*0x58e225*/
          }
          if ( v150.m_10 >= m_8 /*0x58e25c*/
            && (!BYTE1(v150.m_C) && m_8
             || v151 <= 0
             || !(*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_H *, int, _DWORD))(*(_DWORD *)v150.__pad_0 + 8))(
                   &v150,
                   v151 + m_8,
                   0)) )
          {
            goto LABEL_193; /*0x58e261*/
          }
          goto LABEL_192; /*0x58e261*/
        }
LABEL_171:
        v114 = v150.m_10++; /*0x58e213*/
        *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v114) = v105; /*0x58e222*/
        goto LABEL_172; /*0x58e222*/
      }
      if ( v104 >= 4 ) /*0x58e26c*/
      {
        v115 = v150.m_8; /*0x58e26e*/
        v116 = v104 - 4; /*0x58e272*/
        if ( v150.m_8 > 0 ) /*0x58e277*/
          goto LABEL_184; /*0x58e277*/
        if ( !BYTE1(v150.m_C) && v150.m_8 ) /*0x58e283*/
          goto LABEL_186; /*0x58e283*/
        if ( VectorClass::Resize(&v150, v150.m_8 + 10, 0) ) /*0x58e28f*/
        {
LABEL_184:
          v117 = v150.m_10++; /*0x58e2a1*/
          *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v117) = v116; /*0x58e2a8*/
        }
      }
      v115 = v150.m_8; /*0x58e2ab*/
LABEL_186:
      if ( v105 > 7 ) /*0x58e2b2*/
        goto LABEL_193; /*0x58e2b2*/
      v104 = v105 + 4; /*0x58e2b8*/
      if ( v150.m_10 >= v115 /*0x58e2e0*/
        && (!BYTE1(v150.m_C) && v115
         || v151 <= 0
         || !(*(unsigned __int8 (__thiscall **)(_DynamicVectorClass_H *, int, _DWORD))(*(_DWORD *)v150.__pad_0 + 8))(
               &v150,
               v151 + v115,
               0)) )
      {
        goto LABEL_193; /*0x58e2e5*/
      }
LABEL_192:
      v118 = v150.m_10++; /*0x58e2e7*/
      *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v118) = v104; /*0x58e2f6*/
LABEL_193:
      if ( g_MissionQueueFrame.briefing[371] == 3 || g_MissionQueueFrame.briefing[371] == 4 ) /*0x58e306*/
      {
        v119 = v150.m_10; /*0x58e308*/
        v120 = v150.m_10 - 1; /*0x58e30c*/
        if ( v150.m_10 - 1 >= 0 ) /*0x58e311*/
        {
          v121 = *(_DWORD *)&v150.m_1[3]; /*0x58e313*/
          do /*0x58e341*/
          {
            if ( !*(_DWORD *)(v121 + 4 * v120) && v120 < v119 ) /*0x58e31f*/
            {
              --v119; /*0x58e321*/
              v122 = v120; /*0x58e322*/
              for ( v150.m_10 = v119; v122 < v150.m_10; ++v122 ) /*0x58e32a*/
              {
                *(_DWORD *)(v121 + 4 * v122) = *(_DWORD *)(v121 + 4 * v122 + 4); /*0x58e330*/
                v119 = v150.m_10; /*0x58e333*/
                v121 = *(_DWORD *)&v150.m_1[3]; /*0x58e337*/
              }
            }
            --v120; /*0x58e340*/
          }
          while ( v120 >= 0 ); /*0x58e341*/
        }
      }
      __3_YAXPAX_Z(n); /*0x58e348*/
      if ( *((int *)Block + 3) <= 100 ) /*0x58e358*/
      {
        if ( v149 ) /*0x58e410*/
        {
          v130 = Block; /*0x58e416*/
          v131 = *((_DWORD *)Block + 4); /*0x58e41f*/
          *((_DWORD *)Block + 4) = v102; /*0x58e422*/
          v132 = v102 - v131; /*0x58e425*/
          LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58e427*/
          for ( jj = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58e43a*/
                jj;
                jj = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
          {
            *(_DWORD *)v157.__pad_0 = *(_DWORD *)(jj + 36); /*0x58e443*/
            if ( TileSystem::LookupMapTile(&v157) == v130[2] ) /*0x58e44f*/
              *(_BYTE *)(jj + 283) += v132; /*0x58e451*/
          }
          for ( kk = v130[14] - 1; /*0x58e46b*/
                kk >= 0;
                *(_DWORD *)(80 * ((__int16)v137 + g_MapCellWidth * *(__int16 *)&v157.__pad_0[2])
                          + g_MissionQueueFrame.localVariables[163]
                          + 56) = *(_DWORD *)(v149 + 8) )
          {
            v135 = *(_DWORD *)(v149 + 48); /*0x58e477*/
            v136 = *(_DWORD *)(v149 + 56); /*0x58e47a*/
            v137 = *(_DWORD *)(v130[11] + 4 * kk); /*0x58e47d*/
            *(_DWORD *)v157.__pad_0 = v137; /*0x58e482*/
            if ( v136 < v135 /*0x58e4a3*/
              || (*(_BYTE *)(v149 + 53) || !v135)
              && (v138 = *(_DWORD *)(v149 + 60), v138 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v149 + 40) + 8))(
                   v149 + 40,
                   v138 + v135,
                   0) )
            {
              v139 = *(_DWORD *)(v149 + 56); /*0x58e4aa*/
              v140 = *(_DWORD *)(v149 + 44); /*0x58e4ad*/
              *(_DWORD *)(v149 + 56) = v139 + 1; /*0x58e4b3*/
              *(_DWORD *)(v140 + 4 * v139) = v137; /*0x58e4b6*/
            }
            ++*(_DWORD *)(v149 + 12); /*0x58e4c4*/
            --kk; /*0x58e4e4*/
          }
          *((_BYTE *)v130 + 36) = 1; /*0x58e4eb*/
        }
      }
      else
      {
        v123 = *((_DWORD *)Block + 4); /*0x58e35e*/
        v124 = v150.m_10 - 1; /*0x58e367*/
        *(_QWORD *)&v153 = (unsigned int)v150.m_10; /*0x58e371*/
        __asm /*0x58e375*/
        {
          fild [esp+0B0h+var_80]
          fstp qword ptr [esp+0B0h+var_68.__pad_0]
        }
        do /*0x58e3a4*/
        {
          v162 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x58e387*/
          __asm /*0x58e38f*/
          {
            fild [esp+0B0h+var_3C]
            fmul qword ptr [esp+0B0h+var_68.__pad_0]
            fmul ds:dbl_7ED898
          }
          LOWORD(v125) = Math::RoundToInt(v1); /*0x58e39d*/
        }
        while ( v125 > v124 ); /*0x58e3a4*/
        v126 = *(_DWORD *)(*(_DWORD *)&v150.m_1[3] + 4 * v125); /*0x58e3ae*/
        *((_DWORD *)Block + 4) = v126; /*0x58e3b1*/
        v127 = v126 - v123; /*0x58e3bb*/
        LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58e3bd*/
        v128 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58e3cc*/
        if ( v128 ) /*0x58e3d0*/
        {
          v129 = Block; /*0x58e3d6*/
          do /*0x58e403*/
          {
            *(_DWORD *)v157.__pad_0 = *(_DWORD *)(v128 + 36); /*0x58e3e1*/
            if ( TileSystem::LookupMapTile(&v157) == v129[2] ) /*0x58e3ed*/
              *(_BYTE *)(v128 + 283) += v127; /*0x58e3ef*/
            v128 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58e3ff*/
          }
          while ( v128 ); /*0x58e403*/
        }
      }
      *(_DWORD *)v150.__pad_0 = &VectorClass<int>::`vftable'; /*0x58e4f3*/
      VectorClass::Destroy((int)&v150); /*0x58e4fb*/
LABEL_226:
      v152 = (CellStruct *)((char *)v152 - 1); /*0x58e500*/
      if ( (int)v152 < 0 ) /*0x58e509*/
      {
        TileSystem_field_0x08 = v157.TileSystem_field_0x08; /*0x58e50f*/
        break; /*0x58e50f*/
      }
      v93 = v152; /*0x58df9d*/
    }
  }
  v141 = g_MissionQueueFrame.briefing[342] - 1; /*0x58e513*/
  if ( g_MissionQueueFrame.briefing[342] - 1 >= 0 ) /*0x58e51f*/
  {
    v142 = g_MissionQueueFrame.briefing[339]; /*0x58e521*/
    do /*0x58e552*/
    {
      v143 = *(TileNode **)(v142 + 4 * v141); /*0x58e527*/
      if ( v143 != (TileNode *)TileSystem_field_0x08 ) /*0x58e52c*/
      {
        if ( v143[9].__tail_0[0] ) /*0x58e52e*/
        {
          v144 = *(void **)(v142 + 4 * v141); /*0x58e535*/
          if ( v143 ) /*0x58e539*/
          {
            TileNode::Cleanup(v143); /*0x58e53d*/
            __3_YAXPAX_Z(v144); /*0x58e543*/
            v142 = g_MissionQueueFrame.briefing[339]; /*0x58e548*/
          }
        }
      }
      --v141; /*0x58e551*/
    }
    while ( v141 >= 0 ); /*0x58e552*/
  }
  TileSystem_field_0x04 = (void *)v163.TileSystem_field_0x04; /*0x58e557*/
  v56 = v163.TileSystem_field_0x04 == 0; /*0x58e55f*/
  ++*(_DWORD *)(TileSystem_field_0x08 + 28); /*0x58e561*/
  *(_DWORD *)v163.__pad_0 = &VectorClass<MapRegionClass *>::`vftable'; /*0x58e564*/
  if ( !v56 && BYTE1(v163.TileSystem_field_0x0C) ) /*0x58e577*/
  {
    __3_YAXPAX_Z(TileSystem_field_0x04); /*0x58e57a*/
    v163.TileSystem_field_0x04 = 0; /*0x58e582*/
  }
  BYTE1(v163.TileSystem_field_0x0C) = 0; /*0x58e590*/
  v163.TileSystem_field_0x08 = 0; /*0x58e59a*/
  v167.vtable0 = &VectorClass<Cell>::`vftable'; /*0x58e5a1*/
  if ( v167.Items ) /*0x58e5ac*/
  {
    if ( v167.IsAllocated ) /*0x58e5b7*/
      __3_YAXPAX_Z(v167.Items); /*0x58e5ba*/
  }
  return 1; /*0x58d641*/
}


// ==== 0x0058E5D0  TileSystem::AnalyzeTileConnectivity  this=TileSystem  sig=csp ====
_DWORD *__thiscall TileSystem::AnalyzeTileConnectivity(TileSystem *this)
{
  TileSystem *v1; // ebx
  VectorClass *v2; // eax
  VectorClass *v3; // esi
  VectorClass *v4; // ebp
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
  int Capacity; // ecx
  int Items; // eax
  void *vtable0; // eax
  _DWORD *v19; // edx
  VectorClass *v21; // [esp+Ch] [ebp-10h]
  int v22; // [esp+10h] [ebp-Ch]

  v1 = this; /*0x58e5d6*/
  v2 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x58e5de*/
  v3 = v2; /*0x58e5e3*/
  v4 = 0; /*0x58e5e5*/
  if ( v2 ) /*0x58e5ec*/
  {
    VectorClass::CellConstructor(v2, 0, 0); /*0x58e5f2*/
    v3[1].vtable0 = 0; /*0x58e5f7*/
    v3->vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58e5fa*/
    v3[1].Items = (void *)10; /*0x58e600*/
    v4 = v3; /*0x58e607*/
  }
  v21 = v4; /*0x58e60c*/
  v5 = v1->TileSystem_field_0x0C / 2; /*0x58e613*/
  if ( v5 < 10 ) /*0x58e618*/
    v5 = 10; /*0x58e61a*/
  v4[1].Items = (void *)v5; /*0x58e61f*/
  v6 = v1[3].TileSystem_field_0x08 - 1; /*0x58e625*/
  v22 = v6; /*0x58e626*/
  if ( v6 < 0 ) /*0x58e62a*/
    return &v4->vtable0; /*0x58e728*/
  v7 = g_MissionQueueFrame.localVariables[160]; /*0x58e631*/
  while ( 2 )
  {
    v8 = 0; /*0x58e641*/
    v9 = *(_DWORD *)(v1[2].TileSystem_field_0x0C + 4 * v6); /*0x58e646*/
    while ( 1 ) /*0x58e64f*/
    {
      v10 = v8 & 7; /*0x58e64f*/
      v11 = HIWORD(v9) + HIWORD(g_DDrawSurfaceManager.scenario[v10 + 82]); /*0x58e668*/
      v12 = (__int16)(v9 + LOWORD(g_DDrawSurfaceManager.scenario[v10 + 82])); /*0x58e66d*/
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
      || v14 > g_MissionQueueFrame.localVariables[161]
      || (g_MissionQueueFrame.localVariables[163]
        ? (v15 = *(_DWORD *)(80 * (v12 + g_MapCellWidth * v13) + g_MissionQueueFrame.localVariables[163] + 56))
        : (v15 = -1),
          v15 == this->TileSystem_field_0x08) )
    {
      v4 = v21; /*0x58e6bd*/
      goto LABEL_18; /*0x58e6bd*/
    }
    v4 = v21; /*0x58e6c9*/
    Capacity = v21->Capacity; /*0x58e6cd*/
    if ( (int)v21[1].vtable0 < Capacity ) /*0x58e6d5*/
      goto LABEL_25; /*0x58e6d5*/
    if ( v21->IsAllocated || !Capacity ) /*0x58e6e0*/
    {
      Items = (int)v21[1].Items; /*0x58e6e2*/
      if ( Items > 0 ) /*0x58e6e7*/
      {
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v21->vtable0 + 2))( /*0x58e6f3*/
               v21,
               Capacity + Items,
               0) )
        {
LABEL_25:
          vtable0 = v21[1].vtable0; /*0x58e6fa*/
          v19 = v21->Items; /*0x58e6fd*/
          v21[1].vtable0 = (char *)vtable0 + 1; /*0x58e703*/
          v19[(_DWORD)vtable0] = v9; /*0x58e706*/
        }
        v7 = g_MissionQueueFrame.localVariables[160]; /*0x58e709*/
      }
    }
LABEL_27:
    if ( --v22 >= 0 ) /*0x58e718*/
    {
      v6 = v22; /*0x58e639*/
      v1 = this; /*0x58e63d*/
      continue; /*0x58e63d*/
    }
    return &v4->vtable0; /*0x58e721*/
  }
}



// ==== 0x0058E740  RandomMap::CollectTerrainCells  this=RandomMap  sig=csp ====
char __thiscall RandomMap::CollectTerrainCells(RandomMap *this, int a2)
{
  VectorClass *v2; // eax
  VectorClass *v3; // esi
  VectorClass *v4; // ebp
  _DWORD *v5; // ecx
  int v6; // esi
  int v7; // ebx
  _WORD *v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // edx
  char *v12; // eax
  int v13; // esi
  void *v14; // edi
  Cell *v15; // eax
  Cell *v16; // eax
  int Capacity; // ecx
  int v18; // eax
  void *vtable0; // eax
  _DWORD *Items; // edx
  RandomMap *v21; // edi
  int v22; // edx
  __int16 v24[2]; // [esp+10h] [ebp-18h] BYREF
  _DWORD *p_vtable0; // [esp+14h] [ebp-14h]
  RandomMap *v26; // [esp+18h] [ebp-10h]
  int v27; // [esp+1Ch] [ebp-Ch]
  int v28; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  v26 = this; /*0x58e747*/
  p_vtable0 = RandomMap::TerrainAlloc(this); /*0x58e750*/
  for ( i = 0; i < a2; ++i ) /*0x58e760*/
  {
    v2 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x58e768*/
    v3 = v2; /*0x58e76d*/
    if ( v2 ) /*0x58e774*/
    {
      VectorClass::CellConstructor(v2, 0, 0); /*0x58e77a*/
      v3->vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58e77f*/
      v3[1].Items = (void *)10; /*0x58e785*/
      v3[1].vtable0 = 0; /*0x58e78c*/
      v4 = v3; /*0x58e78f*/
    }
    else
    {
      v4 = 0; /*0x58e793*/
    }
    v5 = p_vtable0; /*0x58e795*/
    v27 = 0; /*0x58e799*/
    v4[1].Items = (void *)(3 * p_vtable0[4]); /*0x58e7a3*/
    if ( (int)v5[4] > 0 ) /*0x58e7ab*/
    {
      v6 = g_MissionQueueFrame.localVariables[160]; /*0x58e7b1*/
      while ( 2 ) /*0x58e7b7*/
      {
        v7 = 0; /*0x58e7b7*/
        while ( 1 ) /*0x58e7d2*/
        {
          v8 = (_WORD *)(v5[1] + 4 * v27); /*0x58e7d2*/
          v9 = v8[1] + HIWORD(g_DDrawSurfaceManager.scenario[(v7 & 7) + 82]); /*0x58e7e5*/
          LOWORD(v28) = LOWORD(g_DDrawSurfaceManager.scenario[(v7 & 7) + 82]) + *v8; /*0x58e7e9*/
          HIWORD(v28) = v9; /*0x58e7ee*/
          *(_DWORD *)v24 = v28; /*0x58e7f7*/
          v10 = v9; /*0x58e7fe*/
          v11 = v9 + (__int16)v28; /*0x58e801*/
          if ( v11 > v6 /*0x58e828*/
            && (__int16)v28 - v10 < v6
            && v10 - (__int16)v28 < v6
            && v11 <= g_MissionQueueFrame.localVariables[161] )
          {
            v12 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x58e838*/
            if ( (void *)v12[283] == v26->RandomMap_field_0x10 ) /*0x58e84b*/
            {
              v13 = g_MissionQueueFrame.localVariables[163] + 80 * (v24[0] + g_MapCellWidth * v24[1]); /*0x58e870*/
              v14 = *(void **)(v13 + 56); /*0x58e872*/
              if ( v14 == (void *)-1 /*0x58e8a9*/
                && ((v15 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24),
                     (unsigned __int8)Cell::IsEmpty(v15))
                 || (v16 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24),
                     (unsigned __int8)Cell::IsShore(v16))) )
              {
                Capacity = v4->Capacity; /*0x58e8b2*/
                if ( (int)v4[1].vtable0 < Capacity /*0x58e8d8*/
                  || (v4->IsAllocated || !Capacity)
                  && (v18 = (int)v4[1].Items, v18 > 0)
                  && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v4->vtable0 + 2))(
                       v4,
                       Capacity + v18,
                       0) )
                {
                  vtable0 = v4[1].vtable0; /*0x58e8df*/
                  Items = v4->Items; /*0x58e8e2*/
                  v4[1].vtable0 = (char *)vtable0 + 1; /*0x58e8e8*/
                  Items[(_DWORD)vtable0] = *(_DWORD *)v24; /*0x58e8ef*/
                }
                v21 = v26; /*0x58e8f2*/
                *(_DWORD *)(v13 + 56) = v26->RandomMap_field_0x8; /*0x58e903*/
                *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24) + 283) = v21->RandomMap_field_0x10; /*0x58e90e*/
              }
              else if ( v14 != v26->RandomMap_field_0x8 ) /*0x58e91d*/
              {
                if ( p_vtable0 ) /*0x58e98c*/
                  (*(void (__thiscall **)(_DWORD *, int))*p_vtable0)(p_vtable0, 1); /*0x58e992*/
                if ( v4 ) /*0x58e996*/
                  (*(void (__thiscall **)(VectorClass *, int))v4->vtable0)(v4, 1); /*0x58e99f*/
                return 0; /*0x58e9a4*/
              }
            }
            v6 = g_MissionQueueFrame.localVariables[160]; /*0x58e91f*/
          }
          if ( ++v7 >= 8 ) /*0x58e929*/
            break; /*0x58e929*/
          v5 = p_vtable0; /*0x58e7bb*/
        }
        v5 = p_vtable0; /*0x58e92f*/
        v22 = p_vtable0[4]; /*0x58e938*/
        if ( ++v27 < v22 ) /*0x58e941*/
          continue; /*0x58e941*/
        break;
      }
    }
    if ( v5 ) /*0x58e94b*/
      (*(void (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x58e951*/
    p_vtable0 = &v4->vtable0; /*0x58e95c*/
  }
  if ( p_vtable0 ) /*0x58e972*/
    (*(void (__thiscall **)(_DWORD *, int))*p_vtable0)(p_vtable0, 1); /*0x58e978*/
  return 1; /*0x58e97a*/
}



// ==== 0x0058E9B0  RandomMap::PlaceRandomMapTerrain  this=RandomMap  sig=csp ====
char __thiscall RandomMap::PlaceRandomMapTerrain(RandomMap *this)
{
  _DWORD *v1; // esi
  int v2; // ecx
  int v3; // ebx
  int Capacity; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // ecx
  int i; // eax
  int v9; // eax
  int v10; // ebx
  int k; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v17; // [esp+14h] [ebp-24h]
  VectorClass v19; // [esp+20h] [ebp-18h] BYREF
  int j; // [esp+30h] [ebp-8h]
  int v21; // [esp+34h] [ebp-4h]

  v1 = RandomMap::TerrainAlloc(this); /*0x58e9c7*/
  VectorClass::CellConstructor(&v19, 0, 0); /*0x58e9c9*/
  v2 = 50000; /*0x58e9ce*/
  v19.vtable0 = &DynamicVectorClass<Cell>::`vftable'; /*0x58e9d3*/
  j = 0; /*0x58e9db*/
  v21 = 50000; /*0x58e9e3*/
  v3 = 0; /*0x58e9ea*/
  if ( (int)v1[4] > 0 ) /*0x58e9ee*/
  {
    Capacity = v19.Capacity; /*0x58e9f0*/
    while ( 1 ) /*0x58e9fd*/
    {
      v5 = (_DWORD *)(v1[1] + 4 * v3); /*0x58e9fd*/
      if ( j < Capacity ) /*0x58ea06*/
        goto LABEL_9; /*0x58ea06*/
      if ( (v19.IsAllocated || !Capacity) && v2 > 0 ) /*0x58ea16*/
        break; /*0x58ea16*/
LABEL_11:
      if ( ++v3 >= v1[4] ) /*0x58ea4a*/
        goto LABEL_12; /*0x58ea4a*/
      v2 = v21; /*0x58e9f6*/
    }
    if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v19.vtable0 + 2))(&v19, v2 + Capacity, 0) ) /*0x58ea25*/
    {
LABEL_9:
      v6 = j++; /*0x58ea2c*/
      *((_DWORD *)v19.Items + v6) = *v5; /*0x58ea3d*/
    }
    Capacity = v19.Capacity; /*0x58ea40*/
    goto LABEL_11; /*0x58ea40*/
  }
LABEL_12:
  if ( v1 ) /*0x58ea4e*/
    (*(void (__thiscall **)(_DWORD *, int))*v1)(v1, 1); /*0x58ea56*/
  v7 = j; /*0x58ea58*/
  for ( i = j; j > 0; i = j ) /*0x58ea60*/
  {
    v9 = i - 1; /*0x58ea6b*/
    v10 = *((_DWORD *)v19.Items + v9); /*0x58ea6e*/
    if ( v9 < v7 ) /*0x58ea75*/
    {
      for ( j = v7 - 1; v9 < j; *((_DWORD *)v19.Items + v9 - 1) = *((_DWORD *)v19.Items + v9) ) /*0x58ea7e*/
        ++v9; /*0x58ea84*/
    }
    for ( k = 0; k < 8; ++k ) /*0x58ea99*/
    {
      v12 = k & 7; /*0x58eaa3*/
      LOWORD(v17) = v10 + LOWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x58eabf*/
      HIWORD(v17) = HIWORD(v10) + HIWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x58eac4*/
      v13 = SHIWORD(v17) + (__int16)v17; /*0x58eacf*/
      if ( v13 > g_MissionQueueFrame.localVariables[160] /*0x58eafc*/
        && (__int16)v17 - SHIWORD(v17) < g_MissionQueueFrame.localVariables[160]
        && SHIWORD(v17) - (__int16)v17 < g_MissionQueueFrame.localVariables[160]
        && v13 <= g_MissionQueueFrame.localVariables[161] )
      {
        v14 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v17 + g_MapCellWidth * SHIWORD(v17)); /*0x58eb13*/
        if ( *(_DWORD *)(v14 + 56) == -1 ) /*0x58eb19*/
        {
          if ( *(_BYTE *)(v14 + 75) ) /*0x58eb1b*/
          {
            *(_DWORD *)(v14 + 56) = this->RandomMap_field_0x8; /*0x58eb29*/
            if ( j < v19.Capacity /*0x58eb57*/
              || (v19.IsAllocated || !v19.Capacity)
              && v21 > 0
              && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v19.vtable0 + 2))(
                   &v19,
                   v21 + v19.Capacity,
                   0) )
            {
              v15 = j++; /*0x58eb66*/
              *((_DWORD *)v19.Items + v15) = v17; /*0x58eb71*/
            }
          }
        }
      }
    }
    v7 = j; /*0x58eb7e*/
  }
  v19.vtable0 = &VectorClass<Cell>::`vftable'; /*0x58eb93*/
  if ( v19.Items && v19.IsAllocated ) /*0x58eba6*/
    __3_YAXPAX_Z(v19.Items); /*0x58eba9*/
  return 1; /*0x58eb91*/
}



// ==== 0x0058EBC0  ObjectClass::BuildRandomMapTiles  this=ObjectClass  sig=csp ====
int BuildRandomMapTiles(ObjectClass *this)
{
  int i; // esi
  _DWORD *v2; // ecx
  int v3; // eax
  int v4; // esi
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // ebx
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  int *v16; // eax
  int v17; // ecx
  int v18; // esi
  int v19; // ecx
  int v20; // esi
  bool v21; // zf
  double v22; // st7
  int v23; // eax
  int v24; // ebx
  int result; // eax
  int j; // edi
  int v27; // esi
  int v28; // eax
  void *v29; // eax
  int v30; // [esp+10h] [ebp-Ch]
  int v31; // [esp+14h] [ebp-8h]
  int v32; // [esp+18h] [ebp-4h] BYREF

  for ( i = 0; i < g_MissionQueueFrame.briefing[342]; v2[3] = 0 ) /*0x58ebd0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * i) + 40) + 12))(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * i) + 40); /*0x58ebe9*/
    *(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * i) + 12) = 0; /*0x58ebf4*/
    v2 = (_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * i++) + 64); /*0x58ec07*/
    *v2 = 9999; /*0x58ec0c*/
    v2[1] = 9999; /*0x58ec0e*/
    v2[2] = 0; /*0x58ec11*/
  }
  v3 = g_MapCellWidth * g_MapCellWidth - 1; /*0x58ec28*/
  if ( v3 >= 0 ) /*0x58ec29*/
  {
    v4 = g_MissionQueueFrame.localVariables[160]; /*0x58ec2f*/
    v5 = 80 * v3; /*0x58ec38*/
    v30 = 80 * v3; /*0x58ec3c*/
    v32 = g_MapCellWidth * g_MapCellWidth; /*0x58ec40*/
    while ( 1 ) /*0x58ec49*/
    {
      v6 = *(_DWORD *)(v5 + g_MissionQueueFrame.localVariables[163]); /*0x58ec49*/
      v31 = v6; /*0x58ec4c*/
      v7 = SHIWORD(v6); /*0x58ec50*/
      v8 = (__int16)v6; /*0x58ec55*/
      v9 = SHIWORD(v6) + (__int16)v6; /*0x58ec58*/
      if ( v9 > v4 /*0x58ec81*/
        && (__int16)v6 - SHIWORD(v6) < v4
        && SHIWORD(v6) - (__int16)v6 < v4
        && v9 <= g_MissionQueueFrame.localVariables[161] )
      {
        v10 = *(_DWORD *)(v5 + g_MissionQueueFrame.localVariables[163] + 56); /*0x58ec8c*/
        if ( v10 >= 0 && v10 < g_MissionQueueFrame.briefing[342] ) /*0x58ec9e*/
          break; /*0x58ec9e*/
      }
LABEL_30:
      v5 -= 80; /*0x58ed73*/
      v21 = v32 == 1; /*0x58ed7a*/
      v30 = v5; /*0x58ed7b*/
      --v32; /*0x58ed7f*/
      if ( v21 ) /*0x58ed83*/
        goto LABEL_31; /*0x58ed83*/
    }
    ++*(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v10) + 12); /*0x58ecb0*/
    v11 = *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v10); /*0x58ecb8*/
    v12 = *(_DWORD *)(v11 + 48); /*0x58ecbb*/
    v13 = v11 + 40; /*0x58ecbe*/
    if ( *(_DWORD *)(v13 + 16) >= v12 ) /*0x58ecc4*/
    {
      if ( !*(_BYTE *)(v13 + 13) && v12 ) /*0x58eccf*/
        goto LABEL_19; /*0x58eccf*/
      v14 = *(_DWORD *)(v13 + 20); /*0x58ecd1*/
      if ( v14 <= 0 ) /*0x58ecd6*/
        goto LABEL_19; /*0x58ecd6*/
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v13 + 8))(v13, v12 + v14, 0) ) /*0x58ece6*/
      {
LABEL_18:
        v5 = v30; /*0x58ecfb*/
LABEL_19:
        v16 = (int *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v10) + 64); /*0x58ecff*/
        if ( !*(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v10) + 72) ) /*0x58ed0a*/
        {
          *v16 = v8; /*0x58ed16*/
          v16[1] = v7; /*0x58ed18*/
          v16[2] = 1; /*0x58ed1b*/
          v16[3] = 1; /*0x58ed1e*/
        }
        v17 = *v16; /*0x58ed21*/
        if ( v8 >= v16[2] + *v16 ) /*0x58ed2c*/
          v16[2] = v8 - v17 + 1; /*0x58ed33*/
        if ( v8 < v17 ) /*0x58ed38*/
        {
          v18 = v16[2]; /*0x58ed3a*/
          *v16 = v8; /*0x58ed41*/
          v16[2] = v17 - v8 + v18; /*0x58ed43*/
        }
        v19 = v16[1]; /*0x58ed46*/
        if ( v7 >= v16[3] + v19 ) /*0x58ed52*/
          v16[3] = v7 - v19 + 1; /*0x58ed59*/
        if ( v7 < v19 ) /*0x58ed5e*/
        {
          v20 = v16[3]; /*0x58ed60*/
          v16[1] = v7; /*0x58ed67*/
          v16[3] = v19 - v7 + v20; /*0x58ed6a*/
        }
        v4 = g_MissionQueueFrame.localVariables[160]; /*0x58ed6d*/
        goto LABEL_30; /*0x58ed6d*/
      }
      v6 = v31; /*0x58ece8*/
    }
    v15 = *(_DWORD *)(v13 + 16); /*0x58ecec*/
    *(_DWORD *)(v13 + 16) = v15 + 1; /*0x58ecf2*/
    *(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * v15) = v6; /*0x58ecf8*/
    goto LABEL_18; /*0x58ecf8*/
  }
LABEL_31:
  v22 = ((double)g_MissionQueueFrame.briefing[384] * 0.005 + 0.05) /*0x58ed89*/
      * (double)g_MissionQueueFrame.briefing[453]
      * (double)g_MissionQueueFrame.briefing[452];
  LOWORD(v23) = Math::RoundToInt(v22 + v22); /*0x58eda9*/
  v24 = v23; /*0x58edae*/
LABEL_32:
  result = g_MissionQueueFrame.briefing[342]; /*0x58edb5*/
  for ( j = 0; j < g_MissionQueueFrame.briefing[342]; ++j ) /*0x58edbe*/
  {
    v27 = *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * j); /*0x58edca*/
    if ( !*(_BYTE *)(v27 + 26) && !*(_BYTE *)(v27 + 20) ) /*0x58edd4*/
    {
      if ( *(_DWORD *)(v27 + 12) <= v24 ) /*0x58edde*/
      {
        *(_BYTE *)(v27 + 26) = 1; /*0x58eded*/
      }
      else if ( TileSystem::BuildNodes(*(TileSystem **)(g_MissionQueueFrame.briefing[339] + 4 * j)) ) /*0x58ede2*/
      {
        if ( v27 ) /*0x58ee03*/
        {
          if ( *(_DWORD *)v27 ) /*0x58ee05*/
          {
            (***(void (__thiscall ****)(_DWORD, int))v27)(*(_DWORD *)v27, 1); /*0x58ee11*/
            *(_DWORD *)v27 = 0; /*0x58ee13*/
          }
          v32 = v27; /*0x58ee25*/
          v28 = (*(int (__thiscall **)(int *, int *))(g_MissionQueueFrame.briefing[338] + 16))( /*0x58ee29*/
                  &g_MissionQueueFrame.briefing[338],
                  &v32);
          if ( v28 != -1 && v28 < g_MissionQueueFrame.briefing[342] ) /*0x58ee39*/
          {
            --g_MissionQueueFrame.briefing[342]; /*0x58ee3e*/
            for ( ; /*0x58ee44*/
                  v28 < g_MissionQueueFrame.briefing[342];
                  *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v28 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                           + 4 * v28) )
            {
              ++v28; /*0x58ee4c*/
            }
          }
          v29 = *(void **)(v27 + 44); /*0x58ee5e*/
          *(_DWORD *)(v27 + 40) = &VectorClass<Cell>::`vftable'; /*0x58ee61*/
          if ( v29 ) /*0x58ee66*/
          {
            if ( *(_BYTE *)(v27 + 53) ) /*0x58ee68*/
            {
              __3_YAXPAX_Z(v29); /*0x58ee70*/
              *(_DWORD *)(v27 + 44) = 0; /*0x58ee78*/
            }
          }
          *(_BYTE *)(v27 + 53) = 0; /*0x58ee7c*/
          *(_DWORD *)(v27 + 48) = 0; /*0x58ee80*/
          __3_YAXPAX_Z((void *)v27); /*0x58ee83*/
        }
        goto LABEL_32; /*0x58ee8b*/
      }
    }
    result = g_MissionQueueFrame.briefing[342]; /*0x58edf1*/
  }
  return result; /*0x58ee90*/
}



// ==== 0x0058EF10  ObjectClass::ResetMapState  this=ObjectClass  sig=csp ====
char ResetMapState(ObjectClass *this)
{
  int i; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  void *v6; // esi
  int v7; // esi
  int v8; // edi
  RandomMap *v9; // eax
  _DWORD *Terrain; // eax
  int v11; // esi
  int v12; // esi
  int v13; // esi
  void (__thiscall ***v14)(_DWORD, int); // ecx
  char v16; // [esp+Fh] [ebp-5h]
  _WORD v17[2]; // [esp+10h] [ebp-4h] BYREF

  v16 = 1; /*0x58ef1e*/
  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x58ef23*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58ef2d*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x58ef41*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !v16 ) /*0x58ef47*/
      break; /*0x58ef47*/
    v16 = Cliff::ProcessTransitions(i, -1); /*0x58ef5a*/
  }
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x58ef6d*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x58ef75*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58ef7a*/
    {
      v3 = 0; /*0x58ef7c*/
      do /*0x58ef96*/
      {
        v3 += 80; /*0x58ef84*/
        --v2; /*0x58ef87*/
        *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] - 24) = -1; /*0x58ef88*/
        *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x58ef92*/
      }
      while ( v2 ); /*0x58ef96*/
    }
  }
  v4 = g_MissionQueueFrame.briefing[342]; /*0x58ef98*/
  v5 = g_MissionQueueFrame.briefing[342] - 1; /*0x58ef9f*/
  if ( g_MissionQueueFrame.briefing[342] - 1 >= 0 ) /*0x58efa4*/
  {
    do /*0x58efc3*/
    {
      v6 = *(void **)(g_MissionQueueFrame.briefing[339] + 4 * v5); /*0x58efab*/
      if ( v6 ) /*0x58efb0*/
      {
        TileNode::Cleanup(*(TileNode **)(g_MissionQueueFrame.briefing[339] + 4 * v5)); /*0x58efb4*/
        __3_YAXPAX_Z(v6); /*0x58efba*/
      }
      --v5; /*0x58efc2*/
    }
    while ( v5 >= 0 ); /*0x58efc3*/
    v4 = g_MissionQueueFrame.briefing[342]; /*0x58efc5*/
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x58efd0*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58efdb*/
  {
    v7 = 0; /*0x58efdd*/
    v8 = g_MapCellWidth * g_MapCellWidth; /*0x58efdf*/
    do /*0x58f02b*/
    {
      if ( *(_DWORD *)(v7 + g_MissionQueueFrame.localVariables[163] + 56) == -1 ) /*0x58efec*/
      {
        v17[0] = 0; /*0x58eff2*/
        v17[1] = 0; /*0x58eff8*/
        if ( (unsigned __int8)Coord::Compare2D((Coord *)(v7 + g_MissionQueueFrame.localVariables[163]), v17) ) /*0x58effd*/
        {
          v9 = (RandomMap *)CellCoord::To_CellObj( /*0x58f014*/
                              (CellCoord *)&stru_87F5F0.__pad_58[416],
                              (__int16 *)(v7 + g_MissionQueueFrame.localVariables[163]));
          Terrain = RandomMap::GenerateTerrain(v9); /*0x58f01b*/
          if ( Terrain ) /*0x58f022*/
            *((_BYTE *)Terrain + 26) = 0; /*0x58f024*/
        }
      }
      v7 += 80; /*0x58f027*/
      --v8; /*0x58f02a*/
    }
    while ( v8 ); /*0x58f02b*/
    v4 = g_MissionQueueFrame.briefing[342]; /*0x58f02d*/
  }
  if ( v16 ) /*0x58f03a*/
  {
    v11 = 0; /*0x58f03c*/
    if ( v4 > 0 ) /*0x58f040*/
    {
      do /*0x58f059*/
      {
        RandomMap::CollectBorderCells(*(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * v11)); /*0x58f04b*/
        v4 = g_MissionQueueFrame.briefing[342]; /*0x58f050*/
        ++v11; /*0x58f056*/
      }
      while ( v11 < g_MissionQueueFrame.briefing[342] ); /*0x58f059*/
    }
    v12 = 0; /*0x58f05b*/
    if ( v4 > 0 ) /*0x58f05f*/
    {
      do /*0x58f077*/
      {
        RandomMap::AllocateArea(*(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * v12)); /*0x58f069*/
        v4 = g_MissionQueueFrame.briefing[342]; /*0x58f06e*/
        ++v12; /*0x58f074*/
      }
      while ( v12 < g_MissionQueueFrame.briefing[342] ); /*0x58f077*/
    }
    v13 = 0; /*0x58f079*/
    if ( v4 > 0 ) /*0x58f07d*/
    {
      do /*0x58f0aa*/
      {
        v14 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v13) + 4); /*0x58f088*/
        if ( v14 ) /*0x58f08d*/
          (**v14)(v14, 1); /*0x58f093*/
        ++v13; /*0x58f09b*/
        *(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v13 - 4) + 4) = 0; /*0x58f0a0*/
      }
      while ( v13 < g_MissionQueueFrame.briefing[342] ); /*0x58f0aa*/
    }
  }
  return 1; /*0x58f0ac*/
}



// ==== 0x0058F0C0  RandomMap::CollectBorderCells  this=RandomMap  sig=csp ====
void __thiscall RandomMap::CollectBorderCells(RandomMap *this)
{
  RandomMap *v1; // ebx
  VectorClass *v2; // eax
  VectorClass *v3; // esi
  int v4; // ecx
  int v5; // eax
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
  int i; // edi
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  void *RandomMap_field_0x8; // esi
  int v26; // edx
  _BYTE *Block; // [esp+10h] [ebp-14h]
  int v28; // [esp+14h] [ebp-10h]
  _DWORD *v29; // [esp+1Ch] [ebp-8h]

  v1 = this; /*0x58f0c7*/
  v2 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x58f0cf*/
  v3 = v2; /*0x58f0d4*/
  if ( v2 ) /*0x58f0db*/
  {
    VectorClass::Construct(v2, 0, 0); /*0x58f0e3*/
    v3->vtable0 = &DynamicVectorClass<int>::`vftable'; /*0x58f0e8*/
    v3[1].Items = (void *)10; /*0x58f0ee*/
    v3[1].vtable0 = 0; /*0x58f0f5*/
  }
  else
  {
    v3 = 0; /*0x58f0fe*/
  }
  *(_DWORD *)&v1->RandomMap_field_0x2[2] = v3; /*0x58f100*/
  v4 = __2_YAPAXI_Z(g_MissionQueueFrame.localVariables[164]); /*0x58f114*/
  v5 = 0; /*0x58f119*/
  for ( Block = (_BYTE *)v4; v5 < g_MissionQueueFrame.localVariables[164]; ++v5 ) /*0x58f121*/
    *(_BYTE *)(v5 + v4) = 0; /*0x58f123*/
  v6 = RandomMap::TerrainAlloc(v1); /*0x58f139*/
  v7 = 0; /*0x58f13b*/
  v29 = v6; /*0x58f13d*/
  v28 = 0; /*0x58f141*/
  if ( (int)v6[4] > 0 ) /*0x58f14a*/
  {
    v8 = g_MissionQueueFrame.localVariables[160]; /*0x58f150*/
    do /*0x58f1ee*/
    {
      v9 = 0; /*0x58f159*/
      v10 = *(_DWORD *)(v6[1] + 4 * v7); /*0x58f15b*/
      do /*0x58f1da*/
      {
        v11 = v9 & 7; /*0x58f164*/
        v12 = HIWORD(v10) + HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x58f17d*/
        v13 = (__int16)(v10 + LOWORD(g_DDrawSurfaceManager.scenario[v11 + 82])); /*0x58f182*/
        v14 = v12; /*0x58f185*/
        v15 = v12 + v13; /*0x58f188*/
        if ( v15 > v8 && v13 - v14 < v8 && v14 - v13 < v8 && v15 <= g_MissionQueueFrame.localVariables[161] ) /*0x58f1a5*/
        {
          if ( g_MissionQueueFrame.localVariables[163] ) /*0x58f1af*/
          {
            v16 = *(_DWORD *)(80 * (v13 + g_MapCellWidth * v14) + g_MissionQueueFrame.localVariables[163] + 56); /*0x58f1c0*/
            if ( v16 >= 0 ) /*0x58f1c6*/
            {
              Block[v16] = 1; /*0x58f1cc*/
              v8 = g_MissionQueueFrame.localVariables[160]; /*0x58f1d0*/
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
  for ( i = 0; i < g_MissionQueueFrame.localVariables[164]; ++i ) /*0x58f201*/
  {
    if ( Block[i] && (void *)i != v1->RandomMap_field_0x8 ) /*0x58f210*/
    {
      v18 = *(_DWORD *)&v1->RandomMap_field_0x2[2]; /*0x58f212*/
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
  v1->RandomMap_field_0xC = 0; /*0x58f25c*/
  v24 = g_MapCellWidth * g_MapCellWidth; /*0x58f265*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58f26a*/
  {
    RandomMap_field_0x8 = v1->RandomMap_field_0x8; /*0x58f26c*/
    v26 = g_MissionQueueFrame.localVariables[163]; /*0x58f26f*/
    do /*0x58f29b*/
    {
      if ( *(void **)(v23 + v26 + 56) == RandomMap_field_0x8 && (*(_WORD *)(v23 + v26) || *(_WORD *)(v23 + v26 + 2)) ) /*0x58f282*/
      {
        ++v1->RandomMap_field_0xC; /*0x58f28e*/
        v26 = g_MissionQueueFrame.localVariables[163]; /*0x58f291*/
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
char __thiscall RandomMap::PlaceBuildings(RandomMap *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  char result; // al
  int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // esi
  int v10; // ebp
  _WORD *v11; // eax
  CellLand *v12; // esi
  CellLand *v13; // ebp
  CellLand *v14; // esi
  CellLand *v15; // ebp
  CellLand *v16; // esi
  CellLand *v17; // ebp
  CellLand *v18; // esi
  CellLand *v19; // ebp
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
 ... [24770 chars total]


