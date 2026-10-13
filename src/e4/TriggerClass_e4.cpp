// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"

// 0x610950
namespace gamemd {  // G42.18 ns repair
char TriggerClass::FindByEventType(char a1)
{
    unsigned int v8 = 0;  /* G37 hoist */
  unsigned int *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // esi
  size_t v7; // eax
  __int128 v8; // [esp+28h] [ebp-20h] BYREF
  unsigned int v9[2]; // [esp+38h] [ebp-10h] BYREF
  int64_t v10; // [esp+40h] [ebp-8h]

  if ( !dword_AC1DCC ) /*0x61095d*/
    return 0; /*0x61095f*/
  if ( a1 ) /*0x61096a*/
  {
    if ( dword_AC1CC8 ) /*0x610978*/
      (**(void (***)(int, int))dword_AC1CC8)(dword_AC1CC8, 1); /*0x61097e*/
    dword_AC1CC8 = 0; /*0x610982*/
    v2 = (unsigned int *)(operator new(0x20u)); /*0x61098d*/
    if ( v2 ) /*0x610994*/
    {
      v4 = (*(((unsigned int *)&(dword_AC1CB8)) + 1)); /*0x61099b*/
      v3 = (((unsigned int *)&(dword_AC1CB8))[2]); /*0x61099b*/
      v2[1] = (((unsigned int *)&(dword_AC1CB8))[2]); /*0x6109a1*/
      v2[2] = v4; /*0x6109a9*/
      v2[3] = 0; /*0x6109b1*/
      *v2 = (unsigned int)(&XSurface_Vtable); /*0x6109b4*/
      v2[4] = 2; /*0x6109ba*/
      Buffer::Init(v2 + 5, 0, 2 * v4 * v3); /*0x6109c1*/
      *v2 = (unsigned int)(&BSurface_Vtable); /*0x6109c6*/
      v5 = (int)v2; /*0x6109cc*/
    }
    else
    {
      v5 = 0; /*0x6109d0*/
    }
    dword_AC1CC8 = v5; /*0x6109ef*/
    v9[0] = 0; /*0x6109f5*/
    v9[1] = 0; /*0x6109f9*/
    v10 = *((unsigned long long *)&dword_AC1CB8 + 1); /*0x6109fd*/
    (*(void (**)(int, unsigned int *, int, __int128 *, unsigned int, int))(*(unsigned int *)v5 + 8))( /*0x610a08*/
      v5,
      v9,
      g_DSurface_Primary,
      &dword_AC1CB8,
      0,
      1);
  }
  v8 = dword_AC1CB8; /*0x610a25*/
  dword_AC1DD0 = 0; /*0x610a32*/
  if ( dword_AC48B0 == -1 ) /*0x610a40*/
    v6 = -1; /*0x610a42*/
  else
    v6 = ((int)(uint8_t)dword_AC48B0 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x610a8d*/
       | ((((unsigned char *)&(dword_AC48B0))[1]) >> g_BitMask_Blue << g_BitMask_Green)
       | ((((unsigned char *)&(dword_AC48B0))[2]) >> g_BitMask_Red << g_BitShift_Blue);
  (*(void (**)(int, unsigned int, unsigned int))(*(unsigned int *)g_DSurface_Primary + 92))(g_DSurface_Primary, 0, 0); /*0x610a9d*/
  (*(void (**)(int, __int128 *, int))(*(unsigned int *)g_DSurface_Primary + 20))(g_DSurface_Primary, &v8, v6); /*0x610aae*/
  (*(void (**)(int))(*(unsigned int *)g_DSurface_Primary + 96))(g_DSurface_Primary); /*0x610ab9*/
  Team_Find((int *)&v8, g_DSurface_Primary, 8, 4); /*0x610aca*/
  v7 = wcslen((const wchar_t *)(word_AC1CCC)); /*0x610ae0*/
  DrawTextRendererTextAligned(dword_AC18A4, 0, (int *)&v8, word_AC1CCC, v7, 1, 1, g_DSurface_Primary, 0); /*0x610afb*/
  (*(((unsigned int *)&(v8)) + 1)) -= 2; /*0x610b1e*/
  (*((unsigned int *)&(v8))) = v8 + 1; /*0x610b2a*/
  ++(((unsigned int *)&(v8))[1]); /*0x610b2e*/
  (((unsigned int *)&(v8))[2]) -= 2; /*0x610b32*/
  DrawDialogGradient((int *)g_DSurface_Primary, (int *)&v8, 1, -1); /*0x610b36*/
  return 1; /*0x610961*/
}
}  // G42.18 ns repair
// 0x71FA30
namespace gamemd {
int TriggerClass::GetValue()
{
  return this->u32_54; /*0x71fa33*/
}
}
// 0x7264C0
namespace gamemd {
int TriggerClass::RegisterEvent(int a2, int a3, char a4, char a5, int a6, int aP1, int aP2, int a1, int aP0)
{

  char v7; // bl
  TriggerClass *v8; // edi
  int Owner; // eax
  int v11; // [esp-10h] [ebp-18h]
  char v12; // [esp+7h] [ebp-1h]

  if ( !*(unsigned char *)(aP1 + 68) || *(unsigned char *)(aP1 + 48) ) /*0x7264cf*/
    return 0; /*0x7265b4*/
  v12 = 1; /*0x7264e2*/
  if ( aP1 ) /*0x7264e7*/
    goto LABEL_16; /*0x7264e7*/
  v7 = 0; /*0x7264f0*/
  v8 = *(TriggerClass **)(*(unsigned int *)(aP1 + 36) + 172); /*0x7264f2*/
  if ( !v8 ) /*0x7264fa*/
    goto LABEL_16; /*0x7264fa*/
  do /*0x72658b*/
  {
    if ( (*(unsigned int *)(aP1 + 64) & (1 << v7)) != 0 /*0x726540*/
      || (v11 = aP1,
          Owner = HouseClass::FindOwner(*(HouseClass **)(*(unsigned int *)(*(unsigned int *)(aP1 + 36) + 164) + 180)),
          TEventClass::Execute((TEventClass *)v8, aP1, Owner, aP1, (int *)(aP1 + 52), (int)&aP1, v11)) )
    {
      if ( TriggerClass::GetValue(v8) ) /*0x726551*/
        *(unsigned int *)(aP1 + 44) = TriggerClass::GetValue(v8); /*0x726561*/
      if ( aP1 && TEventClass::GetStateA((TEventClass *)v8) && TEventClass::GetStateB_SpyEvent((TEventClass *)v8) ) /*0x726579*/
        *(unsigned int *)(aP1 + 64) |= 1 << v7; /*0x726582*/
    }
    else
    {
      v12 = 0; /*0x726549*/
    }
    v8 = v8->nextTrigger; /*0x726585*/
    ++v7; /*0x726588*/
  }
  while ( v8 ); /*0x72658b*/
  if ( v12 ) /*0x726598*/
  {
LABEL_16:
    if ( aP1 ) /*0x7265a0*/
      BuildingClass::ProcessUpgradeEffects((BuildingClass *)aP1); /*0x7265a4*/
  }
  return v12; /*0x7265af*/

}
}
// 0x726820
namespace gamemd {
int TriggerClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x726826*/
    return -2147467261; /*0x726828*/
  *a2 = -1070787184; /*0x726836*/
  a2[1] = 298977834; /*0x72683e*/
  a2[2] = 1610655660; /*0x726847*/
  a2[3] = unk_7E97EC; /*0x726850*/
  return 0; /*0x72682d*/
}
} // namespace gamemd

// 0x726860
namespace gamemd {
int TriggerClass::LoadTrigger(AbstractClass * aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((unsigned int *)(aP0), aP1); /*0x72686b*/
  if ( result >= 0 ) /*0x726872*/
  {
    if ( aP0 ) /*0x726876*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x72687f*/
      /* X11: vtable install elided (implicit via TriggerClass virtuals 0x726884) */
      /* X11: vtable install elided (implicit via TriggerClass virtuals 0x72688a) */
      /* X11: vtable install elided (implicit via TriggerClass virtuals 0x726891) */
      /* X11: vtable install elided (implicit via TriggerClass virtuals 0x726898) */
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->buildingType); /*0x7268a8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->nextTrigger); /*0x7268b6*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->house); /*0x7268c4*/
    return 0; /*0x7268c9*/
  }
  return result; /*0x7268cb*/
}
} // namespace gamemd

// 0x7268D0
namespace gamemd {
int TriggerClass::SaveTrigger(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x7268df*/
  if ( result >= 0 ) /*0x7268e6*/
    return 0; /*0x7268e8*/
  return result; /*0x7268ea*/
}
} // namespace gamemd

// 0x726930
namespace gamemd {
int TriggerClass::StubReturn72()
{
  return 72; /*0x726935*/
}
} // namespace gamemd

// 0x726940
namespace gamemd {
int TriggerClass::StubReturn38()
{
  return 38; /*0x726945*/
}
} // namespace gamemd
