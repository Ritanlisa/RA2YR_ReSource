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
int InfantryTypeVector::Add(InfantryTypeClass * aP1, void *a2, void *a3)
{

  int InfantryTypeVector_field_0x08; // ecx
  int InfantryTypeVector_field_0x14; // eax
  int InfantryTypeVector_field_0x10; // eax
  int InfantryTypeVector_field_0x04; // edx

  InfantryTypeVector_field_0x08 = this->InfantryTypeVector_field_0x08; /*0x512f23*/
  if ( this->InfantryTypeVector_field_0x10 >= InfantryTypeVector_field_0x08 ) /*0x512f2b*/
  {
    if ( !BYTE1(this->InfantryTypeVector_field_0x0C) && InfantryTypeVector_field_0x08 ) /*0x512f36*/
      return 0; /*0x512f36*/
    InfantryTypeVector_field_0x14 = this->InfantryTypeVector_field_0x14; /*0x512f38*/
    if ( InfantryTypeVector_field_0x14 <= 0 /*0x512f48*/
      || !(*(uint8_t (**)(InfantryTypeVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
            this,
            InfantryTypeVector_field_0x08 + InfantryTypeVector_field_0x14,
            0) )
    {
      return 0; /*0x512f4f*/
    }
  }
  InfantryTypeVector_field_0x10 = (unsigned int)(this->InfantryTypeVector_field_0x10);
  InfantryTypeVector_field_0x04 = (unsigned int)(this->InfantryTypeVector_field_0x04);
  this->InfantryTypeVector_field_0x10 = (unsigned int)(InfantryTypeVector_field_0x10 + 1);
  *(unsigned int *)(InfantryTypeVector_field_0x04 + 4 * InfantryTypeVector_field_0x10) = *(unsigned int *)aP1; /*0x512f68*/
  return 1; /*0x512f51*/

}
} // namespace gamemd
// 0x5138F0
namespace gamemd {
unsigned int * InfantryTypeVector::Construct2(int a2, int a3)
{

  this->InfantryTypeVector_field_0x04 = 0; /*0x5138fb*/
  this->InfantryTypeVector_field_0x08 = a2; /*0x5138fe*/
  LOBYTE(this->InfantryTypeVector_field_0x0C) = 1; /*0x513901*/
  BYTE1(this->InfantryTypeVector_field_0x0C) = 0; /*0x513905*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x513908*/
  if ( a2 ) /*0x51390e*/
  {
    if ( a3 ) /*0x513916*/
    {
      this->InfantryTypeVector_field_0x04 = (unsigned int)((unsigned int *)(a3));
      return (unsigned int *)(this->__pad_0);
    }
    this->InfantryTypeVector_field_0x04 = (unsigned int)(__2_YAPAXI_Z(4 * a2)); /*0x51392d*/
    BYTE1(this->InfantryTypeVector_field_0x0C) = 1; /*0x513930*/
  }
  return (unsigned int *)(this->__pad_0);

}
} // namespace gamemd
// 0x5D89A0
namespace gamemd {
unsigned int * InfantryTypeVector::ConstructFromData(int a2, int a3)
{

  this->InfantryTypeVector_field_0x04 = 0; /*0x5d89ab*/
  this->InfantryTypeVector_field_0x08 = a2; /*0x5d89ae*/
  LOBYTE(this->InfantryTypeVector_field_0x0C) = 1; /*0x5d89b1*/
  BYTE1(this->InfantryTypeVector_field_0x0C) = 0; /*0x5d89b5*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x5d89b8*/
  if ( a2 ) /*0x5d89be*/
  {
    if ( a3 ) /*0x5d89c6*/
    {
      this->InfantryTypeVector_field_0x04 = (unsigned int)((unsigned int *)(a3));
      return (unsigned int *)(this->__pad_0);
    }
    this->InfantryTypeVector_field_0x04 = (unsigned int)(__2_YAPAXI_Z(4 * a2)); /*0x5d89dd*/
    BYTE1(this->InfantryTypeVector_field_0x0C) = 1; /*0x5d89e0*/
  }
  return (unsigned int *)(this->__pad_0);

}
} // namespace gamemd