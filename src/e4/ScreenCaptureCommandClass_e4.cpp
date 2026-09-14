// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x537B40
unsigned int * ScreenCaptureCommandClass::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_537B40(_DWORD *this)
{
  *this = &vt_ScreenCaptureCommandClass; /*0x537b42*/
  return this; /*0x537b48*/
}
}

// 0x537B50
char * ScreenCaptureCommandClass::AddRef()
{
return aScreencapture;
}

// 0x537B60
wchar_t * ScreenCaptureCommandClass::ddtor()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 8071);
}
}

// 0x537B80
wchar_t * ScreenCaptureCommandClass::Release()
{
{
    return GetStringCSF(aTxtScrncap, 0, g_Str_File_Init_CPP, 8072);
}
}

// 0x537BA0
wchar_t * ScreenCaptureCommandClass::Execute()
{
{
    return GetStringCSF(aTxtScrncapDesc, 0, g_Str_File_Init_CPP, 8073);
}
}
