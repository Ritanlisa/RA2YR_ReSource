// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x664610
bool Process::WaitForExit(DWORD dwMilliseconds, CellStruct * aP2)
{
{
    AnimClass *v3;
    int v5;
    v3 = (AnimClass *)&CONTAINING_RECORD(this, AnimClass, field_4)->__pad_18[8];
    Debug::Log();
    if ( !v3->field_0 )
    return 1;
    if ( WaitForMultipleObjects(1u, (const HANDLE *)v3, 0, dwMilliseconds) != 258 )
  {
    Debug::Log();
    v3->field_0 = 0;
    return 1;
  }
    if ( !(char)aP2 )
    return 0;
    Debug::Log();
    v5 = TerminateProcess((HANDLE)v3->field_0, 0);
    if ( v5 )
  {
    v3->field_0 = 0;
    return v5;
  }
    else
  {
    GetLastError();
    Debug::Log();
    return 0;
  }
}
}
