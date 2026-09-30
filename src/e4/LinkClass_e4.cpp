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

// 0x4E1480
namespace gamemd {
void LinkClass::Destroy()
{

  (*(void (**)(unsigned int *))(*(unsigned int *)this + 84))(this); /*0x4e1485*/
  return LinkedList::RemoveNode(this); /*0x4e148f*/

}
} // namespace gamemd
// 0x5565A0
namespace gamemd {
void LinkClass::Destruct()
{

  unsigned int *Prev; // edi
  int result; // eax
  int v4; // edx
  int v5; // edx

  *this = &vt_LinkClass; /*0x5565a5*/
  Prev = LinkedList::FindPrev(this); /*0x5565b1*/
  result = (*(int (**)(unsigned int *))(*(unsigned int *)this + 28))(this); /*0x5565b7*/
  v4 = *((unsigned int *)this + 2); /*0x5565ba*/
  if ( v4 ) /*0x5565c1*/
    *(unsigned int *)(v4 + 4) = *((unsigned int *)this + 1); /*0x5565c6*/
  v5 = *((unsigned int *)this + 1); /*0x5565c9*/
  if ( v5 ) /*0x5565ce*/
    *(unsigned int *)(v5 + 8) = *((unsigned int *)this + 2); /*0x5565d3*/
  *((unsigned int *)this + 2) = 0; /*0x5565d8*/
  *((unsigned int *)this + 1) = 0; /*0x5565db*/
  if ( Prev == this && (unsigned int *)result != this ) /*0x5565e2*/
    return (*(int (**)(int))(*(unsigned int *)result + 24))(result); /*0x5565e8*/
  return result; /*0x5565eb*/

}
} // namespace gamemd
// 0x4E1AD0
namespace gamemd {
LinkClass * LinkClass::Destru_vt00(char a2)
{

  LinkClass::Destruct(Block); /*0x4e1ad3*/
  if ( (a2 & 1) != 0 ) /*0x4e1add*/
    __3_YAXPAX_Z(Block); /*0x4e1ae0*/
  return (LinkClass *)Block; /*0x4e1aea*/

}
} // namespace gamemd