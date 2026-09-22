// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x610950
namespace gamemd {
char TriggerClass::FindByEventType(char a1)
{
{
  size_t v7; // eax
  __int128 v8; // [esp+28h] [ebp-20h] BYREF
  if ( !DataGlobal_AC1DCC ) /*0x61095d*/
    return 0; /*0x61095f*/
  if ( a1 ) /*0x61096a*/
  {
  int v5; // ecx
    if ( DataGlobal_AC1CC8 ) /*0x610978*/
      (**(void (__thiscall ***)(int, int))DataGlobal_AC1CC8)(DataGlobal_AC1CC8, 1); /*0x61097e*/
    DataGlobal_AC1CC8 = 0; /*0x610982*/
    _DWORD * v2 = __2_YAPAXI_Z(0x20u); /*0x61098d*/
    if ( v2 ) /*0x610994*/
    {
      AbstractClass *v4 = HIDWORD(DataGlobal_AC1CB8); /*0x61099b*/
      AbstractClass *v3 = DWORD2(DataGlobal_AC1CB8); /*0x61099b*/
      v2[1] = DWORD2(DataGlobal_AC1CB8); /*0x6109a1*/
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
    DataGlobal_AC1CC8 = v5; /*0x6109ef*/
  _DWORD v9[2]; // [esp+38h] [ebp-10h] BYREF
    v9[0] = 0; /*0x6109f5*/
    v9[1] = 0; /*0x6109f9*/
    __int64 v10 = *((_QWORD *)&DataGlobal_AC1CB8 + 1); /*0x6109fd*/
    (*(void (__thiscall **)(int, _DWORD *, int, __int128 *, _DWORD, int))(*(_DWORD *)v5 + 8))( /*0x610a08*/
      v5,
      v9,
      g_DSurface_Primary,
      &DataGlobal_AC1CB8,
      0,
      1);
  }
  v8 = DataGlobal_AC1CB8; /*0x610a25*/
  DataGlobal_AC1DD0 = 0; /*0x610a32*/
  if ( DataGlobal_AC48B0 == -1 ) /*0x610a40*/
    int v6 = -1; /*0x610a42*/
  else
    v6 = ((int)(unsigned __int8)DataGlobal_AC48B0 >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x610a8d*/
       | (BYTE1(DataGlobal_AC48B0) >> g_BitMask_Blue << g_BitMask_Green)
       | (BYTE2(DataGlobal_AC48B0) >> g_BitShift_Blue << g_BitShift_Blue);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)g_DSurface_Primary + 92))(g_DSurface_Primary, 0, 0); /*0x610a9d*/
  (*(void (__thiscall **)(int, __int128 *, int))(*(_DWORD *)g_DSurface_Primary + 20))(g_DSurface_Primary, &v8, v6); /*0x610aae*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_DSurface_Primary + 96))(g_DSurface_Primary); /*0x610ab9*/
  Team_Find((int *)&v8, g_DSurface_Primary, 8, 4); /*0x610aca*/
  v7 = wcslen(DataGlobal_AC1CCC); /*0x610ae0*/
  DrawTextRendererTextAligned(yTop, 0, (int *)&v8, DataGlobal_AC1CCC, v7, 1, 1, g_DSurface_Primary, 0); /*0x610afb*/
  HIDWORD(v8) -= 2; /*0x610b1e*/
  LODWORD(v8) = v8 + 1; /*0x610b2a*/
  ++DWORD1(v8); /*0x610b2e*/
  DWORD2(v8) -= 2; /*0x610b32*/
  DrawDialogGradient((int *)g_DSurface_Primary, (int *)&v8, 1, -1); /*0x610b36*/
  return 1; /*0x610961*/
}
} // namespace gamemd

// 0x71FA30
namespace gamemd {
int TriggerClass::GetValue()
{
{
  return this->q054; /*0x71fa33*/
}
} // namespace gamemd

// 0x7264C0
namespace gamemd {
int TriggerClass::RegisterEvent(TriggerClass * aP1, TechnoClass * aP2, char a4, char a5, int a6)
{
{
  int Owner; // eax

  if ( !this->enabled || this->destroyed ) /*0x7264cf*/
    return 0; /*0x7265b4*/
  char v12 = 1; /*0x7264e2*/
  if ( a4 ) /*0x7264e7*/
    goto LABEL_16; /*0x7264e7*/
  char v7 = 0; /*0x7264f0*/
  _DWORD * v8 = *(_DWORD **)(this->buildingType + 172); /*0x7264f2*/
  if ( !v8 ) /*0x7264fa*/
    goto LABEL_16; /*0x7264fa*/
  do /*0x72658b*/
  {
    if ( (this->occuredEvents & (1 << v7)) != 0 /*0x726540*/
  int v11; // [esp-10h] [ebp-18h]
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
} // namespace gamemd

// 0x726820
namespace gamemd {
int TriggerClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1070787184;
  a2[1] = 298977834;
  a2[2] = 1610655660;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x726860
namespace gamemd {
int TriggerClass::LoadTrigger(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TriggerClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TriggerClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TriggerClass;
    *(int *)&aP0->__pad_0[12] = &vt_TriggerClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_0[8]);
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x7268D0
namespace gamemd {
int TriggerClass::SaveTrigger(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
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
