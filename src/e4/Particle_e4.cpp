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
  *((char *)this + 67) = (char)(aP2); /*0x4664c8*/
  *((char *)this + 68) = a7; /*0x4664d2*/
  *((char *)this + 74) = (char)(aP5); /*0x4664dc*/
  *((unsigned char *)this + 224) = (unsigned char)(aP7); /*0x4664e6*/
  *((char *)this + 27) = (char)(aP4); /*0x4664f6*/
  *((char *)this + 43) = (char)(aP1); /*0x4664fb*/
  *((char *)this + 44) = (char)(aP3); /*0x466501*/
  *((unsigned char *)this + 300) = 0; /*0x466507*/
  *((unsigned char *)this + 301) = *(unsigned char *)(aP1 + 758); /*0x466513*/
  if ( *(unsigned char *)(aP1 + 681) && aP3 ) /*0x466525*/
  {
    result = (gamemd::AbstractClass *)((char)(*(unsigned int *)(*(unsigned int *)(aP3 + 540) + 90196)));
    *((char *)this + 69) = (char)(result); /*0x466533*/
  }
  else
  {
    *((char *)this + 69) = -1; /*0x46653b*/
  }
  *((char *)this + 84) = 256; /*0x466546*/
  *((char *)this + 85) = 0; /*0x466550*/
  *((unsigned char *)this + 344) = 0; /*0x466556*/
  return result; /*0x466545*/

}
}