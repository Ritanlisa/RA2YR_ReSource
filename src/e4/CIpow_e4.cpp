// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CChatEventSink_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CComObject_CChatEventSink___ATL_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/VectorCursor_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/COMObject_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/COMClass_e4.hpp"

// 0x7C8FD2
namespace gamemd {
void CIpow_Helper(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7)
{
  int v4; // eax
  double v5; // st6
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  double v9; // st7
  char v10; // zf
  double result; // st7
  char v12; // cl
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // ch
  char v19; // cl
  double *v20; // [esp+10h] [ebp-7Ch]
  double *v21; // [esp+10h] [ebp-7Ch]
  double v22[14]; // [esp+14h] [ebp-78h] BYREF
  int v23; // [esp+88h] [ebp-4h]

  v6 = v4; /*0x7c8fd2*/
  v23 = v4; /*0x7c8fd4*/
  if ( (_WORD)v4 != 639 ) /*0x7c8fdf*/
    _load_CW(); /*0x7c8fe1*/
  v7 = v6 & 0x7FF00000; /*0x7c8fe6*/
  if ( v7 == 2146435072 ) /*0x7c8ff6*/
  {
    if ( a3 | v4 & 0xFFFFF ) /*0x7c90a0*/
    {
      v9 = _fload_withFB(0, &this); /*0x7c906d*/
      if ( (a4 & 0x80000) != 0 ) /*0x7c9077*/
        goto LABEL_15; /*0x7c9077*/
      v14 = v13 + 1; /*0x7c9079*/
    }
    else
    {
      v9 = _fload_withFB(0, &this); /*0x7c90aa*/
    }
  LABEL_21:
    if ( (a2 & 0x7FF00000) != 0x7FF00000 || !((unsigned int)this | a2 & 0xFFFFF) ) /*0x7c90c7*/
    {
      if ( !v14 ) /*0x7c90cf*/
      {
        v20 = v22; /*0x7c90d6*/
        __asm { fsave byte ptr [ecx+8] } /*0x7c90e1*/
        v15 = _powhlp(v5, v9, v22); /*0x7c90e5*/
        _ECX = v21; /*0x7c90ed*/
        __asm { frstor byte ptr [ecx+8] } /*0x7c90ee*/
        result = *v21; /*0x7c90f1*/
        if ( !v15 ) /*0x7c90f8*/
          return result; /*0x7c90f8*/
        goto LABEL_11; /*0x7c90f8*/
      }
      goto LABEL_17; /*0x7c90cf*/
    }
    if ( (a2 & 0x80000) == 0 ) /*0x7c908a*/
    {
  LABEL_17:
      result = v9 + v5; /*0x7c908c*/
      goto LABEL_11; /*0x7c9093*/
    }
  LABEL_15:
    result = v9 + v5; /*0x7c907c*/
    goto LABEL_11; /*0x7c9083*/
  }
  v9 = _fload_withFB(v7, &this); /*0x7c8ffc*/
  if ( v10 ) /*0x7c9001*/
  {
    v14 = 0; /*0x7c9095*/
    goto LABEL_21; /*0x7c9097*/
  }
  if ( (v8 & 0x7FF00000) != 0 || (unsigned int)this | a2 & 0xFFFFF ) /*0x7c9111*/
  {
    if ( a2 >= 0 || (CIpow_Helper_Helper(v9), v5 = -v5, v19) ) /*0x7c918b*/
    {
      result = _twoToTOS(__FYL2X__(v5, v9)); /*0x7c9021*/
      if ( v12 == 1 ) /*0x7c9029*/
        result = -result; /*0x7c902b*/
      if ( !dword_B7819C ) /*0x7c9034*/
        _check_range_exit(&off_87BED8, 29); /*0x7c9045*/
      return result; /*0x7c9045*/
    }
    result = *(double *)&tbyte_87C550; /*0x7c9195*/
  LABEL_11:
    if ( !dword_B7819C ) /*0x7c9051*/
      _startTwoArgErrorHandling(); /*0x7c9062*/
    return result; /*0x7c9068*/
  }
  if ( (a4 & 0x7FF00000) == 0 ) /*0x7c9126*/
  {
    if ( a3 | a4 & 0xFFFFF ) /*0x7c916c*/
      return 0.0; /*0x7c9179*/
    else
      return 1.0; /*0x7c9172*/
  }
  CIpow_Helper_Helper(v9); /*0x7c9128*/
  v18 = IDA_HIBYTE(a2) >> 7; /*0x7c9131*/
  if ( a4 < 0 ) /*0x7c913c*/
  {
    result = *(double *)&tbyte_87C4F0; /*0x7c913e*/
    if ( (v17 & v18) != 0 ) /*0x7c9146*/
      result = -*(double *)&tbyte_87C4F0; /*0x7c9148*/
    goto LABEL_11; /*0x7c9148*/
  }
  result = 0.0; /*0x7c9154*/
  if ( (v17 & v18) != 0 ) /*0x7c9158*/
    return -0.0; /*0x7c915e*/
  return result; /*0x7c9068*/
}
}
// 0x7C91A5
namespace gamemd {
void* __usercall CIpow_Helper_Helper(double a1@<st0> a1)
{
  _ST6 = a1; /*0x7c91a5*/
  __asm { frndint } /*0x7c91a7*/
  if ( _ST6 == a1 ) /*0x7c91b1*/
  {
    _ST6 = a1 * dbl_87BED0; /*0x7c91bb*/
    __asm { frndint } /*0x7c91bd*/
  }
}
}