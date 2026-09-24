// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x401F90
int RefCount::Decrement()
{
  int result; // eax

  result = *(this + 3) - 1; /*0x401f93*/
  *(this + 3) = result; /*0x401f96*/
  if ( result < 0 ) /*0x401f99*/
    *(this + 3) = 0; /*0x401f9b*/
  return result; /*0x401fa2*/
}
// 0x49FA00
int RefCount::Increment(int a2)
{
  int v3; // edi
  int i; // eax
  int v5; // ecx

  v3 = *(this + 2); /*0x49fa09*/
  if ( a2 < v3 ) /*0x49fa0e*/
  {
  LABEL_5:
    ++*(_DWORD *)(*(this + 1) + 4 * a2); /*0x49fa3d*/
    v5 = *(this + 1); /*0x49fa4d*/
    ++*(this + 4); /*0x49fa51*/
    return *(_DWORD *)(v5 + 4 * a2); /*0x49fa59*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2 + 10, 0) ) /*0x49fa1a*/
  {
    for ( i = v3; i < *(this + 2); *(_DWORD *)(*(this + 1) + 4 * i - 4) = 0 ) /*0x49fa28*/
      ++i; /*0x49fa2d*/
    goto LABEL_5; /*0x49fa3b*/
  }
  return 0; /*0x49fa40*/
}