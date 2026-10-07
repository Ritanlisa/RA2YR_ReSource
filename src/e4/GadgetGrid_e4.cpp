// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GadgetGrid_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/GameSetup_e4.hpp"

// 0x4134A0
namespace gamemd {
int GadgetGrid::InsertItem(int a2)
{

  int *v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int result; // eax
  GadgetGrid *v12; // esi
  int v13; // ecx
  int GadgetGrid_field_0x04; // edx
  char v15[4]; // [esp+Ch] [ebp-4h] BYREF
  int v16; // [esp+14h] [ebp+4h]

  v4 = (int *)(*(int (**)(int, char *))(*(unsigned int *)&a2->q_6E0))( a2, (char *)(v15));  /*0x4134b3*/
  v5 = *v4; /*0x4134b9*/
  v16 = *v4; /*0x4134c0*/
  (*(void (**)(int, int))(*(unsigned int *)&a2->q_BE0))(a2, *v4);  /*0x4134c4*/
  if ( (v5 & 0x8000u) == 0 ) /*0x4134cd*/
    v5 = (int16_t)v5; /*0x4134d3*/
  else
    v5 = 0; /*0x4134cf*/
  if ( v16 >= 0 ) /*0x4134df*/
    v6 = SHIWORD(v16); /*0x4134e5*/
  else
    v6 = 0; /*0x4134e1*/
  v7 = v5 / (*(unsigned int *)&stru_87F5F0.__pad_58[716] / 20); /*0x413504*/
  v8 = 19; /*0x413506*/
  if ( v7 <= 19 ) /*0x41350e*/
    v8 = v7; /*0x413510*/
  v9 = v6 / (*(unsigned int *)&stru_87F5F0.__pad_58[720] / 20); /*0x41352f*/
  if ( v9 > 19 ) /*0x413534*/
    v9 = 19; /*0x413536*/
  v10 = 3 * (v8 + 20 * v9); /*0x413541*/
  result = *((unsigned int *)this + 120 * v9 + 6 * v8 + 2); /*0x413544*/
  v12 = this + v10; /*0x413548*/
  if ( *(unsigned int *)v12[2].__pad_0 < result /*0x413574*/
    || (BYTE1(v12[1].GadgetGrid_field_0x04) || !result)
    && (v13 = v12[2].GadgetGrid_field_0x04, v13 > 0)
    && (result = (*(int (**)(GadgetGrid *, int, unsigned int))(*(unsigned int *)v12->__pad_0 + 8))( (GadgetGrid *)(v12), result + v13, 0),
        (unsigned char)result) )
  {
    result = *(unsigned int *)v12[2].__pad_0; /*0x413576*/
    GadgetGrid_field_0x04 = v12->GadgetGrid_field_0x04; /*0x413579*/
    *(unsigned int *)v12[2].__pad_0 = result + 1; /*0x41357f*/
    *(unsigned int *)(GadgetGrid_field_0x04 + 4 * result) = a2; /*0x413582*/
  }
  return result; /*0x413585*/

}
} // namespace gamemd
// 0x4135D0
namespace gamemd {
int GadgetGrid::RemoveItem(int a2)
{

  GadgetGrid * v3;
  GadgetGrid * v4;
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // edx
  GadgetGrid *v9; // esi
  int result; // eax
  int v11; // ecx
  int v12; // ecx
  GadgetGrid * v13;
  char v14[4]; // [esp+Ch] [ebp-4h] BYREF

  v3 = (gamemd::GadgetGrid *)((int)((gamemd::GadgetGrid *)(*(unsigned int *)(*(int (**)(int, char *))(*(unsigned int *)a2 + 756))( a2, (char *)(v14)))));
  v13 = (gamemd::GadgetGrid *)((int16_t)((gamemd::GadgetGrid *)(HIWORD(v3))));
  (*(void (**)(int, int))(*(unsigned int *)&a2->q_BE0))(a2, dword_887850);  /*0x4135fb*/
  if ( ((unsigned int)(v3)& 0x8000u) == 0 ) /*0x413604*/
    v3 = (gamemd::GadgetGrid *)((int16_t)v3); /*0x41360a*/
  else
    v3 = (GadgetGrid *)(0); /*0x413606*/
  if ( (int)v13 >= 0 ) /*0x413616*/
    v4 = v13; /*0x41361c*/
  else
    v4 = (GadgetGrid *)(0); /*0x413618*/
  v5 = v3 / (*(unsigned int *)&stru_87F5F0.__pad_58[716] / 20); /*0x41363b*/
  v6 = 19; /*0x41363d*/
  if ( v5 <= 19 ) /*0x413645*/
    v6 = v5; /*0x413647*/
  v7 = v4 / (*(unsigned int *)&stru_87F5F0.__pad_58[720] / 20); /*0x413666*/
  if ( v7 > 19 ) /*0x41366b*/
    v7 = 19; /*0x41366d*/
  v8 = *(unsigned int *)&this->__pad_0[480 * v7 + 24 * v6]; /*0x413680*/
  v9 = (gamemd::GadgetGrid *)((unsigned int *)this + 60 * v7 + 3 * v6); /*0x413683*/
  result = (*(int (**)(GadgetGrid *, int *))(v8 + 16))( (GadgetGrid *)(v9), (int *)(&a2)); /*0x413688*/
  if ( result != -1 ) /*0x41368e*/
  {
    v11 = *(unsigned int *)v9[2].__pad_0; /*0x413690*/
    if ( result < v11 ) /*0x413695*/
    {
      v12 = v11 - 1; /*0x413697*/
      for ( *(unsigned int *)v9[2].__pad_0 = v12; /*0x41369d*/
            result < *(unsigned int *)v9[2].__pad_0;
            *(unsigned int *)(v9->GadgetGrid_field_0x04 + 4 * result - 4) = *(unsigned int *)(v9->GadgetGrid_field_0x04 + 4 * result) )
      {
        ++result; /*0x4136a2*/
      }
    }
  }
  return result; /*0x4136b1*/

}
} // namespace gamemd