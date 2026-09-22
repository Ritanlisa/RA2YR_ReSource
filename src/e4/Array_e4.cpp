// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"

// 0x557AC0
namespace gamemd {
int Array::GetClamped(CheckListClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  CheckListClass *v3; // edx
  CheckListClass *v4; // eax
  result = this->q044; /*0x557ac0*/
  if ( result ) /*0x557ac5*/
  {
    v3 = aP1; /*0x557aca*/
    v4 = (CheckListClass *)(result - 1); /*0x557ace*/
    if ( (int)aP1 >= (int)v4 ) /*0x557ad1*/
      v3 = v4; /*0x557ad3*/
    return *(_DWORD *)(this->q038 + 4 * (_DWORD)v3); /*0x557ad8*/
  }
  return result; /*0x557ac7*/
}
}
} // namespace gamemd

// 0x634290
namespace gamemd {
int Array::FindValue(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  VectorClass *i; // ecx

  int v2 = this->q004; /*0x634292*/
  result = -1; /*0x634295*/
  int v4 = 0; /*0x634298*/
  if ( v2 > 0 ) /*0x63429d*/
  {
    for ( i = (VectorClass *)this->q004; **(IUnknown ***)i->vtable0 != aP1; i = (VectorClass *)((char *)i + 4) ) /*0x63429f*/
    {
      if ( ++v4 >= v2 ) /*0x6342b2*/
        return result; /*0x6342b2*/
    }
    return v4; /*0x6342ba*/
  }
  return result; /*0x6342b4*/
}
}
} // namespace gamemd

// 0x63E590
namespace gamemd {
int Array::RemoveAt(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  VectorClass *v2 = this->q010; /*0x63e590*/
  int v3 = a2; /*0x63e593*/
  if ( a2 >= v2 ) /*0x63e599*/
    return 0; /*0x63e5bc*/
  int v4 = v2 - 1; /*0x63e59b*/
  this->q010 = v4; /*0x63e59e*/
  if ( a2 < v4 ) /*0x63e5a1*/
  {
    do /*0x63e5b4*/
    {
      ++v3; /*0x63e5a7*/
      *(_DWORD *)(this->q004 + 4 * v3 - 4) = *(_DWORD *)(this->q004 + 4 * v3); /*0x63e5ab*/
    }
    while ( v3 < this->q010 ); /*0x63e5b4*/
  }
  return 1; /*0x63e5b9*/
}
}
} // namespace gamemd

// 0x65AD40
namespace gamemd {
int Array::Get(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return *(_DWORD *)(this->q0E4 + 4 * a2); /*0x65ad4d*/
}
}
} // namespace gamemd

// 0x65ADF0
namespace gamemd {
int Array::ContainsValue(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown **i; // ecx

  TechnoClass *v2 = this->q0E8; /*0x65adf1*/
  int v3 = 0; /*0x65adf7*/
  if ( v2 <= 0 ) /*0x65adfc*/
    return 0; /*0x65ae1a*/
  for ( i = (IUnknown **)this->q0E4; *i && *i != aP1; ++i ) /*0x65adfe*/
  {
    if ( ++v3 >= v2 ) /*0x65ae18*/
      return 0; /*0x65ae18*/
  }
  return 1; /*0x65ae1a*/
}
}
} // namespace gamemd

// 0x7490D0
namespace gamemd {
int Array::Zero()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = 0; /*0x7490d6*/
  if ( (int)this->q800 > 0 ) /*0x7490da*/
  {
    Array *v2 = this; /*0x7490dd*/
    do /*0x7490f1*/
    {
      *v2 = 0; /*0x7490df*/
      ++result; /*0x7490eb*/
      ++v2; /*0x7490ec*/
    }
    while ( result < this->q800 ); /*0x7490f1*/
  }
  return result; /*0x7490f4*/
}
}
} // namespace gamemd

// 0x749150
namespace gamemd {
void Array::ByteSwap()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  Array *v3; // esi
  signed int v2; // ebx
  if ( this->q201 && (v2 = 0, (int)this->q800 > 0) ) /*0x749169*/
  {
    v3 = this; /*0x74916c*/
    do /*0x749184*/
    {
      *v3 = ntohl(*v3); /*0x749176*/
      ++v2; /*0x74917e*/
      ++v3; /*0x74917f*/
    }
    while ( v2 < (int)this->q800 ); /*0x749184*/
    this->q201 = 0; /*0x749186*/
  }
  else
  {
    this->q201 = 0; /*0x749191*/
  }
}
}
} // namespace gamemd

// 0x763980
namespace gamemd {
int Array::GetElement(CampaignScore * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  if ( (int)aP1 < 0 || (int)aP1 >= this->q038 ) /*0x76398b*/
    return 0; /*0x763999*/
  else
    return this->q02C + 12 * (_DWORD)aP1; /*0x763993*/
}
}
} // namespace gamemd

// 0x7ACD30
namespace gamemd {
int Array::CleanupArrayWOL()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // edi
  int result; // eax

  for ( i = 0; i < *this; ++i ) /*0x7acd39*/
  {
    DeleteAndZero((void **)(this->q008 + 4 * i)); /*0x7acd41*/
    result = *this; /*0x7acd46*/
  }
  *this = 0; /*0x7acd4d*/
  return result; /*0x7acd53*/
}
}
} // namespace gamemd

// 0x7AD790
namespace gamemd {
AbstractClass * * Array::InsertElement(const void * a1, ObjectClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *v8; // edx
  CCINIClass *v9; // esi
  CCINIClass *v12; // edx
  CCINIClass *v13; // esi
  int v4 = (int)aP2; /*0x7ad795*/
  int v5 = *this; /*0x7ad799*/
  if ( (int)aP2 > v5 ) /*0x7ad79e*/
  {
    aP2 = (ObjectClass *)v5; /*0x7ad7a0*/
    v4 = v5; /*0x7ad7a4*/
  }
  int v6 = this->q004; /*0x7ad7a6*/
  if ( v4 >= v6 && v5 >= v6 ) /*0x7ad7b4*/
  {
    int v7 = 2 * v5; /*0x7ad7b6*/
    if ( 2 * v5 < 10 ) /*0x7ad7bc*/
      v7 = 10; /*0x7ad7be*/
    v8 = (CCINIClass *)__2_YAPAXI_Z(268 * v7); /*0x7ad7d7*/
    memset(v8, 0, 4 * ((unsigned int)(268 * v7) >> 2)); /*0x7ad7e2*/
    int v16 = (int)v8; /*0x7ad7ec*/
    v9 = (CCINIClass *)this->q008; /*0x7ad7f2*/
    if ( v9 ) /*0x7ad7f7*/
      qmemcpy(v8, v9, 268 * *this); /*0x7ad80f*/
    __3_YAXPAX_Z((void *)this->q008); /*0x7ad81c*/
    v4 = (int)aP2; /*0x7ad825*/
    this->q008 = v16; /*0x7ad82c*/
    this->q004 = v7; /*0x7ad82f*/
  }
  int v10 = *this; /*0x7ad832*/
  if ( *this >= this->q004 ) /*0x7ad839*/
  {
    int v11 = 2 * v10; /*0x7ad83b*/
    if ( 2 * v10 < 10 ) /*0x7ad841*/
      v11 = 10; /*0x7ad843*/
    v12 = (CCINIClass *)__2_YAPAXI_Z(268 * v11); /*0x7ad85c*/
    memset(v12, 0, 4 * ((unsigned int)(268 * v11) >> 2)); /*0x7ad867*/
    int v17 = (int)v12; /*0x7ad871*/
    v13 = (CCINIClass *)this->q008; /*0x7ad877*/
    if ( v13 ) /*0x7ad87c*/
      qmemcpy(v12, v13, 268 * *this); /*0x7ad894*/
    __3_YAXPAX_Z((void *)this->q008); /*0x7ad8a1*/
    v4 = (int)aP2; /*0x7ad8aa*/
    this->q008 = v17; /*0x7ad8b1*/
    this->q004 = v11; /*0x7ad8b4*/
  }
  if ( v4 < *this ) /*0x7ad8bc*/
    memcpy((void *)(this->q008 + 268 * (v4 + 1)), (const void *)(this->q008 + 268 * v4), 268 * *this - 268 * v4); /*0x7ad8f2*/
  void * v14 = (void *)(this->q008 + 268 * v4); /*0x7ad907*/
  if ( v14 ) /*0x7ad90c*/
    qmemcpy(v14, a1, 0x10Cu); /*0x7ad917*/
  ++*this; /*0x7ad91e*/
  return 1; /*0x7ad91b*/
}
}
} // namespace gamemd

// 0x4068F0
namespace gamemd {
int Array::ForEach(AbstractClass * aP0, int a2, IUnknown * aP2, int (__thiscall *a4)(int) a4)
{
{
    int result;
    IUnknown *v6;
    result = (int)&aP2[-1].__tail_1602E[1];
    if ( (int)&aP2[-1].__tail_1602E[1] >= 0 )
  {
    v6 = aP2;
    do
    {
    result = a4((int)aP0);
    aP0 = (AbstractClass *)((char *)(aP0) + a2);
    v6 = (IUnknown *)((char *)v6 - 1);
    }
    while ( v6 );
  }
    return result;
}
}
} // namespace gamemd

// 0x40AFD0
namespace gamemd {
int Array::ForEachReverse(ObjectClass * aP0, int a2, int a3, int (__thiscall *a4)(int) a4)
{
{
    char *v4;
    int result;
    int v6;
    v4 = &aP0->__pad_0[a3 * a2];
    result = a3 - 1;
    if ( a3 - 1 >= 0 )
  {
    v6 = a3;
    do
    {
    v4 -= a2;
    result = a4((int)v4);
    --v6;
    }
    while ( v6 );
  }
    return result;
}
}
} // namespace gamemd

// 0x49B720
namespace gamemd {
void Array::Cleanup()
{
{
    int i;
    if ( this->Array_field_0x3C )
  {
    for ( i = 0; i < this->Array_field_0x40; ++i )
    {
    if ( *(int *)(this->Array_field_0x3C + 4 * i) )
    __3_YAXPAX_Z(*(void **)(this->Array_field_0x3C + 4 * i));
    }
    __3_YAXPAX_Z(*(void **)(this + 60));
  }
}
}
} // namespace gamemd

// 0x49D070
namespace gamemd {
char Array::GetElementAt(unsigned int * a2, int a3)
{
{
    int v3;
    char result;
    v3 = a3;
    result = 0;
    *a2 = 0;
    if ( a3 == -1 )
    v3 = this->Array_field_0x38;
    if ( v3 < 0 || v3 >= this->Array_field_0x40 )
    v3 = -1;
    if ( (unsigned char)this->Array_field_0x6C )
  {
    if ( v3 != -1 )
    *a2 = *(int *)(this->Array_field_0x3C + 4 * v3);
    if ( *a2 )
    return 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x55B880
namespace gamemd {
void Array::RemoveItemByValue(AbstractClass * aP0, int a2)
{
{
    ParticleSystemClass *v2;
    int v3;
    ParticleSystemClass *v4;
    int v5;
    if ( aP0 )
  {
    if ( (*(int (__thiscall **)(AbstractClass *))(*(int *)aP0->__pad_0 + 44))(aP0) == 44 )
    {
    v2 = *(ParticleSystemClass **)&DataGlobal_89E138[90016];
    v3 = 0;
    if ( *(int *)&DataGlobal_89E138[90016] > 0 )
      {
    v4 = *(ParticleSystemClass **)&DataGlobal_89E138[90004];
    do
        {
    if ( aP0 == *(AbstractClass **)&v4->__pad_0[4 * v3] )
          {
    if ( v3 < (int)v2 )
            {
    v2 = (ParticleSystemClass *)((char *)v2 - 1);
    v5 = v3;
    *(int *)&DataGlobal_89E138[90016] = v2;
    if ( v3 < (int)v2 )
              {
    do
                {
    *(int *)&v4->__pad_0[4 * v5] = *(int *)&v4->__pad_0[4 * v5 + 4];
    v2 = *(ParticleSystemClass **)&DataGlobal_89E138[90016];
    v4 = *(ParticleSystemClass **)&DataGlobal_89E138[90004];
    ++v5;
                }
    while ( v5 < *(int *)&DataGlobal_89E138[90016] );
              }
            }
    --v3;
          }
    ++v3;
        }
    while ( v3 < (int)v2 );
      }
    }
  }
}
}
} // namespace gamemd
