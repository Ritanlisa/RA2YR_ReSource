// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AnimFile_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ColorStruct_e4.hpp"

// 0x427290
namespace gamemd {
char * AnimFile::Stub()
{

  return (char *)this + 1292; /*0x427296*/

}
} // namespace gamemd
// 0x4272A0
namespace gamemd {
AnimFile * AnimFile::QueryInterface(void * Block, char a2)
{

  char v3; // al
  void (***v4)(unsigned int, int); // ecx

  v3 = *((unsigned char *)this + 137); /*0x4272a6*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_AnimFile; /*0x4272ac*/
  if ( v3 ) /*0x4272b4*/
  {
    (*(void (**)(unsigned int))(**((unsigned int **)this + 33) + 52))(*((unsigned int *)this + 33)); /*0x4272be*/
    *((unsigned char *)this + 137) = 0; /*0x4272c1*/
  }
  v4 = (void (***)(unsigned int, int))*((unsigned int *)this + 899); /*0x4272c7*/
  *((unsigned int *)this + 33) = 0; /*0x4272cd*/
  if ( v4 ) /*0x4272d5*/
  {
    (**v4)(v    ((unsigned int)(**v4))(v4, 1); 
    *((unsigned int *)this + 899) = 0; /*0x4272dd*/
  }
  if ( *((unsigned int *)this + 900) ) /*0x4272e3*/
  {
    __3_YAXPAX_Z(*((void **)this + 900)); /*0x4272ee*/
    *((unsigned int *)this + 900) = 0; /*0x4272f6*/
  }
  *((unsigned char *)this + 136) = 0; /*0x427300*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_Animate;
  if ( (a2 & 1) != 0 ) /*0x42730e*/
    __3_YAXPAX_Z(this); /*0x427311*/
  return (gamemd::AnimFile *)(this); /*0x42731b*/

}
} // namespace gamemd