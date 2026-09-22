// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E1480
int LinkClass::Destroy()
{
{
  this->vt_slot_84(); /*0x4e1485*/
  return LinkedList::RemoveNode(this); /*0x4e148f*/
}

// 0x5565A0
int LinkClass::Destruct()
{
{
  _DWORD *Prev; // edi
  int result; // eax

  *this = &vt_LinkClass; /*0x5565a5*/
  Prev = LinkedList::FindPrev(this); /*0x5565b1*/
  result = this->FindNext(); /*0x5565b7*/
  LinkClass *v4 = this->m_Prev; /*0x5565ba*/
  if ( v4 ) /*0x5565c1*/
    v4->m_Next = this->m_Next; /*0x5565c6*/
  LinkClass *v5 = this->m_Next; /*0x5565c9*/
  if ( v5 ) /*0x5565ce*/
    v5->m_Prev = this->m_Prev; /*0x5565d3*/
  this->m_Prev = 0; /*0x5565d8*/
  this->m_Next = 0; /*0x5565db*/
  if ( Prev == this && (_DWORD *)result != this ) /*0x5565e2*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 24))(result); /*0x5565e8*/
  return result; /*0x5565eb*/
}

// 0x4E1AD0
LinkClass * LinkClass::Destru_vt00(char a2)
{
{
    LinkClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (LinkClass *)this;
}
}
