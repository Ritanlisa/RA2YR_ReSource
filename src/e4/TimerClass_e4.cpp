// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x4C9480
namespace gamemd {
int TimerClass::Active()
{

  int v1; // edx
  int v2; // eax

  if ( *(int16_t *)((char *)&this->u32_80) <= 0 ) /*0x4c9485*/
    return 0; /*0x4c9485*/
  v1 = this->u32_8; /*0x4c9487*/
  v2 = this->q010; /*0x4c948a*/
  if ( v1 != -1 ) /*0x4c9490*/
  {
    if ( (int)dword_A8ED84 - v1 >= v2 ) /*0x4c949c*/
      return 0; /*0x4c949c*/
    v2 -= (int)dword_A8ED84 - v1; /*0x4c949e*/
  }
  return v2 != 0; /*0x4c94a9*/

}
}
// 0x54FE60
namespace gamemd {
void * TimerClass::Construct(int a2, int a3, TechnoTypeClass * aP3, int a5, int a6, int a7, int a8, char a9, int a10, int a11, int a12, int a13, char a14, char a15, int a16, int a17)
{

  unsigned int *v18; // ecx
  int v20; // eax

  *(unsigned int *)this = 0; /*0x54fe6a*/
  this->u32_4 = 0; /*0x54fe6c*/
  this->u32_8 = dword_A8ED84; /*0x54fe75*/
  v18 = (unsigned int *)((unsigned char *)&this->u32_C6); /*0x54fe78*/
  this->q010 = 0; /*0x54fe7b*/
  *v18 = a2; /*0x54fe83*/
  this->u32_14 = 0; /*0x54fe89*/
  this->u32_18 = 1; /*0x54fe8c*/
  v18[1] = a3; /*0x54fe8f*/
  this->u32_1C = 1; /*0x54fe96*/
  this->u32_8 = 0; /*0x54fe99*/
  v18[2] = (unsigned int)(aP3); /*0x54fe9c*/
  this->u32_21 = 0; /*0x54fea6*/
  this->u32_C = a5; /*0x54fea9*/
  this->u32_34 = a6; /*0x54feaf*/
  this->u32_38 = a7; /*0x54feb6*/
  this->u32_3C = a8; /*0x54febd*/
  this->q010 = a9; /*0x54fec4*/
  this->u32_41 = 0; /*0x54fecb*/
  this->u32_42 = 0; /*0x54fece*/
  this->u32_43 = 0; /*0x54fed1*/
  this->u32_44 = 0; /*0x54fed4*/
  this->u32_45 = 0; /*0x54fed7*/
  this->u32_46 = 0; /*0x54feda*/
  this->u32_47 = 0; /*0x54fedd*/
  this->u32_48 = 0; /*0x54fee0*/
  this->u32_49 = 0; /*0x54fee3*/
  this->u32_4C = a13; /*0x54fee6*/
  this->u32_51 = 0; /*0x54feed*/
  this->u32_50 = a14; /*0x54fef0*/
  this->u32_52 = a15; /*0x54fef7*/
  this->u32_54 = a16; /*0x54fefe*/
  this->u32_58 = a17; /*0x54ff05*/
  *(unsigned int *)this = 0; /*0x54ff08*/
  dword_A8ED84 = dword_A8ED84; /*0x54ff0a*/
  this->u32_14 = 1; /*0x54ff10*/
  this->u32_8 = dword_A8ED84; /*0x54ff13*/
  this->u32_C = a3; /*0x54ff1a*/
  this->q010 = 1; /*0x54ff21*/
  *(unsigned short *)((unsigned char *)this + 65) = a10; /*0x54ff29*/
  this->u32_43 = BYTE2(a10); /*0x54ff32*/
  this->u32_44 = a11; /*0x54ff39*/
  this->u32_46 = BYTE2(a11); /*0x54ff42*/
  *(unsigned short *)((unsigned char *)this + 71) = a12; /*0x54ff49*/
  this->u32_49 = BYTE2(a12); /*0x54ff4d*/
  if ( dword_ABC888 < dword_ABC880 /*0x54ff85*/
    || (byte_ABC885 || !dword_ABC880)
    && dword_ABC88C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_ABC878 + 8))(
         (int *)&dword_ABC878,
         dword_ABC880 + dword_ABC88C,
         0) )
  {
    v20 = (unsigned int)(dword_ABC888++);
    *((unsigned int *)dword_ABC87C + v20) = (unsigned int)(this); /*0x54ffa1*/
  }
  return this; /*0x54ffa6*/

}
}
// 0x5CEAD0
namespace gamemd {
signed int TimerClass::GetRemaining()
{

  signed int result; // eax
  signed int v3; // edi

  result = *((unsigned int *)this + 4); /*0x5cead3*/
  if ( result != -1 ) /*0x5cead9*/
  {
    v3 = *((unsigned int *)this + 6); /*0x5ceadc*/
    result = TimerGetTicks() - *((unsigned int *)this + 4); /*0x5ceaec*/
    if ( result >= v3 ) /*0x5ceaf1*/
    {
      *((unsigned int *)this + 6) = 0; /*0x5ceb04*/
      *((unsigned int *)this + 4) = -1; /*0x5ceb07*/
    }
    else
    {
      *((unsigned int *)this + 4) = -1; /*0x5ceaf5*/
      *((unsigned int *)this + 6) = v3 - result; /*0x5ceafc*/
    }
  }
  return result; /*0x5ceb00*/

}
}
// 0x5CEB20
namespace gamemd {
void TimerClass::StartIfIdle()
{

  if ( *((unsigned int *)this + 4) == -1 ) /*0x5ceb27*/
    *((unsigned int *)this + 4) = ((gamemd::Timer *)this)->GetTicks(); /*0x5ceb31*/

}
}
