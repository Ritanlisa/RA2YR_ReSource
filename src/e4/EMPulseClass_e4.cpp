// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4C5AC0
EMPulseClass * EMPulseClass::CopyTo(AbstractClass * this, AbstractClass * a2, char a3)
{
{
    int v4;
    AbstractClass *v6;
    *(int *)this->__pad_0 = (unsigned int)vt_EMPulseClass;
    *(int *)&this->__pad_0[4] = (unsigned int)vt_EMPulseClass;
    *(int *)&this->__pad_0[8] = (unsigned int)vt_EMPulseClass;
    *(int *)&this->__pad_0[12] = &vt_EMPulseClass;
    if ( HouseClass_Player.__pad_5568[22252] )
    EMPulseClass::IterateCellsInRadius((int)this);
    LOBYTE(a2) = 1;
    AbstractClass::AnnounceExpiredPointer(this, a2);
    v6 = this;
    v4 = (*(int (__thiscall **)(char *, AbstractClass **))(*(int *)&DataGlobal_89E138.__pad_566C[204] + 16))( &DataGlobal_89E138.__pad_566C[204], &v6);
    if ( v4 != -1 && v4 < *(int *)&DataGlobal_89E138.__pad_566C[220] )
  {
    --*(int *)&DataGlobal_89E138.__pad_566C[220];
    for ( ;
    v4 < *(int *)&DataGlobal_89E138.__pad_566C[220];
    *(int *)(*(int *)&DataGlobal_89E138.__pad_566C[208] + 4 * v4 - 4) = *(int *)(*(int *)&DataGlobal_89E138.__pad_566C[208] + 4 * v4) ) {
    ++v4;
    }
  }
    AbstractClass::DTOR(this);
    if ( (a3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (EMPulseClass *)this;
}
}

// 0x4C5AA0
int EMPulseClass::StubReturn52()
{
return 52;
}

// 0x4C5AB0
int EMPulseClass::StubReturn55()
{
return 55;
}
