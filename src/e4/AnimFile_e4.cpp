// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AnimFile_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x427290
namespace gamemd {
char * AnimFile::Stub()
{
  return (char *)(&this->u32_1430);
}
} // namespace gamemd
// 0x4272A0
namespace gamemd {
AnimFile * AnimFile::QueryInterface(char a2)
{
  char v3; // al
  void (__thiscall ***v4)(unsigned int, int); // ecx

  v3 = this->u32_89; /*0x4272a6*/
  if ( v3 ) /*0x4272b4*/
  {
    (*(void (__thiscall **)(unsigned int))(**((unsigned int **)&this->q00C3) + 52))(this->q084); /*0x4272be*/
    this->u32_89 = 0; /*0x4272c1*/
  }
  v4 = (void (__thiscall ***)(unsigned int, int))this->u32_E0C; /*0x4272c7*/
  this->q084 = 0; /*0x4272cd*/
  if ( v4 ) /*0x4272d5*/
  {
    (**v4)(v4, 1); /*0x4272db*/
    this->u32_E0C = 0; /*0x4272dd*/
  }
  if ( this->qE10 ) /*0x4272e3*/
  {
    RA2_OPDEL(this->qE10); /*0x4272ee*/
    this->qE10 = 0; /*0x4272f6*/
  }
  this->u32_88 = 0; /*0x427300*/
  if ( (a2 & 1) != 0 ) /*0x42730e*/
    RA2_OPDEL(); /*0x427311*/
  return this; /*0x42731b*/
}
} // namespace gamemd