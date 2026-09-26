// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ToolTipManager_7_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x46B640
namespace gamemd {
void * Timer::Start(DynamicVector * aP1)
{
  *(unsigned int *)this = g_CurrentFrame; /*0x46b64c*/
  this->q008 = aP1; /*0x46b64e*/
  return this; /*0x46b651*/
}
}
// 0x4A5240
namespace gamemd {
int Timer::StartDouble(double a2)
{
  int v3; // eax
  int v6; // [esp+8h] [ebp-Ch]

  if ( *(&this->ptr_84) || (IDA_LOBYTE(v3) = *(&this->ptr_85), (unsigned char)v3) ) /*0x4a5252*/
  {
    *(&this->ptr_84) = 1; /*0x4a525e*/
    *(double *)this = a2 * 900.0; /*0x4a5262*/
    v3 = Math::RoundToInt(a2 * 900.0); /*0x4a5264*/
    g_CurrentFrame = g_CurrentFrame; /*0x4a5269*/
    *(&this->ptr_85) = 0; /*0x4a5272*/
    this->ptr_8 = g_CurrentFrame; /*0x4a5276*/
    this->u32_C = v6; /*0x4a527c*/
    this->u32_10 = v3; /*0x4a527f*/
    this->u32_14 = v3; /*0x4a5282*/
  }
  return v3; /*0x4a5285*/
}
}
// 0x4F1B00
namespace gamemd {
void * Timer::Init(DWORD a2)
{
  *(unsigned int *)this = Timer::GetTicks(); /*0x4f1b0b*/
  this->q008 = a2; /*0x4f1b11*/
  return this; /*0x4f1b16*/
}
}
// 0x4F1B20
namespace gamemd {
int Timer::GetRemainingMs()
{
  signed int v1; // edi
  signed int v2; // ecx

  v1 = this->q008; /*0x4f1b26*/
  if ( *this == -1 ) /*0x4f1b2c*/
    return this->q008; /*0x4f1b4c*/
  v2 = Timer::GetTicks() - *this; /*0x4f1b3a*/
  if ( v2 >= v1 ) /*0x4f1b3e*/
    return 0; /*0x4f1b48*/
  else
    return v1 - v2; /*0x4f1b43*/
}
}
// 0x54F720
namespace gamemd {
int Timer::PumpMessages()
{
  HWND v2; // eax
  HWND result; // eax

  if ( (HWND)(((int)*(&this->q04C8) + 1) % 256) != *(&this->q04C7) ) /*0x54f73e*/
    MessageLoop(); /*0x54f740*/
  v2 = *(&this->q04C8); /*0x54f745*/
  *(&this->q04C7) = v2; /*0x54f74b*/
  if ( (HWND)(((int)v2 + 1) % 256) == v2 ) /*0x54f766*/
  {
    result = *(&this->q04C8); /*0x54f77b*/
    *(&this->q04C7) = result; /*0x54f781*/
  }
  else
  {
    result = MessageLoop(); /*0x54f768*/
    *(&this->q04C7) = *(&this->q04C8); /*0x54f773*/
  }
  return result; /*0x54f779*/
}
}
// 0x5B1E40
namespace gamemd {
int Timer::GetHighPrecision()
{
  unsigned int v2; // eax
  unsigned int v4; // [esp+4h] [ebp-Ch] BYREF
  int64_t v5; // [esp+8h] [ebp-8h]

  if ( dword_82C24C == -1 ) /*0x5b1e4e*/
    GetVersionString(&dword_82C24C, byte_ABEED4, 0, 0); /*0x5b1e5e*/
  if ( !*(unsigned int *)this && this->u32_4 == 1072693248 || dword_82C24C <= 4 ) /*0x5b1e78*/
    return (double)timeGetTime(); /*0x5b1ecc*/
  v2 = Timer::ReadTSC(&v4); /*0x5b1e7f*/
  v5 = v4; /*0x5b1e9b*/
  return ((double)v2 + (double)v4 * 4294967296.0) / *this; /*0x5b1eb5*/
}
}
// 0x5F1390
namespace gamemd {
int Timer::GetElapsed()
{
  int v1; // edi

  v1 = this->q008; /*0x5f1396*/
  if ( *this != -1 ) /*0x5f139c*/
    v1 += Timer::GetTicks() - *this; /*0x5f13a8*/
  return v1; /*0x5f13ac*/
}
}
// 0x5D5870
namespace gamemd {
void * Timer::EnableHighPrecision()
{
  timeBeginPeriod(1u); /*0x5d5875*/
  return this; /*0x5d587d*/
}
} // namespace gamemd

// 0x5D5880
namespace gamemd {
MMRESULT Timer::DisableHighPrecision()
{
  return timeEndPeriod(1u); /*0x5d5888*/
}
} // namespace gamemd

// 0x6C8820
namespace gamemd {
int Timer::UpdateDelta()
{
  DWORD Ticks; // eax
  int result; // eax

  Ticks = Timer::GetTicks(); /*0x6c8825*/
  byte_B0BDB4 = 0; /*0x6c8830*/
  result = Ticks - dword_B0BD28; /*0x6c8837*/
  dword_B0BD48 = result; /*0x6c8839*/
  return result; /*0x6c883e*/
}
} // namespace gamemd

// 0x6C8C40
namespace gamemd {
DWORD Timer::GetTicks()
{
  return timeGetTime() >> 4; /*0x6c8c49*/
}
} // namespace gamemd

// 0x7500B0
namespace gamemd {
char Timer::SetFlag(char a2)
{
  char result; // al

  result = a2; /*0x7500b0*/
  if ( a2 ) /*0x7500b6*/
    *(unsigned int *)this = 0x40000000; /*0x7500b8*/
  else
    *(unsigned int *)this = 0; /*0x7500c1*/
  return result; /*0x7500be*/
}
} // namespace gamemd

// 0x7C6064
namespace gamemd {
unsigned long long Timer::ReadTSC(unsigned int * a1)
{
  uint64_t result; // rax

  result = __rdtsc(); /*0x7c6068*/
  *a1 = IDA_HIDWORD(result); /*0x7c606d*/
  return result; /*0x7c606f*/
}
} // namespace gamemd
