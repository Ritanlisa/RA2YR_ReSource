// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VoxelRenderer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x758EA0
namespace gamemd {
int VoxelRenderer::ProjectVertex(float a2, float a3, float a4, char a5)
{

  int v6; // ecx
  int v7; // edx
  int i; // edi
  int v9; // eax
  uint8_t *v10; // eax
  double v11; // st6
  double v12; // st5
  double v13; // st4
  float v15; // [esp+Ch] [ebp-8h]

  if ( a5 ) /*0x758eae*/
    v6 = *this; /*0x758eb0*/
  else
    IDA_LOBYTE(v6) = 1; /*0x758eb4*/
  v15 = 100000.0; /*0x758eb9*/
  v7 = 1; /*0x758ec1*/
  for ( i = 3; i < 768; i += 3 ) /*0x758ec6*/
  {
    v9 = (int)(*this);
    if ( a5 ) /*0x758ed3*/
    {
      if ( v7 < v9 || v7 > *((char *)this + 1) ) /*0x758edc*/
        goto LABEL_13; /*0x758edc*/
    }
    else if ( v7 >= v9 && v7 <= *((char *)this + 1) ) /*0x758ee7*/
    {
      goto LABEL_13; /*0x758ee7*/
    }
    v10 = (uint8_t *)(i + *((char *)this + 4)); /*0x758eee*/
    v11 = a3 - (double)v10[1]; /*0x758f14*/
    v12 = a4 - (double)v10[2]; /*0x758f1c*/
    v13 = v12 * v12 + v11 * v11 + (a2 - (double)*v10) * (a2 - (double)*v10); /*0x758f2e*/
    if ( v13 < v15 ) /*0x758f3f*/
    {
      v15 = v13; /*0x758f41*/
      IDA_LOBYTE(v6) = v7; /*0x758f45*/
    }
LABEL_13:
    ++v7; /*0x758f4e*/
  }
  return v6; /*0x758f5b*/

}
} // namespace gamemd
// 0x759FB0
namespace gamemd {
int VoxelRenderer::InitializeBuffers(int a2, unsigned int * a3, int a4)
{

  BOOL result; // eax
  bool v6; // al
  int v7; // esi
  int v8;
  int v9;

  result = 1; /*0x759fb7*/
  switch ( a2 ) /*0x759fc6*/
  {
    case 1: /*0x759fc6*/
    case 2: /*0x759fc6*/
      goto LABEL_13;
    case 3: /*0x759fc6*/
      v6 = (*(int (**)(int, unsigned int *, int))(*((unsigned int *)this + 1) + 32))((char *)this + 4, a3, 1) != 0; /*0x759fdf*/
      *((unsigned char *)this + 112) = v6; /*0x759fe4*/
      result = !v6; /*0x759fec*/
      break; /*0x759fef*/
    case 4: /*0x759fc6*/
      (*(void (**)(int))(*((unsigned int *)this + 1) + 52))((char *)this + 4); /*0x75a0cf*/
      *((unsigned char *)this + 112) = 0; /*0x75a0d4*/
      result = 0; /*0x75a0d2*/
      break; /*0x75a0d2*/
    case 5: /*0x759fc6*/
      v7 = a4; /*0x759ffc*/
      result = (*(int (**)(int, unsigned int *, int))(*((unsigned int *)this + 1) + 36))((char *)this + 4, a3, a4) != v7; /*0x75a00c*/
      break; /*0x75a00f*/
    case 6: /*0x759fc6*/
      result = 1; /*0x75a012*/
      break; /*0x75a018*/
    case 7: /*0x759fc6*/
      result = (*(int (**)(int, int, unsigned int *))(*((unsigned int *)this + 1) + 40))((char *)this + 4, a4, a3) == 0; /*0x75a033*/
      break; /*0x75a034*/
    case 8: /*0x759fc6*/
      if ( a4 <= 0 ) /*0x75a03d*/
      {
        v9 = (char *)((int)((char *)this + 4));
        result = (*(int (**)(int, int, unsigned int *))(*((unsigned int *)this + 1) + 40))((char *)this + 4, a4, a3) == 0; /*0x75a086*/
        if ( !result ) /*0x75a087*/
        {
          result = (*(int (**)(int, int *, int))(*(unsigned int *)v9 + 36))(v9, &a4, 1) != 1; /*0x75a09c*/
          if ( !result ) /*0x75a09e*/
            result = (*(int (**)(int, int, int))(*(unsigned int *)v9 + 40))(v9, -1, 1) == 0; /*0x75a0b0*/
        }
      }
      else
      {
        v8 = (char *)((int)((char *)this + 4));
        result = (*(int (**)(int, int, unsigned int *))(*((unsigned int *)this + 1) + 40))((char *)this + 4, a4 - 1, a3) == 0; /*0x75a055*/
        if ( !result ) /*0x75a056*/
          result = (*(int (**)(int, int *, int))(*(unsigned int *)v8 + 36))(v8, &a4, 1) != 1; /*0x75a06c*/
      }
      break; /*0x75a06e*/
    case 9: /*0x759fc6*/
      *a3 = (*(int (**)(int))(*((unsigned int *)this + 1) + 44))((char *)this + 4); /*0x75a0c1*/
LABEL_13:
      result = 0; /*0x75a0c3*/
      break; /*0x75a0c3*/
    default:
      return result;
  }
  return result; /*0x759fee*/

}
} // namespace gamemd