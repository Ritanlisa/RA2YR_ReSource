// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ScrollClass_e4.hpp"

// 0x6205D0
namespace gamemd {
void Scrollbar_Draw(ObjectClass * aP0, int * a1, int a3, int a4, unsigned char a5, unsigned char a6, unsigned char a7, unsigned char a8)
{
  int result; // eax
  int v9; // esi
  int16_t v10; // bp
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // ebp
  int v19; // ecx
  int v20; // ebp
  int v21; // ecx
  int v22; // edx
  int16_t v23; // [esp+10h] [ebp-48h]
  int16_t v24; // [esp+14h] [ebp-44h]
  int v25[2]; // [esp+18h] [ebp-40h] BYREF
  int v26[2]; // [esp+20h] [ebp-38h] BYREF
  int v27; // [esp+28h] [ebp-30h] BYREF
  int v28; // [esp+2Ch] [ebp-2Ch]
  int v29[2]; // [esp+30h] [ebp-28h] BYREF
  int v30[2]; // [esp+38h] [ebp-20h] BYREF
  int v31[2]; // [esp+40h] [ebp-18h] BYREF
  int v32[2]; // [esp+48h] [ebp-10h] BYREF
  int v33[2]; // [esp+50h] [ebp-8h] BYREF

  result = a3; /*0x6205d3*/
  v9 = 0; /*0x6205da*/
  v10 = 0; /*0x6205dc*/
  v23 = -1; /*0x6205e5*/
  v24 = 0; /*0x6205ed*/
  if ( !a3 ) /*0x6205f1*/
  {
    v10 = -1; /*0x6205f3*/
    v23 = 0; /*0x6205f8*/
    v24 = -1; /*0x6205fc*/
  }
  if ( a4 > 0 ) /*0x620604*/
  {
    do /*0x620710*/
    {
      v13 = a1[1]; /*0x620615*/
      v14 = v9 + *a1; /*0x620618*/
      v25[0] = a1[2] - v9 + *a1 - 2; /*0x62061a*/
      v26[0] = v14; /*0x620624*/
      v25[1] = v9 + v13; /*0x62062c*/
      v26[1] = v9 + v13; /*0x620630*/
      DrawSurfaceLineAlpha(aP0, v26, v25, v23, a6); /*0x620641*/
      v15 = *a1; /*0x620649*/
      v16 = a1[1]; /*0x620651*/
      v27 = a1[2] - v9 + *a1 - 1; /*0x620654*/
      v17 = a1[3]; /*0x620658*/
      v29[0] = v9 + v15; /*0x62065f*/
      v28 = v16 - v9 + v17 - 1; /*0x620670*/
      v29[1] = v28; /*0x620674*/
      DrawSurfaceLineAlpha(aP0, v29, &v27, v10, a8); /*0x620680*/
      v18 = a1[3]; /*0x620687*/
      v19 = a1[1]; /*0x62068d*/
      v30[0] = *a1 + v9; /*0x620692*/
      v31[0] = v30[0]; /*0x620698*/
      v31[1] = v19 + v9 + 1; /*0x6206a8*/
      v30[1] = v19 - v9 + v18 - 1; /*0x6206ac*/
      DrawSurfaceLineAlpha(aP0, v31, v30, v23, a5); /*0x6206c1*/
      v20 = a1[3]; /*0x6206cd*/
      v21 = a1[1]; /*0x6206d4*/
      v32[0] = *a1 - v9 + a1[2] - 1; /*0x6206d9*/
      v33[0] = v32[0]; /*0x6206df*/
      v22 = v21 - v9 + v20 - 2; /*0x6206e9*/
      v10 = v24; /*0x6206ed*/
      v33[1] = v9 + v21; /*0x6206f1*/
      v32[1] = v22; /*0x6206f6*/
      result = DrawSurfaceLineAlpha(aP0, v33, v32, v24, a7); /*0x620706*/
      ++v9; /*0x62070b*/
    }
    while ( v9 < a4 ); /*0x620710*/
  }
  return result; /*0x620716*/
}
}