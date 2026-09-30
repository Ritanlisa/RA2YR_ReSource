// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RocketLocomotionClass_17_e4.hpp"
#include "e4/classes/RocketLocomotionClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x661EC0
RocketLocomotionClass::RocketLocomotionClass()
{

  wchar_t *v2; // ecx

  LocomotionClass::Init((unsigned int *)this); /*0x661ec3*/
  *((unsigned int *)this + 6) = dword_B04E38; /*0x661ed1*/
  *((unsigned int *)this + 7) = dword_B04E3C; /*0x661eda*/
  *((unsigned int *)this + 8) = dword_B04E40; /*0x661ee3*/
  *((unsigned int *)this + 9) = g_abs_A8ED84; /*0x661eee*/
  *((unsigned int *)this + 11) = 0; /*0x661ef1*/
  *((unsigned int *)this + 12) = 0; /*0x661ef4*/
  v2 = g_abs_A8ED84; /*0x661ef7*/
  *((unsigned int *)this + 15) = 0; /*0x661efd*/
  *((unsigned int *)this + 13) = v2; /*0x661f00*/
  *((unsigned int *)this + 18) = 0; /*0x661f03*/
  *((unsigned int *)this + 16) = 0; /*0x661f06*/
  *((unsigned int *)this + 19) = 0; /*0x661f09*/
  *((unsigned char *)this + 81) = 0; /*0x661f0c*/
  *((unsigned int *)this + 21) = 0; /*0x661f0f*/
  *((unsigned int *)this + 22) = 0; /*0x661f12*/
  *((unsigned char *)this + 80) = 1; /*0x661f15*/
  *(unsigned int *)this = &RocketLocomotionClass::`vftable'; /*0x661f19*/
  *((unsigned int *)this + 1) = &vt_RocketLocomotionClass; /*0x661f1f*/
  return this; /*0x661f28*/

}
// 0x6633D0
int RocketLocomotionClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6633d6*/
    return -2147467261; /*0x6633d8*/
  *a2 = -1212901530; /*0x6633e6*/
  a2[1] = 299099510; /*0x6633ee*/
  a2[2] = 268491163; /*0x6633f7*/
  a2[3] = -399534261; /*0x663400*/
  return 0; /*0x6633dd*/

}
// 0x663410
int RocketLocomotionClass::BeginMove(int * a1, int * a2)
{

  int result; // eax
  wchar_t *v3; // ecx

  result = SwizzleManager::SaveLoad(a1, a2); /*0x66341b*/
  if ( result >= 0 ) /*0x663422*/
  {
    if ( a1 ) /*0x663426*/
    {
      *a1 = (int)&LocomotionClass::`vftable'; /*0x663428*/
      a1[1] = (int)&vt_LocomotionClass; /*0x66342e*/
      v3 = g_abs_A8ED84; /*0x663435*/
      a1[15] = 0; /*0x66343b*/
      a1[13] = (int)v3; /*0x663442*/
      *a1 = (int)&RocketLocomotionClass::`vftable'; /*0x663445*/
      a1[1] = (int)&vt_RocketLocomotionClass; /*0x66344b*/
    }
  }
  return result; /*0x663452*/

}
// 0x6635B0
int RocketLocomotionClass::StubReturn96()
{

  return 96; /*0x6635b5*/

}
// 0x6635C0
RocketLocomotionClass * RocketLocomotionClass::ProcessMove(unsigned int * Block, char a2)
{

  *Block = &RocketLocomotionClass::`vftable'; /*0x6635c3*/
  *(Block + 1) = &vt_RocketLocomotionClass; /*0x6635c9*/
  LocomotionClass::Construct(Block); /*0x6635d0*/
  if ( (Block & 1) != 0 ) /*0x6635da*/
    RA2_OPDEL(Block); /*0x6635dd*/
  return (RocketLocomotionClass *)Block; /*0x6635e7*/

}
// 0x6647B0
namespace gamemd {
void RocketLocomotionClass_17::ddtor()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x6647b6*/
  *((unsigned int *)this + 4) = 0; /*0x6647b9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x6647c0*/
  {
    RA2_OPDEL(v2); /*0x6647c6*/
    *((unsigned int *)this + 1) = 0; /*0x6647ce*/
  }
  *((unsigned char *)this + 13) = 0; /*0x6647d1*/
  *((unsigned int *)this + 2) = 0; /*0x6647d4*/

}
} // namespace gamemd

// 0x6647E0
namespace gamemd {
unsigned int RocketLocomotionClass_17::BeginMove(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x6647e0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x6647f5*/
  else
    return 0; /*0x6647e7*/

}
} // namespace gamemd

// 0x664800
namespace gamemd {
int RocketLocomotionClass_17::UpdateMovement(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x66480a*/

}
} // namespace gamemd

// 0x664810
namespace gamemd {
char RocketLocomotionClass_17::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x664812*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x66481d*/
  {
    v3 = 0; /*0x66481f*/
    if ( v2 <= 0 ) /*0x664823*/
      return 1; /*0x664843*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x664825*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x66482b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x664834*/
    {
      ++v3; /*0x664836*/
      ++v4; /*0x664837*/
      if ( v3 >= v2 ) /*0x66483c*/
        return 1; /*0x66483c*/
    }
  }
  return 0; /*0x66483e*/

}
} // namespace gamemd

// 0x664850
namespace gamemd {
char RocketLocomotionClass_17::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x66485c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x664866*/
    if ( a3 ) /*0x66486c*/
      v4 = a3; /*0x664882*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x66487e*/
    *((unsigned char *)this + 12) = 1; /*0x664886*/
    if ( v4 ) /*0x66488a*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x664895*/
      {
        v6 = *((unsigned int *)this + 2); /*0x66489c*/
        if ( a2 < v6 ) /*0x6648a1*/
          v6 = a2; /*0x6648a3*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x6648a9*/
          ++i; /*0x6648ae*/
        if ( *((unsigned char *)this + 13) ) /*0x6648bb*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x6648c6*/
          *((unsigned int *)this + 1) = 0; /*0x6648ce*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x6648d7*/
      *((unsigned int *)this + 2) = a2; /*0x6648df*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x6648e2*/
      return 1; /*0x6648e8*/
    }
    else
    {
      return 0; /*0x66488f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x6648f2*/
    return 1; /*0x6648f8*/
  }

}
} // namespace gamemd

// 0x664900
namespace gamemd {
void RocketLocomotionClass_17::Destroy()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x66490d*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x664913*/
    *((unsigned int *)this + 1) = 0; /*0x66491b*/
  }
  *((unsigned char *)this + 13) = 0; /*0x66491e*/
  *((unsigned int *)this + 2) = 0; /*0x664921*/

}
} // namespace gamemd

// 0x664930
namespace gamemd {
int RocketLocomotionClass_17::IndexOf(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x664930*/
    return 0; /*0x664938*/
  v3 = *((unsigned int *)this + 2); /*0x66493e*/
  result = 0; /*0x664941*/
  if ( v3 <= 0 ) /*0x664945*/
    return -1; /*0x66495c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x66494b*/
  {
    if ( ++result >= v3 ) /*0x66495a*/
      return -1; /*0x66495a*/
  }
  return result; /*0x66493a*/

}
} // namespace gamemd

// 0x664970
namespace gamemd {
unsigned int RocketLocomotionClass_17::PointerToIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x664970*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x664985*/
  else
    return 0; /*0x664977*/

}
} // namespace gamemd

// 0x664990
namespace gamemd {
char RocketLocomotionClass_17::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x66499c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x6649a2*/
    if ( a3 ) /*0x6649a8*/
      v4 = a3; /*0x6649be*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x6649ba*/
    *((unsigned char *)this + 12) = 1; /*0x6649c2*/
    if ( !v4 ) /*0x6649c6*/
      return 0; /*0x664a3a*/
    if ( *((unsigned int *)this + 1) ) /*0x6649c8*/
    {
      v5 = *((unsigned int *)this + 2); /*0x6649cf*/
      if ( a2 < v5 ) /*0x6649d4*/
        v5 = a2; /*0x6649d6*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x6649dc*/
        ++i; /*0x6649e1*/
      if ( *((unsigned char *)this + 13) ) /*0x6649ee*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x6649f9*/
        *((unsigned int *)this + 1) = 0; /*0x664a01*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x664a0a*/
    *((unsigned int *)this + 2) = a2; /*0x664a12*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x664a15*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x664a1e*/
  }
  v7 = *((unsigned int *)this + 2); /*0x664a21*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x664a29*/
    *((unsigned int *)this + 4) = v7; /*0x664a2b*/
  return 1; /*0x664a2e*/

}
} // namespace gamemd

// 0x664A40
namespace gamemd {
int RocketLocomotionClass_17::Launch(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x664a40*/
  result = 0; /*0x664a43*/
  if ( v2 <= 0 ) /*0x664a48*/
    return -1; /*0x664a5f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x664a4e*/
  {
    if ( ++result >= v2 ) /*0x664a5d*/
      return -1; /*0x664a5d*/
  }
  return result; /*0x664a62*/

}
}
// 0x664A70
namespace gamemd {
void RocketLocomotionClass_17::Constructor(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_OwnerTalkClass_ConnectionListStruct);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x664a80*/
  {
    RA2_OPDEL(v3); /*0x664a88*/
    *(Block + 1) = 0; /*0x664a90*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x664a9b*/
  *(Block + 2) = 0; /*0x664aa1*/
  if ( (a2 & 1) != 0 ) /*0x664aa8*/
    RA2_OPDEL(Block); /*0x664aab*/
  return (VectorClass *)Block; /*0x664ab5*/

}
} // namespace gamemd

// 0x664AC0
namespace gamemd {
DynamicVector * RocketLocomotionClass_17::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 1)));
  *Block = (unsigned int)(&vt_VectorClass_OwnerTalkClass_ConnectionListStruct);
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x664ad0*/
  {
    RA2_OPDEL(v3); /*0x664ad8*/
    *(Block + 1) = 0; /*0x664ae0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x664aeb*/
  *(Block + 2) = 0; /*0x664af1*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x664af8*/
    RA2_OPDEL(Block); /*0x664afb*/
  return (DynamicVector *)Block; /*0x664b05*/

}
} // namespace gamemd
