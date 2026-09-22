// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C7EC0
namespace gamemd {
int sub_5C7EC0(const void * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5C7EC0(const void *a1, int a2)
{
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // edx
  int *v12; // eax
  int v14; // edx
  int *v15; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edx
  unsigned int v20; // ecx
  int v21; // ecx
  bool v22; // zf
  int *v23; // eax
  int v24; // edx
  int *v25; // eax
  int v27; // eax
  int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // eax

  int v2 = a2; /*0x5c7ec1*/
  int v3 = a2; /*0x5c7ed5*/
  qmemcpy(&DataGlobal_ABF5B4, a1, v3 * 4); /*0x5c7eda*/
  int * v4 = &DataGlobal_ABF5B0[v3]; /*0x5c7ee3*/
  int v5 = v2; /*0x5c7ee9*/
  int * v6 = &DataGlobal_ABF5B0[v3]; /*0x5c7eeb*/
  if ( !DataGlobal_ABF5B0[v3] ) /*0x5c7eed*/
  {
    while ( --v5 ) /*0x5c7ef2*/
    {
      if ( *--v6 ) /*0x5c7ef5*/
        goto LABEL_4; /*0x5c7efd*/
    }
    goto LABEL_5; /*0x5c7ef3*/
  }
LABEL_4:
  if ( !v5 ) /*0x5c7f01*/
  {
LABEL_5:
    v8 = 0; /*0x5c7f03*/
    goto LABEL_8; /*0x5c7f05*/
  }
  v9 = v5; /*0x5c7f07*/
  v10 = DataGlobal_ABF5B0[v5]; /*0x5c7f09*/
  v11 = 0x80000000; /*0x5c7f10*/
  v8 = 32 * v9; /*0x5c7f15*/
  if ( v10 >= 0 ) /*0x5c7f1a*/
  {
    do /*0x5c7f21*/
    {
      v11 >>= 1; /*0x5c7f1c*/
      --v8; /*0x5c7f1e*/
    }
    while ( (v10 & v11) == 0 ); /*0x5c7f21*/
  }
LABEL_8:
  DataGlobal_ABF6B8[0] = v8; /*0x5c7f23*/
  DataGlobal_ABF59C = (v8 + 15) / 16; /*0x5c7f34*/
  v12 = v4; /*0x5c7f39*/
  if ( !*v4 ) /*0x5c7f3b*/
  {
    do /*0x5c7f4b*/
    {
      if ( !--v2 ) /*0x5c7f41*/
        break; /*0x5c7f41*/
    }
    while ( !*--v12 ); /*0x5c7f4b*/
  }
  v14 = 2; /*0x5c7f56*/
  DataGlobal_ABF8C8 = DataGlobal_ABF5AC[v2]; /*0x5c7f5e*/
  v15 = &DataGlobal_ABF8CC; /*0x5c7f67*/
  DataGlobal_ABF8CC = DataGlobal_ABF5B0[v2]; /*0x5c7f6e*/
  if ( DataGlobal_ABF8CC ) /*0x5c7f74*/
  {
LABEL_16:
    v18 = v14; /*0x5c7f8b*/
    v19 = DataGlobal_ABF8C4[v14]; /*0x5c7f8d*/
    v20 = 0x80000000; /*0x5c7f94*/
    v17 = 32 * v18; /*0x5c7f99*/
    if ( v19 >= 0 ) /*0x5c7f9e*/
    {
      do /*0x5c7fa5*/
      {
        v20 >>= 1; /*0x5c7fa0*/
        --v17; /*0x5c7fa2*/
      }
      while ( (v19 & v20) == 0 ); /*0x5c7fa5*/
    }
  }
  else
  {
    while ( --v14 ) /*0x5c7f76*/
    {
      if ( *--v15 ) /*0x5c7f79*/
        goto LABEL_16; /*0x5c7f81*/
    }
    v17 = 0; /*0x5c7f87*/
  }
  DataGlobal_ABF8C4[0] = v17 - 32; /*0x5c7fb1*/
  RotateBitBufferRight(&DataGlobal_ABF8C8, v17 - 32, 2); /*0x5c7fb7*/
  DivideBigInteger(&DataGlobal_ABF5A4, (char *)&DataGlobal_ABF8C8, 2); /*0x5c7fc8*/
  RotateBitBufferRight(&DataGlobal_ABF5A4, 1, 2); /*0x5c7fd9*/
  v21 = 2; /*0x5c7ff5*/
  DataGlobal_ABF8C4[0] = (DataGlobal_ABF8C4[0] + 15) % 16 + 1; /*0x5c7ffa*/
  v22 = DataGlobal_ABF5A4 == -1; /*0x5c8006*/
  v23 = &DataGlobal_ABF5A4; /*0x5c8007*/
  ++DataGlobal_ABF5A4; /*0x5c800c*/
  for ( ; v22; v22 = (*v23)++ == -1 ) /*0x5c8012*/
  {
    ++v23; /*0x5c8014*/
    if ( !--v21 ) /*0x5c8018*/
      break; /*0x5c8018*/
  }
  v24 = 2; /*0x5c8027*/
  v25 = &DataGlobal_ABF5A8; /*0x5c802e*/
  if ( DataGlobal_ABF5A8 ) /*0x5c8033*/
  {
LABEL_24:
    v27 = v24; /*0x5c8046*/
    v28 = DataGlobal_ABF5A0[v24]; /*0x5c8048*/
    v29 = 0x80000000; /*0x5c804f*/
    v30 = 32 * v27; /*0x5c8054*/
    if ( v28 >= 0 ) /*0x5c8059*/
    {
      do /*0x5c8060*/
      {
        v29 >>= 1; /*0x5c805b*/
        --v30; /*0x5c805d*/
      }
      while ( (v28 & v29) == 0 ); /*0x5c8060*/
    }
    if ( v30 > 0x20 ) /*0x5c8065*/
    {
      RotateBitBufferRight(&DataGlobal_ABF5A4, 1, 2); /*0x5c8073*/
      --DataGlobal_ABF8C4[0]; /*0x5c8078*/
    }
  }
  else
  {
    while ( --v24 ) /*0x5c8035*/
    {
      if ( *--v25 ) /*0x5c8038*/
        goto LABEL_24; /*0x5c8040*/
    }
  }
  LOWORD(DataGlobal_ABF6B4) = HIWORD(DataGlobal_ABF5A4); /*0x5c8091*/
  LOWORD(DataGlobal_ABF5A0[0]) = DataGlobal_ABF5A4; /*0x5c8091*/
  return 0; /*0x5c809a*/
}
}
} // namespace gamemd
