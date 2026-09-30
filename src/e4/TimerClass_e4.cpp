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

    if ( *(__int16 *)((char *)this + 80) <= 0 )
    return 0; /*0x4c9485*/
    v1 = *((unsigned int *)this + 32);
    v2 = *((unsigned int *)this + 64);
  if ( v1 != -1 ) /*0x4c9490*/
  {
    if ( (int)dword_A8ED84 - v1 >= (int)(v2) ) /*0x4c949c*/
      return 0; /*0x4c949c*/
    (unsigned int)(v2)-= (int)dword_A8ED84 - v1; /*0x4c949e*/
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
    *((unsigned int *)this + 16) = 0;
    *((unsigned int *)this + 2) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664];
  v18 = &this->u32_90; /*0x54fe78*/
    *((unsigned int *)this + 4) = 0;
  *v18 = a2; /*0x54fe83*/
    *((unsigned int *)this + 5) = 0;
    *((unsigned int *)this + 6) = 1;
  v18[1] = a3; /*0x54fe8f*/
    *((unsigned int *)this + 7) = 1;
    *((unsigned int *)this + 128) = 0;
  v18[2] = aP3; /*0x54fe9c*/
    *((unsigned int *)this + 132) = 0;
    *((unsigned int *)this + 12) = a5;
    *((unsigned int *)this + 13) = a6;
    *((unsigned int *)this + 14) = a7;
    *((unsigned int *)this + 15) = a8;
    *((unsigned int *)this + 256) = a9;
    *((unsigned int *)this + 260) = 0;
    *((unsigned int *)this + 264) = 0;
    *((unsigned int *)this + 268) = 0;
    *((unsigned int *)this + 272) = 0;
    *((unsigned int *)this + 276) = 0;
    *((unsigned int *)this + 280) = 0;
    *((unsigned int *)this + 284) = 0;
    *((unsigned int *)this + 288) = 0;
    *((unsigned int *)this + 292) = 0;
    *((unsigned int *)this + 19) = a13;
    *((unsigned int *)this + 324) = 0;
    *((unsigned int *)this + 320) = a14;
    *((unsigned int *)this + 328) = a15;
    *((unsigned int *)this + 21) = a16;
    *((unsigned int *)this + 22) = a17;
  *(unsigned int *)this = 0; /*0x54ff08*/
  g_CurrentFrame = g_CurrentFrame; /*0x54ff0a*/
    *((unsigned int *)this + 5) = 1;
    *((unsigned int *)this + 2) = v19;
    *((unsigned int *)this + 3) = a3;
    *((unsigned int *)this + 4) = 1;
    *((unsigned short *)this + 260) = a10;
    *((unsigned int *)this + 268) = BYTE2(a10);
    *((unsigned short *)this + 34) = a11;
    *((unsigned int *)this + 280) = BYTE2(a11);
    *((unsigned short *)this + 284) = a12;
    *((unsigned int *)this + 292) = BYTE2(a12);
  if ( g_TimerPool < dword_ABC880 /*0x54ff85*/
    || (byte_ABC885 || !dword_ABC880)
    && dword_ABC88C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_ABC878 + 8))(
         &dword_ABC878,
         dword_ABC880 + dword_ABC88C,
         0) )
  {
    v20 = (gamemd::TimerClass *)(g_TimerPool++);
    *((unsigned int *)(unsigned int)(dword_ABC87C)+ v20) = this; /*0x54ffa1*/
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

    result = *((unsigned int *)this + 16);
  if ( result != -1 ) /*0x5cead9*/
  {
        v3 = *((unsigned int *)this + 24);
        result = Timer::GetTicks() - *((unsigned int *)this + 16);
    if ( result >= v3 ) /*0x5ceaf1*/
    {
            *((unsigned int *)this + 24) = 0;
            *((unsigned int *)this + 16) = -1;
    }
    else
    {
            *((unsigned int *)this + 16) = -1;
            *((unsigned int *)this + 24) = v3 - result;
    }
  }
  return result; /*0x5ceb00*/
}
}
// 0x5CEB20
namespace gamemd {
void TimerClass::StartIfIdle()
{
    if ( *((unsigned int *)this + 16) == -1 )
        *((unsigned int *)this + 16) = Timer::GetTicks();
}
}