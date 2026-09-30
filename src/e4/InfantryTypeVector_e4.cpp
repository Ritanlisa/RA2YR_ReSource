// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x512F20
namespace gamemd {
int InfantryTypeVector::Add(InfantryTypeClass * aP1)
{

  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *((unsigned int *)this + 2); /*0x512f23*/
  if ( *((unsigned int *)this + 4) >= v3 ) /*0x512f2b*/
  {
    if ( !*((unsigned char *)this + 13) && v3 ) /*0x512f36*/
      return 0; /*0x512f36*/
    v4 = *((unsigned int *)this + 5); /*0x512f38*/
    if ( v4 <= 0 || !(*(uint8_t (**)(unsigned int *, int, unsigned int))(*(unsigned int *)this + 32))(this, v3 + v4, 0) ) /*0x512f48*/
      return 0; /*0x512f4f*/
  }
  v6 = *((unsigned int *)this + 4); /*0x512f55*/
  v7 = *((unsigned int *)this + 1); /*0x512f58*/
  *((unsigned int *)this + 4) = v6 + 1; /*0x512f5e*/
  *(unsigned int *)(v7 + 4 * v6) = *(unsigned int *)aP1->vtable0; /*0x512f68*/
  return 1; /*0x512f51*/

}
} // namespace gamemd
// 0x5138F0
namespace gamemd {
unsigned int * InfantryTypeVector::Construct2(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x5138fb*/
  *((unsigned int *)this + 2) = a2; /*0x5138fe*/
  *((unsigned char *)this + 12) = 1; /*0x513901*/
  *((unsigned char *)this + 13) = 0; /*0x513905*/
  *this = &vt_VectorClass_InfantryTypeClass_const; /*0x513908*/
  if ( a2 ) /*0x51390e*/
  {
    if ( a3 ) /*0x513916*/
    {
      *((unsigned int *)this + 1) = a3; /*0x513918*/
      return this; /*0x51391e*/
    }
    *((unsigned int *)this + 1) = __2_YAPAXI_Z(4 * a2); /*0x51392d*/
    *((unsigned char *)this + 13) = 1; /*0x513930*/
  }
  return (unsigned int *)(this);

}
} // namespace gamemd
// 0x5D89A0
namespace gamemd {
unsigned int * InfantryTypeVector::ConstructFromData(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x5d89ab*/
  *((unsigned int *)this + 2) = a2; /*0x5d89ae*/
  *((unsigned char *)this + 12) = 1; /*0x5d89b1*/
  *((unsigned char *)this + 13) = 0; /*0x5d89b5*/
  *this = &vt_VectorClass_InfantryTypeClass; /*0x5d89b8*/
  if ( a2 ) /*0x5d89be*/
  {
    if ( a3 ) /*0x5d89c6*/
    {
      *((unsigned int *)this + 1) = a3; /*0x5d89c8*/
      return this; /*0x5d89ce*/
    }
    *((unsigned int *)this + 1) = __2_YAPAXI_Z(4 * a2); /*0x5d89dd*/
    *((unsigned char *)this + 13) = 1; /*0x5d89e0*/
  }
  return (unsigned int *)(this);

}
} // namespace gamemd