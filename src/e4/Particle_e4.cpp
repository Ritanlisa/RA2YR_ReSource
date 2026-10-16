// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4664C0
namespace gamemd {  // G42.18 ns repair
int Particle::Init(int aP1, int aP2, int aP3, int aP4, int aP5, int a7, char aP7)
{

  int result = aP1; // eax /*0x4664c4*/
  this->u32_10C = aP2; /*0x4664c8*/
  this->u32_110 = a7; /*0x4664d2*/
  this->u32_128 = aP5; /*0x4664dc*/
  this->u32_E0 = aP7; /*0x4664e6*/
  this->u32_6C = aP4; /*0x4664f6*/
  this->u32_AC = aP1; /*0x4664fb*/
  this->u32_B0 = aP3; /*0x466501*/
  this->u32_12C = 0; /*0x466507*/
  this->u32_12D = aP1->u8_2F6; /*0x466513*/
  if ( aP1->u8_2A9 && aP3 ) /*0x466525*/
  {
    result = *(unsigned int *)(aP3->q21C + 90196); /*0x46652d*/
    this->u32_114 = result; /*0x466533*/
  }
  else
  {
    this->u32_114 = -1; /*0x46653b*/
  }
  this->u32_150 = 256; /*0x466546*/
  this->u32_154 = 0; /*0x466550*/
  this->u32_158 = 0; /*0x466556*/
  return result; /*0x466545*/
}
}  // G42.18 ns repair