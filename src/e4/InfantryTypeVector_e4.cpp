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
  int InfantryTypeVector_field_0x08; // ecx
  int InfantryTypeVector_field_0x14; // eax
  int InfantryTypeVector_field_0x10; // eax
  int InfantryTypeVector_field_0x04; // edx

    v3 = *((unsigned int *)this + 8);
    if ( *((unsigned int *)this + 16) >= v3 )
  {
        if ( !*((unsigned char *)this + 13) && v3 )
      return 0; /*0x512f36*/
        v4 = *((unsigned int *)this + 20);
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
  *(unsigned int *)(InfantryTypeVector_field_0x04 + 4 * InfantryTypeVector_field_0x10) = *aP1; /*0x512f68*/
  return 1; /*0x512f51*/
}
} // namespace gamemd
// 0x5138F0
namespace gamemd {
unsigned int * InfantryTypeVector::Construct2(int a2, int a3)
{
  this->InfantryTypeVector_field_0x04 = (unsigned int)(0);
  this->InfantryTypeVector_field_0x08 = (unsigned int)(a2);
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x513908*/
  if ( a2 ) /*0x51390e*/
  {
    if ( a3 ) /*0x513916*/
    {
      this->InfantryTypeVector_field_0x04 = (unsigned int *)(a3);
      return (unsigned int *)(this->__pad_0);
    }
    this->InfantryTypeVector_field_0x04 = (unsigned int)(RA2_OPNEW(4 * a2));
        *((unsigned char *)this + 13) = 1;
  }
  return (unsigned int *)(this->__pad_0);
}
} // namespace gamemd
// 0x5D89A0
namespace gamemd {
unsigned int * InfantryTypeVector::ConstructFromData(int a2, int a3)
{
  this->InfantryTypeVector_field_0x04 = (unsigned int)(0);
  this->InfantryTypeVector_field_0x08 = (unsigned int)(a2);
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_InfantryTypeClass___vftable; /*0x5d89b8*/
  if ( a2 ) /*0x5d89be*/
  {
    if ( a3 ) /*0x5d89c6*/
    {
      this->InfantryTypeVector_field_0x04 = (unsigned int *)(a3);
      return (unsigned int *)(this->__pad_0);
    }
    this->InfantryTypeVector_field_0x04 = (unsigned int)(RA2_OPNEW(4 * a2));
        *((unsigned char *)this + 13) = 1;
  }
  return (unsigned int *)(this->__pad_0);
}
} // namespace gamemd