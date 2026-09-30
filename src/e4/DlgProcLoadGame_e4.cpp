// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6967B0_e4.hpp"
#include "e4/classes/E4Recv_696AE0_e4.hpp"
#include "e4/classes/E4Recv_696C40_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x696AE0
namespace gamemd {
HWND E4Recv_696AE0::sub_696AE0()
{

  HWND DlgItem; // edi
  HWND result; // eax
  HWND v4; // ebp
  char *v5; // esi
  LRESULT v6; // edi
  int v7; // eax
  char *v8; // [esp+10h] [ebp-8h]

  DlgItem = GetDlgItem(*(HWND *)this, 1629); /*0x696b05*/
  result = GetDlgItem(*(HWND *)this, 1630); /*0x696b07*/
  v4 = result; /*0x696b0b*/
  if ( DlgItem ) /*0x696b0d*/
  {
    if ( result ) /*0x696b15*/
    {
      v5 = (char *)((char *)this + 8); /*0x696b21*/
      SendMessageA(DlgItem, 0x4B5u, 0x80u, (LPARAM)v5); /*0x696b30*/
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x696b3f*/
      ((String *)(v5))->Trim(); /*0x696b43*/
      result = 0; /*0x696b4d*/
      if ( strlen(v5) ) /*0x696b4f*/
      {
        _strupr(v5); /*0x696b5b*/
        v6 = SendMessageA(v4, 0x4C4u, 0xFFFFFFFF, (LPARAM)v5); /*0x696b6e*/
        if ( v6 == -1 ) /*0x696b73*/
        {
          v8 = (char *)__2_YAPAXI_Z(0x29u); /*0x696b8c*/
          strcpy(v8, v5); /*0x696ba2*/
          result = (HWND)SendMessageA(v4, 0x4C8u, 0, (LPARAM)v8); /*0x696bb1*/
          v6 = (LRESULT)result; /*0x696bb3*/
          if ( result == HWND_MESSAGE|0x2 ) /*0x696bb8*/
            return result; /*0x696bb8*/
          if ( MEMORY[0xA8DB5C] < MEMORY[0xA8DB54] /*0x696bf1*/
            || (MEMORY[0xA8DB59] || !MEMORY[0xA8DB54])
            && MEMORY[0xA8DB60] > 0
            && (*(uint8_t (**)(int *, int, unsigned int))(MEMORY[0xA8DB4C] + 8))(
                 &MEMORY[0xA8DB4C],
                 MEMORY[0xA8DB54] + MEMORY[0xA8DB60],
                 0) )
          {
            v7 = MEMORY[0xA8DB5C]++; /*0x696c02*/
            *(unsigned int *)(MEMORY[0xA8DB50] + 4 * v7) = v8; /*0x696c11*/
          }
        }
        SendMessageA(v4, 0x186u, v6, 0); /*0x696c1d*/
        SendMessageA(v4, 0x197u, v6, 0); /*0x696c28*/
        *((unsigned int *)this + 38) = v6; /*0x696c2e*/
        return (HWND)this; /*0x696c2a*/
      }
    }
  }
  return result; /*0x696c34*/

}
} // namespace gamemd

// 0x696C40
namespace gamemd {
HWND E4Recv_696C40::sub_696C40()
{

  HWND result; // eax
  HWND v3; // edi
  LRESULT v4; // esi
  int v5; // eax

  result = GetDlgItem(*(HWND *)this, 1630); /*0x696c4f*/
  v3 = result; /*0x696c55*/
  if ( result ) /*0x696c59*/
  {
    result = (HWND)SendMessageA(result, 0x18Bu, 0, 0); /*0x696c6f*/
    if ( (int)result > 0 ) /*0x696c73*/
    {
      result = (HWND)SendMessageA(v3, 0x188u, 0, 0); /*0x696c7f*/
      v4 = (LRESULT)result; /*0x696c81*/
      if ( result != HWND_MESSAGE|0x2 ) /*0x696c86*/
      {
        SendMessageA(v3, 0x182u, (WPARAM)result, 0); /*0x696c91*/
        if ( v4 < (LRESULT)((LRESULT))((LRESULT))(g_abs_A8DB5C) ) /*0x696c9b*/
        {
          v5 = v4; /*0x696c9e*/
          if ( v4 < (LRESULT)((LRESULT))((LRESULT))(--g_abs_A8DB5C) ) /*0x696ca8*/
          {
            do /*0x696cc0*/
            {
              ++v5; /*0x696cb0*/
              *(unsigned int *)(g_abs_A8DB50 + 4 * v5 - 4) = *(unsigned int *)(g_abs_A8DB50 + 4 * v5); /*0x696cb4*/
            }
            while ( v5 < (int)((int))((int))(g_abs_A8DB5C) ); /*0x696cc0*/
          }
        }
        if ( v4 >= SendMessageA(v3, 0x18Bu, 0, 0) ) /*0x696cd0*/
          --v4; /*0x696cd2*/
        SendMessageA(v3, 0x186u, v4, 0); /*0x696cdc*/
        result = (HWND)SendMessageA(v3, 0x197u, v4, 0); /*0x696ce7*/
        *((unsigned int *)this + 38) = v4; /*0x696ce9*/
      }
    }
  }
  return result; /*0x696cef*/

}
} // namespace gamemd
