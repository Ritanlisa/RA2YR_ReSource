// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Territory_WorldDominationTour_8_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x7718A0
namespace gamemd {
int Territory_WorldDominationTour_8::AddRef(char a2)
{
{
  DWORD Ticks; // eax
  DWORD *v4; // esi
  DWORD v6; // [esp+4h] [ebp-8h]
  LOBYTE(Ticks) = a2; /*0x7718a0*/
  this->q00C = a2; /*0x7718a9*/
  if ( !a2 ) /*0x7718ac*/
  {
    _DWORD * v3 = this->q01C; /*0x7718af*/
    if ( (int)v3[244] > 0 ) /*0x7718ba*/
    {
      StopThemeClass(1); /*0x7718be*/
      (*(void (__thiscall **)(_DWORD *))(v3[240] + 12))(v3 + 240); /*0x7718cf*/
    }
    Ticks = Timer::GetTicks(); /*0x7718d6*/
    v4 = v3 + 235; /*0x7718e1*/
    *v4 = Ticks; /*0x7718e7*/
    v4[1] = v6; /*0x7718e9*/
    v4[2] = 0; /*0x7718ec*/
  }
  return Ticks; /*0x7718f0*/
}
} // namespace gamemd
}

// 0x771900
namespace gamemd {
signed int Territory_WorldDominationTour_8::Release()
{
{
  signed int result; // eax

  result = this->q004; /*0x771903*/
  if ( result != -1 ) /*0x771909*/
  {
    signed int v3 = this->u32_18; /*0x77190c*/
    result = Timer::GetTicks() - this->q004; /*0x77191c*/
    if ( result >= v3 ) /*0x771921*/
    {
      this->u32_18 = 0; /*0x771934*/
      this->q004 = -1; /*0x771937*/
    }
    else
    {
      this->q004 = -1; /*0x771925*/
      this->u32_18 = v3 - result; /*0x77192c*/
    }
  }
  return result; /*0x771930*/
}
} // namespace gamemd
}

// 0x771950
namespace gamemd {
void Territory_WorldDominationTour_8::ddtor()
{
    if ( this->Ticks == -1 )
        this->Ticks = Timer::GetTicks();
}
} // namespace gamemd

// 0x771970
namespace gamemd {
int Territory_WorldDominationTour_8::Read(int a2, int a3)
{
{
  AudioQueue::Update(this->q01C); /*0x771973*/
  return 0; /*0x77197a*/
}
} // namespace gamemd
}

// 0x771980
namespace gamemd {
void Territory_WorldDominationTour_8::Write(int a2, int a3)
{
{
  AudioQueue::Update(this->q01C); /*0x771983*/
}
} // namespace gamemd
}

// 0x7719D0
namespace gamemd {
void Territory_WorldDominationTour_8::Close(int a2)
{
{
  AudioQueue::Update(this->q01C); /*0x7719d3*/
}
} // namespace gamemd
}

// 0x771A30
namespace gamemd {
unsigned int * Territory_WorldDominationTour_8::QueryInterface(char a2)
{
{
  *this = &vt_WorldDominationTour_Voices_Anim; /*0x771a33*/
  VtableStub::5CB6C0(this); /*0x771a39*/
  if ( (a2 & 1) != 0 ) /*0x771a43*/
    __3_YAXPAX_Z(this); /*0x771a46*/
  return this; /*0x771a50*/
}
} // namespace gamemd
}

// 0x771990
namespace gamemd {
unsigned int * Territory_WorldDominationTour_8::Seek(unsigned int * a1)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    *a1 = v2;
    *((int*)(a1) + 1) = v3;
    *((int*)(a1) + 2) = v4;
    *((int*)(a1) + 3) = v5;
    return a1;
}
}
} // namespace gamemd

// 0x7719C0
namespace gamemd {
BOOL Territory_WorldDominationTour_8::Open()
{
{
    return (unsigned char)Audio::IsPlaying() == 0;
}
}
} // namespace gamemd
