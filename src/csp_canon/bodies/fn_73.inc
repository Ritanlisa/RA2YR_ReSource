// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00730400  LoadingScreen::FreeResources  cls=LoadingScreen  sig=csp  renamed_refs=0  residual=- ====
char LoadingScreen::FreeResources(void *a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x730400)
}

// ==== BACKFILL 0x00730970  WinMainSetup_Setup_730970  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_730970()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x730970)
}

// ==== BACKFILL 0x00730A10  SidebarCountAvailableUnits  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_730A10::SidebarCountAvailableUnits() {

  int v1; // ebx
  int v2; // ebp
  int v3; // edi
  int v4; // esi
  int v5; // ecx
  char IsHumanPlayer; // al

  v1 = dword_A8EC88; /*0x730a12*/
  v2 = 0; /*0x730a1a*/
  v3 = 0; /*0x730a1c*/
  if ( dword_A8EC88 <= 0 ) /*0x730a24*/
    return 0; /*0x730a7a*/
  do /*0x730a70*/
  {
    v4 = *((unsigned int *)dword_A8EC7C + v3); /*0x730a2c*/
    if ( v4 && !*(unsigned char *)(v4 + 129) ) /*0x730a33*/
    {
      v5 = *(unsigned int *)(v4 + 540); /*0x730a42*/
      if ( dword_A8B238[0] ) /*0x730a4a*/
        IsHumanPlayer = House::IsHumanPlayer((void *)v5); /*0x730a54*/
      else
        IsHumanPlayer = *(unsigned char *)(v5 + 493); /*0x730a4c*/
      if ( IsHumanPlayer ) /*0x730a5b*/
      {
        if ( *(char **)(v4 + 532) == this - 1 ) /*0x730a6a*/
          ++v2; /*0x730a6c*/
      }
    }
    ++v3; /*0x730a6d*/
  }
  while ( v3 < v1 ); /*0x730a70*/
  return v2; /*0x730a75*/

}

// ==== BACKFILL 0x007310D0  SidebarClearReferences  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_7310D0::SidebarClearReferences() {

  int v1; // ebx
  int i; // edi
  int v4; // esi
  int v5; // ecx
  char IsHumanPlayer; // al

  v1 = dword_A8EC88; /*0x7310d1*/
  for ( i = 0; i < v1; ++i ) /*0x7310df*/
  {
    v4 = *((unsigned int *)dword_A8EC7C + i); /*0x7310e7*/
    if ( v4 ) /*0x7310ec*/
    {
      v5 = *(unsigned int *)(v4 + 540); /*0x7310f3*/
      if ( dword_A8B238[0] ) /*0x7310fb*/
        IsHumanPlayer = House::IsHumanPlayer((void *)v5); /*0x731105*/
      else
        IsHumanPlayer = *(unsigned char *)(v5 + 493); /*0x7310fd*/
      if ( IsHumanPlayer ) /*0x73110c*/
      {
        if ( *(char **)(v4 + 532) == this - 1 ) /*0x731119*/
          *(unsigned int *)(v4 + 532) = -1; /*0x73111b*/
      }
    }
  }

}

// ==== BACKFILL 0x007313A0  TacticalClass::ResetView  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::ResetView() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 5 errs): wrong-universe gap2 body; truth func_0x7313A0.json */
}

// ==== BACKFILL 0x00731CB0  Map_Handle_731CB0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_731CB0()
{
  return 71; /*0x731cb5*/
}

// ==== BACKFILL 0x00731CC0  Map_Handle_731CC0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_731CC0()
{
  return 22; /*0x731cc5*/
}

// ==== BACKFILL 0x00731D00  Selection::SetCurrent  cls=Selection  sig=csp  renamed_refs=0  residual=- ====
int Selection::SetCurrent()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x731D00)
}

// ==== BACKFILL 0x00731D90  FillUnitTooltipUI  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t * FillUnitTooltipUI(wchar_t * Destination, wchar_t * Source)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x731D90)
}

// ==== BACKFILL 0x00732210  SelectFactionThemeMusic_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_732210(int a1, const char * a2)
{
  int v2; // eax
  int v3; // edi
  const char **i; // ebp

  v2 = *(unsigned int *)(a1 + 16); /*0x732211*/
  v3 = 0; /*0x732218*/
  if ( v2 <= 0 ) /*0x732220*/
    return -1; /*0x732261*/
  for ( i = *(const char ***)(a1 + 4); strcmp(a2, *i); ++i ) /*0x732222*/
  {
    if ( ++v3 >= v2 ) /*0x73225f*/
      return -1; /*0x73225f*/
  }
  return v3; /*0x732261*/
}

// ==== BACKFILL 0x007325C0  sub_7325C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_7325C0::sub_7325C0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7325C0)
}

// ==== BACKFILL 0x00732600  PlayerClass::UpdateAIUnits  cls=PlayerClass  sig=csp  renamed_refs=0  residual=- ====
int PlayerClass::UpdateAIUnits() {
  int HeightMap; // eax
  EventClass *v2; // esi
  int v3; // ebp
  int v4; // ebx
  int v5; // edi
  void *EventClass_field_0x8; // ecx
  unsigned int *EventClass_field_0x4; // edx
  EventClass *v8; // eax
  int v9; // ebp
  int i; // edi
  int v11; // ebp
  int j; // edi
  int v13; // ecx
  int v16; // [esp+14h] [ebp-4h] BYREF

  if ( g_BuildingLoadQueue_Array.__pad_1624[0] ) /*0x732613*/
  {
    HeightMap = RA2_OPNEW(0x18u); /*0x732619*/
    v2 = (EventClass *)HeightMap; /*0x73261e*/
    v3 = 0; /*0x732620*/
    if ( HeightMap ) /*0x732627*/
    {
      (HeightMap) = ((HeightMap) & ~0xFF) | (((uint8_t)EventClass::resetEvent((EventClass *)HeightMap, 0, 0)) & 0xFF); /*0x73262d*/
      v2->EventClass_field_0x0 = (int)(void *)&DynamicVectorClass_TechnoClass___vftable; /*0x732632*/
      *(unsigned int *)&v2->__pad_10[4] = 10; /*0x732638*/
      *(unsigned int *)v2->__pad_10 = 0; /*0x73263f*/
    }
    else
    {
      v2 = 0; /*0x732644*/
    }
    v4 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 164); /*0x732647*/
    if ( *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) > 0 ) /*0x73264f*/
    {
      do /*0x7326a6*/
      {
        v5 = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v3); /*0x73265a*/
        (HeightMap) = ((HeightMap) & ~0xFF) | ((StepTechnoClassCleanupIfHuman(v5, this)) & 0xFF); /*0x73265f*/
        if ( (unsigned char)HeightMap ) /*0x732666*/
        {
          EventClass_field_0x8 = v2->EventClass_field_0x8; /*0x732668*/
          if ( *(unsigned int *)v2->__pad_10 < (int)EventClass_field_0x8 /*0x732692*/
            || (((HeightMap) = ((HeightMap) & ~0xFF) | (((((v2->EventClass_field_0xC) >> 8) & 0xFF)) & 0xFF), (unsigned char)HeightMap) || !EventClass_field_0x8)
            && (HeightMap = *(unsigned int *)&v2->__pad_10[4], HeightMap > 0)
            && (IDA_LOBYTE(HeightMap) = (*(int (**)(EventClass *, int, unsigned int))(v2->EventClass_field_0x0 + 8))(
                                      v2,
                                      (int)EventClass_field_0x8 + HeightMap,
                                      0),
                (unsigned char)HeightMap) )
          {
            HeightMap = *(unsigned int *)v2->__pad_10; /*0x732694*/
            EventClass_field_0x4 = v2->EventClass_field_0x4; /*0x732697*/
            *(unsigned int *)v2->__pad_10 = HeightMap + 1; /*0x73269d*/
            EventClass_field_0x4[HeightMap] = v5; /*0x7326a0*/
          }
        }
        ++v3; /*0x7326a3*/
      }
      while ( v3 < v4 ); /*0x7326a6*/
    }
  }
  else
  {
    v8 = (EventClass *)RA2_OPNEW(0x18u); /*0x7326ae*/
    v2 = v8; /*0x7326b3*/
    if ( v8 ) /*0x7326ba*/
    {
      EventClass::resetEvent(v8, 0, 0); /*0x7326c2*/
      v2->EventClass_field_0x0 = (int)(void *)&DynamicVectorClass_TechnoClass___vftable; /*0x7326c7*/
      *(unsigned int *)&v2->__pad_10[4] = 10; /*0x7326cd*/
      *(unsigned int *)v2->__pad_10 = 0; /*0x7326d4*/
    }
    else
    {
      v2 = 0; /*0x7326dd*/
    }
    HeightMap = GetHeightMap((ObjectClass *)g_TacticalClass_Instance); /*0x7326e5*/
    v9 = HeightMap; /*0x7326ea*/
    for ( i = 0; i < v9; ++i ) /*0x7326f0*/
    {
      HeightMap = GetCoordDataMap(i); /*0x7326f9*/
      if ( HeightMap ) /*0x732700*/
      {
        if ( (*(unsigned char *)(HeightMap + 20) & 1) != 0 ) /*0x73270c*/
        {
          v16 = HeightMap; /*0x732714*/
          (HeightMap) = ((HeightMap) & ~0xFF) | ((StepTechnoClassCleanupIfHuman(HeightMap, this)) & 0xFF); /*0x732718*/
          if ( (unsigned char)HeightMap ) /*0x73271f*/
            (HeightMap) = ((HeightMap) & ~0xFF) | ((DynamicVector::AddItem((DynamicVector *)v2, &v16)) & 0xFF); /*0x732728*/
        }
      }
    }
  }
  v11 = *(unsigned int *)v2->__pad_10; /*0x732732*/
  for ( j = 0; j < v11; ++j ) /*0x732739*/
  {
    v13 = *((unsigned int *)v2->EventClass_field_0x4 + j); /*0x73273e*/
    IDA_LOBYTE(HeightMap) = (*(int (**)(int))(*(unsigned int *)v13 + 336))(v13); /*0x732743*/
  }
  if ( v2 ) /*0x732750*/
    IDA_LOBYTE(HeightMap) = (*(char (**)(EventClass *, int))v2->EventClass_field_0x0)(v2, 1); /*0x732758*/
  return HeightMap; /*0x73275a*/
}

// ==== BACKFILL 0x00732C30  IDTechnoClassMatches  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char IDTechnoClassMatches(void * a1, int a2)
{
  int v3; // ebp
  int v4; // edi

  v3 = *(unsigned int *)(a2 + 16); /*0x732c35*/
  v4 = 0; /*0x732c39*/
  if ( v3 <= 0 ) /*0x732c3f*/
    return 0; /*0x732c8a*/
  while ( !(uint8_t)((ObjectClass *)(a1))->StepCleanup(*(void **)(*(unsigned int *)(a2 + 4) + 4 * v4)) /*0x732c83*/
       || !(*((uint8_t (**)(ObjectClass *))a1->vtable1 + 79))(a1)
       && (!a1
        || (*((int (**)(ObjectClass *))a1->vtable1 + 11))(a1) != 6
        || !*(unsigned int *)((*((int (**)(ObjectClass *))a1->vtable1 + 33))(a1) + 1032)) )
  {
    if ( ++v4 >= v3 ) /*0x732c88*/
      return 0; /*0x732c88*/
  }
  return 1; /*0x732c8a*/
}

// ==== BACKFILL 0x00733160  AbstractClass::processRadarEvent  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::processRadarEvent() {
}

// ==== BACKFILL 0x00733C60  Object_Helper_733C60  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_733C60(int a1, const char * a2)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00733C60.json)
}

// ==== BACKFILL 0x00734250  SidebarClass::registerBuildingType  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
int SidebarClass::registerBuildingType() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x734250.json */
}

// ==== BACKFILL 0x00734270  Selection::ClearGlobals  cls=Selection  sig=csp  renamed_refs=0  residual=- ====
int Selection::ClearGlobals()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x734270)
}

// ==== BACKFILL 0x007342D0  DynamicVector::Constructor_Techno  cls=DynamicVector  sig=csp  renamed_refs=0  residual=DynamicVector_field_0x1 ====
unsigned int * DynamicVector::Constructor_Techno(int a2, int a3)
{

  *(unsigned int *)&(&this->DynamicVector_field_0x1)[3] = 0; /*0x7342d9*/
  this->DynamicVector_field_0x8 = a2; /*0x7342e0*/
  this->__pad_C[0] = 1; /*0x7342e3*/
  this->__pad_C[1] = (unsigned int)(0); /*0x7342e7*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x7342eb*/
  if ( a2 ) /*0x7342f1*/
  {
    if ( a3 ) /*0x7342f9*/
    {
      *(unsigned int *)&(&this->DynamicVector_field_0x1)[3] = a3; /*0x7342fb*/
    }
    else
    {
      *(unsigned int *)&(&this->DynamicVector_field_0x1)[3] =(unsigned int)__2_YAPAXI_Z(4 * a2); /*0x73430c*/
      this->__pad_C[1] = 1; /*0x73430f*/
    }
  }
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_DynamicVectorClass); /*0x734313*/
  *(unsigned int *)this->__pad_14 = 10; /*0x734319*/
  this->DynamicVector_field_0x10 = 0; /*0x734320*/
  return this->__pad_0; /*0x734329*/

}

// ==== BACKFILL 0x007343E0  TacticalClass::updateScroll  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
void* TacticalClass::updateScroll(int a2, int a3) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x7343E0.json */
}

// ==== BACKFILL 0x00734FE0  WideMessageBox  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int WideMessageBox(CampaignScore * aP0, const WCHAR * a1, LPCWCH lpWideCharStr, UINT uType)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x734FE0)
}

// ==== BACKFILL 0x00735060  BulkCharToWide  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char CharToWide_Bulk(unsigned short * a1, unsigned char * a2, int a3)
{
  uint8_t result; // al

  for ( result = *a2; *a2; result = *a2 ) /*0x735060*/
  {
    if ( !a3 ) /*0x73506d*/
      break; /*0x73506d*/
    *a1++ = result; /*0x735073*/
    ++a2; /*0x735079*/
    if ( a3 != -1 ) /*0x73507d*/
      --a3; /*0x73507f*/
  }
  *a1 = 0; /*0x735086*/
  return result; /*0x73508b*/
}

// ==== BACKFILL 0x00735090  CopyWideToChar  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void WideToChar_Copy(unsigned char * a1, char * a2, int a3)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x735090)
}

// ==== BACKFILL 0x007350C0  ToWideStringChar  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * ToWideStringChar(IUnknown * aP0)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7350C0)
}

// ==== BACKFILL 0x00736C10  sub_736C10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_736C10::sub_736C10()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x736C10)
}
