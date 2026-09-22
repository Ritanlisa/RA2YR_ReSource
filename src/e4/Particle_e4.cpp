// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Particle_e4.hpp"

// 0x4664C0
namespace gamemd {
int Particle::Init(AbstractClass * aP1, TechnoClass * aP2, IUnknown * aP3, TechnoClass * aP4, InfantryClass * aP5, int a7, AbstractClass * aP7)
{
{
  AbstractClass *result; // eax

  result = aP1; /*0x4664c4*/
  this->Particle_field_0x10C = aP2; /*0x4664c8*/
  this->Particle_field_0x110 = a7; /*0x4664d2*/
  this->Particle_field_0x128 = aP5; /*0x4664dc*/
  this->q0E0 = (_BYTE)aP7; /*0x4664e6*/
  this->Particle_field_0x6C = aP4; /*0x4664f6*/
  this->Particle_field_0xAC = aP1; /*0x4664fb*/
  this->Particle_field_0xB0 = aP3; /*0x466501*/
  this->q12C = 0; /*0x466507*/
  this->u8_12D = aP1[21].__pad_0[2]; /*0x466513*/
  if ( BYTE1(aP1[18].NeedsSaveOrLink) && aP3 ) /*0x466525*/
  {
    result = *(AbstractClass **)(aP3->field_21C + 90196); /*0x46652d*/
    this->Particle_field_0x114 = result; /*0x466533*/
  }
  else
  {
    this->Particle_field_0x114 = -1; /*0x46653b*/
  }
  this->Particle_field_0x150 = 256; /*0x466546*/
  this->Particle_field_0x154 = 0; /*0x466550*/
  this->q158 = 0; /*0x466556*/
  return (int)result->__pad_0; /*0x466545*/
}
} // namespace gamemd
}
