// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVectorClass_AnimType_e4.hpp"
#include "e4/classes/DynamicVectorClass_PAD_16_e4.hpp"
#include "e4/classes/DynamicVectorClass_PAD_e4.hpp"
#include "e4/classes/DynamicVectorClass_SubzoneConn_e4.hpp"
#include "e4/classes/DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode_e4.hpp"
#include "e4/classes/DynamicVectorClass_cptr_AnimTypeClass_e4.hpp"
#include "e4/classes/DynamicVectorClass_cptr_VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/DynamicVectorClass_ptr_NodeNameType_e4.hpp"
#include "e4/classes/DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x525110
namespace gamemd {
AbstractClass * * DynamicVectorClass_AnimType::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // eax

  if ( a2 ) /*0x52511c*/
  {
    this->IsInitialized = 0; /*0x525126*/
    if ( a3 ) /*0x52512c*/
      AbstractClass *v4 = a3; /*0x525142*/
    AbstractClass *v4 = __2_YAPAXI_Z(4 * a2); /*0x52513e*/
    this->IsInitialized = 1; /*0x525146*/
    if ( v4 ) /*0x52514a*/
    {
      if ( this->Items ) /*0x525155*/
      {
        int v6 = this->Capacity; /*0x52515c*/
        if ( a2 < v6 ) /*0x525161*/
          v6 = a2; /*0x525163*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x525169*/
          ++i; /*0x52516e*/
        if ( this->IsAllocated ) /*0x52517b*/
        {
          __3_YAXPAX_Z(this->Items); /*0x525186*/
          this->Items = 0; /*0x52518e*/
        }
      }
      this->Items = v4; /*0x525197*/
      this->Capacity = a2; /*0x52519f*/
      this->IsAllocated = a3 == 0; /*0x5251a2*/
      return 1; /*0x5251a8*/
    }
    else
    {
      return 0; /*0x52514f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x5251b2*/
    return 1; /*0x5251b8*/
  }
}
}
} // namespace gamemd

// 0x589190
namespace gamemd {
AbstractClass * * DynamicVectorClass_SubzoneConn::Release(int a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = a2; /*0x589192*/
  if ( a2 ) /*0x58919e*/
  {
    AbstractClass *v5 = a3; /*0x5891a4*/
    this->IsInitialized = 0; /*0x5891a8*/
    if ( a3 ) /*0x5891ad*/
    {
      char * v9 = a3; /*0x5891e3*/
      if ( a2 - 1 >= 0 ) /*0x5891e7*/
      {
        int v10 = a2; /*0x5891e9*/
        do /*0x5891f3*/
        {
          *(_DWORD *)v9 = 0; /*0x5891ea*/
          v9[4] = 0; /*0x5891ec*/
          v9 += 8; /*0x5891ef*/
          --v10; /*0x5891f2*/
        }
        while ( v10 ); /*0x5891f3*/
      }
    }
    else
    {
      char * v6 = (char *)__2_YAPAXI_Z(8 * a2); /*0x5891b7*/
      if ( v6 ) /*0x5891c1*/
      {
        AbstractClass *v7 = v6; /*0x5891c6*/
        if ( a2 - 1 >= 0 ) /*0x5891ca*/
        {
          int v8 = a2; /*0x5891cc*/
          do /*0x5891d6*/
          {
            *(_DWORD *)v7 = 0; /*0x5891cd*/
            v7[4] = 0; /*0x5891cf*/
            v7 += 8; /*0x5891d2*/
            --v8; /*0x5891d5*/
          }
          while ( v8 ); /*0x5891d6*/
        }
        v5 = v6; /*0x5891d8*/
      }
      else
      {
        v5 = 0; /*0x5891dc*/
      }
    }
    this->IsInitialized = 1; /*0x5891f7*/
    if ( !v5 ) /*0x5891fb*/
      return 0; /*0x589284*/
    if ( this->Items ) /*0x589201*/
    {
      AbstractClass *v11 = this->Capacity; /*0x589206*/
      if ( a2 < v11 ) /*0x58920b*/
        v11 = a2; /*0x58920d*/
      int v12 = 0; /*0x58920f*/
      if ( v11 > 0 ) /*0x589213*/
      {
        do /*0x589232*/
        {
          int v13 = 8 * v12; /*0x589218*/
          _DWORD * v14 = (_DWORD *)(this->Items + 8 * v12++); /*0x589221*/
          *(_DWORD *)&v5[v13] = *v14; /*0x589228*/
          *(_DWORD *)&v5[v13 + 4] = v14[1]; /*0x58922e*/
        }
        while ( v12 < v11 ); /*0x589232*/
        v3 = a2; /*0x589234*/
      }
      if ( this->IsAllocated ) /*0x58923a*/
      {
        __3_YAXPAX_Z(this->Items); /*0x589243*/
        this->Items = 0; /*0x58924b*/
      }
    }
    this->Items = v5; /*0x589256*/
    this->Capacity = v3; /*0x58925c*/
    this->IsAllocated = a3 == 0; /*0x58925f*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x589268*/
  }
  AbstractClass *v15 = this->Capacity; /*0x58926b*/
  if ( v15 < this->Count ) /*0x589273*/
    this->Count = v15; /*0x589275*/
  return 1; /*0x589278*/
}
}
} // namespace gamemd

// 0x517590
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return *this != *a2 || this->Items != a2[1] || this->Capacity != a2[2]; /*0x5175bd*/
}
}
} // namespace gamemd

// 0x6284A0
namespace gamemd {
AbstractClass * * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::SetCapacity_0(int a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = a2; /*0x6284a2*/
  if ( a2 ) /*0x6284ae*/
  {
    AbstractClass *v5 = a3; /*0x6284b4*/
    this->IsInitialized = 0; /*0x6284b8*/
    if ( a3 ) /*0x6284bd*/
    {
      if ( a2 - 1 >= 0 ) /*0x6284f6*/
      {
        _BYTE * v9 = a3 + 2; /*0x6284f8*/
        int v10 = a2; /*0x6284fb*/
        do /*0x628508*/
        {
          *(v9 - 2) = 0; /*0x6284fc*/
          *(v9 - 1) = 0; /*0x6284ff*/
          *v9 = 0; /*0x628502*/
          v9 += 3; /*0x628504*/
          --v10; /*0x628507*/
        }
        while ( v10 ); /*0x628508*/
      }
    }
    else
    {
      char * v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x6284c4*/
      if ( v6 ) /*0x6284ce*/
      {
        if ( a2 - 1 >= 0 ) /*0x6284d5*/
        {
          _BYTE * v7 = v6 + 2; /*0x6284d7*/
          int v8 = a2; /*0x6284da*/
          do /*0x6284e7*/
          {
            *(v7 - 2) = 0; /*0x6284db*/
            *(v7 - 1) = 0; /*0x6284de*/
            *v7 = 0; /*0x6284e1*/
            v7 += 3; /*0x6284e3*/
            --v8; /*0x6284e6*/
          }
          while ( v8 ); /*0x6284e7*/
        }
        v5 = v6; /*0x6284e9*/
      }
      else
      {
        v5 = 0; /*0x6284ed*/
      }
    }
    this->IsInitialized = 1; /*0x62850c*/
    if ( !v5 ) /*0x628510*/
      return 0; /*0x628592*/
    if ( this->Items ) /*0x628512*/
    {
      AbstractClass *v11 = this->Capacity; /*0x628517*/
      if ( a2 < v11 ) /*0x62851c*/
        v11 = a2; /*0x62851e*/
      if ( v11 > 0 ) /*0x628522*/
      {
        int v12 = 0; /*0x628524*/
        do /*0x628540*/
        {
          int v13 = this->Items + v12; /*0x62852b*/
          char * v14 = &v5[v12]; /*0x62852d*/
          v12 += 3; /*0x628530*/
          --v11; /*0x628533*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x628537*/
          v14[2] = *(_BYTE *)(v13 + 2); /*0x62853d*/
        }
        while ( v11 ); /*0x628540*/
        v3 = a2; /*0x628542*/
      }
      if ( this->IsAllocated ) /*0x628548*/
      {
        __3_YAXPAX_Z(this->Items); /*0x628551*/
        this->Items = 0; /*0x628559*/
      }
    }
    this->Items = v5; /*0x628564*/
    this->Capacity = v3; /*0x62856a*/
    this->IsAllocated = a3 == 0; /*0x62856d*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x628576*/
  }
  AbstractClass *v15 = this->Capacity; /*0x628579*/
  if ( v15 < this->Count ) /*0x628581*/
    this->Count = v15; /*0x628583*/
  return 1; /*0x628586*/
}
}
} // namespace gamemd

// 0x628BB0
namespace gamemd {
AbstractClass * * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Remove(CCINIClass * aP1, unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AbstractClass *v3; // edi
  AbstractClass *v6; // ebx
  AbstractClass *v7; // esi
  CCINIClass *v8; // ebx
  CCINIClass *v9; // eax
  AbstractClass *v11; // edi
  CCINIClass *v15; // [esp+10h] [ebp-8h]
  AbstractClass *v16; // [esp+10h] [ebp-8h]
  CCINIClass *v17; // [esp+14h] [ebp-4h]
  v3 = aP1; /*0x628bb7*/
  if ( aP1 ) /*0x628bbf*/
  {
    _BYTE * v5 = a2; /*0x628bc5*/
    this->IsInitialized = 0; /*0x628bc9*/
    if ( a2 ) /*0x628bcf*/
    {
      if ( (int)&aP1[-1].unknown54 + 3 >= 0 ) /*0x628c25*/
      {
        v8 = aP1; /*0x628c27*/
        do /*0x628c38*/
        {
          Byte::Zero(v5); /*0x628c2c*/
          v5 += 260; /*0x628c31*/
          v8 = (CCINIClass *)((char *)v8 - 1); /*0x628c37*/
        }
        while ( v8 ); /*0x628c38*/
      }
      v16 = (AbstractClass *)a2; /*0x628c3e*/
    }
    else
    {
      v6 = (AbstractClass *)__2_YAPAXI_Z(260 * (_DWORD)aP1); /*0x628be1*/
      if ( v6 ) /*0x628be8*/
      {
        v7 = v6; /*0x628bed*/
        if ( (int)&aP1[-1].unknown54 + 3 >= 0 ) /*0x628bf1*/
        {
          v15 = aP1; /*0x628bf4*/
          do /*0x628c0e*/
          {
            Byte::Zero(v7); /*0x628bfa*/
            v7 = (AbstractClass *)((char *)v7 + 260); /*0x628c03*/
            v15 = (CCINIClass *)((char *)v15 - 1); /*0x628c0a*/
          }
          while ( v15 ); /*0x628c0e*/
        }
        v16 = v6; /*0x628c10*/
      }
      else
      {
        v16 = 0; /*0x628c16*/
      }
    }
    this->IsInitialized = 1; /*0x628c46*/
    if ( !v16 ) /*0x628c4c*/
      return 0; /*0x628cfa*/
    if ( this->Items ) /*0x628c52*/
    {
      v9 = (CCINIClass *)this->Capacity; /*0x628c59*/
      if ( (int)aP1 < (int)v9 ) /*0x628c5e*/
        v9 = aP1; /*0x628c60*/
      if ( (int)v9 > 0 ) /*0x628c64*/
      {
        int v10 = 0; /*0x628c66*/
        v11 = v16; /*0x628c68*/
        v17 = v9; /*0x628c6a*/
        do /*0x628c9c*/
        {
          int v12 = v10 + this->Items; /*0x628c73*/
          String::CopyChecked(v11->__pad_0, (const char *)v12); /*0x628c76*/
          *(_DWORD *)&v11[7].__pad_0[4] = *(_DWORD *)(v12 + 256); /*0x628c85*/
          v10 += 260; /*0x628c8b*/
          v11 = (AbstractClass *)((char *)v11 + 260); /*0x628c91*/
          v17 = (CCINIClass *)((char *)v17 - 1); /*0x628c98*/
        }
        while ( v17 ); /*0x628c9c*/
        v3 = aP1; /*0x628c9e*/
      }
      if ( this->IsAllocated ) /*0x628ca2*/
      {
        __3_YAXPAX_Z(this->Items); /*0x628cad*/
        this->Items = 0; /*0x628cb5*/
      }
    }
    this->Items = v16; /*0x628cc2*/
    this->Capacity = v3; /*0x628cce*/
    this->IsAllocated = a2 == 0; /*0x628cd1*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x628cdb*/
  }
  AbstractClass *v13 = this->Capacity; /*0x628cde*/
  if ( v13 < this->Count ) /*0x628ce6*/
    this->Count = v13; /*0x628ce8*/
  return 1; /*0x628ceb*/
}
}
} // namespace gamemd

// 0x42D540
namespace gamemd {
void DynamicVectorClass_uint::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x42D590
namespace gamemd {
int DynamicVectorClass_uint::Clear(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x42D600
namespace gamemd {
char DynamicVectorClass_uint::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x42D640
namespace gamemd {
char DynamicVectorClass_uint::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
        }
      }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x42D6F0
namespace gamemd {
void DynamicVectorClass_uint::Clear_0()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x42D720
namespace gamemd {
int DynamicVectorClass_uint::FindItemIndex(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x42D760
namespace gamemd {
unsigned int DynamicVectorClass_uint::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x42D780
namespace gamemd {
char DynamicVectorClass_uint::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
      }
    }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x42D880
namespace gamemd {
int DynamicVectorClass_uint::GetSize(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

}
// 0x42DB10
namespace gamemd {
VectorClass * DynamicVectorClass_uint::Destructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_unsigned_int;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x42DB60
namespace gamemd {
DynamicVectorClass_uint * DynamicVectorClass_uint::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_unsigned_int;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVectorClass_uint *)this;
}
}
} // namespace gamemd

// 0x4779E0
unsigned int * DynamicVectorClass::Copy(DynamicVector * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->Items = 0;
    this->Capacity = 0;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_int;
    if ( this != (int *)aP1 )
  {
    VectorClass::Destroy((int)this);
    v3 = aP1->field_8;
    this->Capacity = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->Items = v4;
    if ( v4 )
      {
    v5 = this->Capacity;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->Items + 4 * v6) = *(int *)(*(int *)&aP1->field_1[3] + 4 * v6);
    ++v6;
          }
    while ( v6 < this->Capacity );
        }
      }
    }
    else
    {
    this->Items = 0;
    this->IsAllocated = 0;
    }
  }
    this->Count = aP1->field_10;
    this->CapacityIncrement = *(int *)aP1->__pad_14;
    *(void**)this = &vt_DynamicVectorClass_int;
    return this;
}
}

// 0x477DB0
unsigned int * DynamicVectorClass::Construct(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_int;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    }
    else
    {
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_int;
    this->CapacityIncrement = 10;
    this->Count = 0;
    return this;
}
}

// 0x49E950
namespace gamemd {
void DynamicVectorClass_PAD::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x49E980
namespace gamemd {
unsigned int DynamicVectorClass_PAD::Get(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x49E9A0
namespace gamemd {
int DynamicVectorClass_PAD::Clear(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x49E9B0
namespace gamemd {
void DynamicVectorClass_PAD::Clear_49E9B0()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x49E9E0
namespace gamemd {
unsigned int DynamicVectorClass_PAD::GetCount(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x49EA00
namespace gamemd {
int DynamicVectorClass_PAD_16::Get(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x49EA30
namespace gamemd {
char DynamicVectorClass_PAD::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x49EA70
namespace gamemd {
char DynamicVectorClass_PAD::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
      }
    }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x49EB20
namespace gamemd {
int DynamicVectorClass_PAD::GetSize(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd
}

// 0x49EB50
namespace gamemd {
char DynamicVectorClass_PAD_16::Add(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x49EB90
namespace gamemd {
char DynamicVectorClass_PAD_16::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Items )
      {
    v6 = this->Capacity;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
        }
      }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->Remove();
    return 1;
  }
}
}
} // namespace gamemd

// 0x49EC40
namespace gamemd {
void DynamicVectorClass_PAD_16::Remove()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x49EC70
namespace gamemd {
int DynamicVectorClass_PAD_16::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x49ECB0
namespace gamemd {
unsigned int DynamicVectorClass_PAD_16::GetCapacity(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x49ED30
namespace gamemd {
char DynamicVectorClass_PAD::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
      }
    }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x49EDE0
namespace gamemd {
int DynamicVectorClass_PAD::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x49EE10
namespace gamemd {
DynamicVector * DynamicVectorClass_PAD::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_char;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x49EFF0
namespace gamemd {
VectorClass * DynamicVectorClass_PAD_16::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_DynamicVectorClass_char;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x49F040
namespace gamemd {
DynamicVector * DynamicVectorClass_PAD::Destructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_DynamicVectorClass_char;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x50EA00
void DynamicVectorClass::Destroy()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// 0x525010
namespace gamemd {
VectorClass * DynamicVectorClass_AnimType::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AnimTypeClass_const;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x5251C0
void DynamicVectorClass::Destroy_Alt()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// 0x5251F0
namespace gamemd {
int DynamicVectorClass_AnimType::GetSize(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !this->IsInitialized )
    return 0;
    v3 = this->Capacity;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x525230
namespace gamemd {
unsigned int DynamicVectorClass_AnimType::Remove(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x525250
unsigned int * DynamicVectorClass::AnimTypeConstructor(DynamicVector * aP1, DynamicVector * aP2)
{
{
    this->Items = 0;
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_AnimTypeClass_const;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = aP2;
    }
    else
    {
    this->Items = __2_YAPAXI_Z(4 * (int)aP1);
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_AnimTypeClass_const;
    this->CapacityIncrement = 10;
    this->Count = 0;
    return this;
}
}

// 0x5252B0
namespace gamemd {
DynamicVector * DynamicVectorClass_cptr_AnimTypeClass::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AnimTypeClass_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x588CC0
namespace gamemd {
unsigned int DynamicVectorClass_SubzoneConn::Remove(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5890B0
namespace gamemd {
DynamicVector * DynamicVectorClass_SubzoneConn::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SubzoneConnectionStruct;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x5892D0
namespace gamemd {
int DynamicVectorClass_SubzoneConn::GetSize(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; i += 2 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5AC900
unsigned int * DynamicVectorClass::BuildingTypeConstructor(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_BuildingTypeClass_const;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    }
    else
    {
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_BuildingTypeClass_const;
    this->CapacityIncrement = 10;
    this->Count = 0;
    return this;
}
}

// 0x5C5070
namespace gamemd {
void DynamicVectorClass_ptr_NodeNameType::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x5C50A0
namespace gamemd {
unsigned int DynamicVectorClass_ptr_NodeNameType::Get(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5C50C0
namespace gamemd {
int DynamicVectorClass_ptr_NodeNameType::Clear(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5C5390
namespace gamemd {
char DynamicVectorClass_ptr_NodeNameType::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5C5510
namespace gamemd {
char DynamicVectorClass_ptr_NodeNameType::Remove(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
      }
    }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5C55C0
namespace gamemd {
int DynamicVectorClass_ptr_NodeNameType::GetSize(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
}
    return result;
}
} // namespace gamemd

// 0x5C58F0
namespace gamemd {
DynamicVector * DynamicVectorClass_ptr_NodeNameType::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_NodeNameType;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x6244A0
namespace gamemd {
unsigned int * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor(char a2)
{
{
    this->vfptr = &vt_OwnerDraw_DialogControl;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
}
} // namespace gamemd

// 0x6244C0
namespace gamemd {
unsigned int * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_0(char a2)
{
{
    this->vfptr = &vt_OwnerDraw_DialogControl;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
}
} // namespace gamemd

// 0x627D20
namespace gamemd {
void DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear_627D20()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x627D50
namespace gamemd {
unsigned int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetCount(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x627D80
namespace gamemd {
void DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear_627D80()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x627DB0
namespace gamemd {
unsigned int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 3u;
    else
    return 0;
}
}
} // namespace gamemd

// 0x627DE0
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetItem(int a2, int a3)
{
{
    int v3;
    v3 = this->Items + 3 * a3;
    *(short *)a2 = *(short *)v3;
    *(char *)(a2 + 2) = *(char *)(v3 + 2);
    return a2;
}
}
} // namespace gamemd

// 0x627F90
namespace gamemd {
char DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Items = 0;
      }
    }
    this->Items = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->Clear_627D80();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}
} // namespace gamemd

// 0x628040
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
}
  }
    return result;
}
} // namespace gamemd

// 0x6281F0
namespace gamemd {
char DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::IsEqualTo(int a2)
{
{
    int v3;
    int v4;
    int i;
    v3 = this->Capacity;
    if ( v3 == *(int *)(a2 + 8) )
  {
    v4 = 0;
    if ( v3 <= 0 )
    return 1;
    for ( i = 0;
    !DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare( (char *)(i + this->Items), (char *)(i + *(int *)(a2 + 4)));
    i += 3 ) {
    if ( ++v4 >= this->Capacity )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6285A0
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::ProcessAll(int a2)
{
{
    if ( (int)this->Count > 0 )
    VtableStub::Method_5175D0(this->Items, a2);
    return -1;
}
}
} // namespace gamemd

// 0x628640
namespace gamemd {
DynamicVector * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_1(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ColorScheme;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x628690
namespace gamemd {
char * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Add(char a2)
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
    *v7 = &vt_VectorClass_HashObject_HashString_SchemeNode;
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
    *(void**)this = &vt_VectorClass_HashObject_HashString_SchemeNode;
    if ( v11 && this->IsAllocated )
    {
    __3_YAXPAX_Z(v11);
    *(this + 1) = 0;
    }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (char *)this;
  }
}
}
} // namespace gamemd

// 0x6287B0
namespace gamemd {
DynamicVector * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_2(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_HSVClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    this->IsAllocated = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x628800
namespace gamemd {
void DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x628830
namespace gamemd {
unsigned int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Get(int a2)
{
{
    if ( this->IsInitialized )
    return (a2 - this->Items) / 0x104u;
    else
    return 0;
}
}
} // namespace gamemd

// 0x628860
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear(int a2, int a3)
{
{
    int v3;
    v3 = this->Items + 260 * a3;
    String::Copy((char *)a2, (const char *)v3);
    *(int *)(a2 + 256) = *(int *)(v3 + 256);
    return a2;
}
}
} // namespace gamemd

// 0x6288A0
namespace gamemd {
char DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::AddRef(int a2)
{
{
    int v2;
    v2 = this->Capacity;
    if ( v2 != *(int *)(a2 + 8) )
    return 0;
    if ( v2 > 0 )
    j_Stub_InfiniteLoop();
    return 1;
}
}
} // namespace gamemd

// 0x628D80
namespace gamemd {
int DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetSize(int a2)
{
{
    if ( (int)this->Count > 0 )
    Stub::InfiniteLoop(this->Items, a2);
    return -1;
}
}
} // namespace gamemd

// 0x67C060
namespace gamemd {
DynamicVector * DynamicVectorClass_cptr_VoxelAnimTypeClass::Add(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_VoxelAnimTypeClass_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd
