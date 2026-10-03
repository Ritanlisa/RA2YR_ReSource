// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ListBox_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/LightningStorm_e4.hpp"
#include "e4/classes/E4Recv_779690_e4.hpp"
#include "e4/classes/Rules_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/LoadGame_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/LinkClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/Theme_e4.hpp"

// 0x4791F0
namespace gamemd {
AbstractClass * * LinkedList_flat::LoadScenarioMixFiles(int a2, int a3, int a4, int aP0, int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4791F0)
}
} // namespace gamemd
// 0x556600
namespace gamemd {
void * LinkedList_flat::MoveNode(void * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x556600)
}
} // namespace gamemd
// 0x556640
namespace gamemd {
unsigned int * LinkedList_flat::FindPrev()
{

  LinkClass **p_m_Prev; // edx
  unsigned int *result; // eax

  p_m_Prev = (gamemd::LinkClass **)((unsigned int *)(&this->m_Prev));
  if ( !this->m_Prev ) /*0x556640*/
    return this->__pad_0; /*0x55665d*/
  do /*0x556651*/
  {
    result = (unsigned int *)(*p_m_Prev);
    if ( *p_m_Prev == (gamemd::LinkClass *)(this) ) /*0x55664f*/
      break; /*0x55664f*/
    p_m_Prev = (LinkClass **)(result + 2); /*0x556654*/
  }
  while ( result[2] ); /*0x556651*/
  return result; /*0x55665b*/

}
} // namespace gamemd
// 0x5566A0
namespace gamemd {
LinkClass * * LinkedList_flat::InsertAfter(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5566A0)
}
} // namespace gamemd
// 0x5566D0
namespace gamemd {
unsigned int * LinkedList_flat::Attach(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5566D0)
}
} // namespace gamemd
// 0x556700
namespace gamemd {
LinkClass * * LinkedList_flat::Append(int a2, void *a2_2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x556700)
}
} // namespace gamemd
// 0x556730
namespace gamemd {
int LinkedList_flat::RemoveNode()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x556730)
}
} // namespace gamemd
// 0x623460
namespace gamemd {
int LinkedList_flat::Remove(unsigned int * a2)
{

  int result; // eax
  unsigned int *v3; // edx

  result = *((unsigned int *)this + 13); /*0x623460*/
  v3 = 0; /*0x623463*/
  if ( result ) /*0x623468*/
  {
    while ( a2 != (unsigned int *)result ) /*0x623470*/
    {
      v3 = (unsigned int *)result; /*0x623472*/
      result = *(unsigned int *)result; /*0x623474*/
      if ( !result ) /*0x623478*/
        return result; /*0x623478*/
    }
    if ( v3 ) /*0x623484*/
      *v3 = *(unsigned int *)result; /*0x623489*/
    else
      *((unsigned int *)this + 13) = *(unsigned int *)result; /*0x62349a*/
    __3_YAXPAX_Z((void *)result); /*0x62348b*/
  }
  return result; /*0x62347a*/

}
} // namespace gamemd
// 0x632D10
namespace gamemd {
void LinkedList_flat::RelinkNode(int a2)
{

  int v3; // ecx
  int v4; // eax

  if ( *((unsigned int *)this + 6) != a2 ) /*0x632d1b*/
  {
    if ( a2 ) /*0x632d1f*/
    {
      v3 = *(unsigned int *)(a2 + 8); /*0x632d21*/
      if ( v3 ) /*0x632d26*/
      {
        (*(void (**)(int, unsigned int))(*(unsigned int *)v3 + 12))(v3, 0); /*0x632d2c*/
        *(unsigned int *)(a2 + 8) = 0; /*0x632d2f*/
      }
    }
    v4 = *((unsigned int *)this + 6); /*0x632d36*/
    if ( v4 ) /*0x632d3b*/
      *(unsigned int *)(v4 + 8) = 0; /*0x632d3d*/
    *((unsigned int *)this + 6) = a2; /*0x632d46*/
    if ( a2 ) /*0x632d49*/
      *(unsigned int *)(a2 + 8) = (unsigned int)((unsigned int *)this + 5); /*0x632d4e*/
    *((unsigned int *)this + 7) = (unsigned int)(this); /*0x632d54*/
    *((unsigned int *)this + 1) = (unsigned int)((unsigned int *)this + 5); /*0x632d57*/
  }

}
} // namespace gamemd
// 0x6E5380
namespace gamemd {
int LinkedList_flat::Contains(IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E5380)
}
} // namespace gamemd
// 0x407450
namespace gamemd {
int LinkedList_flat::Init(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{

  int result; // eax

  *(unsigned int *)(&this->Tail)[0] = *(unsigned int *)this->__pad_0; /*0x407455*/
  result = *(unsigned int *)this->__pad_0; /*0x407457*/
  *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4) = (&this->Tail)[0]; /*0x40745c*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(this); /*0x40745f*/
  (&this->Tail)[0] = (int)this; /*0x407461*/
  return result; /*0x407464*/

}
} // namespace gamemd
// 0x407520
namespace gamemd {
int * LinkedList_flat::Next()
{

  int *result; // eax
  int v2; // edx

  result = *(int **)this->__pad_0; /*0x407520*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x407520*/
  {
    v2 = *result; /*0x407527*/
    *(unsigned int *)this->__pad_0 = v2; /*0x40752c*/
    result += 2; /*0x407529*/
  }
  return result; /*0x407526*/

}
} // namespace gamemd
// 0x40E340
namespace gamemd {
int LinkedList_flat::Prepend(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x40E340)
}
} // namespace gamemd
// 0x473430
namespace gamemd {
int LinkedList_flat::Pop()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x473430)
}
} // namespace gamemd
// 0x556670
namespace gamemd {
unsigned int * LinkedList_flat::FindNext()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x556670)
}
} // namespace gamemd
// 0x625AE0
namespace gamemd {
int LinkedList_flat::PushFront(int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x625AE0)
}
} // namespace gamemd
