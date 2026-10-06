// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/DriveLocomotionClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7BB920
namespace gamemd {
int Draw::Ellipse(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  int v10; // ebp
  int v11; // ebx
  int v12; // edi
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int Draw_field_00; // edx
  int v17; // eax
  int v18; // edi
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int result; // eax
  int v25; // [esp+40h] [ebp-48h]
  int v26; // [esp+44h] [ebp-44h]
  int v27; // [esp+48h] [ebp-40h]
  int v28; // [esp+4Ch] [ebp-3Ch]
  unsigned int v29[2]; // [esp+50h] [ebp-38h] BYREF
  unsigned int v30[2]; // [esp+58h] [ebp-30h] BYREF
  unsigned int v31[2]; // [esp+60h] [ebp-28h] BYREF
  unsigned int v32[2]; // [esp+68h] [ebp-20h] BYREF
  unsigned int v33[2]; // [esp+70h] [ebp-18h] BYREF
  unsigned int v34[2]; // [esp+78h] [ebp-10h] BYREF
  unsigned int v35[2]; // [esp+80h] [ebp-8h] BYREF

  v10 = a3; /*0x7bb92c*/
  v11 = a2; /*0x7bb933*/
  v27 = a4; /*0x7bb943*/
  v12 = 0; /*0x7bb947*/
  v26 = 3 - 2 * a4; /*0x7bb949*/
  v13 = -a4; /*0x7bb94d*/
  v14 = a3 + a4; /*0x7bb94f*/
  v28 = 0; /*0x7bb951*/
  a4 = -a4; /*0x7bb955*/
  v25 = v14; /*0x7bb959*/
  while ( 1 ) /*0x7bb970*/
  {
    a3 = (int)(v12 + v10);
    a2 = (int)(v11 + v27);
    v15 = (int)(v13 + v11);
    Draw_field_00 = (int)(this->Draw_field_00);
    v29[1] = (int)(v12 + v10);
    v29[0] = (int)(v15);
    (*(void (**)(Draw *, int *, unsigned int *, int *, int))(Draw_field_00 + 44))( this, (int *)(&a5), (unsigned int *)(v29), (int *)(&a2), a9); /*0x7bb99b*/
    v17 = v12 + v11; /*0x7bb9a2*/
    v18 = -v12; /*0x7bb9a5*/
    v30[0] = v17; /*0x7bb9a7*/
    v30[1] = v25; /*0x7bb9b2*/
    v31[0] = v18 + v11; /*0x7bb9b6*/
    v19 = (int)(this->Draw_field_00); /*0x7bb9bc*/
    v31[1] = v25; /*0x7bb9be*/
    (*(void (**)(Draw *, int *, unsigned int *, unsigned int *, int))(v19 + 44))( this, (int *)(&a5), (unsigned int *)(v31), (unsigned int *)(v30), a9); /*0x7bb9d4*/
    v32[1] = v18 + v10; /*0x7bb9de*/
    v20 = (int)(this->Draw_field_00); /*0x7bb9e8*/
    v32[0] = v11 + v27; /*0x7bb9ea*/
    v33[1] = v18 + v10; /*0x7bb9f4*/
    v33[0] = v11 + a4; /*0x7bb9f8*/
    (*(void (**)(Draw *, int *, unsigned int *, unsigned int *, int))(v20 + 44))( this, (int *)(&a5), (unsigned int *)(v33), (unsigned int *)(v32), a9); /*0x7bba12*/
    v21 = (int)(this->Draw_field_00); /*0x7bba24*/
    v34[1] = a4 + v10; /*0x7bba26*/
    v35[1] = a4 + v10; /*0x7bba2a*/
    v34[0] = v11 + v28; /*0x7bba32*/
    v35[0] = v11 + v18; /*0x7bba48*/
    (*(void (**)(Draw *, int *, unsigned int *, unsigned int *, int))(v21 + 44))( this, (int *)(&a5), (unsigned int *)(v35), (unsigned int *)(v34), a9); /*0x7bba4c*/
    if ( v26 >= 0 ) /*0x7bba59*/
    {
      v22 = v28 - v27--; /*0x7bba69*/
      v26 += 4 * v22 + 10; /*0x7bba79*/
      --v25; /*0x7bba82*/
      ++a4; /*0x7bba86*/
    }
    else
    {
      v26 += 4 * v28 + 6; /*0x7bba5f*/
    }
    result = v28 + 1; /*0x7bba92*/
    if ( v27 < ++v28 ) /*0x7bba93*/
      break; /*0x7bba99*/
    v12 = v28; /*0x7bb95f*/
    v13 = a4; /*0x7bb963*/
  }
  return result; /*0x7bba9f*/

}
} // namespace gamemd