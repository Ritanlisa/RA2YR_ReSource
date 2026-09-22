// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x53EE70
bool GUID::Compare(int a2)
{
{

  if ( dword_828140 == 2 ) /*0x53ee7d*/
    return this->Data4 == *(_DWORD *)(a2 + 4) && *(_WORD *)this == *(_WORD *)a2; /*0x53ef1b*/
  if ( (*this || this->Data4 || this->Data3 || *(this + 3)) /*0x53eed8*/
    && (*(_BYTE *)a2 || *(_BYTE *)(a2 + 1) || *(_BYTE *)(a2 + 2) || *(_BYTE *)(a2 + 3)) )
  {
    int v8 = 3; /*0x53eef8*/
    _WORD * v9 = (_WORD *)(a2 + 4); /*0x53eefd*/
    _WORD * v10 = this + 4; /*0x53ef00*/
    bool v11 = 1; /*0x53ef03*/
    do /*0x53ef05*/
    {
      if ( !v8 ) /*0x53ef05*/
        break; /*0x53ef05*/
      v11 = *v10++ == *v9++; /*0x53ef05*/
      --v8; /*0x53ef05*/
    }
    while ( v11 ); /*0x53ef05*/
    return v11 && *(_DWORD *)this == *(_DWORD *)a2; /*0x53ef11*/
  }
  _WORD * v4 = (_WORD *)(a2 + 4); /*0x53eedf*/
  int v5 = 3; /*0x53eee2*/
  _WORD * v6 = this + 4; /*0x53eee7*/
  bool v7 = 1; /*0x53eeea*/
  do /*0x53eeec*/
  {
    if ( !v5 ) /*0x53eeec*/
      break; /*0x53eeec*/
    v7 = *v6++ == *v4++; /*0x53eeec*/
    --v5; /*0x53eeec*/
  }
  while ( v7 ); /*0x53eeec*/
  return v7; /*0x53ee9f*/
}
