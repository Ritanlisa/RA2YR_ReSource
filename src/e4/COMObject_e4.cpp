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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E1A00)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F4240)
}
} // namespace gamemd
// 0x4F43F0
namespace gamemd {
bool COMObject::IsSameType(GScreenClass * aP0)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F43F0)
}
} // namespace gamemd
// 0x55AB40
namespace gamemd {
int COMObject::GetStringValue(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55AB40)
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55ACA0)
}
} // namespace gamemd
// 0x55AD10
namespace gamemd {
int COMObject::GetSpecialValue(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55AD10)
}
} // namespace gamemd
// 0x5F9970
namespace gamemd {
int COMObject::GetSizeMaxWrapper(AbstractClass * aP0, AbstractClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5F9970)
}
} // namespace gamemd
// 0x6C0050
namespace gamemd {
int COMObject::QueryInterface2(const void * a2, unsigned int * a3)
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