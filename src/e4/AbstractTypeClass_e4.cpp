// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Checksum_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Init_e4.hpp"

// 0x410800
namespace gamemd {
int AbstractTypeClass::Constructor(char *aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x410800)
}
} // namespace gamemd
// 0x4109C0
namespace gamemd {
int AbstractTypeClass::Dtor()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4109C0)
}
} // namespace gamemd
// 0x410A60
namespace gamemd {
int AbstractTypeClass::LoadFromINI(unsigned __int8 ***aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x410A60)
}
} // namespace gamemd
// 0x410C30
namespace gamemd {
AbstractTypeClass * AbstractTypeClass::ddtor(char a2, int aP1, int a3, int a4, int a5, int a6, int a7, int a8, int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x410C30)
}
} // namespace gamemd
// 0x410960
namespace gamemd {
int AbstractTypeClass::Init(int aP1)
{

  char v3; // al

  AbstractClass::InitVtables((unsigned int *)this, aP1); /*0x410968*/
  v3 = this->UINameLabel; /*0x41096d*/
  *(unsigned int *)this = (unsigned int)(&vt_AbstractTypeClass); /*0x410975*/
  this->vtable2 = (unsigned int)(&vt_AbstractTypeClass); /*0x41097b*/
  this->vtable3 = (unsigned int)(&vt_AbstractTypeClass); /*0x410982*/
  this->vtable4 = (unsigned int)(&vt_AbstractTypeClass); /*0x410989*/
  if ( v3 ) /*0x410990*/
    this->UIName = (unsigned int)(GetStringCSF((wchar_t *)((char *)&this->nextArrayIndex1), 0, aDRa2mdpostAbst, 127)); /*0x4109a0*/
  else
    this->UIName = (unsigned int)(&g_TypeClass_DefaultString); /*0x4109a9*/
  return (int)(this); /*0x4109a5*/

}
} // namespace gamemd
// 0x410A40
namespace gamemd {
BOOL AbstractTypeClass::NameEquals(void *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x410A40)
}
} // namespace gamemd
// 0x410B90
namespace gamemd {
char AbstractTypeClass::WriteINI(char *aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x410B90)
}
} // namespace gamemd
// 0x410BE0
namespace gamemd {
int AbstractTypeClass::ProcessPower(int *aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x410BE0)
}
} // namespace gamemd
// 0x410C20
namespace gamemd {
int AbstractTypeClass::StubReturnFalse()
{

  int result; // eax

  return result; /*0x410c20*/

}
} // namespace gamemd
// 0x5F75B0
namespace gamemd {
int AbstractTypeClass::GetData(void *a1)
{

  return 0; /*0x5f75b2*/

}
} // namespace gamemd
// 0x5F7610
namespace gamemd {
int AbstractTypeClass::GetType(int a1)
{

  return 0; /*0x5f7612*/

}
} // namespace gamemd
// 0x5F7620
namespace gamemd {
int AbstractTypeClass::SetType()
{

  return 0; /*0x5f7622*/

}
} // namespace gamemd
// 0x5F7630
namespace gamemd {
int AbstractTypeClass::Validate()
{

  return 0; /*0x5f7632*/

}
} // namespace gamemd
