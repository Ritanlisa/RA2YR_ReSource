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
// X129: fresh-render label declarations (auto, idempotent)
extern gamemd::WeaponTypeClass WeaponTypeClass_Array_x136;  // X136: til alias of WeaponTypeClass_Array (value form; til dump .omo/x136/)

// 0x512680
namespace gamemd {  // G42.18 ns repair
void * WeaponTypeClass::Create(AbstractClass * Source, void *a2, void *a3, void *a4)
{
  int v2; // esi
  SuperWeaponTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x51269c*/
    return 0; /*0x5126ff*/
  v2 = 0; /*0x5126ad*/
  if ( dword_A83CA8 <= 0 ) /*0x5126b1*/
  {
    LABEL_6:
    v3 = (SuperWeaponTypeClass *)operator new(0x1B0u); /*0x5126d6*/
    if ( v3 ) /*0x5126e5*/
      return (void *)(((SuperWeaponTypeClass *)(v3))->Construct((char *)(Source))); /*0x5126f1*/
    return 0; /*0x5126e5*/
  }
  while ( _strcmpi((char *)(*((unsigned int *)dword_A83C9C + v2) + 36),(const char *)(Source)) ) /*0x5126ca*/
  {
    if ( ++v2 >= dword_A83CA8 ) /*0x5126d4*/
      goto LABEL_6; /*0x5126d4*/
  }
  return (unsigned char *)*((unsigned int *)dword_A83C9C + v2); /*0x5126ef*/
}  // G42.18 ns repair
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
    v3 = operator new(0x100u); /*0x6cef46*/
    if ( v3 ) /*0x6cef55*/
      return ((int)v3)->SuperWeaponTypeClass(Source); /*0x6cef61*/
    return 0; /*0x6cef55*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)dword_A8E334 + v2) + 36), Source) ) /*0x6cef3a*/
  {
    if ( ++v2 >= dword_A8E340 ) /*0x6cef44*/
      goto LABEL_6; /*0x6cef44*/
  }
  return *((unsigned int *)dword_A8E334 + v2); /*0x6cef5f*/
}
} // namespace gamemd
// 0x771C70
namespace gamemd {
unsigned int * WeaponTypeClass::Constructor(WeaponTypeClass * aP1, void *a2, void *a3, void *a4, void *a5)
{

  int v3; // eax

  (&this->ptr_0)->Constructor(Source);  /*0x771c7a*/
  this->AmbientDamage = 0;  /*0x771c87*/
  this->Burst = 1;  /*0x771c8d*/
  this->Projectile = 0;  /*0x771c97*/
  this->Damage = 0;  /*0x771c9d*/
  this->Speed = 0;  /*0x771ca3*/
  this->Warhead = 0;  /*0x771ca9*/
  this->ROF = 0;  /*0x771caf*/
  this->Range = 0;  /*0x771cb6*/
  this->MinimumRange = 0;  /*0x771cbf*/
  VectorClass::Construct((VectorClass *)this->Report, 0, 0);  /*0x771cc5*/
  this->Report[5] = 10;  /*0x771cca*/
  this->Report[4] = 0;  /*0x771cd1*/
  this->Report[0] = (int)&vt_TypeList_int;  /*0x771cd4*/
  VectorClass::Construct((VectorClass *)this->DownReport, 0, 0);  /*0x771ce4*/
  this->DownReport[5] = 10;  /*0x771ce9*/
  this->DownReport[4] = 0;  /*0x771cf0*/
  this->DownReport[0] = (int)&vt_TypeList_int;  /*0x771cf3*/
  ((AnimTypeVector *)this->Anim)->Constructor(0, 0);  /*0x771d03*/
  this->Anim[5] = 10;  /*0x771d08*/
  this->Anim[4] = 0;  /*0x771d0f*/
  this->Anim[0] = (int)&vt_TypeList_AnimTypeClass_const;  /*0x771d12*/
  this->OccupantAnim = 0;  /*0x771d18*/
  this->AssaultAnim_d = 0;  /*0x771d1e*/
  this->OpenToppedAnim_d = 0;  /*0x771d24*/
  this->AttachedParticleSystem = 0;  /*0x771d2a*/
  this->LaserInnerColor_d[0] = 0;  /*0x771d30*/
  this->LaserInnerColor_d[1] = 0;  /*0x771d36*/
  this->LaserInnerColor_d[2] = 0;  /*0x771d3c*/
  this->LaserOuterColor[0] = 0;  /*0x771d42*/
  this->LaserOuterColor[1] = 0;  /*0x771d48*/
  this->LaserOuterColor[2] = 0;  /*0x771d4e*/
  this->LaserOuterSpread[0] = 0;  /*0x771d54*/
  this->LaserOuterSpread[1] = 0;  /*0x771d5a*/
  this->LaserOuterSpread[2] = 0;  /*0x771d60*/
  this->UseFireParticles_d = 0;  /*0x771d66*/
  this->UseSparkParticles[0] = 0;  /*0x771d6c*/
  this->OmniFire[0] = 0;  /*0x771d72*/
  this->DistributedWeaponFire[0] = 0;  /*0x771d78*/
  this->IsRailgun[0] = 0;  /*0x771d7e*/
  this->Lobber[0] = 0;  /*0x771d84*/
  this->Bright[0] = 0;  /*0x771d8a*/
  this->IsSonic_d = 0;  /*0x771d90*/
  this->Spawner_d = 0;  /*0x771d96*/
  this->LimboLaunch_d = 0;  /*0x771d9c*/
  this->DecloakToFire_d = 1;  /*0x771da2*/
  this->CellRangefinding_d = 0;  /*0x771da9*/
  this->FireOnce[0] = 0;  /*0x771daf*/
  this->NeverUse_d = 0;  /*0x771db5*/
  this->RevealOnFire_d = 1;  /*0x771dbb*/
  this->TerrainFire[0] = 0;  /*0x771dc2*/
  this->SabotageCursor[0] = 0;  /*0x771dc8*/
  this->MigAttackCursor[0] = 0;  /*0x771dce*/
  this->DisguiseFireOnly[0] = 0;  /*0x771dd4*/
  this->DisguiseFakeBlinkTime = 0;  /*0x771dda*/
  this->InfiniteMindControl_d = 0;  /*0x771de0*/
  this->FireWhileMoving_d = 1;  /*0x771de6*/
  this->DrainWeapon[0] = 0;  /*0x771ded*/
  this->FireInTransport[0] = 1;  /*0x771df3*/
  this->Suicide_d = 0;  /*0x771dfa*/
  this->TurboBoost[0] = 0;  /*0x771e00*/
  this->Supress_d = 0;  /*0x771e06*/
  this->Camera_d = 0;  /*0x771e0f*/
  this->Charges_d = 0;  /*0x771e16*/
  this->IsLaser_d = 0;  /*0x771e1c*/
  this->DiskLaser[0] = 0;  /*0x771e22*/
  this->IsLine[0] = 0;  /*0x771e28*/
  this->IsBigLaser[0] = 0;  /*0x771e2e*/
  this->IsHouseColor[0] = 0;  /*0x771e34*/
  this->LaserDuration[0] = 10;  /*0x771e3a*/
  this->IonSensitive[0] = 0;  /*0x771e41*/
  this->AreaFire_d = 0;  /*0x771e47*/
  this->IsElectricBolt_d = 0;  /*0x771e4d*/
  this->DrawBoltAsLaser_d = 0;  /*0x771e53*/
  this->IsAlternateColor_d = 0;  /*0x771e59*/
  this->IsRadBeam[0] = 0;  /*0x771e5f*/
  this->IsRadEruption[0] = 0;  /*0x771e65*/
  this->RadLevel = 0;  /*0x771e6b*/
  this->IsMagBeam[0] = 0;  /*0x771e71*/
  /* X11: vfptr install elided (implicit via WeaponTypeClass_4 virtuals) */
  /* X11: vfptr install elided (implicit via WeaponTypeClass_4 virtuals) */
  /* X11: vfptr install elided (implicit via WeaponTypeClass_4 virtuals) */
  /* X11: vfptr install elided (implicit via WeaponTypeClass_4 virtuals) */
  ((AbstractClass *)&this->ptr_4)->GenerateUniqueID();  /*0x771e91*/  /*0x771e8a*/  /*0x771e83*/  /*0x771e7d*/  /*0x771e77*/
  if ( g_WeaponTypePool < dword_887570
    || (byte_887575 || !dword_887570)
    && dword_88757C > 0
    && ((unsigned __int8 (*)(WeaponTypeClass **, int, unsigned int))(int)WeaponTypeClass_Array_x136.ptr_8)(
         &WeaponTypeClass_Array_x136,
         dword_887570 + dword_88757C,
         0) )
  {  /*0x771eca*/
    v3 = g_WeaponTypePool++;  /*0x771ed7*/
    *((unsigned int *)g_WeaponTypeConfig + v3) = this;  /*0x771ee6*/
  }
  return &this->ptr_0;  /*0x771eeb*/

}
} // namespace gamemd
// 0x771F50
namespace gamemd {
int WeaponTypeClass::Destructor(void *a1)
{


  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F738C) */  /*0x771f57*/
  /* X11: ptr_0 install elided (qmark slot, RHS g_ptr_7F738C) */  /*0x771f5d*/
  /* X11: ptr_0 install elided (qmark slot, RHS g_ptr_7F738C) */  /*0x771f64*/
  /* X11: ptr_0 install elided (qmark slot, RHS g_ptr_7F738C) */  /*0x771f6b*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)a1, 1); /*0x771f72*/
  a1->Projectile = 0; /*0x771f7d*/
  a1->Warhead = 0; /*0x771f83*/
  WeaponTypeClass *v7; // [esp+8h] [ebp-4h] BYREF
  v7 = a1; /*0x771f95*/
  int v2; // eax
  v2 = ((int (*)(WeaponTypeClass **, WeaponTypeClass **))WeaponTypeClass_Array->uniqueId)( /*0x771f99*/
         &WeaponTypeClass_Array,
         &v7);
  if ( v2 != -1 && v2 < g_WeaponTypePool && v2 < --g_WeaponTypePool ) /*0x771fb4*/
  {
    do /*0x771fcc*/
    {
      ++v2; /*0x771fbc*/
      *((unsigned int *)g_WeaponTypeConfig + v2 - 1) = *((unsigned int *)g_WeaponTypeConfig + v2); /*0x771fc0*/
    }
    while ( v2 < g_WeaponTypePool ); /*0x771fcc*/
  }
  void *v3; // eax
  v3 = (void *)a1->Anim[1]; /*0x771fce*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x771fd4*/
  if ( v3 && BYTE1(a1->Anim[3]) ) /*0x771fe2*/
  {
    __3_YAXPAX_Z(v3); /*0x771feb*/
    a1->Anim[1] = 0; /*0x771ff3*/
  }
  BYTE1(a1->Anim[3]) = 0; /*0x771ff9*/
  a1->Anim[2] = 0; /*0x771fff*/
  void *v4; // eax
  v4 = (void *)a1->DownReport[1]; /*0x772005*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x77200b*/
  if ( v4 && BYTE1(a1->DownReport[3]) ) /*0x772019*/
  {
    __3_YAXPAX_Z(v4); /*0x772022*/
    a1->DownReport[1] = 0; /*0x77202a*/
  }
  BYTE1(a1->DownReport[3]) = 0; /*0x772030*/
  a1->DownReport[2] = 0; /*0x772036*/
  void *v5; // eax
  v5 = (void *)a1->Report[1]; /*0x77203c*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x772042*/
  if ( v5 && BYTE1(a1->Report[3]) ) /*0x772050*/
  {
    __3_YAXPAX_Z(v5); /*0x772059*/
    a1->Report[1] = 0; /*0x772061*/
  }
  BYTE1(a1->Report[3]) = 0; /*0x772069*/
  a1->Report[2] = 0; /*0x77206f*/
  return ((AbstractTypeClass *)a1)->Dtor(); /*0x77207a*/

}
} // namespace gamemd
// 0x772AE0
namespace gamemd {
int WeaponTypeClass::ProcessPower(int * a2, void *a2_2)
{

  unsigned __int8 *v3; // ecx
  unsigned __int8 *v4; // edx
  unsigned __int8 *v5; // eax
  unsigned __int8 *v6; // ecx
  unsigned __int8 *v7; // edx
  unsigned __int8 *v8; // eax
  int Projectile; // eax
  int v10; // eax
  int Warhead; // eax
  int v12; // eax
  unsigned __int8 *v13; // edx
  unsigned __int8 *v14; // eax
  unsigned __int8 *v15; // ecx
  unsigned __int8 *v16; // edx
  unsigned __int8 *v17; // eax
  unsigned __int8 *v18; // ecx
  unsigned __int8 *v19; // edx
  unsigned __int8 *v20; // eax
  unsigned __int8 *v21; // ecx
  unsigned __int8 *v22; // edx

  ((AbstractTypeClass *)this)->ProcessPower(a2); /*0x772ae9*/
  Power::TimerProcess(this->AmbientDamage); /*0x772af7*/
  LOBYTE(v3) = this->IsSonic_d[0]; /*0x772afc*/
  ((Power *)a2)->FlagProcess((int)v3); /*0x772b05*/
  LOBYTE(v4) = this->TurboBoost[0]; /*0x772b0a*/
  v5 = (unsigned __int8 *)((Power *)a2)->FlagProcess((int)v4); /*0x772b13*/
  LOBYTE(v5) = this->Supress_d[0]; /*0x772b18*/
  ((Power *)a2)->FlagProcess((int)v5); /*0x772b21*/
  LOBYTE(v6) = this->Camera_d[0]; /*0x772b26*/
  ((Power *)a2)->FlagProcess((int)v6); /*0x772b2f*/
  LOBYTE(v7) = this->IsLaser_d[0]; /*0x772b34*/
  v8 = (unsigned __int8 *)((Power *)a2)->FlagProcess((int)v7); /*0x772b3d*/
  LOBYTE(v8) = this->IsHouseColor[0]; /*0x772b42*/
  ((Power *)a2)->FlagProcess((int)v8); /*0x772b4b*/
  Power::TimerProcess(this->Burst); /*0x772b59*/
  Projectile = this->Projectile; /*0x772b5e*/
  if ( Projectile ) /*0x772b66*/
  {
    v10 = (*(int (**)(int))(*(unsigned int *)(Projectile + 4) + 16))(Projectile + 4); /*0x772b6f*/
    Power::TimerProcess(v10); /*0x772b75*/
  }
  Power::TimerProcess(this->Damage); /*0x772b83*/
  Power::TimerProcess(this->Speed); /*0x772b91*/
  Warhead = this->Warhead; /*0x772b96*/
  if ( Warhead ) /*0x772b9e*/
  {
    v12 = (*(int (**)(int))(*(unsigned int *)(Warhead + 4) + 16))(Warhead + 4); /*0x772ba7*/
    Power::TimerProcess(v12); /*0x772bad*/
  }
  Power::TimerProcess(this->ROF); /*0x772bbb*/
  Power::TimerProcess(this->Range); /*0x772bc9*/
  Power::TimerProcess(this->Report[4]); /*0x772bd7*/
  Power::TimerProcess(this->DownReport[4]); /*0x772be5*/
  Power::TimerProcess(this->Anim[4]); /*0x772bf3*/
  LOBYTE(v13) = this->UseFireParticles[0]; /*0x772bf8*/
  v14 = (unsigned __int8 *)((Power *)a2)->FlagProcess((int)v13); /*0x772c01*/
  LOBYTE(v14) = this->Lobber[0]; /*0x772c06*/
  ((Power *)a2)->FlagProcess((int)v14); /*0x772c0f*/
  LOBYTE(v15) = this->LaserDuration[0]; /*0x772c14*/
  ((Power *)a2)->FinalizeDrain((int)v15); /*0x772c1d*/
  LOBYTE(v16) = this->IsBigLaser[0]; /*0x772c22*/
  v17 = (unsigned __int8 *)((Power *)a2)->FlagProcess((int)v16); /*0x772c2b*/
  LOBYTE(v17) = this->IsRailgun[0]; /*0x772c30*/
  ((Power *)a2)->FlagProcess((int)v17); /*0x772c39*/
  LOBYTE(v18) = this->Charges[0]; /*0x772c3e*/
  ((Power *)a2)->FlagProcess((int)v18); /*0x772c47*/
  LOBYTE(v19) = this->Bright[0]; /*0x772c4c*/
  v20 = (unsigned __int8 *)((Power *)a2)->FlagProcess((int)v19); /*0x772c55*/
  LOBYTE(v20) = this->UseSparkParticles[0]; /*0x772c5a*/
  ((Power *)a2)->FlagProcess((int)v20); /*0x772c63*/
  LOBYTE(v21) = this->OmniFire[0]; /*0x772c68*/
  ((Power *)a2)->FlagProcess((int)v21); /*0x772c71*/
  LOBYTE(v22) = this->DistributedWeaponFire[0]; /*0x772c76*/
  return ((Power *)a2)->FlagProcess((int)v22); /*0x772c84*/

}
} // namespace gamemd
// 0x772CD0
namespace gamemd {
int WeaponTypeClass_SaveLoad_Prefix(WeaponTypeClass *aP0, WeaponTypeClass *aP0, void * a1, void * a2, void * a3, void * a4, void * a5)
{

  WeaponTypeClass *v5; // edi
  v5 = (int *)(aP0);
  int *Report; // ebp
  Report = (int *)(aP0->Report);
  (*(void (**)(int *))(aP0-((unsigned int *)(>Report))[0] + 12))(aP0->Report);
  (*(void (**)(int *))(v5->DownReport[0] + 12))(v5->DownReport); /*0x772cf4*/
  int *v7; // esi
  v7 = (int *)(a2); /*0x772cf7*/
  int result; // eax
  result = ((unsigned int *)(v5))->SaveLoad_Prefix_0((int)a2); /*0x772cfd*/
  if ( result >= 0 ) /*0x772d04*/
  {
    if ( v5 ) /*0x772d0c*/
      (v5)->loadWeaponProperties((int)&aP0); /*0x772d15*/
    if ( v5 != (WeaponTypeClass *)-244 ) /*0x772d23*/
    {
      ((DynamicVectorClass *)v5->Anim)->AnimTypeConstructor(0, 0); /*0x772d2b*/
      v5-((unsigned int *)(>Anim))[0] = (int)&g_var_131447; /*0x772d30*/
    }
    int v4; // ebx
    v7->sub_772D42(&aP0, 4, 0, v4); /*0x772d42*/
    int i; // ebx
    for ( i = 0; i < (int)a2; ++i ) /*0x772d4d*/
    {
      v7->sub_772D5B(&a3, 4, 0); /*0x772d5b*/
      ((DynamicVector *)v5->Anim)->Add_Alt4(&a3); /*0x772d69*/
    }
    if ( Report ) /*0x772d77*/
    {
      ((DynamicVectorClass *)Report)->Construct(0, 0); /*0x772d7f*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_131447) */  /*0x772d84*/
    }
    v7->sub_772D97(&a2, 4, 0); /*0x772d97*/
    int j; // ebx
    for ( j = 0; j < (int)a2; ++j ) /*0x772da2*/
    {
      v7->sub_772DB0(&a3, 4, 0); /*0x772db0*/
      ((DynamicVector *)Report)->Add_Alt(&a3); /*0x772dba*/
    }
    if ( v5 != (WeaponTypeClass *)-216 ) /*0x772dce*/
      TypeList::Construct((TypeList *)v5->DownReport); /*0x772dd2*/
    v7->sub_772DE3(&a2, 4); /*0x772de3*/
    int k; // ebx
    for ( k = 0; k < (int)aP0; ++k ) /*0x772dee*/
    {
      v7->sub_772DFC(&a2, 4, 0); /*0x772dfc*/
      ((DynamicVector *)v5->DownReport)->Add_Alt(&a2); /*0x772e06*/
    }
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, &v5->Warhead); /*0x772e1e*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, &v5->Projectile); /*0x772e2f*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, &v5->AttachedParticleSystem); /*0x772e40*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, &v5->AssaultAnim_d); /*0x772e51*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, &v5->OccupantAnim); /*0x772e62*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, &v5->OpenToppedAnim_d); /*0x772e73*/
    int m; // esi
    for ( m = 0; m < v5-((unsigned int *)(>Anim))[4]; ++m ) /*0x772e83*/
      ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, (int *)(v5-((unsigned int *)(>Anim))[1] + 4 * m)); /*0x772e94*/
    return 0; /*0x772ea4*/
  }
  return result; /*0x772ea6*/
}
}
// 0x772EB0
namespace gamemd {
int WeaponTypeClass_SaveLoad_Prefix_0(void * a1, unsigned int * a2, void * a3, void * a4, void * a5)
{

  int result; // eax
  result = ((int *)a1)->SaveLoad_Prefix((int *)(a2), (int)a3); /*0x772ec1*/
  if ( result >= 0 ) /*0x772ec8*/
  {
    int v7 = *a2; // edx /*0x772ed4*/
    a3 = (int *)a1->Anim[4]; /*0x772ee1*/
    int v5; // ebx
    (*(void (__stdcall **)(int *, int **, int, unsigned int, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x772ee5*/
    int i; // ebx
    for ( i = 0; i < (int)(a4); ++i ) /*0x772ef0*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, a1->Anim[1] + 4 * i, 4, 0); /*0x772f03*/
    int v9 = *a2; // edx /*0x772f13*/
    a4 = a1->Report[4]; /*0x772f1f*/
    (*(void (__stdcall **)(int *, int *, int, unsigned int))(v9 + 16))(a2, &a4, 4, 0); /*0x772f23*/
    int j; // ebx
    for ( j = 0; j < a4; ++j ) /*0x772f2e*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, a1->Report[1] + 4 * j, 4, 0); /*0x772f41*/
    int v11 = *a2; // edx /*0x772f51*/
    a4 = a1->DownReport[4]; /*0x772f5d*/
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x772f61*/
    int k; // ebx
    for ( k = 0; k < (int)a3; ++k ) /*0x772f6c*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, a1->DownReport[1] + 4 * k, 4, 0); /*0x772f7f*/
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
  void *ptr_4; // eax
  void *ptr_C; // eax
  AbstractClass *v9; // [esp+8h] [ebp-4h] BYREF

  v3 = v2; /*0x7730f3*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_8e935f) */  /*0x7730f7*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_8e935f) */  /*0x7730fd*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_8e935f) */  /*0x773104*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_8e935f) */  /*0x77310b*/
  AbstractClass::AnnounceExpiredPointer(v2, 1); /*0x773112*/
  v3[4].uniqueId = 0; /*0x77311d*/
  v3[4].referenceCount = 0; /*0x773123*/
  v9 = v3; /*0x773135*/
  v4 = ((int (*)(WeaponTypeClass **, AbstractClass **))WeaponTypeClass_Array->uniqueId)( /*0x773139*/
         &WeaponTypeClass_Array,
         &v9);
  if ( v4 != -1 && v4 < g_WeaponTypePool && v4 < --g_WeaponTypePool ) /*0x773154*/
  {
    do /*0x77316c*/
    {
      ++v4; /*0x77315c*/
      *((unsigned int *)g_WeaponTypeConfig + v4 - 1) = *((unsigned int *)g_WeaponTypeConfig + v4); /*0x773160*/
    }
    while ( v4 < g_WeaponTypePool ); /*0x77316c*/
  }
  NeedsSaveOrLink = v3->nextArrayIndex.NeedsSaveOrLink; /*0x77316e*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EB6F4) */  /*0x773174*/
  if ( NeedsSaveOrLink && (((v3[7].ptr_4) >> 8) & 0xFF) ) /*0x773182*/
  {
    __3_YAXPAX_Z(NeedsSaveOrLink); /*0x77318b*/
    v3[6].needsSave = 0; /*0x773193*/
  }
  BYTE1(v3[7].ptr_4) = 0; /*0x773199*/
  v3[7].ptr_0 = 0; /*0x77319f*/
  ptr_4 = v3->nextArrayIndex.ptr_4; /*0x7731a5*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E4DB8) */  /*0x7731ab*/
  if ( ptr_4 && (((v3[6].ptr_C) >> 8) & 0xFF) ) /*0x7731b9*/
  {
    __3_YAXPAX_Z(ptr_4); /*0x7731c2*/
    v3[6].ptr_4 = 0; /*0x7731ca*/
  }
  BYTE1(v3[6].ptr_C) = 0; /*0x7731d0*/
  v3[6].ptr_8 = 0; /*0x7731d6*/
  ptr_C = v3->abstractFlags.ptr_C; /*0x7731dc*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E4DB8) */  /*0x7731e2*/
  if ( ptr_C && BYTE1(v3[5].abstractFlags) ) /*0x7731f0*/
  {
    __3_YAXPAX_Z(ptr_C); /*0x7731f9*/
    v3[5].ptr_C = 0; /*0x773201*/
  }
  BYTE1(v3[5].abstractFlags) = 0; /*0x773209*/
  v3[5].uniqueId = 0; /*0x77320f*/
  ((AbstractTypeClass *)v3)->Dtor(); /*0x773215*/
  if ( ((unsigned __int8)this & 1) != 0 ) /*0x77321f*/
    __3_YAXPAX_Z(v3); /*0x773222*/
  return (WeaponTypeClass *)v3; /*0x77322c*/

}
}  // G42.18c ns repair
// 0x475B70
namespace gamemd {  // G42.18c ns repair
char WeaponTypeClass::ReadTrajectoryData(uint8_t * Block, char * a3, int a4)
{

  unsigned char Source[125]; // [esp+Ch] [ebp-80h] BYREF
  Source[0] = g_INI_DefaultBuffer; /*0x475b80*/
  memset(&Source[1], 0, 0x7Cu); /*0x475b8f*/
  int16_t v10; // [esp+89h] [ebp-3h]
  v10 = 0; /*0x475b91*/
  char v11; // [esp+8Bh] [ebp-1h]
  v11 = 0; /*0x475b93*/
  int v4 = dword_A83C78; // eax /*0x475b94*/
  if ( dword_A83C78 > 32 ) /*0x475b9c*/
    v4 = 32; /*0x475b9e*/
  int v5 = 0; // edx /*0x475ba3*/
  v4 = v4; /*0x475ba5*/
  if ( v4 > 0 ) /*0x475bab*/
  {
    char *v6; // ebx
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
  return (Block)->SetString(a3, Source); /*0x475c61*/
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
  unsigned char Source[125]; // [esp+Ch] [ebp-80h] BYREF
  int16_t v17; // [esp+89h] [ebp-3h]
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
      SampleNameByIndex = (*v10++)->GetSampleNameByIndex(); /*0x475ce8*/
      strcat(Source, SampleNameByIndex); /*0x475d0d*/
      --v11; /*0x475d14*/
    }
    while ( v11 ); /*0x475d17*/
  }
  v13 = ((INIClass *)this)->SetString(a2, a3, Source); /*0x475d39*/
  if ( Block && (*(((unsigned char *)&(a7)) + (sizeof(a7) - 1))) ) /*0x475d4f*/
    operator delete((Block)); /*0x475d52*/
  return v13; /*0x475d5c*/
}
}  // G42.18c ns repair
// 0x771F00
namespace gamemd {  // G42.18c ns repair
unsigned int *  WeaponTypeClass::loadWeaponProperties(int aP1, void *a2)
{

  ((int)this)->Init(aP1); /*0x771f08*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_131447) */  /*0x771f12*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_131447) */  /*0x771f18*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_var_131447) */  /*0x771f1e*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F738C) */  /*0x771f28*/
  /* X11: ptr_0 install elided (implicit via WeaponTypeClass virtuals 0x771f2e) */
  /* X11: ptr_0 install elided (implicit via WeaponTypeClass virtuals 0x771f35) */
  /* X11: ptr_0 install elided (implicit via WeaponTypeClass virtuals 0x771f3c) */
  return &this->ptr_0; /*0x771f45*/

}
}  // G42.18c ns repair
// 0x7729F0
namespace gamemd {  // G42.18c ns repair
int WeaponTypeClass::CalculateSpeed(void *a1)
{

  int result; // eax
  double FiringDistance; // [esp+4h] [ebp-8h]

  result = (int)this->Projectile; /*0x7729f6*/
  if ( result && !result->u32_2DC ) /*0x772a00*/
  {
    FiringDistance = (double)*(int *)(*(unsigned int *)&g_RulesClass_Instance + 5816); /*0x772a1e*/
    if ( result->u8_295 ) /*0x772a16*/
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
}

// --- x93 csp-relocation defs (BEGIN) ---
// X93: CSP inferred_real_class ownership (tools/gen_gap2_defs.py).
namespace gamemd {
// 0x00432C10
  int WeaponTypeClass::COMStub_432C10(int a2)
  {
    AbstractClass *NeedsSaveOrLink; // ecx
    int result; // eax

    NeedsSaveOrLink = (AbstractClass *)v23->NeedsSaveOrLink; /*0x432c10*/
    if ( NeedsSaveOrLink ) /*0x432c15*/
      return (NeedsSaveOrLink)->getTotalValue(a2); /*0x432c1c*/
    return result; /*0x432c21*/
  }
} // namespace gamemd
// --- x93 csp-relocation defs (END) ---
