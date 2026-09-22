// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSFont_18_e4.hpp"

// 0x5D55A0
namespace gamemd {
char MSFont_18::SetCapacity8(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSFont_18_::sub_5D55A0(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x5d55a2*/
  if ( a2 ) /*0x5d55ae*/
  {
    v5 = a3; /*0x5d55b4*/
    this->q00C = 0; /*0x5d55b8*/
    if ( a3 ) /*0x5d55bd*/
    {
      v9 = a3; /*0x5d55f3*/
      if ( a2 - 1 >= 0 ) /*0x5d55f7*/
      {
        v10 = a2; /*0x5d55f9*/
        do /*0x5d5603*/
        {
          *v9 = 0; /*0x5d55fa*/
          v9[1] = 0; /*0x5d55fc*/
          v9 += 2; /*0x5d55ff*/
          --v10; /*0x5d5602*/
        }
        while ( v10 ); /*0x5d5603*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(8 * a2); /*0x5d55c7*/
      if ( v6 ) /*0x5d55d1*/
      {
        v7 = v6; /*0x5d55d6*/
        if ( a2 - 1 >= 0 ) /*0x5d55da*/
        {
          v8 = a2; /*0x5d55dc*/
          do /*0x5d55e6*/
          {
            *v7 = 0; /*0x5d55dd*/
            v7[1] = 0; /*0x5d55df*/
            v7 += 2; /*0x5d55e2*/
            --v8; /*0x5d55e5*/
          }
          while ( v8 ); /*0x5d55e6*/
        }
        v5 = v6; /*0x5d55e8*/
      }
      else
      {
        v5 = 0; /*0x5d55ec*/
      }
    }
    this->q00C = 1; /*0x5d5607*/
    if ( !v5 ) /*0x5d560b*/
      return 0; /*0x5d5694*/
    if ( this->MSFont_18_field_0x4 ) /*0x5d5611*/
    {
      v11 = this->MSFont_18_field_0x8; /*0x5d5616*/
      if ( a2 < v11 ) /*0x5d561b*/
        v11 = a2; /*0x5d561d*/
      v12 = 0; /*0x5d561f*/
      if ( v11 > 0 ) /*0x5d5623*/
      {
        do /*0x5d5642*/
        {
          v13 = 2 * v12; /*0x5d5628*/
          v14 = (_DWORD *)(this->MSFont_18_field_0x4 + 8 * v12++); /*0x5d5631*/
          v5[v13] = *v14; /*0x5d5638*/
          v5[v13 + 1] = v14[1]; /*0x5d563e*/
        }
        while ( v12 < v11 ); /*0x5d5642*/
        v3 = a2; /*0x5d5644*/
      }
      if ( this->IsAllocated ) /*0x5d564a*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d5653*/
        this->MSFont_18_field_0x4 = 0; /*0x5d565b*/
      }
    }
    this->MSFont_18_field_0x4 = v5; /*0x5d5666*/
    this->MSFont_18_field_0x8 = v3; /*0x5d566c*/
    this->IsAllocated = a3 == 0; /*0x5d566f*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x5d5678*/
  }
  v15 = this->MSFont_18_field_0x8; /*0x5d567b*/
  if ( v15 < this->MSFont_18_field_0x10 ) /*0x5d5683*/
    this->MSFont_18_field_0x10 = v15; /*0x5d5685*/
  return 1; /*0x5d5688*/
}
}
} // namespace gamemd

// 0x5D3450
MSFont * MSFont::QueryInterface(char a2)
{
{
    MSFont::Constructor_MSFont(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MSFont *)this;
}
}

// 0x5D5080
namespace gamemd {
void MSFont_18::ClearBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MSFont_18_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MSFont_18_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSFont_18_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5D50B0
namespace gamemd {
unsigned int MSFont_18::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->MSFont_18_field_0xC )
    return (unsigned int)(a2 - this->MSFont_18_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D50D0
namespace gamemd {
int MSFont_18::GetSize(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5D50E0
namespace gamemd {
void MSFont_18::Destroy()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MSFont_18_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MSFont_18_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSFont_18_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5D5110
namespace gamemd {
unsigned int MSFont_18::PointerToIndex8(int a2)
{
{
    if ( (unsigned char)this->MSFont_18_field_0xC )
    return (unsigned int)(a2 - this->MSFont_18_field_0x4) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D5150
namespace gamemd {
char MSFont_18::AddRef(int a2)
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

// 0x5D5190
namespace gamemd {
char MSFont_18::Release(int a2, unsigned int * a3)
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
    if ( this->MSFont_18_field_0x4 )
      {
    v6 = this->MSFont_18_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->MSFont_18_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MSFont_18_field_0x4 = 0;
        }
      }
    this->MSFont_18_field_0x4 = v4;
    this->MSFont_18_field_0x8 = a2;
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
    this->ClearBuffer();
    return 1;
  }
}
}
} // namespace gamemd

// 0x5D5240
namespace gamemd {
void MSFont_18::ddtor()
{
{
    if ( this->MSFont_18_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MSFont_18_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSFont_18_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5D5270
namespace gamemd {
int MSFont_18::Create(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->MSFont_18_field_0xC )
    return 0;
    v3 = this->MSFont_18_field_0x8;
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

// 0x5D52B0
namespace gamemd {
unsigned int MSFont_18::Draw(int a2)
{
{
    if ( (unsigned char)this->MSFont_18_field_0xC )
    return (unsigned int)(a2 - this->MSFont_18_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D52D0
namespace gamemd {
char MSFont_18::SetCapacity(int a2, unsigned int * a3)
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
    if ( this->MSFont_18_field_0x4 )
    {
    v5 = this->MSFont_18_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MSFont_18_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MSFont_18_field_0x4 = 0;
      }
    }
    this->MSFont_18_field_0x4 = v4;
    this->MSFont_18_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ClearBuffer();
  }
    v7 = this->MSFont_18_field_0x8;
    if ( v7 < this->MSFont_18_field_0x10 )
    this->MSFont_18_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5D5380
namespace gamemd {
int MSFont_18::FindItem(unsigned int * a2)
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
// 0x5D56A0
namespace gamemd {
int MSFont_18::FindPair8(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2 || i[1] != *((int*)(a2) + 1); i += 2 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd
}

// 0x5D56E0
namespace gamemd {
VectorClass * MSFont_18::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_HWND;
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

// 0x5D5730
namespace gamemd {
DynamicVector * MSFont_18::Constructor_VectorClass_HWND_____(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_HWND;
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

// 0x5D57D0
namespace gamemd {
DynamicVector * MSFont_18::Constructor_VectorClass_AcceleratorTracker_(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AcceleratorTracker;
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
