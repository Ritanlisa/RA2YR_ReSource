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

  AbstractClass * result;

  result = (gamemd::AbstractClass *)((char)(aP1));
  this->q10C = (char)(aP2); /*0x4664c8*/
  this->q044 = a7; /*0x4664d2*/
  this->q128 = (char)(aP5); /*0x4664dc*/
  this->q0E0 = (unsigned char)(aP7); /*0x4664e6*/
  this->q06C = (char)(aP4); /*0x4664f6*/
  this->q0AC = (char)(aP1); /*0x4664fb*/
  this->q0B0 = (char)(aP3); /*0x466501*/
  this->q12C = 0; /*0x466507*/
  this->u8_12D = *(unsigned char *)(aP1 + 758); /*0x466513*/
  if ( *(unsigned char *)(aP1 + 681) && aP3 ) /*0x466525*/
  {
    result = (gamemd::AbstractClass *)((char)(*(unsigned int *)(*(unsigned int *)(aP3 + 540) + 90196)));
    this->q114 = (char)(result); /*0x466533*/
  }
  else
  {
    this->q114 = -1; /*0x46653b*/
  }
  this->q150 = 256; /*0x466546*/
  this->q154 = 0; /*0x466550*/
  this->q158 = 0; /*0x466556*/
  return (int)(result); /*0x466545*/

}
}