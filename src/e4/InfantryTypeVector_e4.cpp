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
  int q008; // ecx
  int q014; // eax
  int q010; // eax
  int u32_4; // edx

  q008 = this->q008; /*0x512f23*/
  if ( this->q010 >= q008 ) /*0x512f2b*/
  {
    if ( !IDA_BYTE1(this->q00C) && q008 ) /*0x512f36*/
      return 0; /*0x512f36*/
    q014 = this->q014; /*0x512f38*/
    if ( q014 <= 0 /*0x512f48*/
      || !(*(unsigned __int8 (__thiscall **)(InfantryTypeVector *, int, _DWORD))(*(_DWORD *)this->q000 + 8))(
            this,
            q008 + q014,
            0) )
    {
      return 0; /*0x512f4f*/
    }
  }
  q010 = this->q010; /*0x512f55*/
  u32_4 = this->u32_4; /*0x512f58*/
  this->q010 = q010 + 1; /*0x512f5e*/
  *(_DWORD *)(u32_4 + 4 * q010) = *a2; /*0x512f68*/
  return 1; /*0x512f51*/
}
} // namespace gamemd
// 0x5138F0
namespace gamemd {
unsigned int * InfantryTypeVector::Construct2(int a2, int a3)
{
  this->u32_4 = 0; /*0x5138fb*/
  this->q008 = a2; /*0x5138fe*/
  IDA_LOBYTE(this->q00C) = 1; /*0x513901*/
  IDA_BYTE1(this->q00C) = 0; /*0x513905*/
  *(_DWORD *)this->q000 = &(void*)(void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x513908*/
  if ( a2 ) /*0x51390e*/
  {
    if ( a3 ) /*0x513916*/
    {
      this->u32_4 = a3; /*0x513918*/
      return this->q000; /*0x51391e*/
    }
    this->u32_4 = RA2_OPNEW(4 * a2); /*0x51392d*/
    IDA_BYTE1(this->q00C) = 1; /*0x513930*/
  }
  return this->q000; /*0x51391d*/
}
} // namespace gamemd
// 0x5D89A0
namespace gamemd {
unsigned int * InfantryTypeVector::ConstructFromData(int a2, int a3)
{
  this->u32_4 = 0; /*0x5d89ab*/
  this->q008 = a2; /*0x5d89ae*/
  IDA_LOBYTE(this->q00C) = 1; /*0x5d89b1*/
  IDA_BYTE1(this->q00C) = 0; /*0x5d89b5*/
  *(_DWORD *)this->q000 = &(void*)(void*)&VectorClass_InfantryTypeClass___vftable; /*0x5d89b8*/
  if ( a2 ) /*0x5d89be*/
  {
    if ( a3 ) /*0x5d89c6*/
    {
      this->u32_4 = a3; /*0x5d89c8*/
      return this->q000; /*0x5d89ce*/
    }
    this->u32_4 = RA2_OPNEW(4 * a2); /*0x5d89dd*/
    IDA_BYTE1(this->q00C) = 1; /*0x5d89e0*/
  }
  return this->q000; /*0x5d89cd*/
}
} // namespace gamemd