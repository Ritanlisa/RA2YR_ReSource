// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x46B640
namespace gamemd {
DynamicVector * Timer::Start(DynamicVector * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall Timer::Start(_DWORD *this, DynamicVector *aP1)
{
  *this = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x46b64c*/
  *(this + 2) = aP1; /*0x46b64e*/
  return (DynamicVector *)this; /*0x46b651*/
}
}
} // namespace gamemd

// 0x4A5240
namespace gamemd {
char Timer::StartDouble(double a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Timer_StartDouble(_BYTE *this, double a2)
{
  int v3; // eax
  wchar_t *v4; // ecx
  int v6; // [esp+8h] [ebp-Ch]

  if ( *(this + 24) || (LOBYTE(v3) = *(this + 25), (_BYTE)v3) ) /*0x4a5252*/
  {
    *(this + 24) = 1; /*0x4a525e*/
    *(double *)this = a2 * 900.0; /*0x4a5262*/
    v3 = Math::RoundToInt(a2 * 900.0); /*0x4a5264*/
    v4 = g_CurrentFrame; /*0x4a5269*/
    *(this + 25) = 0; /*0x4a5272*/
    *((_DWORD *)this + 2) = v4; /*0x4a5276*/
    *((_DWORD *)this + 3) = v6; /*0x4a527c*/
    *((_DWORD *)this + 4) = v3; /*0x4a527f*/
    *((_DWORD *)this + 5) = v3; /*0x4a5282*/
  }
  return v3; /*0x4a5285*/
}
}
} // namespace gamemd

// 0x4F1B00
namespace gamemd {
DWORD * Timer::Init(DWORD a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DWORD *__thiscall Timer_Init(DWORD *this, DWORD a2)
{
  *this = Timer::GetTicks(); /*0x4f1b0b*/
  *(this + 2) = a2; /*0x4f1b11*/
  return this; /*0x4f1b16*/
}
}
} // namespace gamemd

// 0x4F1B20
namespace gamemd {
int Timer::GetRemainingMs()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Timer_GetRemainingMs(signed int *this)
{
  signed int v1; // edi
  signed int v2; // ecx

  v1 = *(this + 2); /*0x4f1b26*/
  if ( *this == -1 ) /*0x4f1b2c*/
    return *(this + 2); /*0x4f1b4c*/
  v2 = Timer::GetTicks() - *this; /*0x4f1b3a*/
  if ( v2 >= v1 ) /*0x4f1b3e*/
    return 0; /*0x4f1b48*/
  else
    return v1 - v2; /*0x4f1b43*/
}
}
} // namespace gamemd

// 0x54F720
namespace gamemd {
HWND Timer::PumpMessages()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall Timer_PumpMessages(HWND *this)
{
  HWND v2; // eax
  HWND result; // eax

  if ( (HWND)(((int)*(this + 198) + 1) % 256) != *(this + 197) ) /*0x54f73e*/
    MessageLoop(); /*0x54f740*/
  v2 = *(this + 198); /*0x54f745*/
  *(this + 197) = v2; /*0x54f74b*/
  if ( (HWND)(((int)v2 + 1) % 256) == v2 ) /*0x54f766*/
  {
    result = *(this + 198); /*0x54f77b*/
    *(this + 197) = result; /*0x54f781*/
  }
  else
  {
    result = MessageLoop(); /*0x54f768*/
    *(this + 197) = *(this + 198); /*0x54f773*/
  }
  return result; /*0x54f779*/
}
}
} // namespace gamemd

// 0x5B1E40
namespace gamemd {
double Timer::GetHighPrecision()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall Timer_GetHighPrecision(double *this)
{
  unsigned int v2; // eax
  unsigned int v4; // [esp+4h] [ebp-Ch] BYREF
  __int64 v5; // [esp+8h] [ebp-8h]

  if ( dword_82C24C == -1 ) /*0x5b1e4e*/
    GetVersionString(&dword_82C24C, MEMORY[0xABEED4], 0, 0); /*0x5b1e5e*/
  if ( !*(_DWORD *)this && *((_DWORD *)this + 1) == 1072693248 || dword_82C24C <= 4 ) /*0x5b1e78*/
    return (double)timeGetTime(); /*0x5b1ecc*/
  v2 = Timer::ReadTSC(&v4); /*0x5b1e7f*/
  v5 = v4; /*0x5b1e9b*/
  return ((double)v2 + (double)v4 * 4294967296.0) / *this; /*0x5b1eb5*/
}
}
} // namespace gamemd

// 0x5F1390
namespace gamemd {
int Timer::GetElapsed()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Timer_GetElapsed(_DWORD *this)
{
  int v1; // edi

  v1 = *(this + 2); /*0x5f1396*/
  if ( *this != -1 ) /*0x5f139c*/
    v1 += Timer::GetTicks() - *this; /*0x5f13a8*/
  return v1; /*0x5f13ac*/
}
}
} // namespace gamemd

// 0x5D5870
namespace gamemd {
void * Timer::EnableHighPrecision()
{
{
    timeBeginPeriod(1u);
    return this;
}
}
} // namespace gamemd

// 0x5D5880
namespace gamemd {
MMRESULT Timer::DisableHighPrecision()
{
{
    return timeEndPeriod(1u);
}
}
} // namespace gamemd

// 0x6C8820
namespace gamemd {
int Timer::UpdateDelta()
{
{
    DWORD Ticks;
    int result;
    Ticks = Timer::GetTicks();
    DataGlobal_B0BDB4 = 0;
    result = Ticks - DataGlobal_B0BD28;
    DataGlobal_B0BD48 = result;
    return result;
}
}
} // namespace gamemd

// 0x6C8C40
namespace gamemd {
DWORD Timer::GetTicks()
{
{
    return timeGetTime() >> 4;
}
}
} // namespace gamemd

// 0x7500B0
namespace gamemd {
char Timer::SetFlag(char a2)
{
{
    char result;
    result = a2;
    if ( a2 )
    *(void**)this = 0x40000000;
    else
    *(void**)this = 0;
    return result;
}
}
} // namespace gamemd

// 0x7C6064
namespace gamemd {
unsigned long long Timer::ReadTSC(unsigned int * a1)
{
{
    unsigned __int64 result;
    result = __rdtsc();
    *a1 = HIDWORD(result);
    return result;
}
}
} // namespace gamemd
