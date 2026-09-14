// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DeleteCommandClass_28_e4.hpp"

// 0x537F10
unsigned int * DeleteCommandClass::Constructor()
{
{
    *(void**)this = &vt_DeleteCommandClass;
    return this;
}
}

// 0x537F90
namespace gamemd {
int DeleteCommandClass_Undo()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
char __stdcall DeleteCommandClass::_vt08(int a1)
{
  return UI_Delete(); /*0x537f95*/
}
}
} // namespace gamemd

// 0x53C4C0
namespace gamemd {
void DeleteCommandClass_28::ClearBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->DeleteCommandClass_28_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->DeleteCommandClass_28_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->DeleteCommandClass_28_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x53C510
namespace gamemd {
int DeleteCommandClass_28::Seek(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x53C520
namespace gamemd {
char DeleteCommandClass_28::AddRef(int a2)
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

// 0x53C560
namespace gamemd {
char DeleteCommandClass_28::Release(int a2, unsigned int * a3)
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
    if ( this->DeleteCommandClass_28_field_0x4 )
      {
    v6 = this->DeleteCommandClass_28_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->DeleteCommandClass_28_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->DeleteCommandClass_28_field_0x4 = 0;
        }
      }
    this->DeleteCommandClass_28_field_0x4 = v4;
    this->DeleteCommandClass_28_field_0x8 = a2;
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

// 0x53C610
namespace gamemd {
void DeleteCommandClass_28::ddtor()
{
{
    if ( this->DeleteCommandClass_28_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->DeleteCommandClass_28_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->DeleteCommandClass_28_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x53C640
namespace gamemd {
int DeleteCommandClass_28::Read(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->DeleteCommandClass_28_field_0xC )
    return 0;
    v3 = this->DeleteCommandClass_28_field_0x8;
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

// 0x53C6A0
namespace gamemd {
char DeleteCommandClass_28::SetCapacity(int a2, unsigned int * a3)
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
    if ( this->DeleteCommandClass_28_field_0x4 )
    {
    v5 = this->DeleteCommandClass_28_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->DeleteCommandClass_28_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->DeleteCommandClass_28_field_0x4 = 0;
      }
    }
    this->DeleteCommandClass_28_field_0x4 = v4;
    this->DeleteCommandClass_28_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ClearBuffer();
  }
    v7 = this->DeleteCommandClass_28_field_0x8;
    if ( v7 < this->DeleteCommandClass_28_field_0x10 )
    this->DeleteCommandClass_28_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x53C750
namespace gamemd {
int DeleteCommandClass_28::FindItem(unsigned int * a2)
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

// 0x53C780
namespace gamemd {
VectorClass * DeleteCommandClass_28::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AnimClass_const;
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

// 0x53C7D0
namespace gamemd {
DynamicVector * DeleteCommandClass_28::Constructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AnimClass_const;
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

// 0x537F20
char * DeleteCommandClass::AddRef()
{
return aDelete;
}

// 0x537F30
wchar_t * DeleteCommandClass::Release()
{
{
    return GetStringCSF(aCmndDelete, 0, g_Str_File_Init_CPP, 6559);
}
}

// 0x537F50
wchar_t * DeleteCommandClass::ddtor()
{
{
    return GetStringCSF(g_Str_TXT_INTERFACE, 0, g_Str_File_Init_CPP, 6561);
}
}

// 0x537F70
wchar_t * DeleteCommandClass::Read()
{
{
    return GetStringCSF(aCmndDeletedesc, 0, g_Str_File_Init_CPP, 6563);
}
}

// 0x53C4F0
namespace gamemd {
unsigned int DeleteCommandClass_28::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->DeleteCommandClass_28_field_0xC )
    return (unsigned int)(a2 - this->DeleteCommandClass_28_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x53C680
namespace gamemd {
unsigned int DeleteCommandClass_28::Write(int a2)
{
{
    if ( (unsigned char)this->DeleteCommandClass_28_field_0xC )
    return (unsigned int)(a2 - this->DeleteCommandClass_28_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd
