// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NeuronClass_25_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x43A350
int NeuronClass::NeuronClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall NeuronClass::NeuronClass(int this)
{
  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x43a353*/
  this->q024 = 0; /*0x43a358*/
  this->q028 = 0; /*0x43a35f*/
  this->q02C = 0; /*0x43a366*/
  this->q030 = g_CurrentFrame; /*0x43a372*/
  *(_DWORD *)this = &NeuronClass::`vftable'; /*0x43a375*/
  this->NeuronClass_field_0x04 = &NeuronClass::`vftable'; /*0x43a37b*/
  this->NeuronClass_field_0x08 = &NeuronClass::`vftable'; /*0x43a382*/
  this->NeuronClass_field_0x0C = &vt_NeuronClass; /*0x43a389*/
  if ( DataGlobal_B0F5E8 < DataGlobal_B0F5E0 /*0x43a3c5*/
    || (DataGlobal_B0F5E5 || !DataGlobal_B0F5E0)
    && DataGlobal_B0F5EC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_B0F5D8 + 8))(
         &DataGlobal_B0F5D8,
         DataGlobal_B0F5E0 + DataGlobal_B0F5EC,
         0) )
  {
    v2 = DataGlobal_B0F5E8++; /*0x43a3d2*/
    *((_DWORD *)DataGlobal_B0F5DC + v2) = this; /*0x43a3e1*/
  }
  if ( g_AnimManager < g_AnimTypePool /*0x43a41b*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v3 = g_AnimManager++; /*0x43a428*/
    *((_DWORD *)g_AnimPoolCount + v3) = this; /*0x43a437*/
  }
  return this; /*0x43a43c*/
}
}

// 0x43A9C0
NeuronClass * NeuronClass::Reset(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
NeuronClass *__thiscall NeuronClass::Reset(_DWORD *this, char a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v6; // [esp+4h] [ebp-4h] BYREF

  *this = &NeuronClass::`vftable'; /*0x43a9cd*/
  this->vtable2 = &NeuronClass::`vftable'; /*0x43a9d3*/
  this->vtable3 = &NeuronClass::`vftable'; /*0x43a9da*/
  this->vtable4 = &vt_NeuronClass; /*0x43a9e1*/
  v6 = this; /*0x43a9ef*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v6); /*0x43a9f3*/
  if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager ) /*0x43aa0e*/
  {
    do /*0x43aa26*/
    {
      ++v3; /*0x43aa16*/
      *((_DWORD *)g_AnimPoolCount + v3 - 1) = *((_DWORD *)g_AnimPoolCount + v3); /*0x43aa1a*/
    }
    while ( v3 < g_AnimManager ); /*0x43aa26*/
  }
  v6 = this; /*0x43aa38*/
  v4 = (*(int (__thiscall **)(int *, _DWORD **))(DataGlobal_B0F5D8 + 16))(&DataGlobal_B0F5D8, &v6); /*0x43aa3c*/
  if ( v4 != -1 && v4 < DataGlobal_B0F5E8 && v4 < --DataGlobal_B0F5E8 ) /*0x43aa57*/
  {
    do /*0x43aa6f*/
    {
      ++v4; /*0x43aa5f*/
      *((_DWORD *)DataGlobal_B0F5DC + v4 - 1) = *((_DWORD *)DataGlobal_B0F5DC + v4); /*0x43aa63*/
    }
    while ( v4 < DataGlobal_B0F5E8 ); /*0x43aa6f*/
  }
  AbstractClass::DTOR(this); /*0x43aa73*/
  if ( (a2 & 1) != 0 ) /*0x43aa7d*/
    __3_YAXPAX_Z(this); /*0x43aa80*/
  return (NeuronClass *)this; /*0x43aa8a*/
}
}

// 0x43AB20
namespace gamemd {
int NeuronClass_25::Update(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x43AB30
namespace gamemd {
char NeuronClass_25::AddRef(int a2)
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

// 0x43AB70
namespace gamemd {
char NeuronClass_25::Release(int a2, unsigned int * a3)
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
    if ( this->NeuronClass_25_field_0x4 )
      {
    v6 = this->NeuronClass_25_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->NeuronClass_25_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->NeuronClass_25_field_0x4 = 0;
        }
      }
    this->NeuronClass_25_field_0x4 = v4;
    this->NeuronClass_25_field_0x8 = a2;
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

// 0x43AC20
namespace gamemd {
void NeuronClass_25::ddtor()
{
{
    if ( this->NeuronClass_25_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->NeuronClass_25_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->NeuronClass_25_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x43AC50
namespace gamemd {
int NeuronClass_25::Activate(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->NeuronClass_25_field_0xC )
    return 0;
    v3 = this->NeuronClass_25_field_0x8;
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

// 0x43AC90
namespace gamemd {
unsigned int NeuronClass_25::Fire(int a2)
{
{
    if ( (unsigned char)this->NeuronClass_25_field_0xC )
    return (unsigned int)(a2 - this->NeuronClass_25_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x43ACB0
namespace gamemd {
VectorClass * NeuronClass_25::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_NeuronClass;
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
