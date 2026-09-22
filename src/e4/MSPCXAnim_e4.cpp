// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSPCXAnim_26_e4.hpp"
#include "e4/classes/MSPCXAnim_42_e4.hpp"

// 0x5CEAB0
char MSPCXAnim::Stub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSPCXAnim::_vt07(_BYTE *this)
{
  return this->__pad_029; /*0x5ceab3*/
}
}

// 0x5D09C0
namespace gamemd {
char MSPCXAnim_42::AllocCopyData_8B(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSPCXAnim_42_::sub_5D09C0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax

  if ( a2 ) /*0x5d09cc*/
  {
    v4 = a3; /*0x5d09d2*/
    this->q00C = 0; /*0x5d09d6*/
    if ( a3 ) /*0x5d09dc*/
    {
      v6 = a3; /*0x5d0a04*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2); /*0x5d09e6*/
      if ( v5 ) /*0x5d09f0*/
        v6 = v5; /*0x5d09f5*/
      else
        v6 = 0; /*0x5d09fd*/
    }
    this->q00C = 1; /*0x5d0a0c*/
    if ( !v6 ) /*0x5d0a10*/
      return 0; /*0x5d0a90*/
    if ( this->MSPCXAnim_42_field_0x4 ) /*0x5d0a12*/
    {
      v7 = this->MSPCXAnim_42_field_0x8; /*0x5d0a19*/
      if ( a2 < v7 ) /*0x5d0a1e*/
        v7 = a2; /*0x5d0a20*/
      v8 = 0; /*0x5d0a22*/
      if ( v7 > 0 ) /*0x5d0a26*/
      {
        do /*0x5d0a3e*/
        {
          v9 = this->MSPCXAnim_42_field_0x4; /*0x5d0a28*/
          ++v8; /*0x5d0a2b*/
          v6[2 * v8 - 2] = *(_DWORD *)(v9 + 8 * v8 - 8); /*0x5d0a32*/
          v6[2 * v8 - 1] = *(_DWORD *)(v9 + 8 * v8 - 4); /*0x5d0a3a*/
        }
        while ( v8 < v7 ); /*0x5d0a3e*/
        v4 = a3; /*0x5d0a40*/
      }
      if ( this->IsAllocated ) /*0x5d0a44*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5d0a4f*/
        this->MSPCXAnim_42_field_0x4 = 0; /*0x5d0a57*/
      }
    }
    this->MSPCXAnim_42_field_0x4 = v6; /*0x5d0a60*/
    this->MSPCXAnim_42_field_0x8 = a2; /*0x5d0a68*/
    this->IsAllocated = v4 == 0; /*0x5d0a6b*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x5d0a74*/
  }
  v10 = this->MSPCXAnim_42_field_0x8; /*0x5d0a77*/
  if ( v10 < this->MSPCXAnim_42_field_0x10 ) /*0x5d0a7f*/
    this->MSPCXAnim_42_field_0x10 = v10; /*0x5d0a81*/
  return 1; /*0x5d0a84*/
}
}
} // namespace gamemd

// 0x5CED70
MSPCXAnim * MSPCXAnim::QueryInterface(char a2)
{
{
    void (__thiscall ***v3)(int, int);
    v3 = (void (__thiscall ***)(int, int))*(this + 9);
    *(void**)this = &vt_MSPCXAnim;
    if ( v3 )
    (**v3)(v3, 1);
    *(void**)this = &vt_MSAnim;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MSPCXAnim *)this;
}
}

// 0x5D05A0
namespace gamemd {
void MSPCXAnim_42::FreeData()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MSPCXAnim_42_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MSPCXAnim_42_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSPCXAnim_42_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5D05D0
namespace gamemd {
unsigned int MSPCXAnim_42::GetCount_8B(int a2)
{
{
    if ( (unsigned char)this->MSPCXAnim_42_field_0xC )
    return (unsigned int)(a2 - this->MSPCXAnim_42_field_0x4) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D0610
namespace gamemd {
void MSPCXAnim_42::FreeData_0()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MSPCXAnim_42_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MSPCXAnim_42_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSPCXAnim_42_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5D0640
namespace gamemd {
unsigned int MSPCXAnim_42::GetCount(int a2)
{
{
    if ( (unsigned char)this->MSPCXAnim_42_field_0xC )
    return (unsigned int)(a2 - this->MSPCXAnim_42_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D0670
namespace gamemd {
void MSPCXAnim_42::FreeData_1()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MSPCXAnim_42_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MSPCXAnim_42_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSPCXAnim_42_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5D06A0
namespace gamemd {
unsigned int MSPCXAnim_42::GetCount_0(int a2)
{
{
    if ( (unsigned char)this->MSPCXAnim_42_field_0xC )
    return (unsigned int)(a2 - this->MSPCXAnim_42_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D06D0
namespace gamemd {
void MSPCXAnim_26::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MSPCXAnim_26_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MSPCXAnim_26_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSPCXAnim_26_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5D0700
namespace gamemd {
unsigned int MSPCXAnim_26::Draw(int a2)
{
{
    if ( (unsigned char)this->MSPCXAnim_26_field_0xC )
    return (unsigned int)(a2 - this->MSPCXAnim_26_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D0720
namespace gamemd {
int MSPCXAnim_26::GetFrame(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5D0730
namespace gamemd {
void MSPCXAnim_26::FreeData()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MSPCXAnim_26_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MSPCXAnim_26_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSPCXAnim_26_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5D0760
namespace gamemd {
unsigned int MSPCXAnim_26::GetCount(int a2)
{
{
    if ( (unsigned char)this->MSPCXAnim_26_field_0xC )
    return (unsigned int)(a2 - this->MSPCXAnim_26_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D0780
namespace gamemd {
int MSPCXAnim_42::GetFrame(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x5D0790
namespace gamemd {
void MSPCXAnim_26::FreeData_0()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MSPCXAnim_26_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MSPCXAnim_26_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSPCXAnim_26_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5D07C0
namespace gamemd {
unsigned int MSPCXAnim_26::GetCount_0(int a2)
{
{
    if ( (unsigned char)this->MSPCXAnim_26_field_0xC )
    return (unsigned int)(a2 - this->MSPCXAnim_26_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D0AA0
namespace gamemd {
int MSPCXAnim_42::FindIndex_Pair(unsigned int * a2)
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
// 0x5D0C60
namespace gamemd {
char MSPCXAnim_42::AllocCopyData_4B(int a2, unsigned int * a3)
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
    if ( this->MSPCXAnim_42_field_0x4 )
    {
    v5 = this->MSPCXAnim_42_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MSPCXAnim_42_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MSPCXAnim_42_field_0x4 = 0;
      }
    }
    this->MSPCXAnim_42_field_0x4 = v4;
    this->MSPCXAnim_42_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->MSPCXAnim_42_field_0x8;
    if ( v7 < this->MSPCXAnim_42_field_0x10 )
    this->MSPCXAnim_42_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5D0D10
namespace gamemd {
int MSPCXAnim_42::FindIndex(unsigned int * a2)
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

// 0x5D0EC0
namespace gamemd {
char MSPCXAnim_42::AllocCopyData_4B_0(int a2, unsigned int * a3)
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
    if ( this->MSPCXAnim_42_field_0x4 )
    {
    v5 = this->MSPCXAnim_42_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MSPCXAnim_42_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MSPCXAnim_42_field_0x4 = 0;
      }
    }
    this->MSPCXAnim_42_field_0x4 = v4;
    this->MSPCXAnim_42_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->MSPCXAnim_42_field_0x8;
    if ( v7 < this->MSPCXAnim_42_field_0x10 )
    this->MSPCXAnim_42_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5D0F70
namespace gamemd {
int MSPCXAnim_42::FindIndex_0(unsigned int * a2)
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

// 0x5D0FA0
namespace gamemd {
char MSPCXAnim_26::AddRef(int a2)
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

// 0x5D0FE0
namespace gamemd {
char MSPCXAnim_26::AllocCopyData_4B(int a2, unsigned int * a3)
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
    if ( this->MSPCXAnim_26_field_0x4 )
      {
    v6 = this->MSPCXAnim_26_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->MSPCXAnim_26_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MSPCXAnim_26_field_0x4 = 0;
        }
      }
    this->MSPCXAnim_26_field_0x4 = v4;
    this->MSPCXAnim_26_field_0x8 = a2;
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

// 0x5D1090
namespace gamemd {
void MSPCXAnim_26::FreeData_1()
{
{
    if ( this->MSPCXAnim_26_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MSPCXAnim_26_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSPCXAnim_26_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5D10C0
namespace gamemd {
int MSPCXAnim_26::FindIndex(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->MSPCXAnim_26_field_0xC )
    return 0;
    v3 = this->MSPCXAnim_26_field_0x8;
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

// 0x5D1100
namespace gamemd {
unsigned int MSPCXAnim_26::GetCount_1(int a2)
{
{
    if ( (unsigned char)this->MSPCXAnim_26_field_0xC )
    return (unsigned int)(a2 - this->MSPCXAnim_26_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D1120
namespace gamemd {
char MSPCXAnim_26::Release(int a2, unsigned int * a3)
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
    if ( this->MSPCXAnim_26_field_0x4 )
    {
    v5 = this->MSPCXAnim_26_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MSPCXAnim_26_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MSPCXAnim_26_field_0x4 = 0;
      }
    }
    this->MSPCXAnim_26_field_0x4 = v4;
    this->MSPCXAnim_26_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->MSPCXAnim_26_field_0x8;
    if ( v7 < this->MSPCXAnim_26_field_0x10 )
    this->MSPCXAnim_26_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5D11D0
namespace gamemd {
int MSPCXAnim_26::Load(unsigned int * a2)
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

// 0x5D1200
namespace gamemd {
char MSPCXAnim_42::AddRef(int a2)
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

// 0x5D1240
namespace gamemd {
char MSPCXAnim_42::Release(int a2, unsigned int * a3)
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
    if ( this->MSPCXAnim_42_field_0x4 )
      {
    v6 = this->MSPCXAnim_42_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->MSPCXAnim_42_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MSPCXAnim_42_field_0x4 = 0;
        }
      }
    this->MSPCXAnim_42_field_0x4 = v4;
    this->MSPCXAnim_42_field_0x8 = a2;
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

// 0x5D12F0
namespace gamemd {
void MSPCXAnim_42::ddtor()
{
{
    if ( this->MSPCXAnim_42_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MSPCXAnim_42_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSPCXAnim_42_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5D1320
namespace gamemd {
int MSPCXAnim_42::Load(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->MSPCXAnim_42_field_0xC )
    return 0;
    v3 = this->MSPCXAnim_42_field_0x8;
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

// 0x5D1360
namespace gamemd {
unsigned int MSPCXAnim_42::Draw(int a2)
{
{
    if ( (unsigned char)this->MSPCXAnim_42_field_0xC )
    return (unsigned int)(a2 - this->MSPCXAnim_42_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5D1380
namespace gamemd {
char MSPCXAnim_26::AllocCopyData_4B_0(int a2, unsigned int * a3)
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
    if ( this->MSPCXAnim_26_field_0x4 )
    {
    v5 = this->MSPCXAnim_26_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MSPCXAnim_26_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MSPCXAnim_26_field_0x4 = 0;
      }
    }
    this->MSPCXAnim_26_field_0x4 = v4;
    this->MSPCXAnim_26_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->MSPCXAnim_26_field_0x8;
    if ( v7 < this->MSPCXAnim_26_field_0x10 )
    this->MSPCXAnim_26_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5D1430
namespace gamemd {
int MSPCXAnim_26::FindIndex_0(unsigned int * a2)
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

// 0x5D15E0
namespace gamemd {
char MSPCXAnim_26::AllocCopyData_4B_1(int a2, unsigned int * a3)
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
    if ( this->MSPCXAnim_26_field_0x4 )
    {
    v5 = this->MSPCXAnim_26_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MSPCXAnim_26_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MSPCXAnim_26_field_0x4 = 0;
      }
    }
    this->MSPCXAnim_26_field_0x4 = v4;
    this->MSPCXAnim_26_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->MSPCXAnim_26_field_0x8;
    if ( v7 < this->MSPCXAnim_26_field_0x10 )
    this->MSPCXAnim_26_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5D1690
namespace gamemd {
int MSPCXAnim_26::FindIndex_1(unsigned int * a2)
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

// 0x5D1710
namespace gamemd {
DynamicVector * MSPCXAnim_42::Constructor_VectorClass_Point2D_(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_Point2D;
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

// 0x5D17B0
namespace gamemd {
DynamicVector * MSPCXAnim_42::Constructor_VectorClass_MSTextEntry___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_MSTextEntry;
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

// 0x5D1850
namespace gamemd {
DynamicVector * MSPCXAnim_42::Constructor_VectorClass_MapSelection___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_MapSelection;
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

// 0x5D18A0
namespace gamemd {
VectorClass * MSPCXAnim_26::Constructor_VectorClass_MapStage___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_MapStage;
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

// 0x5D18F0
namespace gamemd {
DynamicVector * MSPCXAnim_26::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_MapStage;
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

// 0x5D1940
namespace gamemd {
VectorClass * MSPCXAnim_42::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_MSAnimEntry;
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

// 0x5D1990
namespace gamemd {
DynamicVector * MSPCXAnim_26::Constructor_VectorClass_MSAnimEntry___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_MSAnimEntry;
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

// 0x5D1A30
namespace gamemd {
DynamicVector * MSPCXAnim_26::Constructor_VectorClass_MSSfxEntry___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_MSSfxEntry;
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
