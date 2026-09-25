// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/DriveLocomotionClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x7BB920
namespace gamemd {
int Draw::Ellipse(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v12; // edi
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // edi
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int result; // eax
  int v26; // [esp+44h] [ebp-44h]
  int v28; // [esp+4Ch] [ebp-3Ch]
  _DWORD v29[2]; // [esp+50h] [ebp-38h] BYREF
  _DWORD v30[2]; // [esp+58h] [ebp-30h] BYREF
  _DWORD v31[2]; // [esp+60h] [ebp-28h] BYREF
  _DWORD v32[2]; // [esp+68h] [ebp-20h] BYREF
  _DWORD v33[2]; // [esp+70h] [ebp-18h] BYREF
  _DWORD v34[2]; // [esp+78h] [ebp-10h] BYREF
  _DWORD v35[2]; // [esp+80h] [ebp-8h] BYREF

  a3 = a3; /*0x7bb92c*/
  a2 = a2; /*0x7bb933*/
  a4 = a4; /*0x7bb943*/
  v12 = 0; /*0x7bb947*/
  v26 = 3 - 2 * a4; /*0x7bb949*/
  v13 = -a4; /*0x7bb94d*/
  v14 = a3 + a4; /*0x7bb94f*/
  v28 = 0; /*0x7bb951*/
  a4 = -a4; /*0x7bb955*/
  v14 = v14; /*0x7bb959*/
  while ( 1 ) /*0x7bb970*/
  {
    a3 = v12 + a3; /*0x7bb970*/
    a2 = a2 + a4; /*0x7bb974*/
    v15 = v13 + a2; /*0x7bb978*/
    v16 = *this; /*0x7bb97b*/
    v29[1] = v12 + a3; /*0x7bb97d*/
    v29[0] = v15; /*0x7bb985*/
    this->vt_slot_44(&a5, v29, &a2, a9); /*0x7bb99b*/
    v17 = v12 + a2; /*0x7bb9a2*/
    v18 = -v12; /*0x7bb9a5*/
    v30[0] = v17; /*0x7bb9a7*/
    v30[1] = v14; /*0x7bb9b2*/
    v31[0] = v18 + a2; /*0x7bb9b6*/
    v19 = *this; /*0x7bb9bc*/
    v31[1] = v14; /*0x7bb9be*/
    this->vt_slot_44(&a5, v31, v30, a9); /*0x7bb9d4*/
    v32[1] = v18 + a3; /*0x7bb9de*/
    v20 = *this; /*0x7bb9e8*/
    v32[0] = a2 + a4; /*0x7bb9ea*/
    v33[1] = v18 + a3; /*0x7bb9f4*/
    v33[0] = a2 + a4; /*0x7bb9f8*/
    this->vt_slot_44(&a5, v33, v32, a9); /*0x7bba12*/
    v21 = *this; /*0x7bba24*/
    v34[1] = a4 + a3; /*0x7bba26*/
    v35[1] = a4 + a3; /*0x7bba2a*/
    v34[0] = a2 + v28; /*0x7bba32*/
    v35[0] = a2 + v18; /*0x7bba48*/
    this->vt_slot_44(&a5, v35, v34, a9); /*0x7bba4c*/
    if ( v26 >= 0 ) /*0x7bba59*/
    {
      v22 = v28 - a4--; /*0x7bba69*/
      v26 += 4 * v22 + 10; /*0x7bba79*/
      --v14; /*0x7bba82*/
      ++a4; /*0x7bba86*/
    }
    else
    {
      v26 += 4 * v28 + 6; /*0x7bba5f*/
    }
    result = v28 + 1; /*0x7bba92*/
    if ( a4 < ++v28 ) /*0x7bba93*/
      break; /*0x7bba99*/
    v12 = v28; /*0x7bb95f*/
    v13 = a4; /*0x7bb963*/
  }
  return result; /*0x7bba9f*/
}
} // namespace gamemd