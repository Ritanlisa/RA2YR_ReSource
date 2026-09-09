// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E1480
int LinkClass::Destroy()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LinkClass_Destroy(_DWORD *this)
{
  (*(void (__thiscall **)(_DWORD *))(*this + 84))(this); /*0x4e1485*/
  return LinkedList::RemoveNode(this); /*0x4e148f*/
}
}

// 0x4E1AD0
LinkClass * LinkClass::Destru_vt00(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LinkClass *__thiscall LinkClass::Destru_vt00(_DWORD *Block, char a2)
{
  LinkClass::Destruct(Block); /*0x4e1ad3*/
  if ( (a2 & 1) != 0 ) /*0x4e1add*/
    __3_YAXPAX_Z(Block); /*0x4e1ae0*/
  return (LinkClass *)Block; /*0x4e1aea*/
}
}

// 0x5565A0
int LinkClass::Destruct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LinkClass_Destructor(_DWORD *this)
{
  _DWORD *Prev; // edi
  int result; // eax
  int v4; // edx
  int v5; // edx

  *this = &LinkClass::`vftable'; /*0x5565a5*/
  Prev = LinkedList::FindPrev(this); /*0x5565b1*/
  result = (*(int (__thiscall **)(_DWORD *))(*this + 28))(this); /*0x5565b7*/
  v4 = *(this + 2); /*0x5565ba*/
  if ( v4 ) /*0x5565c1*/
    *(_DWORD *)(v4 + 4) = *(this + 1); /*0x5565c6*/
  v5 = *(this + 1); /*0x5565c9*/
  if ( v5 ) /*0x5565ce*/
    *(_DWORD *)(v5 + 8) = *(this + 2); /*0x5565d3*/
  *(this + 2) = 0; /*0x5565d8*/
  *(this + 1) = 0; /*0x5565db*/
  if ( Prev == this && (_DWORD *)result != this ) /*0x5565e2*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 24))(result); /*0x5565e8*/
  return result; /*0x5565eb*/
}
}
