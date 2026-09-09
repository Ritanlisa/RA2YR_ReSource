// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4C5AC0
EMPulseClass * EMPulseClass::CopyTo(AbstractClass * a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
EMPulseClass *__fastcall EMPulseClass::CopyTo(AbstractClass *this, AbstractClass *a2, char a3)
{
  int v4; // eax
  AbstractClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &EMPulseClass::`vftable'; /*0x4c5ac4*/
  *(_DWORD *)&this->__pad_0[4] = &EMPulseClass::`vftable'; /*0x4c5aca*/
  *(_DWORD *)&this->__pad_0[8] = &EMPulseClass::`vftable'; /*0x4c5ad1*/
  *(_DWORD *)&this->__pad_0[12] = &EMPulseClass::`vftable'; /*0x4c5ad8*/
  if ( HouseClass_Player.__pad_5568[22252] ) /*0x4c5ae6*/
    EMPulseClass::IterateCellsInRadius((int)this); /*0x4c5ae8*/
  LOBYTE(a2) = 1; /*0x4c5aed*/
  AbstractClass::AnnounceExpiredPointer(this, a2); /*0x4c5af1*/
  v6 = this; /*0x4c5b06*/
  v4 = (*(int (__thiscall **)(char *, AbstractClass **))(*(_DWORD *)&stru_89E138.__pad_566C[204] + 16))( /*0x4c5b0a*/
         &stru_89E138.__pad_566C[204],
         &v6);
  if ( v4 != -1 && v4 < *(int *)&stru_89E138.__pad_566C[220] ) /*0x4c5b1a*/
  {
    --*(_DWORD *)&stru_89E138.__pad_566C[220]; /*0x4c5b1f*/
    for ( ; /*0x4c5b25*/
          v4 < *(int *)&stru_89E138.__pad_566C[220];
          *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_566C[208] + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_566C[208]
                                                                                        + 4 * v4) )
    {
      ++v4; /*0x4c5b2d*/
    }
  }
  AbstractClass::DTOR(this); /*0x4c5b41*/
  if ( (a3 & 1) != 0 ) /*0x4c5b4b*/
    __3_YAXPAX_Z(this); /*0x4c5b4e*/
  return (EMPulseClass *)this; /*0x4c5b58*/
}
}

// 0x4C5AA0
int EMPulseClass::StubReturn52()
{
return 52;
}

// 0x4C5AB0
int EMPulseClass::StubReturn55()
{
return 55;
}
