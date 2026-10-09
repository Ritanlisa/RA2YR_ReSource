// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4664C0
namespace gamemd {
int Particle::Init(int aP1, int aP2, int aP3, int aP4, int aP5, int a7, char aP7)
{
  int result; // eax

  result = aP1; /*0x4664c4*/
  this->q10C = aP2; /*0x4664c8*/
  this->q110 = a7; /*0x4664d2*/
  this->q128 = aP5; /*0x4664dc*/
  this->q0E0 = aP7; /*0x4664e6*/
  *(&this->q0087) = aP4; /*0x4664f6*/
  *(&this->q0043) = aP1; /*0x4664fb*/
  *(&this->q0044) = aP3; /*0x466501*/
  this->q12C = 0; /*0x466507*/
  this->u8_12D = *(_BYTE *)(aP1 + 758); /*0x466513*/
  if ( *(_BYTE *)(aP1 + 681) && aP3 ) /*0x466525*/
  {
    result = *(_DWORD *)(*(_DWORD *)(aP3 + 540) + 90196); /*0x46652d*/
    this->q114 = result; /*0x466533*/
  }
  else
  {
    this->q114 = -1; /*0x46653b*/
  }
  *(&this->q0084) = 256; /*0x466546*/
  *(&this->q0085) = 0; /*0x466550*/
  this->q158 = 0; /*0x466556*/
  return result; /*0x466545*/
}
}