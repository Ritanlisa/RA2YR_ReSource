// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/Weapon_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/WinMain_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/WebBrowser_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/AnimTypeVector_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/INIClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/VocClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TypeList_e4.hpp"  // G57w10 D supply (bare TypeList carrier)

// 0x512680
namespace gamemd {
void * WeaponTypeClass::Create(AbstractClass * Source)
{
  int v2; // esi
  SuperWeaponTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x51269c*/
    return 0; /*0x5126ff*/
  v2 = 0; /*0x5126ad*/
  if ( dword_A83CA8 <= 0 ) /*0x5126b1*/
  {
  LABEL_6:
    v3 = (SuperWeaponTypeClass *)RA2_OPNEW(0x1B0u); /*0x5126d6*/
    if ( v3 ) /*0x5126e5*/
      return SuperWeaponTypeClass::Construct(v3, Source); /*0x5126f1*/
    return 0; /*0x5126e5*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_A83C9C + v2) + 36), Source) ) /*0x5126ca*/
  {
    if ( ++v2 >= dword_A83CA8 ) /*0x5126d4*/
      goto LABEL_6; /*0x5126d4*/
  }
  return (_BYTE *)*((_DWORD *)dword_A83C9C + v2); /*0x5126ef*/
}
} // namespace gamemd
// 0x6CEEF0
namespace gamemd {
int WeaponTypeClass::Process(ObjectClass * Source)
{
  int v2; // esi
  void *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6cef0c*/
    return 0; /*0x6cef6f*/
  v2 = 0; /*0x6cef1d*/
  if ( dword_A8E340 <= 0 ) /*0x6cef21*/
  {
  LABEL_6:
    v3 = RA2_OPNEW(0x100u); /*0x6cef46*/
    if ( v3 ) /*0x6cef55*/
      return SuperWeaponTypeClass::SuperWeaponTypeClass((int)v3, Source); /*0x6cef61*/
    return 0; /*0x6cef55*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A8E334 + v2) + 36), Source) ) /*0x6cef3a*/
  {
    if ( ++v2 >= dword_A8E340 ) /*0x6cef44*/
      goto LABEL_6; /*0x6cef44*/
  }
  return *((_DWORD *)dword_A8E334 + v2); /*0x6cef5f*/
}
} // namespace gamemd
// 0x771C70
namespace gamemd {
unsigned int * WeaponTypeClass::Constructor(ObjectClass * aP1, void *a2, void *a3, void *a4, void *a5)
{
  int v3; // eax

  AbstractTypeClass::Constructor(Source); /*0x771c7a*/
  this->AmbientDamage = 0; /*0x771c87*/
  this->Burst = 1; /*0x771c8d*/
  this->Projectile = 0; /*0x771c97*/
  this->Damage = 0; /*0x771c9d*/
  this->Speed = 0; /*0x771ca3*/
  this->Warhead = 0; /*0x771ca9*/
  this->ROF = 0; /*0x771caf*/
  this->Range = 0; /*0x771cb6*/
  this->MinimumRange = 0; /*0x771cbf*/
  VectorClass::Construct((VectorClass *)this->Report, 0, 0); /*0x771cc5*/
  this->Report[5] = 10; /*0x771cca*/
  this->Report[4] = 0; /*0x771cd1*/
  this->Report[0] = (int)&(void*)(void*)&TypeList_int_vftable; /*0x771cd4*/
  VectorClass::Construct((VectorClass *)this->DownReport, 0, 0); /*0x771ce4*/
  this->DownReport[5] = 10; /*0x771ce9*/
  this->DownReport[4] = 0; /*0x771cf0*/
  this->DownReport[0] = (int)&(void*)(void*)&TypeList_int_vftable; /*0x771cf3*/
  AnimTypeVector::Constructor((AnimTypeVector *)this->Anim, 0, 0); /*0x771d03*/
  this->Anim[5] = 10; /*0x771d08*/
  this->Anim[4] = 0; /*0x771d0f*/
  this->Anim[0] = (int)&(void*)(void*)&TypeList_AnimTypeClass_const___vftable; /*0x771d12*/
  this->OccupantAnim = 0; /*0x771d18*/
  this->AssaultAnim = 0; /*0x771d1e*/
  this->OpenToppedAnim = 0; /*0x771d24*/
  this->AttachedParticleSystem = 0; /*0x771d2a*/
  this->LaserInnerColor[0] = 0; /*0x771d30*/
  this->LaserInnerColor[1] = 0; /*0x771d36*/
  this->LaserInnerColor[2] = 0; /*0x771d3c*/
  this->LaserOuterColor[0] = 0; /*0x771d42*/
  this->LaserOuterColor[1] = 0; /*0x771d48*/
  this->LaserOuterColor[2] = 0; /*0x771d4e*/
  this->LaserOuterSpread[0] = 0; /*0x771d54*/
  this->LaserOuterSpread[1] = 0; /*0x771d5a*/
  this->LaserOuterSpread[2] = 0; /*0x771d60*/
  this->UseFireParticles = 0; /*0x771d66*/
  this->UseSparkParticles = 0; /*0x771d6c*/
  this->OmniFire = 0; /*0x771d72*/
  this->DistributedWeaponFire = 0; /*0x771d78*/
  this->IsRailgun = 0; /*0x771d7e*/
  this->Lobber = 0; /*0x771d84*/
  this->Bright = 0; /*0x771d8a*/
  this->IsSonic = 0; /*0x771d90*/
  this->Spawner = 0; /*0x771d96*/
  this->LimboLaunch = 0; /*0x771d9c*/
  this->DecloakToFire = 1; /*0x771da2*/
  this->CellRangefinding = 0; /*0x771da9*/
  this->FireOnce = 0; /*0x771daf*/
  this->NeverUse = 0; /*0x771db5*/
  this->RevealOnFire = 1; /*0x771dbb*/
  this->TerrainFire = 0; /*0x771dc2*/
  this->SabotageCursor = 0; /*0x771dc8*/
  this->MigAttackCursor = 0; /*0x771dce*/
  this->DisguiseFireOnly = 0; /*0x771dd4*/
  this->DisguiseFakeBlinkTime = 0; /*0x771dda*/
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
  this->RadLevel = 0; /*0x771e6b*/
  this->IsMagBeam = 0; /*0x771e71*/
  this->vfptr = &(void*)(void*)&WeaponTypeClass_vftable; /*0x771e77*/
  this->vfptr1 = &(void*)(void*)&WeaponTypeClass_vftable; /*0x771e7d*/
  this->vfptr2 = &(void*)(void*)&WeaponTypeClass_vftable; /*0x771e83*/
  this->vfptr3 = &(void*)(void*)&WeaponTypeClass_vftable; /*0x771e8a*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->vfptr1); /*0x771e91*/
  if ( g_WeaponTypePool < dword_887570 /*0x771eca*/
    || (byte_887575 || !dword_887570)
    && dword_88757C > 0
    && ((unsigned __int8 (__thiscall *)(WeaponTypeClass **, int, _DWORD))WeaponTypeClass_Array->vfptr2)(
         &WeaponTypeClass_Array,
         dword_887570 + dword_88757C,
         0) )
  {
    v3 = g_WeaponTypePool++; /*0x771ed7*/
    *((_DWORD *)g_WeaponTypeConfig + v3) = this; /*0x771ee6*/
  }
  return &this->vfptr; /*0x771eeb*/
}
} // namespace gamemd
// 0x771F50
namespace gamemd {
int WeaponTypeClass::Destructor(void *a1)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  WeaponTypeClass *v7; // [esp+8h] [ebp-4h] BYREF

  a1->vfptr = &(void*)(void*)&WeaponTypeClass_vftable; /*0x771f57*/
  a1->vfptr1 = &(void*)(void*)&WeaponTypeClass_vftable; /*0x771f5d*/
  a1->vfptr2 = &(void*)(void*)&WeaponTypeClass_vftable; /*0x771f64*/
  a1->vfptr3 = &(void*)(void*)&WeaponTypeClass_vftable; /*0x771f6b*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)a1, 1); /*0x771f72*/
  a1->Projectile = 0; /*0x771f7d*/
  a1->Warhead = 0; /*0x771f83*/
  v7 = a1; /*0x771f95*/
  v2 = ((int (__thiscall *)(WeaponTypeClass **, WeaponTypeClass **))WeaponTypeClass_Array->uniqueId)( /*0x771f99*/
         &WeaponTypeClass_Array,
         &v7);
  if ( v2 != -1 && v2 < g_WeaponTypePool && v2 < --g_WeaponTypePool ) /*0x771fb4*/
  {
    do /*0x771fcc*/
    {
      ++v2; /*0x771fbc*/
      *((_DWORD *)g_WeaponTypeConfig + v2 - 1) = *((_DWORD *)g_WeaponTypeConfig + v2); /*0x771fc0*/
    }
    while ( v2 < g_WeaponTypePool ); /*0x771fcc*/
  }
  v3 = (void *)a1->Anim[1]; /*0x771fce*/
  a1->Anim[0] = (int)&(void*)(void*)&VectorClass_AnimTypeClass_const___vftable; /*0x771fd4*/
  if ( v3 && IDA_BYTE1(a1->Anim[3]) ) /*0x771fe2*/
  {
    RA2_OPDEL(v3); /*0x771feb*/
    a1->Anim[1] = 0; /*0x771ff3*/
  }
  IDA_BYTE1(a1->Anim[3]) = 0; /*0x771ff9*/
  a1->Anim[2] = 0; /*0x771fff*/
  v4 = (void *)a1->DownReport[1]; /*0x772005*/
  a1->DownReport[0] = (int)&(void*)(void*)&VectorClass_int_vftable; /*0x77200b*/
  if ( v4 && IDA_BYTE1(a1->DownReport[3]) ) /*0x772019*/
  {
    RA2_OPDEL(v4); /*0x772022*/
    a1->DownReport[1] = 0; /*0x77202a*/
  }
  IDA_BYTE1(a1->DownReport[3]) = 0; /*0x772030*/
  a1->DownReport[2] = 0; /*0x772036*/
  v5 = (void *)a1->Report[1]; /*0x77203c*/
  a1->Report[0] = (int)&(void*)(void*)&VectorClass_int_vftable; /*0x772042*/
  if ( v5 && IDA_BYTE1(a1->Report[3]) ) /*0x772050*/
  {
    RA2_OPDEL(v5); /*0x772059*/
    a1->Report[1] = 0; /*0x772061*/
  }
  IDA_BYTE1(a1->Report[3]) = 0; /*0x772069*/
  a1->Report[2] = 0; /*0x77206f*/
  return AbstractTypeClass::Dtor((AbstractTypeClass *)a1); /*0x77207a*/
}
} // namespace gamemd
// 0x772AE0
namespace gamemd {
int WeaponTypeClass::ProcessPower(int * a2, void *a2_2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  BulletTypeClass *Projectile; // eax
  int v10; // eax
  WarheadTypeClass *Warhead; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // edx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)a2_2, a2_2); /*0x772ae9*/
  Power::TimerProcess(a2_2->AmbientDamage); /*0x772af7*/
  IDA_LOBYTE(v3) = a2_2->IsSonic; /*0x772afc*/
  Power::FlagProcess((Power *)a2_2, v3); /*0x772b05*/
  IDA_LOBYTE(v4) = a2_2->TurboBoost; /*0x772b0a*/
  v5 = Power::FlagProcess((Power *)a2_2, v4); /*0x772b13*/
  IDA_LOBYTE(v5) = a2_2->Supress; /*0x772b18*/
  Power::FlagProcess((Power *)a2_2, v5); /*0x772b21*/
  IDA_LOBYTE(v6) = a2_2->Camera; /*0x772b26*/
  Power::FlagProcess((Power *)a2_2, v6); /*0x772b2f*/
  IDA_LOBYTE(v7) = a2_2->IsLaser; /*0x772b34*/
  v8 = Power::FlagProcess((Power *)a2_2, v7); /*0x772b3d*/
  IDA_LOBYTE(v8) = a2_2->IsHouseColor; /*0x772b42*/
  Power::FlagProcess((Power *)a2_2, v8); /*0x772b4b*/
  Power::TimerProcess(a2_2->Burst); /*0x772b59*/
  Projectile = a2_2->Projectile; /*0x772b5e*/
  if ( Projectile ) /*0x772b66*/
  {
    v10 = (*(int (__stdcall **)(_BYTE *))(*(_DWORD *)&Projectile->vfptr[4] + 16))(&Projectile->vfptr[4]); /*0x772b6f*/
    Power::TimerProcess(v10); /*0x772b75*/
  }
  Power::TimerProcess(a2_2->Damage); /*0x772b83*/
  Power::TimerProcess(a2_2->Speed); /*0x772b91*/
  Warhead = a2_2->Warhead; /*0x772b96*/
  if ( Warhead ) /*0x772b9e*/
  {
    v12 = (*((int (__stdcall **)(void **))Warhead->WarheadTypeClass_field_0x4 + 4))(&Warhead->WarheadTypeClass_field_0x4); /*0x772ba7*/
    Power::TimerProcess(v12); /*0x772bad*/
  }
  Power::TimerProcess(a2_2->ROF); /*0x772bbb*/
  Power::TimerProcess(a2_2->Range); /*0x772bc9*/
  Power::TimerProcess(a2_2->Report[4]); /*0x772bd7*/
  Power::TimerProcess(a2_2->DownReport[4]); /*0x772be5*/
  Power::TimerProcess(a2_2->Anim[4]); /*0x772bf3*/
  IDA_LOBYTE(v13) = a2_2->UseFireParticles; /*0x772bf8*/
  v14 = Power::FlagProcess((Power *)a2_2, v13); /*0x772c01*/
  IDA_LOBYTE(v14) = a2_2->Lobber; /*0x772c06*/
  Power::FlagProcess((Power *)a2_2, v14); /*0x772c0f*/
  IDA_LOBYTE(v15) = a2_2->LaserDuration; /*0x772c14*/
  Power::FinalizeDrain((Power *)a2_2, v15); /*0x772c1d*/
  IDA_LOBYTE(v16) = a2_2->IsBigLaser; /*0x772c22*/
  v17 = Power::FlagProcess((Power *)a2_2, v16); /*0x772c2b*/
  IDA_LOBYTE(v17) = a2_2->IsRailgun; /*0x772c30*/
  Power::FlagProcess((Power *)a2_2, v17); /*0x772c39*/
  IDA_LOBYTE(v18) = a2_2->Charges; /*0x772c3e*/
  Power::FlagProcess((Power *)a2_2, v18); /*0x772c47*/
  IDA_LOBYTE(v19) = a2_2->Bright; /*0x772c4c*/
  v20 = Power::FlagProcess((Power *)a2_2, v19); /*0x772c55*/
  IDA_LOBYTE(v20) = a2_2->UseSparkParticles; /*0x772c5a*/
  Power::FlagProcess((Power *)a2_2, v20); /*0x772c63*/
  IDA_LOBYTE(v21) = a2_2->OmniFire; /*0x772c68*/
  Power::FlagProcess((Power *)a2_2, v21); /*0x772c71*/
  IDA_LOBYTE(v22) = a2_2->DistributedWeaponFire; /*0x772c76*/
  return Power::FlagProcess((Power *)a2_2, v22); /*0x772c84*/
}
} // namespace gamemd
// 0x772CD0
namespace gamemd {
int WeaponTypeClass_SaveLoad_Prefix(WeaponTypeClass *aP0, void * a1, void * a2, void * a3, void * a4, void * a5)
{
  int v4; // ebx
  WeaponTypeClass *v5; // edi
  int *Report; // ebp
  int *v7; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // esi

  v5 = this; /*0x772cd3*/
  Report = this->Report; /*0x772cdd*/
  (*(void (__thiscall **)(int *))(this->Report[0] + 12))(this->Report); /*0x772ce5*/
  (*(void (__thiscall **)(int *))(v5->DownReport[0] + 12))(v5->DownReport); /*0x772cf4*/
  v7 = a2; /*0x772cf7*/
  result = AbstractClass::SaveLoad_Prefix_0(v5, (int)a2); /*0x772cfd*/
  if ( result >= 0 ) /*0x772d04*/
  {
    if ( v5 ) /*0x772d0c*/
      WeaponTypeClass::loadWeaponProperties(v5, (int)&this); /*0x772d15*/
    if ( v5 != (WeaponTypeClass *)-244 ) /*0x772d23*/
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v5->Anim, 0, 0); /*0x772d2b*/
      v5->Anim[0] = (int)&(void*)(void*)&TypeList_AnimTypeClass_const___vftable; /*0x772d30*/
    }
    (*(void (__stdcall **)(int *, WeaponTypeClass **, int, _DWORD, int))(*v7 + 12))(v7, &this, 4, 0, v4); /*0x772d42*/
    for ( i = 0; i < (int)a2; ++i ) /*0x772d4d*/
    {
      (*(void (__stdcall **)(int *, int *, int, _DWORD))(*v7 + 12))(v7, &a3, 4, 0); /*0x772d5b*/
      DynamicVector::Add_Alt4((DynamicVector *)v5->Anim, &a3); /*0x772d69*/
    }
    if ( Report ) /*0x772d77*/
    {
      DynamicVectorClass::Construct((DynamicVectorClass *)Report, 0, 0); /*0x772d7f*/
      *Report = (int)&(void*)(void*)&TypeList_int_vftable; /*0x772d84*/
    }
    (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v7 + 12))(v7, &a2, 4, 0); /*0x772d97*/
    for ( j = 0; j < (int)a2; ++j ) /*0x772da2*/
    {
      (*(void (__stdcall **)(int *, int *, int, _DWORD))(*v7 + 12))(v7, &a3, 4, 0); /*0x772db0*/
      DynamicVector::Add_Alt((DynamicVector *)Report, &a3); /*0x772dba*/
    }
    if ( v5 != (WeaponTypeClass *)-216 ) /*0x772dce*/
      TypeList::Construct((TypeList *)v5->DownReport); /*0x772dd2*/
    (*(void (__stdcall **)(int *, int **, int))(*v7 + 12))(v7, &a2, 4); /*0x772de3*/
    for ( k = 0; k < (int)this; ++k ) /*0x772dee*/
    {
      (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v7 + 12))(v7, &a2, 4, 0); /*0x772dfc*/
      DynamicVector::Add_Alt((DynamicVector *)v5->DownReport, &a2); /*0x772e06*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->Warhead); /*0x772e1e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->Projectile); /*0x772e2f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->AttachedParticleSystem); /*0x772e40*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->AssaultAnim); /*0x772e51*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->OccupantAnim); /*0x772e62*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v5->OpenToppedAnim); /*0x772e73*/
    for ( m = 0; m < v5->Anim[4]; ++m ) /*0x772e83*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v5->Anim[1] + 4 * m)); /*0x772e94*/
    return 0; /*0x772ea4*/
  }
  return result; /*0x772ea6*/
}
}
// 0x772EB0
namespace gamemd {
int WeaponTypeClass_SaveLoad_Prefix_0(void * a1, unsigned int * a2, void * a3, void * a4, void * a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)a1, a2, (int)a3); /*0x772ec1*/
  if ( result >= 0 ) /*0x772ec8*/
  {
    v7 = *a2; /*0x772ed4*/
    a3 = (int *)a1->Anim[4]; /*0x772ee1*/
    (*(void (__stdcall **)(int *, int **, int, _DWORD, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x772ee5*/
    for ( i = 0; i < a4; ++i ) /*0x772ef0*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, a1->Anim[1] + 4 * i, 4, 0); /*0x772f03*/
    v9 = *a2; /*0x772f13*/
    a4 = a1->Report[4]; /*0x772f1f*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v9 + 16))(a2, &a4, 4, 0); /*0x772f23*/
    for ( j = 0; j < a4; ++j ) /*0x772f2e*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, a1->Report[1] + 4 * j, 4, 0); /*0x772f41*/
    v11 = *a2; /*0x772f51*/
    a4 = a1->DownReport[4]; /*0x772f5d*/
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x772f61*/
    for ( k = 0; k < (int)a3; ++k ) /*0x772f6c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, a1->DownReport[1] + 4 * k, 4, 0); /*0x772f7f*/
    return 0; /*0x772f89*/
  }
  return result; /*0x772f8c*/
}
}
// 0x7730F0
namespace gamemd {  // G42.18c ns repair
WeaponTypeClass * WeaponTypeClass::ddtor(void ** Block, char a2)
{
  AbstractClass *v2; // ecx
  AbstractClass *v3; // esi
  int v4; // eax
  void *NeedsSaveOrLink; // eax
  void *vtable1; // eax
  void *vtable3; // eax
  AbstractClass *v9; // [esp+8h] [ebp-4h] BYREF

  v3 = v2; /*0x7730f3*/
  v2->vfptr = &(void*)(void*)&WeaponTypeClass_vftable; /*0x7730f7*/
  v2->vfptr1 = &(void*)(void*)&WeaponTypeClass_vftable; /*0x7730fd*/
  v2->vfptr2 = &(void*)(void*)&WeaponTypeClass_vftable; /*0x773104*/
  v2->vfptr3 = &(void*)(void*)&WeaponTypeClass_vftable; /*0x77310b*/
  AbstractClass::AnnounceExpiredPointer(v2, 1); /*0x773112*/
  v3[4].uniqueId = 0; /*0x77311d*/
  v3[4].referenceCount = 0; /*0x773123*/
  v9 = v3; /*0x773135*/
  v4 = ((int (__thiscall *)(WeaponTypeClass **, AbstractClass **))WeaponTypeClass_Array->uniqueId)( /*0x773139*/
         &WeaponTypeClass_Array,
         &v9);
  if ( v4 != -1 && v4 < g_WeaponTypePool && v4 < --g_WeaponTypePool ) /*0x773154*/
  {
    do /*0x77316c*/
    {
      ++v4; /*0x77315c*/
      *((_DWORD *)g_WeaponTypeConfig + v4 - 1) = *((_DWORD *)g_WeaponTypeConfig + v4); /*0x773160*/
    }
    while ( v4 < g_WeaponTypePool ); /*0x77316c*/
  }
  NeedsSaveOrLink = v3[6].NeedsSaveOrLink; /*0x77316e*/
  v3[6].referenceCount = (int)&(void*)(void*)&VectorClass_AnimTypeClass_const___vftable; /*0x773174*/
  if ( NeedsSaveOrLink && IDA_BYTE1(v3[7].vfptr1) ) /*0x773182*/
  {
    RA2_OPDEL(NeedsSaveOrLink); /*0x77318b*/
    v3[6].NeedsSaveOrLink = 0; /*0x773193*/
  }
  IDA_BYTE1(v3[7].vfptr1) = 0; /*0x773199*/
  v3[7].vfptr = 0; /*0x77319f*/
  vtable1 = v3[6].vfptr1; /*0x7731a5*/
  v3[6].vfptr = &(void*)(void*)&VectorClass_int_vftable; /*0x7731ab*/
  if ( vtable1 && IDA_BYTE1(v3[6].vfptr3) ) /*0x7731b9*/
  {
    RA2_OPDEL(vtable1); /*0x7731c2*/
    v3[6].vfptr1 = 0; /*0x7731ca*/
  }
  IDA_BYTE1(v3[6].vfptr3) = 0; /*0x7731d0*/
  v3[6].vfptr2 = 0; /*0x7731d6*/
  vtable3 = v3[5].vfptr3; /*0x7731dc*/
  v3[5].vfptr2 = &(void*)(void*)&VectorClass_int_vftable; /*0x7731e2*/
  if ( vtable3 && IDA_BYTE1(v3[5].abstractFlags) ) /*0x7731f0*/
  {
    RA2_OPDEL(vtable3); /*0x7731f9*/
    v3[5].vfptr3 = 0; /*0x773201*/
  }
  IDA_BYTE1(v3[5].abstractFlags) = 0; /*0x773209*/
  v3[5].uniqueId = 0; /*0x77320f*/
  AbstractTypeClass::Dtor((AbstractTypeClass *)v3); /*0x773215*/
  if ( ((unsigned __int8)Block & 1) != 0 ) /*0x77321f*/
    RA2_OPDEL(v3); /*0x773222*/
  return (WeaponTypeClass *)v3; /*0x77322c*/
}
}  // G42.18c ns repair
// 0x475B70
namespace gamemd {  // G42.18c ns repair
char WeaponTypeClass::ReadTrajectoryData(uint8_t * Block, char * a3, int a4)
{
  int v4; // eax
  int v5; // edx
  char *v6; // ebx
  _BYTE Source[125]; // [esp+Ch] [ebp-80h] BYREF
  __int16 v10; // [esp+89h] [ebp-3h]
  char v11; // [esp+8Bh] [ebp-1h]

  Source[0] = g_INI_DefaultBuffer; /*0x475b80*/
  memset(&Source[1], 0, 0x7Cu); /*0x475b8f*/
  v10 = 0; /*0x475b91*/
  v11 = 0; /*0x475b93*/
  v4 = dword_A83C78; /*0x475b94*/
  if ( dword_A83C78 > 32 ) /*0x475b9c*/
    v4 = 32; /*0x475b9e*/
  v5 = 0; /*0x475ba3*/
  v4 = v4; /*0x475ba5*/
  if ( v4 > 0 ) /*0x475bab*/
  {
    v6 = (char *)dword_A83C6C; /*0x475bb2*/
    do /*0x475c3a*/
    {
      if ( ((1 << v5) & a4) != 0 ) /*0x475bca*/
      {
        if ( Source[0] ) /*0x475bd2*/
          strcat(Source, Str); /*0x475bf9*/
        strcat(Source, (const char *)(v6->u32_24); /*0x475c27*/
        v4 = v4; /*0x475c29*/
      }
      ++v5; /*0x475c34*/
      v6 += 4; /*0x475c35*/
    }
    while ( v5 < v4 ); /*0x475c3a*/
  }
  return INIClass::SetString(Block, a3, Source); /*0x475c61*/
}
}  // G42.18c ns repair
// 0x475C70
namespace gamemd {  // G42.18c ns repair
char  WeaponTypeClass::ReadVeteranData(uint8_t * a2, char * a3, int a4, int * Block, int a6, int16_t a7, int a8, int a9, int a10)
{
  int *v10; // ebx
  int v11; // ebp
  char *SampleNameByIndex; // edi
  char v13; // bl
  _BYTE Source[125]; // [esp+Ch] [ebp-80h] BYREF
  __int16 v17; // [esp+89h] [ebp-3h]
  char v18; // [esp+8Bh] [ebp-1h]

  Source[0] = g_INI_DefaultBuffer; /*0x475c81*/
  memset(&Source[1], 0, 0x7Cu); /*0x475c90*/
  v17 = 0; /*0x475c92*/
  v18 = 0; /*0x475c94*/
  if ( a8 > 0 ) /*0x475c9e*/
  {
    v10 = Block; /*0x475ca0*/
    v11 = a8; /*0x475ca9*/
    do /*0x475d17*/
    {
      if ( Source[0] ) /*0x475cb1*/
        strcat(Source, Str); /*0x475cd8*/
      SampleNameByIndex = VocClass::GetSampleNameByIndex(*v10++); /*0x475ce8*/
      strcat(Source, SampleNameByIndex); /*0x475d0d*/
      --v11; /*0x475d14*/
    }
    while ( v11 ); /*0x475d17*/
  }
  v13 = INIClass::SetString((char *)this, a2, a3, Source); /*0x475d39*/
  if ( Block && IDA_HIBYTE(a7) ) /*0x475d4f*/
    RA2_OPDEL(Block); /*0x475d52*/
  return v13; /*0x475d5c*/
}
}  // G42.18c ns repair
// 0x771F00
namespace gamemd {  // G42.18c ns repair
unsigned int *  WeaponTypeClass::loadWeaponProperties(int aP1)
{
  AbstractTypeClass::Init(aP1); /*0x771f08*/
  this->Report[0] = (int)&(void*)(void*)&TypeList_int_vftable; /*0x771f12*/
  this->DownReport[0] = (int)&(void*)(void*)&TypeList_int_vftable; /*0x771f18*/
  this->Anim[0] = (int)&(void*)(void*)&TypeList_AnimTypeClass_const___vftable; /*0x771f1e*/
  this->vfptr = &(void*)(void*)&WeaponTypeClass_vftable; /*0x771f28*/
  this->vfptr1 = &(void*)(void*)&WeaponTypeClass_vftable; /*0x771f2e*/
  this->vfptr2 = &(void*)(void*)&WeaponTypeClass_vftable; /*0x771f35*/
  this->vfptr3 = &(void*)(void*)&WeaponTypeClass_vftable; /*0x771f3c*/
  return &this->vfptr; /*0x771f45*/
}
}  // G42.18c ns repair
// 0x7729F0
namespace gamemd {  // G42.18c ns repair
int WeaponTypeClass::CalculateSpeed()
{
  int result; // eax
  double FiringDistance; // [esp+4h] [ebp-8h]

  result = (int)this->Projectile; /*0x7729f6*/
  if ( result && !*(_DWORD *)(result + 732) ) /*0x772a00*/
  {
    FiringDistance = (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816); /*0x772a1e*/
    if ( *(_BYTE *)(result + 661) ) /*0x772a16*/
      FiringDistance = RulesClass::GetFiringDistance(); /*0x772a29*/
    result = TechnoClass::ComputeScanRange((TechnoClass *)this->Range, FiringDistance); /*0x772a3d*/
    this->Speed = result; /*0x772a42*/
  }
  return result; /*0x772a48*/
}
}  // G42.18c ns repair
// 0x772C90
namespace gamemd {  // G42.18c ns repair
int WeaponTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x772c96*/
    return -2147467261; /*0x772c98*/
  *a2 = -1613620790; /*0x772ca6*/
  a2[1] = 298979195; /*0x772cae*/
  a2[2] = 1610642049; /*0x772cb7*/
  a2[3] = unk_7E983C; /*0x772cc0*/
  return 0; /*0x772c9d*/
}
}  // G42.18c ns repair
// 0x7730D0
namespace gamemd {  // G42.18c ns repair
int WeaponTypeClass::GetObjectSize()
{
  return 352; /*0x7730d5*/
}
}
// 0x7730E0
int WeaponTypeClass::GetTypeIdentifier()
{
  return 49; /*0x7730e5*/
}  // G42.18c ns repair