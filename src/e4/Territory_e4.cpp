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
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"

// 0x7718A0
namespace gamemd {
int Territory_WorldDominationTour_8::AddRef(char a2)
{

  DWORD Ticks; // eax
  unsigned int *v3; // esi
  DWORD *v4; // esi
  DWORD v6; // [esp+4h] [ebp-8h]

  IDA_LOBYTE(Ticks) = a2; /*0x7718a0*/
  *((unsigned char *)this + 12) = a2; /*0x7718a9*/
  if ( !a2 ) /*0x7718ac*/
  {
    v3 = *(unsigned int **)((char *)this + 28); /*0x7718af*/
    if ( (int)v3[244] > 0 ) /*0x7718ba*/
    {
      StopThemeClass(1); /*0x7718be*/
      (*(void (**)(unsigned int *))(v3[240] + 12))(v3 + 240); /*0x7718cf*/
    }
    Ticks = (DWORD *)(Timer::GetTicks());
    v4 = v3 + 235; /*0x7718e1*/
    *v4 = Ticks; /*0x7718e7*/
    v4[1] = v6; /*0x7718e9*/
    v4[2] = 0; /*0x7718ec*/
  }
  return Ticks; /*0x7718f0*/

}
}
// 0x771900
namespace gamemd {
signed int Territory_WorldDominationTour_8::Release()
{

  signed int result; // eax
  signed int v3; // edi

  result = *((unsigned int *)this + 4); /*0x771903*/
  if ( result != -1 ) /*0x771909*/
  {
    v3 = *((unsigned int *)this + 6); /*0x77190c*/
    result = Timer::GetTicks() - *((unsigned int *)this + 4); /*0x77191c*/
    if ( result >= v3 ) /*0x771921*/
    {
      *((unsigned int *)this + 6) = 0; /*0x771934*/
      *((unsigned int *)this + 4) = -1; /*0x771937*/
    }
    else
    {
      *((unsigned int *)this + 4) = -1; /*0x771925*/
      *((unsigned int *)this + 6) = v3 - result; /*0x77192c*/
    }
  }
  return result; /*0x771930*/

}
}
// 0x771950
namespace gamemd {
signed int Territory_WorldDominationTour_8::ddtor()
{

  if ( *((unsigned int *)this + 4) == -1 ) /*0x771957*/
    *((unsigned int *)this + 4) = Timer::GetTicks(); /*0x771961*/

}
} // namespace gamemd

// 0x771970
namespace gamemd {
int Territory_WorldDominationTour_8::Read(int a2, int a3)
{

  AudioQueue::Update(*((char *)this + 7)); /*0x771973*/
  return 0; /*0x77197a*/

}
}
// 0x771980
namespace gamemd {
void Territory_WorldDominationTour_8::Write(int a2, int a3)
{

  AudioQueue::Update(*((char *)this + 7)); /*0x771983*/

}
}
// 0x7719D0
namespace gamemd {
void Territory_WorldDominationTour_8::Close(int a2)
{

  AudioQueue::Update(*((char *)this + 7)); /*0x7719d3*/

}
}
// 0x771A30
namespace gamemd {
unsigned int * Territory_WorldDominationTour_8::QueryInterface(unsigned int * Block, char a2)
{

  *Block = (unsigned int)(&vt_WorldDominationTour_Voices_Anim);
  VtableStub::5CB6C0(Block); /*0x771a39*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x771a43*/
    RA2_OPDEL(Block); /*0x771a46*/
  return Block; /*0x771a50*/

}
}
// 0x771990
namespace gamemd {
unsigned int * Territory_WorldDominationTour_8::Seek(unsigned int * a1)
{

  int v2; // [esp+0h] [ebp-10h]
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  *a1 = v2; /*0x77199d*/
  a1[1] = v3; /*0x7719a3*/
  a1[2] = v4; /*0x7719aa*/
  a1[3] = v5; /*0x7719b1*/
  return a1; /*0x7719b4*/

}
} // namespace gamemd

// 0x7719C0
namespace gamemd {
unsigned int * Territory_WorldDominationTour_8::Open()
{

  return (uint8_t)this->Audio::IsPlaying() == 0; /*0x7719ca*/

}
} // namespace gamemd
