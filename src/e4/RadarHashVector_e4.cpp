// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x658A70
void RadarHashVector::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall RadarHashVector::_vt03(int this)
{
  if ( this->RadarHashVector_field_0x04 && *(_BYTE *)(this + 13) ) /*0x658a7d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x658a83*/
    this->RadarHashVector_field_0x04 = 0; /*0x658a8b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x658a8e*/
  this->RadarHashVector_field_0x08 = 0; /*0x658a91*/
}
}

// 0x658AA0
int RadarHashVector::Read(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RadarHashVector::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->RadarHashVector_field_0x0C ) /*0x658aa0*/
    return 0; /*0x658aae*/
  v3 = this->RadarHashVector_field_0x08; /*0x658ab4*/
  result = 0; /*0x658ab7*/
  if ( v3 <= 0 ) /*0x658abb*/
    return -1; /*0x658ae6*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658ac1*/
  {
    if ( ++result >= v3 ) /*0x658ae4*/
      return -1; /*0x658ae4*/
  }
  return result; /*0x658aab*/
}
}

// 0x658B10
char RadarHashVector::ComputeHashIndex(int a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall RadarHashVector::sub_658B10(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x658b12*/
  if ( a2 ) /*0x658b1e*/
  {
    v5 = a3; /*0x658b24*/
    *((_BYTE *)this + 12) = 0; /*0x658b28*/
    if ( a3 ) /*0x658b2d*/
    {
      if ( a2 - 1 >= 0 ) /*0x658b67*/
      {
        v9 = a3 + 4; /*0x658b69*/
        v10 = a2; /*0x658b6c*/
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
      v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x658b35*/
      if ( v6 ) /*0x658b3f*/
      {
        if ( a2 - 1 >= 0 ) /*0x658b46*/
        {
          v7 = v6 + 4; /*0x658b48*/
          v8 = a2; /*0x658b4b*/
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
    *((_BYTE *)this + 12) = 1; /*0x658b7d*/
    if ( !v5 ) /*0x658b81*/
      return 0; /*0x658c11*/
    if ( this->RadarHashVector_field_0x04 ) /*0x658b87*/
    {
      v11 = this->RadarHashVector_field_0x08; /*0x658b8c*/
      if ( a2 < v11 ) /*0x658b91*/
        v11 = a2; /*0x658b93*/
      if ( v11 > 0 ) /*0x658b97*/
      {
        v12 = 0; /*0x658b99*/
        do /*0x658bbf*/
        {
          v13 = (_DWORD *)(this->RadarHashVector_field_0x04 + v12); /*0x658ba0*/
          v14 = &v5[v12]; /*0x658ba2*/
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
      if ( *((_BYTE *)this + 13) ) /*0x658bc7*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x658bd0*/
        this->RadarHashVector_field_0x04 = 0; /*0x658bd8*/
      }
    }
    this->RadarHashVector_field_0x04 = v5; /*0x658be3*/
    this->RadarHashVector_field_0x08 = v3; /*0x658be9*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x658bec*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x658bf5*/
  }
  v15 = this->RadarHashVector_field_0x08; /*0x658bf8*/
  if ( v15 < this->RadarHashVector_field_0x10 ) /*0x658c00*/
    this->RadarHashVector_field_0x10 = v15; /*0x658c02*/
  return 1; /*0x658c05*/
}
}

// 0x658C20
int RadarHashVector::FindItemIndex(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RadarHashVector::sub_658C20(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x658c20*/
  result = 0; /*0x658c25*/
  if ( v2 <= 0 ) /*0x658c2b*/
    return -1; /*0x658c56*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 ) /*0x658c31*/
  {
    if ( ++result >= v2 ) /*0x658c54*/
      return -1; /*0x658c54*/
  }
  return result; /*0x658c59*/
}
}

// 0x658C60
char * RadarHashVector::Destructor(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall RadarHashVector::Destructor(_DWORD *this, char a2)
{
  int v3; // eax
  _DWORD *v4; // ebp
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x658c6a*/
  {
    v3 = *(this - 1); /*0x658c6c*/
    v4 = this - 1; /*0x658c70*/
    v5 = 3 * v3; /*0x658c73*/
    v6 = v3 - 1; /*0x658c76*/
    v7 = this + 2 * v5; /*0x658c77*/
    if ( v6 >= 0 ) /*0x658c7a*/
    {
      v8 = v6 + 1; /*0x658c7d*/
      do /*0x658caa*/
      {
        v9 = (void *)*(v7 - 5); /*0x658c82*/
        v7 -= 6; /*0x658c85*/
        *v7 = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658c8a*/
        if ( v9 && *((_BYTE *)v7 + 13) ) /*0x658c92*/
        {
          __3_YAXPAX_Z(v9); /*0x658c98*/
          v7[1] = 0; /*0x658ca0*/
        }
        --v8; /*0x658ca3*/
        *((_BYTE *)v7 + 13) = 0; /*0x658ca4*/
        v7[2] = 0; /*0x658ca7*/
      }
      while ( v8 ); /*0x658caa*/
    }
    if ( (a2 & 1) != 0 ) /*0x658cb2*/
      __3_YAXPAX_Z(v4); /*0x658cb5*/
    return (char *)v4; /*0x658cbd*/
  }
  else
  {
    v11 = (void *)*(this + 1); /*0x658cc5*/
    *this = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658ccc*/
    if ( v11 && *((_BYTE *)this + 13) ) /*0x658cd4*/
    {
      __3_YAXPAX_Z(v11); /*0x658cda*/
      *(this + 1) = 0; /*0x658ce2*/
    }
    *((_BYTE *)this + 13) = 0; /*0x658ce9*/
    *(this + 2) = 0; /*0x658cee*/
    if ( (a2 & 1) != 0 ) /*0x658cf1*/
      __3_YAXPAX_Z(this); /*0x658cf4*/
    return (char *)this; /*0x658cfc*/
  }
}
}

// 0x658D10
VectorClass * RadarHashVector::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall RadarHashVector::QueryInterface(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x658d13*/
  *this = &vt_VectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658d16*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x658d20*/
  {
    __3_YAXPAX_Z(v3); /*0x658d28*/
    *(this + 1) = 0; /*0x658d30*/
  }
  *((_BYTE *)this + 13) = 0; /*0x658d3b*/
  *(this + 2) = 0; /*0x658d41*/
  if ( (a2 & 1) != 0 ) /*0x658d48*/
    __3_YAXPAX_Z(this); /*0x658d4b*/
  return (VectorClass *)this; /*0x658d55*/
}
}

// 0x658DE0
unsigned int * RadarHashVector::Construct(MapClass * aP1, MapClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall RadarHashVector::Construct(_DWORD *this, MapClass *aP1, MapClass *aP2)
{
  void **v4; // eax
  MapClass *v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  MapClass *v8; // edx

  *(this + 1) = 0; /*0x658ded*/
  *(this + 2) = aP1; /*0x658df0*/
  *((_BYTE *)this + 12) = 1; /*0x658df3*/
  *((_BYTE *)this + 13) = 0; /*0x658df7*/
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
      *(this + 1) = aP2; /*0x658e23*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * (_DWORD)aP1); /*0x658e2e*/
      if ( v6 ) /*0x658e38*/
      {
        if ( (int)&aP1[-1].field_16C0 + 3 >= 0 ) /*0x658e3f*/
        {
          v7 = (_DWORD *)(v6 + 4); /*0x658e41*/
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
      *(this + 1) = v6; /*0x658e57*/
      *((_BYTE *)this + 13) = 1; /*0x658e5a*/
    }
  }
  *this = &vt_DynamicVectorClass_HashObject_RadarTrackingStruct_TechnoClass; /*0x658e5e*/
  *(this + 5) = 10; /*0x658e64*/
  *(this + 4) = 0; /*0x658e6b*/
  return this; /*0x658e70*/
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
