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

// 0x537E50
char PageUserCommandClass::Do(int a1)
{
{
    char result;
    if ( g_GameMode_Current[0] == 4 )
    return UI_Add();
    return result;
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
