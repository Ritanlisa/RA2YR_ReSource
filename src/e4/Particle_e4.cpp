// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Particle_e4.hpp"

// 0x4664C0
namespace gamemd {
int Particle::Init(AbstractClass * aP1, TechnoClass * aP2, IUnknown * aP3, TechnoClass * aP4, InfantryClass * aP5, int a7, AbstractClass * aP7)
{
  int result; // eax

  result = aP1; /*0x4664c4*/
  *(_DWORD *)(this + 268) = aP2; /*0x4664c8*/
  *(_DWORD *)(this + 272) = a7; /*0x4664d2*/
  *(_DWORD *)(this + 296) = aP5; /*0x4664dc*/
  *(_BYTE *)(this + 224) = aP7; /*0x4664e6*/
  *(_DWORD *)(this + 108) = aP4; /*0x4664f6*/
  *(_DWORD *)(this + 172) = aP1; /*0x4664fb*/
  *(_DWORD *)(this + 176) = aP3; /*0x466501*/
  *(_BYTE *)(this + 300) = 0; /*0x466507*/
  *(_BYTE *)(this + 301) = *(_BYTE *)(aP1 + 758); /*0x466513*/
  if ( *(_BYTE *)(aP1 + 681) && aP3 ) /*0x466525*/
  {
    result = *(_DWORD *)(*(_DWORD *)(aP3 + 540) + 90196); /*0x46652d*/
    *(_DWORD *)(this + 276) = result; /*0x466533*/
  }
  else
  {
    *(_DWORD *)(this + 276) = -1; /*0x46653b*/
  }
  *(_DWORD *)(this + 336) = 256; /*0x466546*/
  *(_DWORD *)(this + 340) = 0; /*0x466550*/
  *(_BYTE *)(this + 344) = 0; /*0x466556*/
  return result; /*0x466545*/
}
}