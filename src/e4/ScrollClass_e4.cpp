// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/BlowStraw_29_e4.hpp"

// 0x6922E0
int ScrollClass::Scroll(int * a1, MouseClass * aP2)
{
{
    TacticalClass::ProcessView(this);
    return BlowStraw_29::Seek(this, a1, aP2);
}
}

// 0x6938F0
ScrollClass * ScrollClass::Read(char a2)
{
{
    char *v3;
    int v4;
    v3 = this + 21484;
    v4 = 4;
    do
  {
    v3 -= 3988;
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56);
    --v4;
  }
    while ( v4 );
    RadarClass::Destruct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ScrollClass *)this;
}
}
