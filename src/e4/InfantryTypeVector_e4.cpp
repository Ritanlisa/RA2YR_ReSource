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
namespace gamemd {  // G42.18 ns repair
int InfantryTypeVector::Add(InfantryTypeClass * aP1, void *a2, void *a3)
{


  int InfantryTypeVector_field_0x08; // ecx
  InfantryTypeVector_field_0x08 = (int)(aP1->vtable3); /*0x512f23*/
  if ( aP1->uniqueId >= InfantryTypeVector_field_0x08 ) /*0x512f2b*/
  {
    if ( !BYTE1(aP1->vtable4) && InfantryTypeVector_field_0x08 ) /*0x512f36*/
      return 0; /*0x512f36*/
  int InfantryTypeVector_field_0x14; // eax
    InfantryTypeVector_field_0x14 = aP1->abstractFlags; /*0x512f38*/
    if ( InfantryTypeVector_field_0x14 <= 0 /*0x512f48*/
      || !(*(unsigned __int8 (**)(InfantryTypeVector *, int, unsigned int))(*(unsigned int *)aP1->vtable1 + 8))(
            aP1,
            InfantryTypeVector_field_0x08 + InfantryTypeVector_field_0x14,
            0) )
    {
      return 0; /*0x512f4f*/
    }
  }
  int InfantryTypeVector_field_0x10; // eax
  InfantryTypeVector_field_0x10 = aP1->uniqueId; /*0x512f55*/
  int InfantryTypeVector_field_0x04; // edx
  InfantryTypeVector_field_0x04 = (int)(aP1->vtable2); /*0x512f58*/
  aP1->uniqueId = InfantryTypeVector_field_0x10 + 1; /*0x512f5e*/
  *(unsigned int *)(InfantryTypeVector_field_0x04 + 4 * InfantryTypeVector_field_0x10) = (unsigned int)(*a2); /*0x512f68*/
  return 1; /*0x512f51*/

}
} // namespace gamemd
// 0x5138F0
namespace gamemd {
unsigned int * InfantryTypeVector::Construct2(int a2, int a3)
{

  this->u32_4 = 0; /*0x5138fb*/
  this->q008 = a2; /*0x5138fe*/
  LOBYTE(this->q00C) = 1; /*0x513901*/
  BYTE1(this->q00C) = 0; /*0x513905*/
  *(unsigned int *)this->__pad_000 = (unsigned int)(&vt_VectorClass); /*0x513908*/
  if ( a2 ) /*0x51390e*/
  {
    if ( a3 ) /*0x513916*/
    {
      this->InfantryTypeVector_field_0x04 = a3; /*0x513918*/
      return this->__pad_0; /*0x51391e*/
    }
    this->InfantryTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x51392d*/
    BYTE1(this->InfantryTypeVector_field_0x0C) = 1; /*0x513930*/
  }
  return this->__pad_0; /*0x51391d*/

}
} // namespace gamemd
// 0x5D89A0
namespace gamemd {
unsigned int * InfantryTypeVector::ConstructFromData(int a2, int a3)
{

  this->u32_4 = 0; /*0x5d89ab*/
  this->q008 = a2; /*0x5d89ae*/
  LOBYTE(this->q00C) = 1; /*0x5d89b1*/
  BYTE1(this->q00C) = 0; /*0x5d89b5*/
  *(unsigned int *)this->__pad_000 = (unsigned int)(&vt_VectorClass); /*0x5d89b8*/
  if ( a2 ) /*0x5d89be*/
  {
    if ( a3 ) /*0x5d89c6*/
    {
      this->InfantryTypeVector_field_0x04 = a3; /*0x5d89c8*/
      return this->__pad_0; /*0x5d89ce*/
    }
    this->InfantryTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x5d89dd*/
    BYTE1(this->InfantryTypeVector_field_0x0C) = 1; /*0x5d89e0*/
  }
  return this->__pad_0; /*0x5d89cd*/

}
} // namespace gamemd