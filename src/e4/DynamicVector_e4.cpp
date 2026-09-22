// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/E4Recv_68C260_e4.hpp"

// 0x5AC430
namespace gamemd {
unsigned int * DynamicVector::Copy(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( this == (_DWORD *)aP1 ) /*0x5ac43a*/
    goto LABEL_8; /*0x5ac43a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x5ac43e*/
  int v3 = aP1->Capacity; /*0x5ac441*/
  this->q008 = v3; /*0x5ac446*/
  if ( !v3 ) /*0x5ac449*/
  {
    this->Items = 0; /*0x5ac496*/
    this->IsAllocated = 0; /*0x5ac49d*/
LABEL_8:
    this->q010 = aP1[1].vtable0; /*0x5ac4a1*/
    this->CapacityIncrement = aP1[1].Items; /*0x5ac4aa*/
    return this; /*0x5ac4ad*/
  }
  int v4 = __2_YAPAXI_Z(4 * v3); /*0x5ac453*/
  this->Items = v4; /*0x5ac45b*/
  if ( !v4 ) /*0x5ac460*/
    goto LABEL_8; /*0x5ac460*/
  int v5 = this->q008; /*0x5ac462*/
  int v6 = 0; /*0x5ac465*/
  this->IsAllocated = 1; /*0x5ac469*/
  if ( v5 <= 0 ) /*0x5ac46d*/
    goto LABEL_8; /*0x5ac46d*/
  do /*0x5ac481*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x5ac478*/
    ++v6; /*0x5ac47e*/
  }
  while ( v6 < this->q008 ); /*0x5ac481*/
  this->q010 = aP1[1].vtable0; /*0x5ac486*/
  this->CapacityIncrement = aP1[1].Items; /*0x5ac48c*/
  return this; /*0x5ac491*/
}
}
} // namespace gamemd

// 0x413A70
namespace gamemd {
char DynamicVector::AddItem(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->DynamicVector_field_0x8;
    if ( this->DynamicVector_field_0x10 >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->DynamicVector_field_0x10;
    v7 = this->Items;
    this->DynamicVector_field_0x10 = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->vtable0;
    return 1;
}
}
} // namespace gamemd

// 0x42F670
namespace gamemd {
unsigned int * DynamicVector::Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2)
{
{
    int v4;
    this->Items = 0;
    this->DynamicVector_field_0x8 = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_Cell;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = aP2;
    }
    else
    {
    v4 = __2_YAPAXI_Z(4 * (int)aP1);
    if ( !v4 )
    v4 = 0;
    this->Items = v4;
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_Cell;
    this->CapacityIncrement = 10;
    this->DynamicVector_field_0x10 = 0;
    return this;
}
}
} // namespace gamemd

// 0x45ADD0
namespace gamemd {
char DynamicVector::RemoveItem(IUnknown * aP1)
{
{
    int v2;
    IUnknown *v3;
    int v4;
    v2 = this->DynamicVector_field_0x10;
    v3 = aP1;
    if ( (int)aP1 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->DynamicVector_field_0x10 = v4;
    if ( (int)aP1 < v4 )
  {
    do
    {
    v3 = (IUnknown *)((char *)(v3) + 1);
    *(int *)(this->Items + 4 * (int)v3 - 4) = *(int *)(this->Items + 4 * (int)v3);
    }
    while ( (int)v3 < this->DynamicVector_field_0x10 );
  }
    return 1;
}
}
} // namespace gamemd

// 0x477EC0
namespace gamemd {
char DynamicVector::Add_Alt(VectorClass * aP1)
{
{
    MapClass *v3;
    int v4;
    int v6;
    VectorClass *v7;
    v3 = (MapClass *)this->DynamicVector_field_0x8;
    if ( this->DynamicVector_field_0x10 >= (int)v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity((char *)(v3) + v4, 0) )
    return 0;
  }
    v6 = this->DynamicVector_field_0x10;
    v7 = (VectorClass *)this->Items;
    this->DynamicVector_field_0x10 = v6 + 1;
    *(int *)&v7->vtable0[4 * v6] = *(int *)aP1->vtable0;
    return 1;
}
}
} // namespace gamemd

// 0x49FAE0
namespace gamemd {
int DynamicVector::GetOrGrow(DynamicVector * aP1)
{
{
    int v3;
    int i;
    v3 = this->DynamicVector_field_0x8;
    if ( (int)aP1 < v3 )
    return *(int *)(this->Items + 4 * (int)aP1);
    if ( this->SetCapacity((char *)&aP1->field_8 + 2, 0) )
  {
    for ( i = v3; i < this->DynamicVector_field_0x8; *(int *)(this->Items + 4 * i - 4) = 0 )
    ++i;
    return *(int *)(this->Items + 4 * (int)aP1);
  }
    return 0;
}
}
} // namespace gamemd

// 0x5253B0
namespace gamemd {
char DynamicVector::Add_Alt4(VectorClass * aP1)
{
{
    MapClass *v3;
    int v4;
    int v6;
    VectorClass *v7;
    v3 = (MapClass *)this->DynamicVector_field_0x8;
    if ( this->DynamicVector_field_0x10 >= (int)v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity((char *)(v3) + v4, 0) )
    return 0;
  }
    v6 = this->DynamicVector_field_0x10;
    v7 = (VectorClass *)this->Items;
    this->DynamicVector_field_0x10 = v6 + 1;
    *(int *)&v7->vtable0[4 * v6] = *(int *)aP1->vtable0;
    return 1;
}
}
} // namespace gamemd

// 0x538780
namespace gamemd {
char DynamicVector::Add_Alt2(DynamicVector * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->DynamicVector_field_0x8;
    if ( this->DynamicVector_field_0x10 >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->DynamicVector_field_0x10;
    v7 = this->Items;
    this->DynamicVector_field_0x10 = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->__pad_0;
    return 1;
}
}
} // namespace gamemd

// 0x5AD7D0
namespace gamemd {
char DynamicVector::Add_Alt3(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->DynamicVector_field_0x8;
    if ( this->DynamicVector_field_0x10 >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->DynamicVector_field_0x10;
    v7 = this->Items;
    this->DynamicVector_field_0x10 = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->vtable0;
    return 1;
}
}
} // namespace gamemd

// 0x624810
namespace gamemd {
char DynamicVector::GrowCapacity()
{
{
    int v2;
    int v4;
    void *v5;
    const void *v6;
    int v7;
    v2 = *(void**)this;
    if ( *(void**)this < this->Items )
    return 0;
    v4 = 2 * v2;
    if ( 2 * v2 < 10 )
    v4 = 10;
    v5 = __2_YAPAXI_Z(24 * v4);
    memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2));
    v7 = (int)v5;
    v6 = (const void *)this->DynamicVector_field_0x8;
    if ( v6 )
    qmemcpy(v5, v6, 24 * *(void**)this);
    __3_YAXPAX_Z((void *)this->DynamicVector_field_0x8);
    this->Items = v4;
    this->DynamicVector_field_0x8 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x67A520
namespace gamemd {
int DynamicVector::Read(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable0;
    v6 = this->DynamicVector_field_0x10;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable0 + 16))( aP1, this->Items + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}
} // namespace gamemd

// 0x67A6E0
namespace gamemd {
int DynamicVector::Read_Alt(TechnoTypeClass * aP1)
{
{
    int v3;
    int result;
    int i;
    int v6;
    v3 = *(int *)aP1->vtable0;
    v6 = this->DynamicVector_field_0x10;
    (*(void (__stdcall **)(TechnoTypeClass *, int *, int, int))(v3 + 16))(aP1, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, int))(*(int *)aP1->vtable0 + 16))( aP1, this->Items + 4 * i, 4, 0);
    result = v6;
  }
    return result;
}
}
} // namespace gamemd

// 0x67AC70
namespace gamemd {
unsigned int * DynamicVector::Constructor_VoxelAnim(int a2, int a3)
{
{
    this->Items = 0;
    this->DynamicVector_field_0x8 = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_VoxelAnimTypeClass_const;
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
    *(void**)this = &vt_DynamicVectorClass_VoxelAnimTypeClass_const;
    this->CapacityIncrement = 10;
    this->DynamicVector_field_0x10 = 0;
    return this;
}
}
} // namespace gamemd

// 0x67AD80
namespace gamemd {
char DynamicVector::Add2(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->DynamicVector_field_0x8;
    if ( this->DynamicVector_field_0x10 >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->DynamicVector_field_0x10;
    v7 = this->Items;
    this->DynamicVector_field_0x10 = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->vtable0;
    return 1;
}
}
} // namespace gamemd

// 0x67C360
namespace gamemd {
char DynamicVector::RemoveAt(int a2)
{
{
    int v2;
    int v3;
    int v4;
    v2 = this->DynamicVector_field_0x10;
    v3 = a2;
    if ( a2 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->DynamicVector_field_0x10 = v4;
    if ( a2 < v4 )
  {
    do
    {
    ++v3;
    *(int *)(this->Items + 4 * v3 - 4) = *(int *)(this->Items + 4 * v3);
    }
    while ( v3 < this->DynamicVector_field_0x10 );
  }
    return 1;
}
}
} // namespace gamemd

// 0x67C3F0
namespace gamemd {
char DynamicVector::RemoveAt2(int a2)
{
{
    int v2;
    int v3;
    int v4;
    v2 = this->DynamicVector_field_0x10;
    v3 = a2;
    if ( a2 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->DynamicVector_field_0x10 = v4;
    if ( a2 < v4 )
  {
    do
    {
    ++v3;
    *(int *)(this->Items + 4 * v3 - 4) = *(int *)(this->Items + 4 * v3);
    }
    while ( v3 < this->DynamicVector_field_0x10 );
  }
    return 1;
}
}
} // namespace gamemd

// 0x6C6400
namespace gamemd {
char DynamicVector::Add(DynamicVector * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->DynamicVector_field_0x8;
    if ( this->DynamicVector_field_0x10 >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->CapacityIncrement;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->DynamicVector_field_0x10;
    v7 = this->Items;
    this->DynamicVector_field_0x10 = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->__pad_0;
    return 1;
}
}
} // namespace gamemd

// 0x7342D0
namespace gamemd {
unsigned int * DynamicVector::Constructor_Techno(int a2, int a3)
{
{
    this->Items = 0;
    this->DynamicVector_field_0x8 = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_TechnoClass;
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
    *(void**)this = &vt_DynamicVectorClass_TechnoClass;
    this->CapacityIncrement = 10;
    this->DynamicVector_field_0x10 = 0;
    return this;
}
}
} // namespace gamemd

// 0x7AF000
namespace gamemd {
char DynamicVector::EnsureCapacity()
{
{
    int v2;
    int v4;
    void *v5;
    int v6;
    v2 = *(void**)this;
    if ( *(void**)this < this->Items )
    return 0;
    v4 = 2 * v2;
    v6 = 2 * v2;
    if ( 2 * v2 < 10 )
  {
    v6 = 10;
    v4 = 10;
  }
    v5 = __2_YAPAXI_Z(4 * v4);
    memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2));
    if ( this->DynamicVector_field_0x8 )
  {
    qmemcpy(v5, (const void *)this->DynamicVector_field_0x8, 4 * *(void**)this);
    v4 = v6;
  }
    __3_YAXPAX_Z((void *)this->DynamicVector_field_0x8);
    this->Items = v4;
    this->DynamicVector_field_0x8 = (int)v5;
    return 1;
}
}
} // namespace gamemd
