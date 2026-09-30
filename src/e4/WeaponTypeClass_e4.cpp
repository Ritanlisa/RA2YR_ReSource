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
void * WeaponTypeClass::Create(AbstractClass * Source)
{

  int v2; // esi
  unsigned char *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x51269c*/
    return 0; /*0x5126ff*/
  v2 = 0; /*0x5126ad*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x5126b1*/
  {
LABEL_6:
    v3 = (unsigned char *)RA2_OPNEW(0x1B0u); /*0x5126d6*/
    if ( v3 ) /*0x5126e5*/
      return (HouseTypeClass *)SuperWeaponTypeClass::Construct(v3, Source); /*0x5126f1*/
    return 0; /*0x5126e5*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)g_SuperWeaponTypeCount + v2) + 36), Source) ) /*0x5126ca*/
  {
    if ( ++v2 >= g_SuperWeaponTypeArray ) /*0x5126d4*/
      goto LABEL_6; /*0x5126d4*/
  }
  return (HouseTypeClass *)*((unsigned int *)g_SuperWeaponTypeCount + v2); /*0x5126ef*/

}
} // namespace gamemd
// 0x6CEEF0
namespace gamemd {
int WeaponTypeClass::Process(ObjectClass * Source)
{

  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6cef0c*/
    return 0; /*0x6cef6f*/
  v2 = 0; /*0x6cef1d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20620] <= 0 ) /*0x6cef21*/
  {
LABEL_6:
    v3 = RA2_OPNEW(0x100u); /*0x6cef46*/
    if ( v3 ) /*0x6cef55*/
      return SuperWeaponTypeClass::SuperWeaponTypeClass(v3, Source); /*0x6cef61*/
    return 0; /*0x6cef55*/
  }
  while ( _strcmpi((const void *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20608] + 4 * v2) + 36), Source) ) /*0x6cef3a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[20620] ) /*0x6cef44*/
      goto LABEL_6; /*0x6cef44*/
  }
  return *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[20608] + 4 * v2); /*0x6cef5f*/

}
} // namespace gamemd
// 0x771C70
namespace gamemd {
unsigned int * WeaponTypeClass::Constructor(ObjectClass * aP1)
{

  WeaponTypeClass *v3; // eax

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x771c7a*/
  *((unsigned int *)this + 38) = 0; /*0x771c87*/
  *((unsigned int *)this + 39) = 1; /*0x771c8d*/
  *((unsigned int *)this + 40) = 0; /*0x771c97*/
  *((unsigned int *)this + 41) = 0; /*0x771c9d*/
  *((unsigned int *)this + 42) = 0; /*0x771ca3*/
  *((unsigned int *)this + 43) = 0; /*0x771ca9*/
  *((unsigned int *)this + 44) = 0; /*0x771caf*/
  *((unsigned int *)this + 45) = 0; /*0x771cb6*/
  *((unsigned int *)this + 46) = 0; /*0x771cbf*/
  VectorClass::Construct((unsigned int *)this + 47, 0, 0); /*0x771cc5*/
  *((unsigned int *)this + 52) = 10; /*0x771cca*/
  *((unsigned int *)this + 51) = 0; /*0x771cd1*/
  *((unsigned int *)this + 47) = &vt_TypeList_int; /*0x771cd4*/
  VectorClass::Construct((unsigned int *)this + 54, 0, 0); /*0x771ce4*/
  *((unsigned int *)this + 59) = 10; /*0x771ce9*/
  *((unsigned int *)this + 58) = 0; /*0x771cf0*/
  *((unsigned int *)this + 54) = &vt_TypeList_int; /*0x771cf3*/
  AnimTypeVector::Constructor((unsigned int *)this + 61, 0, 0); /*0x771d03*/
  *((unsigned int *)this + 66) = 10; /*0x771d08*/
  *((unsigned int *)this + 65) = 0; /*0x771d0f*/
  *((unsigned int *)this + 61) = &vt_TypeList_AnimTypeClass_const; /*0x771d12*/
  *((unsigned int *)this + 68) = 0; /*0x771d18*/
  *((unsigned int *)this + 69) = 0; /*0x771d1e*/
  *((unsigned int *)this + 70) = 0; /*0x771d24*/
  *((unsigned int *)this + 71) = 0; /*0x771d2a*/
  *((unsigned char *)this + 288) = 0; /*0x771d30*/
  *((unsigned char *)this + 289) = 0; /*0x771d36*/
  *((unsigned char *)this + 290) = 0; /*0x771d3c*/
  *((unsigned char *)this + 291) = 0; /*0x771d42*/
  *((unsigned int *)this + 73) = 0; /*0x771d48*/
  *((unsigned int *)this + 74) = 0; /*0x771d60*/
  *((unsigned int *)this + 75) = 0; /*0x771d78*/
  *((unsigned int *)this + 76) = 0x1000000; /*0x771d90*/
  *((unsigned char *)this + 308) = 0; /*0x771da9*/
  *((unsigned char *)this + 309) = 0; /*0x771daf*/
  *((unsigned char *)this + 310) = 0; /*0x771db5*/
  *((unsigned char *)this + 311) = 1; /*0x771dbb*/
  *((unsigned char *)this + 312) = 0; /*0x771dc2*/
  *((unsigned char *)this + 313) = 0; /*0x771dc8*/
  *((unsigned char *)this + 314) = 0; /*0x771dce*/
  *((unsigned char *)this + 315) = 0; /*0x771dd4*/
  *((unsigned int *)this + 79) = 0; /*0x771dda*/
  *((unsigned char *)this + 320) = 0; /*0x771de0*/
  *((unsigned char *)this + 321) = 1; /*0x771de6*/
  *((unsigned char *)this + 322) = 0; /*0x771ded*/
  *((unsigned char *)this + 323) = 1; /*0x771df3*/
  *((unsigned char *)this + 324) = 0; /*0x771dfa*/
  *((unsigned char *)this + 325) = 0; /*0x771e00*/
  *((unsigned char *)this + 326) = 0; /*0x771e06*/
  *((unsigned char *)this + 327) = 0; /*0x771e0f*/
  *((unsigned char *)this + 328) = 0; /*0x771e16*/
  *((unsigned char *)this + 329) = 0; /*0x771e1c*/
  *((unsigned char *)this + 330) = 0; /*0x771e22*/
  *((unsigned char *)this + 331) = 0; /*0x771e28*/
  *((unsigned char *)this + 332) = 0; /*0x771e2e*/
  *((unsigned char *)this + 333) = 0; /*0x771e34*/
  *((unsigned char *)this + 334) = 10; /*0x771e3a*/
  *((unsigned char *)this + 335) = 0; /*0x771e41*/
  *((unsigned char *)this + 336) = 0; /*0x771e47*/
  *((unsigned char *)this + 337) = 0; /*0x771e4d*/
  *((unsigned char *)this + 338) = 0; /*0x771e53*/
  *((unsigned char *)this + 339) = 0; /*0x771e59*/
  *((unsigned char *)this + 340) = 0; /*0x771e5f*/
  *((unsigned char *)this + 341) = 0; /*0x771e65*/
  *((unsigned int *)this + 86) = 0; /*0x771e6b*/
  *((unsigned char *)this + 348) = 0; /*0x771e71*/
  *this = &vt_WeaponTypeClass; /*0x771e77*/
  *((unsigned int *)this + 1) = &vt_WeaponTypeClass; /*0x771e7d*/
  *((unsigned int *)this + 2) = &vt_WeaponTypeClass; /*0x771e83*/
  *((unsigned int *)this + 3) = &vt_WeaponTypeClass; /*0x771e8a*/
  AbstractClass::GenerateUniqueID((int)((unsigned int *)this + 1)); /*0x771e91*/
  if ( *(int *)&stru_87C374.__pad_579C[23144] < *(int *)&stru_87C374.__pad_579C[23136] /*0x771eca*/
    || (stru_87C374.__pad_579C[23141] || !*(unsigned int *)&stru_87C374.__pad_579C[23136])
    && *(int *)&stru_87C374.__pad_579C[23148] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_87C374.__pad_579C[23128] + 8))(
         &stru_87C374.__pad_579C[23128],
         *(unsigned int *)&stru_87C374.__pad_579C[23136] + *(unsigned int *)&stru_87C374.__pad_579C[23148],
         0) )
  {
    v3 = (WeaponTypeClass *)(*(unsigned int *)&stru_87C374.__pad_579C[23144])++; /*0x771ed7*/
    *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[23132] + 4 * (unsigned int)v3) = this; /*0x771ee6*/
  }
  return this; /*0x771eeb*/

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
  int v7; // [esp+8h] [ebp-4h] BYREF

  *(unsigned int *)this = &vt_WeaponTypeClass; /*0x771f57*/
  *((unsigned int *)this + 1) = &vt_WeaponTypeClass; /*0x771f5d*/
  *((unsigned int *)this + 2) = &vt_WeaponTypeClass; /*0x771f64*/
  *((unsigned int *)this + 3) = &vt_WeaponTypeClass; /*0x771f6b*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x771f72*/
  *((unsigned int *)this + 40) = 0; /*0x771f7d*/
  *((unsigned int *)this + 43) = 0; /*0x771f83*/
  v7 = this; /*0x771f95*/
  v2 = (*(int (**)(WeaponTypeClass **, int *))&g_abs_887568->__pad_0[16])(&g_abs_887568, &v7); /*0x771f99*/
  if ( v2 != -1 && v2 < g_abs_887578 && v2 < --g_abs_887578 ) /*0x771fb4*/
  {
    do /*0x771fcc*/
    {
      ++v2; /*0x771fbc*/
      *((unsigned int *)g_abs_88756C + v2 - 1) = *((unsigned int *)g_abs_88756C + v2); /*0x771fc0*/
    }
    while ( v2 < g_abs_887578 ); /*0x771fcc*/
  }
  v3 = *(void **)((char *)this + 248); /*0x771fce*/
  *((unsigned int *)this + 61) = &vt_VectorClass_AnimTypeClass_const; /*0x771fd4*/
  if ( v3 && *((unsigned char *)this + 257) ) /*0x771fe2*/
  {
    RA2_OPDEL(v3); /*0x771feb*/
    *((unsigned int *)this + 62) = 0; /*0x771ff3*/
  }
  *((unsigned char *)this + 257) = 0; /*0x771ff9*/
  *((unsigned int *)this + 63) = 0; /*0x771fff*/
  v4 = *(void **)((char *)this + 220); /*0x772005*/
  *((unsigned int *)this + 54) = &vt_VectorClass_int; /*0x77200b*/
  if ( v4 && *((unsigned char *)this + 229) ) /*0x772019*/
  {
    RA2_OPDEL(v4); /*0x772022*/
    *((unsigned int *)this + 55) = 0; /*0x77202a*/
  }
  *((unsigned char *)this + 229) = 0; /*0x772030*/
  *((unsigned int *)this + 56) = 0; /*0x772036*/
  v5 = *(void **)((char *)this + 192); /*0x77203c*/
  *((unsigned int *)this + 47) = &vt_VectorClass_int; /*0x772042*/
  if ( v5 && *((unsigned char *)this + 201) ) /*0x772050*/
  {
    RA2_OPDEL(v5); /*0x772059*/
    *((unsigned int *)this + 48) = 0; /*0x772061*/
  }
  *((unsigned char *)this + 201) = 0; /*0x772069*/
  *((unsigned int *)this + 49) = 0; /*0x77206f*/
  return AbstractTypeClass::Dtor((unsigned int *)this); /*0x77207a*/

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
  int v9; // eax
  int v10; // eax
  int v11; // eax
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

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x772ae9*/
  Power::TimerProcess(*((unsigned int *)this + 38)); /*0x772af7*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 304); /*0x772afc*/
  Power::FlagProcess(a2, v3); /*0x772b05*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 325); /*0x772b0a*/
  v5 = Power::FlagProcess(a2, v4); /*0x772b13*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 326); /*0x772b18*/
  Power::FlagProcess(a2, v5); /*0x772b21*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 327); /*0x772b26*/
  Power::FlagProcess(a2, v6); /*0x772b2f*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 329); /*0x772b34*/
  v8 = Power::FlagProcess(a2, v7); /*0x772b3d*/
  IDA_LOBYTE(v8) = *((unsigned char *)this + 333); /*0x772b42*/
  Power::FlagProcess(a2, v8); /*0x772b4b*/
  Power::TimerProcess(*((unsigned int *)this + 39)); /*0x772b59*/
  v9 = *((unsigned int *)this + 40); /*0x772b5e*/
  if ( v9 ) /*0x772b66*/
  {
    v10 = (*(int (**)(int))(*(unsigned int *)(v9 + 4) + 16))(v9 + 4); /*0x772b6f*/
    Power::TimerProcess(v10); /*0x772b75*/
  }
  Power::TimerProcess(*((unsigned int *)this + 41)); /*0x772b83*/
  Power::TimerProcess(*((unsigned int *)this + 42)); /*0x772b91*/
  v11 = *((unsigned int *)this + 43); /*0x772b96*/
  if ( v11 ) /*0x772b9e*/
  {
    v12 = (*(int (**)(int))(*(unsigned int *)(v11 + 4) + 16))(v11 + 4); /*0x772ba7*/
    Power::TimerProcess(v12); /*0x772bad*/
  }
  Power::TimerProcess(*((unsigned int *)this + 44)); /*0x772bbb*/
  Power::TimerProcess(*((unsigned int *)this + 45)); /*0x772bc9*/
  Power::TimerProcess(*((unsigned int *)this + 51)); /*0x772bd7*/
  Power::TimerProcess(*((unsigned int *)this + 58)); /*0x772be5*/
  Power::TimerProcess(*((unsigned int *)this + 65)); /*0x772bf3*/
  IDA_LOBYTE(v13) = *((unsigned char *)this + 297); /*0x772bf8*/
  v14 = Power::FlagProcess(a2, v13); /*0x772c01*/
  IDA_LOBYTE(v14) = *((unsigned char *)this + 302); /*0x772c06*/
  Power::FlagProcess(a2, v14); /*0x772c0f*/
  IDA_LOBYTE(v15) = *((unsigned char *)this + 334); /*0x772c14*/
  Power::FinalizeDrain(a2, v15); /*0x772c1d*/
  IDA_LOBYTE(v16) = *((unsigned char *)this + 332); /*0x772c22*/
  v17 = Power::FlagProcess(a2, v16); /*0x772c2b*/
  IDA_LOBYTE(v17) = *((unsigned char *)this + 301); /*0x772c30*/
  Power::FlagProcess(a2, v17); /*0x772c39*/
  IDA_LOBYTE(v18) = *((unsigned char *)this + 328); /*0x772c3e*/
  Power::FlagProcess(a2, v18); /*0x772c47*/
  IDA_LOBYTE(v19) = *((unsigned char *)this + 303); /*0x772c4c*/
  v20 = Power::FlagProcess(a2, v19); /*0x772c55*/
  IDA_LOBYTE(v20) = *((unsigned char *)this + 298); /*0x772c5a*/
  Power::FlagProcess(a2, v20); /*0x772c63*/
  IDA_LOBYTE(v21) = *((unsigned char *)this + 299); /*0x772c68*/
  Power::FlagProcess(a2, v21); /*0x772c71*/
  IDA_LOBYTE(v22) = *((unsigned char *)this + 300); /*0x772c76*/
  return Power::FlagProcess(a2, v22); /*0x772c84*/

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
WeaponTypeClass * WeaponTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  DynamicVector *v6; // eax
  WeaponTypeClass *v8; // [esp+8h] [ebp-4h] BYREF

  *Block = &vt_WeaponTypeClass; /*0x7730f7*/
  *(Block + 1) = &vt_WeaponTypeClass; /*0x7730fd*/
  *(Block + 2) = &vt_WeaponTypeClass; /*0x773104*/
  *(Block + 3) = &vt_WeaponTypeClass; /*0x77310b*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x773112*/
  *(Block + 40) = 0; /*0x77311d*/
  *(Block + 43) = 0; /*0x773123*/
  v8 = (WeaponTypeClass *)Block; /*0x773135*/
  v3 = ((int (*)(WeaponTypeClass **, WeaponTypeClass **))g_abs_887568->uniqueId)(&g_abs_887568, &v8); /*0x773139*/
  if ( v3 != -1 && v3 < g_abs_887578 && v3 < --g_abs_887578 ) /*0x773154*/
  {
    do /*0x77316c*/
    {
      ++v3; /*0x77315c*/
      *((unsigned int *)g_abs_88756C + v3 - 1) = *((unsigned int *)g_abs_88756C + v3); /*0x773160*/
    }
    while ( v3 < g_abs_887578 ); /*0x77316c*/
  }
  v4 = *(Block + 62); /*0x77316e*/
  *(Block + 61) = &vt_VectorClass_AnimTypeClass_const; /*0x773174*/
  if ( v4 && *((unsigned char *)Block + 257) ) /*0x773182*/
  {
    RA2_OPDEL(v4); /*0x77318b*/
    *(Block + 62) = 0; /*0x773193*/
  }
  *((unsigned char *)Block + 257) = 0; /*0x773199*/
  *(Block + 63) = 0; /*0x77319f*/
  v5 = *(Block + 55); /*0x7731a5*/
  *(Block + 54) = &vt_VectorClass_int; /*0x7731ab*/
  if ( v5 && *((unsigned char *)Block + 229) ) /*0x7731b9*/
  {
    RA2_OPDEL(v5); /*0x7731c2*/
    *(Block + 55) = 0; /*0x7731ca*/
  }
  *((unsigned char *)Block + 229) = 0; /*0x7731d0*/
  *(Block + 56) = 0; /*0x7731d6*/
  v6 = (DynamicVector *)*(Block + 48); /*0x7731dc*/
  *(Block + 47) = &vt_VectorClass_int; /*0x7731e2*/
  if ( v6 && *((unsigned char *)Block + 201) ) /*0x7731f0*/
  {
    RA2_OPDEL(v6); /*0x7731f9*/
    *(Block + 48) = 0; /*0x773201*/
  }
  *((unsigned char *)Block + 201) = 0; /*0x773209*/
  *(Block + 49) = 0; /*0x77320f*/
  AbstractTypeClass::Dtor(Block); /*0x773215*/
  if ( (Block & 1) != 0 ) /*0x77321f*/
    RA2_OPDEL(Block); /*0x773222*/
  return (WeaponTypeClass *)Block; /*0x77322c*/

}
// 0x475B70
char WeaponTypeClass::ReadTrajectoryData(uint8_t * Block, char * a3, int a4)
{

  int v4; // eax
  int v5; // edx
  char *v6; // ebx
  int v8; // [esp+4h] [ebp-88h]
  unsigned char Source[125]; // [esp+Ch] [ebp-80h] BYREF
  int16_t v10; // [esp+89h] [ebp-3h]
  char v11; // [esp+8Bh] [ebp-1h]

  Source[0] = g_abs_889F64; /*0x475b80*/
  memset(&Source[1], 0, 0x7Cu); /*0x475b8f*/
  v10 = 0; /*0x475b91*/
  v11 = 0; /*0x475b93*/
  v4 = g_abs_A83C78; /*0x475b94*/
  if ( g_abs_A83C78 > 32 ) /*0x475b9c*/
    v4 = 32; /*0x475b9e*/
  v5 = 0; /*0x475ba3*/
  v8 = v4; /*0x475ba5*/
  if ( v4 > 0 ) /*0x475bab*/
  {
    v6 = (char *)g_abs_A83C6C; /*0x475bb2*/
    do /*0x475c3a*/
    {
      if ( ((1 << v5) & a4) != 0 ) /*0x475bca*/
      {
        if ( Source[0] ) /*0x475bd2*/
          strcat(Source, Delimiter); /*0x475bf9*/
        strcat(Source, (const char *)(*(unsigned int *)v6 + 36)); /*0x475c27*/
        v4 = v8; /*0x475c29*/
      }
      ++v5; /*0x475c34*/
      v6 += 4; /*0x475c35*/
    }
    while ( v5 < v4 ); /*0x475c3a*/
  }
  return INIClass::SetString(this, Block, a3, Source); /*0x475c61*/

}
// 0x475C70
char  WeaponTypeClass::ReadVeteranData( uint8_t * a2, char * a3, int a4, int * Block, int a6, int16_t a7, int a8, int a9, int a10)
{

  int *v10; // ebx
  int v11; // ebp
  char *SampleNameByIndex; // edi
  char v13; // bl
  unsigned char Source[125]; // [esp+Ch] [ebp-80h] BYREF
  int16_t v17; // [esp+89h] [ebp-3h]
  char v18; // [esp+8Bh] [ebp-1h]

  Source[0] = g_abs_889F64; /*0x475c81*/
  memset(&Source[1], 0, 0x7Cu); /*0x475c90*/
  v17 = 0; /*0x475c92*/
  v18 = 0; /*0x475c94*/
  if ( a8 > 0 ) /*0x475c9e*/
  {
    v10 = a7; /*0x475ca0*/
    v11 = a8; /*0x475ca9*/
    do /*0x475d17*/
    {
      if ( Source[0] ) /*0x475cb1*/
        strcat(Source, g_abs_817F70); /*0x475cd8*/
      SampleNameByIndex = VocClass::GetSampleNameByIndex(*v10++); /*0x475ce8*/
      strcat(Source, SampleNameByIndex); /*0x475d0d*/
      --v11; /*0x475d14*/
    }
    while ( v11 ); /*0x475d17*/
  }
  v13 = INIClass::SetString(a7, a8, a7, Source); /*0x475d39*/
  if ( a7 && IDA_HIBYTE(a7) ) /*0x475d4f*/
    RA2_OPDEL(a7); /*0x475d52*/
  return v13; /*0x475d5c*/

}
// 0x771F00
unsigned int *  WeaponTypeClass::loadWeaponProperties( AbstractTypeClass * aP1)
{

  AbstractTypeClass::Init((int)this, aP1); /*0x771f08*/
  *(this + 47) = &vt_TypeList_int; /*0x771f12*/
  *(this + 54) = &vt_TypeList_int; /*0x771f18*/
  *(this + 61) = &vt_TypeList_AnimTypeClass_const; /*0x771f1e*/
  *this = &vt_WeaponTypeClass; /*0x771f28*/
  *(this + 1) = &vt_WeaponTypeClass; /*0x771f2e*/
  *(this + 2) = &vt_WeaponTypeClass; /*0x771f35*/
  *(this + 3) = &vt_WeaponTypeClass; /*0x771f3c*/
  return this; /*0x771f45*/

}
// 0x7729F0
int WeaponTypeClass::CalculateSpeed()
{

  int result; // eax
  double WeatherConBoltExplosion; // [esp+4h] [ebp-8h]

  result = *((unsigned int *)this + 40); /*0x7729f6*/
  if ( result && !*(unsigned int *)(result + 732) ) /*0x772a00*/
  {
    WeatherConBoltExplosion = (double)g_abs_8871E0[1].?; /*0x772a1e*/
    if ( *(unsigned char *)(result + 661) ) /*0x772a16*/
      WeatherConBoltExplosion = RulesClass::GetFiringDistance(); /*0x772a29*/
    result = TechnoClass::ComputeScanRange((void *)*((unsigned int *)this + 45), WeatherConBoltExplosion); /*0x772a3d*/
    *((unsigned int *)this + 42) = result; /*0x772a42*/
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
  a2[3] = -1252326136; /*0x772cc0*/
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