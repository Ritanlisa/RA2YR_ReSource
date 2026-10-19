// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006E0030  sub_6E0030  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_6E0030(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e0032*/
}

// ==== BACKFILL 0x006E0040  sub_6E0040  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_6E0040(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e0042*/
}

// ==== BACKFILL 0x006E0080  sub_6E0080  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6E0080::sub_6E0080(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E0080)
}

// ==== BACKFILL 0x006E0110  ScenarioClass::Create  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::Create(int a1, int a2, int a3, int a4) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006E01C0  globalHelper_0E01C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_0E01C0(int a1, int a2, int aP1, IUnknown * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E01C0)
}

// ==== BACKFILL 0x006E0490  PlayWaypointEffect  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_6E0490::PlayWaypointEffect(int a2, int a3, int a4, IUnknown * aP4) {

  int *WorldCoords; // eax
  unsigned int *v7; // eax
  int *v8; // eax
  unsigned int *v9; // eax
  int *v10; // eax
  unsigned int *v11; // eax
  int *v12; // eax
  unsigned int *v13; // eax
  int *v14; // eax
  int v15; // esi
  int v16; // edx
  int16_t v18[2]; // [esp+8h] [ebp-38h] BYREF
  int v19; // [esp+Ch] [ebp-34h] BYREF
  int v20; // [esp+10h] [ebp-30h] BYREF
  int v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  int v23; // [esp+1Ch] [ebp-24h] BYREF
  int v24; // [esp+20h] [ebp-20h]
  int v25; // [esp+24h] [ebp-1Ch]
  unsigned int v26[3]; // [esp+28h] [ebp-18h] BYREF
  unsigned int v27[3]; // [esp+34h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, &v20, *(unsigned int *)&this->isAliveFlag); /*0x6e04a9*/
  v23 = *WorldCoords; /*0x6e04b2*/
  v24 = WorldCoords[1]; /*0x6e04bb*/
  v25 = WorldCoords[2]; /*0x6e04c7*/
  PlaySoundEffectAt(&v23, 100, 0, *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e04dd*/
  v7 = Cell::GetWorldCoords((Cell *)dword_A8B230, &v20, *(unsigned int *)&this->isAliveFlag); /*0x6e04f4*/
  v8 = Coord::Subtract((Coord *)v26, *v7 + 85, v7[1] + 85, v7[2]); /*0x6e0510*/
  v23 = *v8; /*0x6e0519*/
  v24 = v8[1]; /*0x6e0528*/
  v25 = v8[2]; /*0x6e052f*/
  PlaySoundEffectAt(&v23, 100, 0, *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e0545*/
  v9 = Cell::GetWorldCoords((Cell *)dword_A8B230, v26, *(unsigned int *)&this->isAliveFlag); /*0x6e055c*/
  v10 = Coord::Subtract((Coord *)&v20, *v9 - 85, v9[1] + 85, v9[2]); /*0x6e0578*/
  v23 = *v10; /*0x6e0581*/
  v24 = v10[1]; /*0x6e058a*/
  v25 = v10[2]; /*0x6e0591*/
  PlaySoundEffectAt(&v23, 100, 0, *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e05ad*/
  Coord::Subtract((Coord *)&v23, 85, -85, 0); /*0x6e05bc*/
  v11 = Cell::GetWorldCoords((Cell *)dword_A8B230, v26, *(unsigned int *)&this->isAliveFlag); /*0x6e05d3*/
  v12 = Coord::Subtract((Coord *)v27, *v11 + v23, v11[1] + v24, v11[2] + v25); /*0x6e05fb*/
  v20 = *v12; /*0x6e0604*/
  v21 = v12[1]; /*0x6e060d*/
  v22 = v12[2]; /*0x6e0619*/
  PlaySoundEffectAt(&v20, 100, 0, *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e062f*/
  v13 = Cell::GetWorldCoords((Cell *)dword_A8B230, v27, *(unsigned int *)&this->isAliveFlag); /*0x6e0646*/
  v14 = Coord::Subtract((Coord *)v26, *v13 - 85, v13[1] - 85, v13[2]); /*0x6e0662*/
  v23 = *v14; /*0x6e066b*/
  v24 = v14[1]; /*0x6e067a*/
  v25 = v14[2]; /*0x6e0681*/
  PlaySoundEffectAt(&v23, 100, 0, *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008), 1, 0); /*0x6e0697*/
  if ( (uint8_t)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, *(unsigned int *)&this->isAliveFlag) ) /*0x6e06a9*/
  {
    *(unsigned int *)v18 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, *(unsigned int *)&this->isAliveFlag); /*0x6e06d9*/
    v15 = 3; /*0x6e06dd*/
    if ( !(uint8_t)CellClass::SetTerrainType((CellClass *)&stru_87F5F0.__pad_58[416], v18) ) /*0x6e06e2*/
    {
      do /*0x6e0703*/
        v16 = v15--; /*0x6e06eb*/
      while ( v16 > 0 && !(uint8_t)CellClass::SetTerrainType((CellClass *)&stru_87F5F0.__pad_58[416], v18) ); /*0x6e0703*/
    }
    v24 = (v18[1] << 8) + 128; /*0x6e0722*/
    v23 = (v18[0] << 8) + 128; /*0x6e0730*/
    v25 = dword_B0E6D4; /*0x6e073c*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v23, &v20); /*0x6e0748*/
    Cell::CreateCrater(v20 - 128, v21 - 128, 256, 256, 0); /*0x6e077a*/
  }
  return 1; /*0x6e077f*/

}

// ==== BACKFILL 0x006E0790  sub_6E0790  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6E0790::sub_6E0790(int a2, int a3, int a4, int a5)
{

  int v5; // esi
  int *WorldCoords; // eax
  unsigned int v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x6e07a3*/
  WorldCoords = (int *)(((Cell *)((Cell *)dword_A8B230))->GetWorldCoords(v8, *(unsigned int *)&((unsigned int *)this)[44])); /*0x6e07b5*/
  CreateSmokeEffectAt(50, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e07d6*/
  return 1; /*0x6e07dd*/

}

// ==== BACKFILL 0x006E07F0  sub_6E07F0  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6E07F0::sub_6E07F0(int a2, int a3, int a4, int a5)
{

  int v5; // esi
  int *WorldCoords; // eax
  unsigned int v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x6e0803*/
  WorldCoords = (int *)(((Cell *)((Cell *)dword_A8B230))->GetWorldCoords(v8, *(unsigned int *)&((unsigned int *)this)[44])); /*0x6e0815*/
  CreateSmokeEffectAt(100, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e0836*/
  return 1; /*0x6e083d*/

}

// ==== BACKFILL 0x006E0850  sub_6E0850  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6E0850::sub_6E0850(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E0850)
}

// ==== BACKFILL 0x006E0AA0  TActionClass::executeEnterAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeEnterAction(int a2, int _10, unsigned int * a3, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E0AA0.json)
}

// ==== BACKFILL 0x006E0CA0  TActionClass::executeCaptureAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeCaptureAction(void * a1, int _C, unsigned int * a3, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E0CA0.json)
}

// ==== BACKFILL 0x006E0D00  TActionClass::executeSabotageAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeSabotageAction(unsigned int * a1, int _C, unsigned int * a3, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E0D00.json)
}

// ==== BACKFILL 0x006E0FE0  TActionClass::RevealWaypointArea  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::RevealWaypointArea(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E0FE0.json)
}

// ==== BACKFILL 0x006E1180  sub_6E1180  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6E1180::sub_6E1180(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E1180)
}

// ==== BACKFILL 0x006E11C0  TActionClass::RevealTileTypeAtWaypoint  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::RevealTileTypeAtWaypoint(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E11C0.json)
}

// ==== BACKFILL 0x006E14A0  ProcessDataObjectClass  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_6E14A0::ProcessDataObjectClass(int a2, int a3, int a4, int a5) {

  void **p_vtable3; // eax
  int abstractFlags; // edx
  void *vtable3; // esi
  int v8; // edi
  void *v9; // edx
  int v10; // ecx
  void *v11; // esi
  int v12; // ecx
  void *v14; // [esp+10h] [ebp-8h]

  p_vtable3 = &dword_A8B230[127].vtable3; /*0x6e14a8*/
  abstractFlags = dword_A8B230[127].abstractFlags; /*0x6e14b4*/
  vtable3 = dword_A8B230[127].vtable3; /*0x6e14b8*/
  if ( vtable3 != (void *)-1 ) /*0x6e14be*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (int)vtable3 >= abstractFlags ) /*0x6e14c6*/
      abstractFlags = 0; /*0x6e14cc*/
    else
      abstractFlags -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (unsigned int)vtable3; /*0x6e14c8*/
  }
  v8 = 15 * *(unsigned int *)&this->isAliveFlag; /*0x6e14d7*/
  if ( abstractFlags > v8 ) /*0x6e14dc*/
  {
    v11 = *p_vtable3; /*0x6e14e8*/
    v12 = dword_A8B230[127].abstractFlags; /*0x6e14ea*/
    if ( *p_vtable3 != (void *)-1 ) /*0x6e14f0*/
    {
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (int)v11 >= v12 ) /*0x6e14f8*/
        v12 = 0; /*0x6e14fe*/
      else
        v12 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (unsigned int)v11; /*0x6e14fa*/
    }
    v9 = v14; /*0x6e1500*/
    v10 = v12 - v8; /*0x6e1504*/
    *p_vtable3 = *(void **)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6e1506*/
  }
  else
  {
    v9 = v14; /*0x6e14de*/
    v10 = 0; /*0x6e14e2*/
    *p_vtable3 = *(void **)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6e14e4*/
  }
  p_vtable3[1] = v9; /*0x6e1508*/
  p_vtable3[2] = (void *)v10; /*0x6e150b*/
  ObjectClass::PreDraw((ObjectClass *)&stru_87F5F0.__pad_58[416]); /*0x6e1513*/
  return 1; /*0x6e1518*/

}

// ==== BACKFILL 0x006E1530  ScenarioClass::PrepareTextDisplay  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::PrepareTextDisplay(int a1, int a2, int a3, int a4) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006E1780  TActionClass::PlayAudioAtRandomWP  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::PlayAudioAtRandomWP(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E1780.json)
}

// ==== BACKFILL 0x006E18B0  CellClass::Find  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::Find(int a2, int a3, int a4, int a5) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 11 errs): wrong-universe gap2 body; truth func_0x6E18B0.json */
}

// ==== BACKFILL 0x006E1980  TActionClass::executeGuardAreaAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeGuardAreaAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E1980.json)
}

// ==== BACKFILL 0x006E1A40  TActionClass::executePatrolAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executePatrolAction(void * a1, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E1A40.json)
}

// ==== BACKFILL 0x006E1A70  TActionClass::executeScatterAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeScatterAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E1A70.json)
}

// ==== BACKFILL 0x006E1BD0  ScenarioClass::UpdateCounters  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::UpdateCounters(int a2, int a3, int a4, int a5) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 9 errs): wrong-universe gap2 body; truth func_0x6E1BD0.json */
}

// ==== BACKFILL 0x006E1C40  SuperClass::Get  cls=SuperClass  sig=csp  renamed_refs=0  residual=- ====
char SuperClass::Get(int a2, int a3, int a4, int a5) {
    int Status; // eax

    ((SuperClass *)*(unsigned int *)(*(unsigned int *)(a2 + 600) + 4 * *(unsigned int *)((char *)this + 144)))->StartTimer(0, 0, 0); /*0x6e1c5d 真值 [esi+90h]*/
    *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(a2 + 600) + 4 * *(unsigned int *)&this->__pad_80[16]) + 96) = 0; /*0x6e1c71*/
    if ( (Object *)dword_A83D4C == (Object *)(unsigned int)a2 ) /*0x6e1c7c*/
    {
      ((SidebarClass *)((char *)&stru_87F5F0 + 600))->AddCameo((AbstractType)31, *(unsigned int *)((char *)this + 144)); /*0x6e1c8c 真值 this=0x87F7E8*/
      Status = HouseClass::GetStatus((HouseClass *)0x1F, 0); /*0x6e1c9e e4 静态 varargs*/
      ((Sidebar *)((char *)&stru_87F5F0 + 600))->ActivateTab(Status); /*0x6e1ca9*/
    }
    return 1; /*0x6e1cae*/
}

// ==== BACKFILL 0x006E21D0  sub_6E21D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_6E21D0(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e21d2*/
}

// ==== BACKFILL 0x006E21E0  TActionClass::executeFollowAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeFollowAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E21E0.json)
}

// ==== BACKFILL 0x006E2520  TActionClass::executeLoadAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeLoadAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E2520.json)
}

// ==== BACKFILL 0x006E2660  SmallFunc_6E2660  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_6E2660(int a1, int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E2660)
}

// ==== BACKFILL 0x006E26D0  ScenarioClass::Set  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::Set(int a2, int a3, int a4, int a5) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 8 errs): wrong-universe gap2 body; truth func_0x6E26D0.json */
}

// ==== BACKFILL 0x006E2970  BuildingLightClass::FindAllTargets  cls=BuildingLightClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingLightClass::FindAllTargets(int a1, int a2, int a3, int a4)
{
    (void)a1; (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E2970.json)
}

// ==== BACKFILL 0x006E2A50  sub_6E2A50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6E2A50::sub_6E2A50(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E2A50)
}

// ==== BACKFILL 0x006E2AF0  TActionClass::executeUnloadAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeUnloadAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E2AF0.json)
}

// ==== BACKFILL 0x006E2C20  globalHelper_0E2C20  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_0E2C20(int a1, int a2, int a3, IUnknown * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E2C20)
}

// ==== BACKFILL 0x006E2E60  TActionClass::executeSelfDestructAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeSelfDestructAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E2E60.json)
}

// ==== BACKFILL 0x006E2EB0  TActionClass::executeExplodeAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeExplodeAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E2EB0.json)
}

// ==== BACKFILL 0x006E2F00  TActionClass::executeChronoshiftAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeChronoshiftAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E2F00.json)
}

// ==== BACKFILL 0x006E3120  SmallFunc_6E3120  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char SmallFunc_6E3120(int _8, void ** a1, unsigned int * a2, IUnknown * aP3, int _18, unsigned int * a5, int a7, void * a3, void * a4, void * a6)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E3120)
}

// ==== BACKFILL 0x006E3180  TActionClass::executePlaceBeaconAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executePlaceBeaconAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E3180.json)
}

// ==== BACKFILL 0x006E31E0  TActionClass::executeJumpjetAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeJumpjetAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E31E0.json)
}

// ==== BACKFILL 0x006E3240  TActionClass::executeOpenGateAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeOpenGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E3240.json)
}

// ==== BACKFILL 0x006E32A0  TActionClass::executeCloseGateAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeCloseGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E32A0.json)
}

// ==== BACKFILL 0x006E3410  TActionClass::CreateNukeEffect  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::CreateNukeEffect(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E3410.json)
}

// ==== BACKFILL 0x006E35F0  sub_6E35F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6E35F0::sub_6E35F0(void * a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E35F0)
}

// ==== BACKFILL 0x006E3B40  TActionClass::executeLightningAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeLightningAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E3B40.json)
}

// ==== BACKFILL 0x006E3D70  TActionClass::ddtor  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
int TActionClass::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E3D70.json)
}

// ==== BACKFILL 0x006E3DB0  TActionClass::SaveLoad_Prefix  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
int TActionClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E3DB0.json)
}

// ==== BACKFILL 0x006E3E30  TActionClass::SaveLoad_Prefix_0  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
int TActionClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E3E30.json)
}

// ==== BACKFILL 0x006E3E50  TActionClass::Validate  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
int TActionClass::Validate(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E3E50.json)
}

// ==== BACKFILL 0x006E3EE0  TriggerTypeClass::Dispatch  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::Dispatch() {
    int result; // eax

    result = 0; /*0x6e3ee3*/
    switch ( (unsigned int)this ) /*0x6e3ef2*/
    {
      case 0xEu: /*0x6e3ef2*/
      case 0x20u: /*0x6e3ef2*/
      case 0x3Cu: /*0x6e3ef2*/
      case 0x3Du: /*0x6e3ef2*/
      case 0x3Eu: /*0x6e3ef2*/
      case 0x5Bu: /*0x6e3ef2*/
      case 0x6Fu: /*0x6e3ef2*/
        result = 2; /*0x6e3ef9*/
        break; /*0x6e3ef9*/
      default:
        return result;
    }
    return result; /*0x6e3efe*/
}

// ==== BACKFILL 0x006E3F70  sub_6E3F70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6E3F70::sub_6E3F70(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E3F70)
}

// ==== BACKFILL 0x006E4100  TActionClass::executePsychicDominatorAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executePsychicDominatorAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E4100.json)
}

// ==== BACKFILL 0x006E4200  TActionClass::executeForceShieldAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeForceShieldAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E4200.json)
}

// ==== BACKFILL 0x006E4360  TActionClass::executeSpyPlaneAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeSpyPlaneAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E4360.json)
}

// ==== BACKFILL 0x006E43A0  TActionClass::executeChronoSphereAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeChronoSphereAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E43A0.json)
}

// ==== BACKFILL 0x006E43E0  TActionClass::executeWeatherStormAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeWeatherStormAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E43E0.json)
}

// ==== BACKFILL 0x006E4440  globalHelper_0E4440  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_0E4440(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E4440)
}

// ==== BACKFILL 0x006E4460  TActionClass::executeDominatorAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeDominatorAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E4460.json)
}

// ==== BACKFILL 0x006E44C0  globalHelper_0E44C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_0E44C0(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E44C0)
}

// ==== BACKFILL 0x006E44E0  TActionClass::executeRevealAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeRevealAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E44E0.json)
}

// ==== BACKFILL 0x006E4540  globalHelper_0E4540  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_0E4540(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E4540)
}

// ==== BACKFILL 0x006E4560  TActionClass::executeEMPulseAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
char TActionClass::executeEMPulseAction(int a2, int a3, int a4, IUnknown * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E4560.json)
}

// ==== BACKFILL 0x006E45E0  ObjectClass::FindOwner  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::FindOwner(unsigned int * a0, AnimClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E45E0.json)
}

// ==== BACKFILL 0x006E4630  TActionClass::StubReturn148  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
int TActionClass::StubReturn148()
{

  return 148; /*0x6e4635*/

}

// ==== BACKFILL 0x006E4640  TActionClass::StubReturn47  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
int TActionClass::StubReturn47()
{

  return 47; /*0x6e4645*/

}

// ==== BACKFILL 0x006E4650  TActionClass::Stub  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
int TActionClass::Stub()
{

  return this->idxArray; /*0x6e4653*/

}

// ==== BACKFILL 0x006E47C0  ScriptAction::CopyStructField  cls=ScriptAction  sig=csp  renamed_refs=0  residual=- ====
void * ScriptAction::CopyStructField(void *a2, const void *a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E47C0.json)
}

// ==== BACKFILL 0x006E47F0  Tactical_42::ClearBuffer  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
void Tactical_42::ClearBuffer(void *a1_1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E47F0)
}

// ==== BACKFILL 0x006E4820  Tactical_42::PointerToIndex  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
unsigned int Tactical_42::PointerToIndex(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E4820)
}

// ==== BACKFILL 0x006E49D0  Tactical_42::SetCapacity  cls=Tactical  sig=csp  renamed_refs=0  residual=- ====
char Tactical_42::SetCapacity(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E49D0)
}

// ==== BACKFILL 0x006E5290  sub_6E5290  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6E5290::sub_6E5290()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E5290)
}

// ==== BACKFILL 0x006E5560  ScenarioClass::checkMissionObjectives  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::checkMissionObjectives(int a2) {

  this->nextScenario[12] = a2; /*0x6e5564*/
  return a2; /*0x6e5567*/

}

// ==== BACKFILL 0x006E5570  Map_Reset_6E5570  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_6E5570()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E5570.json)
}

// ==== BACKFILL 0x006E5610  TagClass::CheckEvent  cls=TagClass  sig=csp  renamed_refs=0  residual=- ====
int TagClass::CheckEvent(int a2, TagTypeClass * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E5610)
}

// ==== BACKFILL 0x006E56A0  TagClass::ddtor  cls=TagClass  sig=csp  renamed_refs=0  residual=- ====
int TagClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6e56a6*/
    return -2147467261; /*0x6e56a8*/
  *a2 = 1425466418; /*0x6e56b6*/
  a2[1] = 298977773; /*0x6e56be*/
  a2[2] = 1610655148; /*0x6e56c7*/
  a2[3] = unk_7E97CC; /*0x6e56d0*/
  return 0; /*0x6e56ad*/

}

// ==== BACKFILL 0x006E56E0  TagClass::ProcessTag  cls=TagClass  sig=csp  renamed_refs=0  residual=- ====
int TagClass::ProcessTag(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E56E0)
}

// ==== BACKFILL 0x006E5730  TagClass::LoadTag  cls=TagClass  sig=csp  renamed_refs=0  residual=- ====
int TagClass::LoadTag(AbstractClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x6e573b*/
  if ( result >= 0 ) /*0x6e5742*/
  {
    if ( aP0 ) /*0x6e5746*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x6e574f*/
      /* X11: vtable install elided (implicit via TagClass virtuals 0x6e5754) */
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F44B4); /*0x6e575a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F44B4); /*0x6e5761*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F44B4); /*0x6e5768*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->buildingType); /*0x6e5778*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->firstTrigger); /*0x6e5786*/
    return 0; /*0x6e578b*/
  }
  return result; /*0x6e578d*/

}

// ==== BACKFILL 0x006E57A0  TagClass::SaveTag  cls=TagClass  sig=csp  renamed_refs=0  residual=- ====
int TagClass::SaveTag(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x6e57af*/
  if ( result >= 0 ) /*0x6e57b6*/
    return 0; /*0x6e57b8*/
  return result; /*0x6e57ba*/

}

// ==== BACKFILL 0x006E57DE  ?do_always_noconv_codecvt_base_std__MBE_NXZ_18  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_18()
{

  return 1; /*0x6e57e0*/

}

// ==== BACKFILL 0x006E5820  TriggerActionQueue::ProcessAll  cls=TriggerActionQueue  sig=csp  renamed_refs=0  residual=- ====
int TriggerActionQueue::ProcessAll()
{

  int result; // eax
  int i; // esi

  result = g_GameObjectCleanup; /*0x6e5820*/
  for ( i = 0; i < g_GameObjectCleanup; ++i ) /*0x6e582d*/
  {
    TriggerClass::NotifyLocalChanged(*(TriggerClass **)(*((unsigned int *)g_TagClassCount + i) + 40), (int)this); /*0x6e583b*/
    result = g_GameObjectCleanup; /*0x6e5840*/
  }
  return result; /*0x6e584a*/

}

// ==== BACKFILL 0x006E5890  TagClass::StubReturn56  cls=TagClass  sig=csp  renamed_refs=0  residual=- ====
int TagClass::StubReturn56()
{

  return 56; /*0x6e5895*/

}

// ==== BACKFILL 0x006E58A0  TagClass::StubReturn44  cls=TagClass  sig=csp  renamed_refs=0  residual=- ====
int TagClass::StubReturn44()
{

  return 44; /*0x6e58a5*/

}

// ==== BACKFILL 0x006E58B0  TagClass::ProcessTrigger  cls=TagClass  sig=csp  renamed_refs=0  residual=- ====
TagClass * TagClass::ProcessTrigger(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E58B0)
}

// ==== BACKFILL 0x006E5E70  ObjectTypeClass::FindByName  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::FindByName()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E5E70.json)
}

// ==== BACKFILL 0x006E63A0  TagTypeClass::GetClassIdentifier  cls=TagTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TagTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6e63a6*/
    return -2147467261; /*0x6e63a8*/
  *a2 = 1425466419; /*0x6e63b6*/
  a2[1] = 298977773; /*0x6e63be*/
  a2[2] = 1610655148; /*0x6e63c7*/
  a2[3] = unk_7E97DC; /*0x6e63d0*/
  return 0; /*0x6e63ad*/

}

// ==== BACKFILL 0x006E6410  TagTypeClass::LoadTypeData  cls=TagTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TagTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((gamemd::AbstractClass *)(aP0),(gamemd::AbstractClass *)(aP1)); /*0x6e641b*/
  if ( result >= 0 ) /*0x6e6422*/
  {
    if ( aP0 ) /*0x6e6426*/
    {
      ((AbstractTypeClass*)((int)aP0))->Init((int)&aP1); /*0x6e642f*/
      /* X11: vtable install elided (implicit via TagTypeClass virtuals 0x6e6434) */
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F4598); /*0x6e643a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F4598); /*0x6e6441*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F4598); /*0x6e6448*/
    }
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 40); /*0x6e645b*/
    return 0; /*0x6e6460*/
  }
  return result; /*0x6e6462*/

}

// ==== BACKFILL 0x006E6470  TagTypeClass::SaveToINI  cls=TagTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TagTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x6e647f*/
  if ( result >= 0 ) /*0x6e6486*/
    return 0; /*0x6e6488*/
  return result; /*0x6e648a*/

}

// ==== BACKFILL 0x006E6490  TagTypeClass::GetTypeIdentifier  cls=TagTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TagTypeClass::GetTypeIdentifier()
{

  return 45; /*0x6e6495*/

}

// ==== BACKFILL 0x006E64A0  TagTypeClass::GetObjectSize  cls=TagTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TagTypeClass::GetObjectSize()
{

  return 164; /*0x6e64a5*/

}

// ==== BACKFILL 0x006E64C0  TagTypeClass::ddtor  cls=TagTypeClass  sig=csp  renamed_refs=0  residual=- ====
TagTypeClass * TagTypeClass::ddtor(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E64C0)
}

// ==== BACKFILL 0x006E6B70  sub_6E6B70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char * E4Recv_6E6B70::sub_6E6B70(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E6B70)
}

// ==== BACKFILL 0x006E8000  sub_6E8000  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6E8000::sub_6E8000(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E8000)
}

// ==== BACKFILL 0x006E8160  TeamClass::SumMemberCounts  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::SumMemberCounts() {
    int v1; // edx
    int result; // eax
    TeamClass *v3; // ecx
    void *vtable0; // esi

    v1 = this->countObjects[5]; /*0x6e8160*/
    result = 0; /*0x6e8166*/
    if ( v1 > 0 ) /*0x6e816a*/
    {
      v3 = (TeamClass *)((char *)this + 164); /*0x6e816d*/
      do /*0x6e817b*/
      {
        vtable0 = *(void **)v3; /*0x6e8173 member first dword*/
        v3 = (TeamClass *)((char *)v3 + 8); /*0x6e8175*/
        result += (int)vtable0; /*0x6e8178*/
        --v1; /*0x6e817a*/
      }
      while ( v1 ); /*0x6e817b*/
    }
    return result; /*0x6e817e*/
}

// ==== BACKFILL 0x006E8340  ScriptTypeClass::ReadINI  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
TaskForceClass * ScriptTypeClass::ReadINI(char * a1, int a2, void *a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E8340)
}

// ==== BACKFILL 0x006E8420  TaskForceClass::GetUnitCount  cls=TaskForceClass  sig=csp  renamed_refs=0  residual=- ====
char TaskForceClass::GetUnitCount(unsigned char *** aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E8420)
}

// ==== BACKFILL 0x006E8510  TaskForceClass::GetUnitType  cls=TaskForceClass  sig=csp  renamed_refs=0  residual=- ====
char TaskForceClass::GetUnitType(char * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E8510)
}

// ==== BACKFILL 0x006E85B0  sub_6E85B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6E85B0::sub_6E85B0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E85B0)
}

// ==== BACKFILL 0x006E8680  TaskForceClass::SaveTaskForce  cls=TaskForceClass  sig=csp  renamed_refs=0  residual=- ====
int TaskForceClass::SaveTaskForce(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0->__pad_0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x6e868f*/
  if ( result >= 0 ) /*0x6e8696*/
    return 0; /*0x6e8698*/
  return result; /*0x6e869a*/

}

// ==== BACKFILL 0x006E86A0  TaskForceClass::LoadTaskForce  cls=TaskForceClass  sig=csp  renamed_refs=0  residual=- ====
int TaskForceClass::LoadTaskForce(AbstractTypeClass * aP0, int aP1)
{

  int result; // eax
  int *v3; // esi
  int v4; // edi

  result = AbstractClass::SaveLoad_Prefix_0((gamemd::AbstractClass *)(aP0),(gamemd::AbstractClass *)(aP1)); /*0x6e86ab*/
  if ( result >= 0 ) /*0x6e86b2*/
  {
    if ( aP0 ) /*0x6e86b6*/
    {
      ((AbstractTypeClass*)(int)aP0)->Init((int)&aP1); /*0x6e86bf*/
      *(unsigned int *)aP0->__pad_0 = (unsigned int)(&g_ptr_7F4654); /*0x6e86c4*/
      aP0->TaskForceClass_field_0x4 = (int)&g_ptr_7F4654; /*0x6e86ca*/
      *(unsigned int *)aP0->__pad_8 = (unsigned int)(&g_ptr_7F4654); /*0x6e86d1*/
      *(unsigned int *)&aP0->__pad_8[4] = (unsigned int)(&g_ptr_7F4654); /*0x6e86d8*/
    }
    v3 = (int *)(aP0 + 1); /*0x6e86e0*/
    v4 = 6; /*0x6e86e6*/
    do /*0x6e86fa*/
    {
      ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, v3); /*0x6e86f1*/
      v3 += 2; /*0x6e86f6*/
      --v4; /*0x6e86f9*/
    }
    while ( v4 ); /*0x6e86fa*/
    return 0; /*0x6e86fc*/
  }
  return result; /*0x6e86ff*/

}

// ==== BACKFILL 0x006E8710  TaskForceClass::ddtor  cls=TaskForceClass  sig=csp  renamed_refs=0  residual=- ====
int TaskForceClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6e8716*/
    return -2147467261; /*0x6e8718*/
  *a2 = 1641952286; /*0x6e8726*/
  a2[1] = 298977140; /*0x6e872e*/
  a2[2] = 1610655148; /*0x6e8737*/
  a2[3] = unk_7E977C; /*0x6e8740*/
  return 0; /*0x6e871d*/

}

// ==== BACKFILL 0x006E8750  TaskForceClass::LoadTask  cls=TaskForceClass  sig=csp  renamed_refs=0  residual=- ====
int TaskForceClass::LoadTask(int * a2)
{

  ((AbstractTypeClass *)((AbstractTypeClass *)this))->ProcessPower(a2); /*0x6e8759*/
  Power::TimerProcess((int)this->TaskForceClass_field_0x98); /*0x6e8767*/
  return Power::TimerProcess(this->TaskForceClass_field_0x9C[0]); /*0x6e877a*/

}

// ==== BACKFILL 0x006E8780  HouseClass::GetMaxBuildLevel  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::GetMaxBuildLevel()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E8780.json)
}

// ==== BACKFILL 0x006E87D0  TaskForceClass::StubReturn33  cls=TaskForceClass  sig=csp  renamed_refs=0  residual=- ====
int TaskForceClass::StubReturn33()
{

  return 33; /*0x6e87d5*/

}

// ==== BACKFILL 0x006E87E0  TaskForceClass::StubReturn212  cls=TaskForceClass  sig=csp  renamed_refs=0  residual=- ====
int TaskForceClass::StubReturn212()
{

  return 212; /*0x6e87e5*/

}

// ==== BACKFILL 0x006E8A90  MissionClass::Construct  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::Construct(int a1, int a2, int a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6e8a90.json */
}

// ==== BACKFILL 0x006E9050  TeamClass::SelectMember  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
char TeamClass::SelectMember(AbstractClass * aP1, void *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006E9050.json)
}

// ==== BACKFILL 0x006EA080  sub_6EA080  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6EA080::sub_6EA080()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EA080)
}

// ==== BACKFILL 0x006EA0D0  SelectTeamProductionBuilding  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_6EA0D0::SelectTeamProductionBuilding() {

  double v1; // st7
  ObjectClass *owningHouseIndex; // ecx
  TagClass **p_attachedTag; // esi
  BombClass *attachedBomb; // edi
  unsigned int *v6; // eax
  int fallRate; // ecx
  int v8; // eax
  int v9; // esi
  unsigned int *v10; // eax
  TagClass *attachedTag; // ecx
  unsigned int *v12; // edi
  unsigned int *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // edi
  unsigned int *v18; // eax
  int v19; // esi
  int v20; // ebp
  int v21; // eax
  int v22; // [esp+2Ch] [ebp-68h] BYREF
  int v23; // [esp+30h] [ebp-64h]
  int v24; // [esp+34h] [ebp-60h]
  int v25; // [esp+38h] [ebp-5Ch]
  ObjectClass *v26; // [esp+3Ch] [ebp-58h]
  int v27; // [esp+40h] [ebp-54h]
  int i; // [esp+44h] [ebp-50h]
  int16_t v29[2]; // [esp+48h] [ebp-4Ch] BYREF
  int j; // [esp+4Ch] [ebp-48h] BYREF
  int v31; // [esp+50h] [ebp-44h]
  int v32; // [esp+54h] [ebp-40h] BYREF
  int v33; // [esp+58h] [ebp-3Ch] BYREF
  int v34; // [esp+5Ch] [ebp-38h]
  int v35; // [esp+60h] [ebp-34h]
  unsigned char v36[12]; // [esp+64h] [ebp-30h] BYREF
  unsigned char v37[12]; // [esp+70h] [ebp-24h] BYREF
  unsigned char v38[12]; // [esp+7Ch] [ebp-18h] BYREF
  unsigned char v39[12]; // [esp+88h] [ebp-Ch] BYREF

  owningHouseIndex = (ObjectClass *)this->owningHouseIndex; /*0x6ea0de*/
  HIBYTE(this->visibilityFlags) = 0; /*0x6ea0e2*/
  SetLandTypeMap(owningHouseIndex); /*0x6ea0e6*/
  if ( this->ambientSoundController[3] <= 0 ) /*0x6ea0f0*/
  {
    this->attachedTag = 0; /*0x6ea3c2*/
  }
  else
  {
    p_attachedTag = &this->attachedTag; /*0x6ea0f9*/
    TeamClass::FindClosestEnemy((int)this, (void **)&this->attachedTag, (int *)&this->attachedBomb); /*0x6ea100*/
    if ( !this->attachedTag ) /*0x6ea105*/
    {
      attachedBomb = this->attachedBomb; /*0x6ea10a*/
      if ( !attachedBomb ) /*0x6ea10e*/
        return; /*0x6ea10e*/
      *p_attachedTag = (TagClass *)attachedBomb; /*0x6ea114*/
    }
    v6 = (unsigned int *)(*((int (**)(TagClass *, int *))(*p_attachedTag)->vtable1 + 18))( /*0x6ea11f*/
                     *p_attachedTag,
                     &v33);
    v27 = 0x7FFFFFFF; /*0x6ea124*/
    (v22) = ((v22) & ~0xFFFF) | ((*v6 / 256) & 0xFFFF); /*0x6ea13a*/
    fallRate = this->fallRate; /*0x6ea143*/
    HIWORD(v22) = v6[1] / 256; /*0x6ea151*/
    *(unsigned int *)v29 = v22; /*0x6ea15a*/
    v8 = 0; /*0x6ea161*/
    v31 = *(unsigned int *)(fallRate + 120); /*0x6ea163*/
    for ( i = 0; i < v31; ++i ) /*0x6ea16d*/
    {
      v9 = *(unsigned int *)(*(unsigned int *)(this->fallRate + 108) + 4 * v8); /*0x6ea179*/
      if ( v9 && !*(unsigned char *)(v9 + 129) && !*(unsigned int *)(*(int (**)(int, unsigned int))(*(unsigned int *)v9 + 1016))(v9, 0) ) /*0x6ea19e*/
      {
        v10 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v9 + 72))(v9, v36); /*0x6ea1b0*/
        (v23) = ((v23) & ~0xFFFF) | ((*v10 / 256) & 0xFFFF); /*0x6ea1c3*/
        attachedTag = this->attachedTag; /*0x6ea1d2*/
        HIWORD(v23) = v10[1] / 256; /*0x6ea1da*/
        v22 = v23; /*0x6ea1e3*/
        v12 = (unsigned int *)(*((int (**)(TagClass *, unsigned char *))attachedTag->vtable1 + 18))(attachedTag, v37); /*0x6ea1f5*/
        v13 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v9 + 72))(v9, v38); /*0x6ea1fc*/
        v14 = v13[1]; /*0x6ea203*/
        v33 = *v13 - *v12; /*0x6ea208*/
        v15 = v13[2]; /*0x6ea211*/
        v34 = v14 - v12[1]; /*0x6ea214*/
        v35 = v15 - v12[2]; /*0x6ea224*/
        Math::Sqrt((double)v33 * (double)v33 + (double)v35 * (double)v35 + (double)v34 * (double)v34); /*0x6ea249*/
        (v16) = ((v16) & ~0xFFFF) | ((Math::RoundToInt(v1)) & 0xFFFF); /*0x6ea251*/
        v17 = v16 * (CellClass::GetTileData((int16_t *)&v22, this->fallRate) + 1); /*0x6ea27a*/
        if ( *(unsigned char *)(*(unsigned int *)(v9 + 1312) + 5801) ) /*0x6ea274*/
          v17 /= 2; /*0x6ea288*/
        if ( v17 < v27 ) /*0x6ea28e*/
        {
          v18 = (unsigned int *)(*((int (**)(TagClass *, unsigned char *))this->attachedTag->vtable1 + 18))( /*0x6ea29e*/
                            this->attachedTag,
                            v39);
          v19 = this->customSound_controller[1]; /*0x6ea2a3*/
          v26 = (ObjectClass *)v19; /*0x6ea2a6*/
          v25 = -1; /*0x6ea2aa*/
          (v24) = ((v24) & ~0xFFFF) | ((*v18 / 256) & 0xFFFF); /*0x6ea2c0*/
          HIWORD(v24) = v18[1] / 256; /*0x6ea2d4*/
          for ( j = v24; v19; v19 = *(unsigned int *)(v19 + 1496) ) /*0x6ea2e3*/
          {
            v20 = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v19 + 132))(v19) + 1532); /*0x6ea2ef*/
            if ( *(unsigned char *)(v19 + 144) /*0x6ea337*/
              && *(unsigned int *)(v19 + 108)
              && (dword_A8E7AC || !*(unsigned char *)(v19 + 129))
              && (*(unsigned char *)(v19 + 1673) || (*(int (**)(int))(*(unsigned int *)v19 + 44))(v19) == 2)
              && v20 > v25 )
            {
              v26 = (ObjectClass *)v19; /*0x6ea339*/
              v25 = v20; /*0x6ea33d*/
            }
          }
          v21 = *WalkPathfindingLine(v26, &v32, (int)&j, &v22, 2, 4); /*0x6ea367*/
          v22 = v21; /*0x6ea370*/
          if ( v21 != *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)) ) /*0x6ea374*/
          {
            v27 = v17; /*0x6ea384*/
            *(unsigned int *)v29 = v21; /*0x6ea388*/
          }
        }
      }
      v8 = i + 1; /*0x6ea394*/
    }
    this->ambientSoundController[1] = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v29); /*0x6ea3b2*/
    TeamClass::UpdateMembers((TeamClass *)this); /*0x6ea3b5*/
  }

}

// ==== BACKFILL 0x006EA4F0  CaptureManagerClass::AddMember  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
char CaptureManagerClass::AddMember(TechnoClass * aP1, void *a2, void *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EA4F0)
}

// ==== BACKFILL 0x006EA500  TeamClass::AddMember  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
char TeamClass::AddMember(int aP1, char aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EA500.json)
}

// ==== BACKFILL 0x006EA610  TeamClass::ValidateMember  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
bool TeamClass::ValidateMember(TechnoClass * aP1, int * a2, char a4)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EA610.json)
}

// ==== BACKFILL 0x006EAE60  TeamClass::ExecuteAction  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::ExecuteAction(int a2, char a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EAE60.json)
}

// ==== BACKFILL 0x006EC130  ObjectClass::Get  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::Get(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6ec130.json */
}

// ==== BACKFILL 0x006EC370  sub_6EC370  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6EC370::sub_6EC370()
{

  int v1; // ecx
  char result; // al

  v1 = *(unsigned int *)&((unsigned int *)this)[23]; /*0x6ec370*/
  result = 1; /*0x6ec373*/
  if ( v1 ) /*0x6ec377*/
  {
    while ( *(unsigned char *)(v1 + 981) ) /*0x6ec381*/
    {
      v1 = *(unsigned int *)(v1 + 1496); /*0x6ec383*/
      if ( !v1 ) /*0x6ec38b*/
        return result; /*0x6ec38b*/
    }
    return 0; /*0x6ec38e*/
  }
  return result; /*0x6ec38d*/

}

// ==== BACKFILL 0x006EC3A0  TeamClass::WakeUpAllMembers  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
char TeamClass::WakeUpAllMembers()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EC3A0.json)
}

// ==== BACKFILL 0x006EC3D0  HouseClass::FindBestBuildingToRepair  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
void* HouseClass::FindBestBuildingToRepair()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EC3D0.json)
}

// ==== BACKFILL 0x006EC450  TeamClass::SaveLoad_Prefix  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EC450.json)
}

// ==== BACKFILL 0x006EC540  TeamClass::SaveLoad_Prefix_0  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EC540.json)
}

// ==== BACKFILL 0x006EC560  TeamClass::ddtor  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EC560.json)
}

// ==== BACKFILL 0x006ECCE0  TeamClass::MoveToCellAndAttack  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
void TeamClass::MoveToCellAndAttack(int a2, int a3) {
    TeamClass *v3; // edi
    void *CellFromArray; // esi
    unsigned int *Entry; // eax
    int v6; // eax
    FootClass *firstUnit; // esi
    int v8; // ebp
    FootClass *v9; // ebx
    int v10; // edi
    void *vtable0; // edx
    int v12; // eax
    AbstractClass *focus; // eax
    int v15; // [esp+10h] [ebp-14h] BYREF
    unsigned int v16[3]; // [esp+18h] [ebp-Ch] BYREF
    int v17; // [esp+28h] [ebp+4h]

    v3 = this; /*0x6eccea*/
    CellFromArray = ((ScenarioClass *)dword_A8B230)->GetCellFromArray(*(unsigned int *)(a2 + 4)); /*0x6eccff*/
    v17 = (int)CellFromArray; /*0x6ecd07*/
    if ( a3 ) /*0x6ecd0b*/
      v3->SelectMember((int)CellFromArray); /*0x6ecd10*/
    if ( !v3->focus ) /*0x6ecd15*/
    {
      Entry = ((SessionClass *)v3->currentScript)->GetEntry((unsigned int *)&v15); /*0x6ecd24*/
      v16[0] = *Entry; /*0x6ecd2b*/
      if ( Entry[1] < 0x2BEu ) /*0x6ecd36*/
        v3->SelectMember((int)CellFromArray); /*0x6ecd3b*/
    }
    (v6) = ((v6) & ~0xFFFF) | ((Math::RoundToInt(*(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4432) * 900.0)) & 0xFFFF); /*0x6ecd52*/
    if ( !(*(unsigned int *)&(&stru_A8EB00)[416] % v6) ) /*0x6ecd5f*/
    {
      firstUnit = v3->firstUnit; /*0x6ecd69*/
      v8 = -1; /*0x6ecd6d*/
      v9 = firstUnit; /*0x6ecd70*/
      if ( firstUnit ) /*0x6ecd74*/
      {
        do /*0x6ecdd4*/
        {
          v10 = *(unsigned int *)((*((int (__thiscall **)(FootClass *))*(void ***)firstUnit + 33))(firstUnit) + 1532); /*0x6ecd80*/
          if ( *(unsigned char *)((char *)firstUnit + 144) /*0x6ecdc6 +90*/
            && *(unsigned int *)((char *)firstUnit + 108) /*+6C*/
            && (dword_A8E7AC || !*(unsigned char *)((char *)firstUnit + 129)) /*+81*/
            && ( *(unsigned char *)((char *)firstUnit + 1673) /*0x6ecd9b isTeamLeader@0x689*/
             || (*((int (__thiscall **)(FootClass *))*(void ***)firstUnit + 11))(firstUnit) == 2)
            && v10 > v8 )
          {
            v9 = firstUnit; /*0x6ecdc8*/
            v8 = v10; /*0x6ecdca*/
          }
          firstUnit = *(FootClass **)((char *)firstUnit + 1496); /*0x6ecdcc nextTeamMember@0x5D8*/
        }
        while ( firstUnit ); /*0x6ecdd4*/
        v3 = this; /*0x6ecdd6*/
      }
      if ( v9 ) /*0x6ecddd*/
      {
        v16[0] = *(unsigned int *)((char *)v9 + 156); /*0x6ecde9 +9C cellXY*/
        vtable0 = *(void ***)v9; /*0x6ecded TechnoClass 基类虚表*/
        v16[1] = *(unsigned int *)((char *)v9 + 160); /*0x6ecdf2 +A0*/
        v16[2] = *(unsigned int *)((char *)v9 + 164); /*0x6ecdfe +A4*/
        v12 = (*((int (__thiscall **)(FootClass *, int, unsigned int *, unsigned int))vtable0 + 241))(v9, 1, v16, 0); /*0x6ece06*/
        if ( v12 ) /*0x6ece0e*/
        {
          v3->SelectMember(v12); /*0x6ece11*/
        }
        else if ( v3->focus != (AbstractClass *)v17 ) /*0x6ece1c*/
        {
          v3->SelectMember(0); /*0x6ece22*/
        }
      }
    }
    focus = v3->focus; /*0x6ece27*/
    if ( focus && (focus->abstractFlags & 2) != 0 ) /*0x6ece32*/
      v3->AttackCoordinator(); /*0x6ece36*/
    else
      v3->UpdateMembers(); /*0x6ece46*/
}

// ==== BACKFILL 0x006ECFB0  TeamClass::Create  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::Create(int a2, int a3) {
    int v4; // eax
    int *v5; // ebx
    FootClass *i; // esi

    v4 = (int)RA2_OPNEW(0xA0u); /*0x6ecfba*/
    if ( v4 ) /*0x6ecfc4*/
    {
      v4 = ((ra2::game::MissionClass *)v4)->Construct( /*0x6ecfdf*/
             *(unsigned int *)(*(unsigned int *)&(&stru_A8EB00)[192] + 4 * *(unsigned int *)(a2 + 4)),
             (int)this->owner,
             0);
      v5 = (int *)v4; /*0x6ecfe4*/
    }
    else
    {
      v5 = 0; /*0x6ecfe8*/
    }
    for ( i = this->firstUnit; i; i = this->firstUnit ) /*0x6ecfef*/
    {
      this->LiberateMember_Start((FootClass *)i, (int)0xFFFFFFFF, 0); /*0x6ecff8*/
      (v4) = ((v4) & ~0xFF) | (((unsigned char)((TeamClass *)v5)->AddMember((FootClass *)i, 0)) & 0xFF); /*0x6ed002*/
    }
    if ( this ) /*0x6ed010*/
      IDA_LOBYTE(v4) = (*((char (__thiscall **)(TeamClass *, int))*(void ***)this + 8))(this, 1); /*0x6ed018*/
    return v4; /*0x6ed01b*/
}

// ==== BACKFILL 0x006EDB50  TeamClass::AssignAttackTarget  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::AssignAttackTarget(int a2, int a3) {
    AbstractClass **p_spawnCell; // edi
    unsigned int *health; // eax
    unsigned int *v6; // edi
    FootClass *i; // esi
    AbstractClass *target; // eax

    p_spawnCell = (AbstractClass **)&this->spawnCell; /*0x6edb57*/
    this->FindClosestEnemy((void **)&this->spawnCell, &this->unknown38); /*0x6edb5c 3-arg 重载*/
    this->focus = *p_spawnCell; /*0x6edb63*/
    this->UpdateMembers(); /*0x6edb68*/
    health = (unsigned int *)((AbstractClass *)*p_spawnCell)->IsTechnoType(); /*0x6edb6f*/
    v6 = health; /*0x6edb74*/
    if ( health ) /*0x6edb78*/
    {
      for ( i = this->firstUnit; i; i = i ) /*0x6edb83*/
      {
        IDA_LOBYTE(health) = *(unsigned char *)((char *)i + 144); /*0x6edb89 +90*/
        if ( (unsigned char)health ) /*0x6edb91*/
        {
          health = (unsigned int *)*(void **)((char *)i + 108); /*0x6edb97 +6C target*/
          if ( health ) /*0x6edb9c*/
          {
            if ( dword_A8E7AC || (IDA_LOBYTE(health) = *(unsigned char *)((char *)i + 1673), !(unsigned char)health) ) /*0x6edbb3 +689*/
            {
              if ( *(unsigned char *)((char *)i + 1673) /*0x6edbcd isTeamLeader@0x689*/
                || (health = (unsigned int *)(*((int (__thiscall **)(FootClass *))*(void ***)i + 11))(i), health == (unsigned int *)2) )
              {
                target = (AbstractClass *)*(void **)((char *)i + 692); /*0x6edbd3 +2B4*/
                if ( target && target != (AbstractClass *)v6[173] ) /*0x6edbe3*/
                  (*((void (__thiscall **)(FootClass *, unsigned int))*(void ***)i + 242))(i, 0); /*0x6edbeb*/
                health = (unsigned int *)v6[173]; /*0x6edbf1*/
                if ( health ) /*0x6edbf9*/
                {
                  if ( !*(void **)((char *)i + 1652) ) /*0x6edbfb*/
                    WinAPI::Wrapper(-2147467261); /*0x6edc0a*/
                  IDA_LOBYTE(health) = (*(int (__stdcall **)(int))(*(unsigned int *)*(void **)((char *)i + 1652) + 16))((int)*(void **)((char *)i + 1652)); /*0x6edc18*/
                  if ( !(unsigned char)health ) /*0x6edc1d*/
                  {
                    IDA_LOBYTE(health) = (*((int (__thiscall **)(FootClass *))*(void ***)i + 171))(i); /*0x6edc23*/
                    if ( (unsigned char)health ) /*0x6edc2b*/
                    {
                      health = (unsigned int *)(*((int (__thiscall **)(FootClass *))*(void ***)i + 97))(i); /*0x6edc31*/
                      if ( health == (unsigned int *)5 ) /*0x6edc3a*/
                      {
                        (*((void (__thiscall **)(FootClass *, int, unsigned int))*(void ***)i + 122))(i, 1, 0); /*0x6edc44*/
                        IDA_LOBYTE(health) = (*((int (__thiscall **)(FootClass *, unsigned int))*(void ***)i + 242))(i, v6[173]); /*0x6edc55*/
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return (char)health; /*0x6edc69*/
}

// ==== BACKFILL 0x006EDDC0  sub_6EDDC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6EDDC0::sub_6EDDC0(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EDDC0)
}

// ==== BACKFILL 0x006EDE80  sub_6EDE80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_6EDE80::sub_6EDE80(int a2, int a3)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EDE80)
}

// ==== BACKFILL 0x006EDF10  sub_6EDF10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_6EDF10::sub_6EDF10(int a2, int a3)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EDF10)
}

// ==== BACKFILL 0x006EDF90  sub_6EDF90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6EDF90::sub_6EDF90(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EDF90)
}

// ==== BACKFILL 0x006EDFB0  sub_6EDFB0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6EDFB0::sub_6EDFB0(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EDFB0)
}

// ==== BACKFILL 0x006EE050  sub_6EE050  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6EE050::sub_6EE050(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EE050)
}

// ==== BACKFILL 0x006EE100  TacticalClass::Get  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::Get(int a2, int a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 5 errs): wrong-universe gap2 body; truth func_0x6EE100.json */
}

// ==== BACKFILL 0x006EF450  sub_6EF450  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_6EF450::sub_6EF450(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EF450)
}

// ==== BACKFILL 0x006EF470  Team_Create  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_6EF470::Team_Create() {

  int v2; // edi
  int v3; // eax
  int i; // ebx
  int *v5; // esi

  v2 = 0; /*0x6ef476*/
  v3 = *(unsigned int *)(this->occupant + 228); /*0x6ef47b*/
  if ( *(int *)(v3 + 156) <= 0 ) /*0x6ef489*/
    return 0; /*0x6ef4be*/
  for ( i = 168; ; i += 8 ) /*0x6ef48b*/
  {
    v5 = *(int **)(i + v3); /*0x6ef490*/
    if ( (*(int (**)(int *))(*v5 + 44))(v5) == 3 && v5[376] > 0 ) /*0x6ef4a7*/
      break; /*0x6ef4a7*/
    ++v2; /*0x6ef4ac*/
    v3 = *(unsigned int *)(this->occupant + 228); /*0x6ef4b0*/
    if ( v2 >= *(unsigned int *)(v3 + 156) ) /*0x6ef4bc*/
      return 0; /*0x6ef4bc*/
  }
  return 1; /*0x6ef4be*/

}

// ==== BACKFILL 0x006EF4D0  HouseClass::UpdateProductionQueue  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::UpdateProductionQueue(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EF4D0.json)
}

// ==== BACKFILL 0x006EF700  DeployTeamMembersAtStart  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_6EF700::DeployTeamMembersAtStart(ScriptClass * aP1, char a3) {

  unsigned int *v3; // esi
  unsigned int *v4; // edi
  int v5; // ebx
  int v6; // eax
  unsigned int *v7; // eax
  int *StartCoordsHouseClass; // eax
  int v9; // esi
  bool v10; // zf
  int v11; // ebx
  int v12; // eax
  int *v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int *v17; // edx
  double v18; // st7
  int v19; // edx
  double v20; // st7
  double v21; // st7
  int v22; // eax
  int v23; // eax
  void *v24; // eax
  int v25; // esi
  int v26; // [esp+24h] [ebp-38h] BYREF
  int v27; // [esp+28h] [ebp-34h]
  double v28; // [esp+2Ch] [ebp-30h] BYREF
  double v29; // [esp+34h] [ebp-28h] BYREF
  double v30; // [esp+3Ch] [ebp-20h]
  int v31; // [esp+44h] [ebp-18h]
  int v32; // [esp+48h] [ebp-14h]
  int v33; // [esp+4Ch] [ebp-10h]
  unsigned int v34[3]; // [esp+50h] [ebp-Ch] BYREF

  v27 = this; /*0x6ef711*/
  if ( a3 ) /*0x6ef715*/
  {
    v3 = *(unsigned int **)((char *)this + 84); /*0x6ef71b*/
    LODWORD(v28) = -1; /*0x6ef71e*/
    v4 = v3; /*0x6ef728*/
    if ( v3 ) /*0x6ef72a*/
    {
      do /*0x6ef771*/
      {
        v5 = *(unsigned int *)((*(int (**)(unsigned int *))(*v3 + 132))(v3) + 1532); /*0x6ef736*/
        if ( TechnoClass::IsDeployed((int)v3) /*0x6ef761*/
          && (*((unsigned char *)v3 + 1673) || (*(int (**)(unsigned int *))(*v3 + 44))(v3) == 2)
          && v5 > SLODWORD(v28) )
        {
          v4 = v3; /*0x6ef763*/
          LODWORD(v28) = v5; /*0x6ef765*/
        }
        v3 = (unsigned int *)v3[374]; /*0x6ef769*/
      }
      while ( v3 ); /*0x6ef771*/
      this = v27; /*0x6ef773*/
    }
    if ( !v4 ) /*0x6ef779*/
    {
      *((unsigned char *)this + 128) = 1; /*0x6ef77b*/
      return; /*0x6ef788*/
    }
    v6 = *(unsigned int *)(v4[135] + 22016); /*0x6ef791*/
    if ( v6 == -1 || (v7 = *(unsigned int **)dword_A8022C[4 * v6]) == 0 ) /*0x6ef7a7*/
    {
      *((unsigned char *)this + 128) = 1; /*0x6ef7a9*/
      return; /*0x6ef7b6*/
    }
    StartCoordsHouseClass = HouseClass::GetStartCoords(v7, v34); /*0x6ef7c0*/
    v9 = *StartCoordsHouseClass; /*0x6ef7c5*/
    v10 = *StartCoordsHouseClass == dword_B0E968; /*0x6ef7cd*/
    v31 = *StartCoordsHouseClass; /*0x6ef7cf*/
    v11 = StartCoordsHouseClass[1]; /*0x6ef7d3*/
    v32 = v11; /*0x6ef7d6*/
    v12 = StartCoordsHouseClass[2]; /*0x6ef7da*/
    v33 = v12; /*0x6ef7dd*/
    if ( v10 && v11 == dword_B0E96C && v12 == dword_B0E970 ) /*0x6ef7f1*/
    {
      *(unsigned char *)(v27 + 128) = 1; /*0x6ef7f7*/
      return; /*0x6ef804*/
    }
    v13 = HouseClass::GetStartCoords((unsigned int *)v4[135], v34); /*0x6ef817*/
    v14 = *v13; /*0x6ef819*/
    v10 = *v13 == dword_B0E968; /*0x6ef81b*/
    v15 = v13[1]; /*0x6ef821*/
    v16 = v13[2]; /*0x6ef824*/
    if ( v10 && v15 == dword_B0E96C && v16 == dword_B0E970 ) /*0x6ef837*/
    {
      v17 = (int *)(*(int (**)(unsigned int *, unsigned int *))(*v4 + 72))(v4, v34); /*0x6ef845*/
      v14 = *v17; /*0x6ef847*/
      v15 = v17[1]; /*0x6ef849*/
      v34[2] = v17[2]; /*0x6ef84f*/
    }
    v34[0] = v14 - v9; /*0x6ef857*/
    v18 = Math::CalcAngle((double)(v11 - v15), (double)(v14 - v9)); /*0x6ef875*/
    LODWORD(v28) = (int16_t)Math::RoundToInt((v18 - 1.570796326794897) * -10430.06004058427) - 0x3FFF; /*0x6ef899*/
    v19 = HIDWORD(((unsigned int *)dword_8871E0)[0]) << 8; /*0x6ef8a7*/
    v28 = (double)SLODWORD(v28) * -0.00009587672516830327; /*0x6ef8b4*/
    v30 = (double)v19; /*0x6ef8c6*/
    v29 = (double)v32; /*0x6ef8ce*/
    v20 = Math::SinCos(v28); /*0x6ef8d2*/
    LODWORD(v29) = Math::RoundToInt(v29 - v20 * v30); /*0x6ef8e6*/
    v21 = Math::ArcTan2(v28); /*0x6ef8ea*/
    v22 = Math::RoundToInt(v21 * v30 + (double)v31); /*0x6ef8fa*/
    Coord::Subtract(v34, v22, SLODWORD(v29), v33); /*0x6ef90e*/
    LOWORD(v28) = v34[0] / 256; /*0x6ef927*/
    WORD1(v28) = v34[1] / 256; /*0x6ef93e*/
    v26 = LODWORD(v28); /*0x6ef949*/
    LODWORD(v28) = 0; /*0x6ef956*/
    v23 = (*(int (**)(unsigned int *))(*v4 + 132))(v4); /*0x6ef96e*/
    v26 = *LayerClass::Pathfinding_Find( /*0x6ef99b*/
             &dword_87F7E8,
             (int)&v29,
             &v29,
             (int16_t *)&v26,
             *(unsigned int *)(v23 + 1660),
             -1,
             0,
             0,
             3,
             3,
             0,
             0,
             0,
             1,
             (int16_t *)&v28,
             0,
             0);
    v24 = CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&v26); /*0x6ef99f*/
    v25 = v27; /*0x6ef9a4*/
    TeamClass::SelectMember(v27, (int)v24); /*0x6ef9ab*/
    Debug::Log(); /*0x6ef9c8*/
    this = v25; /*0x6ef9d0*/
  }
  TeamClass::UpdateMembers(this); /*0x6ef9d2*/

}

// ==== BACKFILL 0x006EF9E0  TechnoClass::IsDeployed  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::IsDeployed() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006EF9E0.json)
}
