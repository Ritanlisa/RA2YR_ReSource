// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ColorListClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ColorScheme_e4.hpp"

// 0x557AE0
namespace gamemd {
int ColorListClass::SetColor()
{
  int v1; // eax

  v1 = *(&this->q0241); /*0x557ae0*/
  if ( *(&this->q0047) > v1 ) /*0x557aeb*/
    return *(_DWORD *)(*(&this->q0044) + 4 * v1); /*0x557af3*/
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
  if ( a2 >= *(&this->q0047) ) /*0x557f4a*/
  {
    *(&this->q0241) = 0; /*0x557f9b*/
  }
  else
  {
    *(&this->q0241) = a2; /*0x557f4c*/
    this->AddItem_1(); /*0x557f56*/
    if ( *(&this->q0241) < *(&this->q0242) ) /*0x557f67*/
      this->OnKeyDown(*(&this->q0241)); /*0x557f6e*/
    v4 = *(&this->q0080); /*0x557f74*/
    result = *(&this->q0241); /*0x557f7d*/
    if ( result >= v4 + *(&this->q0242) ) /*0x557f87*/
      return (result - v4 + 1); /*0x557f91*/
  }
  return result; /*0x557f97*/
}
} // namespace gamemd
// 0x558010
namespace gamemd {
void ColorListClass::RemoveColor(wchar_t * String2)
{
  int v3; // esi

  if ( String2 && (int)*(&this->q0047) > 0 ) /*0x558022*/
  {
    v3 = 0; /*0x558024*/
    while ( _wcsicmp(*(const wchar_t **)(*(&this->q0044) + 4 * v3), String2) ) /*0x55803c*/
    {
      if ( ++v3 >= *(&this->q0047) ) /*0x558044*/
        return; /*0x558044*/
    }
    this->Clear(v3); /*0x558051*/
  }
}
} // namespace gamemd
// 0x488EE0
namespace gamemd {
int ColorListClass::GetColor(int a2)
{
  return (a2, 0); /*0x488eef*/
}
} // namespace gamemd
// 0x488F00
namespace gamemd {
ColorListClass * ColorListClass::QueryInterface(char a2)
{
  int v3; // eax
  char *v4; // esi
  void *v5; // eax

  v3 = this->q174; /*0x488f05*/
  v4 = &this->u32_5D0; /*0x488f0b*/
  *(_DWORD *)this = &(void*)(void*)&ColorListClass_vftable; /*0x488f13*/
  (*(void (__thiscall **)(char *))(v3 + 12))(&this->u32_942); /*0x488f19*/
  this->q190 = 0; /*0x488f1e*/
  v5 = (void *)*((_DWORD *)v4 + 1); /*0x488f24*/
  *(_DWORD *)v4 = &(void*)(void*)&VectorClass_int_vftable; /*0x488f29*/
  if ( v5 && v4[13] ) /*0x488f31*/
  {
    RA2_OPDEL(v5); /*0x488f37*/
    *((_DWORD *)v4 + 1) = 0; /*0x488f3f*/
  }
  v4[13] = 0; /*0x488f44*/
  *((_DWORD *)v4 + 2) = 0; /*0x488f47*/
  ListClass::Destruct(); /*0x488f4a*/
  if ( (a2 & 1) != 0 ) /*0x488f54*/
    RA2_OPDEL(); /*0x488f57*/
  return this; /*0x488f61*/
}
} // namespace gamemd