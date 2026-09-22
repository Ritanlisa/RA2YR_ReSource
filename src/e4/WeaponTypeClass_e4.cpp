// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x512680
void * WeaponTypeClass::Create()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x51269c*/
    return 0; /*0x5126ff*/
  int v2 = 0; /*0x5126ad*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x5126b1*/
  {
LABEL_6:
    _BYTE * v3 = (_BYTE *)__2_YAPAXI_Z(0x1B0u); /*0x5126d6*/
    if ( v3 ) /*0x5126e5*/
      return (HouseTypeClass *)SuperWeaponTypeClass::Construct(v3, this); /*0x5126f1*/
    return 0; /*0x5126e5*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)g_SuperWeaponTypeCount + v2) + 36), this) ) /*0x5126ca*/
  {
    if ( ++v2 >= g_SuperWeaponTypeArray ) /*0x5126d4*/
      goto LABEL_6; /*0x5126d4*/
  }
  return (HouseTypeClass *)*((_DWORD *)g_SuperWeaponTypeCount + v2); /*0x5126ef*/
}
}

// 0x6CEEF0
int WeaponTypeClass::Process()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x6cef0c*/
    return 0; /*0x6cef6f*/
  int v2 = 0; /*0x6cef1d*/
  if ( *(int *)&HouseClass_Player[42484] <= 0 ) /*0x6cef21*/
  {
LABEL_6:
    int v3 = __2_YAPAXI_Z(0x100u); /*0x6cef46*/
    if ( v3 ) /*0x6cef55*/
      return SuperWeaponTypeClass::SuperWeaponTypeClass(v3, this); /*0x6cef61*/
    return 0; /*0x6cef55*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player[42472] + 4 * v2) + 36), this) ) /*0x6cef3a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player[42484] ) /*0x6cef44*/
      goto LABEL_6; /*0x6cef44*/
  }
  return *(_DWORD *)(*(_DWORD *)&HouseClass_Player[42472] + 4 * v2); /*0x6cef5f*/
}
}

// 0x771C70
unsigned int * WeaponTypeClass::Constructor(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  WeaponTypeClass *v3; // eax
  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x771c7a*/
  this->AmbientDamage = 0; /*0x771c87*/
  this->Burst = 1; /*0x771c8d*/
  this->Projectile = 0; /*0x771c97*/
  this->Damage = 0; /*0x771c9d*/
  this->Speed = 0; /*0x771ca3*/
  this->Warhead = 0; /*0x771ca9*/
  this->ROF = 0; /*0x771caf*/
  this->Range = 0; /*0x771cb6*/
  this->MinimumRange = 0; /*0x771cbf*/
  ((VectorClass *)((char *)this + 47)).Construct(0, 0); /*0x771cc5*/
  this->AttachedParticleSystem = 10; /*0x771cca*/
  this->OpenToppedAnim = 0; /*0x771cd1*/
  this->Report = &vt_TypeList_int; /*0x771cd4*/
  ((VectorClass *)((char *)this + 54)).Construct(0, 0); /*0x771ce4*/
  this->TerrainFire = 10; /*0x771ce9*/
  this->CellRangefinding = 0; /*0x771cf0*/
  this->q0D8 = &vt_TypeList_int; /*0x771cf3*/
  ((AnimTypeVector *)((char *)this + 61)).Constructor(0, 0); /*0x771d03*/
  this->IsRadBeam = 10; /*0x771d08*/
  this->AreaFire = 0; /*0x771d0f*/
  this->q0F4 = &vt_TypeList_AnimTypeClass_const; /*0x771d12*/
  this->q110 = 0; /*0x771d18*/
  this->q114 = 0; /*0x771d1e*/
  this->q118 = 0; /*0x771d24*/
  this->q11C = 0; /*0x771d2a*/
  this->q120 = 0; /*0x771d30*/
  *((_BYTE *)this + 289) = 0; /*0x771d36*/
  this->q488 = 0; /*0x771d3c*/
  this->q48C = 0; /*0x771d42*/
  this->q124 = 0; /*0x771d48*/
  this->q128 = 0; /*0x771d60*/
  this->q12C = 0; /*0x771d78*/
  this->q130 = 0x1000000; /*0x771d90*/
  this->CellRangefinding = 0; /*0x771da9*/
  this->FireOnce = 0; /*0x771daf*/
  this->NeverUse = 0; /*0x771db5*/
  this->RevealOnFire = 1; /*0x771dbb*/
  this->TerrainFire = 0; /*0x771dc2*/
  this->SabotageCursor = 0; /*0x771dc8*/
  this->MigAttackCursor = 0; /*0x771dce*/
  this->DisguiseFireOnly = 0; /*0x771dd4*/
  this->q13C = 0; /*0x771dda*/
  this->InfiniteMindControl = 0; /*0x771de0*/
  this->FireWhileMoving = 1; /*0x771de6*/
  this->DrainWeapon = 0; /*0x771ded*/
  this->FireInTransport = 1; /*0x771df3*/
  this->Suicide = 0; /*0x771dfa*/
  this->TurboBoost = 0; /*0x771e00*/
  this->Supress = 0; /*0x771e06*/
  this->Camera = 0; /*0x771e0f*/
  this->Charges = 0; /*0x771e16*/
  this->IsLaser = 0; /*0x771e1c*/
  this->DiskLaser = 0; /*0x771e22*/
  this->IsLine = 0; /*0x771e28*/
  this->IsBigLaser = 0; /*0x771e2e*/
  this->IsHouseColor = 0; /*0x771e34*/
  this->LaserDuration = 10; /*0x771e3a*/
  this->IonSensitive = 0; /*0x771e41*/
  this->AreaFire = 0; /*0x771e47*/
  this->IsElectricBolt = 0; /*0x771e4d*/
  this->DrawBoltAsLaser = 0; /*0x771e53*/
  this->IsAlternateColor = 0; /*0x771e59*/
  this->IsRadBeam = 0; /*0x771e5f*/
  this->IsRadEruption = 0; /*0x771e65*/
  this->q158 = 0; /*0x771e6b*/
  this->IsMagBeam = 0; /*0x771e71*/
  *this = &WeaponTypeClass::`vftable'; /*0x771e77*/
  this->vtable2 = &WeaponTypeClass::`vftable'; /*0x771e7d*/
  this->vtable3 = &WeaponTypeClass::`vftable'; /*0x771e83*/
  this->vtable4 = &vt_WeaponTypeClass; /*0x771e8a*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x771e91*/
  if ( *(int *)&stru_87C374[45572] < *(int *)&stru_87C374[45564] /*0x771eca*/
    || (stru_87C374[45569] || !*(_DWORD *)&stru_87C374[45564])
    && *(int *)&stru_87C374[45576] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87C374[45556] + 8))(
         &stru_87C374[45556],
         *(_DWORD *)&stru_87C374[45564] + *(_DWORD *)&stru_87C374[45576],
         0) )
  {
    v3 = (WeaponTypeClass *)(*(_DWORD *)&stru_87C374[45572])++; /*0x771ed7*/
    *(_DWORD *)(*(_DWORD *)&stru_87C374[45560] + 4 * (_DWORD)v3) = this; /*0x771ee6*/
  }
  return this; /*0x771eeb*/
}
}

// 0x771F50
int WeaponTypeClass::Destructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  WeaponTypeClass *v7; // [esp+8h] [ebp-4h] BYREF
  *(_DWORD *)this = &WeaponTypeClass::`vftable'; /*0x771f57*/
  this->vtable1 = &WeaponTypeClass::`vftable'; /*0x771f5d*/
  this->vtable2 = &WeaponTypeClass::`vftable'; /*0x771f64*/
  this->vtable3 = &vt_WeaponTypeClass; /*0x771f6b*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x771f72*/
  this->Projectile = 0; /*0x771f7d*/
  this->Warhead = 0; /*0x771f83*/
  v7 = this; /*0x771f95*/
  int v2 = (*(int (__thiscall **)(WeaponTypeClass **, int *))&WeaponTypeClass_Array->__pad_0[16])(&WeaponTypeClass_Array, &v7); /*0x771f99*/
  if ( v2 != -1 && v2 < g_WeaponTypePool && v2 < --g_WeaponTypePool ) /*0x771fb4*/
  {
    do /*0x771fcc*/
    {
      ++v2; /*0x771fbc*/
      *((_DWORD *)g_WeaponTypeConfig + v2 - 1) = *((_DWORD *)g_WeaponTypeConfig + v2); /*0x771fc0*/
    }
    while ( v2 < g_WeaponTypePool ); /*0x771fcc*/
  }
  void * v3 = this->Suicide; /*0x771fce*/
  this->Anim = &vt_VectorClass_AnimTypeClass_const; /*0x771fd4*/
  if ( v3 && this->Anim.IsAllocated ) /*0x771fe2*/
  {
    __3_YAXPAX_Z(v3); /*0x771feb*/
    this->Anim.Items = 0; /*0x771ff3*/
  }
  this->Anim.IsAllocated = 0; /*0x771ff9*/
  this->Anim.Capacity = 0; /*0x771fff*/
  void * v4 = this->q0DC; /*0x772005*/
  this->DownReport = &vt_VectorClass_int; /*0x77200b*/
  if ( v4 && this->DownReport.IsAllocated ) /*0x772019*/
  {
    __3_YAXPAX_Z(v4); /*0x772022*/
    this->DownReport.Items = 0; /*0x77202a*/
  }
  this->DownReport.IsAllocated = 0; /*0x772030*/
  this->DownReport.Capacity = 0; /*0x772036*/
  void * v5 = this->Anim; /*0x77203c*/
  this->Report = &vt_VectorClass_int; /*0x772042*/
  if ( v5 && this->Report.IsAllocated ) /*0x772050*/
  {
    __3_YAXPAX_Z(v5); /*0x772059*/
    this->Report.Items = 0; /*0x772061*/
  }
  this->Report.IsAllocated = 0; /*0x772069*/
  this->Report.Capacity = 0; /*0x77206f*/
  return AbstractTypeClass::Dtor((_DWORD *)this); /*0x77207a*/
}
}

// 0x772AE0
int WeaponTypeClass::ProcessPower(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x772ae9*/
  Power::TimerProcess(this->AmbientDamage); /*0x772af7*/
  int v3; // ecx
  LOBYTE(v3) = this->IsSonic; /*0x772afc*/
  Power::FlagProcess(a2, v3); /*0x772b05*/
  int v4; // edx
  LOBYTE(v4) = this->TurboBoost; /*0x772b0a*/
  int v5 = Power::FlagProcess(a2, v4); /*0x772b13*/
  LOBYTE(v5) = this->Supress; /*0x772b18*/
  Power::FlagProcess(a2, v5); /*0x772b21*/
  int v6; // ecx
  LOBYTE(v6) = this->Camera; /*0x772b26*/
  Power::FlagProcess(a2, v6); /*0x772b2f*/
  int v7; // edx
  LOBYTE(v7) = this->IsLaser; /*0x772b34*/
  int v8 = Power::FlagProcess(a2, v7); /*0x772b3d*/
  LOBYTE(v8) = this->IsHouseColor; /*0x772b42*/
  Power::FlagProcess(a2, v8); /*0x772b4b*/
  Power::TimerProcess(this->Burst); /*0x772b59*/
  int v9 = this->Projectile; /*0x772b5e*/
  if ( v9 ) /*0x772b66*/
  {
    int v10 = (*(int (__stdcall **)(int))(*(_DWORD *)(v9 + 4) + 16))(v9 + 4); /*0x772b6f*/
    Power::TimerProcess(v10); /*0x772b75*/
  }
  Power::TimerProcess(this->Damage); /*0x772b83*/
  Power::TimerProcess(this->Speed); /*0x772b91*/
  int v11 = this->Warhead; /*0x772b96*/
  if ( v11 ) /*0x772b9e*/
  {
    int v12 = (*(int (__stdcall **)(int))(*(_DWORD *)(v11 + 4) + 16))(v11 + 4); /*0x772ba7*/
    Power::TimerProcess(v12); /*0x772bad*/
  }
  Power::TimerProcess(this->ROF); /*0x772bbb*/
  Power::TimerProcess(this->Range); /*0x772bc9*/
  Power::TimerProcess(this->Report.Count); /*0x772bd7*/
  Power::TimerProcess(this->DownReport.Count); /*0x772be5*/
  Power::TimerProcess(this->Anim.Count); /*0x772bf3*/
  int v13; // edx
  LOBYTE(v13) = this->UseFireParticles; /*0x772bf8*/
  int v14 = Power::FlagProcess(a2, v13); /*0x772c01*/
  LOBYTE(v14) = this->Lobber; /*0x772c06*/
  Power::FlagProcess(a2, v14); /*0x772c0f*/
  int v15; // ecx
  LOBYTE(v15) = this->LaserDuration; /*0x772c14*/
  Power::FinalizeDrain(a2, v15); /*0x772c1d*/
  int v16; // edx
  LOBYTE(v16) = this->IsBigLaser; /*0x772c22*/
  int v17 = Power::FlagProcess(a2, v16); /*0x772c2b*/
  LOBYTE(v17) = this->IsRailgun; /*0x772c30*/
  Power::FlagProcess(a2, v17); /*0x772c39*/
  int v18; // ecx
  LOBYTE(v18) = this->Charges; /*0x772c3e*/
  Power::FlagProcess(a2, v18); /*0x772c47*/
  int v19; // edx
  LOBYTE(v19) = this->Bright; /*0x772c4c*/
  int v20 = Power::FlagProcess(a2, v19); /*0x772c55*/
  LOBYTE(v20) = this->UseSparkParticles; /*0x772c5a*/
  Power::FlagProcess(a2, v20); /*0x772c63*/
  int v21; // ecx
  LOBYTE(v21) = this->OmniFire; /*0x772c68*/
  Power::FlagProcess(a2, v21); /*0x772c71*/
  int v22; // edx
  LOBYTE(v22) = this->DistributedWeaponFire; /*0x772c76*/
  return Power::FlagProcess(a2, v22); /*0x772c84*/
}
}

// 0x772CD0
namespace gamemd {
void WeaponTypeClass_SaveLoad_Prefix()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // esi

  int * v4 = a2; /*0x772cd3*/
  _DWORD * v5 = a2 + 47; /*0x772cdd*/
  (*(void (__thiscall **)(int *))(a2[47] + 12))(a2 + 47); /*0x772ce5*/
  (*(void (__thiscall **)(int *))(v4[54] + 12))(v4 + 54); /*0x772cf4*/
  int v6 = a3; /*0x772cf7*/
  result = AbstractClass::SaveLoad_Prefix_0(v4, a3); /*0x772cfd*/
  if ( result >= 0 ) /*0x772d04*/
  {
    if ( v4 ) /*0x772d0c*/
      WeaponTypeClass::loadWeaponProperties(v4, (int)&a2); /*0x772d15*/
    if ( v4 != (int *)-244 ) /*0x772d23*/
    {
      DynamicVectorClass::AnimTypeConstructor(v4 + 61, 0, 0); /*0x772d2b*/
      v4[61] = (int)&vt_TypeList_AnimTypeClass_const; /*0x772d30*/
    }
    (*(void (__stdcall **)(int, int **, int, _DWORD, int))(*(_DWORD *)v6 + 12))(v6, &a2, 4, 0, a1); /*0x772d42*/
    for ( i = 0; i < a3; ++i ) /*0x772d4d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a4, 4, 0); /*0x772d5b*/
      DynamicVector::Add_Alt4(v4 + 61, &a4); /*0x772d69*/
    }
    if ( v5 ) /*0x772d77*/
    {
      DynamicVectorClass::Construct(v5, 0, 0); /*0x772d7f*/
      *v5 = &vt_TypeList_int; /*0x772d84*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a3, 4, 0); /*0x772d97*/
    for ( j = 0; j < a3; ++j ) /*0x772da2*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a4, 4, 0); /*0x772db0*/
      DynamicVector::Add_Alt(v5, &a4); /*0x772dba*/
    }
    if ( v4 != (int *)-216 ) /*0x772dce*/
      TypeList::Construct(v4 + 54); /*0x772dd2*/
    (*(void (__stdcall **)(int, int *, int))(*(_DWORD *)v6 + 12))(v6, &a3, 4); /*0x772de3*/
    for ( k = 0; k < (int)a2; ++k ) /*0x772dee*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a3, 4, 0); /*0x772dfc*/
      DynamicVector::Add_Alt(v4 + 54, &a3); /*0x772e06*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 43); /*0x772e1e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 40); /*0x772e2f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 71); /*0x772e40*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 69); /*0x772e51*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 68); /*0x772e62*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 70); /*0x772e73*/
    for ( m = 0; m < v4[65]; ++m ) /*0x772e83*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4[62] + 4 * m)); /*0x772e94*/
    return 0; /*0x772ea4*/
  }
  return result; /*0x772ea6*/
}
}
} // namespace gamemd

// 0x772EB0
namespace gamemd {
void WeaponTypeClass_SaveLoad_Prefix_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix(a2, a3, a4); /*0x772ec1*/
  if ( result >= 0 ) /*0x772ec8*/
  {
    int v6 = *a3; /*0x772ed4*/
    a4 = a2[65]; /*0x772ee1*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD, int))(v6 + 16))(a3, &a4, 4, 0, a1); /*0x772ee5*/
    for ( i = 0; i < a5; ++i ) /*0x772ef0*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[62] + 4 * i, 4, 0); /*0x772f03*/
    int v8 = *a3; /*0x772f13*/
    a5 = a2[51]; /*0x772f1f*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v8 + 16))(a3, &a5, 4, 0); /*0x772f23*/
    for ( j = 0; j < a5; ++j ) /*0x772f2e*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[48] + 4 * j, 4, 0); /*0x772f41*/
    int v10 = *a3; /*0x772f51*/
    a5 = a2[58]; /*0x772f5d*/
    (*(void (__stdcall **)(int *, int *, int))(v10 + 16))(a3, &a5, 4); /*0x772f61*/
    for ( k = 0; k < a4; ++k ) /*0x772f6c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[55] + 4 * k, 4, 0); /*0x772f7f*/
    return 0; /*0x772f89*/
  }
  return result; /*0x772f8c*/
}
}
} // namespace gamemd

// 0x7730F0
WeaponTypeClass * WeaponTypeClass::ddtor(char a2)
{
    WeaponTypeClass* v8 = this;
    WeaponTypeClass* blk = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    blk->wtField160 = 0;
    blk->wtField172 = 0;
    int v3 = WeaponTypeClass_Array.FindItemIndex(&v8);
    if ( v3 != -1 && v3 < g_WeaponTypePool && v3 < --g_WeaponTypePool )
    {
        do
        {
            ++v3;
            *(g_WeaponTypeConfig + v3 - 1) = *(g_WeaponTypeConfig + v3);
        }
        while ( v3 < g_WeaponTypePool );
    }
    void *v4 = blk->wtVec248;
    blk->wtVec244 = nullptr;
    if ( v4 && blk->wtByte257 )
    {
        OperatorDelete(v4);
        blk->wtVec248 = nullptr;
    }
    blk->wtByte257 = 0;
    blk->wtCap252 = 0;
    void *v5 = blk->wtVec220;
    blk->wtVec216 = nullptr;
    if ( v5 && blk->wtByte229 )
    {
        OperatorDelete(v5);
        blk->wtVec220 = nullptr;
    }
    blk->wtByte229 = 0;
    blk->wtCap224 = 0;
    void *v6 = blk->wtVec192;
    blk->wtVec188 = nullptr;
    if ( v6 && blk->wtByte201 )
    {
        OperatorDelete(v6);
        blk->wtVec192 = nullptr;
    }
    blk->wtByte201 = 0;
    blk->wtCap196 = 0;
    AbstractTypeClass::Dtor(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}
}

// 0x475B70
char WeaponTypeClass::ReadTrajectoryData(WeaponTypeClass * aP1, char * a2, int a4)
{
{
    BuildingTypeClass *v4;
    int v5;
    ObjectClass *v6;
    BuildingTypeClass *v8;
    char Source[125];
    short v10;
    char v11;
    Source[0] = DataGlobal_87C374[56304];
    memset(&Source[1], 0, 0x7Cu);
    v10 = 0;
    v11 = 0;
    v4 = g_TriggerClassCount;
    if ( (int)g_TriggerClassCount > 32 )
    v4 = (BuildingTypeClass *)32;
    v5 = 0;
    v8 = v4;
    if ( (int)v4 > 0 )
  {
    v6 = (ObjectClass *)g_TriggerTypeCount;
    do
    {
    if ( ((1 << v5) & a4) != 0 )
      {
    if ( Source[0] )
    strcat(Source, (const char *)&DataGlobal_817F40.nextObject);
    strcat(Source, (const char *)(*(int *)v6->__pad_0 + 36));
    v4 = v8;
      }
    ++v5;
    v6 = (ObjectClass *)((char *)(v6) + 4);
    }
    while ( v5 < (int)v4 );
  }
    return INIClass::SetString(this, (INIClass *)aP1, (INIClass *)a2, (INIClass *)Source);
}
}

// 0x475C70
char WeaponTypeClass::ReadVeteranData(unsigned char * a2, char * a3, int a4, int * Block, int a6, short a7, int a8, int a9, int a10)
{
{
    int *v10;
    int v11;
    char *SampleNameByIndex;
    char v13;
    char Source[125];
    short v17;
    char v18;
    Source[0] = g_INI_DefaultBuffer;
    memset(&Source[1], 0, 0x7Cu);
    v17 = 0;
    v18 = 0;
    if ( a8 > 0 )
  {
    v10 = Block;
    v11 = a8;
    do
    {
    if ( Source[0] )
    strcat(Source, Delimiter);
    SampleNameByIndex = VocClass::GetSampleNameByIndex(*v10++);
    strcat(Source, SampleNameByIndex);
    --v11;
    }
    while ( v11 );
  }
    v13 = INIClass::SetString(this, a2, a3, Source);
    if ( Block && HIBYTE(a7) )
    __3_YAXPAX_Z(Block);
    return v13;
}
}

// 0x771F00
unsigned int * WeaponTypeClass::loadWeaponProperties(AbstractTypeClass * aP1)
{
{
    AbstractTypeClass::Init((int)this, aP1);
    this->Report = &vt_TypeList_int;
    this->DownReport = &vt_TypeList_int;
    this->Anim = &vt_TypeList_AnimTypeClass_const;
    *(void**)this = vt_WeaponTypeClass;
    this->vtable1 = (unsigned int)vt_WeaponTypeClass;
    this->vtable2 = (unsigned int)vt_WeaponTypeClass;
    this->vtable3 = &vt_WeaponTypeClass;
    return this;
}
}

// 0x7729F0
int WeaponTypeClass::CalculateSpeed()
{
{
    int result;
    double WeatherConBoltExplosion;
    result = this->Projectile;
    if ( result && !*(int *)(result + 732) )
  {
    WeatherConBoltExplosion = (double)g_RulesClass_Instance[1].?;
    if ( *(char *)(result + 661) )
    WeatherConBoltExplosion = RulesClass::GetFiringDistance();
    result = TechnoClass::ComputeScanRange((void *)this->Range, WeatherConBoltExplosion);
    this->Speed = result;
  }
    return result;
}
}

// 0x772C90
int WeaponTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1613620790;
  a2[1] = 298979195;
  a2[2] = 1610642049;
  a2[3] = -1252326136;
  return 0;
}

// 0x7730D0
int WeaponTypeClass::GetObjectSize()
{
return 352;
}

// 0x7730E0
int WeaponTypeClass::GetTypeIdentifier()
{
return 49;
}
