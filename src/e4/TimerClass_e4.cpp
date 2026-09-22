// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x4C9480
namespace gamemd {
void TimerClass::Active()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( *(__int16 *)(this + 20) <= 0 ) /*0x4c9485*/
    return 0; /*0x4c9485*/
  int v1 = this->TimerClass_field_0x8; /*0x4c9487*/
  int v2 = this->TimerClass_field_0x10; /*0x4c948a*/
  if ( v1 != -1 ) /*0x4c9490*/
  {
    if ( (int)g_CurrentFrame - v1 >= v2 ) /*0x4c949c*/
      return 0; /*0x4c949c*/
    v2 -= (int)g_CurrentFrame - v1; /*0x4c949e*/
  }
  return v2 != 0; /*0x4c94a9*/
}
}
} // namespace gamemd

// 0x54FE60
namespace gamemd {
void * TimerClass::Construct(int a2, int a3, TechnoTypeClass * aP3, int a5, int a6, int a7, int a8, char a9, int a10, int a11, int a12, int a13, char a14, char a15, int a16, int a17)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v19; // ecx

  *(_DWORD *)this = 0; /*0x54fe6a*/
  this->q004 = 0; /*0x54fe6c*/
  this->TimerClass_field_0x8 = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x54fe75*/
  char * v18 = this + 36; /*0x54fe78*/
  this->TimerClass_field_0x10 = 0; /*0x54fe7b*/
  *(_DWORD *)v18 = a2; /*0x54fe83*/
  *((_DWORD *)this + 5) = 0; /*0x54fe89*/
  *((_DWORD *)this + 6) = 1; /*0x54fe8c*/
  *((_DWORD *)v18 + 1) = a3; /*0x54fe8f*/
  *((_DWORD *)this + 7) = 1; /*0x54fe96*/
  this->q008 = 0; /*0x54fe99*/
  *((_DWORD *)v18 + 2) = aP3; /*0x54fe9c*/
  *(this + 33) = 0; /*0x54fea6*/
  this->q00C = a5; /*0x54fea9*/
  *((_DWORD *)this + 13) = a6; /*0x54feaf*/
  *((_DWORD *)this + 14) = a7; /*0x54feb6*/
  *((_DWORD *)this + 15) = a8; /*0x54febd*/
  this->q010 = a9; /*0x54fec4*/
  *(this + 65) = 0; /*0x54fecb*/
  *(this + 66) = 0; /*0x54fece*/
  *(this + 67) = 0; /*0x54fed1*/
  *(this + 68) = 0; /*0x54fed4*/
  *(this + 69) = 0; /*0x54fed7*/
  *(this + 70) = 0; /*0x54feda*/
  *(this + 71) = 0; /*0x54fedd*/
  *(this + 72) = 0; /*0x54fee0*/
  *(this + 73) = 0; /*0x54fee3*/
  *((_DWORD *)this + 19) = a13; /*0x54fee6*/
  *(this + 81) = 0; /*0x54feed*/
  *(this + 80) = a14; /*0x54fef0*/
  *(this + 82) = a15; /*0x54fef7*/
  *((_DWORD *)this + 21) = a16; /*0x54fefe*/
  *((_DWORD *)this + 22) = a17; /*0x54ff05*/
  *(_DWORD *)this = 0; /*0x54ff08*/
  v19 = *(IUnknown **)&g_NetworkPlayerBuffer[5960]; /*0x54ff0a*/
  *((_DWORD *)this + 5) = 1; /*0x54ff10*/
  this->TimerClass_field_0x8 = v19; /*0x54ff13*/
  this->q00C = a3; /*0x54ff1a*/
  this->TimerClass_field_0x10 = 1; /*0x54ff21*/
  *(_WORD *)(this + 65) = a10; /*0x54ff29*/
  *(this + 67) = BYTE2(a10); /*0x54ff32*/
  *((_WORD *)this + 34) = a11; /*0x54ff39*/
  *(this + 70) = BYTE2(a11); /*0x54ff42*/
  *(_WORD *)(this + 71) = a12; /*0x54ff49*/
  *(this + 73) = BYTE2(a12); /*0x54ff4d*/
  if ( g_TimerPool < dword_ABC880 /*0x54ff85*/
    || (byte_ABC885 || !dword_ABC880)
    && dword_ABC88C > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_ABC878->field_8)(
         &dword_ABC878,
         dword_ABC880 + dword_ABC88C,
         0) )
  {
    int v20 = g_TimerPool++; /*0x54ff92*/
    *((_DWORD *)dword_ABC87C + v20) = this; /*0x54ffa1*/
  }
  return this; /*0x54ffa6*/
}
}
} // namespace gamemd

// 0x5CEAD0
namespace gamemd {
signed int TimerClass::GetRemaining()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  signed int result; // eax

  result = this->q004; /*0x5cead3*/
  if ( result != -1 ) /*0x5cead9*/
  {
    signed int v3 = *(this + 6); /*0x5ceadc*/
    result = Timer::GetTicks() - this->q004; /*0x5ceaec*/
    if ( result >= v3 ) /*0x5ceaf1*/
    {
      *(this + 6) = 0; /*0x5ceb04*/
      this->q004 = -1; /*0x5ceb07*/
    }
    else
    {
      this->q004 = -1; /*0x5ceaf5*/
      *(this + 6) = v3 - result; /*0x5ceafc*/
    }
  }
  return result; /*0x5ceb00*/
}
}
} // namespace gamemd

// 0x5CEB20
namespace gamemd {
void TimerClass::StartIfIdle()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  if ( this->q010 == -1 ) /*0x5ceb27*/
    this->q010 = Timer::GetTicks(); /*0x5ceb31*/
}
}
} // namespace gamemd
