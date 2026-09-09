// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x537DD0
unsigned int * PageUserCommandClass::PageUserCommandClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_537DD0(_DWORD *this)
{
  *this = &PageUserCommandClass::`vftable'; /*0x537dd2*/
  return this; /*0x537dd8*/
}
}

// 0x537DE0
char * PageUserCommandClass::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *PageUserCommandClass::_vt01()
{
  return MEMORY[0x827A7C]; /*0x537de5*/
}
}

// 0x537DF0
wchar_t * PageUserCommandClass::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *PageUserCommandClass::_vt02()
{
  return GetStringCSF(MEMORY[0x827A88], 0, g_Str_File_Init_CPP, 7563); /*0x537e06*/
}
}

// 0x537E10
wchar_t * PageUserCommandClass::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *PageUserCommandClass::_vt03()
{
  return GetStringCSF(MEMORY[0x826FEC], 0, g_Str_File_Init_CPP, 7565); /*0x537e26*/
}
}

// 0x537E30
wchar_t * PageUserCommandClass::Read()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *PageUserCommandClass::_vt04()
{
  return GetStringCSF(MEMORY[0x827A98], 0, g_Str_File_Init_CPP, 7567); /*0x537e46*/
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
