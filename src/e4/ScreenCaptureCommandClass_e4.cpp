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
_DWORD * ScreenCaptureCommandClass::Constructor(void *a1, void *a2, void *a3)
{

  *(unsigned int *)this->CommandClass = (unsigned int)(&vt_ScreenCaptureCommandClass); /*0x537b42*/
  return this->CommandClass; /*0x537b48*/

}
} // namespace gamemd
// 0x537B50
namespace gamemd {
char ScreenCaptureCommandClass::AddRef(void *a1)
{

  return aScreencapture; /*0x537b55*/

}
} // namespace gamemd
// 0x537B60
namespace gamemd {
wchar_t * ScreenCaptureCommandClass::ddtor()
{

  return GetStringCSF((wchar_t *)(g_Str_TXT_INTERFACE), 0,(const char *)(g_Str_File_Init_CPP), 8071); /*0x537b76*/

}
} // namespace gamemd
// 0x537B80
namespace gamemd {
wchar_t * ScreenCaptureCommandClass::Release(void *a1)
{

  return GetStringCSF((wchar_t *)(aTxtScrncap), 0,(const char *)(g_Str_File_Init_CPP), 8072); /*0x537b96*/

}
} // namespace gamemd
// 0x537BA0
namespace gamemd {
wchar_t * ScreenCaptureCommandClass::Execute(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7)
{

  return GetStringCSF((wchar_t *)(aTxtScrncapDesc), 0,(const char *)(g_Str_File_Init_CPP), 8073); /*0x537bb6*/

}
} // namespace gamemd