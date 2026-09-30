// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TagClass_e4.hpp"

// 0x411310
namespace gamemd {
int StreamClass::WriteBytes(unsigned short a2, char a3, int a4, int a5, int a6)
{

  return (*(int (**)(unsigned int, char *, unsigned int))(**((unsigned int *)this + 5) + 20))(*((unsigned int *)this + 5), &a3, a2); /*0x411328*/

}
} // namespace gamemd
// 0x4114B0
namespace gamemd {
unsigned int StreamClass::ReadAndSeek(MouseClass * aP1, MouseClass * aP2)
{

  int v4; // edi
  unsigned int result; // eax

  v4 = (*(int (**)(unsigned int, MouseClass *, MouseClass *))(**(unsigned int **)((char *)this + 20) + 92))( /*0x4114c9*/
         *((unsigned int *)this + 5),
         aP1,
         aP2);
  (*(void (**)(unsigned int))(**(unsigned int **)((char *)this + 20) + 96))(*((unsigned int *)this + 5)); /*0x4114cd*/
  result = v4 + *((unsigned int *)this + 4); /*0x4114d6*/
  if ( result >= *((unsigned int *)this + 7) ) /*0x4114da*/
    result -= *((unsigned int *)this + 8); /*0x4114dc*/
  return result; /*0x4114df*/

}
} // namespace gamemd
// 0x45AEA0
namespace gamemd {
int StreamClass::Set2(unsigned int * a2)
{

  int v3; // edi
  unsigned int *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x45aea8*/
  {
    v3 = (**(int (***)(unsigned int, void *, unsigned int **))*a2)(*a2, &unk_818858, &a2); /*0x45aebd*/
    if ( v3 >= 0 ) /*0x45aec1*/
    {
      v5 = a2; /*0x45aedf*/
      if ( *this ) /*0x45aedc*/
        (*(void (**)(unsigned int))(*(unsigned int *)*(unsigned int *)this + 32))(*this); /*0x45aeea*/
      *this = v5; /*0x45aeed*/
      return v3; /*0x45aef0*/
    }
    else
    {
      if ( *this ) /*0x45aec3*/
        (*(void (**)(unsigned int))(*(unsigned int *)*(unsigned int *)this + 32))(*this); /*0x45aecc*/
      *(unsigned int *)this = 0; /*0x45aed1*/
      return v3; /*0x45aecf*/
    }
  }
  else
  {
    v6 = (int)(*this);
    if ( *this ) /*0x45aef7*/
    {
      *(unsigned int *)this = 0; /*0x45aefd*/
      (*(void (**)(int))(*(unsigned int *)v6 + 8))(v6); /*0x45af06*/
    }
    return -2147467262; /*0x45af0e*/
  }

}
} // namespace gamemd
// 0x45AF20
namespace gamemd {
int StreamClass::Set(IUnknown * aP1)
{

  int v3; // edi
  IUnknown *v5; // ebx
  int v6; // eax

  if ( aP1->field_0 ) /*0x45af28*/
  {
    v3 = (**(int (***)(int, void *, IUnknown **))aP1->field_0)(aP1->field_0, &unk_819088, &aP1); /*0x45af3d*/
    if ( v3 >= 0 ) /*0x45af41*/
    {
      v5 = aP1; /*0x45af5f*/
      if ( *this ) /*0x45af5c*/
        (*(void (**)(unsigned int))(*(unsigned int *)*(unsigned int *)this + 32))(*this); /*0x45af6a*/
      *this = v5; /*0x45af6d*/
      return v3; /*0x45af70*/
    }
    else
    {
      if ( *this ) /*0x45af43*/
        (*(void (**)(unsigned int))(*(unsigned int *)*(unsigned int *)this + 32))(*this); /*0x45af4c*/
      *(unsigned int *)this = 0; /*0x45af51*/
      return v3; /*0x45af4f*/
    }
  }
  else
  {
    v6 = (int)(*this);
    if ( *this ) /*0x45af77*/
    {
      *(unsigned int *)this = 0; /*0x45af7d*/
      (*(void (**)(int))(*(unsigned int *)v6 + 8))(v6); /*0x45af86*/
    }
    return -2147467262; /*0x45af8e*/
  }

}
} // namespace gamemd
// 0x4B4C30
namespace gamemd {
BOOL StreamClass::IsInactive(IUnknown * aP0)
{

  return aP0->__pad_10[1] == 0; /*0x4b4c3e*/

}
} // namespace gamemd
// 0x4B4C50
namespace gamemd {
int StreamClass::Vt32Thunk(int a1)
{

  return (*(int (**)(int))(*(unsigned int *)a1 + 128))(a1); /*0x4b4c5d*/

}
} // namespace gamemd
// 0x55A710
namespace gamemd {
int StreamClass::ResetPosition(LocomotionClass * aP0, int a2)
{

  aP0->Owner = (unsigned int)((void *)a2);
  *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[4] = a2; /*0x55a71b*/
  return 0; /*0x55a720*/

}
} // namespace gamemd
// 0x55A8F0
namespace gamemd {
int StreamClass::SetDirty(unsigned char * a1)
{

  a1[12] = 1; /*0x55a8f5*/
  return (*(int (**)(unsigned char *))(*(unsigned int *)a1 + 96))(a1); /*0x55a8fe*/

}
} // namespace gamemd
// 0x55A910
namespace gamemd {
int StreamClass::ClearDirty(unsigned char * a1)
{

  a1[12] = 0; /*0x55a915*/
  return (*(int (**)(unsigned char *))(*(unsigned int *)a1 + 96))(a1); /*0x55a91e*/

}
} // namespace gamemd
// 0x55A930
namespace gamemd {
char StreamClass::GetDirty(int a1)
{

  return *(unsigned char *)(a1 + 12); /*0x55a937*/

}
} // namespace gamemd