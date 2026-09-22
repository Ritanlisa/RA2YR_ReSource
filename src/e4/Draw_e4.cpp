// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7BB920
int Draw::Ellipse(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  int v10 = a3; /*0x7bb92c*/
  int v11 = a2; /*0x7bb933*/
  int v27 = a4; /*0x7bb943*/
  int v12 = 0; /*0x7bb947*/
  int v26 = 3 - 2 * a4; /*0x7bb949*/
  int v13 = -a4; /*0x7bb94d*/
  int v14 = a3 + a4; /*0x7bb94f*/
  int v28 = 0; /*0x7bb951*/
  a4 = -a4; /*0x7bb955*/
  int v25 = v14; /*0x7bb959*/
  while ( 1 ) /*0x7bb970*/
  {
    a3 = v12 + v10; /*0x7bb970*/
    a2 = v11 + v27; /*0x7bb974*/
    int v15 = v13 + v11; /*0x7bb978*/
    int v16 = *this; /*0x7bb97b*/
  _DWORD v29[2]; // [esp+50h] [ebp-38h] BYREF
    v29[1] = v12 + v10; /*0x7bb97d*/
    v29[0] = v15; /*0x7bb985*/
    this->vt_slot_44(&a5, v29, &a2, a9); /*0x7bb99b*/
    int v17 = v12 + v11; /*0x7bb9a2*/
    int v18 = -v12; /*0x7bb9a5*/
  _DWORD v30[2]; // [esp+58h] [ebp-30h] BYREF
    v30[0] = v17; /*0x7bb9a7*/
    v30[1] = v25; /*0x7bb9b2*/
  _DWORD v31[2]; // [esp+60h] [ebp-28h] BYREF
    v31[0] = v18 + v11; /*0x7bb9b6*/
    int v19 = *this; /*0x7bb9bc*/
    v31[1] = v25; /*0x7bb9be*/
    this->vt_slot_44(&a5, v31, v30, a9); /*0x7bb9d4*/
  _DWORD v32[2]; // [esp+68h] [ebp-20h] BYREF
    v32[1] = v18 + v10; /*0x7bb9de*/
    int v20 = *this; /*0x7bb9e8*/
    v32[0] = v11 + v27; /*0x7bb9ea*/
  _DWORD v33[2]; // [esp+70h] [ebp-18h] BYREF
    v33[1] = v18 + v10; /*0x7bb9f4*/
    v33[0] = v11 + a4; /*0x7bb9f8*/
    this->vt_slot_44(&a5, v33, v32, a9); /*0x7bba12*/
    int v21 = *this; /*0x7bba24*/
  _DWORD v34[2]; // [esp+78h] [ebp-10h] BYREF
    v34[1] = a4 + v10; /*0x7bba26*/
  _DWORD v35[2]; // [esp+80h] [ebp-8h] BYREF
    v35[1] = a4 + v10; /*0x7bba2a*/
    v34[0] = v11 + v28; /*0x7bba32*/
    v35[0] = v11 + v18; /*0x7bba48*/
    this->vt_slot_44(&a5, v35, v34, a9); /*0x7bba4c*/
    if ( v26 >= 0 ) /*0x7bba59*/
    {
      int v22 = v28 - v27--; /*0x7bba69*/
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
}
