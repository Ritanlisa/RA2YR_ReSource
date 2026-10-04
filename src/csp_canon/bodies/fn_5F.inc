// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005F15C0  sub_5F15C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_5F15C0(int a2, int a3, int a4, short a5)
{
    (void)a2; (void)a3; (void)a4; (void)a5; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F15C0.json)
}

// ==== BACKFILL 0x005F1B70  ObjectClass::DetachAndFree  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::DetachAndFree() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f1b70.json */
}

// ==== BACKFILL 0x005F1BF0  Stream::WriteBlock  cls=Stream  sig=csp  renamed_refs=0  residual=- ====
int Stream::WriteBlock(int a1, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5F1BF0)
}

// ==== BACKFILL 0x005F1C30  ObjectTypeClass::CreateInstance  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::CreateInstance(int aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F1C30.json)
}

// ==== BACKFILL 0x005F1EE0  CellClass::GetBridgeIndexThunk  cls=NullModemClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::GetBridgeIndexThunk() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x5F1EE0.json */
}

// ==== BACKFILL 0x005F1F20  sub_5F1F20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_5F1F20()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F1F20.json)
}

// ==== BACKFILL 0x005F3340  nullsub_28  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_28()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F3340.json)
}

// ==== BACKFILL 0x005F3440  EventClass::GetState  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int EventClass::GetState(int a1)
{

  return 0; /*0x5f3442*/

}

// ==== BACKFILL 0x005F3450  Dialog::CheckButtonState  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
unsigned int INIClass::CheckButtonState()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F3450.json)
}

// ==== BACKFILL 0x005F34D0  sub_5F34D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5F34D0(char * String)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F34D0.json)
}

// ==== BACKFILL 0x005F3520  NullModemClass::COMStub_Return0  cls=NullModemClass  sig=csp  renamed_refs=0  residual=- ====
int NullModemClass::COMStub_Return0(int a1)
{

  return 0; /*0x5f3522*/

}

// ==== BACKFILL 0x005F3530  NullModemClass::Send  cls=NullModemClass  sig=csp  renamed_refs=0  residual=- ====
int NullModemClass::Send()
{

  return 0; /*0x5f3532*/

}

// ==== BACKFILL 0x005F3540  NullModemClass::Disconnect  cls=NullModemClass  sig=csp  renamed_refs=0  residual=- ====
int NullModemClass::Disconnect(int a2, int a3, int a4)
{

  return (*(int (**)(NullModemClass *, int, int, int, int))(*(unsigned int *)this->ConnectionClass + 52))( /*0x5f3556*/
           this,
           a2,
           a3,
           a4,
           1);

}

// ==== BACKFILL 0x005F35A0  NullModemClass::ddtor  cls=NullModemClass  sig=csp  renamed_refs=0  residual=- ====
int NullModemClass::ddtor(int a2, int a3, int a4)
{

  if ( *((unsigned int *)this + 15) ) /*0x5f35a0*/
    return (*(int (**)(unsigned int, int, int))(**((unsigned int **)this + 14) + 16))(*((unsigned int *)this + 14), a2, a3); /*0x5f35bb*/
  else
    return 0; /*0x5f35a7*/

}

// ==== BACKFILL 0x005F3E30  ObjectClass::HasC4  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::HasC4() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x5f3e30.json */
}

// ==== BACKFILL 0x005F4240  AbstractClass::COMStub_29  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_29()
{

  return 0; /*0x5f4242*/

}

// ==== BACKFILL 0x005F4250  AbstractClass::COMStub_28  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_28()
{

  return 0; /*0x5f4252*/

}

// ==== BACKFILL 0x005F4260  ObjectClass::GetThreatLevel  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetThreatLevel() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f4260.json */
}

// ==== BACKFILL 0x005F42A0  AbstractClass::COMStub_Ret2147483647_35  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret2147483647_35()
{

  return 0x7FFFFFFF; /*0x5f42a5*/

}

// ==== BACKFILL 0x005F42B0  AbstractClass::COMStub_Return0_37  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_37()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F42B0.json)
}

// ==== BACKFILL 0x005F42C0  AbstractClass::COMStub_Return0_38  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_38()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F42C0.json)
}

// ==== BACKFILL 0x005F42D0  AbstractClass::COMStub_Return0_39  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_39()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F42D0.json)
}

// ==== BACKFILL 0x005F42E0  AbstractClass::COMStub_Return0_40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_40()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F42E0.json)
}

// ==== BACKFILL 0x005F42F0  AbstractClass::COMStub_Return0_56  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_56()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F42F0.json)
}

// ==== BACKFILL 0x005F4300  AbstractClass::COMStub_Return0_57  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_57()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F4300.json)
}

// ==== BACKFILL 0x005F4310  AbstractClass::COMStub_Return0_63  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_63()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F4310.json)
}

// ==== BACKFILL 0x005F4320  AbstractClass::COMStub_64  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_64()
{

  return 0; /*0x5f4322*/

}

// ==== BACKFILL 0x005F4330  AbstractClass::COMStub_Return0_71  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_71()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F4330.json)
}

// ==== BACKFILL 0x005F4340  AbstractClass::COMStub_Return0_72  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_72()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F4340.json)
}

// ==== BACKFILL 0x005F4350  AbstractClass::COMStub_81  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_81()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F4350.json)
}

// ==== BACKFILL 0x005F4360  AbstractClass::COMStub_80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_80()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F4360.json)
}

// ==== BACKFILL 0x005F4370  AbstractClass::COMStub_Return0_82  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_82()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F4370.json)
}

// ==== BACKFILL 0x005F4380  AbstractClass::COMStub_89  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_89()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F4380.json)
}

// ==== BACKFILL 0x005F4390  AbstractClass::COMStub_90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_90()
{

  return 0; /*0x5f4392*/

}

// ==== BACKFILL 0x005F43A0  AbstractClass::COMStub_Return0_93  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_93()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F43A0.json)
}

// ==== BACKFILL 0x005F43B0  AircraftClass::StubReturnFalse3  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
bool AircraftClass::StubReturnFalse3()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F43B0.json)
}

// ==== BACKFILL 0x005F43C0  AircraftClass::StubReturnTrue  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
bool AircraftClass::StubReturnTrue()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F43C0.json)
}

// ==== BACKFILL 0x005F43D0  AbstractClass::COMStub_Return0_96  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_96()
{

  return 0; /*0x5f43d2*/

}

// ==== BACKFILL 0x005F43E0  AbstractClass::processStateUpdate  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::processStateUpdate()
{

  return -1; /*0x5f43e3*/

}

// ==== BACKFILL 0x005F43F0  AircraftClass::StubReturnFalse4  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
bool AircraftClass::StubReturnFalse4()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F43F0.json)
}

// ==== BACKFILL 0x005F4400  AbstractClass::COMStub_Return0_104  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_104()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F4400.json)
}

// ==== BACKFILL 0x005F4410  ObjectClass::MoveToDirection  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::MoveToDirection() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f4410.json */
}

// ==== BACKFILL 0x005F4730  ObjectClass::GetPlacementScreenRect  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetPlacementScreenRect() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f4730.json */
}

// ==== BACKFILL 0x005F4B10  ObjectClass::CalcDrawRect  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::CalcDrawRect() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f4b10.json */
}

// ==== BACKFILL 0x005F5230  Object::Unlink  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int SessionClass::Unlink()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F5230.json)
}

// ==== BACKFILL 0x005F5320  ObjectClass::ProcessInputKey  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::ProcessInputKey() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f5320.json */
}

// ==== BACKFILL 0x005F5930  AbstractClass::IsNotNull  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::IsNotNull() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f5930.json */
}

// ==== BACKFILL 0x005F5C20  ObjectClass::Fire  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::Fire() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x5f5c20.json */
}

// ==== BACKFILL 0x005F5D20  ObjectClass::IsYellowHP  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool ObjectClass::IsYellowHP() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 10 errs): wrong-universe gap2 body; truth func_0x5f5d20.json */
}

// ==== BACKFILL 0x005F5D90  ObjectClass::IsGreenHP  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool ObjectClass::IsGreenHP() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f5d90.json */
}

// ==== BACKFILL 0x005F5DD0  BuildingClass::GetSellPriority  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetSellPriority()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F5DD0.json)
}
} // namespace gamemd

// ==== BACKFILL 0x005F5E80  BuildingClass::SaveLoad_Register  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::SaveLoad_Register()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F5E80.json)
}

// ==== BACKFILL 0x005F5F30  ObjectClass::GetMember41  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetMember41() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f5f30.json */
}

// ==== BACKFILL 0x005F5F40  ObjectClass::GetZAboveGround  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetZAboveGround()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F5F40.json)
}

// ==== BACKFILL 0x005F5FA0  ObjectClass::SetZ  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::SetZ() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f5fa0.json */
}

// ==== BACKFILL 0x005F6060  ObjectClass::SetAnim  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::SetAnim(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f6060.json */
}

// ==== BACKFILL 0x005F60A0  ObjectClass::SetCellOverlayFlag  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::SetCellOverlayFlag()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F60A0.json)
}

// ==== BACKFILL 0x005F6120  ObjectClass::ClearCellOverlayFlag  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::ClearCellOverlayFlag()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6120.json)
}

// ==== BACKFILL 0x005F61A0  ObjectTypeClass::ReleaseWaveAndString  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectTypeClass::ReleaseWaveAndString(void *a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F61A0.json)
}

// ==== BACKFILL 0x005F6250  HouseClass::ProcessPower  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::ProcessPower()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6250.json)
}

// ==== BACKFILL 0x005F6440  ObjectClass::ComputeDistance  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::ComputeDistance(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f6440.json */
}

// ==== BACKFILL 0x005F6500  BuildingClass::SquaredDistanceTo  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::SquaredDistanceTo(ObjectClass* target) const
{
    return 0; (void)target; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6500.json)
}
} // namespace gamemd

// ==== BACKFILL 0x005F65A0  ObjectClass::GetCoords  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetCoords() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f65a0.json */
}

// ==== BACKFILL 0x005F65D0  ObjectClass::DelegateVt69  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::DelegateVt69() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f65d0.json */
}

// ==== BACKFILL 0x005F6690  ObjectClass::IsActive  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
bool ObjectClass::IsActive() const {
    return *(unsigned char *)((char *)this + 144) == 0; /*0x5f669d 真值 [ecx+90h]*/
}

// ==== BACKFILL 0x005F6790  Network_Process_5F6790  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * sub_5F6790(int * a1, int a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // ebp
  int v6; // ecx
  unsigned int *v7; // edx
  unsigned int *v8; // esi
  int v10; // [esp+10h] [ebp-Ch]
  int v11; // [esp+14h] [ebp-8h]

  v2 = *(unsigned int *)(a2 + 16); /*0x5f6796*/
  v4 = 0; /*0x5f679f*/
  v5 = 0; /*0x5f67a1*/
  v6 = 0; /*0x5f67a3*/
  v11 = v2; /*0x5f67ab*/
  if ( v2 - 1 >= 0 ) /*0x5f67af*/
  {
    v7 = (unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * (v2 - 1)); /*0x5f67b4*/
    v10 = v2; /*0x5f67b8*/
    do /*0x5f67e0*/
    {
      v8 = (unsigned int *)*v7--; /*0x5f67bc*/
      v4 += v8[39]; /*0x5f67cb*/
      v5 += v8[40]; /*0x5f67d4*/
      v6 += v8[41]; /*0x5f67d9*/
      --v10; /*0x5f67dc*/
    }
    while ( v10 ); /*0x5f67e0*/
    v2 = v11; /*0x5f67e2*/
  }
  *a1 = v4 / v2; /*0x5f67fd*/
  a1[1] = v5 / v2; /*0x5f6801*/
  a1[2] = v6 / v2; /*0x5f6805*/
  return a1; /*0x5f67ff*/
}

// ==== BACKFILL 0x005F6940  ObjectClass::SetPosition  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::SetPosition() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f6940.json */
}

// ==== BACKFILL 0x005F6960  ObjectClass::GetCellCoords  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetCellCoords() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f6960.json */
}

// ==== BACKFILL 0x005F69C0  ObjectClass::CoordToCell  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::CoordToCell() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f69c0.json */
}

// ==== BACKFILL 0x005F6A10  ObjectClass::GetCell  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetCell()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6A10.json)
}

// ==== BACKFILL 0x005F6B50  AbstractClass::COMStub_Return0_105  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_105()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6B50.json)
}

// ==== BACKFILL 0x005F6B60  ObjectClass::IsBelowScreen  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::IsBelowScreen() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f6b60.json */
}

// ==== BACKFILL 0x005F6B90  ObjectClass::IsHeightAboveThreshold  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::IsHeightAboveThreshold() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f6b90.json */
}

// ==== BACKFILL 0x005F6BC0  AbstractClass::COMStub_Return0_33  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_33()
{

  return 0; /*0x5f6bc2*/

}

// ==== BACKFILL 0x005F6C10  ObjectClass::IsAboveScreenMargin  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::IsAboveScreenMargin()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6C10.json)
}

// ==== BACKFILL 0x005F6C30  ObjectClass::IsPlayerOwnedAndCheck  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::IsPlayerOwnedAndCheck() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f6c30.json */
}

// ==== BACKFILL 0x005F6C70  AbstractClass::COMStub_79  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_79() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f6c70.json */
}

// ==== BACKFILL 0x005F6C80  ObjectClass::GetCoords_Alt  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetCoords_Alt() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f6c80.json */
}

// ==== BACKFILL 0x005F6CB0  ObjectClass::CheckFlagD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::CheckFlagD0(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f6cb0.json */
}

// ==== BACKFILL 0x005F6CD0  ObjectClass::IsCrushable  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool ObjectClass::IsCrushable(void* a1) {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f6cd0.json */
}

// ==== BACKFILL 0x005F6DA0  ObjectClass::ResetPointerIfMatch  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::ResetPointerIfMatch() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5f6da0.json */
}

// ==== BACKFILL 0x005F6DC0  ObjectClass::CreateInstance  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::CreateInstance()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6DC0.json)
}

// ==== BACKFILL 0x005F75B0  AbstractTypeClass::GetData  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::GetData(void *a1)
{

  return 0; /*0x5f75b2*/

}

// ==== BACKFILL 0x005F75C0  ObjectTypeClass::InitTripleTen  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ObjectTypeClass::InitTripleTen(unsigned int * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F75C0.json)
}

// ==== BACKFILL 0x005F75E0  Struct::InitTriple256  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Struct::InitTriple256(unsigned int * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5F75E0)
}

// ==== BACKFILL 0x005F7610  AbstractTypeClass::GetType  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::GetType(int a1)
{

  return 0; /*0x5f7612*/

}

// ==== BACKFILL 0x005F7620  AbstractTypeClass::SetType  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::SetType()
{

  return 0; /*0x5f7622*/

}

// ==== BACKFILL 0x005F7630  AbstractTypeClass::Validate  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::Validate()
{

  return 0; /*0x5f7632*/

}

// ==== BACKFILL 0x005F8080  ObjectTypeClass::CleanupWeapons  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectTypeClass::CleanupWeapons()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F8080.json)
}

// ==== BACKFILL 0x005F96B0  TheaterObjectTypeClassSpecificID  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int TheaterObjectTypeClassSpecificID(char *a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F96B0.json)
}

// ==== BACKFILL 0x005F9950  AbstractClass::SaveLoad_PrefixWrapper  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::SaveLoad_PrefixWrapper(TechnoTypeClass * aP0, ObjectTypeClass * aP1, TechnoTypeClass * aP2)
{
    (void)aP0; (void)aP1; (void)aP2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9950.json)
}

// ==== BACKFILL 0x005F9970  COMObject::GetSizeMaxWrapper  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int COMObject::GetSizeMaxWrapper(AbstractClass * aP0, AbstractClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5F9970)
}

// ==== BACKFILL 0x005F9AE0  ObjectTypeClass::Destru_vt08  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
ObjectTypeClass * ObjectTypeClass::Destru_vt08(void * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9AE0.json)
}

// ==== BACKFILL 0x005F9B60  ObjectTypeClass::FreeLoaderBuffer  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::FreeLoaderBuffer()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F9B60.json)
}

// ==== BACKFILL 0x005FA430  nullsub_29  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_29()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FA430)
}

// ==== BACKFILL 0x005FA4A0  Options::SetScoreVolume  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
void Options::SetScoreVolume(float volume, int pad, void *a3_1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FA4A0)
}

// ==== BACKFILL 0x005FA510  Options::SetSoundVolume  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
void Options::SetSoundVolume(float volume, int pad, void *a3_1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FA510)
}

// ==== BACKFILL 0x005FA590  Options::SetVoiceVolume  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
void Options::SetVoiceVolume(float volume, int pad, void *a3_1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FA590)
}

// ==== BACKFILL 0x005FAD10  ScenarioClass::SaveGameOptions  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::SaveGameOptions() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 34 errs): wrong-universe gap2 body; truth func_0x5FAD10.json */
}

// ==== BACKFILL 0x005FB2E0  Rules::GetProductionTimeMult  cls=Rules  sig=csp  renamed_refs=0  residual=- ====
char * Rules::GetProductionTimeMult(int aP1)
{

  char *result; // eax
  int v3; // ecx

  result = (char *)aP1; /*0x5fb2e0*/
  if ( aP1 ) /*0x5fb2e6*/
  {
    v3 = *(unsigned int *)this->__pad_0; /*0x5fb2e8*/
    if ( aP1 >= 5 ) /*0x5fb2ed*/
      return (char *)(8 * aP1 / (v3 + 1)); /*0x5fb301*/
    else
      return (char *)((&(&off_832CEC)[8 * aP1])[v3]); /*0x5fb2f2*/
  }
  return result; /*0x5fb2f9*/

}

// ==== BACKFILL 0x005FBF70  Map_Helper_5FBF70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5FBF70::sub_5FBF70()
{

  return (int)((unsigned int *)this)[0]; /*0x5fbf73*/

}

// ==== BACKFILL 0x005FD270  Object::CheckState  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
char SessionClass::CheckState(IUnknown * aP1, int a3)
{
    (void)aP1; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FD270.json)
}

// ==== BACKFILL 0x005FD2E0  ReadOverlayINI  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_5FD2E0::ReadOverlayINI() {

  int Buffer_field_14; // edi
  int Buffer_field_18; // ebp
  int Buffer_field_20; // esi
  int Buffer_field_24; // ebx
  int Base64Data; // esi
  int v6; // edi
  int i; // edi
  int j; // esi
  char v9; // bl
  void *v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // ebx
  int v14; // esi
  int v15; // edi
  int k; // edi
  int m; // esi
  unsigned char *v18; // eax
  ObjectClass *v20; // [esp+0h] [ebp-74h] BYREF
  char v21[4]; // [esp+4h] [ebp-70h] BYREF
  int16_t v22; // [esp+8h] [ebp-6Ch] BYREF
  int16_t v23; // [esp+Ah] [ebp-6Ah]
  INIClass *v24; // [esp+Ch] [ebp-68h]
  Straw v25; // [esp+10h] [ebp-64h] BYREF
  int v26; // [esp+18h] [ebp-5Ch]
  Buffer v27; // [esp+1Ch] [ebp-58h] BYREF
  LCWStraw v28; // [esp+4Ch] [ebp-28h] BYREF

  v24 = (INIClass *)this; /*0x5fd2e3*/
  INIClass::ResetSection((INIClass *)this); /*0x5fd2e7*/
  if ( *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 408) > 1 ) /*0x5fd2f3*/
  {
    OverlayClass::updateOverlayState((OverlayClass *)&v27.Buffer_field_10, 640, 400); /*0x5fd30b*/
    v27.Buffer_field_20 = 2; /*0x5fd314*/
    Buffer::Init((Buffer *)&v27.Buffer_field_24, 0, 512000); /*0x5fd323*/
    v27.Buffer_field_10 = (int)&BSurface_Vtable; /*0x5fd32c*/
    XSurface::Fill((XSurface *)&v27.Buffer_field_10, 0); /*0x5fd336*/
    Buffer_field_14 = v27.Buffer_field_14; /*0x5fd33f*/
    Buffer_field_18 = v27.Buffer_field_18; /*0x5fd347*/
    Buffer_field_20 = v27.Buffer_field_20; /*0x5fd34b*/
    ++v27.Buffer_field_1C; /*0x5fd350*/
    Buffer_field_24 = v27.Buffer_field_24; /*0x5fd354*/
    (*(void (**)(int *))(v27.Buffer_field_10 + 112))(&v27.Buffer_field_10); /*0x5fd35c*/
    (*(void (**)(int *))(v27.Buffer_field_10 + 116))(&v27.Buffer_field_10); /*0x5fd367*/
    Base64Data = INIClass::GetBase64Data( /*0x5fd380*/
                   v24,
                   g_INI_Key_OverlayPack,
                   Buffer_field_24,
                   Buffer_field_14 * Buffer_field_18 * Buffer_field_20);
    if ( Base64Data > 0 ) /*0x5fd386*/
    {
      v6 = v27.Buffer_field_24; /*0x5fd394*/
      ++v27.Buffer_field_1C; /*0x5fd399*/
      (*(void (**)(int *))(v27.Buffer_field_10 + 112))(&v27.Buffer_field_10); /*0x5fd3a1*/
      (*(void (**)(int *))(v27.Buffer_field_10 + 116))(&v27.Buffer_field_10); /*0x5fd3ac*/
      v25.Straw_field_0x04 = 0; /*0x5fd3b3*/
      v26 = 0; /*0x5fd3b9*/
      Buffer::Init(&v27, v6, Base64Data); /*0x5fd3c5*/
      v27.Buffer_field_0C = 0; /*0x5fd3ce*/
      *(unsigned int *)v25.__pad_0 = &vt_BufferStraw; /*0x5fd3d9*/
      LCWStraw::Constructor(&v28, 1, 0x2000); /*0x5fd3e1*/
      Delegate::Set((Straw *)&v28, (int)&v25); /*0x5fd3ef*/
      for ( i = 0; i < 512; ++i ) /*0x5fd3f4*/
      {
        for ( j = 0; j < 512; ++j ) /*0x5fd3f6*/
        {
          v22 = j; /*0x5fd403*/
          v23 = i; /*0x5fd408*/
          *(unsigned int *)v21 = -1; /*0x5fd40d*/
          LCW::DecompressReader(&v28, v21, 1); /*0x5fd415*/
          if ( *(unsigned int *)v21 != -1 ) /*0x5fd421*/
          {
            *(unsigned int *)v21 = (uint8_t)v21[0]; /*0x5fd42f*/
            if ( ((*(int (**)(unsigned int))(**(unsigned int **)(*(unsigned int *)stru_A83D50.__pad_34 /*0x5fd48c*/
                                                              + 4 * (uint8_t)v21[0])
                                                + 156))(*(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34
                                                                  + 4 * (uint8_t)v21[0]))
               || *(unsigned int *)(*(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * *(unsigned int *)v21) + 668))
              && (!*(unsigned int *)&dword_A8B238
               || !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * *(unsigned int *)v21) + 682))
              && (uint8_t)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], &v22) )
            {
              v9 = *((unsigned char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v22) + 286); /*0x5fd4a4*/
              v10 = (void *)__2_YAPAXI_Z(0xB0u); /*0x5fd4af*/
              if ( v10 ) /*0x5fd4b9*/
                Object::SpawnAtCell(v10, *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * *(unsigned int *)v21), &v22, -1); /*0x5fd4d2*/
              if ( *(unsigned int *)v21 == 24 || *(unsigned int *)v21 == 25 || *(unsigned int *)v21 == 237 || *(unsigned int *)v21 == 238 ) /*0x5fd4f1*/
                *((unsigned char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v22) + 286) = v9; /*0x5fd502*/
            }
          }
        }
      }
      --v27.Buffer_field_1C; /*0x5fd52b*/
      LCWStraw::Dtor(&v28); /*0x5fd52f*/
      Vector::Clear((int)&v27); /*0x5fd538*/
      Straw::Dtor(&v25); /*0x5fd541*/
    }
    v11 = v27.Buffer_field_14; /*0x5fd54e*/
    v12 = v27.Buffer_field_18; /*0x5fd552*/
    v13 = v27.Buffer_field_24; /*0x5fd556*/
    (*(void (**)(int *))(v27.Buffer_field_10 + 112))(&v27.Buffer_field_10); /*0x5fd564*/
    (*(void (**)(int *))(v27.Buffer_field_10 + 116))(&v27.Buffer_field_10); /*0x5fd56f*/
    v14 = INIClass::GetBase64Data(v24, g_INI_Key_OverlayDataPack, v13, v11 * v12); /*0x5fd585*/
    if ( v14 > 0 ) /*0x5fd589*/
    {
      v15 = v27.Buffer_field_24; /*0x5fd597*/
      ++v27.Buffer_field_1C; /*0x5fd5a0*/
      (*(void (**)(int *))(v27.Buffer_field_10 + 112))(&v27.Buffer_field_10); /*0x5fd5a4*/
      (*(void (**)(int *))(v27.Buffer_field_10 + 116))(&v27.Buffer_field_10); /*0x5fd5af*/
      v25.Straw_field_0x04 = 0; /*0x5fd5b6*/
      v26 = 0; /*0x5fd5bc*/
      *(unsigned int *)v25.__pad_0 = &vt_Straw; /*0x5fd5c0*/
      Buffer::Init(&v27, v15, v14); /*0x5fd5c8*/
      v27.Buffer_field_0C = 0; /*0x5fd5d1*/
      *(unsigned int *)v25.__pad_0 = &vt_BufferStraw; /*0x5fd5dc*/
      LCWStraw::Constructor(&v28, 1, 0x2000); /*0x5fd5e4*/
      Delegate::Set((Straw *)&v28, (int)&v25); /*0x5fd5f2*/
      for ( k = 0; k < 512; ++k ) /*0x5fd5f7*/
      {
        for ( m = 0; m < 512; ++m ) /*0x5fd5f9*/
        {
          v22 = m; /*0x5fd606*/
          v23 = k; /*0x5fd60b*/
          HIBYTE(v20) = 0; /*0x5fd610*/
          LCW::DecompressReader(&v28, (char *)&v20 + 3, 1); /*0x5fd615*/
          if ( (uint8_t)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], &v22) ) /*0x5fd624*/
          {
            v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v22); /*0x5fd637*/
            v18[286] = HIBYTE(v20); /*0x5fd640*/
          }
        }
      }
      --v27.Buffer_field_1C; /*0x5fd661*/
      LCWStraw::Dtor(&v28); /*0x5fd665*/
      Vector::Clear((int)&v27); /*0x5fd66e*/
      Straw::Dtor(&v25); /*0x5fd677*/
    }
    --v27.Buffer_field_1C; /*0x5fd685*/
    Vector::Clear((int)&v27.Buffer_field_24); /*0x5fd689*/
  }
  return ProcessExpiredPointers(v20); /*0x5fd697*/

}

// ==== BACKFILL 0x005FD6A0  OverlayClass::WriteINI  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayClass::WriteINI() {
  int v2; // edi
  signed int v3; // ebx
  int v4; // esi
  int v5; // esi
  int v6; // eax
  int i; // esi
  char *v8; // eax
  int v9; // eax
  int v10; // edi
  signed int v11; // ebx
  int v12; // esi
  int v13; // esi
  int v14; // eax
  int j; // esi
  char *v16; // eax
  int v17; // eax
  int16_t v19; // [esp+1Ch] [ebp-8Ch] BYREF
  int16_t v20; // [esp+1Eh] [ebp-8Ah]
  int v21[3]; // [esp+20h] [ebp-88h] BYREF
  int v22[4]; // [esp+2Ch] [ebp-7Ch] BYREF
  int v23[3]; // [esp+3Ch] [ebp-6Ch] BYREF
  int v24[4]; // [esp+48h] [ebp-60h] BYREF
  int v25[10]; // [esp+58h] [ebp-50h] BYREF
  int v26[10]; // [esp+80h] [ebp-28h] BYREF

  INIClass::ClearSection((int *)this, (int)aOverlay, 0); /*0x5fd6b4*/
  INIClass::ClearSection((int *)this, (int)g_INI_Key_OverlayPack, 0); /*0x5fd6c2*/
  v2 = 0; /*0x5fd6cd*/
  v3 = 0; /*0x5fd6cf*/
  v4 = (*(int (**)(int))(*(unsigned int *)DSurface_Alternate + 128))(DSurface_Alternate); /*0x5fd6df*/
  v5 = (*(int (**)(int))(*(unsigned int *)DSurface_Alternate + 124))(DSurface_Alternate) * v4; /*0x5fd6e6*/
  v6 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x5fd6f3*/
  v21[1] = 0; /*0x5fd6fa*/
  v21[2] = 0; /*0x5fd700*/
  Buffer::Init(v22, v6, v5); /*0x5fd70c*/
  v22[3] = 0; /*0x5fd715*/
  v21[0] = (int)(void *)&BufferPipe_vftable; /*0x5fd71f*/
  LCWPipe::Constructor(v26, 0, 0x2000); /*0x5fd727*/
  Pipe::SetDelegate(v26, (int)v21); /*0x5fd735*/
  do /*0x5fd776*/
  {
    for ( i = 0; i < 512; ++i ) /*0x5fd73a*/
    {
      v19 = i; /*0x5fd748*/
      v20 = v2; /*0x5fd74d*/
      v8 = (char *)CellCoord::To_CellObj(&dword_87F7E8, &v19); /*0x5fd752*/
      v3 += (signed int)LCW::Compress((int)v26, v8 + 68, 1); /*0x5fd764*/
    }
    ++v2; /*0x5fd76f*/
  }
  while ( v2 < 512 ); /*0x5fd776*/
  if ( v3 ) /*0x5fd77a*/
  {
    v9 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x5fd78b*/
    INIClass::ReadBase64Data(this, (uint8_t *)g_INI_Key_OverlayPack, v9, v3); /*0x5fd796*/
    (*(void (**)(int))(*(unsigned int *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x5fd7a3*/
  }
  (*(void (**)(int))(*(unsigned int *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x5fd7ae*/
  INIClass::ClearSection((int *)this, (int)g_INI_Key_OverlayDataPack, 0); /*0x5fd7ba*/
  v10 = 0; /*0x5fd7c5*/
  v11 = 0; /*0x5fd7c7*/
  v12 = (*(int (**)(int))(*(unsigned int *)DSurface_Alternate + 128))(DSurface_Alternate); /*0x5fd7d7*/
  v13 = (*(int (**)(int))(*(unsigned int *)DSurface_Alternate + 124))(DSurface_Alternate) * v12; /*0x5fd7de*/
  v14 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x5fd7eb*/
  v23[1] = 0; /*0x5fd7f2*/
  v23[2] = 0; /*0x5fd7f8*/
  v23[0] = (int)(void *)&Pipe_vftable; /*0x5fd7fc*/
  Buffer::Init(v24, v14, v13); /*0x5fd804*/
  v24[3] = 0; /*0x5fd80d*/
  v23[0] = (int)(void *)&BufferPipe_vftable; /*0x5fd817*/
  LCWPipe::Constructor(v25, 0, 0x2000); /*0x5fd81f*/
  Pipe::SetDelegate(v25, (int)v23); /*0x5fd82d*/
  do /*0x5fd870*/
  {
    for ( j = 0; j < 512; ++j ) /*0x5fd832*/
    {
      v19 = j; /*0x5fd840*/
      v20 = v10; /*0x5fd845*/
      v16 = (char *)CellCoord::To_CellObj(&dword_87F7E8, &v19); /*0x5fd84a*/
      v11 += (signed int)LCW::Compress((int)v25, v16 + 286, 1); /*0x5fd85e*/
    }
    ++v10; /*0x5fd869*/
  }
  while ( v10 < 512 ); /*0x5fd870*/
  if ( v11 ) /*0x5fd874*/
  {
    v17 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)DSurface_Alternate + 92))(DSurface_Alternate, 0, 0); /*0x5fd885*/
    INIClass::ReadBase64Data(this, (uint8_t *)g_INI_Key_OverlayDataPack, v17, v11); /*0x5fd890*/
    (*(void (**)(int))(*(unsigned int *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x5fd89d*/
  }
  (*(void (**)(int))(*(unsigned int *)DSurface_Alternate + 96))(DSurface_Alternate); /*0x5fd8a8*/
  LCWPipe::Dtor(v25); /*0x5fd8af*/
  Vector::Clear((int)v24); /*0x5fd8b8*/
  Pipe::Dtor(v23); /*0x5fd8c1*/
  LCWPipe::Dtor(v26); /*0x5fd8ca*/
  Vector::Clear((int)v22); /*0x5fd8d3*/
// 0x631c80
  return Pipe::Dtor(v21); /*0x5fd8e1*/
}

// ==== BACKFILL 0x005FD8F0  Object::LoadObject  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
int SessionClass::LoadObject(ObjectClass * aP1, int aP1a)
{
    (void)aP1; (void)aP1a; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FD8F0.json)
}

// ==== BACKFILL 0x005FD950  Object::SaveObject  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
int SessionClass::SaveObject(TechnoTypeClass * aP0, int * a1, int aP2)
{
    (void)aP0; (void)a1; (void)aP2; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x005FD950.json)
}

// ==== BACKFILL 0x005FDCC0  globalHelper_0FDCC0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * globalHelper_0FDCC0(IUnknown * aP0, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FDCC0)
}

// ==== BACKFILL 0x005FDF00  Object::StubReturn176  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
int Object::StubReturn176()
{

  return 176; /*0x5fdf05*/

}

// ==== BACKFILL 0x005FDF10  Object::ddtor  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
int SessionClass::ddtor(int a1, unsigned int * a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FDF10.json)
}

// ==== BACKFILL 0x005FDF50  Object::StubReturn20  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
int Object::StubReturn20()
{

  return 20; /*0x5fdf55*/

}

// ==== BACKFILL 0x005FDF60  nullsub_212  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_212(int a1, int a2)
{
  ; /*0x5fdf60*/
}

// ==== BACKFILL 0x005FE020  OverlayClass::updateOverlayState  cls=OverlayClass  sig=csp  renamed_refs=0  residual=- ====
void* OverlayClass::updateOverlayState(int a1, int a2) {
  ((unsigned int *)this)[0] = (void *)a1; /*0x5fe02a*/
  ((unsigned int *)this)[0] = (void *)a2; /*0x5fe02d*/
  ((unsigned int *)this)[0] = 0; /*0x5fe030*/
  this->ObjectClass = &XSurface_Vtable; /*0x5fe037*/
  return this; /*0x5fe03d*/
}

// ==== BACKFILL 0x005FE4C0  OverlayTypeClass::GetTile  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int * OverlayTypeClass::GetTile(int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FE4C0.json)
}

// ==== BACKFILL 0x005FE530  OverlayTypeClass::GetType  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
bool OverlayTypeClass::GetType(IUnknown * aP2, int a3)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FE530.json)
}

// ==== BACKFILL 0x005FE570  OverlayTypeClass::GetDamage  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
OverlayClass * OverlayTypeClass::GetDamage(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FE570.json)
}

// ==== BACKFILL 0x005FE5A0  OverlayTypeClass::GetLandType  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
void OverlayTypeClass::GetLandType(unsigned int * a2, int * a3, unsigned int a4)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FE5A0.json)
}

// ==== BACKFILL 0x005FEA30  OverlayTypeClass::vt_entry_6C  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * OverlayTypeClass::vt_entry_6C(unsigned int * a0, OverlayTypeClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FEA30.json)
}

// ==== BACKFILL 0x005FEA50  OverlayTypeClass::PowerDrainUpdate  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::PowerDrainUpdate(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FEA50.json)
}

// ==== BACKFILL 0x005FEC10  OverlayTypeClass::SaveLoad_Prefix_0  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int   OverlayTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FEC10.json)
}

// ==== BACKFILL 0x005FEC30  OverlayTypeClass::GetClassIdentifier  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FEC30.json)
}

// ==== BACKFILL 0x005FED00  OverlayTypeClass::GetRadarColor  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::GetRadarColor(int a2, unsigned int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FED00.json)
}

// ==== BACKFILL 0x005FEF00  OverlayTypeClass::GetTypeIdentifier  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::GetTypeIdentifier()
{

  return 21; /*0x5fef05*/

}

// ==== BACKFILL 0x005FEF10  OverlayTypeClass::GetObjectSize  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::GetObjectSize()
{

  return 700; /*0x5fef15*/

}

// ==== BACKFILL 0x005FEF20  OverlayTypeClass::GetAuxField  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::GetAuxField()
{

  return this->LandType[0]; /*0x5fef26*/

}

// ==== BACKFILL 0x005FEF30  OverlayTypeClass::ddtor  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
OverlayTypeClass * OverlayTypeClass::ddtor(void ** Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FEF30.json)
}

// ==== BACKFILL 0x005FF250  ObjectClass::RegisterInArray  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* ObjectClass::RegisterInArray(int a1, int a2, int a3, int a4) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5ff250.json */
}

// ==== BACKFILL 0x005FF800  WinMainSetup_Setup_5FF800  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_5FF800()
{
  unsigned int v1;

  if ( dword_AC1838 ) /*0x5ff807*/
  {
    RA2_OPDEL(dword_AC1838); /*0x5ff80a*/
    dword_AC1838 = 0; /*0x5ff812*/
  }
  v1 = dword_AC1698; /*0x5ff81d*/
  do /*0x5ff83d*/
  {
    if ( *(unsigned int *)(v1) ) /*0x5ff822*/
      (**(void (***)(int, int))*(unsigned int *)(v1))(*(unsigned int *)(v1), 1); /*0x5ff82c*/
    *(unsigned int *)(v1)++ = 0; /*0x5ff82e*/
  }
  while ( (int)v1 < (int)&dword_AC17C0 ); /*0x5ff83d*/
}

// ==== BACKFILL 0x005FFFA0  Render_Render_5FFFA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_5FFFA0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FFFA0.json)
}

// ==== BACKFILL 0x005FFFC0  DynamicVector::Destructor  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::Destructor()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005FFFC0.json)
}
