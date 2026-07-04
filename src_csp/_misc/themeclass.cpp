#include "themeclass.hpp"

void __fastcall ThemeClass::GetField(int a1)
{
    dword_846614 = a1;
    if ( a1 >= 255 )
    dword_846614 = 255;
}

