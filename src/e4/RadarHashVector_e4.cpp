// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x658B10
void RadarHashVector::ComputeHashIndex(int a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = a2; /*0x658b12*/
  if ( a2 ) /*0x658b1e*/
  {
    char * v5 = a3; /*0x658b24*/
    this->q00C = 0; /*0x658b28*/
    if ( a3 ) /*0x658b2d*/
    {
      if ( a2 - 1 >= 0 ) /*0x658b67*/
      {
        _DWORD * v9 = a3 + 4; /*0x658b69*/
        int v10 = a2; /*0x658b6c*/
        do /*0x658b79*/
        {
          *(v9 - 1) = 0; /*0x658b6d*/
          *v9 = 0; /*0x658b70*/
          v9[1] = 0; /*0x658b72*/
          v9 += 4; /*0x658b75*/
          --v10; /*0x658b78*/
        }
        while ( v10 ); /*0x658b79*/
      }
    }
    else
    {
      char * v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x658b35*/
      if ( v6 ) /*0x658b3f*/
      {
        if ( a2 - 1 >= 0 ) /*0x658b46*/
        {
          _DWORD * v7 = v6 + 4; /*0x658b48*/
          int v8 = a2; /*0x658b4b*/
          do /*0x658b58*/
          {
            *(v7 - 1) = 0; /*0x658b4c*/
            *v7 = 0; /*0x658b4f*/
            v7[1] = 0; /*0x658b51*/
            v7 += 4; /*0x658b54*/
            --v8; /*0x658b57*/
          }
          while ( v8 ); /*0x658b58*/
        }
        v5 = v6; /*0x658b5a*/
      }
      else
      {
        v5 = 0; /*0x658b5e*/
      }
    }
    this->q00C = 1; /*0x658b7d*/
    if ( !v5 ) /*0x658b81*/
      return 0; /*0x658c11*/
    if ( this->RadarHashVector_field_0x04 ) /*0x658b87*/
    {
      int v11 = this->RadarHashVector_field_0x08; /*0x658b8c*/
      if ( a2 < v11 ) /*0x658b91*/
        v11 = a2; /*0x658b93*/
      if ( v11 > 0 ) /*0x658b97*/
      {
        int v12 = 0; /*0x658b99*/
        do /*0x658bbf*/
        {
          _DWORD * v13 = (_DWORD *)(this->RadarHashVector_field_0x04 + v12); /*0x658ba0*/
          char * v14 = &v5[v12]; /*0x658ba2*/
          v12 += 16; /*0x658ba5*/
          --v11; /*0x658ba8*/
          *(_DWORD *)v14 = *v13; /*0x658bab*/
          *((_DWORD *)v14 + 1) = v13[1]; /*0x658bb0*/
          *((_DWORD *)v14 + 2) = v13[2]; /*0x658bb6*/
          *((_DWORD *)v14 + 3) = v13[3]; /*0x658bbc*/
        }
        while ( v11 ); /*0x658bbf*/
        v3 = a2; /*0x658bc1*/
      }
      if ( this->IsAllocated ) /*0x658bc7*/
      {
        __3_YAXPAX_Z(this->q004); /*0x658bd0*/
        this->RadarHashVector_field_0x04 = 0; /*0x658bd8*/
      }
    }
    this->RadarHashVector_field_0x04 = v5; /*0x658be3*/
    this->RadarHashVector_field_0x08 = v3; /*0x658be9*/
    this->IsAllocated = a3 == 0; /*0x658bec*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x658bf5*/
  }
  int v15 = this->RadarHashVector_field_0x08; /*0x658bf8*/
  if ( v15 < this->RadarHashVector_field_0x10 ) /*0x658c00*/
    this->RadarHashVector_field_0x10 = v15; /*0x658c02*/
  return 1; /*0x658c05*/
}
}

// 0x658DE0
unsigned int * RadarHashVector::Construct(MapClass * aP1, MapClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v4; // eax
  MapClass *v5; // ecx
  MapClass *v8; // edx
  this->q004 = 0; /*0x658ded*/
  this->q008 = aP1; /*0x658df0*/
  this->q030 = 1; /*0x658df3*/
  this->IsAllocated = 0; /*0x658df7*/
  *this = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658dfa*/
  if ( aP1 ) /*0x658e00*/
  {
    if ( aP2 ) /*0x658e08*/
    {
      if ( (int)&aP1[-1].field_16C0 + 3 >= 0 ) /*0x658e0f*/
      {
        v4 = &aP2->field_4; /*0x658e11*/
        v5 = aP1; /*0x658e14*/
        do /*0x658e21*/
        {
          *(v4 - 1) = 0; /*0x658e15*/
          *v4 = 0; /*0x658e18*/
          v4[1] = 0; /*0x658e1a*/
          v4 += 4; /*0x658e1d*/
          v5 = (MapClass *)((char *)v5 - 1); /*0x658e20*/
        }
        while ( v5 ); /*0x658e21*/
      }
      this->q004 = aP2; /*0x658e23*/
    }
    else
    {
      int v6 = __2_YAPAXI_Z(16 * (_DWORD)aP1); /*0x658e2e*/
      if ( v6 ) /*0x658e38*/
      {
        if ( (int)&aP1[-1].field_16C0 + 3 >= 0 ) /*0x658e3f*/
        {
          _DWORD * v7 = (_DWORD *)(v6 + 4); /*0x658e41*/
          v8 = aP1; /*0x658e44*/
          do /*0x658e51*/
          {
            *(v7 - 1) = 0; /*0x658e45*/
            *v7 = 0; /*0x658e48*/
            v7[1] = 0; /*0x658e4a*/
            v7 += 4; /*0x658e4d*/
            v8 = (MapClass *)((char *)v8 - 1); /*0x658e50*/
          }
          while ( v8 ); /*0x658e51*/
        }
      }
      else
      {
        v6 = 0; /*0x658e55*/
      }
      this->q004 = v6; /*0x658e57*/
      this->IsAllocated = 1; /*0x658e5a*/
    }
  }
  *this = &vt_DynamicVectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658e5e*/
  this->q014 = 10; /*0x658e64*/
  this->q010 = 0; /*0x658e6b*/
  return this; /*0x658e70*/
}
}

// 0x658A70
void RadarHashVector::ddtor()
{
{
    if ( this->RadarHashVector_field_0x04 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->RadarHashVector_field_0x04 = 0;
  }
    this->IsAllocated = 0;
    this->RadarHashVector_field_0x08 = 0;
}
}

// 0x658AA0
int RadarHashVector::Read(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->RadarHashVector_field_0x0C )
    return 0;
    v3 = this->RadarHashVector_field_0x08;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2 || i[1] != *((int*)(a2) + 1) || i[2] != *((int*)(a2) + 2); i += 4 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}

// 0x658AF0
unsigned int RadarHashVector::Write(int a2)
{
{
    if ( (unsigned char)this->RadarHashVector_field_0x0C )
    return (unsigned int)(a2 - this->RadarHashVector_field_0x04) >> 4;
    else
    return 0;
}
}

// 0x658C20
int RadarHashVector::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2 || i[1] != *((int*)(a2) + 1) || i[2] != *((int*)(a2) + 2); i += 4 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}

}
// 0x658C60
char * RadarHashVector::Destructor(char a2)
{
{
    int v3;
    int *v4;
    int v5;
    int v6;
    int *v7;
    int v8;
    void *v9;
    void *v11;
    if ( (a2 & 2) != 0 )
  {
    v3 = *(this - 1);
    v4 = this - 1;
    v5 = 3 * v3;
    v6 = v3 - 1;
    v7 = this + 2 * v5;
    if ( v6 >= 0 )
    {
    v8 = v6 + 1;
    do
      {
    v9 = (void *)*(v7 - 5);
    v7 -= 6;
    *v7 = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass;
    if ( v9 && *((char *)(v7) + 13) )
        {
    __3_YAXPAX_Z(v9);
    v7[1] = 0;
        }
    --v8;
    *((char *)(v7) + 13) = 0;
    v7[2] = 0;
      }
    while ( v8 );
    }
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(v4);
    return (char *)v4;
  }
    else
  {
    v11 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass;
    if ( v11 && *((char *)(this) + 13) )
    {
    __3_YAXPAX_Z(v11);
    *(this + 1) = 0;
    }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (char *)this;
  }
}
}

// 0x658D10
VectorClass * RadarHashVector::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
