// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x488EE0
int ColorListClass::GetColor(int a2)
{
{
    return this->GetIndex(a2, 0);
}
}

// 0x488F00
ColorListClass * ColorListClass::QueryInterface(char a2)
{
{
    int v3;
    char *v4;
    void *v5;
    v3 = *((int *)(this) + 93);
    v4 = this + 372;
    *(int *)this = &vt_ColorListClass;
    (*(void (__thiscall **)(char *))(v3 + 12))(this + 372);
    *((int *)(this) + 100) = 0;
    v5 = (void *)*((int *)(v4) + 1);
    *(int *)v4 = &vt_VectorClass_int;
    if ( v5 && v4[13] )
  {
    __3_YAXPAX_Z(v5);
    *((int *)(v4) + 1) = 0;
  }
    v4[13] = 0;
    *((int *)(v4) + 2) = 0;
    ListClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ColorListClass *)this;
}
}

// 0x557AE0
int ColorListClass::SetColor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ColorListClass::_vt39(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 91); /*0x557ae0*/
  if ( *(this + 17) > v1 ) /*0x557aeb*/
    return *(_DWORD *)(*(this + 14) + 4 * v1); /*0x557af3*/
  else
    return 0; /*0x557aed*/
}
}

// 0x557F40
int ColorListClass::Clear(unsigned int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ColorListClass::_vt46(int *this, unsigned int a2)
{
  int result; // eax
  int v4; // ecx

  result = a2; /*0x557f40*/
  if ( a2 >= *(this + 17) ) /*0x557f4a*/
  {
    *(this + 91) = 0; /*0x557f9b*/
  }
  else
  {
    *(this + 91) = a2; /*0x557f4c*/
    (*(void (__thiscall **)(int *))(*this + 72))(this); /*0x557f56*/
    if ( *(this + 91) < *(this + 92) ) /*0x557f67*/
      (*(void (__thiscall **)(int *, _DWORD))(*this + 192))(this, *(this + 91)); /*0x557f6e*/
    v4 = *(this + 20); /*0x557f74*/
    result = *(this + 91); /*0x557f7d*/
    if ( result >= v4 + *(this + 92) ) /*0x557f87*/
      return (*(int (__thiscall **)(int *, int))(*this + 192))(this, result - v4 + 1); /*0x557f91*/
  }
  return result; /*0x557f97*/
}
}

// 0x558010
void ColorListClass::RemoveColor(wchar_t * String2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ColorListClass::_vt45(_DWORD *this, wchar_t *String2)
{
  int v3; // esi

  if ( String2 && (int)*(this + 17) > 0 ) /*0x558022*/
  {
    v3 = 0; /*0x558024*/
    while ( _wcsicmp(*(const wchar_t **)(*(this + 14) + 4 * v3), String2) ) /*0x55803c*/
    {
      if ( ++v3 >= *(this + 17) ) /*0x558044*/
        return; /*0x558044*/
    }
    (*(void (__thiscall **)(_DWORD *, int))(*this + 184))(this, v3); /*0x558051*/
  }
}
}
