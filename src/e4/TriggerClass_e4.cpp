// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x610950
namespace gamemd {
char TriggerClass::FindByEventType(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_610950(char a1)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // esi
  size_t v7; // eax
  __int128 v8; // [esp+28h] [ebp-20h] BYREF
  _DWORD v9[2]; // [esp+38h] [ebp-10h] BYREF
  __int64 v10; // [esp+40h] [ebp-8h]

  if ( !MEMORY[0xAC1DCC] ) /*0x61095d*/
    return 0; /*0x61095f*/
  if ( a1 ) /*0x61096a*/
  {
    if ( MEMORY[0xAC1CC8] ) /*0x610978*/
      (**(void (__thiscall ***)(int, int))MEMORY[0xAC1CC8])(MEMORY[0xAC1CC8], 1); /*0x61097e*/
    MEMORY[0xAC1CC8] = 0; /*0x610982*/
    v2 = __2_YAPAXI_Z(0x20u); /*0x61098d*/
    if ( v2 ) /*0x610994*/
    {
      v4 = HIDWORD(MEMORY[0xAC1CB8]); /*0x61099b*/
      v3 = DWORD2(MEMORY[0xAC1CB8]); /*0x61099b*/
      v2[1] = DWORD2(MEMORY[0xAC1CB8]); /*0x6109a1*/
      v2[2] = v4; /*0x6109a9*/
      v2[3] = 0; /*0x6109b1*/
      *v2 = &XSurface_Vtable; /*0x6109b4*/
      v2[4] = 2; /*0x6109ba*/
      Buffer::Init(v2 + 5, 0, 2 * v4 * v3); /*0x6109c1*/
      *v2 = &BSurface_Vtable; /*0x6109c6*/
      v5 = (int)v2; /*0x6109cc*/
    }
    else
    {
      v5 = 0; /*0x6109d0*/
    }
    MEMORY[0xAC1CC8] = v5; /*0x6109ef*/
    v9[0] = 0; /*0x6109f5*/
    v9[1] = 0; /*0x6109f9*/
    v10 = *((_QWORD *)&MEMORY[0xAC1CB8] + 1); /*0x6109fd*/
    (*(void (__thiscall **)(int, _DWORD *, int, __int128 *, _DWORD, int))(*(_DWORD *)v5 + 8))( /*0x610a08*/
      v5,
      v9,
      MEMORY[0x887308],
      &MEMORY[0xAC1CB8],
      0,
      1);
  }
  v8 = MEMORY[0xAC1CB8]; /*0x610a25*/
  MEMORY[0xAC1DD0] = 0; /*0x610a32*/
  if ( MEMORY[0xAC48B0] == -1 ) /*0x610a40*/
    v6 = -1; /*0x610a42*/
  else
    v6 = ((int)(unsigned __int8)MEMORY[0xAC48B0] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x610a8d*/
       | (BYTE1(MEMORY[0xAC48B0]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
       | (BYTE2(MEMORY[0xAC48B0]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887308] + 92))(MEMORY[0x887308], 0, 0); /*0x610a9d*/
  (*(void (__thiscall **)(int, __int128 *, int))(*(_DWORD *)MEMORY[0x887308] + 20))(MEMORY[0x887308], &v8, v6); /*0x610aae*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887308] + 96))(MEMORY[0x887308]); /*0x610ab9*/
  Team_Find((int *)&v8, MEMORY[0x887308], 8, 4); /*0x610aca*/
  v7 = wcslen(MEMORY[0xAC1CCC]); /*0x610ae0*/
  DrawTextRendererTextAligned(MEMORY[0xAC18A4], 0, (int *)&v8, MEMORY[0xAC1CCC], v7, 1, 1, MEMORY[0x887308], 0); /*0x610afb*/
  HIDWORD(v8) -= 2; /*0x610b1e*/
  LODWORD(v8) = v8 + 1; /*0x610b2a*/
  ++DWORD1(v8); /*0x610b2e*/
  DWORD2(v8) -= 2; /*0x610b32*/
  DrawDialogGradient((int *)MEMORY[0x887308], (int *)&v8, 1, -1); /*0x610b36*/
  return 1; /*0x610961*/
}
}
} // namespace gamemd

// 0x71FA30
namespace gamemd {
int TriggerClass::GetValue()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_71FA30(_DWORD *this)
{
  return *(this + 21); /*0x71fa33*/
}
}
} // namespace gamemd

// 0x7264C0
namespace gamemd {
char TriggerClass::RegisterEvent(TriggerClass * aP1, TechnoClass * aP2, char a4, char a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TriggerClass::RegisterEvent(int this, TriggerClass *aP1, TechnoClass *aP2, char a4, char a5, int a6)
{
  char v7; // bl
  _DWORD *v8; // edi
  int Owner; // eax
  int v11; // [esp-10h] [ebp-18h]
  char v12; // [esp+7h] [ebp-1h]

  if ( !this->enabled || this->destroyed ) /*0x7264cf*/
    return 0; /*0x7265b4*/
  v12 = 1; /*0x7264e2*/
  if ( a4 ) /*0x7264e7*/
    goto LABEL_16; /*0x7264e7*/
  v7 = 0; /*0x7264f0*/
  v8 = *(_DWORD **)(this->buildingType + 172); /*0x7264f2*/
  if ( !v8 ) /*0x7264fa*/
    goto LABEL_16; /*0x7264fa*/
  do /*0x72658b*/
  {
    if ( (this->occuredEvents & (1 << v7)) != 0 /*0x726540*/
      || (v11 = a6,
          Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(this->buildingType + 164) + 180)),
          TEventClass::Execute(v8, (int)aP1, Owner, (int)aP2, (int *)(this + 52), (int)&a5, v11)) )
    {
      if ( TriggerClass::GetValue(v8) ) /*0x726551*/
        this->house = TriggerClass::GetValue(v8); /*0x726561*/
      if ( a5 && TEventClass::GetStateA(v8) && TEventClass::GetStateB_SpyEvent(v8) ) /*0x726579*/
        this->occuredEvents |= 1 << v7; /*0x726582*/
    }
    else
    {
      v12 = 0; /*0x726549*/
    }
    v8 = (_DWORD *)v8[10]; /*0x726585*/
    ++v7; /*0x726588*/
  }
  while ( v8 ); /*0x72658b*/
  if ( v12 ) /*0x726598*/
  {
LABEL_16:
    if ( a5 ) /*0x7265a0*/
      BuildingClass::ProcessUpgradeEffects((int *)this); /*0x7265a4*/
  }
  return v12; /*0x7265af*/
}
}
} // namespace gamemd

// 0x726820
namespace gamemd {
int TriggerClass::ddtor(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TriggerClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x726826*/
    return -2147467261; /*0x726828*/
  *a2 = -1070787184; /*0x726836*/
  a2[1] = 298977834; /*0x72683e*/
  a2[2] = 1610655660; /*0x726847*/
  a2[3] = -1252326136; /*0x726850*/
  return 0; /*0x72682d*/
}
}
} // namespace gamemd

// 0x726860
namespace gamemd {
int TriggerClass::LoadTrigger(AbstractClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TriggerClass::LoadTrigger(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x72686b*/
  if ( result >= 0 ) /*0x726872*/
  {
    if ( aP0 ) /*0x726876*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x72687f*/
      *(_DWORD *)aP0->__pad_0 = &TriggerClass::`vftable'; /*0x726884*/
      *(_DWORD *)&aP0->__pad_0[4] = &TriggerClass::`vftable'; /*0x72688a*/
      *(_DWORD *)&aP0->__pad_0[8] = &TriggerClass::`vftable'; /*0x726891*/
      *(_DWORD *)&aP0->__pad_0[12] = &TriggerClass::`vftable'; /*0x726898*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x7268a8*/
    ObjectPtr::RegisterForTracking( /*0x7268b6*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x7268c4*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[8]);
    return 0; /*0x7268c9*/
  }
  return result; /*0x7268cb*/
}
}
} // namespace gamemd

// 0x7268D0
namespace gamemd {
int TriggerClass::SaveTrigger(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TriggerClass::SaveTrigger(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x7268df*/
  if ( result >= 0 ) /*0x7268e6*/
    return 0; /*0x7268e8*/
  return result; /*0x7268ea*/
}
}
} // namespace gamemd

// 0x726930
namespace gamemd {
int TriggerClass::StubReturn72()
{
return 72;
}
} // namespace gamemd

// 0x726940
namespace gamemd {
int TriggerClass::StubReturn38()
{
return 38;
}
} // namespace gamemd
