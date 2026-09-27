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

// 0x7C8FD2
namespace gamemd {
void CIpow_Helper(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7)
{
// local variable allocation has failed, the output may be wrong!
{
  long double result; // st7
  int v14; // ecx
  uint8_t v17; // cl
  uint8_t v18; // ch
  int v23; // [esp+88h] [ebp-4h]
  ObjectClass *v7 = CW; /*0x7c8fd2*/
  v23 = CW; /*0x7c8fd4*/
  if ( (unsigned short)CW != 639 ) /*0x7c8fdf*/
    CW = _load_CW(v23); /*0x7c8fe1*/
  int v8 = v7 & 0x7FF00000; /*0x7c8fe6*/
  if ( v8 == 2146435072 ) /*0x7c8ff6*/
  {
    if ( a6 | CW & 0xFFFFF ) /*0x7c90a0*/
    {
      _fload_withFB(0, &a4); /*0x7c906d*/
      if ( (a7 & 0x80000, unsigned int a4, unsigned int a5) != 0 ) /*0x7c9077*/
        goto LABEL_15; /*0x7c9077*/
      int v13 = v13 + 1; /*0x7c9079*/
    }
    else
    {
      _fload_withFB(0, &a4, unsigned int a5, unsigned int a2, unsigned int a3); /*0x7c90aa*/
    }
LABEL_21:
    if ( (a5 & 0x7FF00000) != 0x7FF00000 || !(a4 | a5 & 0xFFFFF) ) /*0x7c90c7*/
    {
      if ( !v14 ) /*0x7c90cf*/
      {
  unsigned char v22[116]; // [esp+14h] [ebp-78h] BYREF
        unsigned char * v20 = v22; /*0x7c90d6*/
        __asm { fsave byte ptr [ecx+8] } /*0x7c90e1*/
        int v15 = _powhlp(a2, a3, v22); /*0x7c90e5*/
  long double *v21; // [esp+10h] [ebp-7Ch]
        _ECX = v21; /*0x7c90ed*/
        __asm { frstor byte ptr [ecx+8] } /*0x7c90ee*/
        result = *v21; /*0x7c90f1*/
        if (!v15, unsigned int a5, unsigned int a2, unsigned int a3) /*0x7c90f8*/
          return result; /*0x7c90f8*/
        goto LABEL_11; /*0x7c90f8*/
      }
      goto LABEL_17; /*0x7c90cf*/
    }
    if ( (a5 & 0x80000) == 0 ) /*0x7c908a*/
    {
LABEL_17:
      result = a3 + a2; /*0x7c908c*/
      goto LABEL_11; /*0x7c9093*/
    }
LABEL_15:
    result = a3 + a2; /*0x7c907c*/
    goto LABEL_11; /*0x7c9083*/
  }
  int v9 = _fload_withFB(v8, &a4); /*0x7c8ffc*/
  char v10; // zf
  if ( v10 ) /*0x7c9001*/
  {
    v14 = 0; /*0x7c9095*/
    goto LABEL_21; /*0x7c9097*/
  }
  if ( (v9 & 0x7FF00000) != 0 || a4 | a5 & 0xFFFFF ) /*0x7c9111*/
  {
  char v19; // cl
    if ( a5 >= 0 || (CIpow_Helper_Helper(a3), a2 = -a2, v19) ) /*0x7c918b*/
    {
      result = __FYL2X__(a2, a3); /*0x7c901f*/
      _twoToTOS(); /*0x7c9021*/
  char v12; // cl
      if ( v12 == 1 ) /*0x7c9029*/
        result = -result; /*0x7c902b*/
      if ( !CRTGlobal_B7819C ) /*0x7c9034*/
        _check_range_exit(&off_87BED8, 29, unsigned int a7, unsigned int a6); /*0x7c9045*/
      return result; /*0x7c9045*/
    }
    result = *(double *)&DataGlobal_87C550; /*0x7c9195*/
LABEL_11:
    if ( !CRTGlobal_B7819C ) /*0x7c9051*/
      _startTwoArgErrorHandling(unsigned int a7, unsigned int a6, unsigned int a3, unsigned int a5); /*0x7c9062*/
    return result; /*0x7c9051*/
  }
  if ( (a7 & 0x7FF00000) == 0 ) /*0x7c9126*/
  {
    if (a6 | a7 & 0xFFFFF, unsigned int a3, unsigned int a5) /*0x7c916c*/
      return 0.0; /*0x7c9179*/
    else
      return 1.0; /*0x7c9172*/
  }
  CIpow_Helper_Helper(a3); /*0x7c9128*/
  v18 = IDA_HIBYTE(a5) >> 7; /*0x7c9131*/
  if ( a7 < 0 ) /*0x7c913c*/
  {
    result = *(double *)&DataGlobal_87C4F0; /*0x7c913e*/
    if ( (v17 & v18) != 0 ) /*0x7c9146*/
      result = -*(double *)&DataGlobal_87C4F0; /*0x7c9148*/
    goto LABEL_11; /*0x7c9148*/
  }
  result = 0.0; /*0x7c9154*/
  if ( (v17 & v18) != 0 ) /*0x7c9158*/
    return -0.0; /*0x7c915e*/
  return result; /*0x7cf43a*/
}
} // namespace gamemd
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