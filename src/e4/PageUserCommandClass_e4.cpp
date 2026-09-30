// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/PageUserCommandClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"

// 0x537DD0
PageUserCommandClass::PageUserCommandClass()
{

  *this = &vt_PageUserCommandClass; /*0x537dd2*/
  return this; /*0x537dd8*/

}
// 0x537DE0
char * PageUserCommandClass::AddRef()
{

  return (char *)((char *)((char *)(g_abs_827A7C)));

}
// 0x537DF0
wchar_t * PageUserCommandClass::Release()
{

  return GetStringCSF(g_abs_827A88, 0, g_Str_File_Init_CPP, 7563); /*0x537e06*/

}
// 0x537E10
wchar_t * PageUserCommandClass::ddtor()
{

  return GetStringCSF(g_abs_826FEC, 0, g_Str_File_Init_CPP, 7565); /*0x537e26*/

}
// 0x537E30
wchar_t * PageUserCommandClass::Read()
{

  return GetStringCSF(g_abs_827A98, 0, g_Str_File_Init_CPP, 7567); /*0x537e46*/

}
// 0x537E50
char PageUserCommandClass::Do(int a1)
{

  char result; // al

  if ( g_abs_A8B238[0] == 4 ) /*0x537e57*/
    return UI_Add(); /*0x537e59*/
  return result; /*0x537e5e*/

}