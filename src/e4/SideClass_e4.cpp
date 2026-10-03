// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Shroud_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x679A10
namespace gamemd {
int SideClass::LoadAllFromINI(CCINIClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x679A10)
}
}
// 0x6A4550
namespace gamemd {
int SideClass::Construct(CCINIClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4550)
}
}
// 0x6A4710
namespace gamemd {
int SideClass::GetCountry(int * a2)
{

  ((AbstractTypeClass *)((AbstractTypeClass *)this))->ProcessPower(a2); /*0x6a4719*/
  return Power::TimerProcess(*((unsigned int *)this + 42)); /*0x6a472c*/

}
}
// 0x6A4780
namespace gamemd {
int SideClass::SaveLoad_Prefix(unsigned int * a0, AbstractTypeClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4780)
}
}
// 0x6A4930
namespace gamemd {
void * SideClass::Init(void ** Block, char a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6A4930)
}
}
// 0x49D9F0
namespace gamemd {
int SideClass::FindByName(void *a1)
{

  int v3; // ebx
  int v4; // esi

  if ( !_strcmpi((char *)this,(const char *)(g_Str__random_)) ) /*0x49d9fb*/
    return -2; /*0x49da09*/
  if ( !this ) /*0x49da12*/
    return -1; /*0x49da12*/
  v3 = 0; /*0x49da19*/
  if ( dword_A83CA8 <= 0 ) /*0x49da1d*/
    return -1; /*0x49da53*/
  while ( 1 ) /*0x49da25*/
  {
    v4 = *((unsigned int *)dword_A83C9C + v3); /*0x49da25*/
    if ( !_strcmpi((char *)(v4 + 100), (char *)this) || !_strcmpi((char *)(v4 + 36), (char *)this) ) /*0x49da3d*/
      break; /*0x49da3d*/
    if ( ++v3 >= dword_A83CA8 ) /*0x49da51*/
      return -1; /*0x49da51*/
  }
  return v3; /*0x49da07*/

}
} // namespace gamemd

// 0x4E38A0
namespace gamemd {
wchar_t * SideClass::GetName()
{

  if ( this == (SideClass *)-2 ) /*0x4e38a3*/
    return GetStringCSF((wchar_t *)(aSttPlayersider), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 237); /*0x4e38b6*/
  if ( this == (SideClass *)-3 ) /*0x4e38bf*/
    return GetStringCSF((wchar_t *)(aSttPlayersideo), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 239); /*0x4e38d2*/
  if ( !this ) /*0x4e38da*/
    return GetStringCSF((wchar_t *)(aSttPlayersidea), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 241); /*0x4e38ed*/
  if ( this == (SideClass *)1 ) /*0x4e38f6*/
    return GetStringCSF((wchar_t *)(aSttPlayersidek), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 243); /*0x4e3909*/
  if ( this == (SideClass *)2 ) /*0x4e3912*/
    return GetStringCSF((wchar_t *)(aSttPlayersidef), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 245); /*0x4e3925*/
  if ( this == (SideClass *)3 ) /*0x4e392e*/
    return GetStringCSF((wchar_t *)(aSttPlayersideg), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 247); /*0x4e3941*/
  if ( this == (SideClass *)4 ) /*0x4e394a*/
    return GetStringCSF((wchar_t *)(aSttPlayersideb), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 249); /*0x4e395d*/
  if ( this == (SideClass *)5 ) /*0x4e3966*/
    return GetStringCSF((wchar_t *)(aSttPlayersidel), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 251); /*0x4e3979*/
  if ( this == (SideClass *)6 ) /*0x4e3982*/
    return GetStringCSF((wchar_t *)(aSttPlayersidei), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 253); /*0x4e3995*/
  if ( this == (SideClass *)7 ) /*0x4e399e*/
    return GetStringCSF((wchar_t *)(aSttPlayersidec), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 255); /*0x4e39b1*/
  if ( this == (SideClass *)8 ) /*0x4e39ba*/
    return GetStringCSF((wchar_t *)(aSttPlayersider_0), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 257); /*0x4e39cd*/
  if ( this == (SideClass *)9 ) /*0x4e39d6*/
    return GetStringCSF((wchar_t *)(aSttPlayersidey), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 259); /*0x4e39e9*/
  return 0; /*0x4e38bb*/

}
} // namespace gamemd

// 0x6A4740
namespace gamemd {
int SideClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6a4746*/
    return -2147467261; /*0x6a4748*/
  *a2 = -985803918; /*0x6a4756*/
  a2[1] = 298980638; /*0x6a475e*/
  a2[2] = 1610642817; /*0x6a4767*/
  a2[3] = unk_7E991C; /*0x6a4770*/
  return 0; /*0x6a474d*/

}
} // namespace gamemd

// 0x6A48A0
namespace gamemd {
int SideClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax
  int v4; // edx
  int i; // esi

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x6a48b1*/
  if ( result >= 0 ) /*0x6a48b8*/
  {
    v4 = *a1; /*0x6a48c0*/
    aP2 = *((unsigned int *)aP0 + 42); /*0x6a48cd*/
    (*(void (**)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x6a48d1*/
    for ( i = 0; i < aP2; ++i ) /*0x6a48dc*/
      (*(void (**)(int *, int, int, unsigned int))(*a1 + 16))(a1, (int)aP0->houseTypesCount + 4 * i, 4, 0); /*0x6a48ef*/
    return 0; /*0x6a48f9*/
  }
  return result; /*0x6a48fc*/

}
} // namespace gamemd

// 0x6A4910
namespace gamemd {
int SideClass::StubReturn180()
{

  return 180; /*0x6a4915*/

}
} // namespace gamemd

// 0x6A4920
namespace gamemd {
int SideClass::StubReturn28()
{

  return 28; /*0x6a4925*/

}
} // namespace gamemd
