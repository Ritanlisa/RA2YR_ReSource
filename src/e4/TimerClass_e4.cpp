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
namespace gamemd {  // G42.18 ns repair
int TimerClass::Active(void *a1)
{

  if ( *&this->q028 <= 0 ) /*0x4c9485*/
    return 0; /*0x4c9485*/
  int v1 = this->u32_8; // edx /*0x4c9487*/
  int v2 = this->u32_10; // eax /*0x4c948a*/
  if ( v1 != -1 ) /*0x4c9490*/
  {
    if ( (int)dword_A8ED84 - v1 >= v2 ) /*0x4c949c*/
      return 0; /*0x4c949c*/
    v2 -= (int)dword_A8ED84 - v1; /*0x4c949e*/
  }
  return v2 != 0; /*0x4c94a9*/
}
}  // G42.18 ns repair
// 0x54FE60
namespace gamemd {
void * TimerClass::Construct(int a2, int a3, TechnoTypeClass * aP3, int a5, int a6, int a7, int a8, char a9, int a10, int a11, int a12, int a13, char a14, char a15, int a16, int a17)
{

  *(unsigned int *)this = 0; /*0x54fe6a*/
  this->u32_10 = 0; /*0x54fe6c*/
  this->u32_8 = dword_A8ED84; /*0x54fe75*/
  unsigned int *v18 = &this->q024; // ecx /*0x54fe78*/
  this->u32_10 = 0; /*0x54fe7b*/
  *v18 = a2; /*0x54fe83*/
  this->u32_14 = 0; /*0x54fe89*/
  this->u32_18 = 1; /*0x54fe8c*/
  v18[1] = a3; /*0x54fe8f*/
  this->u32_1C = 1; /*0x54fe96*/
  this->u32_80 = 0; /*0x54fe99*/
  v18[2] = (unsigned int)(aP3); /*0x54fe9c*/
  this->u32_84 = 0; /*0x54fea6*/
  this->u32_30 = a5; /*0x54fea9*/
  this->u32_34 = a6; /*0x54feaf*/
  this->u32_38 = a7; /*0x54feb6*/
  this->u32_3C = a8; /*0x54febd*/
  this->u32_100 = a9; /*0x54fec4*/
  this->u32_104 = 0; /*0x54fecb*/
  this->u32_108 = 0; /*0x54fece*/
  this->u32_10C = 0; /*0x54fed1*/
  this->u32_110 = 0; /*0x54fed4*/
  this->u32_114 = 0; /*0x54fed7*/
  this->u32_118 = 0; /*0x54feda*/
  this->u32_11C = 0; /*0x54fedd*/
  this->u32_120 = 0; /*0x54fee0*/
  this->u32_124 = 0; /*0x54fee3*/
  this->u32_4C = a13; /*0x54fee6*/
  this->u32_144 = 0; /*0x54feed*/
  this->u32_140 = a14; /*0x54fef0*/
  this->u32_148 = a15; /*0x54fef7*/
  this->u32_54 = a16; /*0x54fefe*/
  this->u32_58 = a17; /*0x54ff05*/
  *(unsigned int *)this = 0; /*0x54ff08*/
  dword_A8ED84 = dword_A8ED84; /*0x54ff0a*/
  this->u32_14 = 1; /*0x54ff10*/
  this->u32_8 = dword_A8ED84; /*0x54ff13*/
  this->u32_C = a3; /*0x54ff1a*/
  this->u32_10 = 1; /*0x54ff21*/
  this->u32_41 = a10; /*0x54ff29*/
  this->u32_10C = (((unsigned char *)&(a10))[2]); /*0x54ff32*/
  this->u32_44 = a11; /*0x54ff39*/
  this->u32_118 = (((unsigned char *)&(a11))[2]); /*0x54ff42*/
  this->u32_47 = a12; /*0x54ff49*/
  this->u32_124 = (((unsigned char *)&(a12))[2]); /*0x54ff4d*/
  if ( dword_ABC888 < dword_ABC880 /*0x54ff85*/
    || (byte_ABC885 || !dword_ABC880)
    && dword_ABC88C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_ABC878 + 8))(
         &dword_ABC878,
         dword_ABC880 + dword_ABC88C,
         0) )
  {
    int v20; // eax
    v20 = dword_ABC888++; /*0x54ff92*/
    *((unsigned int *)dword_ABC87C + v20) = (unsigned int)(this); /*0x54ffa1*/
  }
  return this; /*0x54ffa6*/
}
}
// 0x5CEAD0
namespace gamemd {
signed int TimerClass::GetRemaining()
{

  signed int result = this->u32_4; // eax /*0x5cead3*/
  if ( result != -1 ) /*0x5cead9*/
  {
    signed int v3 = this->u32_18; // edi /*0x5ceadc*/
    result = TimerGetTicks() - this->u32_4; /*0x5ceaec*/
    if ( result >= v3 ) /*0x5ceaf1*/
    {
      this->u32_18 = 0; /*0x5ceb04*/
      this->u32_4 = -1; /*0x5ceb07*/
    }
    else
    {
      this->u32_4 = -1; /*0x5ceaf5*/
      this->u32_18 = v3 - result; /*0x5ceafc*/
    }
  }
  return result; /*0x5ceb00*/
}
}
// 0x5CEB20
namespace gamemd {
void TimerClass::StartIfIdle()
{
  if ( this->u32_10 == -1 ) /*0x5ceb27*/
    this->u32_10 = TimerGetTicks(); /*0x5ceb31*/
}
}