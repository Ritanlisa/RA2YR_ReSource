// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x517070
int HoverLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1247291202;
  a2[1] = 298948665;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// 0x5170B0
int HoverLocomotionClass::BeginMove(int a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall HoverLocomotionClass::_vt05(int a1, int *a2)
{
  int v2; // edi

  v2 = SwizzleManager::SaveLoad((int *)a1, a2); /*0x5170c1*/
  if ( v2 >= 0 && a1 ) /*0x5170c9*/
  {
    *(_DWORD *)a1 = &LocomotionClass::`vftable'; /*0x5170ce*/
    *(_DWORD *)(a1 + 4) = &LocomotionClass::`vftable'; /*0x5170d4*/
    FrameSnapshot::Init((_WORD *)(a1 + 48)); /*0x5170db*/
    *(_DWORD *)a1 = &HoverLocomotionClass::`vftable'; /*0x5170e0*/
    *(_DWORD *)(a1 + 4) = &HoverLocomotionClass::`vftable'; /*0x5170e6*/
  }
  return v2; /*0x5170ef*/
}
}

// 0x5172C0
HoverLocomotionClass * HoverLocomotionClass::ProcessMove(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HoverLocomotionClass *__thiscall HoverLocomotionClass::ProcessMove(_DWORD *Block, char a2)
{
  *Block = &HoverLocomotionClass::`vftable'; /*0x5172c3*/
  *(Block + 1) = &HoverLocomotionClass::`vftable'; /*0x5172c9*/
  LocomotionClass::Construct(Block); /*0x5172d0*/
  if ( (a2 & 1) != 0 ) /*0x5172da*/
    __3_YAXPAX_Z(Block); /*0x5172dd*/
  return (HoverLocomotionClass *)Block; /*0x5172e7*/
}
}

// 0x5172B0
int HoverLocomotionClass::StubReturn120()
{
return 120;
}
