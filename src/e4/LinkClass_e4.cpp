// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/LinkClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x4E1480
namespace gamemd {
int LinkClass::Destroy(void *a1)
{

  (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 84))(this); /*0x4e1485*/
  return LinkedList::RemoveNode( (void)((LinkClass *)this)); /*0x4e148f*/

}
} // namespace gamemd
// 0x5565A0
namespace gamemd {
int LinkClass::Destruct()
{

  LinkClass *Prev; // edi
  int result; // eax
  LinkClass *m_Prev; // edx
  LinkClass *m_Next; // edx

  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_LinkClass); /*0x5565a5*/
  Prev = (LinkClass *)LinkedList::FindPrev(this); /*0x5565b1*/
  result = (*(int (**)(LinkClass *))(*(unsigned int *)this->__pad_0 + 28))(this); /*0x5565b7*/
  m_Prev = this->m_Prev; /*0x5565ba*/
  if ( m_Prev ) /*0x5565c1*/
    m_Prev->m_Next = this->m_Next; /*0x5565c6*/
  m_Next = this->m_Next; /*0x5565c9*/
  if ( m_Next ) /*0x5565ce*/
    m_Next->m_Prev = this->m_Prev; /*0x5565d3*/
  this->m_Prev = 0; /*0x5565d8*/
  this->m_Next = 0; /*0x5565db*/
  if ( Prev == this && (LinkClass *)result != this ) /*0x5565e2*/
    return (*(int (**)(int))(*(unsigned int *)result + 24))(result); /*0x5565e8*/
  return result; /*0x5565eb*/

}
} // namespace gamemd
// 0x4E1AD0
namespace gamemd {
LinkClass * LinkClass::Destru_vt00(unsigned int * Block, char a2)
{

  ((LinkClass*)this)->Destruct(); /*0x4e1ad3*/
  if ( (a2 & 1) != 0 ) /*0x4e1add*/
    __3_YAXPAX_Z(this); /*0x4e1ae0*/
  return this->__pad_0; /*0x4e1aea*/

}
} // namespace gamemd