// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dial8Class_48_e4.hpp"

// 0x4A7D20
namespace gamemd {
void Dial8Class_48::ClearBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Dial8Class_48_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Dial8Class_48_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Dial8Class_48_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x4A7D50
namespace gamemd {
unsigned int Dial8Class_48::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->Dial8Class_48_field_0xC )
    return (unsigned int)(a2 - this->Dial8Class_48_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4A7D70
namespace gamemd {
int Dial8Class_48::Seek(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x4A7D80
namespace gamemd {
char Dial8Class_48::AddRef(int a2)
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

// 0x4A7DC0
namespace gamemd {
char Dial8Class_48::Release(int a2, unsigned int * a3)
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
    if ( this->Dial8Class_48_field_0x4 )
      {
    v6 = this->Dial8Class_48_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->Dial8Class_48_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Dial8Class_48_field_0x4 = 0;
        }
      }
    this->Dial8Class_48_field_0x4 = v4;
    this->Dial8Class_48_field_0x8 = a2;
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

// 0x4A7E70
namespace gamemd {
void Dial8Class_48::ddtor()
{
{
    if ( this->Dial8Class_48_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->Dial8Class_48_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Dial8Class_48_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x4A7EA0
namespace gamemd {
int Dial8Class_48::Read(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->Dial8Class_48_field_0xC )
    return 0;
    v3 = this->Dial8Class_48_field_0x8;
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

// 0x4A7EE0
namespace gamemd {
unsigned int Dial8Class_48::Write(int a2)
{
{
    if ( (unsigned char)this->Dial8Class_48_field_0xC )
    return (unsigned int)(a2 - this->Dial8Class_48_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4A7F00
namespace gamemd {
char Dial8Class_48::SetCapacity(int a2, unsigned int * a3)
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
    if ( this->Dial8Class_48_field_0x4 )
    {
    v5 = this->Dial8Class_48_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->Dial8Class_48_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Dial8Class_48_field_0x4 = 0;
      }
    }
    this->Dial8Class_48_field_0x4 = v4;
    this->Dial8Class_48_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ClearBuffer();
  }
    v7 = this->Dial8Class_48_field_0x8;
    if ( v7 < this->Dial8Class_48_field_0x10 )
    this->Dial8Class_48_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4A7FB0
namespace gamemd {
int Dial8Class_48::FindItem(unsigned int * a2)
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
// 0x4A8030
namespace gamemd {
VectorClass * Dial8Class_48::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)this->Items;
    *(void**)this = &vt_VectorClass_DiskLaserClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x4A8080
namespace gamemd {
DynamicVector * Dial8Class_48::Constructor_VectorClass_DiskLaserClass___(char a2)
{
{
    void *v3;
    v3 = (void *)this->Items;
    *(void**)this = &vt_VectorClass_DiskLaserClass;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd
