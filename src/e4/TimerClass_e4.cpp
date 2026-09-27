// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4C9480
namespace gamemd {
int TimerClass::Active()
{
  int v1; // edx
  void * v2;

  if ( *(int16_t *)(&this->u32_80) <= 0 ) /*0x4c9485*/
    return 0; /*0x4c9485*/
  v1 = this->u32_8; /*0x4c9487*/
  v2 = this->q010; /*0x4c948a*/
  if ( v1 != -1 ) /*0x4c9490*/
  {
    if ( (int)g_CurrentFrame - v1 >= v2 ) /*0x4c949c*/
      return 0; /*0x4c949c*/
    v2 -= (int)g_CurrentFrame - v1; /*0x4c949e*/
  }
  return v2 != 0; /*0x4c94a9*/
}
}
// 0x54FE60
namespace gamemd {
void * TimerClass::Construct(int a2, int a3, TechnoTypeClass * aP3, int a5, int a6, int a7, int a8, char a9, int a10, int a11, int a12, int a13, char a14, char a15, int a16, int a17)
{
  unsigned int *v18; // ecx
  TimerClass * v20;

  *(unsigned int *)this = 0; /*0x54fe6a*/
  this->q010 = 0; /*0x54fe6c*/
  this->u32_8 = g_CurrentFrame; /*0x54fe75*/
  v18 = &this->u32_90; /*0x54fe78*/
  this->q010 = 0; /*0x54fe7b*/
  *v18 = a2; /*0x54fe83*/
  this->u32_14 = 0; /*0x54fe89*/
  this->u32_18 = 1; /*0x54fe8c*/
  v18[1] = a3; /*0x54fe8f*/
  this->u32_1C = 1; /*0x54fe96*/
  *(&this->u32_C2) = 0; /*0x54fe99*/
  v18[2] = aP3; /*0x54fe9c*/
  *(&this->u32_C3) = 0; /*0x54fea6*/
  this->q030 = a5; /*0x54fea9*/
  this->q034 = a6; /*0x54feaf*/
  this->u32_38 = a7; /*0x54feb6*/
  this->u32_3C = a8; /*0x54febd*/
  *(&this->u32_184) = a9; /*0x54fec4*/
  *(&this->u32_185) = 0; /*0x54fecb*/
  *(&this->u32_186) = 0; /*0x54fece*/
  *(&this->u32_187) = 0; /*0x54fed1*/
  *(&this->u32_188) = 0; /*0x54fed4*/
  *(&this->u32_189) = 0; /*0x54fed7*/
  *(&this->u32_1C0) = 0; /*0x54feda*/
  *(&this->u32_1C1) = 0; /*0x54fedd*/
  *(&this->u32_1C2) = 0; /*0x54fee0*/
  *(&this->u32_1C3) = 0; /*0x54fee3*/
  this->u32_4C = a13; /*0x54fee6*/
  *(&this->u32_201) = 0; /*0x54feed*/
  *(&this->u32_200) = a14; /*0x54fef0*/
  *(&this->u32_202) = a15; /*0x54fef7*/
  this->q054 = a16; /*0x54fefe*/
  this->u32_58 = a17; /*0x54ff05*/
  *(unsigned int *)this = 0; /*0x54ff08*/
  g_CurrentFrame = g_CurrentFrame; /*0x54ff0a*/
  this->u32_14 = 1; /*0x54ff10*/
  this->u32_8 = g_CurrentFrame; /*0x54ff13*/
  this->u32_C = a3; /*0x54ff1a*/
  this->q010 = 1; /*0x54ff21*/
  this->u16_41 = a10; /*0x54ff29*/
  *(&this->u32_187) = IDA_BYTE2(a10); /*0x54ff32*/
  this->q044 = a11; /*0x54ff39*/
  *(&this->u32_1C0) = IDA_BYTE2(a11); /*0x54ff42*/
  this->u16_47 = a12; /*0x54ff49*/
  *(&this->u32_1C3) = IDA_BYTE2(a12); /*0x54ff4d*/
  if ( g_TimerPool < dword_ABC880 /*0x54ff85*/
    || (byte_ABC885 || !dword_ABC880)
    && dword_ABC88C > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_ABC878 + 8))(
         &dword_ABC878,
         dword_ABC880 + dword_ABC88C,
         0) )
  {
    v20 = (gamemd::TimerClass *)(g_TimerPool++);
    *((unsigned int *)dword_ABC87C + v20) = this; /*0x54ffa1*/
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

  result = this->q040; /*0x5cead3*/
  if ( result != -1 ) /*0x5cead9*/
  {
    v3 = this->q018; /*0x5ceadc*/
    result = Timer::GetTicks() - this->q040; /*0x5ceaec*/
    if ( result >= v3 ) /*0x5ceaf1*/
    {
      this->q018 = 0; /*0x5ceb04*/
      this->q040 = -1; /*0x5ceb07*/
    }
    else
    {
      this->q040 = -1; /*0x5ceaf5*/
      this->q018 = v3 - result; /*0x5ceafc*/
    }
  }
  return result; /*0x5ceb00*/
}
}
// 0x5CEB20
namespace gamemd {
void TimerClass::StartIfIdle()
{
  if ( this->q010 == -1 ) /*0x5ceb27*/
    this->q010 = Timer::GetTicks(); /*0x5ceb31*/
}
}