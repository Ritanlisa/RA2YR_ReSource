// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x427290
char * AnimFile::Stub()
{
{
    return this + 1292;
}
}

// 0x4272A0
AnimFile * AnimFile::QueryInterface(char a2)
{
{
    char v3;
    void (__thiscall ***v4)(int, int);
    v3 = *((char *)(this) + 137);
    *(int *)this = &vt_AnimFile;
    if ( v3 )
  {
    (*(void (__thiscall **)(int))(**((int **)(this) + 33) + 52))(*((int *)(this) + 33));
    *((char *)(this) + 137) = 0;
  }
    v4 = (void (__thiscall ***)(int, int))*((int *)(this) + 899);
    *((int *)(this) + 33) = 0;
    if ( v4 )
  {
    (**v4)(v4, 1);
    *((int *)(this) + 899) = 0;
  }
    if ( *((int *)(this) + 900) )
  {
    __3_YAXPAX_Z(*((void **)(this) + 900));
    *((int *)(this) + 900) = 0;
  }
    *((char *)(this) + 136) = 0;
    *(int *)this = &vt_Animate;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (AnimFile *)this;
}
}
