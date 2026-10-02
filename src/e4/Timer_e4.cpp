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
#include "e4/classes/TimerClass_e4.hpp"

// 0x46B640
namespace gamemd {
void * Timer::Start(int aP1)
{

  *(unsigned int *)this->__pad_0 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x46b64c*/
  *(unsigned int *)&this->__pad_6[2] = (unsigned int)(aP1); /*0x46b64e*/
  return this->__pad_0; /*0x46b651*/

}
}
// 0x4A5240
namespace gamemd {
int Timer::StartDouble(double a2)
{

  int result; // eax
  int v4; // ecx
  int v5; // [esp+8h] [ebp-Ch]

  if ( LOBYTE(this->m_18) || (LOBYTE(result) = BYTE1(this->m_18), (unsigned char)result) ) /*0x4a5252*/
  {
    LOBYTE(this->m_18) = 1; /*0x4a525e*/
    *(double *)this->__pad_0 = a2 * 900.0; /*0x4a5262*/
    LOWORD(result) = Math::RoundToInt(a2 * 900.0); /*0x4a5264*/
    v4 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4a5269*/
    BYTE1(this->m_18) = 0; /*0x4a5272*/
    *(unsigned int *)&this->__pad_6[2] = v4; /*0x4a5276*/
    *(unsigned int *)&this->__pad_6[6] = v5; /*0x4a527c*/
    *(unsigned int *)&this->__pad_6[10] = result; /*0x4a527f*/
    *(unsigned int *)&this->__pad_6[14] = result; /*0x4a5282*/
  }
  return result; /*0x4a5285*/

}
}
// 0x4F1B00
namespace gamemd {
DWORD * Timer::Init(DWORD a2)
{

  *(unsigned int *)this->__pad_0 = Timer::GetTicks(); /*0x4f1b0b*/
  *(unsigned int *)&this->__pad_6[2] = a2; /*0x4f1b11*/
  return (DWORD *)this; /*0x4f1b16*/

}
}
// 0x4F1B20
namespace gamemd {
int Timer::GetRemainingMs(void *a1_1)
{

  int v1; // edi
  int v2; // ecx

  v1 = *(unsigned int *)&this->__pad_6[2]; /*0x4f1b26*/
  if ( *(unsigned int *)this->__pad_0 == -1 ) /*0x4f1b2c*/
    return *(unsigned int *)&this->__pad_6[2]; /*0x4f1b4c*/
  v2 = Timer::GetTicks() - *(unsigned int *)this->__pad_0; /*0x4f1b3a*/
  if ( v2 >= v1 ) /*0x4f1b3e*/
    return 0; /*0x4f1b48*/
  else
    return v1 - v2; /*0x4f1b43*/

}
}
// 0x54F720
namespace gamemd {
DWORD * Timer::PumpMessages(void *a1_1)
{

  int v2; // eax
  int result; // eax

  if ( (*((unsigned int *)this + 198) + 1) % 256 != *((unsigned int *)this + 197) ) /*0x54f73e*/
    MessageLoop(); /*0x54f740*/
  v2 = *((unsigned int *)this + 198); /*0x54f745*/
  *((unsigned int *)this + 197) = v2; /*0x54f74b*/
  if ( (v2 + 1) % 256 == v2 ) /*0x54f766*/
  {
    result = *((unsigned int *)this + 198); /*0x54f77b*/
    *((unsigned int *)this + 197) = result; /*0x54f781*/
  }
  else
  {
    result = (int)MessageLoop(); /*0x54f768*/
    *((unsigned int *)this + 197) = *((unsigned int *)this + 198); /*0x54f773*/
  }
  return result; /*0x54f779*/

}
}
// 0x5B1E40
namespace gamemd {
int Timer::GetHighPrecision(void *a1_1)
{

  int result; // eax
  unsigned int v3; // [esp+4h] [ebp-Ch] BYREF
  int64_t v4; // [esp+8h] [ebp-8h]

  if ( dword_82C24C == -1 ) /*0x5b1e4e*/
    GetVersionString(&dword_82C24C,(unsigned char *)(unk_ABEED4), 0, 0); /*0x5b1e5e*/
  if ( !*this && *((char *)this + 1) == 1072693248 || dword_82C24C <= 4 ) /*0x5b1e78*/
    return timeGetTime(); /*0x5b1eba*/
  result = Timer::ReadTSC(&v3); /*0x5b1e7f*/
  v4 = v3; /*0x5b1e9b*/
  return result; /*0x5b1eb5*/

}
}
// 0x5F1390
namespace gamemd {
int Timer::GetElapsed()
{

  int v1; // edi

  v1 = *(unsigned int *)&this->__pad_6[2]; /*0x5f1396*/
  if ( *(unsigned int *)this->__pad_0 != -1 ) /*0x5f139c*/
    v1 += Timer::GetTicks() - *(unsigned int *)this->__pad_0; /*0x5f13a8*/
  return v1; /*0x5f13ac*/

}
}
// 0x5D5870
namespace gamemd {
void * Timer::EnableHighPrecision()
{

  timeBeginPeriod((void *)(1u)); /*0x5d5875*/
  return this; /*0x5d587d*/

}
} // namespace gamemd

// 0x5D5880
namespace gamemd {
MMRESULT Timer::DisableHighPrecision()
{

  return timeEndPeriod((void *)(1u)); /*0x5d5888*/

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

  int result; // eax

  LOBYTE(result) = a2; /*0x7500b0*/
  if ( a2 ) /*0x7500b6*/
    *(unsigned int *)this->__pad_0 = 0x40000000; /*0x7500b8*/
  else
    *(unsigned int *)this->__pad_0 = 0; /*0x7500c1*/
  return result; /*0x7500be*/

}
} // namespace gamemd

// 0x7C6064
namespace gamemd {
unsigned long long Timer::ReadTSC(unsigned int * a1)
{

  uint64_t result; // rax

  result = __rdtsc(); /*0x7c6068*/
  *a1 = HIDWORD(result); /*0x7c606d*/
  return result; /*0x7c606f*/

}
} // namespace gamemd
