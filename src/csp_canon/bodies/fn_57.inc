// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00572230  globalHelper_072230  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_072230(ObjectClass * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00572230.json)
}

// ==== BACKFILL 0x00572330  globalHelper_072330  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_072330(IUnknown * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00572330.json)
}

// ==== BACKFILL 0x00572B80  CellClass::SetTileType13  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char CellClass::SetTileType13(IUnknown * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x572B80)
}

// ==== BACKFILL 0x00572C90  CellClass::SetTileType14  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char CellClass::SetTileType14(IUnknown * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x572C90)
}

// ==== BACKFILL 0x005749C0  CellClass::ApplyTerrainModTile  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::ApplyTerrainModTile(int a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00578080  Cell::GetGroundHeight  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Cell_GetGroundHeight_free(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (truth = 0x578080)
}

// ==== BACKFILL 0x005785F0  IsCoordVisibleMap  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool Gap2Recv_5785F0::IsCoordVisibleMap(IUnknown * aP1) {

  unsigned int *v2; // esi

  v2 = aP1; /*0x5785f1*/
  LOWORD(aP1) = *aP1 / 256; /*0x578605*/
  HIWORD(aP1) = v2[1] / 256; /*0x57861d*/
  return LayerClass::IsWithinUsableArea((LayerClass *)this, (int16_t *)&aP1, 1); /*0x578630*/

}

// ==== BACKFILL 0x00578640  Math_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool Gap2Recv_578640::Math_Helper(unsigned int * a2, int16_t * a3, char a4) {

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
    if ( v7 >= 0x40000 || (v8 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v7)) == 0 ) /*0x578678*/
    {
      g_MissionQueueFrame.briefing[139] = *(unsigned int *)a3; /*0x57867c*/
      v8 = &g_MissionQueueFrame.briefing[130]; /*0x578681*/
    }
    v5 = *((char *)v8 + 283); /*0x57868c*/
    if ( *((unsigned char *)v8 + 284) && v4 + v6 < v5 + *((unsigned int *)this + 61) + 2 * a2[1] + 4 ) /*0x5786ab*/
      ++v5; /*0x5786ad*/
  }
  v9 = a2[1]; /*0x5786ae*/
  v10 = *((unsigned int *)this + 61); /*0x5786b1*/
  return v4 + v6 > v5 + v10 + 2 * v9 /*0x5786f7*/
      && v4 + v6 <= v5 + v10 + 2 * (v9 + a2[3]) + 2
      && v6 - v4 < 2 * (*a2 + a2[2]) - v10
      && v4 - v6 < v10 - 2 * *a2;

}

// ==== BACKFILL 0x00578B70  sub_578B70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_578B70::sub_578B70(short * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00578B70.json)
}

// ==== BACKFILL 0x00578C50  sub_578C50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_578C50::sub_578C50(unsigned int * a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00578C50.json)
}

// ==== BACKFILL 0x0057A320  MapClass::BuildTileConnectivityGraph  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::BuildTileConnectivityGraph(MapClass * aP1, IUnknown * aP2, IUnknown * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0057A320.json)
}

// ==== BACKFILL 0x0057B790  MapClass::TriggerEVA  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int  MapClass::TriggerEVA(IUnknown * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0057B790.json)
}

// ==== BACKFILL 0x0057BCF0  CellClass::ApplyTileModification  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::ApplyTileModification(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0057C2B0  CellClass::ApplyTileModification2  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::ApplyTileModification2(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0057CBE0  Map_Create_57CBE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_57CBE0::Map_Create_57CBE0() {

  unsigned int v1; // eax
  int *v2; // eax
  int v3; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // edi
  char result; // al

  v1 = SLOWORD(this->AbstractClass) + ((int16_t)(((unsigned int)this->AbstractClass - 0x10000) >> 16) << 9); /*0x57cc04*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x57cc14*/
  {
    g_MissionQueueFrame.briefing[139] = (int)this->AbstractClass - 0x10000; /*0x57cc1a*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x57cc1f*/
  }
  v3 = v2[17]; /*0x57cc2c*/
  v4 = SLOWORD(this->AbstractClass) + ((int16_t)(((unsigned int)this->vtable1 + 0x10000) >> 16) << 9); /*0x57cc44*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57cc54*/
  {
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57cc5a*/
    g_MissionQueueFrame.briefing[139] = (int)this->vtable1 + 0x10000; /*0x57cc5f*/
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

// ==== BACKFILL 0x0057CF60  CellClass::ApplyTileModification3  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::ApplyTileModification3(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0057D530  CellClass::ApplyTileModification4  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::ApplyTileModification4(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0057F200  CellClass::ApplyCliffTileModifications  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void CellClass::ApplyCliffTileModifications(int a1) {
}

// ==== BACKFILL 0x0057F440  CellClass::ApplyTileMod58  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void CellClass::ApplyTileMod58(int a1) {
}
