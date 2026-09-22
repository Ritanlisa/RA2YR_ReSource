// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FilePipe_30_e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"

// 0x478340
namespace gamemd {
AbstractClass * * FilePipe_38::Release(int a2, char * a3)
{
{

  int v3 = a2; /*0x478342*/
  if ( a2 ) /*0x47834e*/
  {
    AbstractClass *v5 = a3; /*0x478354*/
    this->q00C = 0; /*0x478358*/
    if ( a3 ) /*0x47835d*/
    {
      if ( a2 - 1 >= 0 ) /*0x478396*/
      {
        _BYTE * v9 = a3 + 2; /*0x478398*/
        int v10 = a2; /*0x47839b*/
        do /*0x4783a8*/
        {
          *(v9 - 2) = 0; /*0x47839c*/
          *(v9 - 1) = 0; /*0x47839f*/
          *v9 = 0; /*0x4783a2*/
          v9 += 3; /*0x4783a4*/
          --v10; /*0x4783a7*/
        }
        while ( v10 ); /*0x4783a8*/
      }
    }
    else
    {
      char * v6 = (char *)__2_YAPAXI_Z(3 * a2); /*0x478364*/
      if ( v6 ) /*0x47836e*/
      {
        if ( a2 - 1 >= 0 ) /*0x478375*/
        {
          _BYTE * v7 = v6 + 2; /*0x478377*/
          int v8 = a2; /*0x47837a*/
          do /*0x478387*/
          {
            *(v7 - 2) = 0; /*0x47837b*/
            *(v7 - 1) = 0; /*0x47837e*/
            *v7 = 0; /*0x478381*/
            v7 += 3; /*0x478383*/
            --v8; /*0x478386*/
          }
          while ( v8 ); /*0x478387*/
        }
        v5 = v6; /*0x478389*/
      }
      else
      {
        v5 = 0; /*0x47838d*/
      }
    }
    this->q00C = 1; /*0x4783ac*/
    if ( v5 ) /*0x4783b0*/
    {
      if ( this->q001 ) /*0x4783bb*/
      {
        int v12 = this->FilePipe_38_field_0x8; /*0x4783c0*/
        if ( a2 < v12 ) /*0x4783c5*/
          v12 = a2; /*0x4783c7*/
        if ( v12 > 0 ) /*0x4783cb*/
        {
          int v13 = 0; /*0x4783cd*/
          do /*0x4783e9*/
          {
            int v14 = this->q001 + v13; /*0x4783d4*/
            char * v15 = &v5[v13]; /*0x4783d6*/
            v13 += 3; /*0x4783d9*/
            --v12; /*0x4783dc*/
            *(_WORD *)v15 = *(_WORD *)v14; /*0x4783e0*/
            v15[2] = *(_BYTE *)(v14 + 2); /*0x4783e6*/
          }
          while ( v12 ); /*0x4783e9*/
          v3 = a2; /*0x4783eb*/
        }
        if ( this->IsAllocated ) /*0x4783f1*/
        {
          __3_YAXPAX_Z(this->q001); /*0x4783fa*/
          this->q001 = 0; /*0x478402*/
        }
      }
      this->q001 = v5; /*0x47840d*/
      this->FilePipe_38_field_0x8 = v3; /*0x478413*/
      this->IsAllocated = a3 == 0; /*0x478416*/
      return 1; /*0x47841c*/
    }
    else
    {
      return 0; /*0x4783b5*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x478426*/
    return 1; /*0x47842c*/
  }
}
} // namespace gamemd

// 0x4778A0
namespace gamemd {
void FilePipe_30::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->FilePipe_30_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->FilePipe_30_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4778D0
namespace gamemd {
unsigned int FilePipe_30::Write(int a2)
{
{
    if ( (unsigned char)this->FilePipe_30_field_0xC )
    return (unsigned int)(a2 - this->FilePipe_30_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x477960
namespace gamemd {
int FilePipe_38::Seek(int a2, int a3)
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

// 0x477A70
namespace gamemd {
TypeList * FilePipe_30::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TechnoTypeClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}
} // namespace gamemd

// 0x478140
namespace gamemd {
char FilePipe_30::Release(int a2, unsigned int * a3)
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
    if ( this->FilePipe_30_field_0x4 )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->FilePipe_30_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->FilePipe_30_field_0x4 = 0;
      }
    }
    this->FilePipe_30_field_0x4 = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->Capacity;
    if ( v7 < this->FilePipe_30_field_0x10 )
    this->FilePipe_30_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4781F0
namespace gamemd {
int FilePipe_30::Read(unsigned int * a2)
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
// 0x4782E0
namespace gamemd {
char FilePipe_38::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    char *v5;
    char *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int *)(a2 + 4);
    v5 = (char *)this->Items;
    v6 = (char *)(v4 + 2);
    v7 = v4 - (int)v5;
    while ( *v5 == v5[v7] && v5[1] == *(v6 - 1) && v5[2] == *v6 )
    {
    ++v3;
    v6 += 3;
    v5 += 3;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x478440
namespace gamemd {
void FilePipe_38::ddtor()
{
{
    if ( this->Items && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->FilePipe_38_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x478470
namespace gamemd {
int FilePipe_38::Read(unsigned char * a2)
{
{
    int result;
    int v3;
    char *i;
    if ( !(unsigned char)this->FilePipe_38_field_0xC )
    return 0;
    v3 = this->FilePipe_38_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(char **)(this + 4); *i != *a2 || i[1] != *((int*)(a2) + 1) || i[2] != *((int*)(a2) + 2); i += 3 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x4784C0
namespace gamemd {
unsigned int FilePipe_38::Write(int a2)
{
{
    if ( (unsigned char)this->FilePipe_38_field_0xC )
    return (a2 - this->Items) / 3u;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4786D0
namespace gamemd {
VectorClass * FilePipe_38::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_RGBClass;
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

// 0x4B9BE0
namespace gamemd {
void FilePipe_30::Clear()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->FilePipe_30_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->FilePipe_30_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4B9C10
namespace gamemd {
unsigned int FilePipe_30::GetCount(int a2)
{
{
    if ( (unsigned char)this->FilePipe_30_field_0xC )
    return (unsigned int)(a2 - this->FilePipe_30_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4B9C40
namespace gamemd {
void FilePipe_30::Clear_0()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->FilePipe_30_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->FilePipe_30_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x4B9C70
namespace gamemd {
unsigned int FilePipe_30::GetCount_0(int a2)
{
{
    if ( (unsigned char)this->FilePipe_30_field_0xC )
    return (unsigned int)(a2 - this->FilePipe_30_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x4B9E20
namespace gamemd {
char FilePipe_30::SetCapacity(int a2, unsigned int * a3)
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
    if ( this->FilePipe_30_field_0x4 )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->FilePipe_30_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->FilePipe_30_field_0x4 = 0;
      }
    }
    this->FilePipe_30_field_0x4 = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->Capacity;
    if ( v7 < this->FilePipe_30_field_0x10 )
    this->FilePipe_30_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4B9ED0
namespace gamemd {
int FilePipe_30::FindItemIndex(unsigned int * a2)
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

// 0x4BA080
namespace gamemd {
char FilePipe_30::SetCapacity_0(int a2, unsigned int * a3)
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
    if ( this->FilePipe_30_field_0x4 )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->FilePipe_30_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->FilePipe_30_field_0x4 = 0;
      }
    }
    this->FilePipe_30_field_0x4 = v4;
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->Capacity;
    if ( v7 < this->FilePipe_30_field_0x10 )
    this->FilePipe_30_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x4BA130
namespace gamemd {
int FilePipe_30::FindItemIndex_0(unsigned int * a2)
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

// 0x4BA160
namespace gamemd {
DynamicVector * FilePipe_30::Destructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TechnoTypeClass;
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

// 0x4BA200
namespace gamemd {
DynamicVector * FilePipe_30::Destructor_0(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &DataGlobal_7E8500;
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

// 0x4BA2A0
namespace gamemd {
DynamicVector * FilePipe_30::Destructor_1(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_CrossDissolveEffect;
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
