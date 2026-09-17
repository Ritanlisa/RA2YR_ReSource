// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x549B70
int IsometricTileTypeClass::ProcessPower(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IsometricTileTypeClass::ProcessPower(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x549b79*/
  Power::TimerProcess(*(_DWORD *)(this + 660)); /*0x549b87*/
  Power::TimerProcess(*(_DWORD *)(this + 664)); /*0x549b95*/
  Power::TimerProcess(*(_DWORD *)(this + 668)); /*0x549ba3*/
  Power::TimerProcess(*(_DWORD *)(this + 672)); /*0x549bb1*/
  Power::TimerProcess(*(_DWORD *)(this + 692)); /*0x549bbf*/
  v3 = *(_DWORD *)(this + 700); /*0x549bc4*/
  if ( v3 ) /*0x549bcc*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x549bd5*/
    Power::TimerProcess(v4); /*0x549bdb*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 704)); /*0x549be9*/
  Power::TimerProcess(*(_DWORD *)(this + 708)); /*0x549bf7*/
  Power::TimerProcess(*(_DWORD *)(this + 724)); /*0x549c05*/
  Power::TimerProcess(*(_DWORD *)(this + 728)); /*0x549c13*/
  Power::TimerProcess(*(_DWORD *)(this + 732)); /*0x549c21*/
  LOBYTE(v5) = *(_BYTE *)(this + 736); /*0x549c26*/
  v6 = Power::FlagProcess(a2, v5); /*0x549c2f*/
  LOBYTE(v6) = *(_BYTE *)(this + 737); /*0x549c34*/
  Power::FlagProcess(a2, v6); /*0x549c3d*/
  Power::TimerProcess(*(_DWORD *)(this + 740)); /*0x549c4b*/
  Power::TimerProcess(*(_DWORD *)(this + 744)); /*0x549c59*/
  Power::TimerProcess(*(_DWORD *)(this + 748)); /*0x549c67*/
  return Power::TimerProcess(*(_DWORD *)(this + 752)); /*0x549c7a*/
}
}

// 0x549C80
int IsometricTileTypeClass::LoadTypeData(int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall IsometricTileTypeClass::_vt05(int *a1, int a2)
{
  int i; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int result; // eax
  int j; // eax

  for ( i = 0; i < MEMORY[0x87F6A8]; *((_DWORD *)MEMORY[0x87F69C] + i - 1) = 0 ) /*0x549c8a*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)MEMORY[0x87F69C] + i); /*0x549c91*/
    if ( v3 ) /*0x549c96*/
      (**v3)(v3, 1); /*0x549c9c*/
    ++i; /*0x549ca3*/
  }
  result = ObjectTypeClass::LoadCleanup((int)a1, a2); /*0x549cbf*/
  if ( result >= 0 ) /*0x549cc6*/
  {
    if ( a1 ) /*0x549cce*/
    {
      ObjectTypeClass::Construct(a1, (int)&a2); /*0x549cd8*/
      IsometricTileTypeClass::Constructor_0(a1 + 169, 0, 0); /*0x549ce9*/
      a1[169] = (int)&vt_DynamicVectorClass_unsigned_short; /*0x549cee*/
      a1[174] = 10; /*0x549cf4*/
      a1[173] = 0; /*0x549cfb*/
      *a1 = (int)&IsometricTileTypeClass::`vftable'; /*0x549d02*/
      a1[1] = (int)&IsometricTileTypeClass::`vftable'; /*0x549d08*/
      a1[2] = (int)&IsometricTileTypeClass::`vftable'; /*0x549d0f*/
      a1[3] = (int)&vt_IsometricTileTypeClass; /*0x549d16*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], a1 + 175); /*0x549d2a*/
    for ( j = 0; j < MEMORY[0x87F6A8]; *((_DWORD *)MEMORY[0x87F69C] + j - 1) = 0 ) /*0x549d39*/
      ++j; /*0x549d41*/
    TerrainClass::InitTheatre(a1); /*0x549d56*/
    return 0; /*0x549d5b*/
  }
  return result; /*0x549d5d*/
}
}

// 0x549DD0
int IsometricTileTypeClass::GetTileIndex(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IsometricTileTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  if ( *(this + 175) == a2 ) /*0x549ddc*/
    *(this + 175) = 0; /*0x549dde*/
  result = *(this + 178); /*0x549de8*/
  if ( result != -1 && *((_DWORD *)MEMORY[0x8B4154] + result) == a2 ) /*0x549e02*/
    *(this + 178) = -1; /*0x549e04*/
  return result; /*0x549e0e*/
}
}

// 0x54A160
int IsometricTileTypeClass::GetAuxField()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IsometricTileTypeClass::_vt16(_DWORD *this)
{
  return *(this + 165); /*0x54a166*/
}
}

// 0x549D70
int IsometricTileTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// 0x549D90
int IsometricTileTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1525862010;
  a2[1] = 298976820;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// 0x54A140
int IsometricTileTypeClass::GetTypeIdentifier()
{
return 18;
}

// 0x54A150
int IsometricTileTypeClass::GetObjectSize()
{
return 780;
}

// 0x54A170
IsometricTileTypeClass * IsometricTileTypeClass::ddtor(char a2)
{
{
    IsometricTileTypeClass::CleanupMembers((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (IsometricTileTypeClass *)this;
}
}

// 0x54A190
void IsometricTileTypeClass::ClearBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->IsometricTileTypeClass_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->IsometricTileTypeClass_field_0x04 = 0;
  }
    this->IsAllocated = 0;
    this->IsometricTileTypeClass_field_0x08 = 0;
}
}

// 0x54A1C0
unsigned int IsometricTileTypeClass::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->IsometricTileTypeClass_field_0x0C )
    return (unsigned int)(a2 - this->IsometricTileTypeClass_field_0x04) >> 2;
    else
    return 0;
}
}

// 0x54A3D0
char IsometricTileTypeClass::SetCapacity(int a2, unsigned int * a3)
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
    if ( this->IsometricTileTypeClass_field_0x04 )
    {
    v5 = this->IsometricTileTypeClass_field_0x08;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->IsometricTileTypeClass_field_0x04 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->IsometricTileTypeClass_field_0x04 = 0;
      }
    }
    this->IsometricTileTypeClass_field_0x04 = v4;
    this->IsometricTileTypeClass_field_0x08 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->GetClassIdentifier();
  }
    v7 = this->IsometricTileTypeClass_field_0x08;
    if ( v7 < this->IsometricTileTypeClass_field_0x10 )
    this->IsometricTileTypeClass_field_0x10 = v7;
    return 1;
}
}

// 0x54A480
int IsometricTileTypeClass::FindItem(unsigned int * a2)
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
// 0x54A760
DynamicVector * IsometricTileTypeClass::Constructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_unsigned_short;
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

// 0x54A850
unsigned int * IsometricTileTypeClass::Constructor_0(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_unsigned_short;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    return this;
    }
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}
