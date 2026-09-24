// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x5862C0
namespace gamemd {
void VeinholeMonsterClass_Update(MouseClass * aP0, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  _DWORD *v10; // eax
  int v12; // [esp+14h] [ebp+4h]

  v3 = aP0[1]; /*0x5862d0*/
  v4 = a2 + v3; /*0x5862d2*/
  v5 = v3 - a2; /*0x5862d4*/
  if ( v5 > v4 ) /*0x5862d8*/
    return 0; /*0x58633f*/
  while ( 1 ) /*0x5862e3*/
  {
    v6 = *aP0; /*0x5862e3*/
    v7 = a2 + v6; /*0x5862e5*/
    v8 = v6 - a2; /*0x5862e7*/
    if ( v8 <= v7 ) /*0x5862eb*/
      break; /*0x5862eb*/
  LABEL_9:
    if ( ++v5 > a2 + aP0[1] ) /*0x58633d*/
      return 0; /*0x58633d*/
  }
  HIWORD(v12) = v5; /*0x5862f0*/
  while ( 1 ) /*0x5862fb*/
  {
    v9 = ((__int16)v5 << 9) + (__int16)v8; /*0x5862fb*/
    LOWORD(v12) = v8; /*0x5862fd*/
    if ( v9 >= 0x40000 || (v10 = *(_DWORD **)(g_Shroud_CellArray + 4 * v9)) == 0 ) /*0x586311*/
    {
      g_Map_GlobalCellIndex = v12; /*0x586317*/
      v10 = g_CellClassArray; /*0x58631c*/
    }
    if ( v10[57] ) /*0x586321*/
      return 1; /*0x58633f*/
    if ( ++v8 > a2 + *aP0 ) /*0x586332*/
      goto LABEL_9; /*0x586332*/
  }
}
}
// 0x74EEE0
int VeinholeMonsterClass::Update(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x74eef4*/
}
// 0x74EF00
int VeinholeMonsterClass::CheckStatus()
{
  return g_RulesClass_Instance->DropZoneAnim; /*0x74ef0b*/
}
// 0x74F2D0
int VeinholeMonsterClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x74f2d6*/
    return -2147467261; /*0x74f2d8*/
  *a2 = 1368576106; /*0x74f2e6*/
  a2[1] = 299025970; /*0x74f2ee*/
  a2[2] = 1610615737; /*0x74f2f7*/
  a2[3] = -318126072; /*0x74f300*/
  return 0; /*0x74f2dd*/
}
// 0x74F310
int VeinholeMonsterClass::StubReturn63()
{
  return 63; /*0x74f315*/
}
// 0x74F320
int VeinholeMonsterClass::StubReturn264()
{
  return 264; /*0x74f325*/
}
// 0x74F340
VeinholeMonsterClass * VeinholeMonsterClass::SpreadTiberium(char a2)
{
  DestroyVeinholeMonster(this); /*0x74f343*/
  if ( (a2 & 1) != 0 ) /*0x74f34d*/
    __3_YAXPAX_Z(this); /*0x74f350*/
  return this; /*0x74f35a*/
}