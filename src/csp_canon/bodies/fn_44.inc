// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004436F0  ObjectClass::HandleRallyPointCommand  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::HandleRallyPointCommand() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4436F0.json */
}

// ==== BACKFILL 0x00445F80  SuperWeapon::CreateUnits  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int SuperWeapon::CreateUnits() {
int BuildingClass::CreateUnits()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00445F80.json)
}
} }

// ==== BACKFILL 0x00447E00  AnimClass::initAnimation  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::initAnimation() {
  double v1; // st7
  unsigned int *v3; // esi
  unsigned int *v4; // eax
  int result; // eax
  int v6; // [esp+28h] [ebp-1Ch]
  unsigned char v7[12]; // [esp+2Ch] [ebp-18h] BYREF
  unsigned char v8[12]; // [esp+38h] [ebp-Ch] BYREF
  int v9; // [esp+48h] [ebp+4h]

  v3 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v9 + 72))(v9, v7); /*0x447e1a*/
  v4 = (unsigned int *)(*((int (**)(BuildingClass *, unsigned char *, int))this->ptr_4 + 42))(this, v8, v9); /*0x447e24*/
  v6 = v4[2] - v3[2]; /*0x447e48*/
  Math::Sqrt( /*0x447e74*/
    (double)(*v4 - *v3) * (double)(*v4 - *v3)
  + (double)v6 * (double)v6
  + (double)(v4[1] - v3[1]) * (double)(v4[1] - v3[1]));
  (result) = ((result) & ~0xFFFF) | ((Math::RoundToInt(v1)) & 0xFFFF); /*0x447e7c*/
  return result; /*0x447e81*/
}

// ==== BACKFILL 0x00447F10  BuildingClass::GetFireError  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.33 批 3: BuildingClass 载体在 gamemd (structure/building.hpp)
int BuildingClass::GetFireError()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00447F10.json)
}
} // namespace ra2::game

// ==== BACKFILL 0x004494C0  BuildingClass::CanBeSold  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::CanBeSold()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004494C0.json)
}
} // namespace gamemd

// ==== BACKFILL 0x00449540  AnimClass::resetAnimation  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::resetAnimation()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00449540.json)
}

// ==== BACKFILL 0x00449A50  AnimClass::setLoopCount  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::setLoopCount()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00449A50.json)
}

// ==== BACKFILL 0x0044B760  AbstractClass::COMStub_133  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::AbstractClass_COMStub_133()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x44B760)
}

// ==== BACKFILL 0x0044B770  AbstractClass::COMStub_137  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::AbstractClass_COMStub_137()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x44B770)
}

// ==== BACKFILL 0x0044D5D0  BuildingClass::CaptureBuilding  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::CaptureBuilding()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044D5D0.json)
}
} // namespace gamemd

// ==== BACKFILL 0x0044D700  BuildingClass::GetAmmoCountScaled  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetAmmoCountScaled()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044D700.json)
}
} // namespace gamemd

// ==== BACKFILL 0x0044D760  BuildingClass::PushScriptAction  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::PushScriptAction()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044D760.json)
}

// ==== BACKFILL 0x0044E3A0  BuildingClass::CheckOverlapWithOthers  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
char BuildingClass::CheckOverlapWithOthers()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044E3A0.json)
}
} // namespace gamemd

// ==== BACKFILL 0x0044F640  BuildingClass::GetFactoryPosition  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetFactoryPosition() const
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0044F640.json)
}
} // namespace gamemd

// ==== BACKFILL 0x0044F6E0  sub_44F6E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_44F6E0(unsigned int * a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0044F6E0.json)
}

// ==== BACKFILL 0x0044FE60  sub_44FE60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::sub_44FE60()
{

  int result; // eax
  int i; // esi
  int v4; // ecx

  INIClass::ClearSection((int)this, (int)aStructures, 0); /*0x44fe6c*/
  result = dword_A8EB50; /*0x44fe71*/
  for ( i = 0; i < dword_A8EB50; ++i ) /*0x44fe7a*/
  {
    v4 = *((unsigned int *)dword_A8EB44 + i); /*0x44fe82*/
    if ( !*(unsigned char *)(v4 + 129) && !*(unsigned char *)(*(unsigned int *)(v4 + 1312) + 5823) ) /*0x44fe95*/
      BuildingClass::ReadConstructionData(v4, this); /*0x44fea0*/
    result = dword_A8EB50; /*0x44fea5*/
  }
  return result; /*0x44feaf*/

}
