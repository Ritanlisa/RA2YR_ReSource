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

  v3 = this->q008; /*0x512f23*/
  if ( this->q010 >= v3 ) /*0x512f2b*/
  {
    if ( !this->u8_D && v3 ) /*0x512f36*/
      return 0; /*0x512f36*/
    v4 = this->q014; /*0x512f38*/
    if ( v4 <= 0 || !this->vt_slot_8(v3 + v4, 0) ) /*0x512f48*/
      return 0; /*0x512f4f*/
  }
  v6 = (unsigned int)(this->q010);
  v7 = this->u32_4; /*0x512f58*/
  this->q010 = v6 + 1; /*0x512f5e*/
  *(unsigned int *)(v7 + 4 * v6) = *aP1; /*0x512f68*/
  return 1; /*0x512f51*/
}
} // namespace gamemd
// 0x5138F0
namespace gamemd {
unsigned int * InfantryTypeVector::Construct2(int a2, int a3)
{
  this->u32_4 = 0; /*0x5138fb*/
  this->q008 = a2; /*0x5138fe*/
  this->q00C = 1; /*0x513901*/
  this->u8_D = 0; /*0x513905*/
  if ( a2 ) /*0x51390e*/
  {
    if ( a3 ) /*0x513916*/
    {
      this->u32_4 = (unsigned int *)(a3);
      return this; /*0x51391e*/
    }
    this->u32_4 = (unsigned int)(operator new(4 * a2));
    this->u8_D = 1; /*0x513930*/
  }
  return (unsigned int *)(this);
}
} // namespace gamemd
// 0x5D89A0
namespace gamemd {
unsigned int * InfantryTypeVector::ConstructFromData(int a2, int a3)
{
  this->u32_4 = 0; /*0x5d89ab*/
  this->q008 = a2; /*0x5d89ae*/
  this->q00C = 1; /*0x5d89b1*/
  this->u8_D = 0; /*0x5d89b5*/
  if ( a2 ) /*0x5d89be*/
  {
    if ( a3 ) /*0x5d89c6*/
    {
      this->u32_4 = (unsigned int *)(a3);
      return this; /*0x5d89ce*/
    }
    this->u32_4 = (unsigned int)(operator new(4 * a2));
    this->u8_D = 1; /*0x5d89e0*/
  }
  return (unsigned int *)(this);
}
} // namespace gamemd