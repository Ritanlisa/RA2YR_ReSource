// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x007010D0  TechnoClass::HasValidWeapon  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::HasValidWeapon() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x7010d0.json */
}

// ==== BACKFILL 0x00701190  TacticalClass::StubReturnFalse11  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
char TacticalClass::StubReturnFalse11()
{

  return 0; /*0x701192*/

}

// ==== BACKFILL 0x007011A0  sub_7011A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_7011A0::sub_7011A0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7011A0)
}

// ==== BACKFILL 0x007013A0  MissionClass::OverrideMission_SyncLog  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int MissionClass::OverrideMission_SyncLog() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x7013a0.json */
}

// ==== BACKFILL 0x00703CC0  TechnoClass::ScanAdjacentCells  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
char TechnoClass::ScanAdjacentCells()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00703CC0.json)
}

// ==== BACKFILL 0x00707CB0  TechnoClass::CleanupAll  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::CleanupAll(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x707cb0.json */
}

// ==== BACKFILL 0x007087C0  ValidateAttackTarget  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool Gap2Recv_7087C0::ValidateAttackTarget(TechnoClass * aP1, int a3) {

  CaptureManagerClass *v4; // ecx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // esi
  double v15; // [esp+10h] [ebp-8h]

  if ( !aP1 /*0x708817*/
    || !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)this + 132))(this) + 3482)
    || *((unsigned int *)this + 183)
    || *((unsigned int *)this + 182)
    || *((unsigned int *)this + 115) && !*(unsigned char *)(*((unsigned int *)this + 135) + 492) )
  {
    return 0; /*0x708817*/
  }
  v4 = *(CaptureManagerClass **)((char *)this + 700); /*0x708825*/
  if ( v4 ) /*0x70882d*/
  {
    if ( CaptureManagerClass::CannotControlAnyMore(v4) ) /*0x70882f*/
      return 0; /*0x70882f*/
  }
  if ( *((unsigned int *)this + 180) /*0x708859*/
    || (uint8_t)House::IsCurrentPlayer(*(House **)((char *)this + 540)) && *((unsigned int *)this + 173) )
  {
    return 0; /*0x708859*/
  }
  if ( !MissionClass::GetMissionControl((MissionClass *)this)[8] ) /*0x70886e*/
    return 0; /*0x70886e*/
  if ( (uint8_t)Object::IsAlliedWithObjectHouse(*(Object **)((char *)this + 540), (int)aP1) ) /*0x708880*/
    return 0; /*0x708880*/
  if ( (*(uint8_t (**)(int *, unsigned int))(*aP1 + 200))(aP1, *((unsigned int *)this + 135)) ) /*0x708899*/
    return 0; /*0x708899*/
  if ( TechnoClass::GetValue((TechnoClass *)this, -1) <= 0 ) /*0x7088b2*/
    return 0; /*0x7088b2*/
  if ( !(*(uint8_t (**)(int))(*(unsigned int *)this + 684))(this) ) /*0x7088bc*/
    return 0; /*0x7088bc*/
  v5 = (*(int (**)(int))(*(unsigned int *)this + 132))(this); /*0x7088d9*/
  v6 = (*(int (**)(int, int *))(*(unsigned int *)this + 740))(this, aP1); /*0x7088e1*/
  v7 = (*(int (**)(int, int *, int))(*(unsigned int *)this + 956))(this, aP1, v6); /*0x7088ed*/
  if ( v7 == 5 || v7 == 6 ) /*0x7088ff*/
    return 0; /*0x7088ff*/
  if ( (uint8_t)House::IsCurrentPlayer(*(House **)((char *)this + 540)) /*0x708923*/
    && (*(int (**)(int *))(*aP1 + 44))(aP1) == 6 )
  {
    if ( (*(int (**)(int))(*(unsigned int *)this + 44))(this) == 15 && *(unsigned char *)(v5 + 3778) ) /*0x708935*/
      return 0; /*0x708935*/
    if ( (uint8_t)Audio::IsMediumVolume((int *)((char *)this + 336)) /*0x708956*/
      || (uint8_t)Audio::IsLoud((int *)((char *)this + 336)) )
    {
      v8 = (*(int (**)(int))(*(unsigned int *)this + 132))(this); /*0x70896b*/
      if ( (uint8_t)Audio::IsMediumVolume((int *)((char *)this + 336)) ) /*0x70896d*/
      {
        if ( *(unsigned char *)(v8 + 682) ) /*0x708976*/
          return 0; /*0x708976*/
      }
      if ( (uint8_t)Audio::IsLoud((int *)((char *)this + 336)) && (*(unsigned char *)(v8 + 682) || *(unsigned char *)(v8 + 700)) ) /*0x70899d*/
        return 0; /*0x70899d*/
    }
  }
  if ( (uint8_t)House::IsCurrentPlayer(*(House **)((char *)this + 540)) ) /*0x7089b5*/
  {
    if ( (*(int (**)(int))(*(unsigned int *)this + 44))(this) == 1 ) /*0x7089c8*/
    {
      v9 = *(unsigned int *)(*((unsigned int *)this + 433) + 1028); /*0x7089d0*/
      if ( v9 ) /*0x7089d8*/
      {
        if ( *(unsigned char *)(v9 + 5834) ) /*0x7089da*/
          return 0; /*0x7089da*/
      }
    }
  }
  if ( (uint8_t)House::IsCurrentPlayer(*(House **)((char *)this + 540)) ) /*0x7089ee*/
  {
    if ( !*(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6124) /*0x708a11*/
      && (*(int (**)(int))(*(unsigned int *)this + 44))(this) != 6 )
    {
      v10 = *((unsigned int *)this + 43); /*0x708a13*/
      if ( v10 != 11 && v10 != 5 && v10 != 25 ) /*0x708a26*/
        return 0; /*0x708a26*/
    }
  }
  if ( this ) /*0x708a2e*/
  {
    if ( (*((unsigned char *)this + 20) & 4) != 0 ) /*0x708a3d*/
    {
      v11 = *((unsigned int *)this + 373); /*0x708a3f*/
      if ( v11 ) /*0x708a47*/
      {
        if ( *(unsigned char *)(*(unsigned int *)(v11 + 36) + 175) ) /*0x708a4c*/
          return 0; /*0x708a4c*/
      }
    }
  }
  if ( !(uint8_t)House::IsCurrentPlayer(*(House **)((char *)this + 540)) ) /*0x708a60*/
  {
    v12 = *((unsigned int *)this + 173); /*0x708a69*/
    if ( v12 ) /*0x708a71*/
    {
      if ( (*(unsigned char *)(v12 + 20) & 2) != 0 ) /*0x708a7f*/
      {
        v15 = TechnoClass::ComputeDamage((TechnoClass *)this, (int *)v12, &(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 3)); /*0x708a8e*/
        if ( TechnoClass::ComputeDamage((TechnoClass *)this, aP1, &(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 3)) < v15 ) /*0x708aa8*/
          return 0; /*0x708aa8*/
      }
    }
  }
  if ( this && (*((unsigned char *)this + 20) & 4) != 0 && aP1 == *(int **)((char *)this + 1684) ) /*0x708ac3*/
    return 0; /*0x708ac3*/
  v13 = *(unsigned int *)(*(int (**)(int, int))(*(unsigned int *)this + 1016))(this, v6); /*0x708ad0*/
  return !v13 /*0x708b1a*/
      || !*(unsigned int *)(v13 + 172)
      || *(double *)(*(unsigned int *)(v13 + 172) + 8 * *(unsigned int *)((*(int (**)(int *))(*aP1 + 132))(aP1) + 156) + 160) > 0.0099999998;

}

// ==== BACKFILL 0x00708C10  TechnoClass::GetGlobalValue  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::GetGlobalValue(int *a2) const {
    unsigned int *v2; // [esp+8h] [ebp+8h]

    *a2 = *(unsigned int *)&g_BuildingLoadQueue_Array[24]; /*0x708c1a GetGlobalValue(int*)*/
    return 0; /*0x708c1e*/
}

// ==== BACKFILL 0x007099D0  IPersistStream::IsDirty  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int IPersistStream::IsDirty(int a1, int a2)
{

  return 0; /*0x7099d2*/

}

// ==== BACKFILL 0x00709A20  TechnoClass::COMStub_Return0_287  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::COMStub_Return0_287()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00709A20.json)
}

// ==== BACKFILL 0x00709A30  IPersistStream::Stub  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
void IPersistStream::Stub(BuildingTypeClass * aP0, int a2)
{

  ; /*0x709a30*/

}

// ==== BACKFILL 0x0070C250  IPersistStream::GetSizeMax  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int IPersistStream::GetSizeMax(int a0, RadioClass * aP1, int a3)
{

  RadioClass::SaveState((int *)((RadioClass *)a0),(gamemd::RadioClass *)((int *)aP1), a3); /*0x70c25f*/
  return 0; /*0x70c266*/

}

// ==== BACKFILL 0x0070C5B0  ObjectClass::GetShroudByte  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetShroudByte() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x70c5b0.json */
}

// ==== BACKFILL 0x0070C5C0  ObjectClass::GetFogByte  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetFogByte() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x70c5c0.json */
}

// ==== BACKFILL 0x0070C5D0  ObjectClass::HasSubObject  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::HasSubObject() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x70c5d0.json */
}

// ==== BACKFILL 0x0070C5F0  ObjectClass::IsNotShrouded  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::IsNotShrouded() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x70c5f0.json */
}

// ==== BACKFILL 0x0070D980  TacticalClass::StubReturnTrue3  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
void TacticalClass::StubReturnTrue3()
{

  ; /*0x70d980*/

}

// ==== BACKFILL 0x0070DC50  TechnoClass::processEMPulse  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::processEMPulse() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x70dc50.json */
}

// ==== BACKFILL 0x0070DD70  ObjectClass::CheckTypeFlag1681  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::CheckTypeFlag1681() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x70dd70.json */
}

// ==== BACKFILL 0x0070DD90  TechnoClass::g_var_e75276  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::g_var_e75276() {
    return 1; /*0x70dd95*/
}

// ==== BACKFILL 0x0070DDA0  ObjectClass::CheckTypeFlag1681_2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::CheckTypeFlag1681_2() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x70dda0.json */
}

// ==== BACKFILL 0x0070DDC0  BuildingClass::checkPlacement  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::checkPlacement()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0070DDC0.json)
}

// ==== BACKFILL 0x0070DE20  sub_70DE20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_70DE20::sub_70DE20(int a2)
{

  *((unsigned int *)this + 81) += a2; /*0x70de2c*/
  return a2; /*0x70de32*/

}

// ==== BACKFILL 0x0070E120  TechnoClass::Vt249to254  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::Vt249to254() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x70e120.json */
}

// ==== BACKFILL 0x0070E240  IsNonNullPtr  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int IsNonNullPtr(int* ptr) {
  return ptr && *ptr; /*0x70e252*/
}

// ==== BACKFILL 0x0070E340  ObjectClass::ResetTimer2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::ResetTimer2() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x70e340.json */
}

// ==== BACKFILL 0x0070E360  Techno::StartInvulnerability  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BuildingTypeClass * Techno::StartInvulnerability(int a2, int aP1, int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x70E360)
}

// ==== BACKFILL 0x0070EFD0  TechnoClass::HasPassengers  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::HasPassengers() const {
    return this->empLockRemaining > 0; /*0x70efdd*/
}

// ==== BACKFILL 0x0070F010  TechnoClass::COMStub_Return0_298  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::COMStub_Return0_298()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F010.json)
}

// ==== BACKFILL 0x0070F020  TechnoClass::StubReturnFalse5  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::StubReturnFalse5()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F020.json)
}

// ==== BACKFILL 0x0070F030  TechnoClass::StubReturnFalse6  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::StubReturnFalse6()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F030.json)
}

// ==== BACKFILL 0x0070F040  TechnoClass::checkMovementRestrictions  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::checkMovementRestrictions()
{

  return -1; /*0x70f043*/

}

// ==== BACKFILL 0x0070F050  TechnoClass::ProcessCellClearance  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::ProcessCellClearance()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F050.json)
}

// ==== BACKFILL 0x0070F0B0  TacticalClass::MapSpecialDrawMode  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::MapSpecialDrawMode(MouseClass * aP1)
{

  char v3; // al
  int result; // eax
  bool v5; // zf

  v3 = Render_Draw_731BF0(); /*0x70f0b3*/
  if ( this == (TacticalClass *)1 ) /*0x70f0bb*/
  {
    if ( v3 ) /*0x70f0bf*/
      return 62; /*0x70f0c7*/
    return (int)this; /*0x70f0bf*/
  }
  if ( this != (TacticalClass *)5 ) /*0x70f0cd*/
    return (int)this; /*0x70f0cd*/
  v5 = v3 == 0; /*0x70f0cf*/
  result = 63; /*0x70f0d1*/
  if ( v5 ) /*0x70f0d6*/
    return (int)this; /*0x70f0d8*/
  return result; /*0x70f0c6*/

}

// ==== BACKFILL 0x0070F0E0  TechnoClass::StubReturnFalse7  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::StubReturnFalse7()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F0E0.json)
}

// ==== BACKFILL 0x0070F0F0  TechnoClass::StubReturnFalse8  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::StubReturnFalse8()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F0F0.json)
}

// ==== BACKFILL 0x0070F100  TechnoClass::COMStub_Return0_307  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::COMStub_Return0_307()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F100.json)
}

// ==== BACKFILL 0x0070F110  TechnoClass::StubReturnFalse9  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::StubReturnFalse9()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070F110.json)
}

// ==== BACKFILL 0x0070F1D0  DrawBuildingRangeIndicator  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_70F1D0::DrawBuildingRangeIndicator(TechnoClass * aP1, int a3) {

  void **v4; // eax
  AnimClass *v5; // edi
  int *v6; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // esi
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int v14; // [esp+80h] [ebp-D4h]
  int v15; // [esp+84h] [ebp-D0h]
  int v16; // [esp+88h] [ebp-CCh]
  int v17; // [esp+98h] [ebp-BCh]
  int v18; // [esp+9Ch] [ebp-B8h]
  int v19; // [esp+A0h] [ebp-B4h]
  int v20; // [esp+A8h] [ebp-ACh]
  unsigned int v21[2]; // [esp+ACh] [ebp-A8h] BYREF
  unsigned int v22[2]; // [esp+B4h] [ebp-A0h] BYREF
  unsigned int v23[2]; // [esp+BCh] [ebp-98h] BYREF
  unsigned int v24[2]; // [esp+C4h] [ebp-90h] BYREF
  unsigned int v25[2]; // [esp+CCh] [ebp-88h] BYREF
  unsigned int v26[2]; // [esp+D4h] [ebp-80h] BYREF
  unsigned int v27[2]; // [esp+DCh] [ebp-78h] BYREF
  unsigned int v28[2]; // [esp+E4h] [ebp-70h] BYREF
  unsigned int v29[2]; // [esp+ECh] [ebp-68h] BYREF
  unsigned int v30[2]; // [esp+F4h] [ebp-60h] BYREF
  unsigned int v31[2]; // [esp+FCh] [ebp-58h] BYREF
  unsigned int v32[2]; // [esp+104h] [ebp-50h] BYREF
  unsigned int v33[2]; // [esp+10Ch] [ebp-48h] BYREF
  unsigned int v34[2]; // [esp+114h] [ebp-40h] BYREF
  unsigned int v35[2]; // [esp+11Ch] [ebp-38h] BYREF
  unsigned int v36[2]; // [esp+124h] [ebp-30h] BYREF
  unsigned int v37[2]; // [esp+12Ch] [ebp-28h] BYREF
  unsigned int v38[2]; // [esp+134h] [ebp-20h] BYREF
  unsigned int v39[2]; // [esp+13Ch] [ebp-18h] BYREF
  int v40; // [esp+144h] [ebp-10h] BYREF
  unsigned int v41[3]; // [esp+148h] [ebp-Ch] BYREF

  v4 = (void **)(*((int (**)(ObjectClass *, unsigned int, unsigned int))this->ptr_4 + 26))(this, 0, 0); /*0x70f1e0*/
  if ( !v4 ) /*0x70f1e5*/
  {
    v4 = (void **)*((unsigned int *)this + 75); /*0x70f1eb*/
    if ( !v4 ) /*0x70f1f3*/
    {
      if ( *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 184) ) /*0x70f1ff*/
      {
        v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x70f217*/
        if ( v5 ) /*0x70f21e*/
        {
          v6 = (int *)(*((int (**)(ObjectClass *, unsigned int *))this->ptr_4 + 18))(this, v41); /*0x70f239*/
          v4 = AnimClass::ctor( /*0x70f24c*/
                 v5,
                 *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 184),
                 v6,
                 0,
                 1,
                 (void *)0x600,
                 0,
                 0);
        }
        else
        {
          v4 = 0; /*0x70f253*/
        }
        *((unsigned int *)this + 75) = v4; /*0x70f257*/
        if ( v4 ) /*0x70f25d*/
        {
          BuildingClass::AimTurret((BuildingClass *)v4, this); /*0x70f266*/
          LOBYTE(v4) = HIBYTE(stru_A8EB00.ObjectTypeClass[31]); /*0x70f26b*/
          if ( !HIBYTE(stru_A8EB00.ObjectTypeClass[31]) ) /*0x70f272*/
          {
            v4 = (void **)*((unsigned int *)this + 75); /*0x70f278*/
            *((unsigned char *)v4 + 413) = 1; /*0x70f280*/
          }
        }
      }
      else
      {
        if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x70f29b*/
          v7 = *(uint8_t *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 12); /*0x70f2a8*/
        else
          v7 = *(uint16_t *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 24); /*0x70f2b4*/
        v8 = *aP1; /*0x70f2c5*/
        v9 = aP1[1]; /*0x70f2c7*/
        if ( (*((unsigned int *)((char *)&stru_A8EB00 + 416)) & 8) != 0 ) /*0x70f2d1*/
        {
          v10 = 12; /*0x70f2d3*/
          v16 = 8; /*0x70f2d8*/
          v15 = 12; /*0x70f2dc*/
        }
        else
        {
          v15 = 10; /*0x70f2e2*/
          v16 = 6; /*0x70f2ea*/
          v10 = 10; /*0x70f2f2*/
        }
        v14 = v8 + v10; /*0x70f2fd*/
        v18 = v16 - v10; /*0x70f309*/
        v17 = 2; /*0x70f314*/
        v19 = 4 - v10; /*0x70f31c*/
        v11 = -v10; /*0x70f325*/
        v12 = -v16; /*0x70f327*/
        v20 = -4 - v10; /*0x70f32f*/
        while ( 1 ) /*0x70f33e*/
        {
          v32[1] = v9 + v11; /*0x70f33e*/
          v32[0] = v8 + v12; /*0x70f348*/
          v24[1] = v9 + v11; /*0x70f34f*/
          v24[0] = v11 + v8; /*0x70f365*/
          (*(void (**)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f370*/
            g_DSurface_Hidden_2,
            v24,
            v32,
            v7);
          v34[1] = v9 + v11; /*0x70f37a*/
          v34[0] = v14; /*0x70f385*/
          v26[0] = v18 + v14; /*0x70f395*/
          v26[1] = v9 + v11; /*0x70f399*/
          (*(void (**)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f3b3*/
            g_DSurface_Hidden_2,
            v26,
            v34,
            v7);
          v21[0] = v14; /*0x70f3c0*/
          v21[1] = v9 - v16; /*0x70f3c4*/
          v28[0] = v14; /*0x70f3cb*/
          v28[1] = v9 + v11; /*0x70f3cf*/
          (*(void (**)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f3e6*/
            g_DSurface_Hidden_2,
            v28,
            v21,
            v7);
          v35[1] = v9 + v15; /*0x70f3f9*/
          v35[0] = v14; /*0x70f403*/
          v30[0] = v14; /*0x70f40a*/
          v30[1] = v9 + v16; /*0x70f41f*/
          (*(void (**)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f430*/
            g_DSurface_Hidden_2,
            v30,
            v35,
            v7);
          v36[0] = v18 + v14; /*0x70f43f*/
          v22[0] = v14; /*0x70f44f*/
          v36[1] = v9 + v15; /*0x70f45b*/
          v22[1] = v9 + v15; /*0x70f462*/
          (*(void (**)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f46e*/
            g_DSurface_Hidden_2,
            v22,
            v36,
            v7);
          v23[0] = v11 + v8; /*0x70f478*/
          v23[1] = v9 + v15; /*0x70f484*/
          v25[1] = v9 + v15; /*0x70f488*/
          v25[0] = v8 - v16; /*0x70f48c*/
          (*(void (**)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f4a3*/
            g_DSurface_Hidden_2,
            v25,
            v23,
            v7);
          v27[0] = v11 + v8; /*0x70f4b2*/
          v27[1] = v9 + v16; /*0x70f4bf*/
          v29[0] = v11 + v8; /*0x70f4c6*/
          v29[1] = v9 + v15; /*0x70f4d4*/
          (*(void (**)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f4e6*/
            g_DSurface_Hidden_2,
            v29,
            v27,
            v7);
          v31[1] = v9 + v11; /*0x70f4ef*/
          v31[0] = v11 + v8; /*0x70f4fa*/
          v33[0] = v11 + v8; /*0x70f506*/
          v33[1] = v9 - v16; /*0x70f50d*/
          (*(void (**)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f52d*/
            g_DSurface_Hidden_2,
            v33,
            v31,
            v7);
          v37[0] = v14 + v19; /*0x70f540*/
          v37[1] = v9; /*0x70f556*/
          v39[0] = v20 + v14; /*0x70f55d*/
          v39[1] = v9; /*0x70f564*/
          (*(void (**)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f575*/
            g_DSurface_Hidden_2,
            v39,
            v37,
            v7);
          v38[1] = v9 + 4; /*0x70f581*/
          v38[0] = v8; /*0x70f58b*/
          v41[0] = v8; /*0x70f592*/
          v41[1] = v9 - 4; /*0x70f599*/
          (*(void (**)(AudioStream *, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 48))( /*0x70f5b3*/
            g_DSurface_Hidden_2,
            v41,
            v38,
            v7);
          ++v8; /*0x70f5ba*/
          ++v14; /*0x70f5c3*/
          ++v9; /*0x70f5d9*/
          v4 = (void **)Color::ConvertToRGB( /*0x70f5e3*/
                          (Color *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3]
                                              + 4 * *(unsigned int *)&dword_A83D4C[134].__pad_90[4])
                                  + 776),
                          (int)&v40);
          v7 = ((uint8_t)*(unsigned short *)v4 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x70f64a*/
             | ((uint8_t)HIBYTE(*(unsigned short *)v4) >> g_BitMask_Blue << g_BitMask_Green)
             | (*((uint8_t *)v4 + 2) >> g_BitMask_Red << g_BitShift_Blue);
          LOBYTE(v4) = --v17; /*0x70f64c*/
          if ( !v17 ) /*0x70f651*/
            break; /*0x70f651*/
          v12 = -v16; /*0x70f335*/
        }
      }
    }
  }
  return (char)v4; /*0x70f27e*/

}

// ==== BACKFILL 0x0070F740  sub_70F740  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_70F740::sub_70F740(int a2)
{

  ObjectClass *v2; // ecx
  int v4; // [esp+4h] [ebp-8h]

  v2 = (ObjectClass *)((char *)this + 384); /*0x70f74c*/
  v2->AbstractClass =(void *)(unsigned int)(*(void **)(unsigned int *)((char *)&stru_A8EB00 + 416)); /*0x70f752*/
  ((unsigned int *)v2)[0] = (unsigned int)((void *)v4); /*0x70f758*/
  ((unsigned int *)v2)[0] = (unsigned int)((void *)a2); /*0x70f75b*/
  return v4; /*0x70f75e*/

}

// ==== BACKFILL 0x0070F820  ObjectClass::GetPriorityTarget  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetPriorityTarget() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x70f820.json */
}

// ==== BACKFILL 0x0070FBD0  UnitClass::IsDeactivated  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
bool UnitClass::IsDeactivated()
{
  return ((unsigned int *)this)[0]; /*0x70fbd6*/
}

// ==== BACKFILL 0x0070FE40  sub_70FE40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_70FE40::sub_70FE40(int a2)
{

  *((unsigned int *)this + 116) = a2; /*0x70fe44*/
  return a2; /*0x70fe4a*/

}

// ==== BACKFILL 0x0070FE50  sub_70FE50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_70FE50::sub_70FE50()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x70FE50)
}
