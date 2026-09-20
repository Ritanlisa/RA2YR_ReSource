// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005A0090  MapClass::SetObstruction  cls=unknown  sig=csp  renamed_refs=0 ====
MapClass * MapClass::SetObstruction(short * a0, MapClass * aP1)
{
{
    MapClass *result;
    if ( g_MapTileArray )
  {
    result = (MapClass *)(80 * (*a0 + g_MapCellWidth * *((int*)(a0) + 1)));
    *(int *)((char *)(g_MapTileArray) + (int)result + 56) = aP1;
  }
    return result;
}
}

// ==== BACKFILL 0x005A00C0  MapClass::GetTileDataField14  cls=unknown  sig=csp  renamed_refs=0 ====
int MapClass::GetTileDataField14(MapResourceClass * aP0)
{
{
    if ( g_MapTileArray )
    return *((int *)(g_MapTileArray) + 20 * *(short *)aP0->__tail_0 + 20 * g_MapCellWidth * *(short *)&aP0->__tail_0[2] + 14);
    else
    return -1;
}
}

// ==== BACKFILL 0x005A1190  sub_5A1190  cls=unknown  sig=csp  renamed_refs=0 ====
double sub_5A1190(short * a1, short * a2, double a3)
{
{
    int v3;
    double v4;
    double v5;
    char v7;
    double v9;
    v3 = *a2 - *a1;
    if ( v3 )
  {
    v4 = Math::ArcTan(-((double)(*((int*)(a2) + 1) - *((int*)(a1) + 1)) / (double)v3));
    if ( v3 < 0 )
    v4 = v4 + 3.141592653589793;
  }
    else
  {
    v4 = 1.570796326794897;
  }
    v5 = fabs(v4 - a3);
    v9 = v5;
    if ( !v7 )
  {
    do
    v5 = v5 - 6.283185307179586;
    while ( v5 >= 6.283185307179586 );
    v9 = v5;
  }
    if ( v5 > 3.141592653589793 )
    v9 = 6.283185307179586 - v5;
    return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 * 2.0 + 1.5 * v9;
}
}

// ==== BACKFILL 0x005A2ED0  sub_5A2ED0  cls=unknown  sig=csp  renamed_refs=0 ====
double sub_5A2ED0(short * a1, short * a2)
{
{
    int v2;
    int v3;
    double v5;
    v2 = *a1 - *a2;
    v3 = *((int*)(a1) + 1) - *((int*)(a2) + 1);
    v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3));
    return (double)(unsigned int)Random::State(&g_Randomizer) * 5.0 * 2.328306437080797e-10 + v5;
}
}

// ==== BACKFILL 0x005A38C0  CellClass::Reset  cls=CellClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int CellClass::Reset() {
{
    int result;
    int *v3;
    char *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int j;
    double i;
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
    result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8);
    v3 = (int *)result;
    for ( i = (double)*(this + 23) * 0.01; result; v3 = (int *)result )
  {
    v4 = (char *)(g_MapTileArray) + 80 * (short)v3[9] + 80 * g_MapCellWidth * (short)HIWORD(v3[9]);
    if ( CellClass::IsTerrainType(v3) )
    {
    v5 = v3[9];
    v6 = (short)v5 - 2;
    for ( j = v6; v6 < (short)v5 + 3; j = v6 )
      {
    v7 = SHIWORD(v5) - 2;
    if ( v7 < SHIWORD(v5) + 3 )
        {
    v8 = (short)v6;
    do
          {
    v9 = (short)v7 + v8;
    if ( v9 > g_MapCellHeight_Value && v8 - (short)v7 < g_MapCellHeight_Value && (short)v7 - v8 < g_MapCellHeight_Value && v9 <= g_MapCellCount )
            {
    *((int *)(v4) + 10) = 1202590843;
    *((int *)(v4) + 11) = 1064598241;
    *((int *)(v4) + 8) = 0;
    *((int *)(v4) + 9) = 0;
    *((double *)(v4) + 3) = 0.02 * i * 10.0;
            }
    ++v7;
          }
    while ( v7 < (short)HIWORD(v3[9]) + 3 );
    v6 = j;
        }
    v5 = v3[9];
    ++v6;
      }
    }
    else if ( *((double *)(v4) + 5) == 0.0 )
    {
    *((int *)(v4) + 10) = 1202590843;
    *((int *)(v4) + 11) = 1064598241;
    *((double *)(v4) + 3) = 0.02 * i;
    *((int *)(v4) + 8) = 1202590843;
    *((int *)(v4) + 9) = 1064598241;
    }
    result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8);
  }
    return result;
}
} }

// ==== BACKFILL 0x005A4AE0  sub_5A4AE0  cls=unknown  sig=csp  renamed_refs=0 ====
double sub_5A4AE0(short * a1, short * a2)
{
{
    int v2;
    int v3;
    double v5;
    v2 = *a1 - *a2;
    v3 = *((int*)(a1) + 1) - *((int*)(a2) + 1);
    v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3));
    return (double)(unsigned int)Random::State(&g_Randomizer) * 5.0 * 2.328306437080797e-10 + v5;
}
}

// ==== BACKFILL 0x005A4FA0  sub_5A4FA0  cls=unknown  sig=csp  renamed_refs=0 ====
double sub_5A4FA0(short * a1, short * a2)
{
{
    int v2;
    int v3;
    double v5;
    v2 = *a1 - *a2;
    v3 = *((int*)(a1) + 1) - *((int*)(a2) + 1);
    v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3));
    return (double)(unsigned int)Random::State(&g_Randomizer) * 5.0 * 2.328306437080797e-10 + v5;
}
}

// ==== BACKFILL 0x005A5AE0  sub_5A5AE0  cls=unknown  sig=csp  renamed_refs=0 ====
double sub_5A5AE0(short * a1, short * a2)
{
{
    signed int v2;
    __int64 v3;
    int v5;
    v2 = abs32(*((int*)(a1) + 1) - *((int*)(a2) + 1));
    v3 = *a1 - *a2;
    v5 = (HIDWORD(v3) ^ v3) - HIDWORD(v3);
    if ( v5 <= v2 )
    v5 = v2;
    return (double)(unsigned int)Random::State(&g_Randomizer) * 3.0 * 2.328306437080797e-10 + (double)v5;
}
}

// ==== BACKFILL 0x005A7640  globalHelper_0A7640  cls=unknown  sig=csp  renamed_refs=0 ====
unsigned int * globalHelper_0A7640(unsigned int * a0, MapSeedClass * aP1)
{
{
    short v2;
    short v3;
    short v4;
    int v5;
    short v6;
    bool v7;
    int *v9;
    int MapSeedClass_field_0x10;
    int v11;
    v2 = 0;
    v3 = 999;
    v4 = 0;
    v5 = aP1->MapSeedClass_field_0x10 - 1;
    v6 = 999;
    if ( v5 >= 0 )
  {
    v9 = (int *)(aP1->MapSeedClass_field_0x04 + 4 * v5);
    MapSeedClass_field_0x10 = aP1->MapSeedClass_field_0x10;
    do
    {
    v11 = *v9;
    if ( (short)*v9 < v3 )
    v3 = *v9;
    if ( SHIWORD(v11) < v6 )
    v6 = HIWORD(*v9);
    if ( (short)*v9 > v2 )
    v2 = *v9;
    if ( SHIWORD(v11) > v4 )
    v4 = HIWORD(*v9);
    v7 = MapSeedClass_field_0x10 == 1;
    --v9;
    --MapSeedClass_field_0x10;
    }
    while ( !v7 );
  }
    *a0 = v3;
    *((int*)(a0) + 1) = v6;
    *((int*)(a0) + 2) = v2 - v3 + 1;
    *((int*)(a0) + 3) = v4 - v6 + 1;
    return a0;
}
}

// ==== BACKFILL 0x005A9920  sub_5A9920  cls=ObjectClass  sig=csp  renamed_refs=0 ====
ObjectClass * E4Recv_5A9920::sub_5A9920(unsigned int * a1, ObjectClass * aP2)
{
{
    *(void**)this = *a1;
    this->M4 = aP2;
    return (ObjectClass *)this;
}
}

// ==== BACKFILL 0x005A9960  sub_5A9960  cls=ObjectClass  sig=csp  renamed_refs=0 ====
ObjectClass * E4Recv_5A9960::sub_5A9960(unsigned int * a1)
{
{
    *(void**)this = *a1;
    this->M4 = *((int*)(a1) + 1);
    return (ObjectClass *)this;
}
}

// ==== BACKFILL 0x005A9980  sub_5A9980  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_5A9980::sub_5A9980(int a2, unsigned int * a3, int a4, unsigned int * a5, int a6)
{
{
    *(void**)this = a2;
    this->M4 = *a3;
    this->M8 = a4;
    this->M12 = *a5;
    this->M16 = a6;
    return this;
}
}

// ==== BACKFILL 0x005A99F0  sub_5A99F0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_5A99F0::sub_5A99F0(unsigned int * a2)
{
{
    *(void**)this = *a2;
    this->M4 = *((int*)(a2) + 1);
    this->M8 = *((int*)(a2) + 2);
    this->M12 = *((int*)(a2) + 3);
    this->M16 = *((int*)(a2) + 4);
    return this;
}
}

// ==== BACKFILL 0x005A9BF0  ??0_ReaderWriterLock_details_Concurrency__QAE_XZ  cls=ObjectClass  sig=csp  renamed_refs=0 ====
Concurrency::details::_ReaderWriterLock * E4Recv_5A9BF0::__0_ReaderWriterLock_details_Concurrency__QAE_XZ()
{
{
    *(int *)this = 0;
    this->M4 = 0;
    return this;
}
}

// ==== BACKFILL 0x005AC230  MapSeed::IsCellInBounds  cls=MapSeed  sig=csp  renamed_refs=0 ====
bool MapSeed::IsCellInBounds()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_5AC230(__int16 *this)
{
  int v1; // edx
  int v2; // eax

  v1 = *this; /*0x5ac230*/
  v2 = *(this + 1); /*0x5ac233*/
  return v2 + v1 > g_MapCellHeight_Value /*0x5ac25f*/
      && v1 - v2 < g_MapCellHeight_Value
      && v2 - v1 < g_MapCellHeight_Value
      && v2 + v1 <= g_MapCellCount;
}
}

// ==== BACKFILL 0x005AC270  MapSeedClass::QueryInterface  cls=MapSeedClass  sig=csp  renamed_refs=0 ====
MapSeedClass * MapSeedClass::QueryInterface(char a2)
{
{
    LoadOptions::Cleanup(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MapSeedClass *)this;
}
}

// ==== BACKFILL 0x005AC290  RandomMap::Constructor_VectorClass_Cell_  cls=RandomMap  sig=csp  renamed_refs=0 ====
unsigned int * RandomMap::Constructor_VectorClass_Cell_(char a2)
{
{
    void (__thiscall ***v3)(int, int);
    int v4;
    void *v5;
    int *v7;
    v3 = (void (__thiscall ***)(int, int))*(void**)this;
    if ( v3 )
  {
    (**v3)(v3, 1);
    *(void**)this = 0;
  }
    v7 = this;
    v4 = (*(int (__thiscall **)(int *, int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v7);
    if ( v4 != -1 && v4 < g_RandomMap_TileData && v4 < --g_RandomMap_TileData )
  {
    do
    {
    ++v4;
    *((int *)(g_RandomMap_TerrainState) + v4 - 1) = *((int *)(g_RandomMap_TerrainState) + v4);
    }
    while ( v4 < g_RandomMap_TileData );
  }
    v5 = (void *)*(this + 11);
    *(this + 10) = &vt_VectorClass_Cell;
    if ( v5 && *((char *)(this) + 53) )
  {
    __3_YAXPAX_Z(v5);
    *(this + 11) = 0;
  }
    *((char *)(this) + 53) = 0;
    *(this + 12) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x005AC370  Coord::Compare2D  cls=Coord  sig=csp  renamed_refs=0 ====
BOOL Coord::Compare2D(unsigned short * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall Coord_Compare2D(_WORD *this, _WORD *a2)
{
  return *this != *a2 || *(this + 1) != a2[1]; /*0x5ac388*/
}
}

// ==== BACKFILL 0x005AC3A0  VectorClass_ptr_MapRegionClass::Destroy  cls=VectorClass_ptr_MapRegionClass  sig=csp  renamed_refs=0 ====
void VectorClass_ptr_MapRegionClass::Destroy()
{
{
    void *v2;
    v2 = this->Items;
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}

// ==== BACKFILL 0x005AC3D0  VectorClass_ptr_MapRegionClass::GetItemIndex  cls=VectorClass_ptr_MapRegionClass  sig=csp  renamed_refs=0 ====
unsigned int VectorClass_ptr_MapRegionClass::GetItemIndex(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x005AC400  TypeList::BuildingTypeConstructor  cls=TypeList  sig=csp  renamed_refs=5 ====
CCINIClass * TypeList::BuildingTypeConstructor()
{
{
    this->q004 = 0;
    this->q008 = 0;
    this->q00C = 1;
    this->IsAllocated = 0;
    this->q014 = 10;
    this->q010 = 0;
    *(void**)this = &vt_TypeList_BuildingTypeClass_const;
    return (CCINIClass *)this;
}
}

// ==== BACKFILL 0x005AC5A0  MapClass::checkCellBounds  cls=DynamicVector  sig=csp  renamed_refs=0 ====
void MapClass::checkCellBounds()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MapClass_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MapClass_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MapClass_field_0x8 = 0;
}
}

// ==== BACKFILL 0x005AC5D0  MapClass::validateCellCoord  cls=DynamicVector  sig=csp  renamed_refs=0 ====
unsigned int MapClass::validateCellCoord(int a2)
{
{
    if ( (unsigned char)this->MapClass_field_0xC )
    return (unsigned int)(a2 - this->MapClass_field_0x4) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x005AC820  VectorClass_ptr_MapRegionClass::SetCapacity  cls=VectorClass_ptr_MapRegionClass  sig=csp  renamed_refs=0 ====
char VectorClass_ptr_MapRegionClass::SetCapacity(int a2, unsigned int * a3)
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
    if ( this->Items )
    {
    v5 = this->Capacity;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int*)(this->Items + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(this->Items);
    this->Items = (void*)(0);
      }
    }
    this->Items = (void*)(v4);
    this->Capacity = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->FindItemIndex();
  }
    v7 = this->Capacity;
    if ( v7 < this->Count )
    this->Count = v7;
    return 1;
}
}

// ==== BACKFILL 0x005AC8D0  VectorClass_ptr_MapRegionClass::FindItemIndex  cls=VectorClass_ptr_MapRegionClass  sig=csp  renamed_refs=0 ====
int VectorClass_ptr_MapRegionClass::FindItemIndex(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x005AC900  DynamicVectorClass::BuildingTypeConstructor  cls=DynamicVectorClass  sig=csp  renamed_refs=0 ====
unsigned int * DynamicVectorClass::BuildingTypeConstructor(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_BuildingTypeClass_const;
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
    *(void**)this = &vt_DynamicVectorClass_BuildingTypeClass_const;
    this->CapacityIncrement = 10;
    this->Count = 0;
    return this;
}
}

// ==== BACKFILL 0x005AD0C0  MapClass::updatePathfindingGrid  cls=DynamicVector  sig=csp  renamed_refs=2 ====
int MapClass::updatePathfindingGrid(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->DynamicVector_field_0x10;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->q004; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}

}

// ==== BACKFILL 0x005AD660  TypeList::BuildingTypeCopy  cls=TypeList  sig=csp  renamed_refs=15 ====
unsigned int * TypeList::BuildingTypeCopy(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->q004 = 0;
    this->q008 = 0;
    this->q00C = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_BuildingTypeClass_const;
    if ( this != (int *)aP1 )
  {
    DynamicVectorClass::Destroy((int)this);
    v3 = aP1->q008;
    this->q008 = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->q004 = v4;
    if ( v4 )
      {
    v5 = this->q008;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->q004 + 4 * v6) = *((int *)aP1->q004 + v6);
    ++v6;
          }
    while ( v6 < this->q008 );
        }
      }
    }
    else
    {
    this->q004 = 0;
    this->IsAllocated = 0;
    }
  }
    this->q010 = aP1[1].vtable1;
    this->q014 = aP1[1].q004;
    *(void**)this = &vt_TypeList_BuildingTypeClass_const;
    return this;
}
}

// ==== BACKFILL 0x005AD6F0  StringVector::Construct  cls=StringVector  sig=csp  renamed_refs=5 ====
namespace gamemd { void* StringVector::Construct(int a1, int a2) {
{
      this->StringVector_field_0x04 = 0;
      this->StringVector_field_0x08 = a2;
      this->StringVector_field_0x0C = 1;
      this->IsAllocated = 0;
      *this = &vt_VectorClass_char;
      if ( a2 )
      {
        if ( a3 )
        {
          this->StringVector_field_0x04 = a3;
          return this;
        }
        this->StringVector_field_0x04 = __2_YAPAXI_Z(4 * a2);
        this->IsAllocated = 1;
      }
      return this;
}
} }

// ==== BACKFILL 0x005AD7D0  DynamicVector::Add_Alt3  cls=DynamicVector  sig=csp  renamed_refs=3 ====
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
    v4 = this->__pad_014;
    if ( v4 <= 0 || !this->SetCapacity(v3 + v4, 0) )
    return 0;
  }
    v6 = this->DynamicVector_field_0x10;
    v7 = this->q004;
    this->DynamicVector_field_0x10 = v6 + 1;
    *(int *)(v7 + 4 * v6) = *(int *)aP1->__pad_000;
    return 1;
}
}

// ==== BACKFILL 0x005AD820  RandomMap::Constructor  cls=RandomMap  sig=csp  renamed_refs=5 ====
unsigned int * RandomMap::Constructor(int a2, int a3)
{
{
    this->q004 = 0;
    this->RandomMap_field_0x8 = a2;
    this->RandomMap_field_0xC = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_CellClass;
    if ( a2 )
  {
    if ( a3 )
    {
    this->q004 = a3;
    return this;
    }
    this->q004 = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x005ADA40  RandomMap::Constructor_0  cls=RandomMap  sig=csp  renamed_refs=6 ====
unsigned int * RandomMap::Constructor_0(int a2, int a3)
{
{
    void *v5;
    this->q004 = 0;
    this->RandomMap_field_0x8 = a2;
    this->RandomMap_field_0xC = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_TRect_int;
    if ( a2 )
  {
    if ( a3 )
    {
    this->q004 = a3;
    return this;
    }
    v5 = __2_YAPAXI_Z(16 * a2);
    if ( v5 )
    {
    this->q004 = v5;
    this->IsAllocated = 1;
    return this;
    }
    this->IsAllocated = 1;
    this->q004 = 0;
  }
    return this;
}
}

// ==== BACKFILL 0x005ADAB0  RandomMap::Constructor_1  cls=RandomMap  sig=csp  renamed_refs=5 ====
unsigned int * RandomMap::Constructor_1(int a2, int a3)
{
{
    this->q004 = 0;
    this->RandomMap_field_0x8 = a2;
    this->RandomMap_field_0xC = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_double;
    if ( a2 )
  {
    if ( a3 )
    {
    this->q004 = a3;
    return this;
    }
    this->q004 = __2_YAPAXI_Z(8 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x005ADD10  Map_Delete  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_5ADD10::Map_Delete()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Map_Delete(int this)
{
  bool v3; // bl
  wchar_t *v4; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-F8h]
  int v7; // [esp+0h] [ebp-E8h]
  _DWORD v8[20]; // [esp+Ch] [ebp-DCh] BYREF
  char v9[120]; // [esp+5Ch] [ebp-8Ch] BYREF
  int v10[5]; // [esp+D4h] [ebp-14h] BYREF

  MSEngine::Construct(v8); /*0x5add1e*/
  Map_Delete_5CEDD0(v9); /*0x5add27*/
  unknown_libname_73(v10); /*0x5add33*/
  v10[1] = Timer::GetTicks(); /*0x5add48*/
  v10[3] = 0; /*0x5add50*/
  v8[0] = &vt_MapSelect; /*0x5add5b*/
  v3 = ScenarioClass::Load(v8, (ObjectClass *)this) == 0; /*0x5add71*/
  DeleteAndZero((int)v10); /*0x5add74*/
  MSEngine::Destructor((int)v9); /*0x5add7d*/
  MSEngine::Destruct(v8); /*0x5add86*/
  if ( v3 )
  {
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_82C090.onBridge, 134); /*0x5addba*/
    v4 = GetStringCSF((wchar_t *)&stru_82C090.spawnStatus, 0, &stru_82C090.onBridge, 134); /*0x5addc5*/
    Dialog::ShowMessageBox((int)v4, StringCSF, 0, 0, 0, v7); /*0x5addcf*/
    return 0; /*0x5addd4*/
  }
  else
  {
    Debug::Log(); /*0x5addf6*/
    return strlen((const char *)(this + 4700)) != 0 ? this + 4700 : 0;
  }
}
}

// ==== BACKFILL 0x005ADE20  Map_Delete_5ADE20  cls=unknown  sig=csp  renamed_refs=0 ====
const char * Map_Delete_5ADE20(ObjectClass * a1, const char * a2)
{
{
    bool v5;
    wchar_t *v6;
    wchar_t *StringCSF;
    int v9;
    int v10;
    int v11[20];
    char v12[120];
    int v13[5];
    String::Assign((char **)&v10, a2);
    MSEngine::Construct(v11);
    Map_Delete_5CEDD0(v12);
    unknown_libname_73(v13);
    v13[1] = Timer::GetTicks();
    v13[3] = 0;
    v11[0] = &vt_MapSelect;
    v5 = !SessionClass::LoadGameSession(v11, a1, (CellStruct *)&v10);
    DeleteAndZero((int)v13);
    MSEngine::Destructor((int)v12);
    MSEngine::Destruct(v11);
    DeleteAndZero((int)&v10);
    if ( !v5 )
    return a2;
    v10 = (int)&DataGlobal_82083C;
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &DataGlobal_82C090.onBridge, 152);
    v6 = GetStringCSF((wchar_t *)&DataGlobal_82C090.spawnStatus, 0, &DataGlobal_82C090.onBridge, 152);
    Dialog::ShowMessageBox((int)v6, StringCSF, 0, 0, 0, v9);
    return 0;
}
}

// ==== BACKFILL 0x005AE100  ScenarioClass::Load  cls=ScenarioClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int ScenarioClass::Load(ObjectClass * aP1) {
{
    ObjectClass *v2;
    char result;
    Movie *v5;
    Movie *v6;
    ObjectClass *v7;
    ObjectClass *v8;
    ObjectClass *v9;
    char *v10;
    v2 = aP1;
    result = CampaignClass::LoadMovieDisplay((int)this, (int)aP1);
    if ( result )
  {
    LOBYTE(DataGlobal_ABCDFC.Handle) = 0;
    String::Assign((char **)&aP1, (const char *)&v2[27].attachedBomb);
    v5 = (Movie *)CampaignClass::DeleteAndZero((MapSelect *)(this) + 20, (MSFont *)&aP1);
    DeleteAndZero((void **)&aP1);
    Debug::Log();
    if ( String::NotEquals((const char **)&v5->field_8, 0) )
    {
    v6 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, aLoading);
    ThemeClass::Play(&g_BuildingTypeClass_Count, v6);
    v7 = (ObjectClass *)String::GetOrEmpty_Alt(**(char ****)&v5->__pad_48[16]);
    if ( v7 )
      {
    Debug::Log();
    String::Assign(&v10, v7->__pad_0);
    v8 = (ObjectClass *)StringTable::Find((MapSelect *)(this) + 20, (const char **)&v10);
    DeleteAndZero((void **)&v10);
    String::AssignFromPtr((char **)&aP1, (const char **)&v8->__pad_0[4]);
    if ( String::Length((const char **)&aP1) )
        {
    v9 = (ObjectClass *)String::GetOrEmpty((char **)&aP1);
    ScenarioClass::SetFileName(v2->__pad_0, v9);
    *(short *)&v2[79].onBridge = Network_Load(this + 20, v8);
        }
    DeleteAndZero((void **)&aP1);
      }
    }
    CampaignClass::ReleaseSubobjectsAndDestruct(this);
    return 1;
  }
    return result;
}
} }

// ==== BACKFILL 0x005AE220  CampaignClass::LoadMovieDisplay  cls=CampaignClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int CampaignClass::LoadMovieDisplay(int a1) {
{
      int v2;
      bool v4;
      int v6;
      bool v7;
      int v8;
      int v9;
      int v10;
      int v11;
      DWORD Ticks;
      int v13;

      v2 = a2;
      v4 = a2 == 0;
      this->q0AC = 0;
      this->q0B0 = 0;
      this->q0B4 = 0;
      if ( v4
        || (v6 = *((_DWORD *)DataGlobal_8B4124
                 + *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + *(_DWORD *)(v2 + 7284)) + 188))) == 0 )
      {
        Debug::Log();
        return 0;
      }
      else
      {
        Debug::Log();
        String::Assign((char **)&a2, (const char *)(v6 + 36));
        v7 = SessionClass::LoadMapSelection((_DWORD *)(this + 80), (char **)&a2) == 0;
        DeleteAndZero((void **)&a2);
        if ( v7 )
        {
          SessionClass::Destruct((_DWORD *)(this + 80));
          Debug::Log();
          return 0;
        }
        else
        {
          String::Assign((char **)&a2, (const char *)(v2 + 4700));
          v8 = CampaignClass::DeleteAndZero(&a2);
          DeleteAndZero((void **)&a2);
          if ( v8
            && (!__2_YAPAXI_Z(0x20u) ? (v9 = 0) : (v9 = CampaignClass::Constructor_1(1)), (this->q0B4 = v9) != 0) )
          {
            this->q048 = ((*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 124))(g_DSurface_Hidden)
                                    - 640)
                                   / 2;
            v10 = ((*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden + 128))(g_DSurface_Hidden) - 400) / 2;
            this->q04C = v10;
            this->q0B8 = this->q068;
            this->q0BC = this->q06C;
            this->q0C0 = this->q070;
            this->q0C4 = this->q074;
            this->q0B8 += this->q048;
            v11 = 0;
            this->q0BC += v10;
            do
            {
              WideString::AssignFromPtr((wchar_t **)&a2, (const wchar_t **)(v8 + 16));
              WrapWideStringText((const wchar_t **)&a2, *(int **)(this + 180), this->q0C0);
              v8 = CampaignClass::Check(++v11);
              DeleteAndZero::Alt((void **)&a2);
            }
            while ( v8 );
            String::Assign_Alt((void **)(this + 200), 0);
            Ticks = Timer::GetTicks();
            this->q0D8 = -1;
            this->q0CC = Ticks;
            this->q0D0 = v13;
            this->q0D4 = 0;
            return 1;
          }
          else
          {
            Debug::Log();
            CampaignClass::ReleaseSubobjectsAndDestruct(this);
            return 0;
          }
        }
      }
}
} }

// ==== BACKFILL 0x005AE460  CampaignClass::ReleaseSubobjectsAndDestruct  cls=CampaignClass  sig=csp  renamed_refs=0 ====
namespace gamemd { int CampaignClass::ReleaseSubobjectsAndDestruct() {
{
      void (__thiscall ***v2)(_DWORD, int); // ecx
      void (__thiscall ***v3)(_DWORD, int); // ecx
      void (__thiscall ***v4)(_DWORD, int); // ecx

      v2 = (void (__thiscall ***)(_DWORD, int))this->q0B4;
      if ( v2 )
      {
        (**v2)(v2, 1);
        this->q0B4 = 0;
      }
      v3 = (void (__thiscall ***)(_DWORD, int))this->q0B0;
      if ( v3 )
      {
        (**v3)(v3, 1);
        this->q0B0 = 0;
      }
      v4 = (void (__thiscall ***)(_DWORD, int))this->q0AC;
      if ( v4 )
      {
        (**v4)(v4, 1);
        this->q0AC = 0;
      }
      return SessionClass::Destruct(this + 20);
}
} }

// ==== BACKFILL 0x005AE4F0  sub_5AE4F0  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_5AE4F0(int a1)
{
return 0;
}

// ==== BACKFILL 0x005AE500  sub_5AE500  cls=ObjectClass  sig=csp  renamed_refs=0 ====
char E4Recv_5AE500::sub_5AE500(const char ** a2)
{
{
    const char **v3;
    LOBYTE(v3) = String::NotEquals(a2, 0);
    if ( (char)v3 )
  {
    v3 = sub_5CF840(this + 20, a2);
    if ( v3 )
    LOBYTE(v3) = nullsub_24(v3);
  }
    return (char)v3;
}
}

// ==== BACKFILL 0x005AE530  sub_5AE530  cls=ObjectClass  sig=csp  renamed_refs=0 ====
DWORD E4Recv_5AE530::sub_5AE530(ObjectClass * aP1, ObjectClass * aP2)
{
{
    ObjectClass *v3;
    DWORD result;
    int v5;
    v3 = (ObjectClass *)this;
    String::Reassign(this + 50, (AbstractClass *)aP1);
    result = Timer::GetTicks();
    v3 = (ObjectClass *)((char *)(v3) + 204);
    *(int *)v3->__pad_0 = result;
    *(int *)&v3->__pad_0[4] = v5;
    *(int *)&v3->__pad_0[8] = aP2;
    return result;
}
}

// ==== BACKFILL 0x005AE570  nullsub_170  cls=unknown  sig=csp  renamed_refs=0 ====
void nullsub_170(int a1)
{
  ;
}

// ==== BACKFILL 0x005AE580  nullsub_171  cls=unknown  sig=csp  renamed_refs=0 ====
void nullsub_171(int a1)
{
  ;
}

// ==== BACKFILL 0x005AE590  MSEngine_Destru::StubReturnFalse  cls=MSEngine  sig=csp  renamed_refs=0 ====
void MSEngine_Destru::StubReturnFalse()
{
}

// ==== BACKFILL 0x005AE610  Transform::Copy  cls=Transform  sig=csp  renamed_refs=0 ====
void * Transform::Copy(const void * a2)
{
{
    qmemcpy(this, a2, 0x30u);
    return this;
}
}

// ==== BACKFILL 0x005AEAD0  BuildingClass::processBaseExpansion  cls=BuildingClass  sig=csp  renamed_refs=2 ====
namespace gamemd { void BuildingClass::processBaseExpansion(float a2) {
{
    *(void**)this = a2 * *(void**)this;
    this->uniqueId = a2 *(void**)this->uniqueId;
    this->NeedsSaveOrLink = a2 *(void**)this->NeedsSaveOrLink;
}
} }

// ==== BACKFILL 0x005AEAF0  BuildingClass::updateFoundation  cls=BuildingClass  sig=csp  renamed_refs=2 ====
namespace gamemd { void BuildingClass::updateFoundation(float a2) {
{
    this->vtable2 = a2 *(void**)this->vtable2;
    this->abstractFlags = a2 *(void**)this->abstractFlags;
    this->objectTypeFlags = a2 *(void**)this->objectTypeFlags;
}
} }

// ==== BACKFILL 0x005AEB20  BuildingClass::recalcAdjacency  cls=BuildingClass  sig=csp  renamed_refs=2 ====
namespace gamemd { void BuildingClass::recalcAdjacency(float a2) {
{
    this->vtable3 = a2 *(void**)this->vtable3;
    this->nextArrayIndex = a2 *(void**)this->nextArrayIndex;
    this->owningHouseIndex = a2 *(void**)this->owningHouseIndex;
}
} }

// ==== BACKFILL 0x005AEC40  sub_5AEC40  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_5AEC40::sub_5AEC40(float a2)
{
{
    double v2;
    double v4;
    double v5;
    double v6;
    int result;
    float v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v14;
    v2 = a2;
    v14 = Math::SinCos(a2);
    v4 = Math::ArcTan2(v2);
    v10 = this->M20;
    v5 = -v14;
    v8 = this->M32;
    v11 = this->M24;
    v6 = this->M16;
    v9 = this->M36;
    v13 = this->M28;
    result = this->M40;
    v12 = this->M44;
    this->M16 = v8 * v5 + v6 * v4;
    this->M20 = v9 * v5 + v10 * v4;
    this->M24 = *(float *)&result * v5 + v11 * v4;
    this->M28 = v12 * v5 + v13 * v4;
    this->M32 = v8 * v4 + v6 * v14;
    this->M36 = v9 * v4 + v10 * v14;
    this->M40 = *(float *)&result * v4 + v11 * v14;
    this->M44 = v12 * v4 + v13 * v14;
    return result;
}
}

// ==== BACKFILL 0x005AED50  sub_5AED50  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_5AED50::sub_5AED50(float a2)
{
{
    double v2;
    double v4;
    double v5;
    double v6;
    double v7;
    int result;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v14;
    v2 = a2;
    v14 = Math::SinCos(a2);
    v4 = Math::ArcTan2(v2);
    v5 = -v14;
    v6 = *(void**)this;
    v7 = this->M32;
    v9 = this->M4;
    result = this->M36;
    v10 = this->M8;
    v11 = this->M40;
    v12 = this->M12;
    *(void**)this = v7 * v14 + v6 * v4;
    v13 = this->M44;
    this->M4 = *(float *)&result * v14 + v9 * v4;
    this->M8 = v11 * v14 + v10 * v4;
    this->M12 = v13 * v14 + v12 * v4;
    this->M32 = v6 * v5 + v7 * v4;
    this->M36 = v9 * v5 + *(float *)&result * v4;
    this->M40 = v10 * v5 + v11 * v4;
    this->M44 = v12 * v5 + v13 * v4;
    return result;
}
}

// ==== BACKFILL 0x005AEE50  sub_5AEE50  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_5AEE50::sub_5AEE50(float a2)
{
{
    double v2;
    double v4;
    double v5;
    double v6;
    int result;
    float v8;
    float v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v14;
    v2 = a2;
    v14 = Math::SinCos(a2);
    v4 = Math::ArcTan2(v2);
    v10 = this->M4;
    v5 = -v14;
    v8 = this->M16;
    v11 = this->M8;
    v6 = *(void**)this;
    v9 = this->M20;
    v13 = this->M12;
    result = this->M24;
    v12 = this->M28;
    *(void**)this = v8 * v5 + v6 * v4;
    this->M4 = v9 * v5 + v10 * v4;
    this->M8 = *(float *)&result * v5 + v11 * v4;
    this->M12 = v12 * v5 + v13 * v4;
    this->M16 = v8 * v4 + v6 * v14;
    this->M20 = v9 * v4 + v10 * v14;
    this->M24 = *(float *)&result * v4 + v11 * v14;
    this->M28 = v12 * v4 + v13 * v14;
    return result;
}
}

// ==== BACKFILL 0x005AF000  sub_5AF000  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_5AF000::sub_5AF000(ObjectClass * aP1, ObjectClass * aP2)
{
{
    double v3;
    double v4;
    double v5;
    double v6;
    double v7;
    double v8;
    v3 = this->M4;
    v4 = this->M8;
    this->M4 = v4 * *(float *)&aP1 + v3 * *(float *)&aP2;
    this->M8 = v4 * *(float *)&aP2 - v3 * *(float *)&aP1;
    v5 = this->M20;
    v6 = this->M24;
    this->M20 = v6 * *(float *)&aP1 + v5 * *(float *)&aP2;
    this->M24 = v6 * *(float *)&aP2 - v5 * *(float *)&aP1;
    v7 = this->M36;
    v8 = this->M40;
    this->M36 = v8 * *(float *)&aP1 + v7 * *(float *)&aP2;
    this->M40 = v8 * *(float *)&aP2 - v7 * *(float *)&aP1;
}
}

// ==== BACKFILL 0x005AF120  sub_5AF120  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_5AF120::sub_5AF120(float a2, float a3)
{
{
    double v3;
    double v4;
    double v5;
    double v6;
    double v7;
    double v8;
    v3 = *(void**)this;
    v4 = this->M8;
    *(void**)this = v3 * a3 - v4 * a2;
    this->M8 = v3 * a2 + v4 * a3;
    v5 = this->M16;
    v6 = this->M24;
    this->M16 = v5 * a3 - v6 * a2;
    this->M24 = v5 * a2 + v6 * a3;
    v7 = this->M32;
    v8 = this->M40;
    this->M32 = v7 * a3 - v8 * a2;
    this->M40 = v7 * a2 + v8 * a3;
}
}

// ==== BACKFILL 0x005AF2C0  sub_5AF2C0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
double E4Recv_5AF2C0::sub_5AF2C0()
{
{
    int v2[3];
    float v3[3];
    memset(v2, 0, sizeof(v2));
    return *TransformMatrix3x4Point((AbstractClass *)v3, this, (IUnknown *)v2);
}
}

// ==== BACKFILL 0x005AF310  sub_5AF310  cls=ObjectClass  sig=csp  renamed_refs=0 ====
double E4Recv_5AF310::sub_5AF310()
{
{
    float *v1;
    int v3[4];
    float v4[3];
    memset(v3, 0, 12);
    v1 = TransformMatrix3x4Point((AbstractClass *)v4, this, (IUnknown *)v3);
    *(float *)&v3[3] = *v1;
    return v1[1];
}
}

// ==== BACKFILL 0x005AF360  sub_5AF360  cls=ObjectClass  sig=csp  renamed_refs=0 ====
double E4Recv_5AF360::sub_5AF360()
{
{
    float *v1;
    int v3[5];
    float v4[3];
    memset(v3, 0, 12);
    v1 = TransformMatrix3x4Point((AbstractClass *)v4, this, (IUnknown *)v3);
    *(float *)&v3[3] = *v1;
    *(float *)&v3[4] = v1[1];
    return v1[2];
}
}

// ==== BACKFILL 0x005AF3B0  sub_5AF3B0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
double E4Recv_5AF3B0::sub_5AF3B0()
{
{
    float *v1;
    __int128 aP0;
    int v4[3];
    float v5[3];
    v4[0] = 0;
    v4[1] = 1065353216;
    v4[2] = 0;
    v1 = TransformMatrix3x4Point((AbstractClass *)v5, this, (IUnknown *)v4);
    *((double *)&aP0 + 1) = v1[1];
    *(double *)&aP0 = v1[2];
    return Math::CalcAngle((AbstractClass *)aP0, *(double *)((char *)&aP0 + 4));
}
}

// ==== BACKFILL 0x005AF470  sub_5AF470  cls=ObjectClass  sig=csp  renamed_refs=0 ====
double E4Recv_5AF470::sub_5AF470()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall sub_5AF470(IUnknown *this)
{
  float *v1; // eax
  __int128 aP0; // [esp+0h] [ebp-34h]
  _DWORD v4[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v5[3]; // [esp+28h] [ebp-Ch] BYREF

  v4[0] = 1065353216; /*0x5af47e*/
  v4[1] = 0; /*0x5af486*/
  v4[2] = 0; /*0x5af48e*/
  v1 = TransformMatrix3x4Point((AbstractClass *)v5, this, (IUnknown *)v4); /*0x5af496*/
  *((double *)&aP0 + 1) = *v1; /*0x5af4ae*/
  *(double *)&aP0 = v1[1]; /*0x5af4c1*/
  return Math::CalcAngle((AbstractClass *)aP0, *(double *)((char *)&aP0 + 4)); /*0x5af4cc*/
}
}

// ==== BACKFILL 0x005AF550  sub_5AF550  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_5AF550::sub_5AF550(float * a2, float * a3, AbstractClass * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5AF550(int this, float *a2, float *a3, AbstractClass *a4)
{
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  float aP1; // [esp+0h] [ebp-28h]
  float v12; // [esp+10h] [ebp-18h]
  float v13; // [esp+10h] [ebp-18h]
  float v14; // [esp+14h] [ebp-14h]
  float v15; // [esp+14h] [ebp-14h]
  float v16; // [esp+14h] [ebp-14h]
  float aP2a; // [esp+18h] [ebp-10h]
  float aP2; // [esp+18h] [ebp-10h]
  float v19; // [esp+1Ch] [ebp-Ch]
  float v20; // [esp+1Ch] [ebp-Ch]
  float v21; // [esp+20h] [ebp-8h]
  float v22; // [esp+24h] [ebp-4h]
  float v23; // [esp+2Ch] [ebp+4h]
  float v24; // [esp+2Ch] [ebp+4h]
  int v25; // [esp+30h] [ebp+8h]

  v12 = *a3 - *a2; /*0x5af566*/
  *(float *)&v25 = a3[1] - a2[1]; /*0x5af570*/
  v7 = a3[2] - a2[2]; /*0x5af577*/
  v14 = v7; /*0x5af57a*/
  v19 = v7 * v14; /*0x5af582*/
  aP2a = v12 * v12; /*0x5af58e*/
  v23 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(*(float *)&v25 * *(float *)&v25 + aP2a + v19)); /*0x5af5aa*/
  v8 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(aP2a + v19)); /*0x5af5b9*/
  if ( v23 == 0.0 ) /*0x5af5d0*/
  {
    v21 = 0.0; /*0x5af5ea*/
    aP2 = 1.0; /*0x5af5f2*/
  }
  else
  {
    v21 = *(float *)&v25 / v23; /*0x5af5da*/
    aP2 = v8 / v23; /*0x5af5e4*/
  }
  if ( v8 == 0.0 ) /*0x5af605*/
  {
    v20 = 0.0; /*0x5af621*/
    v24 = 1.0; /*0x5af629*/
  }
  else
  {
    v20 = v12 / v8; /*0x5af60d*/
    v24 = v14 / v8; /*0x5af617*/
  }
  *(_DWORD *)this = 1065353216; /*0x5af638*/
  this->M4 = 0; /*0x5af63a*/
  this->M8 = 0; /*0x5af63d*/
  this->M12 = 0; /*0x5af640*/
  this->M16 = 0; /*0x5af643*/
  this->M20 = 1065353216; /*0x5af646*/
  this->M24 = 0; /*0x5af649*/
  this->M28 = 0; /*0x5af64c*/
  this->M32 = 0; /*0x5af64f*/
  this->M36 = 0; /*0x5af652*/
  this->M40 = 1065353216; /*0x5af655*/
  this->M44 = 0; /*0x5af658*/
  v9 = *a2; /*0x5af65b*/
  *(float *)(this + 12) = *a2; /*0x5af669*/
  *(float *)(this + 28) = 0.0; /*0x5af677*/
  *(float *)(this + 44) = 0.0; /*0x5af67a*/
  v10 = v9 + 0.0; /*0x5af680*/
  v15 = a2[1]; /*0x5af684*/
  *(float *)(this + 12) = v10; /*0x5af68d*/
  v16 = v15 + *(float *)(this + 28); /*0x5af697*/
  *(float *)(this + 28) = v16; /*0x5af69b*/
  v13 = (float)0.0 + 0.0; /*0x5af6ae*/
  *(float *)(this + 44) = v13; /*0x5af6b2*/
  v22 = a2[2]; /*0x5af6be*/
  *(float *)(this + 12) = v10 + 0.0; /*0x5af6c4*/
  *(float *)(this + 28) = v16 + 0.0; /*0x5af6d1*/
  *(float *)(this + 44) = v13 + v22; /*0x5af6dc*/
  sub_5AF120((float *)this, v20, v24); /*0x5af6df*/
  aP1 = -v21; /*0x5af6f0*/
  sub_5AF000((float *)this, (ObjectClass *)LODWORD(aP1), (ObjectClass *)LODWORD(aP2)); /*0x5af6f5*/
  Matrix2D::Rotate((float *)this, a4); /*0x5af701*/
}
}

// ==== BACKFILL 0x005AF980  MultiplyMatrix3x4  cls=unknown  sig=csp  renamed_refs=0 ====
float * MultiplyMatrix3x4(ObjectClass * aP0, float * a1, float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__fastcall MultiplyMatrix3x4(ObjectClass *aP0, float *a1, float *a2)
{
  float *result; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v8; // st4
  double v9; // st3
  double v10; // st2
  float v11; // esi
  float v12; // [esp+8h] [ebp-68h]
  float v13; // [esp+Ch] [ebp-64h]
  float v14; // [esp+10h] [ebp-60h]
  float v15; // [esp+14h] [ebp-5Ch]
  float v16; // [esp+18h] [ebp-58h]
  float v17; // [esp+1Ch] [ebp-54h]
  float v18; // [esp+20h] [ebp-50h]
  float v19; // [esp+24h] [ebp-4Ch]
  float v20; // [esp+28h] [ebp-48h]
  float v21; // [esp+2Ch] [ebp-44h]
  float v22; // [esp+30h] [ebp-40h]
  float v23; // [esp+34h] [ebp-3Ch]
  float v24; // [esp+3Ch] [ebp-34h]
  float v25[12]; // [esp+40h] [ebp-30h] BYREF
  float a2a; // [esp+74h] [ebp+4h]

  result = (float *)aP0; /*0x5af983*/
  v14 = a1[4]; /*0x5af98a*/
  v13 = a1[5]; /*0x5af991*/
  v4 = *a1; /*0x5af998*/
  v12 = a1[6]; /*0x5af99a*/
  v5 = a1[1]; /*0x5af9a1*/
  v6 = a1[2]; /*0x5af9a4*/
  v17 = a1[8]; /*0x5af9a7*/
  v16 = a1[9]; /*0x5af9ae*/
  v15 = a1[10]; /*0x5af9b5*/
  v8 = *a2; /*0x5af9bd*/
  v9 = a2[4]; /*0x5af9bf*/
  v10 = a2[8]; /*0x5af9c2*/
  v19 = a2[1]; /*0x5af9d0*/
  v22 = a2[2]; /*0x5af9dd*/
  v24 = a2[3]; /*0x5af9e4*/
  v18 = a2[5]; /*0x5af9ed*/
  v21 = a2[6]; /*0x5af9f4*/
  v11 = a2[7]; /*0x5af9f8*/
  v25[0] = v10 * v6 + v9 * v5 + v8 * v4; /*0x5af9fb*/
  a2a = a2[9]; /*0x5afa12*/
  v20 = a2[10]; /*0x5afa1c*/
  v23 = a2[11]; /*0x5afa28*/
  v25[4] = v10 * v12 + v9 * v13 + v8 * v14; /*0x5afa2e*/
  v25[8] = v10 * v15 + v9 * v16 + v8 * v17; /*0x5afa46*/
  v25[1] = a2a * v6 + v18 * v5 + v19 * v4; /*0x5afa60*/
  v25[5] = a2a * v12 + v18 * v13 + v19 * v14; /*0x5afa8b*/
  v25[9] = a2a * v15 + v18 * v16 + v19 * v17; /*0x5afaab*/
  v25[2] = v20 * v6 + v21 * v5 + v22 * v4; /*0x5afac5*/
  v25[6] = v20 * v12 + v21 * v13 + v22 * v14; /*0x5afae5*/
  v25[10] = v20 * v15 + v21 * v16 + v22 * v17; /*0x5afb05*/
  v25[3] = v23 * v6 + v11 * v5 + v24 * v4 + a1[3]; /*0x5afb22*/
  v25[7] = v23 * v12 + v11 * v13 + v24 * v14 + a1[7]; /*0x5afb4b*/
  v25[11] = v23 * v15 + v11 * v16 + v24 * v17 + a1[11]; /*0x5afb6e*/
  qmemcpy(result, v25, 0x30u); /*0x5afb72*/
  return result; /*0x5afb74*/
}
}

// ==== BACKFILL 0x005AFB80  TransformMatrix3x4Point  cls=unknown  sig=csp  renamed_refs=0 ====
float * TransformMatrix3x4Point(AbstractClass * aP0, IUnknown * aP1, IUnknown * aP2)
{
{
    double v4;
    float v5;
    float v6;
    float v7;
    v5 = *(float *)&aP1->field_8 * *(float *)&aP2->field_8 + *(float *)&aP1->field_4 * *(float *)&aP2->field_4 + *(float *)&aP1->field_0 * *(float *)&aP2->field_0 + *(float *)&aP1->field_C;
    v6 = *(float *)aP1->__pad_10 * *(float *)&aP2->field_0 + *(float *)&aP1->__pad_10[8] * *(float *)&aP2->field_8 + *(float *)&aP1->__pad_10[4] * *(float *)&aP2->field_4 + *(float *)&aP1->field_1C;
    v4 = *(float *)&aP1->field_20 * *(float *)&aP2->field_0 + *(float *)aP1->__pad_28 * *(float *)&aP2->field_8 + *(float *)&aP1->field_24 * *(float *)&aP2->field_4 + *(float *)&aP1->__pad_28[4];
    *(float *)aP0->__pad_0 = v5;
    v7 = v4;
    *(float *)&aP0->__pad_0[4] = v6;
    *(float *)&aP0->__pad_0[8] = v7;
    return (float *)aP0->__pad_0;
}
}

// ==== BACKFILL 0x005AFC20  InvertMatrix3x3Signs  cls=unknown  sig=csp  renamed_refs=0 ====
float * Matrix3x3_InvertSigns(float * a1, float * a2)
{
{
    double v3;
    double v4;
    double v5;
    double v6;
    float v7[12];
    v7[0] = *a2;
    v3 = v7[0] * *((int*)(a2) + 3);
    v7[1] = *((int*)(a2) + 4);
    v7[2] = *((int*)(a2) + 8);
    v4 = v7[2] * *((int*)(a2) + 11);
    v7[4] = *((int*)(a2) + 1);
    v7[5] = *((int*)(a2) + 5);
    v5 = v3 + v4;
    v6 = v7[1] * *((int*)(a2) + 7);
    v7[6] = *((int*)(a2) + 9);
    v7[8] = *((int*)(a2) + 2);
    v7[9] = *((int*)(a2) + 6);
    v7[10] = *((int*)(a2) + 10);
    v7[3] = -(v5 + v6);
    v7[7] = -(v7[4] * *((int*)(a2) + 3) + v7[6] * *((int*)(a2) + 11) + v7[5] * *((int*)(a2) + 7));
    v7[11] = -(v7[8] * *((int*)(a2) + 3) + v7[10] * *((int*)(a2) + 11) + v7[9] * *((int*)(a2) + 7));
    qmemcpy(a1, v7, 0x30u);
    return a1;
}
}

// ==== BACKFILL 0x005AFEF0  SmallFunc_5AFEF0  cls=MechLocomotionClass  sig=csp  renamed_refs=0 ====
int E4Recv_5AFEF0::sub_5AFEF0()
{
{
    int v2;
    LocomotionClass::Init((int *)this);
    this->M24 = g_MatrixTransformState;
    this->M28 = DataGlobal_ABEE14;
    this->M32 = DataGlobal_ABEE18;
    this->M36 = g_MatrixTransformState;
    this->M40 = DataGlobal_ABEE14;
    v2 = DataGlobal_ABEE18;
    this->M48 = 0;
    *(void**)this = vt_MechLocomotionClass;
    this->M44 = v2;
    this->M4 = &vt_MechLocomotionClass;
    return this;
}
}

// ==== BACKFILL 0x005AFF50  sub_5AFF50  cls=MechLocomotionClass  sig=csp  renamed_refs=0 ====
void E4Recv_5AFF50::sub_5AFF50()
{
{
    *(void**)this = vt_MechLocomotionClass;
    this->M4 = &vt_MechLocomotionClass;
    LocomotionClass::Construct(this);
}
}

// ==== BACKFILL 0x005AFF70  JumpjetLocomotionClass::SmallStub_5AFF70  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
char JumpjetLocomotionClass::SmallStub_5AFF70(int a1)
{
{
    return *(char *)(a1 + 44);
}
}

// ==== BACKFILL 0x005AFF80  JumpjetLocomotionClass::GetMovementCoordinate_1  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_1(unsigned int * a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    int *v5;
    if ( (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
  {
    result = a2;
    v3 = *((int*)(a1) + 6);
    v4 = *((int*)(a1) + 7);
    v5 = a2;
    *a2 = *((int*)(a1) + 5);
  }
    else
  {
    result = a2;
    v3 = DataGlobal_ABEE14;
    v4 = DataGlobal_ABEE18;
    v5 = a2;
    *a2 = g_MatrixTransformState;
  }
    v5[1] = v3;
    v5[2] = v4;
    return result;
}
}

// ==== BACKFILL 0x005AFFE0  JumpjetLocomotionClass::GetRenderCoordinate_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0 ====
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_0(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    if ( *((int*)(a1) + 8) == g_MatrixTransformState && *((int*)(a1) + 9) == DataGlobal_ABEE14 && *((int*)(a1) + 10) == DataGlobal_ABEE18 )
  {
    v5 = *((int*)(a1) + 2);
    v6 = v5 + 156;
    v7 = *(int *)(v5 + 156);
    v8 = *(int *)(v5 + 160);
    v9 = *(int *)(v6 + 8);
    *a2 = v7;
    *((int*)(a2) + 1) = v8;
    *((int*)(a2) + 2) = v9;
    return a2;
  }
    else
  {
    v2 = *((int*)(a1) + 9);
    v3 = *((int*)(a1) + 10);
    *a2 = *((int*)(a1) + 8);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
}
}
