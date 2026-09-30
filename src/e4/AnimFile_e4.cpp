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
  void (***v4)(unsigned int, int); // ecx

  v3 = (unsigned int)(this->u32_89);
  *(unsigned int *)this->__pad_0 = (void*)&AnimFile_vftable; /*0x4272ac*/
  if ( v3 ) /*0x4272b4*/
  {
        (*(void (**)(unsigned int))(**((unsigned int **)Block + 33) + 52))(*((unsigned int *)Block + 33));
        *((unsigned char *)Block + 137) = 0;
  }
    v4 = (void (***)(unsigned int, int))*((unsigned int *)Block + 899);
    *((unsigned int *)Block + 33) = 0;
  if ( v4 ) /*0x4272d5*/
  {
    (**v4)(v4, 1); /*0x4272db*/
        *((unsigned int *)Block + 899) = 0;
  }
    if ( *((unsigned int *)Block + 900) )
  {
    RA2_OPDEL(*((void **)this + 900)); /*0x4272ee*/
        *((unsigned int *)Block + 900) = 0;
  }
  this->u32_88 = (unsigned int)(0);
  *(unsigned int *)this->__pad_0 = (void*)&Animate_vftable; /*0x427308*/
  if ( (a2 & 1) != 0 ) /*0x42730e*/
    RA2_OPDEL(); /*0x427311*/
  return this; /*0x42731b*/
}
} // namespace gamemd