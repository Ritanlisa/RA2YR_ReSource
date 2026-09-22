// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x691000
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_0(char a2)
{
{
    *(void**)this = &vt_ScoreAnimClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x691020
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_1(char a2)
{
{
    *(void**)this = &vt_ScoreAnimClass;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x6910A0
unsigned int * ScoreAnimClass::Constructor_ScoreFontClass(char a2)
{
{
    void *v3;
    char *v4;
    v3 = (void *)this->u32_C;
    *(void**)this = &vt_ScoreFontClass;
    if ( v3 && (unsigned char)this->q010 == 1 )
  {
    __3_YAXPAX_Z(v3);
    this->u32_C = 0;
    this->q010 = 0;
  }
    if ( !--DataGlobal_B0558C )
  {
    v4 = &DataGlobal_B05594;
    do
    {
    *((int *)v4 - 1) = 0;
    *v4 = 0;
    v4 += 8;
    }
    while ( (int)v4 < (int)((char *)&DataGlobal_B055A8 + 4) );
  }
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
