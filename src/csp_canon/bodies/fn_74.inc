// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00740B10  TechnoClass::updateTargeting  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::updateTargeting() {
{
      _BYTE *v2;

      v2 = (_BYTE *)(this + 848);
      this->q6D2 = 0;
      if ( !Flag::CheckNone((_BYTE *)(this + 848)) )
        Timer::StartDouble(v2, *(double *)(this->q6C4 + 968));
      return UnitClass::ApproachEvaluate((_DWORD *)this);
}
} } }

// ==== BACKFILL 0x00741490  TechnoClass::checkTargetValidity  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::checkTargetValidity() {
return this->q6C4;
}

// ==== BACKFILL 0x00744640  UnitClass::PowerDrainUpdate  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::PowerDrainUpdate(int a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    FootClass::BeginPowerUpdate(a2);
    v3 = (*(int (__thiscall **)(int))(**(int **)(this + 1732) + 44))(this->Type);
    Power::TimerProcess(v3);
    v4 = (*(int (__stdcall **)(int))(*(int *)(this->Type + 4) + 16))(this->Type + 4);
    Power::TimerProcess(v4);
    v5 = this->FollowerCar;
    if ( v5 )
  {
    v6 = (*(int (__stdcall **)(int))(*(int *)(v5 + 4) + 16))(v5 + 4);
    Power::TimerProcess(v6);
  }
    Power::TimerProcess(this->FlagHouseIndex);
    LOBYTE(v7) = this->HasFollowerCar;
    Power::FlagProcess(a2, v7);
    LOBYTE(v8) = this->Unloading;
    v9 = Power::FlagProcess(a2, v8);
    LOBYTE(v9) = this->UnitClass_field_bool_6D2;
    Power::FlagProcess(a2, v9);
    LOBYTE(v10) = this->unknownBool687;
    return Power::FlagProcess(a2, v10);
}

/* ASM:
push    esi
push    edi
mov     edi, [esp+8+arg_0]
mov     esi, ecx
push    edi
call    FootClass__BeginPowerUpdate
mov     ecx, [esi+6C4h]
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
push    eax
mov     ecx, edi
call    Power__TimerProcess
mov     eax, [esi+6C4h]
add     eax, 4
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
push    eax
mov     ecx, edi
call    Power__TimerProcess
mov     eax, [esi+6C8h]
test    eax, eax
jz      short loc_744694
mov     edx, [eax+4]
add     eax, 4
push    eax
call    dword ptr [edx+10h]
push    eax
mov     ecx, edi
call    Power__TimerProcess

loc_744694:                             ; CODE XREF: UnitClass__PowerDrainUpdate+40↑j
mov     eax, [esi+6CCh]
mov     ecx, edi
push    eax
call    Power__TimerProcess
mov     cl, [esi+6D0h]
push    ecx
mov     ecx, edi
call    Power__FlagProcess
mov     dl, [esi+6D1h]
mov     ecx, edi
push    edx
call    Power__FlagProcess
mov     al, [esi+6D2h]
mov     ecx, edi
push    eax
call    Power__FlagProcess
mov     cl, [esi+687h]
push    ecx
mov     ecx, edi
call    Power__FlagProcess
pop     edi
pop     esi
retn    4
*/
}

// ==== BACKFILL 0x007446E0  UnitClass::HandleTargetDestroyed  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::HandleTargetDestroyed(void* a1, void* aP2)
{
{
    AbstractClass *result;
    FootClass::HandleTargetDestroyed(this, (TechnoTypeClass *)a1, (TechnoTypeClass *)aP2);
    result = 0;
    if ( (int *)this->FollowerCar == a1 )
    this->FollowerCar = 0;
    if ( (int *)this->Type == a1 )
    this->Type = 0;
    return (int)result->__pad_0;
}
}

// ==== BACKFILL 0x00746400  TechnoClass::processParasiteAttachment  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::processParasiteAttachment() {
return this->q6C4->qE1B == 0;
}

// ==== BACKFILL 0x007465B0  TechnoClass::updateParasiteState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::updateParasiteState(int a1) {
{
      if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(this + 540), HouseClass_Player) || a2 )
        return this->disguiseAsType;
      else
        return this->q6C4;
}
} } }

// ==== BACKFILL 0x007465F0  TechnoClass::detachParasites  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int TechnoClass::detachParasites(int a1) {
{
      if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(this + 540), HouseClass_Player) || a2 )
        return this->disguisedAsHouse;
      else
        return this->owner;
}
} } }

// ==== BACKFILL 0x00746C90  TechnoClass::checkSpawnState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { bool TechnoClass::checkSpawnState() {
{
      return this->q6D8 != -1 || (unsigned __int8)TechnoClass::HasPassengers((#377 *)this);
}
} } }

// ==== BACKFILL 0x00746DB0  TechnoClass::HasDeployFlags  cls=TechnoClass  sig=csp  renamed_refs=0  residual=q6E1,q6E2 ====
int TechnoClass::HasDeployFlags() const {
return this->q6E1 || this->q6E2;
}

// ==== BACKFILL 0x00746DE0  C07F5C70::ddtor  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
int C07F5C70::ddtor(int a1, _DWORD *a2)
{
    if ( !a2 )
        return -2147467261;
    *a2 = 237448650;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

// ==== BACKFILL 0x00746E30  TechnoClass::checkIronCurtainState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* TechnoClass::checkIronCurtainState(void* a1) {
{
      int v2;
      int v4;

      v4 = this;
      if ( *(_BYTE *)(this->q6C4 + 3233) )
        v2 = *ProgressTimer::GetValue((_WORD *)(this + 928), &v4);
      else
        v2 = *ProgressTimer::GetValue((_WORD *)(this + 904), &v4);
      *a2 = v2;
      return a2;
}
} } }

// ==== BACKFILL 0x00746EA0  TechnoClass::processIronCurtainExpiry  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { bool TechnoClass::processIronCurtainExpiry(void* aP1) {
{
    int *v2;
    v2 = (int *)this->uniqueId;
    return v2 && *v2 == aP1->field_0;
}
} } }

// ==== BACKFILL 0x00747370  BuildingTypeClass::FindIndex  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::FindIndex()
{
{
    int v2;
    if ( !this )
    return -1;
    v2 = 0;
    if ( (int)g_CrateCount <= 0 )
    return -1;
    while ( _strcmpi((const void *)(*(int *)&g_UnitTypeCount2->__pad_0[4 * v2] + 36), this) )
  {
    if ( ++v2 >= (int)g_CrateCount )
    return -1;
  }
    return v2;
}
}

// ==== BACKFILL 0x007473C0  UnitTypeClass::j_?do_always_noconv_codecvt_base_std__MBE_NXZ_19_0  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19_0()
{
    char __thiscall UnitTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19_0(std::codecvt_base *(void**)this)
{
    return AbstractClass::processWeaponFire(this);
}
}

// ==== BACKFILL 0x007473E0  InitVisceroidArt  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_7473E0()
{
{
    int *v0;
    int v1;
    int *v2;
    int result;
    if ( !DataGlobal_B1D13C )
  {
    v0 = __2_YAPAXI_Z(0x20u);
    if ( v0 )
    {
    v0[1] = 256;
    v0[2] = 256;
    v0[3] = 0;
    *v0 = &XSurface_Vtable;
    v0[4] = 1;
    Buffer::Init(v0 + 5, 0, 0x10000);
    *v0 = &BSurface_Vtable;
    v1 = (int)v0;
    }
    else
    {
    v1 = 0;
    }
    DataGlobal_B1D13C = v1;
    (*(void (__thiscall **)(int, int))(*(int *)(v1) + 24))(v1, 0);
  }
    if ( !DataGlobal_B1D140 )
  {
    v2 = __2_YAPAXI_Z(0x188u);
    if ( v2 )
    DataGlobal_B1D140 = (int)ConvertClass::Construct(v2, (int)&FileSystem_TEMPERAT_PAL, (int)&FileSystem_TEMPERAT_PAL, DataGlobal_B1D13C, 1, 0);
    else
    DataGlobal_B1D140 = 0;
  }
    DataGlobal_B1D144 = SearchMIXFile(DataGlobal_8459AC, 0);
    result = SearchMIXFile(DataGlobal_84599C, 0);
    DataGlobal_B1D148 = result;
    return result;
}
}

// ==== BACKFILL 0x00747590  UnitTypeClass::GetDimensions  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int * UnitTypeClass::GetDimensions(int * a2)
{
{
    int v2;
    int v3;
    v2 = this->MaxDimension - this->MaxDimension / 4;
    v3 = v2;
    if ( v2 >= 60 )
  {
    v3 = 60;
    v2 = 60;
  }
    *a2 = v3;
    *((int*)(a2) + 1) = v3;
    *((int*)(a2) + 2) = v2;
    return a2;
}
}

// ==== BACKFILL 0x007475D0  UnitTypeClass::GetDefaultDimensions  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * UnitTypeClass::GetDefaultDimensions(unsigned int * a1)
{
{
    int v1;
    v1 = 2 * DataGlobal_B1D138;
    *a1 = 256;
    *((int*)(a1) + 1) = 256;
    *((int*)(a1) + 2) = v1;
    return a1;
}
}

// ==== BACKFILL 0x00747600  sub_747600  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_747600(unsigned int * a1, int a2, unsigned int * a3)
{
{
    *a1 = *a3;
    *((int*)(a1) + 1) = *((int*)(a3) + 1);
    return a1;
}
}

// ==== BACKFILL 0x00747EB0  UnitTypeClass::ClampToGroundHeight  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * UnitTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
{
{
    int GroundHeight;
    int v3;
    int v5;
    int v6;
    int v7;
    v5 = *a2;
    v6 = *((int*)(a2) + 1);
    v7 = *((int*)(a2) + 2);
    GroundHeight = Cell::GetGroundHeight(&v5);
    v3 = v7;
    if ( v7 < GroundHeight )
    v3 = Cell::GetGroundHeight(&v5);
    *a1 = v5;
    *((int*)(a1) + 1) = v6;
    *((int*)(a1) + 2) = v3;
    return a1;
}
}

// ==== BACKFILL 0x00747F20  UnitTypeClass::GetGameplayValue  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::GetGameplayValue()
{
{
    return g_RulesClass_Instance[1].?;
}
}

// ==== BACKFILL 0x00747F30  UnitTypeClass::GetClassIdentifier  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -591576342;
  a2[1] = 298976582;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x00747F70  UnitTypeClass::PowerDrainUpdate  cls=UnitTypeClass  sig=csp  renamed_refs=8  residual=- ====
int UnitTypeClass::PowerDrainUpdate(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    BuildingTypeClass::ProcessPower(this, a2);
    Power::TimerProcess(this->qDFC);
    LOBYTE(v3) = this->Passive;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->qE0D;
    v5 = Power::FlagProcess(a2, v4);
    LOBYTE(v5) = this->qE0E;
    Power::FlagProcess(a2, v5);
    LOBYTE(v6) = this->qE0F;
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = this->UnitTypeClass_field_E10;
    v8 = Power::FlagProcess(a2, v7);
    LOBYTE(v8) = this->qE11;
    Power::FlagProcess(a2, v8);
    LOBYTE(v9) = this->IsTilter;
    Power::FlagProcess(a2, v9);
    LOBYTE(v10) = this->qE13;
    v11 = Power::FlagProcess(a2, v10);
    LOBYTE(v11) = this->qE15;
    return Power::FlagProcess(a2, v11);
}
}

// ==== BACKFILL 0x00748010  UnitTypeClass::LoadFromINI2  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::LoadFromINI2(int a1, int a2)
{
{
    int result;
    char v3;
    char Buffer[260];
    result = TechnoTypeClass::SaveLoad_Prefix(a1, a2);
    if ( result >= 0 )
  {
    if ( a1 )
    {
    TechnoTypeClass::Construct(a1, (int)&v3);
    *(int *)a1 = (unsigned int)vt_UnitTypeClass;
    *(int *)(a1 + 4) = (unsigned int)vt_UnitTypeClass;
    *(int *)(a1 + 8) = (unsigned int)vt_UnitTypeClass;
    *(int *)(a1 + 12) = &vt_UnitTypeClass;
    }
    VoxelAnimType::LoadAnim((char *)a1);
    ObjectTypeClass::Load2DArt((char *)a1);
    if ( *(int *)(a1 + 3672) )
    {
    _makepath(Buffer, 0, 0, (const char *)(a1 + 3678), Ext);
    *(int *)(a1 + 3672) = SearchMIXFile(Buffer, 0);
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x007480B0  UnitTypeClass::SaveToINI  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::SaveToINI(void * a0, TechnoTypeClass * aP1, int a3)
{
{
    int result;
    result = TechnoTypeClass::SaveLoad_Prefix_0(aP1, a0, aP1, (TechnoTypeClass *)a3);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x00748160  UnitTypeClass::GetObjectSize  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::GetObjectSize()
{
return 3704;
}

// ==== BACKFILL 0x00748170  UnitTypeClass::GetTypeIdentifier  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::GetTypeIdentifier()
{
return 40;
}

// ==== BACKFILL 0x00748180  UnitTypeClass::GetAuxField  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::GetAuxField()
{
{
    return this->ArrayIndex;
}
}

// ==== BACKFILL 0x00748190  UnitTypeClass::ddtor  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
UnitTypeClass * UnitTypeClass::ddtor(char a2)
{
{
    int v3;
    void **v5;
    *(void**)this = vt_UnitTypeClass;
    *(this + 1) = (unsigned int)vt_UnitTypeClass;
    *(this + 2) = (unsigned int)vt_UnitTypeClass;
    *(this + 3) = &vt_UnitTypeClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v5 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(UnitTypeClass_Array + 16))(&UnitTypeClass_Array, &v5);
    if ( v3 != -1 && v3 < g_CrateCount && v3 < --g_CrateCount )
  {
    do
    {
    ++v3;
    *((int *)(g_UnitTypeCount2) + v3 - 1) = *((int *)(g_UnitTypeCount2) + v3);
    }
    while ( v3 < g_CrateCount );
  }
    TechnoTypeClass::DTOR((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (UnitTypeClass *)this;
}
}

// ==== BACKFILL 0x00748360  System_Cleanup  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void sub_748360()
{
{
    if ( DataGlobal_B1D14C )
  {
    __3_YAXPAX_Z(DataGlobal_B1D14C);
    DataGlobal_B1D14C = 0;
  }
}
}

// ==== BACKFILL 0x00748380  sub_748380  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_748380(unsigned short * a1, int a2)
{
{
    int result;
    unsigned short v3;
    result = a2;
    if ( a2 > 0 )
  {
    do
    {
    v3 = *a1++;
    --result;
    *(a1 - 1) = *((short *)(DataGlobal_B1D14C) + v3);
    }
    while ( result );
  }
    return result;
}
}

// ==== BACKFILL 0x00749010  nullsub_143  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_143()
{
  ;
}

// ==== BACKFILL 0x00749060  HouseClass::InitStatArray  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int HouseClass::InitStatArray(int a1) {
{
      int v2;
      HouseClass *v3;

      this->q800 = 512;
      v2 = 0;
      v3 = (HouseClass *)this;
      do
      {
        *(_DWORD *)v3->__pad_0 = 0;
        ++v2;
        v3 = (HouseClass *)((char *)v3 + 4);
      }
      while ( v2 < this->q800 );
      this->q800 = aP1;
      return (int)aP1->__pad_0;
}
} }

// ==== BACKFILL 0x007490A0  SumArray  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Array_Sum(int * a1)
{
{
    int v1;
    int result;
    int v3;
    v1 = *((int*)(a1) + 512);
    result = 0;
    if ( v1 > 0 )
  {
    do
    {
    v3 = *a1++;
    result += v3;
    --v1;
    }
    while ( v1 );
  }
    return result;
}
}

// ==== BACKFILL 0x007490C0  ??0Iostream_init_QAE_XZ_7  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * E4Recv_7490C0::__0Iostream_init_QAE_XZ_7()
{
{
    return this;
}
}

// ==== BACKFILL 0x00749100  HouseClass::NetworkConvert  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int HouseClass::NetworkConvert() {
{
      int result;
      int v3;
      u_long *v4;

      result = this->q804;
      if ( result || (result = this->q800, v3 = 0, result <= 0) )
      {
        this->q804 = 1;
      }
      else
      {
        v4 = this;
        do
        {
          *v4 = htonl(*v4);
          result = this->q800;
          ++v3;
          ++v4;
        }
        while ( v3 < result );
        this->q804 = 1;
      }
      return result;
}
} }

// ==== BACKFILL 0x007498D0  ObjectClass::Initialize  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::Initialize() {
{
      int v2;

      ObjectClass::ctor((_DWORD *)this);
      this->q0B0 = 0;
      this->q0B8 = 0;
      this->q0C0 = 0;
      this->q0B4 = 0;
      this->q0BC = 0;
      this->q0C4 = 0;
      Int4::Set((_DWORD *)(this + 224), 0, 0, 0, 1065353216);
      Int4::Set((_DWORD *)(this + 240), 0, 0, 0, 1065353216);
      this->q100 = -1;
      this->q104 = 0;
      this->q108 = 0;
      this->q10C = 0;
      this->q110 = 0;
      this->q13C = 0;
      this->q140 = 0;
      *(_DWORD *)this = &VoxelAnimClass::`vftable';
      *(_DWORD *)(this + 4) = &VoxelAnimClass::`vftable';
      *(_DWORD *)(this + 8) = &VoxelAnimClass::`vftable';
      *(_DWORD *)(this + 12) = &vt_VoxelAnimClass;
      AbstractClass::GenerateUniqueID(this + 4);
      AudioController::Init((_DWORD *)(this + 276));
      AudioController::Init((_DWORD *)(this + 296));
      if ( DataGlobal_887398 < DataGlobal_887390
        || (DataGlobal_887395 || !DataGlobal_887390)
        && DataGlobal_88739C > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(VoxelAnimClass_Array + 8))(
             &VoxelAnimClass_Array,
             DataGlobal_887390 + DataGlobal_88739C,
             0) )
      {
        v2 = DataGlobal_887398++;
        *((_DWORD *)DataGlobal_88738C + v2) = this;
      }
      return this;
}
} } }

// ==== BACKFILL 0x00749B20  VoxelAnimClass::DrawVoxelFrame  cls=VoxelAnimClass  sig=csp  renamed_refs=1  residual=- ====
int VoxelAnimClass::DrawVoxelFrame(int a2, int a3, int a4)
{
{
    int *v5;
    char v7[12];
    v5 = (int *)this->GetCoords(v7);
    if ( (*((char *)Coord::To_Cell(&DataGlobal_87F7E8, v5) + 300) & 0x10) != 0 )
    this->q080 = 1;
    return ObjectClass::CalcDrawRect(this);
}
}

// ==== BACKFILL 0x0074AA10  VoxelAnimClass::SaveLoad_Prefix_0  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x0074AAD0  VoxelAnimClass::ddtor  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448641;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// ==== BACKFILL 0x0074AB10  VoxelAnimClass::StubReturn328  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimClass::StubReturn328()
{
return 328;
}

// ==== BACKFILL 0x0074AB20  VoxelAnimClass::StubReturn41  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimClass::StubReturn41()
{
return 41;
}

// ==== BACKFILL 0x0074AB40  VoxelAnimClass::StubReturnFalse  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimClass::StubReturnFalse(int a1)
{
return 0;
}

// ==== BACKFILL 0x0074AB50  VoxelAnimClass::DrawVoxel  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
VoxelAnimClass * VoxelAnimClass::DrawVoxel(char a2)
{
{
    VoxelAnimClass::CleanupMembers(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VoxelAnimClass *)this;
}
}

// ==== BACKFILL 0x0074B7D0  VoxelAnimTypeClass::GetClassIdentifier  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 784035174;
  a2[1] = 298978637;
  a2[2] = 1610642049;
  a2[3] = -1252326136;
  return 0;
}

// ==== BACKFILL 0x0074B810  VoxelAnimTypeClass::SaveLoad_Prefix  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
{
    int result;
    result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_VoxelAnimTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_VoxelAnimTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_VoxelAnimTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_VoxelAnimTypeClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)aP0[1].Name);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].UINameLabel[19]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].UINameLabel[23]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].UINameLabel[27]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].UINameLabel[3]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].Name[4]);
    VoxelAnimType::LoadAnim(aP0->__pad_0);
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x0074B8D0  VoxelAnimTypeClass::SaveLoad_Prefix_0  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// ==== BACKFILL 0x0074B8F0  VoxelAnimTypeClass::GetData  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
long long VoxelAnimTypeClass::GetData(ObjectTypeClass * aP1, int a3)
{
{
    __int64 result;
    result = (unsigned int)aP1;
    if ( (ObjectTypeClass *)this->Warhead == aP1 )
    this->Warhead = 0;
    if ( (ObjectTypeClass *)this->BounceAnim == aP1 )
    this->BounceAnim = 0;
    if ( (ObjectTypeClass *)this->ExpireAnim == aP1 )
    this->ExpireAnim = 0;
    if ( (ObjectTypeClass *)this->TrailerAnim == aP1 )
    this->TrailerAnim = 0;
    if ( (ObjectTypeClass *)this->Spawns == aP1 )
    this->Spawns = 0;
    if ( (ObjectTypeClass *)this->AttachedSystem == aP1 )
    this->AttachedSystem = 0;
    return result;
}
}

// ==== BACKFILL 0x0074B9F0  VoxelAnimTypeClass::GetTypeIdentifier  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimTypeClass::GetTypeIdentifier()
{
return 42;
}

// ==== BACKFILL 0x0074BA00  VoxelAnimTypeClass::GetObjectSize  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimTypeClass::GetObjectSize()
{
return 776;
}

// ==== BACKFILL 0x0074BA10  VoxelAnimTypeClass::Stub  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
char VoxelAnimTypeClass::Stub(int a1, int a2)
{
return 0;
}

// ==== BACKFILL 0x0074BA20  VoxelAnimTypeClass::StubReturnFalse  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimTypeClass::StubReturnFalse(int a1)
{
return 0;
}

// ==== BACKFILL 0x0074BA30  VoxelAnimTypeClass::ddtor  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=3  residual=- ====
VoxelAnimTypeClass * VoxelAnimTypeClass::ddtor(char a2)
{
    VoxelAnimTypeClass* v7 = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    g_AnimPoolManager;
    int v2 = g_AnimPoolManager.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < g_AnimManager && v2 < --g_AnimManager )
    {
        do
        {
            ++v2;
            *(g_AnimPoolCount + v2 - 1) = *(g_AnimPoolCount + v2);
        }
        while ( v2 < g_AnimManager );
    }
    VoxelAnimTypeClass_Array;
    int v3 = VoxelAnimTypeClass_Array.FindItemIndex(&v7);
    if ( v3 != -1 && v3 < g_MultiplayerPool && v3 < --g_MultiplayerPool )
    {
        do
        {
            ++v3;
            *(DataGlobal_A8EB2C + v3 - 1) = *(DataGlobal_A8EB2C + v3);
        }
        while ( v3 < g_MultiplayerPool );
    }
    if ( blk->SourceShared )
    {
        blk->MainVoxel = 0;
        blk->TurretVoxel = 0;
    }
    ObjectTypeClass::Destruct(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}

// ==== BACKFILL 0x0074BBA0  sub_74BBA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_74BBA0::sub_74BBA0(int a2, int a3)
{
{
    char *v4;
    *(int *)this = a2;
    v4 = this + 12;
    this->M4 = 0;
    this->M8 = -1;
    *((int *)(v4) + 1) = 0;
    *((int *)(v4) + 2) = 0;
    v4[12] = 1;
    v4[13] = 0;
    *(int *)v4 = &vt_VectorClass_unsigned_char_7F65F4;
    (*(void (__thiscall **)(char *, unsigned int, int))(*(int *)(v4) + 8))(v4, (unsigned int)(a2 + 7) >> 3, a3);
    return this;
}
}

// ==== BACKFILL 0x0074BF40  sub_74BF40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_74BF40::sub_74BF40(unsigned int a2)
{
{
    int v3;
    int v4;
    v3 = a2;
    if ( a2 >= *(void**)this )
    v3 = -1;
    v4 = this->M8;
    if ( v3 != v4 )
  {
    if ( v4 != -1 )
    SetBitfieldBit(this->M16, v4, this->M4);
    if ( v3 != -1 )
    this->M4 = BitArray::TestBit(this->M16, v3);
    this->M8 = v3;
  }
}
}

// ==== BACKFILL 0x0074E6B0  RulesClass::Reset  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int RulesClass::Reset() {
{
      _DWORD *v2;
      int i;
      int result;
      int j;
      __int16 *v6;
      int v7;
      int v8;
      double v9;
      int v10;
      _DWORD *v11;
      unsigned int v12;
      unsigned int v13;
      unsigned int v14;
      int v15;
      unsigned int v16;
      float v17;
      int v18;
      int v19;

      v2 = *(_DWORD **)(this + 176);
      this->q0AC = 0;
      for ( i = 0; i <= *v2; *(_DWORD *)(v2[2] + 4 * i - 4) = 0 )
        ++i;
      *v2 = 0;
      this->GUICloseSound = 0;
      LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
      result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8);
      for ( j = result; result; j = result )
      {
        if ( *(_DWORD *)(j + 68) == 126 && *(_BYTE *)(j + 286) >= 0x30u )
        {
          v6 = (__int16 *)(j + 36);
          v7 = Cell::PosToIndex((__int16 *)(j + 36));
          if ( v7 >= 0 && v7 < Object::ComputeAllocationSize() )
          {
            if ( *(_BYTE *)(this->q0C4 + v7) )
            {
              v8 = this->q0AC;
              if ( v8 < g_RulesClass_Instance->AircraftFogReveal )
              {
                *(_DWORD *)(this->q0B4 + 8 * v8) = *(_DWORD *)v6;
                v19 = *(__int16 *)(j + 38) - this->q0FA;
                v18 = *v6 - this->GUIBuildSound;
                v9 = Math::Sqrt((double)v18 * (double)v18 + (double)v19 * (double)v19);
                *(float *)(this->q0B4 + 8 * this->q0AC + 4) = (float)(int)(1000
                                                                                                   - Math::RoundToInt(v9));
                v10 = this->q0AC;
                v11 = *(_DWORD **)(this + 176);
                v12 = this->q0B4 + 8 * v10;
                this->q0AC = v10 + 1;
                v13 = *v11 + 1;
                v17 = *(float *)(v12 + 4);
                v14 = v13 >> 1;
                if ( v13 < v11[1] )
                {
                  for ( ; v13 > 1; v14 >>= 1 )
                  {
                    v15 = v11[2];
                    if ( *(float *)(*(_DWORD *)(v15 + 4 * v14) + 4) <= (double)v17 )
                      break;
                    *(_DWORD *)(v15 + 4 * v13) = *(_DWORD *)(v15 + 4 * v14);
                    v13 = v14;
                  }
                  *(_DWORD *)(v11[2] + 4 * v13) = v12;
                  v16 = v11[3];
                  ++*v11;
                  if ( v12 > v16 )
                    v11[3] = v12;
                  if ( v12 < v11[4] )
                    v11[4] = v12;
                }
                ++this->GUICloseSound;
              }
            }
          }
        }
        result = LayerClass::CellIteratorNext(&DataGlobal_87F7E8);
      }
      return result;
}
} }

// ==== BACKFILL 0x0074EEE0  VeinholeMonsterClass::Update  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=- ====
int VeinholeMonsterClass::Update(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}

// ==== BACKFILL 0x0074EF00  VeinholeMonsterClass::CheckStatus  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=- ====
int VeinholeMonsterClass::CheckStatus()
{
{
    return g_RulesClass_Instance->?;
}
}

// ==== BACKFILL 0x0074F2D0  VeinholeMonsterClass::ddtor  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=- ====
int VeinholeMonsterClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1368576106;
  a2[1] = 299025970;
  a2[2] = 1610615737;
  a2[3] = -318126072;
  return 0;
}

// ==== BACKFILL 0x0074F310  VeinholeMonsterClass::StubReturn63  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=- ====
int VeinholeMonsterClass::StubReturn63()
{
return 63;
}

// ==== BACKFILL 0x0074F320  VeinholeMonsterClass::StubReturn264  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=- ====
int VeinholeMonsterClass::StubReturn264()
{
return 264;
}

// ==== BACKFILL 0x0074F330  AbstractClass::checkBuildingPlacement  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::checkBuildingPlacement()
{
return -1;
}

// ==== BACKFILL 0x0074F340  VeinholeMonsterClass::SpreadTiberium  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=- ====
VeinholeMonsterClass * VeinholeMonsterClass::SpreadTiberium(char a2)
{
{
    DestroyVeinholeMonster(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VeinholeMonsterClass *)this;
}
}

// ==== BACKFILL 0x0074F360  IRTTITypeInfo::ClearBuffer  cls=IRTTITypeInfo  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void IRTTITypeInfo::ClearBuffer() {
{
      void *v2;

      v2 = *(void **)(this + 4);
      this->q010 = 0;
      if ( v2 && this->q00D )
      {
        __3_YAXPAX_Z(v2);
        this->q004 = 0;
      }
      this->q00D = 0;
      this->q008 = 0;
}
} } }

// ==== BACKFILL 0x0074F390  IRTTITypeInfo::PointerToIndex  cls=IRTTITypeInfo  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int IRTTITypeInfo::PointerToIndex(int a1) {
{
      if ( this->q00C )
        return (unsigned int)(a2 - this->q004) >> 2;
      else
        return 0;
}
} } }

// ==== BACKFILL 0x0074F540  IRTTITypeInfo::SetCapacity  cls=IRTTITypeInfo  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int IRTTITypeInfo::SetCapacity(int a1, void* a2) {
{
      _DWORD *v4;
      int v5;
      int i;
      int v7;

      if ( a2 )
      {
        this->q00C = 0;
        if ( a3 )
          v4 = a3;
        else
          v4 = __2_YAPAXI_Z(4 * a2);
        this->q00C = 1;
        if ( !v4 )
          return 0;
        if ( this->q004 )
        {
          v5 = this->q008;
          if ( a2 < v5 )
            v5 = a2;
          for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) )
            ++i;
          if ( this->q00D )
          {
            __3_YAXPAX_Z(*((void **)this + 1));
            this->q004 = 0;
          }
        }
        this->q004 = v4;
        this->q008 = a2;
        this->q00D = a3 == 0;
      }
      else
      {
        this->vt3();
      }
      v7 = this->q008;
      if ( v7 < this->q010 )
        this->q010 = v7;
      return 1;
}
} } }

// ==== BACKFILL 0x0074F5F0  IRTTITypeInfo::FindItem  cls=IRTTITypeInfo  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int IRTTITypeInfo::FindItem(void* a1) {
{
      int v2;
      int result;
      _DWORD *i;

      v2 = this->q010;
      result = 0;
      if ( v2 <= 0 )
        return -1;
      for ( i = (_DWORD *)this->q004; *i != *a2; ++i )
      {
        if ( ++result >= v2 )
          return -1;
      }
      return result;
}
} } }

// ==== BACKFILL 0x0074F620  DestroyVeinholeMonster_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_74F620::sub_74F620()
{
{
    int i;
    for ( i = 0; i <= *(int *)this; *(int *)(this->M8 + 4 * i - 4) = 0 )
    ++i;
    __Release__NonReentrantLock_details_Concurrency__QAEXXZ_0(this);
}
}

// ==== BACKFILL 0x0074F63A  ?_Release__NonReentrantLock_details_Concurrency__QAEXXZ_0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_74F63A::__Release__NonReentrantLock_details_Concurrency__QAEXXZ_0()
{
{
    *(int *)this = 0;
}
}

// ==== BACKFILL 0x0074F6F0  DestroyVeinholeMonster_Destroy_74F6F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_74F6F0::DestroyVeinholeMonster_Destroy_74F6F0(DynamicVector * aP1)
{
{
    int v2;
    DynamicVector *v3;
    int v4;
    v2 = this->M16;
    v3 = aP1;
    if ( (int)aP1 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->M16 = v4;
    if ( (int)aP1 < v4 )
  {
    do
    {
    v3 = (DynamicVector *)((char *)(v3) + 1);
    *(int *)(this->M4 + 4 * (int)v3 - 4) = *(int *)(this->M4 + 4 * (int)v3);
    }
    while ( (int)v3 < this->M16 );
  }
    return 1;
}
}

// ==== BACKFILL 0x0074F730  sub_74F730  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_74F730::sub_74F730()
{
{
    int v2;
    v2 = this->M68;
    *(int *)&this->__pad_0[4] = 0;
    *(short *)&this->__pad_0[8] = 0;
    *(short *)&this->__pad_0[10] = 0;
    this->field_3C = 0;
    this->M64 = 0;
    this->M68 = v2 & 0xFFFFFFF0;
    *(int *)this->__pad_0 = &vt_VersionClass;
    this->__pad_0[42] = 0;
    this->__pad_0[12] = 0;
    return this->__pad_0;
}
}

// ==== BACKFILL 0x0074FD20  Network::GetMaxPacketSize  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Network::GetMaxPacketSize()
{
{
    int v1;
    unsigned int *v2;
    unsigned int v4;
    v1 = 2;
    v2 = (unsigned int *)&DataGlobal_846150;
    while ( v4 < *v2 )
  {
    v2 -= 2;
    --v1;
    if ( (int)v2 < (int)&DataGlobal_846140 )
    return DataGlobal_846154;
  }
    return DataGlobal_846144[2 * v1];
}
}

// ==== BACKFILL 0x0074FEF0  INIEntry::LookupByName  cls=INIEntry  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int INIEntry::LookupByName() {
{
    ObjectClass *v2;
    const void **v3;
    v2 = 0;
    v3 = (const void **)&DataGlobal_830620.__pad_579C[67068];
    while ( _strcmpi(*v3, this) )
  {
    ++v3;
    v2 = (ObjectClass *)((char *)(v2) + 1);
    if ( (int)v3 >= (int)&DataGlobal_830620.__pad_579C[67140] )
    return (ObjectClass *)-1;
  }
    return v2;
}
} }

// ==== BACKFILL 0x0074FF40  nullsub_69  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_69()
{
  ;
}

// ==== BACKFILL 0x0074FF90  VeterancyStruct::IsVeteran  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
BOOL VeterancyStruct::IsVeteran()
{
{
    return *(void**)this >= 1.0 && *(void**)this < 2.0;
}
}

// ==== BACKFILL 0x0074FFC0  VeterancyStruct::IsRookie  cls=Crate  sig=csp  renamed_refs=0  residual=- ====
bool VeterancyStruct::IsRookie() {
{
    return *(void**)this >= 0.0 && *(void**)this < 1.0;
}
}
