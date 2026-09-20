// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x007631F0  WaveClass::GetTypeIdentifier  cls=WaveClass  sig=csp  renamed_refs=0 ====
int WaveClass::GetTypeIdentifier()
{
return 43;
}

// ==== BACKFILL 0x00763200  WaveClass::ddtor  cls=WaveClass  sig=csp  renamed_refs=0 ====
WaveClass * WaveClass::ddtor(char a2)
{
    WaveClass* v7 = this;
    WaveClass* blk = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    DataGlobal_A8EC38;
    int v2 = DataGlobal_A8EC38.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < DataGlobal_A8EC48 && v2 < --DataGlobal_A8EC48 )
    {
        do
        {
            ++v2;
            *(DataGlobal_A8EC3C + v2 - 1) = *(DataGlobal_A8EC3C + v2);
        }
        while ( v2 < DataGlobal_A8EC48 );
    }
    blk->cellVector->Delete();
    void *v4 = blk->cellItems;
    blk->cellVector = nullptr;
    if ( v4 && blk->cellFlag )
    {
        OperatorDelete(v4);
        blk->cellItems = nullptr;
    }
    blk->cellFlag = 0;
    blk->cellCapacity = 0;
    ObjectClass::Dtor(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x00763610  Waypoint::To_String  cls=unknown  sig=csp  renamed_refs=0 ====
CHAR * Waypoint::To_String(CCINIClass * aP0)
{
{
    if ( aP0 == (CCINIClass *)-1 )
  {
    DataGlobal_B72654 = 0;
    return &DataGlobal_B72654;
  }
    else
  {
    if ( (int)aP0 >= 26 )
    wsprintfA(&DataGlobal_B72654, "%c%c", (int)aP0 / 26 + 64, (int)aP0 % 26 + 65);
    else
    wsprintfA(&DataGlobal_B72654, "%c", aP0->__pad_41);
    return &DataGlobal_B72654;
  }
}
}

// ==== BACKFILL 0x00763700  sub_763700  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_763700::sub_763700(unsigned int * a2)
{
{
    *(void**)this = *a2;
    this->M4 = *((int*)(a2) + 1);
    this->M8 = *((int*)(a2) + 2);
    return this;
}
}

// ==== BACKFILL 0x00763720  nullsub_84  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void nullsub_84()
{
  ;
}

// ==== BACKFILL 0x00763C00  WaypointPathClass::PowerDrainUpdate  cls=WaypointPathClass  sig=csp  renamed_refs=0 ====
int WaypointPathClass::PowerDrainUpdate(int a2)
{
{
    AbstractClass::ProcessPower((#378 *)this);
    Power::TimerProcess(this->idxArray);
    return Power::TimerProcess(this->waypoints.Count);
}
}

// ==== BACKFILL 0x00763C30  WaypointPathClass::ddtor  cls=WaypointPathClass  sig=csp  renamed_refs=0 ====
int WaypointPathClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -147774022;
  a2[1] = 298979412;
  a2[2] = 1610642049;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x00763D90  WaypointPathClass::SaveState  cls=WaypointPathClass  sig=csp  renamed_refs=0 ====
int WaypointPathClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    int v4;
    int v5;
    int i;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *a1;
    aP2 = *(int *)&aP0->BarrelVoxel[20];
    result = (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(a1, &aP2, 4, 0);
    if ( result >= 0 )
    {
    v5 = 0;
    if ( aP2 <= 0 )
      {
    return 0;
      }
    else
      {
    for ( i = 0; ; i += 12 )
        {
    result = (*(int (__stdcall **)(int *, int, int, int))(*a1 + 16))( a1, *(int *)&aP0->BarrelVoxel[8] + i, 12, 0);
    if ( result < 0 )
    break;
    if ( ++v5 >= aP2 )
    return 0;
        }
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x00763E00  WaypointPathClass::StubReturn64  cls=WaypointPathClass  sig=csp  renamed_refs=0 ====
int WaypointPathClass::StubReturn64()
{
return 64;
}

// ==== BACKFILL 0x00763E10  WaypointPathClass::StubReturn51  cls=WaypointPathClass  sig=csp  renamed_refs=0 ====
int WaypointPathClass::StubReturn51()
{
return 51;
}

// ==== BACKFILL 0x00763E20  WaypointPathClass::ProcessEvent  cls=WaypointPathClass  sig=csp  renamed_refs=0 ====
WaypointPathClass * WaypointPathClass::ProcessEvent(char a2)
{
{
    int v3;
    int v4;
    void **v6;
    *(void**)this = vt_WaypointPathClass;
    *(this + 1) = (unsigned int)vt_WaypointPathClass;
    *(this + 2) = (unsigned int)vt_WaypointPathClass;
    *(this + 3) = &vt_WaypointPathClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v6 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_B72608 + 16))(&DataGlobal_B72608, &v6);
    if ( v3 != -1 && v3 < DataGlobal_B72618 && v3 < --DataGlobal_B72618 )
  {
    do
    {
    ++v3;
    *((int *)(DataGlobal_B7260C) + v3 - 1) = *((int *)(DataGlobal_B7260C) + v3);
    }
    while ( v3 < DataGlobal_B72618 );
  }
    v4 = (int)*(this + 11);
    *(this + 10) = &vt_VectorClass_WaypointClass;
    if ( v4 && this->waypoints.IsAllocated )
  {
    __3_YAXPAX_Z((void *)(v4 - 4));
    *(this + 11) = 0;
  }
    this->waypoints.IsAllocated = 0;
    *(this + 12) = 0;
    AbstractClass::DTOR(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (WaypointPathClass *)this;
}
}

// ==== BACKFILL 0x00763EF0  AbstractClass::checkSuperWeaponStatus  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void AbstractClass::checkSuperWeaponStatus() {
{
    int v2;
    v2 = this->vtable1;
    this->uniqueId = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z((void *)(v2 - 4));
    this->vtable1 = 0;
  }
    this->IsAllocated = 0;
    this->vtable2 = 0;
}
} } }

// ==== BACKFILL 0x00763F30  AbstractClass::updateSuperWeaponTimer  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::updateSuperWeaponTimer(int a1) {
{
      if ( this->vtable3 )
        return (a2 - this->vtable1) / 0xCu;
      else
        return 0;
}
} } }

// ==== BACKFILL 0x00763FF0  AbstractClass::checkSWTarget  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void* AbstractClass::checkSWTarget(int a2) {
{
    int v3;
    v3 = *(this + 1);
    *(void**)this = &vt_VectorClass_WaypointClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z((void *)(v3 - 4));
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
} } }

// ==== BACKFILL 0x00764050  AbstractClass::getSWChargeState  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void* AbstractClass::getSWChargeState(int a2) {
{
    int v3;
    v3 = *(this + 1);
    *(void**)this = &vt_VectorClass_WaypointClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z((void *)(v3 - 4));
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
} } }

// ==== BACKFILL 0x00764110  AbstractClass::resetSWCharge  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::resetSWCharge(int a1, void* a2) {
{
      int v3;
      int *v5;
      _DWORD *v6;
      _DWORD *v7;
      int v8;
      _DWORD *v9;
      int v10;
      int v12;
      int v13;
      _DWORD *v14;
      _DWORD *v15;
      int v16;

      v3 = a2;
      if ( a2 )
      {
        this->vtable3 = 0;
        if ( a3 )
        {
          v6 = a3 + 1;
          *a3 = a2;
          v9 = a3 + 1;
          if ( a2 - 1 >= 0 )
          {
            v10 = a2;
            do
            {
              *v9 = 0;
              v9[1] = 0;
              v9[2] = 0;
              v9 += 3;
              --v10;
            }
            while ( v10 );
          }
        }
        else
        {
          v5 = (int *)__2_YAPAXI_Z(12 * a2 + 4);
          if ( v5 )
          {
            v6 = v5 + 1;
            *v5 = a2;
            v7 = v5 + 1;
            if ( a2 - 1 >= 0 )
            {
              v8 = a2;
              do
              {
                *v7 = 0;
                v7[1] = 0;
                v7[2] = 0;
                v7 += 3;
                --v8;
              }
              while ( v8 );
            }
          }
          else
          {
            v6 = 0;
          }
        }
        this->vtable3 = 1;
        if ( v6 )
        {
          if ( this->vtable1 )
          {
            v12 = this->vtable2;
            if ( a2 < v12 )
              v12 = a2;
            if ( v12 > 0 )
            {
              v13 = 0;
              do
              {
                v14 = (_DWORD *)(this->vtable1 + v13 * 4);
                v15 = &v6[v13];
                v13 += 3;
                --v12;
                *v15 = *v14;
                v15[1] = v14[1];
                v15[2] = v14[2];
              }
              while ( v12 );
              v3 = a2;
            }
            if ( this->IsAllocated )
            {
              v16 = this->vtable1;
              if ( v16 )
                __3_YAXPAX_Z((void *)(v16 - 4));
              this->vtable1 = 0;
            }
          }
          this->vtable1 = v6;
          this->vtable2 = v3;
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
        this->vt3();
        return 1;
      }
}
} } }

// ==== BACKFILL 0x00764220  AbstractClass::processSpecialAbility  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { void AbstractClass::processSpecialAbility() {
{
    int v2;
    v2 = this->vtable1;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z((void *)(v2 - 4));
    this->vtable1 = 0;
  }
    this->IsAllocated = 0;
    this->vtable2 = 0;
}
} } }

// ==== BACKFILL 0x00764260  AbstractClass::checkSpecialCooldown  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::checkSpecialCooldown(void* a1) {
{
      int result;
      int v3;
      _DWORD *i;

      if ( !this->vtable3 )
        return 0;
      v3 = this->vtable2;
      result = 0;
      if ( v3 <= 0 )
        return -1;
      for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 )
      {
        if ( ++result >= v3 )
          return -1;
      }
      return result;
}
} } }

// ==== BACKFILL 0x007642B0  AbstractClass::updateSpecialTimer  cls=VectorClass  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::updateSpecialTimer(int a1) {
{
      if ( this->vtable3 )
        return (a2 - this->vtable1) / 0xCu;
      else
        return 0;
}
} } }

// ==== BACKFILL 0x007642E0  AbstractClass::AllocateCoordArray  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::AllocateCoordArray(int a1, void* a2) {
{
      int v3;
      int *v5;
      int *v6;
      _DWORD *v7;
      int v8;
      _DWORD *v9;
      int v10;
      int v11;
      int v12;
      _DWORD *v13;
      _DWORD *v14;
      _DWORD *v15;
      int v16;
      _DWORD *v18;

      v3 = a2;
      if ( a2 )
      {
        v5 = a3;
        this->vtable3 = 0;
        if ( a3 )
        {
          *a3 = a2;
          v9 = a3 + 1;
          if ( a2 - 1 >= 0 )
          {
            v10 = a2;
            do
            {
              Coord::Subtract(v9, 0, 0, 0);
              v9 += 3;
              --v10;
            }
            while ( v10 );
            v5 = a3;
          }
          v7 = v5 + 1;
        }
        else
        {
          v6 = (int *)__2_YAPAXI_Z(12 * a2 + 4);
          if ( v6 )
          {
            *v6 = a2;
            v7 = v6 + 1;
            v18 = v6 + 1;
            if ( a2 - 1 >= 0 )
            {
              v8 = a2;
              do
              {
                Coord3D::Set(v7, 0, 0, 0);
                v7 += 3;
                --v8;
              }
              while ( v8 );
              v7 = v18;
              v5 = 0;
            }
          }
          else
          {
            v7 = 0;
          }
        }
        this->vtable3 = 1;
        if ( !v7 )
          return 0;
        if ( this->vtable1 )
        {
          v11 = this->vtable2;
          if ( a2 < v11 )
            v11 = a2;
          if ( v11 > 0 )
          {
            v12 = 0;
            do
            {
              v13 = &v7[v12];
              v14 = (_DWORD *)(v12 * 4 + this->vtable1);
              v12 += 3;
              --v11;
              *v13 = *v14;
              v13[1] = v14[1];
              v13[2] = v14[2];
            }
            while ( v11 );
            v3 = a2;
            v5 = a3;
          }
          if ( this->IsAllocated )
          {
            v15 = (_DWORD *)this->vtable1;
            if ( v15 )
              AbstractClass::processCleanup(v15, 3);
            this->vtable1 = 0;
          }
        }
        this->vtable1 = v7;
        this->vtable2 = v3;
        this->IsAllocated = v5 == 0;
      }
      else
      {
        this->vt3();
      }
      v16 = this->vtable2;
      if ( v16 < this->uniqueId )
        this->uniqueId = v16;
      return 1;
}
} } }

// ==== BACKFILL 0x00764420  AbstractClass::processSpecialEffect  cls=DynamicVector  sig=csp  renamed_refs=0 ====
namespace ra2 { namespace game { int AbstractClass::processSpecialEffect(void* a2) {
{
      int v2;
      int result;
      _DWORD *i;

      v2 = this->uniqueId;
      result = 0;
      if ( v2 <= 0 )
        return -1;
      for ( i = (_DWORD *)this->vtable1; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 )
      {
        if ( ++result >= v2 )
          return -1;
      }
      return result;
}
} } }

// ==== BACKFILL 0x00764B30  Audio_Create  cls=rc_ptr  sig=csp  renamed_refs=0 ====
rc_ptr * Audio_Create(rc_ptr_base * a1, const char ** a2, int a3)
{
{
    char *v6;
    ReferenceCounted *v7;
    if ( *(int *)(a3 + 4) )
  {
    v6 = (char *)__2_YAPAXI_Z(0x4Cu);
    if ( v6 )
    v7 = (ReferenceCounted *)CampaignConstructorWDT(v6, a2, a3);
    else
    v7 = 0;
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_Campaign;
    ComPtr::Set(a1, (int)v7);
    return (rc_ptr *)a1;
  }
    else
  {
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_Campaign;
    return (rc_ptr *)a1;
  }
}
}

// ==== BACKFILL 0x00764FF0  sub_764FF0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_764FF0::sub_764FF0(ScoreScreen * aP1)
{
{
    return *(this + (int)aP1 + 13);
}
}

// ==== BACKFILL 0x00765380  FindWDTTerritoryClass_Find  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_765380::sub_765380(unsigned int * a2, int a3)
{
{
    int v4;
    void **v5;
    char *v6;
    int v7;
    v6 = this + 24;
    v7 = 0;
    v5 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict;
    if ( Campaign_WorldDominationTour_24::AddRef(&v5) )
  {
    do
    {
    if ( FindWDTTerritoryClass_Find_Find(*(int **)(*((int *)(v6) + 1) + 8 * v7 + 4)) == a3 )
    break;
    ((void (__thiscall *)(void ***))v5[2])(&v5);
    }
    while ( ((unsigned char (__thiscall *)(void ***))v5[1])(&v5) );
  }
    v4 = v7;
    *((int*)(a2) + 1) = v6;
    *((int*)(a2) + 2) = v4;
    *a2 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Conflict_DynamicVectorClass_rc_ptr_WorldDominationTour_Conflict;
    return a2;
}
}

// ==== BACKFILL 0x00765580  sub_765580  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_765580(unsigned int * a1)
{
{
    int v2[22];
    BufferIOFile::Init(v2);
    CCFileClass::Reopen(v2, g_Str_File_WDTHist_ini, 1);
    if ( !File::IsReady(v2, 0) )
  {
    FileClass::Close(v2);
    CCFileClass::Close(v2);
    CCFileClass::Reopen(v2, g_Str_File_WDTHist_ini, 1);
  }
    FileStraw::Open(a1, (int)v2, 0);
    CCFileClass::Close(v2);
    v2[0] = &DataGlobal_7E1668;
    return BufferIOFileClass::Dtor(v2);
}
}

// ==== BACKFILL 0x00765710  Campaign_WorldDominationTour_16::Constructor  cls=Campaign_WorldDominationTour  sig=csp  renamed_refs=0 ====
rc_ptr * Campaign_WorldDominationTour_16::Constructor(char a2)
{
{
    *(void**)this = &vt_rc_ptr_WorldDominationTour_CampaignProperties;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
}

// ==== BACKFILL 0x00765740  Campaign_WorldDominationTour_16::Constructor_0  cls=Campaign_WorldDominationTour  sig=csp  renamed_refs=0 ====
rc_ptr * Campaign_WorldDominationTour_16::Constructor_0(char a2)
{
{
    *(void**)this = &vt_rc_ptr_WorldDominationTour_History;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
}

// ==== BACKFILL 0x00765790  COMClass::invokeMethod  cls=COMClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* COMClass::invokeMethod(int a2) {
{
    *(void**)this = &vt_rc_ptr_WorldDominationTour_Campaign;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
} }

// ==== BACKFILL 0x007657C0  COMClass::getTypeInfo  cls=COMClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* COMClass::getTypeInfo(int a2) {
{
    *(void**)this = &vt_rc_ptr_WorldDominationTour_State;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
} }

// ==== BACKFILL 0x00765C70  COMClass::releaseInterface  cls=COMClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* COMClass::releaseInterface() {
{
    ComPtr::Constructor(this);
    *(void**)this = &vt_rc_ptr_WorldDominationTour_Conflict;
    return this;
}
} }

// ==== BACKFILL 0x00765F60  Team_Create_765F60  cls=unknown  sig=csp  renamed_refs=0 ====
rc_ptr_base * Team_Create_765F60(rc_ptr_base * a1, int a2)
{
{
    rc_ptr_base *v4;
    rc_ptr_base *v5;
    rc_ptr_base *v6;
    v4 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
    v5 = v4;
    if ( v4 )
  {
    v6 = v4 + 2;
    v4[1].vfptr = 0;
    v4->vfptr = &vt_ReferenceCounted;
    ComPtr::Constructor(v4 + 2);
    v6->vfptr = &vt_rc_ptr_WDTTerritory;
    ComPtr::Set(v5 + 2, *(int *)(a2 + 4));
    v5->vfptr = &vt_WorldDominationTour_Conflict;
  }
    else
  {
    v5 = 0;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_Conflict;
    ComPtr::Set(a1, (int)v5);
    return a1;
}
}

// ==== BACKFILL 0x00766060  FindWDTTerritoryClass_Find_Find  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_766060::sub_766060()
{
{
    int v1;
    v1 = this->M12;
    if ( v1 )
    return *(int *)(v1 + 8);
    else
    return 0;
}
}

// ==== BACKFILL 0x00766880  System_Init_766880  cls=rc_ptr  sig=csp  renamed_refs=0 ====
rc_ptr * System_Init_766880(rc_ptr_base * a1, int a2, int a3, void * a4, ObjectClass * aP4)
{
{
    char *v7;
    GameOption_WorldDominationTour *v8;
    void *inited;
    char *v11;
    ObjectClass *v12;
    v8 = (GameOption_WorldDominationTour *)__2_YAPAXI_Z(0x18u);
    if ( v8 )
  {
    v12 = aP4;
    v11 = v7;
    String::AssignFromPtr(&v11, (const char **)&a4);
    inited = System_Init_766A10(v8, a2, a3, v11, v12);
  }
    else
  {
    inited = 0;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char;
    ComPtr::Set(a1, (int)inited);
    DeleteAndZero(&a4);
    return (rc_ptr *)a1;
}
}

// ==== BACKFILL 0x00766960  Conflict_WorldDominationTour_12::Constructor  cls=Conflict_WorldDominationTour  sig=csp  renamed_refs=0 ====
rc_ptr * Conflict_WorldDominationTour_12::Constructor(char a2)
{
{
    *(void**)this = &vt_rc_ptr_WorldDominationTour_ValueGameOption_unsigned_char;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
}

// ==== BACKFILL 0x00766990  Conflict_WorldDominationTour_12::Constructor_0  cls=Conflict_WorldDominationTour  sig=csp  renamed_refs=0 ====
rc_ptr * Conflict_WorldDominationTour_12::Constructor_0(char a2)
{
{
    *(void**)this = &vt_rc_ptr_WorldDominationTour_FlagGameOption;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
}

// ==== BACKFILL 0x007669C0  COMClass::connectPoint  cls=COMClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* COMClass::connectPoint(int a2) {
{
    *(void**)this = &vt_rc_ptr_WorldDominationTour_MapSizeGameOption;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
} }

// ==== BACKFILL 0x00766D30  Conflict_WorldDominationTour_12::ddtor  cls=VectorClass  sig=csp  renamed_refs=0 ====
int Conflict_WorldDominationTour_12::ddtor()
{
{
    int (__thiscall ***v2)(int, int);
    int result;
    v2 = *(int (__thiscall ****)(int, int))(this + 4);
    if ( v2 && this->IsAllocated )
  {
    result = (**v2)(v2, 3);
    this->Conflict_WorldDominationTour_12_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Conflict_WorldDominationTour_12_field_0x8 = 0;
    return result;
}
}

// ==== BACKFILL 0x007670D0  Conflict_WorldDominationTour_12::Constructor_3  cls=Conflict_WorldDominationTour  sig=csp  renamed_refs=0 ====
unsigned int * Conflict_WorldDominationTour_12::Constructor_3()
{
{
    ComPtr::Constructor(this);
    *(void**)this = &vt_rc_ptr_WorldDominationTour_GameOption;
    return this;
}
}

// ==== BACKFILL 0x00767310  Network_Connect_767310  cls=unknown  sig=csp  renamed_refs=0 ====
char sub_767310(int a1)
{
return 0;
}

// ==== BACKFILL 0x00767320  sub_767320  cls=ObjectClass  sig=csp  renamed_refs=0 ====
wchar_t ** E4Recv_767320::sub_767320(wchar_t ** a2, int a3, const wchar_t ** a4)
{
{
    int v5;
    char **v6;
    const wchar_t **v7;
    char *v8;
    wchar_t **v9;
    char *v11;
    wchar_t *v12;
    wchar_t *StringCSF;
    void *v14;
    v5 = this->Vf20(a3);
    v6 = FromStringInt((char **)&v14, v5);
    ConcatStringAlloc((char **)&a3, this + 4, v6);
    DeleteAndZero(&v14);
    v7 = a4;
    if ( WideString::Length(a4) )
  {
    WideString::Assign((wchar_t **)&a4, (wchar_t *)Control);
    v8 = String::GetOrEmpty((char **)&a3);
    StringCSF = GetStringCSF((wchar_t *)v8, 0, g_Str_File_WDTGameOptions_cpp, 22);
    v9 = ConcatWString((wchar_t **)&v14, v7, (const wchar_t **)&a4);
    WideString::AssignConcat((const wchar_t **)v9, a2, StringCSF);
    DeleteAndZero::Alt(&v14);
    DeleteAndZero::Alt((void **)&a4);
  }
    else
  {
    v11 = String::GetOrEmpty((char **)&a3);
    v12 = GetStringCSF((wchar_t *)v11, 0, g_Str_File_WDTGameOptions_cpp, 25);
    WideString::Assign(a2, v12);
  }
    DeleteAndZero((void **)&a3);
    return a2;
}
}

// ==== BACKFILL 0x00767460  ConstructorWDTFlagOption  cls=rc_ptr  sig=csp  renamed_refs=0 ====
rc_ptr * ConstructorWDTFlagOption(rc_ptr_base * a1, int a2, void * a3, int a4, void * a5, ObjectClass * aP5)
{
{
    char *v8;
    GameOption_WorldDominationTour *v9;
    char *v10;
    void *v11;
    char *v13;
    int v14;
    char *v15;
    ObjectClass *v16;
    v9 = (GameOption_WorldDominationTour *)__2_YAPAXI_Z(0x1Cu);
    if ( v9 )
  {
    v16 = aP5;
    v15 = v8;
    String::AssignFromPtr(&v15, (const char **)&a5);
    v14 = a4;
    v13 = v10;
    String::AssignFromPtr(&v13, (const char **)&a3);
    v11 = ConstructorWDTFlagOption_Create(v9, a2, v13, v14, v15, v16);
  }
    else
  {
    v11 = 0;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_FlagGameOption;
    ComPtr::Set(a1, (int)v11);
    DeleteAndZero(&a3);
    DeleteAndZero(&a5);
    return (rc_ptr *)a1;
}
}

// ==== BACKFILL 0x00767600  sub_767600  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_767600(int a1)
{
return 0;
}

// ==== BACKFILL 0x007676F0  System_Init_7676F0  cls=rc_ptr  sig=csp  renamed_refs=0 ====
rc_ptr * System_Init_7676F0(rc_ptr_base * a1, int a2)
{
{
    int *v4;
    int v5;
    v4 = (int *)__2_YAPAXI_Z(0xCu);
    if ( v4 )
  {
    v4[2] = a2;
    v4[1] = 0;
    *v4 = &vt_WorldDominationTour_MapSizeGameOption;
    v5 = (int)v4;
  }
    else
  {
    v5 = 0;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_MapSizeGameOption;
    ComPtr::Set(a1, v5);
    return (rc_ptr *)a1;
}
}

// ==== BACKFILL 0x00767800  MapSizeGameOption_WorldDominationTour::ddtor  cls=MapSizeGameOption_WorldDominationTour  sig=csp  renamed_refs=0 ====
int MapSizeGameOption_WorldDominationTour::ddtor(MapSizeOptStub **a2)
{
    return DataGlobal_848628[4 * a2[1]->mszByte18 + a2[1]->mszByte19];
}

// ==== BACKFILL 0x00767820  GameOption_WorldDominationTour::ConstructorWDTFlagOption_Create  cls=GameOption@WorldDominationTour  sig=csp  renamed_refs=0 ====
void * GameOption_WorldDominationTour::ConstructorWDTFlagOption_Create(int arg0, void * a2, int arg8, void * a4, ObjectClass * aP5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall ConstructorWDTFlagOption_Create(
        GameOption_WorldDominationTour *this,
        int arg0,
        void *a2,
        int arg8,
        void *a4,
        ObjectClass *aP5)
{
  ObjectClass *v6; // edx
  ObjectClass *v8; // ecx

  v6 = aP5; /*0x767824*/
  v8 = (ObjectClass *)arg8; /*0x76782b*/
  *((_DWORD *)this + 2) = arg0; /*0x76782f*/
  *((_DWORD *)this + 3) = v8; /*0x767836*/
  this->GameOption_WorldDominationTour_field_0x04 = 0; /*0x76783d*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::GameOption::`vftable'; /*0x767844*/
  *((_DWORD *)this + 4) = v6; /*0x76784a*/
  String::AssignFromPtr((char **)this + 5, (const char **)&a4); /*0x76784d*/
  String::AssignFromPtr((char **)this + 6, (const char **)&a2); /*0x76785a*/
  *(_DWORD *)this->__pad_0 = &WorldDominationTour::FlagGameOption::`vftable'; /*0x767863*/
  DeleteAndZero(&a2); /*0x767869*/
  DeleteAndZero(&a4); /*0x767872*/
  return this; /*0x767879*/
}
}

// ==== BACKFILL 0x00767B00  Team_Create_767B00  cls=unknown  sig=csp  renamed_refs=0 ====
rc_ptr_base * Team_Create_767B00(rc_ptr_base * a1, int a2)
{
{
    rc_ptr_base *v4;
    rc_ptr_base *v5;
    rc_ptr_base *v6;
    v4 = (rc_ptr_base *)__2_YAPAXI_Z(0x10u);
    v5 = v4;
    if ( v4 )
  {
    v6 = v4 + 2;
    v4[1].vfptr = 0;
    v4->vfptr = &vt_ReferenceCounted;
    ComPtr::Constructor(v4 + 2);
    v6->vfptr = &vt_rc_ptr_WDTState;
    ComPtr::Set(v5 + 2, *(int *)(a2 + 4));
    v5->vfptr = &vt_WorldDominationTour_History;
  }
    else
  {
    v5 = 0;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_History;
    ComPtr::Set(a1, (int)v5);
    return a1;
}
}

// ==== BACKFILL 0x00767BB0  ActivateScreenWDT  cls=unknown  sig=csp  renamed_refs=0 ====
int WDT_ActivateScreen(int a1, int a2)
{
{
    ActivateScreenWDT_Create(a2);
    return a1;
}
}

// ==== BACKFILL 0x00767C50  COMClass::marshalInterface  cls=COMClass  sig=csp  renamed_refs=0 ====
namespace gamemd { void* COMClass::marshalInterface(int a2) {
{
    *(void**)this = &vt_rc_ptr_WDTState;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
} }

// ==== BACKFILL 0x00767E90  sub_767E90  cls=MSFrameAnim  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_767E90::sub_767E90()
{
{
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = Timer::GetTicks();
    this->M24 = 0;
    *(void**)this = &vt_MSFrameAnim;
    return this;
}
}

// ==== BACKFILL 0x00767ED0  MSFrameAnim::Load  cls=MSFrameAnim  sig=csp  renamed_refs=0 ====
char MSFrameAnim::Load(int a1, int * a2)
{
{
    if ( DataGlobal_8487BC )
    RenderScoreScreen(a1, a2, 1);
    return 0;
}
}

// ==== BACKFILL 0x00767EF0  MSFrameAnim::Draw  cls=MSFrameAnim  sig=csp  renamed_refs=0 ====
void MSFrameAnim::Draw(int a1, int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    if ( DataGlobal_8487BD )
  {
    v2 = (*(int (__thiscall **)(int))(*(int *)(a1) + 124))(a1);
    v3 = (*(int (__thiscall **)(int))(*(int *)(a1) + 128))(a1);
    if ( a2 )
    {
    v4 = *((int*)(a2) + 1);
    v7 = *a2;
    v5 = *((int*)(a2) + 2);
    v6 = *((int*)(a2) + 3);
    v8 = v4;
    v10 = v6;
    v9 = v5;
    }
    else
    {
    v7 = 0;
    v8 = 0;
    v9 = v2;
    v10 = v3;
    }
    RenderScoreScreen(a1, &v7, 1);
  }
}
}

// ==== BACKFILL 0x00767F80  MSFrameAnim::UpdateFrame  cls=MSFrameAnim  sig=csp  renamed_refs=0 ====
unsigned int * MSFrameAnim::UpdateFrame(unsigned int * a1)
{
{
    *a1 = 0;
    *((int*)(a1) + 1) = 0;
    *((int*)(a1) + 2) = 640;
    *((int*)(a1) + 3) = 480;
    return a1;
}
}

// ==== BACKFILL 0x00767FB0  ConstructWDTSelection_Create_767FB0  cls=rc_ptr  sig=csp  renamed_refs=0 ====
rc_ptr * ConstructWDTSelection_Create_767FB0(rc_ptr_base * a1, int a2, int a3, ReferenceCounted * aP3)
{
{
    void *v6;
    ReferenceCounted *v7;
    v6 = (void *)__2_YAPAXI_Z(0xD4u);
    if ( v6 )
    v7 = (ReferenceCounted *)ConstructWDTSelection_Create_767FB0_Create(v6, a2, a3, aP3);
    else
    v7 = 0;
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_Map;
    ComPtr::Set(a1, (int)v7);
    return (rc_ptr *)a1;
}
}

// ==== BACKFILL 0x00769490  sub_769490  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_769490::sub_769490(unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    result = this;
    v3 = this->M4;
    *(void**)(this) += *a2;
    v4 = this->M8 + 1;
    result[1] = *((int*)(a2) + 1) + v3;
    result[2] = v4;
    return result;
}
}

// ==== BACKFILL 0x00769C40  ??0Iostream_init_QAE_XZ_9  cls=ObjectClass  sig=csp  renamed_refs=0 ====
Iostream_init * E4Recv_769C40::__0Iostream_init_QAE_XZ_9()
{
{
    return this;
}
}

// ==== BACKFILL 0x00769D70  Map_Load_769D70  cls=unknown  sig=csp  renamed_refs=0 ====
unsigned int * sub_769D70(unsigned int * a1, int a2)
{
{
    *((int*)(a1) + 1) = a2;
    *((int*)(a1) + 2) = 0;
    *a1 = &vt_VectorCursor_TRect_int_VectorClass_TRect_int;
    return a1;
}
}

// ==== BACKFILL 0x00769D90  MSFrameAnim::resumeAnimation  cls=MSFrameAnim  sig=csp  renamed_refs=0 ====
rc_ptr * MSFrameAnim::resumeAnimation(char a2)
{
{
    *(void**)this = &vt_rc_ptr_WorldDominationTour_Map;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
}

// ==== BACKFILL 0x0076A7C0  MSFrameAnim::drawFrame  cls=MSFrameAnim  sig=csp  renamed_refs=0 ====
unsigned int * MSFrameAnim::drawFrame()
{
{
    ComPtr::Constructor(this);
    *(void**)this = &vt_rc_ptr_WorldDominationTour_Territory;
    return this;
}
}

// ==== BACKFILL 0x0076AAF0  ParseWDTTerritories_Parse  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_76AAF0::sub_76AAF0()
{
{
    this->M4 = 0;
    *(void**)this = &DataGlobal_7F7220;
    this->M8 = 0;
    this->M14 = 10;
    this->M15 = 10;
    this->M16 = 10000;
    this->M12 = 0;
    this->M29 = 0;
    this->M30 = 0;
    this->M31 = 0;
    this->M34 = 0;
    this->M37 = 0;
    this->M40 = 0;
    this->M46 = 0;
    this->M49 = 0;
    this->M52 = 0;
    this->M32 = 100;
    this->M35 = 100;
    this->M38 = 100;
    this->M41 = 100;
    this->M44 = 100;
    this->M47 = 100;
    this->M50 = 100;
    this->M53 = 100;
    this->M18 = 1;
    this->M19 = 1;
    this->M20 = 2;
    this->M28 = 1;
    this->M33 = 50;
    this->M36 = 50;
    this->M39 = 50;
    this->M42 = 50;
    this->M43 = 1;
    this->M45 = 50;
    this->M48 = 50;
    this->M51 = 50;
    this->M54 = 50;
    this->M56 = -1;
    this->M60 = -1;
    return this;
}
}

// ==== BACKFILL 0x0076AB90  sub_76AB90  cls=WDTTerritory  sig=csp  renamed_refs=0 ====
void E4Recv_76AB90::sub_76AB90()
{
{
    this->vfptr = &vt_WDTTerritory;
    ReferenceCounted::Constructor(this);
}
}

// ==== BACKFILL 0x0076ABA0  Audio_Set  cls=rc_ptr  sig=csp  renamed_refs=0 ====
rc_ptr * Audio_Set(rc_ptr_base * a1, void * a2)
{
{
    char *v4;
    WDTState *WDT;
    v4 = (char *)__2_YAPAXI_Z(0x4Cu);
    if ( v4 )
    WDT = (WDTState *)File::LoadWDT(v4, a2);
    else
    WDT = 0;
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WDTState;
    ComPtr::Set(a1, (int)WDT);
    return (rc_ptr *)a1;
}
}

// ==== BACKFILL 0x0076ABE0  sub_76ABE0  cls=WDTState  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_76ABE0::sub_76ABE0()
{
{
    char *v2;
    int v3;
    void (__thiscall ***v4)(int, int);
    bool v5;
    void **v7;
    void (__thiscall ***v8)(int, int);
    int v9;
    char v10;
    char v11;
    int v12;
    int v13;
    v2 = (char *)(this + 11);
    this->M4 = 0;
    v13 = 10;
    this->M64 = 10;
    this->M56 = 1;
    v10 = 1;
    this->M48 = 0;
    this->M52 = 0;
    this->M57 = 0;
    this->M44 = &vt_DynamicVectorClass_rc_ptr_WDTTerritory;
    this->M60 = 0;
    *(void**)this = &vt_WDTState;
    this->M20 = 0;
    this->M24 = 0;
    this->M32 = 0;
    this->M36 = 0;
    this->M40 = 1000000;
    v8 = 0;
    v9 = 0;
    v11 = 0;
    v7 = &vt_DynamicVectorClass_rc_ptr_WDTTerritory;
    v12 = 0;
    sub_76B7B0(this + 11, &v7);
    v3 = v13;
    *((int *)(v2) + 4) = v12;
    v4 = v8;
    v5 = v8 == 0;
    *((int *)(v2) + 5) = v3;
    v7 = &vt_VectorClass_rc_ptr_WDTTerritory;
    if ( !v5 && v11 )
    (**v4)(v4, 3);
    this->M68 = 0;
    return this;
}
}

// ==== BACKFILL 0x0076BC60  WDTState_4::Constructor  cls=WDTState  sig=csp  renamed_refs=0 ====
unsigned int * WDTState_4::Constructor()
{
{
    ComPtr::Constructor(this);
    *(void**)this = &vt_rc_ptr_WDTTerritory;
    return this;
}
}

// ==== BACKFILL 0x0076BE90  Audio_Create_76BE90  cls=rc_ptr  sig=csp  renamed_refs=0 ====
rc_ptr * Audio_Create_76BE90(rc_ptr_base * a1, int a2)
{
{
    char *v4;
    ReferenceCounted *v5;
    v4 = (char *)__2_YAPAXI_Z(0x18u);
    if ( v4 )
    v5 = (ReferenceCounted *)Audio_Create_76BF00(v4, a2);
    else
    v5 = 0;
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_CampaignProperties;
    ComPtr::Set(a1, (int)v5);
    return (rc_ptr *)a1;
}
}

// ==== BACKFILL 0x0076BFB0  ConstructWDTSelection_Create_76BFB0  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_76BFB0()
{
return 1;
}

// ==== BACKFILL 0x0076BFE0  Conflict::GetOwnerHouse  cls=Conflict  sig=csp  renamed_refs=1 ====
namespace gamemd { namespace wdt { int Conflict::GetOwnerHouse() {
{
      int v1;

      v1 = this->Outcome;
      if ( v1 )
        return *(_DWORD *)(v1 + 36) - 1;
      else
        return 0;
}
} } }

// ==== BACKFILL 0x0076D3A0  sub_76D3A0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
bool E4Recv_76D3A0::sub_76D3A0(unsigned int * a2)
{
{
    int v3;
    ObjectClass *v4;
    bool v5;
    rc_ptr_base v7;
    rc_ptr_base v8;
    int v9;
    int v10;
    v10 = 0;
    v3 = Surface::PixelToIndex(this->M1116, a2);
    if ( v3 != this->M1120 )
  {
    this->M1120 = v3;
    v4 = (ObjectClass *)ComPtr::DestroyWrapper((int)&v8, v3);
    TerritorySelectWDT(this, v4);
    ComPtr::Territory_Dtor(&v8);
  }
    FindTerritoryWOL(&v8, this->M1116 + 44, this->M1120);
    ComPtr::Constructor(&v7);
    v7.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Set(&v7, v9);
    v8.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Release(&v8);
    v5 = TerritorySelectWDT(this, (ObjectClass *)&v7);
    v7.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Release(&v7);
    return v5;
}
}

// ==== BACKFILL 0x0076D470  sub_76D470  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_76D470::sub_76D470(unsigned int * a2)
{
{
    int *result;
    rc_ptr_base v4;
    result = (int *)Surface::PixelToIndex(this->M1116, a2);
    if ( result != (int *)this->M1120 )
  {
    this->M1120 = (int)result;
    FindTerritoryWOL(&v4, this->M1116 + 44, (int)result);
    TerritorySelectWDT(this, (ObjectClass *)&v4);
    v4.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    return ComPtr::Release(&v4);
  }
    return result;
}
}

// ==== BACKFILL 0x0076DED0  sub_76DED0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_76DED0::sub_76DED0()
{
{
    int v2;
    int result;
    MSShapeAnim *v4;
    void **v5;
    int v6;
    int v7;
    v7 = 0;
    v2 = this->M1116;
    v5 = (unsigned int)vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory;
    v6 = v2 + 44;
    for ( result = VectorCursor::HasNext(&v5); (char)result; result = ((int (__thiscall *)(void ***))v5[1])(&v5) )
  {
    v4 = (MSShapeAnim *)WDTObject::GetAndClearFlag(*(int **)(*(int *)(v6 + 4) + 8 * v7 + 4));
    if ( v4 )
    Session::RemoveTeam(this, v4);
    ((void (__thiscall *)(void ***))v5[2])(&v5);
  }
    return result;
}
}

// ==== BACKFILL 0x0076DF50  sub_76DF50  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_76DF50::sub_76DF50()
{
{
    int v2;
    int result;
    MSShapeAnim *v4;
    void **v5;
    int v6;
    int v7;
    v7 = 0;
    v2 = this->M1116;
    v5 = (unsigned int)vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory;
    v6 = v2 + 44;
    for ( result = VectorCursor::HasNext(&v5); (char)result; result = ((int (__thiscall *)(void ***))v5[1])(&v5) )
  {
    v4 = (MSShapeAnim *)WDTObject::GetAndClearFlag(*(int **)(*(int *)(v6 + 4) + 8 * v7 + 4));
    if ( v4 )
    Session::RemoveTeam(this, v4);
    ((void (__thiscall *)(void ***))v5[2])(&v5);
  }
    return result;
}
}

// ==== BACKFILL 0x0076DFD0  sub_76DFD0  cls=ObjectClass  sig=csp  renamed_refs=0 ====
void E4Recv_76DFD0::sub_76DFD0()
{
{
    void *v2;
    void **v3;
    char *v4;
    int v5;
    String::Assign((char **)&v2, aMapenter);
    if ( String::NotEquals((const char **)&v2, 0) )
  {
    v4 = this + 1172;
    v5 = 0;
    v3 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry;
    if ( Vector::HasCapacity(&v3) )
    {
    do
      {
    if ( !String::Compare((const char **)&v2, *(const char ***)(*((int *)(v4) + 1) + 4 * v5)) )
    break;
    ((void (__thiscall *)(void ***))v3[2])(&v3);
      }
    while ( ((unsigned char (__thiscall *)(void ***))v3[1])(&v3) );
    }
    if ( ((unsigned char (__thiscall *)(void ***))v3[1])(&v3) )
    nullsub_24(*(int *)(*((int *)(v4) + 1) + 4 * v5));
  }
    DeleteAndZero(&v2);
}
}

// ==== BACKFILL 0x0076E090  sub_76E090  cls=ObjectClass  sig=csp  renamed_refs=0 ====
unsigned int * E4Recv_76E090::sub_76E090()
{
{
    ObjectClass *v3;
    rc_ptr_base v4;
    void **v5;
    int *v6;
    int v7;
    String::Assign((char **)&v3, aMapleave);
    if ( String::NotEquals((const char **)&v3, 0) )
  {
    v6 = this + 293;
    v7 = 0;
    v5 = &vt_VectorCursor_MSSfxEntry_DynamicVectorClass_MSSfxEntry;
    if ( Vector::HasCapacity(&v5) )
    {
    do
      {
    if ( !String::Compare((const char **)&v3, *(const char ***)(v6[1] + 4 * v7)) )
    break;
    ((void (__thiscall *)(void ***))v5[2])(&v5);
      }
    while ( ((unsigned char (__thiscall *)(void ***))v5[1])(&v5) );
    }
    if ( ((unsigned char (__thiscall *)(void ***))v5[1])(&v5) )
    nullsub_24();
  }
    DeleteAndZero((void **)&v3);
    this->M1120 = -1;
    ComPtr::Constructor(&v4);
    v4.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    TerritorySelectWDT(this, (ObjectClass *)&v4);
    v4.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    return ComPtr::Release(&v4);
}
}

// ==== BACKFILL 0x0076F000  ComPtr::DestroyWrapper  cls=unknown  sig=csp  renamed_refs=0 ====
int ComPtr::DestroyWrapper(int aP0, ObjectClass * aP1)
{
{
    int v2;
    FindTerritoryWOL((ObjectClass *)aP0, v2 + 44, (int)aP1);
    return aP0;
}
}

// ==== BACKFILL 0x0076F020  FileClass::GetState  cls=FileClass  sig=csp  renamed_refs=0 ====
int FileClass::GetState()
{
{
    return this->FilePointer;
}
}

// ==== BACKFILL 0x0076F060  ComPtr::Territory_Dtor  cls=ComPtr  sig=csp  renamed_refs=0 ====
namespace gamemd { void* ComPtr::Territory_Dtor() {
{
    *(void**)this = &vt_rc_ptr_WorldDominationTour_Territory;
    return ComPtr::Release(this);
}
} }

// ==== BACKFILL 0x0076F070  FileClass::SetState  cls=FileClass  sig=csp  renamed_refs=0 ====
int FileClass::SetState()
{
{
    return this->FilePointer;
}
}

// ==== BACKFILL 0x0076F470  ActivateScreenWDT_Create  cls=unknown  sig=csp  renamed_refs=0 ====
rc_ptr_base * ActivateScreenWDT_Create(rc_ptr_base * a1, int a2, unsigned int a3)
{
{
    rc_ptr_base *v5;
    rc_ptr_base *v6;
    rc_ptr_base *v7;
    int *vfptr;
    v5 = (rc_ptr_base *)__2_YAPAXI_Z(0x14u);
    v6 = v5;
    if ( v5 )
  {
    v7 = v5 + 2;
    v5[1].vfptr = 0;
    v5->vfptr = &vt_ReferenceCounted;
    ComPtr::Constructor(v5 + 2);
    v7->vfptr = &vt_rc_ptr_WDTState;
    ComPtr::Set(v6 + 2, *(int *)(a2 + 4));
    v6[4].vfptr = 0;
    v6->vfptr = &vt_WorldDominationTour_State;
    vfptr = v6[3].vfptr;
    if ( vfptr && a3 < vfptr[9] )
    v6[4].vfptr = *(void **)(vfptr[17] + 4 * a3);
  }
    else
  {
    v6 = 0;
  }
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_State;
    ComPtr::Set(a1, (int)v6);
    return a1;
}
}

// ==== BACKFILL 0x0076F910  ArtConfig_Read  cls=rc_ptr  sig=csp  renamed_refs=0 ====
rc_ptr * ArtConfig_Read(rc_ptr_base * a1, int edx0, unsigned int * a2, ReferenceCounted * Source, char ** a4, ReferenceCounted * aP5)
{
{
    char *v8;
    ReferenceCounted *v9;
    v8 = (char *)__2_YAPAXI_Z(0x30u);
    if ( v8 )
    v9 = (ReferenceCounted *)WorldDominationTour::Territory::Constructor(v8, edx0, a2, Source, (const char **)a4, aP5);
    else
    v9 = 0;
    ComPtr::Constructor(a1);
    a1->vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Set(a1, (int)v9);
    return (rc_ptr *)a1;
}
}

// ==== BACKFILL 0x0076FF40  FindTerritoryWOL  cls=rc_ptr  sig=csp  renamed_refs=0 ====
rc_ptr * FindTerritoryWOL(ObjectClass * aP0, int a2, int a3)
{
{
    char v4;
    rc_ptr_base *v5;
    rc_ptr_base v7;
    void **v8;
    int v9;
    int v10;
    int v11;
    v4 = 0;
    v11 = 0;
    v9 = a2;
    v10 = 0;
    v8 = &vt_VectorCursor_rc_ptr_WorldDominationTour_Territory_DynamicVectorClass_rc_ptr_WorldDominationTour_Territory;
    if ( VectorCursor::HasNext(&v8) )
  {
    do
    {
    if ( *(int *)(*(int *)(*(int *)(v9 + 4) + 8 * v10 + 4) + 8) == a3 )
    break;
    ((void (__thiscall *)(void ***))v8[2])(&v8);
    }
    while ( ((unsigned char (__thiscall *)(void ***))v8[1])(&v8) );
  }
    if ( ((unsigned char (__thiscall *)(void ***))v8[1])(&v8) )
  {
    v5 = (rc_ptr_base *)(*(int *)(v9 + 4) + 8 * v10);
  }
    else
  {
    ComPtr::Constructor(&v7);
    v7.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    v4 = 1;
    v5 = &v7;
  }
    ComPtr::Constructor((rc_ptr_base *)aP0);
    *(int *)aP0->__pad_0 = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Set((rc_ptr_base *)aP0, (int)v5[1].vfptr);
    if ( (v4 & 1) != 0 )
  {
    v7.vfptr = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Release(&v7);
  }
    return (rc_ptr *)aP0;
}
}
