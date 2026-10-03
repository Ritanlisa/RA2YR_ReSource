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
    v6 = *(unsigned int *)this->__pad_0; /*0x758eb0*/
  else
    LOBYTE(v6) = 1; /*0x758eb4*/
  v15 = 100000.0; /*0x758eb9*/
  v7 = 1; /*0x758ec1*/
  for ( i = 3; i < 768; i += 3 ) /*0x758ec6*/
  {
    v9 = *(unsigned int *)this->__pad_0; /*0x758ed1*/
    if ( a5 ) /*0x758ed3*/
    {
      if ( v7 < v9 || v7 > this->VoxelRenderer_field_0x04 ) /*0x758edc*/
        goto LABEL_13; /*0x758edc*/
    }
    else if ( v7 >= v9 && v7 <= this->VoxelRenderer_field_0x04 ) /*0x758ee7*/
    {
      goto LABEL_13; /*0x758ee7*/
    }
    v10 = (uint8_t *)(i + this->VoxelRenderer_field_0x10); /*0x758eee*/
    v11 = a3 - (double)v10[1]; /*0x758f14*/
    v12 = a4 - (double)v10[2]; /*0x758f1c*/
    v13 = v12 * v12 + v11 * v11 + (a2 - (double)*v10) * (a2 - (double)*v10); /*0x758f2e*/
    if ( v13 < v15 ) /*0x758f3f*/
    {
      v15 = v13; /*0x758f41*/
      LOBYTE(v6) = v7; /*0x758f45*/
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x759FB0)
}
} // namespace gamemd