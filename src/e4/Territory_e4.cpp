// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Territory_WorldDominationTour_8_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7718A0
namespace gamemd {
int Territory_WorldDominationTour_8::AddRef(char a2)
{
  int Ticks; // eax
  int v3; // esi
  int *v4; // esi
  int v6; // [esp+4h] [ebp-8h]

  IDA_LOBYTE(Ticks) = a2; /*0x7718a0*/
  this->__pad_C = a2; /*0x7718a9*/
  if ( !a2 ) /*0x7718ac*/
  {
    v3 = this->field_1C; /*0x7718af*/
    if ( *(int *)(v3 + 976) > 0 ) /*0x7718ba*/
    {
      StopThemeClass(1); /*0x7718be*/
      (*(void (**)(int))(*(unsigned int *)(v3 + 960) + 12))(v3 + 960); /*0x7718cf*/
    }
    Ticks = this->Timer::GetTicks(); /*0x7718d6*/
    v4 = (int *)(v3 + 940); /*0x7718e1*/
    *v4 = Ticks; /*0x7718e7*/
    v4[1] = v6; /*0x7718e9*/
    v4[2] = 0; /*0x7718ec*/
  }
  return Ticks; /*0x7718f0*/
}
}
// 0x771900
namespace gamemd {
signed int Territory_WorldDominationTour_8::Release(void *a1 = 0)
{
  signed int result; // eax
  int v3; // edi

  result = *(unsigned int *)&this->Ticks; /*0x771903*/
  if ( result != -1 ) /*0x771909*/
  {
    v3 = this->field_18; /*0x77190c*/
    result = this->Timer::GetTicks() - *(unsigned int *)&this->Ticks; /*0x77191c*/
    if ( result >= v3 ) /*0x771921*/
    {
      this->field_18 = 0; /*0x771934*/
      *(unsigned int *)&this->u32_18 = -1; /*0x771937*/
    }
    else
    {
      *(unsigned int *)&this->Ticks = -1; /*0x771925*/
      this->field_18 = v3 - result; /*0x77192c*/
    }
  }
  return result; /*0x771930*/
}
}
// 0x771950
namespace gamemd {
signed int Territory_WorldDominationTour_8::ddtor(void *a1 = 0)
{
  if ( *(unsigned int *)&this-((unsigned int *)(>__pad_C))[4] == -1 ) /*0x771957*/
    *(unsigned int *)&this-((unsigned int *)(>__pad_C))[4] = Timer::GetTicks(); /*0x771961*/
}
} // namespace gamemd

// 0x771970
namespace gamemd {
int Territory_WorldDominationTour_8::Read(int a2, int a3)
{
  AudioQueue::Update((AudioQueue *)this->field_1C); /*0x771973*/
  return 0; /*0x77197a*/
}
}
// 0x771980
namespace gamemd {
void Territory_WorldDominationTour_8::Write(int a2, int a3)
{
  AudioQueue::Update((AudioQueue *)this->field_1C); /*0x771983*/
}
}
// 0x7719D0
namespace gamemd {
void Territory_WorldDominationTour_8::Close(int a2)
{
  AudioQueue::Update((AudioQueue *)this->field_1C); /*0x7719d3*/
}
}
// 0x771A30
namespace gamemd {
unsigned int * Territory_WorldDominationTour_8::QueryInterface(char a2)
{
  *(unsigned int *)this->__pad_0 = (void*)&WorldDominationTour_Voices_Anim_vftable; /*0x771a33*/
  VtableStub::5CB6C0(); /*0x771a39*/
  if ( (a2 & 1) != 0 ) /*0x771a43*/
    RA2_OPDEL(); /*0x771a46*/
  return this; /*0x771a50*/
}
}
// 0x771990
namespace gamemd {
unsigned int * Territory_WorldDominationTour_8::Seek(unsigned int * a1, void *a2 = 0)
{
  int v2; // [esp+0h] [ebp-10h]
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  *(unsigned int *)a1->__pad_0 = v2; /*0x77199d*/
  a1->field_4 = v3; /*0x7719a3*/
  a1->field_8 = v4; /*0x7719aa*/
  *(unsigned int *)a1->__pad_C = v5; /*0x7719b1*/
  return a1->__pad_0; /*0x7719b4*/
}
} // namespace gamemd

// 0x7719C0
namespace gamemd {
unsigned int * Territory_WorldDominationTour_8::Open(unsigned int * a1, void *a2 = 0)
{
  return (uint8_t)this->Audio::IsPlaying() == 0; /*0x7719ca*/
}
} // namespace gamemd
