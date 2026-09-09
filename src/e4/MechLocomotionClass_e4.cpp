// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5B1960
int MechLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1439777208;
  a2[1] = 298965908;
  a2[2] = 1610651820;
  a2[3] = -1252326136;
  return 0;
}

// 0x5B19A0
int MechLocomotionClass::BeginMove(int * a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall MechLocomotionClass::_vt05(int *a1, int *a2)
{
  int result; // eax

  result = SwizzleManager::SaveLoad(a1, a2); /*0x5b19ab*/
  if ( result >= 0 ) /*0x5b19b2*/
  {
    if ( a1 ) /*0x5b19b6*/
    {
      *a1 = (int)&MechLocomotionClass::`vftable'; /*0x5b19b8*/
      a1[1] = (int)&MechLocomotionClass::`vftable'; /*0x5b19be*/
    }
  }
  return result; /*0x5b19c5*/
}
}

// 0x5B1B50
MechLocomotionClass * MechLocomotionClass::ProcessMove(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
MechLocomotionClass *__thiscall MechLocomotionClass::ProcessMove(_DWORD *Block, char a2)
{
  *Block = &MechLocomotionClass::`vftable'; /*0x5b1b53*/
  *(Block + 1) = &MechLocomotionClass::`vftable'; /*0x5b1b59*/
  LocomotionClass::Construct(Block); /*0x5b1b60*/
  if ( (a2 & 1) != 0 ) /*0x5b1b6a*/
    __3_YAXPAX_Z(Block); /*0x5b1b6d*/
  return (MechLocomotionClass *)Block; /*0x5b1b77*/
}
}

// 0x5B1B40
int MechLocomotionClass::StubReturn52()
{
return 52;
}
