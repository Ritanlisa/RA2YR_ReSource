// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/COMObject_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CStreamClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/IPersistStream_e4.hpp"

// 0x4E1A00
namespace gamemd {
int COMObject::FindNextActive(unsigned char * a1)
{

  if ( !a1 ) /*0x4e1a02*/
    return 0; /*0x4e1a16*/
  while ( !LOBYTE(a1->Image) ) /*0x4e1a09*/
  {
    a1 = (ShpButtonClass *)(*(int (**)(ShpButtonClass *))(*(unsigned int *)a1->__pad_0 + 4))(a1); /*0x4e1a10*/
    if ( !a1 ) /*0x4e1a14*/
      return 0; /*0x4e1a14*/
  }
  return 1; /*0x4e1a18*/

}
} // namespace gamemd
// 0x4E30C0
namespace gamemd {
int COMObject::Thunk_COMObject_sub_4E30C0()
{

  return 4; /*0x4e30c5*/

}
} // namespace gamemd
// 0x4F4240
namespace gamemd {
int COMObject::QueryInterface(int a1, const void * a2, unsigned int * a3)
{

  if ( !a3 ) /*0x4f4248*/
    return -2147467261; /*0x4f424b*/
  if ( memcmp(a2, &IID_IUnknown, 0x10u) && memcmp(a2, &unk_7EA6E8, 0x10u) ) /*0x4f427a*/
    return -2147467262; /*0x4f427f*/
  *a3 = a1; /*0x4f428c*/
  (*(void (**)(GScreenClass *))(a1->vfptr[0] + 4))(a1); /*0x4f4291*/
  return 0; /*0x4f424a*/

}
} // namespace gamemd
// 0x4F43F0
namespace gamemd {
bool COMObject::IsSameType(GScreenClass * aP0)
{

  return *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 880) == (*(int (**)(GScreenClass *))(aP0->vfptr[0] + 24))(aP0); /*0x4f4408*/

}
} // namespace gamemd
// 0x55AB40
namespace gamemd {
int COMObject::GetStringValue(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x55ab47*/
    return -2147467261; /*0x55ab49*/
  *a2 = (*(int (**)(IUnknown *))(a1->field_0 + 36))(a1) + 4; /*0x55ab5e*/
  a2[1] = 0; /*0x55ab60*/
  return 0; /*0x55ab4e*/

}
} // namespace gamemd
// 0x55ABD0
namespace gamemd {
unsigned int * COMObject::ReturnZeroPos(int a1, unsigned int * a2)
{

  *a2 = 0; /*0x55abd8*/
  a2[1] = 0; /*0x55abda*/
  return a2; /*0x55abdd*/

}
} // namespace gamemd
// 0x55ACA0
namespace gamemd {
unsigned int * COMObject::GetCoord3D(int a1, unsigned int * a2)
{

  FootClass *Owner; // ecx
  int v3; // edx
  int v4; // esi

  Owner = a1->Owner; /*0x55aca6*/
  v3 = Owner->?[1]; /*0x55acb3*/
  v4 = Owner->?[2]; /*0x55acb6*/
  *a2 = Owner->?[0]; /*0x55acbf*/
  a2[1] = v3; /*0x55acc1*/
  a2[2] = v4; /*0x55acc4*/
  return a2; /*0x55acc7*/

}
} // namespace gamemd
// 0x55AD10
namespace gamemd {
int COMObject::GetSpecialValue(int a1)
{

  return (*(int (**)(int))(*(unsigned int *)a1->field_8 + 1336))(a1->field_8); /*0x55ad1f*/

}
} // namespace gamemd
// 0x5F9970
namespace gamemd {
int COMObject::GetSizeMaxWrapper(AbstractClass * aP0, AbstractClass * aP1)
{

  int result; // eax

  result = ObjectClass::GetSizeMax((AbstractClass *)aP0); /*0x5f997a*/
  if (result >= 0, unsigned int a3, unsigned int a2) /*0x5f9981*/
    return 0; /*0x5f9983*/
  return result; /*0x5f9985*/

}
} // namespace gamemd
// 0x6C0050
namespace gamemd {
bool COMObject::QueryInterface2(void * a1, void * a2, void * a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6c0057*/
    return -2147467261; /*0x6c0059*/
  *v4 = 0; /*0x6c0076*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6c0092*/
    *v4 = a2; /*0x6c0096*/
  if ( !*v4 ) /*0x6c0098*/
    return -2147467262; /*0x6c00a0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6c00ac*/
  return 0; /*0x6c005e*/

}
} // namespace gamemd