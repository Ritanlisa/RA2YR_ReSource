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
int Particle::Init(AbstractClass * aP1, TechnoClass * aP2, IUnknown * aP3, TechnoClass * aP4, InfantryClass * aP5, int a7, AbstractClass * aP7)
{
  AbstractClass * result;

  result = aP1; /*0x4664c4*/
  this->q10C = aP2; /*0x4664c8*/
  this->q110 = a7; /*0x4664d2*/
  this->q128 = aP5; /*0x4664dc*/
  this->q0E0 = aP7; /*0x4664e6*/
  this->q06C = aP4; /*0x4664f6*/
  this->q0AC = aP1; /*0x4664fb*/
  this->q0B0 = aP3; /*0x466501*/
  this->q12C = 0; /*0x466507*/
  this->u8_12D = *(unsigned char *)(aP1 + 758); /*0x466513*/
  if ( aP1->qAA4 && aP3 ) /*0x466525*/
  {
    result = (unsigned int)(aP3->q21C->u32_16054);
    this->q114 = (unsigned int)(result);
  }
  else
  {
    this->q114 = -1; /*0x46653b*/
  }
  this->q150 = (int)(256);
  this->q154 = (void *)((int)(0));
  this->q158 = (void *)((int)(0));
  return (int)(result);
}
}