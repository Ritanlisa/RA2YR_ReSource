// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5862C0
namespace gamemd {
char VeinholeMonsterClass_Update(MouseClass * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall VeinholeMonsterClass_Update(MouseClass *aP0, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  _DWORD *v10; // eax
  ObjectClass *aP0a; // [esp+14h] [ebp+4h]

  v3 = SHIWORD(aP0->field_0); /*0x5862d0*/
  v4 = a2 + v3; /*0x5862d2*/
  v5 = v3 - a2; /*0x5862d4*/
  if ( v5 > v4 ) /*0x5862d8*/
    return 0; /*0x58633f*/
  while ( 1 ) /*0x5862e3*/
  {
    v6 = SLOWORD(aP0->field_0); /*0x5862e3*/
    v7 = a2 + v6; /*0x5862e5*/
    v8 = v6 - a2; /*0x5862e7*/
    if ( v8 <= v7 ) /*0x5862eb*/
      break; /*0x5862eb*/
LABEL_9:
    if ( ++v5 > a2 + SHIWORD(aP0->field_0) ) /*0x58633d*/
      return 0; /*0x58633d*/
  }
  HIWORD(aP0a) = v5; /*0x5862f0*/
  while ( 1 ) /*0x5862fb*/
  {
    v9 = ((__int16)v5 << 9) + (__int16)v8; /*0x5862fb*/
    LOWORD(aP0a) = v8; /*0x5862fd*/
    if ( v9 >= 0x40000 || (v10 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v9)) == 0 ) /*0x586311*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP0a; /*0x586317*/
      v10 = g_CellClassArray; /*0x58631c*/
    }
    if ( v10[57] ) /*0x586321*/
      return 1; /*0x58633f*/
    if ( ++v8 > a2 + SLOWORD(aP0->field_0) ) /*0x586332*/
      goto LABEL_9; /*0x586332*/
  }
}
}
} // namespace gamemd

// 0x74EEE0
int VeinholeMonsterClass::Update(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// 0x74EF00
int VeinholeMonsterClass::CheckStatus()
{
{
    return g_RulesClass_Instance->?;
}
}

// 0x74F2D0
int VeinholeMonsterClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1368576106;
  a2[1] = 299025970;
  a2[2] = 1610615737;
  a2[3] = -318126072;
  return 0;
}

// 0x74F310
int VeinholeMonsterClass::StubReturn63()
{
return 63;
}

// 0x74F320
int VeinholeMonsterClass::StubReturn264()
{
return 264;
}

// 0x74F340
VeinholeMonsterClass * VeinholeMonsterClass::SpreadTiberium(char a2)
{
{
    DestroyVeinholeMonster(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VeinholeMonsterClass *)this;
}
}
