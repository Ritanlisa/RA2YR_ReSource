// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SwizzleManagerClass_19_e4.hpp"

// 0x6CF5A0
namespace gamemd {
int SwizzleManagerClass_19::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = a2; /*0x6cf5a2*/
  if ( a2 ) /*0x6cf5ae*/
  {
    _DWORD * v5 = a3; /*0x6cf5b4*/
    this->q00C = 0; /*0x6cf5b8*/
    if ( a3 ) /*0x6cf5bd*/
    {
      _DWORD * v9 = a3; /*0x6cf5f3*/
      if ( a2 - 1 >= 0 ) /*0x6cf5f7*/
      {
        int v10 = a2; /*0x6cf5f9*/
        do /*0x6cf603*/
        {
          *v9 = 0; /*0x6cf5fa*/
          v9[1] = 0; /*0x6cf5fc*/
          v9 += 2; /*0x6cf5ff*/
          --v10; /*0x6cf602*/
        }
        while ( v10 ); /*0x6cf603*/
      }
    }
    else
    {
      _DWORD * v6 = __2_YAPAXI_Z(8 * a2); /*0x6cf5c7*/
      if ( v6 ) /*0x6cf5d1*/
      {
        _DWORD * v7 = v6; /*0x6cf5d6*/
        if ( a2 - 1 >= 0 ) /*0x6cf5da*/
        {
          int v8 = a2; /*0x6cf5dc*/
          do /*0x6cf5e6*/
          {
            *v7 = 0; /*0x6cf5dd*/
            v7[1] = 0; /*0x6cf5df*/
            v7 += 2; /*0x6cf5e2*/
            --v8; /*0x6cf5e5*/
          }
          while ( v8 ); /*0x6cf5e6*/
        }
        v5 = v6; /*0x6cf5e8*/
      }
      else
      {
        v5 = 0; /*0x6cf5ec*/
      }
    }
    this->q00C = 1; /*0x6cf607*/
    if ( v5 ) /*0x6cf60b*/
    {
      if ( this->SwizzleManagerClass_19_field_0x4 ) /*0x6cf616*/
      {
        int v12 = this->SwizzleManagerClass_19_field_0x8; /*0x6cf61b*/
        if ( a2 < v12 ) /*0x6cf620*/
          v12 = a2; /*0x6cf622*/
        int v13 = 0; /*0x6cf624*/
        if ( v12 > 0 ) /*0x6cf628*/
        {
          do /*0x6cf647*/
          {
            int v14 = 2 * v13; /*0x6cf62d*/
            _DWORD * v15 = (_DWORD *)(this->SwizzleManagerClass_19_field_0x4 + 8 * v13++); /*0x6cf636*/
            v5[v14] = *v15; /*0x6cf63d*/
            v5[v14 + 1] = v15[1]; /*0x6cf643*/
          }
          while ( v13 < v12 ); /*0x6cf647*/
          v3 = a2; /*0x6cf649*/
        }
        if ( this->IsAllocated ) /*0x6cf64f*/
        {
          __3_YAXPAX_Z(this->q004); /*0x6cf658*/
          this->SwizzleManagerClass_19_field_0x4 = 0; /*0x6cf660*/
        }
      }
      this->SwizzleManagerClass_19_field_0x4 = v5; /*0x6cf66b*/
      this->SwizzleManagerClass_19_field_0x8 = v3; /*0x6cf671*/
      this->IsAllocated = a3 == 0; /*0x6cf674*/
      return 1; /*0x6cf67a*/
    }
    else
    {
      return 0; /*0x6cf610*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x6cf684*/
    return 1; /*0x6cf68a*/
  }
}
}
} // namespace gamemd

// 0x6CF720
namespace gamemd {
int SwizzleManagerClass_19::SetCapacity(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = a2; /*0x6cf722*/
  if ( a2 ) /*0x6cf72e*/
  {
    _DWORD * v5 = a3; /*0x6cf734*/
    this->q00C = 0; /*0x6cf738*/
    if ( a3 ) /*0x6cf73d*/
    {
      _DWORD * v9 = a3; /*0x6cf773*/
      if ( a2 - 1 >= 0 ) /*0x6cf777*/
      {
        int v10 = a2; /*0x6cf779*/
        do /*0x6cf783*/
        {
          *v9 = 0; /*0x6cf77a*/
          v9[1] = 0; /*0x6cf77c*/
          v9 += 2; /*0x6cf77f*/
          --v10; /*0x6cf782*/
        }
        while ( v10 ); /*0x6cf783*/
      }
    }
    else
    {
      _DWORD * v6 = __2_YAPAXI_Z(8 * a2); /*0x6cf747*/
      if ( v6 ) /*0x6cf751*/
      {
        _DWORD * v7 = v6; /*0x6cf756*/
        if ( a2 - 1 >= 0 ) /*0x6cf75a*/
        {
          int v8 = a2; /*0x6cf75c*/
          do /*0x6cf766*/
          {
            *v7 = 0; /*0x6cf75d*/
            v7[1] = 0; /*0x6cf75f*/
            v7 += 2; /*0x6cf762*/
            --v8; /*0x6cf765*/
          }
          while ( v8 ); /*0x6cf766*/
        }
        v5 = v6; /*0x6cf768*/
      }
      else
      {
        v5 = 0; /*0x6cf76c*/
      }
    }
    this->q00C = 1; /*0x6cf787*/
    if ( !v5 ) /*0x6cf78b*/
      return 0; /*0x6cf814*/
    if ( this->SwizzleManagerClass_19_field_0x4 ) /*0x6cf791*/
    {
      int v11 = this->SwizzleManagerClass_19_field_0x8; /*0x6cf796*/
      if ( a2 < v11 ) /*0x6cf79b*/
        v11 = a2; /*0x6cf79d*/
      int v12 = 0; /*0x6cf79f*/
      if ( v11 > 0 ) /*0x6cf7a3*/
      {
        do /*0x6cf7c2*/
        {
          int v13 = 2 * v12; /*0x6cf7a8*/
          _DWORD * v14 = (_DWORD *)(this->SwizzleManagerClass_19_field_0x4 + 8 * v12++); /*0x6cf7b1*/
          v5[v13] = *v14; /*0x6cf7b8*/
          v5[v13 + 1] = v14[1]; /*0x6cf7be*/
        }
        while ( v12 < v11 ); /*0x6cf7c2*/
        v3 = a2; /*0x6cf7c4*/
      }
      if ( this->IsAllocated ) /*0x6cf7ca*/
      {
        __3_YAXPAX_Z(this->q004); /*0x6cf7d3*/
        this->SwizzleManagerClass_19_field_0x4 = 0; /*0x6cf7db*/
      }
    }
    this->SwizzleManagerClass_19_field_0x4 = v5; /*0x6cf7e6*/
    this->SwizzleManagerClass_19_field_0x8 = v3; /*0x6cf7ec*/
    this->IsAllocated = a3 == 0; /*0x6cf7ef*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x6cf7f8*/
  }
  int v15 = this->SwizzleManagerClass_19_field_0x8; /*0x6cf7fb*/
  if ( v15 < this->SwizzleManagerClass_19_field_0x10 ) /*0x6cf803*/
    this->SwizzleManagerClass_19_field_0x10 = v15; /*0x6cf805*/
  return 1; /*0x6cf808*/
}
}
} // namespace gamemd

// 0x6CF490
int SwizzleManagerClass::Add(SwizzleManagerClass * aP0, SwizzleManagerClass * aP1, unsigned int * a2)
{
{
    if ( !aP1 || !a2 )
    return -2147467261;
    *a2 = aP1;
    return 0;
}
}

// 0x6CF4B0
int SwizzleManagerClass::AddRef(int a1)
{
return 1;
}

// 0x6CF4C0
int SwizzleManagerClass::Release(int a1)
{
return 1;
}

// 0x6CF4D0
int SwizzleManagerClass::Remove(int a1, int a2, int a3)
{
return -2147467263;
}

// 0x6CF4E0
int SwizzleManagerClass::Lookup(int a1, int a2, int a3, int a4)
{
return -2147467263;
}

// 0x6CF4F0
namespace gamemd {
void SwizzleManagerClass_19::ClearBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->SwizzleManagerClass_19_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->SwizzleManagerClass_19_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->SwizzleManagerClass_19_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x6CF520
namespace gamemd {
unsigned int SwizzleManagerClass_19::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->SwizzleManagerClass_19_field_0xC )
    return (unsigned int)(a2 - this->SwizzleManagerClass_19_field_0x4) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6CF540
namespace gamemd {
unsigned int * SwizzleManagerClass_19::Lookup(unsigned int * a2, int a3)
{
{
    int v3;
    v3 = this->Items;
    *a2 = *(int *)(v3 + 8 * a3);
    *((int*)(a2) + 1) = *(int *)(v3 + 8 * a3 + 4);
    return a2;
}
}
} // namespace gamemd

// 0x6CF560
namespace gamemd {
char SwizzleManagerClass_19::AddRef(int a2)
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
    v4 += 2;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6CF690
namespace gamemd {
void SwizzleManagerClass_19::ddtor()
{
{
    if ( this->SwizzleManagerClass_19_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->SwizzleManagerClass_19_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->SwizzleManagerClass_19_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x6CF6C0
namespace gamemd {
int SwizzleManagerClass_19::Init(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->SwizzleManagerClass_19_field_0xC )
    return 0;
    v3 = this->SwizzleManagerClass_19_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; i += 2 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x6CF700
namespace gamemd {
unsigned int SwizzleManagerClass_19::Add(int a2)
{
{
    if ( (unsigned char)this->SwizzleManagerClass_19_field_0xC )
    return (unsigned int)(a2 - this->SwizzleManagerClass_19_field_0x4) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6CF820
namespace gamemd {
int SwizzleManagerClass_19::FindItem(unsigned int * a2)
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
} // namespace gamemd

}
// 0x6CF850
namespace gamemd {
VectorClass * SwizzleManagerClass_19::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SwizzlePointerClass;
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
} // namespace gamemd

// 0x6CF8A0
namespace gamemd {
DynamicVector * SwizzleManagerClass_19::Constructor_VectorClass_SwizzlePointerClass_(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SwizzlePointerClass;
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
