// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/LinkClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x4E1480
namespace gamemd {
int LinkClass::Destroy()
{
  this->vt_slot_84(); /*0x4e1485*/
  return LinkedList::RemoveNode(); /*0x4e148f*/
}
} // namespace gamemd
// 0x5565A0
namespace gamemd {
int LinkClass::Destruct()
{
  unsigned int *Prev; // edi
  int result; // eax
  LinkClass * v4;
  LinkClass * v5;

  Prev = LinkedList::FindPrev(this); /*0x5565b1*/
  result = this->FindNext(); /*0x5565b7*/
  v4 = this->m_Prev; /*0x5565ba*/
  if ( v4 ) /*0x5565c1*/
    v4->m_Next = this->m_Next; /*0x5565c6*/
  v5 = this->m_Next; /*0x5565c9*/
  if ( v5 ) /*0x5565ce*/
    v5->m_Prev = this->m_Prev; /*0x5565d3*/
  this->m_Prev = 0; /*0x5565d8*/
  this->m_Next = 0; /*0x5565db*/
  if ( Prev == this && (unsigned int *)result != this ) /*0x5565e2*/
    return (*(int (__thiscall **)(int))(*(unsigned int *)result + 24))(result); /*0x5565e8*/
  return result; /*0x5565eb*/
}
} // namespace gamemd
// 0x4E1AD0
namespace gamemd {
LinkClass * LinkClass::Destru_vt00(char a2)
{
  LinkClass::Destruct(); /*0x4e1ad3*/
  if ( (a2 & 1) != 0 ) /*0x4e1add*/
    RA2_OPDEL(); /*0x4e1ae0*/
  return this; /*0x4e1aea*/
}
} // namespace gamemd