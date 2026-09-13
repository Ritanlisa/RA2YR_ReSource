// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x537DD0
unsigned int * PageUserCommandClass::PageUserCommandClass()
{
{
    *(void**)this = &vt_PageUserCommandClass;
    return this;
}
}

// 0x537DE0
char * PageUserCommandClass::AddRef()
{
{
    return DataGlobal_827A7C;
}
}

// 0x537DF0
wchar_t * PageUserCommandClass::Release()
{
{
    return GetStringCSF(DataGlobal_827A88, 0, g_Str_File_Init_CPP, 7563);
}
}

// 0x537E10
wchar_t * PageUserCommandClass::ddtor()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 7565);
}
}

// 0x537E30
wchar_t * PageUserCommandClass::Read()
{
{
    return GetStringCSF(DataGlobal_827A98, 0, g_Str_File_Init_CPP, 7567);
}
}

// 0x537E50
char PageUserCommandClass::Do(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall PageUserCommandClass::_vt08(int a1)
{
  char result; // al

  if ( MEMORY[0xA8B238][0] == 4 ) /*0x537e57*/
    return UI_Add(); /*0x537e59*/
  return result; /*0x537e5e*/
}
}
