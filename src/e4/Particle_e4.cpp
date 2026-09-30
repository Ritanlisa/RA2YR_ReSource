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

  result = (gamemd::AbstractClass *)((void *)(aP1));
  this->q10C = (void *)(aP2);
  this->q110 = (void *)(a7);
    *((unsigned int *)this + 1184) = aP5;
    *((unsigned char *)this + 896) = (unsigned char)aP7;
    *((unsigned int *)this + 432) = aP4;
    *((unsigned int *)this + 688) = aP1;
    *((unsigned int *)this + 704) = aP3;
    *((unsigned char *)this + 1200) = 0;
    *((unsigned char *)this + 1204) = aP1[21].__pad_0[2];
  if ( aP1->qAA4 && aP3 ) /*0x466525*/
  {
    result = (unsigned int)(aP3->q21C->u32_16054);
    this->q114 = (void *)((unsigned int)(result));
  }
  else
  {
    this->q114 = (void *)(-1);
  }
  this->q150 = (void *)((int)(256));
  this->q154 = (void *)((int)(0));
  this->q158 = (void *)((int)(0));
  return (int)(result);
}
}