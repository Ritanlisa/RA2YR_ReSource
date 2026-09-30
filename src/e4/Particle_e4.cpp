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

  AbstractClass *result; // eax

  result = (unsigned int)(aP1);
  *((unsigned int *)this + 67) = aP2; /*0x4664c8*/
  *((unsigned int *)this + 68) = a7; /*0x4664d2*/
  *((unsigned int *)this + 74) = aP5; /*0x4664dc*/
  *((unsigned char *)this + 224) = (unsigned char)aP7; /*0x4664e6*/
  *((unsigned int *)this + 27) = aP4; /*0x4664f6*/
  *((unsigned int *)this + 43) = aP1; /*0x4664fb*/
  *((unsigned int *)this + 44) = aP3; /*0x466501*/
  *((unsigned char *)this + 300) = 0; /*0x466507*/
  *((unsigned char *)this + 301) = aP1[((unsigned int *)(21].__pad_0))[2]; /*0x466513*/
  if ( BYTE1(aP1[18].NeedsSaveOrLink) && aP3 ) /*0x466525*/
  {
    result = (unsigned int)(*(AbstractClass **)(aP3->field_21C + 90196));
    *((unsigned int *)this + 69) = result; /*0x466533*/
  }
  else
  {
    *((unsigned int *)this + 69) = -1; /*0x46653b*/
  }
  *((unsigned int *)this + 84) = 256; /*0x466546*/
  *((unsigned int *)this + 85) = 0; /*0x466550*/
  *((unsigned char *)this + 344) = 0; /*0x466556*/
  return (int)result->__pad_0; /*0x466545*/

}
}