// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006D0260  BlowStraw_29::Stub  cls=TabClass  sig=csp  renamed_refs=0  residual=- ====
int BlowStraw_29_::Stub()
{

  return ((ObjectClass *)((SidebarClass *)this))->processDamage();

}

// ==== BACKFILL 0x006D0270  TacticalClass::CleanupResources  cls=TabClass  sig=csp  renamed_refs=0  residual=- ====
void TacticalClass::CleanupResources()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D0270)
}

// ==== BACKFILL 0x006D02B0  SidebarClass::LoadButtonSHPs  cls=TabClass  sig=csp  renamed_refs=0  residual=- ====
int SidebarClass::LoadButtonSHPs() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 10 errs): wrong-universe gap2 body; truth func_0x6D02B0.json */
}

// ==== BACKFILL 0x006D03A0  SidebarClass::InitButtons  cls=TabClass  sig=csp  renamed_refs=0  residual=- ====
int SidebarClass::InitButtons() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 9 errs): wrong-universe gap2 body; truth func_0x6D03A0.json */
}

// ==== BACKFILL 0x006D04D0  SidebarUpdateAll  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_6D04D0::SidebarUpdateAll() {

  ShapeButtonClass *v2; // esi
  int result; // eax

  v2 = &stru_B0C1C0; /*0x6d04d4*/
  do /*0x6d04ea*/
  {
    result = (*((int (**)(ObjectClass *, ShapeButtonClass *))this->vtable1 + 13))(this, v2); /*0x6d04de*/
    v2 += 8; /*0x6d04e1*/
  }
  while ( (int)v2 < (int)&dword_B0CB20 ); /*0x6d04ea*/
  return result; /*0x6d04ec*/

}

// ==== BACKFILL 0x006D0EC0  HouseClass::updateFactoryQueue  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
void* HouseClass::updateFactoryQueue()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D0EC0.json)
}

// ==== BACKFILL 0x006D1570  sub_6D1570  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6D1570::sub_6D1570()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D1570)
}

// ==== BACKFILL 0x006D1610  HouseClass::InitDefeatState  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::InitDefeatState()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D1610.json)
}

// ==== BACKFILL 0x006D1770  MouseClass::ToggleContextGadget  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char MouseClass::ToggleContextGadget(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D1770)
}

// ==== BACKFILL 0x006D1810  Struct::Zero25  cls=Struct  sig=csp  renamed_refs=0  residual=u32_10,u32_14,u32_18,u32_4,u32_8,u32_C ====
void* Struct::Zero25() {
  this->Struct_field_00 = 0; /*0x6d1814*/
  this->u32_4 = 0; /*0x6d1816*/
  this->u32_8 = 0; /*0x6d1819*/
  this->u32_C = 0; /*0x6d181c*/
  this->u32_10 = 0; /*0x6d181f*/
  this->u32_14 = 0; /*0x6d1822*/
  this->u32_18 = 0; /*0x6d1825*/
  return &this->Struct_field_00; /*0x6d1828*/
}

// ==== BACKFILL 0x006D1E30  SmallFunc_6D1E30  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6D1E30::SmallFunc_6D1E30(AbstractClass * aP1) {

  AbstractClass::InitVtables((AbstractClass *)this, aP1); /*0x6d1e38*/
  this->Tactical_field_0xDA4 = (AbstractClass *)TimerGetTicks(); /*0x6d1e48*/
  *(unsigned int *)&this->__pad_DA8[4] = 0; /*0x6d1e4e*/
  *(unsigned int *)this->__pad_0 = &vt_Tactical; /*0x6d1e58*/
  *(unsigned int *)&this->Tactical_field_0x2[2] = &vt_Tactical; /*0x6d1e5e*/
  this->Tactical_field_0x8[0] = (int)&vt_Tactical; /*0x6d1e65*/
  this->Tactical_field_0xC[0] = (int)&vt_Tactical; /*0x6d1e6c*/
  return this->__pad_0; /*0x6d1e75*/

}

// ==== BACKFILL 0x006D1E80  sub_6D1E80  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_6D1E80::sub_6D1E80()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D1E80)
}

// ==== BACKFILL 0x006D1F10  Coord::To_ScreenRaw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * Coord::To_ScreenRaw(int *aP0, unsigned int *aP1)
{

  int v2; // edi
  int v3; // esi
  int v4; // esi
  int v6; // [esp+10h] [ebp-4h]

  v6 = (int)(aP1[1]); /*0x6d1f1f*/
  v2 = (-60 * v6 / 2 + 60 * *aP1 / 2) / 256; /*0x6d1f95*/
  v3 = (30 * v6 / 2 + 30 * *aP1 / 2) / 256; /*0x6d1f98*/
  v4 = (int)(v3 - Math::RoundToInt((double)(int)aP1[2] * dbl_B0CD48 + (double)(aP1[2] >= 728) + 0.5)); /*0x6d1fc4*/
  *aP0 = v2; /*0x6d1fca*/
  aP0[1] = v4; /*0x6d1fcc*/
  return (int *)(aP0); /*0x6d1fcf*/

}

// ==== BACKFILL 0x006D20E0  ZCoordToScreenY  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ZCoordToScreenY(int aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D20E0)
}

// ==== BACKFILL 0x006D2120  Coord::ScaleToScreenY  cls=Coord  sig=csp  renamed_refs=0  residual=- ====
long long Coord::ScaleToScreenY()
{

  int64_t result; // rax
  int v2; // kr00_4

  v2 = Math::RoundToInt(((double)(int)this - 0.5) * LightningStorm_CloudHeightFactor); /*0x6d2135*/
  (result) = ((result) & ~(0xFFFFull << 32)) | ((((((v2) >> 16) & 0xFFFF)) & 0xFFFFull) << 32); /*0x6d2135*/
  (result) = ((result) & ~0xFFFF) | ((v2) & 0xFFFF); /*0x6d2135*/
  return result; /*0x6d213b*/

}

// ==== BACKFILL 0x006D2360  Matrix3x4::TransformCell  cls=Matrix3x4  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Matrix3x4::TransformCell(AbstractClass * aP1, AbstractClass * aP2, void *a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D2360)
}

// ==== BACKFILL 0x006D2420  TacticalClass::SetPosition  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::SetPosition(void* a1, int a2) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006D2B50  nullsub_238  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_238(int a1, int a2)
{
  ; /*0x6d2b50*/
}

// ==== BACKFILL 0x006D3290  DrawBuildingAnimFrame  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_6D3290::DrawBuildingAnimFrame(AbstractClass * aP1, int * a2, char a4) {

  int v5; // ebp
  char *v6; // ebx
  int *v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  int result; // eax
  int v12; // ebx
  int v13; // esi
  int *v14; // ecx
  int v15; // ecx
  int v16; // [esp+Ch] [ebp-28h] BYREF
  int v17; // [esp+14h] [ebp-20h] BYREF
  int v18; // [esp+18h] [ebp-1Ch]
  int v19; // [esp+1Ch] [ebp-18h]
  int v20; // [esp+20h] [ebp-14h]
  int v21[4]; // [esp+24h] [ebp-10h] BYREF
  int v22; // [esp+40h] [ebp+Ch]

  if ( a4 ) /*0x6d329e*/
  {
    TacticalClass::DrawBuildingsInView((TacticalClass *)this, &DSurface_ViewBounds.field_0); /*0x6d32a5*/
  }
  else
  {
    if ( aP1[2] > 0 && aP1[3] > 0 ) /*0x6d32b7*/
      TacticalClass::DrawBuildingsInView((TacticalClass *)this, aP1); /*0x6d32bc*/
    if ( a2[2] > 0 && a2[3] > 0 ) /*0x6d32d1*/
      TacticalClass::DrawBuildingsInView((TacticalClass *)this, a2); /*0x6d32d6*/
  }
  if ( *((int *)this + 56) > 0 && !a4 ) /*0x6d32ec*/
  {
    v5 = 0; /*0x6d32f2*/
    v6 = (char *)this + 228; /*0x6d32fc*/
    do /*0x6d33bb*/
    {
      v22 = *(unsigned int *)(*(unsigned int *)v6 + 36); /*0x6d3307*/
      v18 = ((((short)(((v22) >> 16) & 0xFFFF) << 8) + 128) / 256) << 8; /*0x6d334b*/
      v17 = ((((int16_t)v22 << 8) + 128) / 256) << 8; /*0x6d3358*/
      v19 = 0; /*0x6d335c*/
      v7 = Coord::To_ScreenRaw(&v16, &v17); /*0x6d3360*/
      v8 = *v7 - *((unsigned int *)this + 44); /*0x6d336d*/
      v9 = *((unsigned int *)this + 45); /*0x6d336f*/
      v10 = v7[1]; /*0x6d3375*/
      v21[0] = v8 - 30; /*0x6d337b*/
      v21[2] = 60; /*0x6d3384*/
      v21[3] = 30; /*0x6d338d*/
      v21[1] = (int)DSurface_ViewBounds.field_4 + v10 - v9; /*0x6d33a3*/
      TacticalClass::DrawBuildingsInView((TacticalClass *)this, v21); /*0x6d33aa*/
      ++v5; /*0x6d33b5*/
      v6 += 4; /*0x6d33b6*/
    }
    while ( v5 < *((unsigned int *)this + 56) ); /*0x6d33bb*/
  }
  result = g_CraterCreationState; /*0x6d33c1*/
  if ( g_CraterCreationState ) /*0x6d33c9*/
  {
    result = g_CraterCreationState - 1; /*0x6d33cf*/
    if ( g_CraterCreationState - 1 >= 0 ) /*0x6d33d2*/
    {
      v12 = g_CraterCreationState; /*0x6d33db*/
      v13 = 20 * result; /*0x6d33de*/
      do /*0x6d345d*/
      {
        v17 = *(unsigned int *)((char *)g_CraterPool + v13); /*0x6d33f0*/
        v18 = *(unsigned int *)((char *)g_CraterPool + v13 + 4); /*0x6d33f7*/
        v19 = *(unsigned int *)((char *)g_CraterPool + v13 + 8); /*0x6d33fe*/
        v20 = *(unsigned int *)((char *)g_CraterPool + v13 + 12); /*0x6d3411*/
        v18 += (int)DSurface_ViewBounds.field_4; /*0x6d341f*/
        v14 = ClipRectIntersection(v21, &DSurface_ViewBounds.field_0, &v17, 0, 0); /*0x6d3428*/
        v17 = *v14; /*0x6d342c*/
        v18 = v14[1]; /*0x6d3433*/
        result = v14[2]; /*0x6d3437*/
        v19 = result; /*0x6d343a*/
        v15 = v14[3]; /*0x6d343e*/
        v20 = v15; /*0x6d3443*/
        if ( result > 0 && v15 > 0 ) /*0x6d344b*/
          result = (int)TacticalClass::DrawBuildingsInView((TacticalClass *)this, &v17); /*0x6d3454*/
        v13 -= 20; /*0x6d3459*/
        --v12; /*0x6d345c*/
      }
      while ( v12 ); /*0x6d345d*/
    }
  }
  return result; /*0x6d345f*/

}

// ==== BACKFILL 0x006D3870  TacticalClass::ClickFindBuilding  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::ClickFindBuilding(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006D3AC0  TacticalClass::ClickFindOverlay  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::ClickFindOverlay(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006D4DB0  HouseClass::SetOwnerName  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
void* HouseClass::SetOwnerName(void* a1, int a2)
{
    (void)a1; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D4DB0.json)
}

// ==== BACKFILL 0x006D4E00  sub_6D4E00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_6D4E00::sub_6D4E00()
{

  (&this->location)[2] = -1; /*0x6d4e00*/
  LOWORD(this->occupant) = 0; /*0x6d4e0a*/

}

// ==== BACKFILL 0x006D5030  RadarClass::DrawBlips  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
int RadarClass::DrawBlips(int a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006D6190  ObjectClass::ComputeDelta  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* ObjectClass::ComputeDelta(void* a1) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6d6190.json */
}

// ==== BACKFILL 0x006D6410  Terrain::ClimbCheck  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass_flat::ClimbCheck(AbstractClass * aP0, AbstractClass * aP1)
{
    (void)aP0; (void)aP1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D6410.json)
}

// ==== BACKFILL 0x006D6A90  sub_6D6A90  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
long long sub_6D6A90(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D6A90)
}

// ==== BACKFILL 0x006D6AD0  CellClass::GetByte284  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CellClass::GetByte284(IUnknown * aP0)
{

  return *((uint8_t *)((Coord *)(&dword_87F7E8))->To_Cell((unsigned int *)(aP0)) + 284); /*0x6d6ae9*/

}

// ==== BACKFILL 0x006D84D0  sub_6D84D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * sub_6D84D0(int * a1, int * a2)
{
  int v2; // edx
  int v4; // edx
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h]

  v2 = a2[1]; /*0x6d84da*/
  v5 = *a2; /*0x6d84dd*/
  v6 = v2; /*0x6d84e6*/
  if ( !ClampCoordMap((gamemd::AbstractClass *)(&v5)) || byte_A8ED6B ) /*0x6d84fa*/
  {
    *a1 = *a2; /*0x6d851a*/
    a1[1] = a2[1]; /*0x6d851f*/
    return a1; /*0x6d8514*/
  }
  else
  {
    v4 = v6; /*0x6d8504*/
    *a1 = v5; /*0x6d8509*/
    a1[1] = v4; /*0x6d850b*/
    return a1; /*0x6d84fc*/
  }
}

// ==== BACKFILL 0x006D8640  ClampCoordMap  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char ClampCoordMap(AbstractClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D8640)
}

// ==== BACKFILL 0x006D97D0  TacticalClass::FindOverlay  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::FindOverlay(int a1, IUnknown * aP1, IUnknown * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D97D0)
}

// ==== BACKFILL 0x006D9920  TacticalClass::FindBuilding  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::FindBuilding(int a1, IUnknown * aP1, IUnknown * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D9920)
}

// ==== BACKFILL 0x006D9A50  Render_Render_6D9A50  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_6D9A50(int a1, int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D9A50.json)
}

// ==== BACKFILL 0x006D9CE0  FindBuildingsInScreenRect  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_6D9CE0::FindBuildingsInScreenRect(int a2, int a3, int a4, int a5) {

  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // eax
  unsigned int *v10; // eax
  int v11; // ebp
  int v12; // edi
  int64_t v13; // rax
  int v14; // ebp
  int v15; // eax
  int v16; // edi
  int v17; // ebp
  int v18; // eax
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  int i; // [esp+Ch] [ebp-24h]
  int v23; // [esp+10h] [ebp-20h]
  int v24; // [esp+14h] [ebp-1Ch]
  int v25; // [esp+18h] [ebp-18h]
  int v26; // [esp+1Ch] [ebp-14h]
  int v27; // [esp+20h] [ebp-10h]
  int v28; // [esp+2Ch] [ebp-4h]

  v6 = *((unsigned int *)this + 44); /*0x6d9cf0*/
  v24 = v6 + a2; /*0x6d9cf9*/
  v7 = *((unsigned int *)this + 45); /*0x6d9cfd*/
  v25 = v7 + a3; /*0x6d9d06*/
  v26 = a2 + a4 + v6; /*0x6d9d16*/
  v27 = a3 + v7 + a5; /*0x6d9d25*/
  result = 0; /*0x6d9d29*/
  for ( i = 0; i < stru_A8EB00.ObjectTypeClass[20]; ++i ) /*0x6d9d31*/
  {
    v9 = *(unsigned int *)(stru_A8EB00.ObjectTypeClass[17] + 4 * result); /*0x6d9d3e*/
    v23 = v9; /*0x6d9d41*/
    if ( *(unsigned char *)(v9 + 144) ) /*0x6d9d45*/
    {
      if ( *(unsigned char *)(v9 + 116) ) /*0x6d9d53*/
      {
        if ( !*(unsigned char *)(*(unsigned int *)(v9 + 1312) + 5889) ) /*0x6d9d64*/
        {
          v10 = (unsigned int *)(v9 + 156); /*0x6d9d72*/
          v11 = v10[1]; /*0x6d9d79*/
          v28 = v10[2]; /*0x6d9d82*/
          v12 = 30 * v11 / 2 + 30 * *v10 / 2; /*0x6d9dcf*/
          v13 = -60 * v11 / 2 + 60 * *v10 / 2; /*0x6d9dd3*/
          v14 = ((((v13) >> 32) & 0xFF) + (int)v13) >> 8; /*0x6d9deb*/
          LOWORD(v15) = Math::RoundToInt((double)v28 * dbl_B0CD48 + (double)(v28 >= 728) + 0.5); /*0x6d9e15*/
          v16 = v12 / 256 - v15; /*0x6d9e1a*/
          if ( v14 >= v24 && v14 <= v26 && v16 >= v25 && v16 <= v27 ) /*0x6d9e40*/
          {
            v17 = v14 - *((unsigned int *)this + 44); /*0x6d9e52*/
            v18 = *((unsigned int *)this + 876); /*0x6d9e54*/
            v19 = v16 - *((unsigned int *)this + 45); /*0x6d9e5a*/
            if ( v18 != 500 /*0x6d9e85*/
              && v17 >= -32
              && v17 <= *(unsigned int *)DSurface_ViewBounds.__pad_8 + 32
              && v19 >= -32
              && v19 <= *(unsigned int *)&DSurface_ViewBounds.__pad_8[4] + 32 )
            {
              dword_B0CEC8[3 * v18] = v23; /*0x6d9e8e*/
              v20 = *((unsigned int *)this + 45); /*0x6d9e9b*/
              v21 = 3 * *((unsigned int *)this + 876); /*0x6d9eac*/
              dword_B0CECC[v21] = *((unsigned int *)this + 44) + v17; /*0x6d9eaf*/
              dword_B0CED0[v21] = v19 + v20; /*0x6d9eb6*/
              ++*((unsigned int *)this + 876); /*0x6d9ec4*/
            }
          }
        }
      }
    }
    result = i + 1; /*0x6d9ed4*/
  }
  return result; /*0x6d9ee2*/

}

// ==== BACKFILL 0x006D9F80  TacticalClass::InitScrollBounds  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::InitScrollBounds(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006D9FC0  TacticalClass::UpdateScrollMaxBounds  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::UpdateScrollMaxBounds(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006DA080  PlayerClass::HasOccupiedCell  cls=PlayerClass  sig=csp  renamed_refs=0  residual=u32_B4,u32_D90,u32_D94,u32_D98,u32_D9C,u32_DB0 ====
int PlayerClass::HasOccupiedCell() {
  int v1; // eax
  int v2; // edx
  int v3; // ebx
  int v4; // ebp
  int v5; // edx
  int v7; // eax
  int v8; // edx
  int v10; // [esp+10h] [ebp-14h]
  int v11; // [esp+1Ch] [ebp-8h]

  v1 = this->u32_D98; /*0x6da080*/
  v2 = this->u32_D9C; /*0x6da086*/
  v3 = this->u32_D90; /*0x6da090*/
  v4 = this->u32_D94; /*0x6da097*/
  if ( v3 > v1 ) /*0x6da0a1*/
  {
    v3 = this->u32_D98; /*0x6da0a5*/
    v1 = this->u32_D90; /*0x6da0a7*/
  }
  if ( v4 > v2 ) /*0x6da0ab*/
  {
    v4 = this->u32_D9C; /*0x6da0af*/
    v2 = this->u32_D94; /*0x6da0b1*/
  }
  v5 = v2 - v4 + 1; /*0x6da0b8*/
  v11 = v1 - v3 + 1; /*0x6da0bb*/
  v5 = v5; /*0x6da0bf*/
  if ( v11 <= 0 ) /*0x6da0c3*/
    return 0; /*0x6da0c3*/
  if ( v5 <= 0 ) /*0x6da0cb*/
    return 0; /*0x6da0cb*/
  v10 = 0; /*0x6da0d3*/
  if ( this->u32_DB0 <= 0 ) /*0x6da0dd*/
    return 0; /*0x6da14b*/
  for ( dword_B0CEC8 = dword_B0CEC8; ; dword_B0CEC8 += 3 ) /*0x6da0df*/
  {
    if ( *dword_B0CEC8 ) /*0x6da0e4*/
    {
      if ( *(unsigned char *)(*dword_B0CEC8 + 144) ) /*0x6da0ea*/
      {
        v7 = dword_B0CEC8[1] - this->q02C; /*0x6da103*/
        v8 = dword_B0CEC8[2] - this->u32_B4; /*0x6da108*/
        if ( v7 >= v3 && v7 < v3 + v11 && v8 >= v4 && v8 < v4 + v5 ) /*0x6da124*/
          break; /*0x6da124*/
      }
    }
    if ( ++v10 >= this->u32_DB0 ) /*0x6da13a*/
      return 0; /*0x6da13a*/
  }
  return 1; /*0x6da13e*/
}

// ==== BACKFILL 0x006DA160  TacticalClass::ResetScrollBounds  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::ResetScrollBounds() {

  this->TacticalClass_field_D90 = 0; /*0x6da164*/
  this->TacticalClass_field_D98 = 0; /*0x6da16a*/
  this->TacticalClass_field_D94 = 0; /*0x6da170*/
  this->TacticalClass_field_D9C = 0; /*0x6da176*/
  return 0; /*0x6da17c*/

}

// ==== BACKFILL 0x006DA360  UI_Move  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * UI_Move(unsigned int * a0, MouseClass * aP1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6DA360)
}

// ==== BACKFILL 0x006DA370  nullsub_239  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_239(int a1)
{
  ; /*0x6da370*/
}

// ==== BACKFILL 0x006DA560  Tactical::ScrollMap  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
int * Tactical::ScrollMap(Tactical * aP0, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6DA560)
}

// ==== BACKFILL 0x006DA9D0  RenderSelectionBeacons  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char* Gap2Recv_6DA9D0::RenderSelectionBeacons(int a2) {

  char *result; // eax
  unsigned int *v4; // edi
  unsigned int *v5; // eax
  int *v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int *v11; // eax
  unsigned int *v12; // eax
  int v13; // ebp
  int v14; // esi
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // esi
  int v19; // [esp+34h] [ebp-64h]
  int i; // [esp+38h] [ebp-60h]
  int v21; // [esp+3Ch] [ebp-5Ch]
  Vector2 v22; // [esp+40h] [ebp-58h] BYREF
  int v23; // [esp+48h] [ebp-50h] BYREF
  char *v24; // [esp+4Ch] [ebp-4Ch]
  unsigned int v25[2]; // [esp+50h] [ebp-48h] BYREF
  int v26; // [esp+58h] [ebp-40h] BYREF
  IsoCoord v27; // [esp+60h] [ebp-38h] BYREF
  int v28; // [esp+68h] [ebp-30h] BYREF
  int v29; // [esp+6Ch] [ebp-2Ch]
  int GroundHeight; // [esp+70h] [ebp-28h]
  unsigned int v31[3]; // [esp+74h] [ebp-24h] BYREF
  unsigned char v32[12]; // [esp+80h] [ebp-18h] BYREF
  unsigned char v33[12]; // [esp+8Ch] [ebp-Ch] BYREF

  v19 = (0x7FFFFFFF - *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416)) % 15; /*0x6da9f9*/
  result = (char *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 228) - 1); /*0x6daa44*/
  v21 = (byte_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6daa49*/
      | (word_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
      | (MEMORY[0xA83CDB] >> g_BitMask_Red << g_BitShift_Blue);
  for ( i = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 228) - 1; i >= 0; --i ) /*0x6daa51*/
  {
    v4 = *(unsigned int **)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * (unsigned int)result); /*0x6daa5e*/
    if ( (*(int (**)(unsigned int *))(*v4 + 44))(v4) == 6 /*0x6daab2*/
      && *((unsigned char *)v4 + 144)
      && *((unsigned char *)v4 + 131)
      && (Object *)v4[135] == dword_A83D4C
      && (*(uint8_t (**)(unsigned int *))(*v4 + 644))(v4)
      && v4[134] )
    {
      v5 = (unsigned int *)(*(int (**)(unsigned int *, unsigned char *))(*v4 + 72))(v4, v32); /*0x6daac9*/
      v31[0] = *v5; /*0x6daace*/
      v31[1] = v5[1]; /*0x6daad5*/
      v31[2] = v5[2]; /*0x6daae8*/
      v6 = Coord::To_ScreenRaw(&v26, v31); /*0x6daaec*/
      v7 = *((unsigned int *)this + 45); /*0x6daaf1*/
      v23 = *v6; /*0x6daafb*/
      v8 = v6[1] - v7; /*0x6dab08*/
      v9 = v23 - *((unsigned int *)this + 44); /*0x6dab10*/
      v24 = (char *)DSurface_ViewBounds.field_4 + v8; /*0x6dab1c*/
      v10 = v4[134]; /*0x6dab20*/
      v23 = DSurface_ViewBounds.field_0 + v9; /*0x6dab26*/
      v11 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v10 + 72))(v10, v33); /*0x6dab31*/
      v28 = *v11; /*0x6dab36*/
      v29 = v11[1]; /*0x6dab42*/
      GroundHeight = v11[2]; /*0x6dab4e*/
      GroundHeight = Cell::GetGroundHeight(&v28); /*0x6dab61*/
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v28)->flags[0] & 0x100) != 0 ) /*0x6dab73*/
        GroundHeight += dword_B0CEB4; /*0x6dab80*/
      v12 = IsoCoord::ToPixel(&v27, v28, v29); /*0x6dab92*/
      v13 = v12[1]; /*0x6dab9c*/
      v14 = *v12 / 256; /*0x6dabad*/
      v15 = ZCoordToScreenY(GroundHeight); /*0x6dabb0*/
      *(unsigned int *)v22.__pad_0 = v14; /*0x6dabc0*/
      v16 = *((unsigned int *)this + 44); /*0x6dabc6*/
      v22.Vector2_field_0x04 = v13 / 256 - v15; /*0x6dabd5*/
      v17 = *((unsigned int *)this + 45); /*0x6dabd9*/
      v25[0] = v16; /*0x6dabe4*/
      v25[1] = v17; /*0x6dabe8*/
      Vector2::Subtract(&v22, v25); /*0x6dabec*/
      *(unsigned int *)v22.__pad_0 += DSurface_ViewBounds.field_0; /*0x6dac1f*/
      v24 += 2; /*0x6dac23*/
      v22.Vector2_field_0x04 += (int)DSurface_ViewBounds.field_4 + 2; /*0x6dac27*/
      if ( (uint8_t)ClipLine(&v23, (int *)v22.__pad_0, &DSurface_ViewBounds.field_0) ) /*0x6dac2b*/
        (*(void (**)(AudioStream *, int *, Vector2 *, int, void *, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 /*0x6dac5a*/
                                                                                       + 76))(
          g_DSurface_Hidden_2,
          &v23,
          &v22,
          v21,
          &unk_842930,
          v19,
          a2);
      v18 = (*(uint8_t *)(v4[135] + 22265) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6dacc2*/
          | (*(uint8_t *)(v4[135] + 22266) >> g_BitMask_Blue << g_BitMask_Green)
          | (*(uint8_t *)(v4[135] + 22267) >> g_BitMask_Red << g_BitShift_Blue);
      --v24; /*0x6dacca*/
      --v22.Vector2_field_0x04; /*0x6dacce*/
      if ( (uint8_t)ClipLine(&v23, (int *)v22.__pad_0, &DSurface_ViewBounds.field_0) ) /*0x6dacd2*/
        (*(void (**)(AudioStream *, int *, Vector2 *, int, void *, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 /*0x6dacf9*/
                                                                                       + 76))(
          g_DSurface_Hidden_2,
          &v23,
          &v22,
          v18,
          &unk_842930,
          v19,
          a2);
      --v24; /*0x6dad13*/
      --v22.Vector2_field_0x04; /*0x6dad17*/
      if ( (uint8_t)ClipLine(&v23, (int *)v22.__pad_0, &DSurface_ViewBounds.field_0) ) /*0x6dad1b*/
        (*(void (**)(AudioStream *, int *, Vector2 *, int, void *, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 /*0x6dad42*/
                                                                                       + 76))(
          g_DSurface_Hidden_2,
          &v23,
          &v22,
          v18,
          &unk_842930,
          v19,
          a2);
    }
    result = (char *)(i - 1); /*0x6dad49*/
  }
  return result; /*0x6dad55*/

}

// ==== BACKFILL 0x006DB620  RenderLWCViewCells  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int LWCViewClass::RenderCells() {

  ObjectClass *v1; // ebp
  int v2; // edi
  int result; // eax
  int v4; // esi
  int *ScreenRect; // eax
  unsigned int *v6; // eax
  int *Coords; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // eax
  char *v11; // ecx
  char v12; // dl
  unsigned int *v13; // eax
  unsigned int *v14; // eax
  unsigned int *v15; // eax
  unsigned int *v16; // eax
  unsigned int *v17; // eax
  unsigned int *v18; // eax
  unsigned int *v19; // eax
  unsigned int *v20; // eax
  unsigned int *v21; // eax
  unsigned int *v22; // eax
  unsigned int *v23; // eax
  int v24; // [esp+18h] [ebp-1DCh]
  int v25; // [esp+18h] [ebp-1DCh]
  int v26; // [esp+18h] [ebp-1DCh]
  int v27; // [esp+18h] [ebp-1DCh]
  int v28; // [esp+1Ch] [ebp-1D8h]
  int v29; // [esp+1Ch] [ebp-1D8h]
  int v30; // [esp+1Ch] [ebp-1D8h]
  int v31; // [esp+1Ch] [ebp-1D8h]
  Coord2D v32; // [esp+30h] [ebp-1C4h] BYREF
  int v33; // [esp+38h] [ebp-1BCh]
  int v34; // [esp+3Ch] [ebp-1B8h]
  ObjectClass *v35; // [esp+40h] [ebp-1B4h]
  Coord2D v36; // [esp+44h] [ebp-1B0h] BYREF
  unsigned int v37[2]; // [esp+4Ch] [ebp-1A8h] BYREF
  Coord2D v38; // [esp+54h] [ebp-1A0h] BYREF
  Coord2D v39; // [esp+5Ch] [ebp-198h] BYREF
  unsigned int v40[2]; // [esp+64h] [ebp-190h] BYREF
  unsigned int v41[2]; // [esp+6Ch] [ebp-188h] BYREF
  Coord2D v42; // [esp+74h] [ebp-180h] BYREF
  unsigned int v43[2]; // [esp+7Ch] [ebp-178h] BYREF
  unsigned int v44[2]; // [esp+84h] [ebp-170h] BYREF
  unsigned int v45[2]; // [esp+8Ch] [ebp-168h] BYREF
  Coord2D v46; // [esp+94h] [ebp-160h] BYREF
  unsigned int v47[3]; // [esp+9Ch] [ebp-158h] BYREF
  unsigned int v48[4]; // [esp+A8h] [ebp-14Ch] BYREF
  unsigned int v49[4]; // [esp+B8h] [ebp-13Ch] BYREF
  unsigned int v50[4]; // [esp+C8h] [ebp-12Ch] BYREF
  unsigned int v51[4]; // [esp+D8h] [ebp-11Ch] BYREF
  int v52[4]; // [esp+E8h] [ebp-10Ch] BYREF
  unsigned int v53[4]; // [esp+F8h] [ebp-FCh] BYREF
  unsigned int v54[4]; // [esp+108h] [ebp-ECh] BYREF
  unsigned int v55[4]; // [esp+118h] [ebp-DCh] BYREF
  int v56; // [esp+128h] [ebp-CCh] BYREF
  int v57; // [esp+130h] [ebp-C4h] BYREF
  unsigned int v58[6]; // [esp+138h] [ebp-BCh] BYREF
  int v59; // [esp+150h] [ebp-A4h] BYREF
  int v60; // [esp+158h] [ebp-9Ch] BYREF
  int v61; // [esp+160h] [ebp-94h] BYREF
  int v62[3]; // [esp+168h] [ebp-8Ch] BYREF
  int v63[4]; // [esp+174h] [ebp-80h] BYREF
  Rect v64; // [esp+184h] [ebp-70h] BYREF
  int v65[4]; // [esp+194h] [ebp-60h] BYREF
  Rect v66; // [esp+1A4h] [ebp-50h] BYREF
  Rect v67; // [esp+1B4h] [ebp-40h] BYREF
  Rect v68; // [esp+1C4h] [ebp-30h] BYREF
  Rect v69; // [esp+1D4h] [ebp-20h] BYREF
  Rect v70; // [esp+1E4h] [ebp-10h] BYREF

  v1 = this; /*0x6db628*/
  v35 = this; /*0x6db631*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6db635*/
  v2 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6db654*/
  result = 255 >> g_BitMask_Blue << g_BitMask_Green; /*0x6db672*/
  v4 = (255 >> g_BitShift_Green_0 << g_BitShift_Red) | result; /*0x6db686*/
  if ( v2 ) /*0x6db68a*/
  {
    do /*0x6dbb43*/
    {
      ScreenRect = CellClass::GetScreenRect((CellClass *)v2, v63); /*0x6db69a*/
      v52[0] = *ScreenRect; /*0x6db6a2*/
      v52[1] = ScreenRect[1]; /*0x6db6b2*/
      v52[2] = ScreenRect[2]; /*0x6db6bc*/
      v52[3] = ScreenRect[3]; /*0x6db6cd*/
      v6 = ClipRectIntersection(v65, v52, &DSurface_ViewBounds.field_0, 0, 0); /*0x6db6db*/
      v58[2] = *v6; /*0x6db6e4*/
      v58[3] = v6[1]; /*0x6db6ee*/
      if ( (int)v6[2] > 0 && (int)v6[3] > 0 ) /*0x6db705*/
      {
        Coords = CellClass::GetCoords((CellClass *)v2, v62); /*0x6db715*/
        v47[0] = *Coords; /*0x6db71c*/
        v47[1] = Coords[1]; /*0x6db723*/
        v47[2] = Coords[2]; /*0x6db73c*/
        v8 = Coord::To_ScreenRaw(&v61, v47); /*0x6db743*/
        v9 = v8[1]; /*0x6db74c*/
        v10 = *v8 - (unsigned int)v1[1] - 2; /*0x6db765*/
        v11 = (char *)DSurface_ViewBounds.field_4 + v9 - (unsigned int)v1[1] - 2; /*0x6db768*/
        v33 = 4; /*0x6db773*/
        v12 = *(unsigned char *)(v2 + 292); /*0x6db777*/
        *(unsigned int *)v32.__pad_0 = v10; /*0x6db77d*/
        v32.Coord2D_field_0x04 = (int)v11; /*0x6db784*/
        v34 = 4; /*0x6db788*/
        if ( (v12 & 4) != 0 ) /*0x6db78c*/
        {
          *(unsigned int *)v46.__pad_0 = v10; /*0x6db78e*/
          v46.Coord2D_field_0x04 = (int)v11; /*0x6db792*/
          v41[0] = 10; /*0x6db7ae*/
          v41[1] = 0; /*0x6db7b6*/
          v13 = Coord2D::Add(&v46, v58, v41); /*0x6db7ba*/
          v14 = Rect::Construct(&v69, v13, 4, 4); /*0x6db7c7*/
          v50[0] = *v14; /*0x6db7cf*/
          v50[1] = v14[1]; /*0x6db7d9*/
          v50[2] = v14[2]; /*0x6db7e9*/
          v50[3] = v14[3]; /*0x6db7f3*/
          (*(void (**)(AudioStream *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db804*/
            g_DSurface_Hidden_2,
            v50,
            v4);
        }
        if ( (*(unsigned char *)(v2 + 292) & 0x10) != 0 ) /*0x6db812*/
        {
          v39 = v32; /*0x6db824*/
          v28 = v34; /*0x6db830*/
          v24 = v33; /*0x6db835*/
          v45[0] = 0; /*0x6db843*/
          v45[1] = 6; /*0x6db847*/
          v15 = Coord2D::Add(&v39, &v60, v45); /*0x6db852*/
          v16 = Rect::Construct(&v67, v15, v24, v28); /*0x6db85f*/
          v51[0] = *v16; /*0x6db867*/
          v51[1] = v16[1]; /*0x6db871*/
          v51[2] = v16[2]; /*0x6db87b*/
          v51[3] = v16[3]; /*0x6db88b*/
          (*(void (**)(AudioStream *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db89c*/
            g_DSurface_Hidden_2,
            v51,
            v4);
        }
        if ( (*(unsigned char *)(v2 + 292) & 8) != 0 ) /*0x6db8a6*/
        {
          v36 = v32; /*0x6db8b8*/
          v29 = v34; /*0x6db8c4*/
          v25 = v33; /*0x6db8c9*/
          v43[0] = -10; /*0x6db8d7*/
          v43[1] = 0; /*0x6db8df*/
          v17 = Coord2D::Add(&v36, &v56, v43); /*0x6db8e3*/
          v18 = Rect::Construct(&v64, v17, v25, v29); /*0x6db8f0*/
          v53[0] = *v18; /*0x6db8f8*/
          v53[1] = v18[1]; /*0x6db902*/
          v53[2] = v18[2]; /*0x6db90c*/
          v53[3] = v18[3]; /*0x6db91c*/
          (*(void (**)(AudioStream *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db92d*/
            g_DSurface_Hidden_2,
            v53,
            v4);
        }
        if ( (*(unsigned char *)(v2 + 292) & 0xE0) != 0 ) /*0x6db937*/
          (*(void (**)(AudioStream *, Coord2D *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db947*/
            g_DSurface_Hidden_2,
            &v32,
            v4);
        if ( (*(unsigned char *)(v2 + 296) & 4) != 0 ) /*0x6db951*/
        {
          v38 = v32; /*0x6db963*/
          v30 = v34; /*0x6db96f*/
          v26 = v33; /*0x6db974*/
          v37[0] = 10; /*0x6db982*/
          v37[1] = -60; /*0x6db98a*/
          v19 = Coord2D::Add(&v38, &v57, v37); /*0x6db992*/
          v20 = Rect::Construct(&v66, v19, v26, v30); /*0x6db99f*/
          v48[0] = *v20; /*0x6db9a7*/
          v48[1] = v20[1]; /*0x6db9b1*/
          v48[2] = v20[2]; /*0x6db9bb*/
          v48[3] = v20[3]; /*0x6db9cb*/
          (*(void (**)(AudioStream *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6db9dc*/
            g_DSurface_Hidden_2,
            v48,
            v4);
        }
        if ( (*(unsigned char *)(v2 + 296) & 0x10) != 0 ) /*0x6db9e6*/
        {
          v42 = v32; /*0x6db9f8*/
          v31 = v34; /*0x6dba04*/
          v27 = v33; /*0x6dba09*/
          v40[0] = 0; /*0x6dba17*/
          v40[1] = -66; /*0x6dba1b*/
          v21 = Coord2D::Add(&v42, &v59, v40); /*0x6dba23*/
          v22 = Rect::Construct(&v68, v21, v27, v31); /*0x6dba30*/
          v49[0] = *v22; /*0x6dba38*/
          v49[1] = v22[1]; /*0x6dba42*/
          v49[2] = v22[2]; /*0x6dba4c*/
          v49[3] = v22[3]; /*0x6dba5c*/
          (*(void (**)(AudioStream *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6dba6d*/
            g_DSurface_Hidden_2,
            v49,
            v4);
        }
        if ( (*(unsigned char *)(v2 + 296) & 8) != 0 ) /*0x6dba77*/
        {
          v44[0] = *(unsigned int *)v32.__pad_0 - 10; /*0x6dba8b*/
          v44[1] = v32.Coord2D_field_0x04 - 60; /*0x6dba93*/
          v23 = Rect::Construct(&v70, v44, v33, v34); /*0x6dbaa5*/
          v55[0] = *v23; /*0x6dbaad*/
          v55[1] = v23[1]; /*0x6dbab7*/
          v55[2] = v23[2]; /*0x6dbac7*/
          v55[3] = v23[3]; /*0x6dbad1*/
          (*(void (**)(AudioStream *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6dbae2*/
            g_DSurface_Hidden_2,
            v55,
            v4);
        }
        if ( (*(unsigned char *)(v2 + 296) & 0xE0) != 0 ) /*0x6dbaec*/
        {
          v54[0] = *(unsigned int *)v32.__pad_0; /*0x6dbaf6*/
          v54[1] = v32.Coord2D_field_0x04 - 60; /*0x6dbb05*/
          v54[3] = v34; /*0x6dbb10*/
          v54[2] = v33; /*0x6dbb1d*/
          (*(void (**)(AudioStream *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6dbb2e*/
            g_DSurface_Hidden_2,
            v54,
            v4);
        }
        v1 = v35; /*0x6dbb31*/
      }
      result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6dbb3a*/
      v2 = result; /*0x6dbb3f*/
    }
    while ( result ); /*0x6dbb43*/
  }
  return result; /*0x6dbb49*/

}

// ==== BACKFILL 0x006DBCE0  Tactical::ddtor  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
int Tactical::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6DBCE0)
}

// ==== BACKFILL 0x006DBD20  Tactical::InitMap  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
int Tactical::InitMap(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6DBD20)
}

// ==== BACKFILL 0x006DBE00  Tactical::UpdateMapView  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
int Tactical::UpdateMapView(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6DBE00)
}

// ==== BACKFILL 0x006DC430  GetCoordDataMap  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Map_GetCoordData(int a1)
{
  return (&dword_B0CEC8)[3 * a1]; /*0x6dc43e*/
}

// ==== BACKFILL 0x006DC450  Tactical::StubReturn56  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
int Tactical::StubReturn56()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6DC450)
}

// ==== BACKFILL 0x006DC460  Tactical::StubReturn3608  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
int Tactical::StubReturn3608()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6DC460)
}

// ==== BACKFILL 0x006DC470  Tactical::UpdateView  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
Tactical * Tactical::UpdateView(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6DC470)
}

// ==== BACKFILL 0x006DC4E0  VectorClass_UDirtyAreaStruct::Destroy  cls=VectorClass_UDirtyAreaStruct  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::Destroy(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC4E0.json)
}

// ==== BACKFILL 0x006DC510  VectorClass_UDirtyAreaStruct::GetItemIndex  cls=VectorClass_UDirtyAreaStruct  sig=csp  renamed_refs=0  residual=- ====
unsigned int VectorClass_flat::GetItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC510.json)
}

// ==== BACKFILL 0x006DC970  VectorClass_UDirtyAreaStruct::FindItemIndex  cls=VectorClass_UDirtyAreaStruct  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::FindItemIndex(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DC970.json)
}

// ==== BACKFILL 0x006DD2C0  TActionClass::ExecuteAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
int TActionClass::ExecuteAction(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DD2C0.json)
}
