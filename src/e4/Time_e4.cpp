// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E24A0
unsigned int Time::GetElapsedMS()
{
{
    DWORD Time;
    unsigned int v1;
    Time = timeGetTime();
    if ( Time > DataGlobal_8B3F14 )
    v1 = 3 * (Time - DataGlobal_8B3F14);
    else
    v1 = 3 * (Time - DataGlobal_8B3F14 - 1);
    return v1 / 0x32;
}
}

// 0x777AC0
int Time::FormatDate()
{
{
    int result;
    struct _SYSTEMTIME SystemTime;
    result = FileTimeToSystemTime(&FileTime, &SystemTime);
    if ( result )
    return sprintf(this, &DataGlobal_849F20, (INIClass *)SystemTime.wMonth);
    return result;
}
}
