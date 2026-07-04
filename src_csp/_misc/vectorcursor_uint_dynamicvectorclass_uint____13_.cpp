#include "vectorcursor_uint_dynamicvectorclass_uint____13_.hpp"

void VectorCursor_uint_DynamicVectorClass_uint____13_::_vt05()
{
    dword_A8EF54 = 0;
}

void  VectorCursor_uint_DynamicVectorClass_uint____13_::_vt07(uint32_t *this)
{
    *(this + 3) = 2;
}

void VectorCursor_uint_DynamicVectorClass_uint____13_::_vt08()
{
    dword_A8EF54 = 0;
}

void  VectorCursor_uint_DynamicVectorClass_uint____13_::_vt10(int *this, int a2, int a3)
{
    int v3; // eax
    int v4; // edx
    int v5; // eax
    if ( ((unsigned __int8)CurrentFrame & 1) == 0 )
    v3 = *(this + 1);
    if ( v3 >= 0 )
    if ( v3 <= 0 )
    goto LABEL_7;
    v4 = 1;
    else
    v4 = -1;
    *(this + 1) = v4 - v3;
    LABEL_7:
    v5 = *(this + 2);
    if ( v5 >= 0 )
    if ( v5 > 0 )
    *(this + 2) = 1 - v5;
    else
    *(this + 2) = -1 - v5;
}

