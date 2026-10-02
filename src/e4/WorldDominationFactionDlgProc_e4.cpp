// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AF540_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7AF540
namespace gamemd {
int E4Recv_7AF540::sub_7AF540(HWND hWnd, int * a3)
{

  int result; // eax
  int v5; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // ecx

  result = (*((int ((gamemd::ObjectClass *)(**))(ObjectClass *))this->vtable1 + 2))(this); /*0x7af546*/
  if ( !(unsigned char)result ) /*0x7af54b*/
  {
    v5 = 0; /*0x7af554*/
    ((unsigned int *)this)[0] = ((unsigned int *)this)[0]; /*0x7af556*/
    result = *a3; /*0x7af55d*/
    if ( *a3 >= 16 && result < 364 && (v6 = a3[1], v6 >= 20) && v6 < 136 /*0x7af5bc*/
      || result >= 130 && result < 300 && (v7 = a3[1], v7 >= 100) && v7 < 216
      || result >= 175 && result < 245 && (v8 = a3[1], v8 >= 216) && v8 < 262 )
    {
      result = ((unsigned int *)this)[0]; /*0x7af60d*/
      v5 = 2; /*0x7af610*/
      ((unsigned int *)this)[0] = result; /*0x7af615*/
    }
    else if ( result >= 252 && result < 466 && (v9 = a3[1], v9 >= 180) && v9 < 382 /*0x7af5fe*/
           || result >= 212 && result < 496 && (v10 = a3[1], v10 >= 262) && v10 < 422 )
    {
      v5 = 3; /*0x7af603*/
      ((unsigned int *)this)[0] = ((unsigned int *)this)[0]; /*0x7af608*/
    }
    if ( ((unsigned int *)this)[0] != (void *)v5 ) /*0x7af61b*/
    {
      ((unsigned int *)this)[0] = (unsigned int)((void *)v5); /*0x7af626*/
      return InvalidateRect(hWnd, 0, 0); /*0x7af629*/
    }
  }
  return result; /*0x7af62f*/

}
} // namespace gamemd
