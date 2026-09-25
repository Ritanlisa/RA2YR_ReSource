// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ScreenCaptureCommandClass_e4.hpp"
#include "e4/classes/ScreenEffect_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x537B40
namespace gamemd {
unsigned int * ScreenCaptureCommandClass::Constructor()
{
  *(void **)this = (void*)&ScreenCaptureCommandClass_vftable; /*0x537b42*/
  return this; /*0x537b48*/
}
} // namespace gamemd
// 0x537B50
namespace gamemd {
char * ScreenCaptureCommandClass::AddRef()
{
  return aScreencapture; /*0x537b55*/
}
} // namespace gamemd
// 0x537B60
namespace gamemd {
wchar_t * ScreenCaptureCommandClass::ddtor()
{
  return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 8071); /*0x537b76*/
}
} // namespace gamemd
// 0x537B80
namespace gamemd {
wchar_t * ScreenCaptureCommandClass::Release()
{
  return GetStringCSF(aTxtScrncap, 0, g_Str_File_Init_CPP, 8072); /*0x537b96*/
}
} // namespace gamemd
// 0x537BA0
namespace gamemd {
wchar_t * ScreenCaptureCommandClass::Execute()
{
  return GetStringCSF(aTxtScrncapDesc, 0, g_Str_File_Init_CPP, 8073); /*0x537bb6*/
}
} // namespace gamemd