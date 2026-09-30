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

// 0x512680
namespace gamemd {
void * WeaponTypeClass::Create()
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
// 0x5113f0
      return SuperWeaponTypeClass::Construct(v3, Source); /*0x5126f1*/
    return 0; /*0x5126e5*/
  }
  while ( _strcmpi((char *)(*((unsigned int *)dword_A83C9C + v2) + 36), Source) ) /*0x5126ca*/
  {
    if ( ++v2 >= dword_A83CA8 ) /*0x5126d4*/
      goto LABEL_6; /*0x5126d4*/
  }
  return (unsigned char *)*((unsigned int *)dword_A83C9C + v2); /*0x5126ef*/
}
} // namespace gamemd
// 0x6CEEF0
namespace gamemd {
int WeaponTypeClass::Process()
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
// 0x6ce5b0
      return SuperWeaponTypeClass::SuperWeaponTypeClass((int)v3, Source); /*0x6cef61*/
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
unsigned int * WeaponTypeClass::Constructor(ObjectClass * aP1)
{
  WeaponTypeClass * v3;

  AbstractTypeClass::Constructor(aP1); /*0x771c7a*/
    *((unsigned int *)this + 152) = 0;
    *((unsigned int *)this + 156) = 1;
    *((unsigned int *)this + 160) = 0;
    *((unsigned int *)this + 164) = 0;
    *((unsigned int *)this + 168) = 0;
    *((unsigned int *)this + 172) = 0;
    *((unsigned int *)this + 176) = 0;
    *((unsigned int *)this + 180) = 0;
    *((unsigned int *)this + 184) = 0;
  VectorClass::Construct((VectorClass *)this->Report, 0, 0); /*0x771cc5*/
    *((unsigned int *)this + 208) = 10;
  this-((unsigned int *)(>Report))[4] = 0; /*0x771cd1*/
  this-((unsigned int *)(>Report))[0] = (int)&TypeList_int_vftable; /*0x771cd4*/
  VectorClass::Construct((VectorClass *)this->DownReport, 0, 0); /*0x771ce4*/
  this-((unsigned int *)(>DownReport))[5] = 10; /*0x771ce9*/
  this-((unsigned int *)(>DownReport))[4] = 0; /*0x771cf0*/
  this-((unsigned int *)(>DownReport))[0] = (int)&TypeList_int_vftable; /*0x771cf3*/
  AnimTypeVector::Constructor((AnimTypeVector *)this->Anim, 0, 0); /*0x771d03*/
    *((unsigned int *)this + 264) = 10;
  this-((unsigned int *)(>Anim))[4] = 0; /*0x771d0f*/
  this-((unsigned int *)(>Anim))[0] = (int)&TypeList_AnimTypeClass_const___vftable; /*0x771d12*/
    *((unsigned int *)this + 272) = 0;
    *((unsigned int *)this + 276) = 0;
    *((unsigned int *)this + 280) = 0;
    *((unsigned int *)this + 284) = 0;
    *((unsigned char *)this + 288) = 0;
    *((unsigned char *)this + 289) = 0;
    *((unsigned char *)this + 290) = 0;
    *((unsigned char *)this + 291) = 0;
    *((unsigned int *)this + 292) = 0;
  this->LaserOuterColor[2] = 0; /*0x771d4e*/
  this->LaserOuterSpread[0] = 0; /*0x771d54*/
  this->LaserOuterSpread[1] = 0; /*0x771d5a*/
    *((unsigned int *)this + 296) = 0;
  this->UseFireParticles = 0; /*0x771d66*/
  this->UseSparkParticles = 0; /*0x771d6c*/
  this->OmniFire = 0; /*0x771d72*/
    *((unsigned int *)this + 300) = 0;
  this->IsRailgun = 0; /*0x771d7e*/
  this->Lobber = 0; /*0x771d84*/
  this->Bright = 0; /*0x771d8a*/
    *((unsigned int *)this + 304) = 0x1000000;
  this->Spawner = 0; /*0x771d96*/
  this->LimboLaunch = 0; /*0x771d9c*/
  this->DecloakToFire = 1; /*0x771da2*/
    *((unsigned char *)this + 308) = 0;
    *((unsigned char *)this + 309) = 0;
    *((unsigned char *)this + 310) = 0;
    *((unsigned char *)this + 311) = 1;
    *((unsigned char *)this + 312) = 0;
    *((unsigned char *)this + 313) = 0;
    *((unsigned char *)this + 314) = 0;
    *((unsigned char *)this + 315) = 0;
    *((unsigned int *)this + 316) = 0;
    *((unsigned char *)this + 320) = 0;
    *((unsigned char *)this + 321) = 1;
    *((unsigned char *)this + 322) = 0;
    *((unsigned char *)this + 323) = 1;
    *((unsigned char *)this + 324) = 0;
    *((unsigned char *)this + 325) = 0;
    *((unsigned char *)this + 326) = 0;
    *((unsigned char *)this + 327) = 0;
    *((unsigned char *)this + 328) = 0;
    *((unsigned char *)this + 329) = 0;
    *((unsigned char *)this + 330) = 0;
    *((unsigned char *)this + 331) = 0;
    *((unsigned char *)this + 332) = 0;
    *((unsigned char *)this + 333) = 0;
    *((unsigned char *)this + 334) = 10;
    *((unsigned char *)this + 335) = 0;
    *((unsigned char *)this + 336) = 0;
    *((unsigned char *)this + 337) = 0;
    *((unsigned char *)this + 338) = 0;
    *((unsigned char *)this + 339) = 0;
    *((unsigned char *)this + 340) = 0;
    *((unsigned char *)this + 341) = 0;
    *((unsigned int *)this + 344) = 0;
    *((unsigned char *)this + 348) = 0;
  this->AbstractTypeClass = (void*)&WeaponTypeClass_vftable; /*0x771e77*/
    *((unsigned int *)this + 4) = &WeaponTypeClass::`vftable';
    *((unsigned int *)this + 8) = &WeaponTypeClass::`vftable';
    *((unsigned int *)this + 12) = &vt_WeaponTypeClass;
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->vtable2); /*0x771e91*/
  if ( g_WeaponTypePool < dword_887570 /*0x771eca*/
    || (byte_887575 || !dword_887570)
    && dword_88757C > 0
    && ((uint8_t (__thiscall *)(WeaponTypeClass **, int, unsigned int))WeaponTypeClass_Array->?)(
         &WeaponTypeClass_Array,
         dword_887570 + dword_88757C,
         0) )
  {
    v3 = (gamemd::WeaponTypeClass *)((unsigned int)(g_WeaponTypePool++));
    *((unsigned int *)(unsigned int)(g_WeaponTypeConfig)+ v3) = this; /*0x771ee6*/
  }
    return this;
}
} // namespace gamemd
// 0x771F50
namespace gamemd {
int WeaponTypeClass::Destructor()
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  WeaponTypeClass *v7; // [esp+8h] [ebp-4h] BYREF

    *(unsigned int *)this = &WeaponTypeClass::`vftable';
    *((unsigned int *)this + 16) = &WeaponTypeClass::`vftable';
    *((unsigned int *)this + 32) = &WeaponTypeClass::`vftable';
    *((unsigned int *)this + 48) = &vt_WeaponTypeClass;
  AbstractClass::AnnounceExpiredPointer(1); /*0x771f72*/
    *((unsigned int *)this + 640) = 0;
    *((unsigned int *)this + 688) = 0;
  v7 = this; /*0x771f95*/
  v2 = ((int (__thiscall *)(WeaponTypeClass **, WeaponTypeClass **))WeaponTypeClass_Array->?)( /*0x771f99*/
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
    v3 = *(void **)((char *)this + 992);
  this-((unsigned int *)(>Anim))[0] = (int)&VectorClass_AnimTypeClass_const___vftable; /*0x771fd4*/
    if ( v3 && *((unsigned char *)this + 1028) )
  {
    RA2_OPDEL(v3); /*0x771feb*/
        *((unsigned int *)this + 992) = 0;
  }
    *((unsigned char *)this + 1028) = 0;
  this-((unsigned int *)(>Anim))[2] = 0; /*0x771fff*/
  v4 = (void *)this-((unsigned int *)(>DownReport))[1]; /*0x772005*/
  this-((unsigned int *)(>DownReport))[0] = (int)&VectorClass_int_vftable; /*0x77200b*/
    if ( v4 && *((unsigned char *)this + 916) )
  {
    RA2_OPDEL(v4); /*0x772022*/
    this-((unsigned int *)(>DownReport))[1] = 0; /*0x77202a*/
  }
    *((unsigned char *)this + 916) = 0;
  this-((unsigned int *)(>DownReport))[2] = 0; /*0x772036*/
  v5 = (void *)this-((unsigned int *)(>Report))[1]; /*0x77203c*/
  this-((unsigned int *)(>Report))[0] = (int)&VectorClass_int_vftable; /*0x772042*/
    if ( v5 && *((unsigned char *)this + 804) )
  {
    RA2_OPDEL(v5); /*0x772059*/
        *((unsigned int *)this + 768) = 0;
  }
    *((unsigned char *)this + 804) = 0;
  this-((unsigned int *)(>Report))[2] = 0; /*0x77206f*/
    return AbstractTypeClass::Dtor((unsigned int *)this);
}
} // namespace gamemd
// 0x772AE0
namespace gamemd {
int WeaponTypeClass::ProcessPower(int * a2)
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

  AbstractTypeClass::ProcessPower(a2); /*0x772ae9*/
    Power::TimerProcess(*((unsigned int *)this + 608));
    LOBYTE(v3) = *((unsigned char *)this + 1216);
  Power::FlagProcess((Power *)a2, v3); /*0x772b05*/
    LOBYTE(v4) = *((unsigned char *)this + 1300);
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x772b13*/
    LOBYTE(v5) = *((unsigned char *)this + 1304);
  Power::FlagProcess((Power *)a2, v5); /*0x772b21*/
    LOBYTE(v6) = *((unsigned char *)this + 1308);
  Power::FlagProcess((Power *)a2, v6); /*0x772b2f*/
    LOBYTE(v7) = *((unsigned char *)this + 1316);
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x772b3d*/
    LOBYTE(v8) = *((unsigned char *)this + 1332);
  Power::FlagProcess((Power *)a2, v8); /*0x772b4b*/
    Power::TimerProcess(*((unsigned int *)this + 624));
    v9 = *((unsigned int *)this + 640);
  if ( Projectile ) /*0x772b66*/
  {
    v10 = (*(int (__stdcall **)(unsigned char *))(*(unsigned int *)&Projectile->ObjectTypeClass[4] + 16))(&Projectile->ObjectTypeClass[4]); /*0x772b6f*/
    Power::TimerProcess(v10); /*0x772b75*/
  }
    Power::TimerProcess(*((unsigned int *)this + 656));
    Power::TimerProcess(*((unsigned int *)this + 672));
    v11 = *((unsigned int *)this + 688);
  if ( Warhead ) /*0x772b9e*/
  {
    v12 = (*((int (__stdcall **)(void **))Warhead->WarheadTypeClass_field_0x4 + 4))(&Warhead->WarheadTypeClass_field_0x4); /*0x772ba7*/
    Power::TimerProcess(v12); /*0x772bad*/
  }
    Power::TimerProcess(*((unsigned int *)this + 704));
    Power::TimerProcess(*((unsigned int *)this + 720));
  Power::TimerProcess(this-((unsigned int *)(>Report))[4]); /*0x772bd7*/
  Power::TimerProcess(this-((unsigned int *)(>DownReport))[4]); /*0x772be5*/
    Power::TimerProcess(*((unsigned int *)this + 1040));
    LOBYTE(v13) = *((unsigned char *)this + 1188);
  v14 = Power::FlagProcess((Power *)a2, v13); /*0x772c01*/
    LOBYTE(v14) = *((unsigned char *)this + 1208);
  Power::FlagProcess((Power *)a2, v14); /*0x772c0f*/
    LOBYTE(v15) = *((unsigned char *)this + 1336);
  Power::FinalizeDrain((Power *)a2, v15); /*0x772c1d*/
    LOBYTE(v16) = *((unsigned char *)this + 1328);
  v17 = Power::FlagProcess((Power *)a2, v16); /*0x772c2b*/
    LOBYTE(v17) = *((unsigned char *)this + 1204);
  Power::FlagProcess((Power *)a2, v17); /*0x772c39*/
    LOBYTE(v18) = *((unsigned char *)this + 1312);
  Power::FlagProcess((Power *)a2, v18); /*0x772c47*/
    LOBYTE(v19) = *((unsigned char *)this + 1212);
  v20 = Power::FlagProcess((Power *)a2, v19); /*0x772c55*/
    LOBYTE(v20) = *((unsigned char *)this + 1192);
  Power::FlagProcess((Power *)a2, v20); /*0x772c63*/
    LOBYTE(v21) = *((unsigned char *)this + 1196);
  Power::FlagProcess((Power *)a2, v21); /*0x772c71*/
    LOBYTE(v22) = *((unsigned char *)this + 1200);
// 0x4a1ca0
  return Power::FlagProcess((Power *)a2, v22); /*0x772c84*/
}
} // namespace gamemd
// 0x772CD0
namespace gamemd {
void WeaponTypeClass_SaveLoad_Prefix(WeaponTypeClass *aP0, void * a1, void * a2, void * a3, void * a4, void * a5)
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
v5 = (gamemd::WeaponTypeClass *)((int *)(aP0));
  Report = (int *)(aP0->Report);
  (*(void (**)(int *))(aP0-((unsigned int *)(>Report))[0] + 12))(aP0->Report); /*0x772ce5*/
  (*(void (**)(int *))(v5-((unsigned int *)(>DownReport))[0] + 12))(v5->DownReport); /*0x772cf4*/
  v7 = a2; /*0x772cf7*/
  result = AbstractClass::SaveLoad_Prefix_0(v5, (int)a2); /*0x772cfd*/
  if ( result >= 0 ) /*0x772d04*/
  {
    if ( v5 ) /*0x772d0c*/
      WeaponTypeClass::loadWeaponProperties(v5, (int)&aP0); /*0x772d15*/
    if ( v5 != (WeaponTypeClass *)-244 ) /*0x772d23*/
    {
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)v5->Anim, 0, 0); /*0x772d2b*/
      v5-((unsigned int *)(>Anim))[0] = (int)&TypeList_AnimTypeClass_const___vftable; /*0x772d30*/
    }
    (*(void (__stdcall **)(int *, WeaponTypeClass **, int, unsigned int, int))(*v7 + 12))(v7, &aP0, 4, 0, v4); /*0x772d42*/
    for ( i = 0; i < (int)a2; ++i ) /*0x772d4d*/
    {
      (*(void (__stdcall **)(int *, int *, int, unsigned int))(*v7 + 12))(v7, &a3, 4, 0); /*0x772d5b*/
      DynamicVector::Add_Alt4((DynamicVector *)v5->Anim, &a3); /*0x772d69*/
    }
    if ( Report ) /*0x772d77*/
    {
      DynamicVectorClass::Construct((DynamicVectorClass *)Report, 0, 0); /*0x772d7f*/
      *Report = (int)&TypeList_int_vftable; /*0x772d84*/
    }
    (*(void (__stdcall **)(int *, int **, int, unsigned int))(*v7 + 12))(v7, &a2, 4, 0); /*0x772d97*/
    for ( j = 0; j < (int)a2; ++j ) /*0x772da2*/
    {
      (*(void (__stdcall **)(int *, int *, int, unsigned int))(*v7 + 12))(v7, &a3, 4, 0); /*0x772db0*/
      DynamicVector::Add_Alt((DynamicVector *)Report, &a3); /*0x772dba*/
    }
    if ( v5 != (WeaponTypeClass *)-216 ) /*0x772dce*/
      TypeList::Construct((TypeList *)v5->DownReport); /*0x772dd2*/
    (*(void (__stdcall **)(int *, int **, int))(*v7 + 12))(v7, &a2, 4); /*0x772de3*/
    for ( k = 0; k < (int)aP0; ++k ) /*0x772dee*/
    {
      (*(void (__stdcall **)(int *, int **, int, unsigned int))(*v7 + 12))(v7, &a2, 4, 0); /*0x772dfc*/
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
void WeaponTypeClass_SaveLoad_Prefix_0(void * a1, void * a2, void * a3, void * a4, void * a5)
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
    (*(void (__stdcall **)(int *, int **, int, unsigned int, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x772ee5*/
    for ( i = 0; i < a4; ++i ) /*0x772ef0*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, a1->Anim[1] + 4 * i, 4, 0); /*0x772f03*/
    v9 = *a2; /*0x772f13*/
    a4 = a1->Report[4]; /*0x772f1f*/
    (*(void (__stdcall **)(int *, int *, int, unsigned int))(v9 + 16))(a2, &a4, 4, 0); /*0x772f23*/
    for ( j = 0; j < a4; ++j ) /*0x772f2e*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, a1->Report[1] + 4 * j, 4, 0); /*0x772f41*/
    v11 = *a2; /*0x772f51*/
    a4 = a1->DownReport[4]; /*0x772f5d*/
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x772f61*/
    for ( k = 0; k < (int)a3; ++k ) /*0x772f6c*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, a1->DownReport[1] + 4 * k, 4, 0); /*0x772f7f*/
    return 0; /*0x772f89*/
  }
  return result; /*0x772f8c*/
}
}
// 0x7730F0
WeaponTypeClass * WeaponTypeClass::ddtor(char a2)
{
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  AbstractClass::AnnounceExpiredPointer(1); /*0x773112*/
    *(Block + 40) = 0;
    *(Block + 43) = 0;
  v3 = (*(int (**)(WeaponTypeClass **, void ***))&WeaponTypeClass_Array->gap0[16])( /*0x773139*/
         &WeaponTypeClass_Array,
         &this);
  if ( v3 != -1 && v3 < g_WeaponTypePool && v3 < --g_WeaponTypePool ) /*0x773154*/
  {
    do /*0x77316c*/
    {
      ++v3; /*0x77315c*/
      *((unsigned int *)g_WeaponTypeConfig + v3 - 1) = *((unsigned int *)g_WeaponTypeConfig + v3); /*0x773160*/
    }
    while ( v3 < g_WeaponTypePool ); /*0x77316c*/
  }
    v4 = *(Block + 62);
    if ( v4 && *((unsigned char *)Block + 257) )
  {
    RA2_OPDEL(v4); /*0x77318b*/
        *(Block + 62) = 0;
  }
    *((unsigned char *)Block + 257) = 0;
    *(Block + 63) = 0;
    v5 = *(Block + 55);
    if ( v5 && *((unsigned char *)Block + 229) )
  {
    RA2_OPDEL(v5); /*0x7731c2*/
        *(Block + 55) = 0;
  }
    *((unsigned char *)Block + 229) = 0;
    *(Block + 56) = 0;
    v6 = (DynamicVector *)*(Block + 48);
    if ( v6 && *((unsigned char *)Block + 201) )
  {
    RA2_OPDEL(v6); /*0x7731f9*/
        *(Block + 48) = 0;
  }
    *((unsigned char *)Block + 201) = 0;
    *(Block + 49) = 0;
  AbstractTypeClass::Dtor(); /*0x773215*/
  if ( (a2 & 1) != 0 ) /*0x77321f*/
    RA2_OPDEL(); /*0x773222*/
  return this; /*0x77322c*/
}
// 0x475B70
char WeaponTypeClass::ReadTrajectoryData(WeaponTypeClass * aP1, char * a2, int a4)
{
  int v4; // eax
  int v5; // edx
  char *v6; // ebx
  unsigned char Source[125]; // [esp+Ch] [ebp-80h] BYREF
  int16_t v10; // [esp+89h] [ebp-3h]
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
// 0x528660
  return INIClass::SetString(aP1, a2, Source); /*0x475c61*/
}
// 0x475C70
char  WeaponTypeClass::ReadVeteranData(char * a3, int a4, int * Block, int a6, short a7, int a8, int a9, int a10)
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
      SampleNameByIndex = VocClass::GetSampleNameByIndex(*v10++); /*0x475ce8*/
      strcat(Source, SampleNameByIndex); /*0x475d0d*/
      --v11; /*0x475d14*/
    }
    while ( v11 ); /*0x475d17*/
  }
  v13 = INIClass::SetString((char *)this, this, a3, Source); /*0x475d39*/
  if ( Block && IDA_HIBYTE(a7) ) /*0x475d4f*/
    RA2_OPDEL(Block); /*0x475d52*/
  return v13; /*0x475d5c*/
}
// 0x771F00
unsigned int *  WeaponTypeClass::loadWeaponProperties()
{
  AbstractTypeClass::Init(this); /*0x771f08*/
    *((unsigned int *)this + 188) = &vt_TypeList_int;
    *((unsigned int *)this + 216) = &vt_TypeList_int;
    *((unsigned int *)this + 244) = &vt_TypeList_AnimTypeClass_const;
    *this = &WeaponTypeClass::`vftable';
    *((unsigned int *)this + 4) = &WeaponTypeClass::`vftable';
    *((unsigned int *)this + 8) = &WeaponTypeClass::`vftable';
    *((unsigned int *)this + 12) = &vt_WeaponTypeClass;
    return this;
}
// 0x7729F0
int WeaponTypeClass::CalculateSpeed()
{
  int result; // eax
  double FiringDistance; // [esp+4h] [ebp-8h]

    result = *((unsigned int *)this + 160);
  if ( result && !*(unsigned int *)(result + 732) ) /*0x772a00*/
  {
    FiringDistance = (double)*(int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5816); /*0x772a1e*/
    if ( *(unsigned char *)(result + 661) ) /*0x772a16*/
      FiringDistance = RulesClass::GetFiringDistance(); /*0x772a29*/
        result = TechnoClass::ComputeScanRange((void *)*((unsigned int *)this + 180), WeatherConBoltExplosion);
        *((unsigned int *)this + 168) = result;
  }
  return result; /*0x772a48*/
}
// 0x772C90
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
// 0x7730D0
int WeaponTypeClass::GetObjectSize()
{
  return 352; /*0x7730d5*/
}
// 0x7730E0
int WeaponTypeClass::GetTypeIdentifier()
{
  return 49; /*0x7730e5*/
}