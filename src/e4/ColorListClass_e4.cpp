// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ColorListClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ColorScheme_e4.hpp"

// 0x557AE0
namespace gamemd {
int ColorListClass::SetColor()
{
  int v1; // eax

  v1 = this->u32_16C; /*0x557ae0*/
  if ( this->u32_44 > v1 ) /*0x557aeb*/
    return *(unsigned int *)(this->u32_38 + 4 * v1); /*0x557af3*/
  else
    return 0; /*0x557aed*/
}
} // namespace gamemd
// 0x557F40
namespace gamemd {
int ColorListClass::Clear(unsigned int a2)
{
  int result; // eax
  int v4; // ecx

  result = a2; /*0x557f40*/
  if ( a2 >= this->u32_44 ) /*0x557f4a*/
  {
    this->u32_16C = 0; /*0x557f9b*/
  }
  else
  {
    this->u32_16C = a2; /*0x557f4c*/
    (*(void (__thiscall **)(ListClass *))(*(unsigned int *)this->__pad_0 + 72))(this); /*0x557f56*/
    if ( this->u32_16C < this->u32_170 ) /*0x557f67*/
      (*(void (__thiscall **)(ListClass *, unsigned int))(*(unsigned int *)this->__pad_0 + 192))(this, this->u32_16C); /*0x557f6e*/
    v4 = this->q014; /*0x557f74*/
    result = this->u32_16C; /*0x557f7d*/
    if ( result >= v4 + this->u32_170 ) /*0x557f87*/
      return (*(int (__thiscall **)(ListClass *, int))(*(unsigned int *)this->__pad_0 + 192))(this, result - v4 + 1); /*0x557f91*/
  }
  return result; /*0x557f97*/
}
} // namespace gamemd
// 0x558010
namespace gamemd {
void ColorListClass::RemoveColor(wchar_t * String2)
{
  int v3; // esi

  if ( String2 && this->u32_44 > 0 ) /*0x558022*/
  {
    v3 = 0; /*0x558024*/
    while ( _wcsicmp(*(const wchar_t **)(this->u32_38 + 4 * v3), String2) ) /*0x55803c*/
    {
      if ( ++v3 >= this->u32_44 ) /*0x558044*/
        return; /*0x558044*/
    }
    (*(void (__thiscall **)(ListClass *, int))(*(unsigned int *)this->__pad_0 + 184))(this, v3); /*0x558051*/
  }
}
} // namespace gamemd
// 0x488EE0
namespace gamemd {
int ColorListClass::GetColor(int a2)
{
  return (*(int (__thiscall **)(ColorListClass *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 204))(this, a2, 0); /*0x488eef*/
}
} // namespace gamemd
// 0x488F00
namespace gamemd {
ColorListClass * ColorListClass::QueryInterface(char a2)
{
  int v3; // eax
  char *v4; // esi
  void *v5; // eax

  v3 = (unsigned int)(this->u32_174);
  v4 = (char *)((unsigned int)((char *)this + 372));
  *(unsigned int *)this->__pad_0 = (void*)&ColorListClass_vftable; /*0x488f13*/
  (*(void (__thiscall **)(char *))(v3 + 12))((char *)this + 372); /*0x488f19*/
  this->u32_190 = 0; /*0x488f1e*/
  v5 = (void *)*((unsigned int *)v4 + 1); /*0x488f24*/
  *(unsigned int *)v4 = (void*)&VectorClass_int_vftable; /*0x488f29*/
  if ( v5 && v4[13] ) /*0x488f31*/
  {
    RA2_OPDEL(v5); /*0x488f37*/
    *((unsigned int *)v4 + 1) = 0; /*0x488f3f*/
  }
  v4[13] = (char)((gamemd::ColorListClass *)(0));
  *((unsigned int *)v4 + 2) = 0; /*0x488f47*/
  ListClass::Destruct(); /*0x488f4a*/
  if ( (a2 & 1) != 0 ) /*0x488f54*/
    RA2_OPDEL(); /*0x488f57*/
  return this->__pad_0; /*0x488f61*/
}
} // namespace gamemd