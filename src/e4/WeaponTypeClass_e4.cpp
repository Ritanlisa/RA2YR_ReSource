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

// 0x512680
namespace gamemd {
void * WeaponTypeClass::Create()
{
  int v2; // esi
  unsigned char *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x51269c*/
    return 0; /*0x5126ff*/
  v2 = 0; /*0x5126ad*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x5126b1*/
  {
  LABEL_6:
    v3 = operator new(0x1B0u); /*0x5126d6*/
    if ( v3 ) /*0x5126e5*/
      return SuperWeaponTypeClass::Construct(v3, Source); /*0x5126f1*/
    return 0; /*0x5126e5*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)g_SuperWeaponTypeCount + v2) + 36), Source) ) /*0x5126ca*/
  {
    if ( ++v2 >= g_SuperWeaponTypeArray ) /*0x5126d4*/
      goto LABEL_6; /*0x5126d4*/
  }
  return (unsigned char *)*((unsigned int *)g_SuperWeaponTypeCount + v2); /*0x5126ef*/
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
  if ( g_HouseClassInitState <= 0 ) /*0x6cef21*/
  {
  LABEL_6:
    v3 = operator new(0x100u); /*0x6cef46*/
    if ( v3 ) /*0x6cef55*/
      return SuperWeaponTypeClass::SuperWeaponTypeClass((int)v3, Source); /*0x6cef61*/
    return 0; /*0x6cef55*/
  }
  while ( _strcmpi((const void *)(*((unsigned int *)g_SuperWeaponPool + v2) + 36), Source) ) /*0x6cef3a*/
  {
    if ( ++v2 >= g_HouseClassInitState ) /*0x6cef44*/
      goto LABEL_6; /*0x6cef44*/
  }
  return *((unsigned int *)g_SuperWeaponPool + v2); /*0x6cef5f*/
}
} // namespace gamemd
// 0x771C70
namespace gamemd {
unsigned int * WeaponTypeClass::Constructor(ObjectClass * aP1)
{
  WeaponTypeClass * v3;

  AbstractTypeClass::Constructor(aP1); /*0x771c7a*/
  *(&this->vtable48) = 0; /*0x771c87*/
  *(&this->vtable49) = 1; /*0x771c8d*/
  *(&this->uniqueId0) = 0; /*0x771c97*/
  *(&this->uniqueId1) = 0; /*0x771c9d*/
  *(&this->uniqueId2) = 0; /*0x771ca3*/
  *(&this->uniqueId3) = 0; /*0x771ca9*/
  *(&this->uniqueId4) = 0; /*0x771caf*/
  *(&this->uniqueId5) = 0; /*0x771cb6*/
  *(&this->uniqueId6) = 0; /*0x771cbf*/
  VectorClass::Construct(&this->Report, 0, 0); /*0x771cc5*/
  *(&this->abstractFlags2) = 10; /*0x771cca*/
  *(&this->abstractFlags1) = 0; /*0x771cd1*/
  VectorClass::Construct(&this->q0D8, 0, 0); /*0x771ce4*/
  *(&this->abstractFlags9) = 10; /*0x771ce9*/
  *(&this->abstractFlags8) = 0; /*0x771cf0*/
  AnimTypeVector::Constructor(&this->q0F4, 0, 0); /*0x771d03*/
  *(&this->nextArrayIndex6) = 10; /*0x771d08*/
  *(&this->nextArrayIndex5) = 0; /*0x771d0f*/
  *(&this->nextArrayIndex8) = 0; /*0x771d18*/
  *(&this->nextArrayIndex9) = 0; /*0x771d1e*/
  *(&this->referenceCount0) = 0; /*0x771d24*/
  *(&this->referenceCount1) = 0; /*0x771d2a*/
  this->q120 = 0; /*0x771d30*/
  this->u32_121 = 0; /*0x771d36*/
  this->ptr_122 = 0; /*0x771d3c*/
  this->q123 = 0; /*0x771d42*/
  this->q124 = 0; /*0x771d48*/
  this->ptr_125 = 0; /*0x771d4e*/
  this->q126 = 0; /*0x771d54*/
  this->ptr_127 = 0; /*0x771d5a*/
  this->q128 = 0; /*0x771d60*/
  this->q129 = 0; /*0x771d66*/
  this->q12A = 0; /*0x771d6c*/
  this->q12B = 0; /*0x771d72*/
  this->q12C = 0; /*0x771d78*/
  this->q12D = 0; /*0x771d7e*/
  this->q12E = 0; /*0x771d84*/
  this->q12F = 0; /*0x771d8a*/
  this->q130 = 0; /*0x771d90*/
  this->q131 = 0; /*0x771d96*/
  this->q132 = 0; /*0x771d9c*/
  this->q133 = 1; /*0x771da2*/
  this->q134 = 0; /*0x771da9*/
  this->q135 = 0; /*0x771daf*/
  this->q136 = 0; /*0x771db5*/
  this->q137 = 1; /*0x771dbb*/
  this->q138 = 0; /*0x771dc2*/
  this->q139 = 0; /*0x771dc8*/
  this->q13A = 0; /*0x771dce*/
  this->q13B = 0; /*0x771dd4*/
  *(&this->referenceCount9) = 0; /*0x771dda*/
  this->q140 = 0; /*0x771de0*/
  this->q141 = 1; /*0x771de6*/
  this->q142 = 0; /*0x771ded*/
  this->q143 = 1; /*0x771df3*/
  this->q144 = 0; /*0x771dfa*/
  this->q145 = 0; /*0x771e00*/
  this->q146 = 0; /*0x771e06*/
  this->q147 = 0; /*0x771e0f*/
  this->q148 = 0; /*0x771e16*/
  this->q149 = 0; /*0x771e1c*/
  this->q14A = 0; /*0x771e22*/
  this->q14B = 0; /*0x771e28*/
  this->q14C = 0; /*0x771e2e*/
  this->q14D = 0; /*0x771e34*/
  this->q14E = 10; /*0x771e3a*/
  this->q14F = 0; /*0x771e41*/
  this->q150 = 0; /*0x771e47*/
  this->q151 = 0; /*0x771e4d*/
  this->q152 = 0; /*0x771e53*/
  this->q153 = 0; /*0x771e59*/
  this->q154 = 0; /*0x771e5f*/
  this->q155 = 0; /*0x771e65*/
  *(&this->NeedsSaveOrLink6) = 0; /*0x771e6b*/
  this->q15C = 0; /*0x771e71*/
  AbstractClass::GenerateUniqueID((int)&this->vtable2); /*0x771e91*/
  if ( g_WeaponTypePool < dword_887570 /*0x771eca*/
    || (byte_887575 || !dword_887570)
    && dword_88757C > 0
    && (*(uint8_t (__thiscall **)(WeaponTypeClass **, int, unsigned int))&WeaponTypeClass_Array->gap0[8])(
         &WeaponTypeClass_Array,
         dword_887570 + dword_88757C,
         0) )
  {
    v3 = g_WeaponTypePool++; /*0x771ed7*/
    *((unsigned int *)g_WeaponTypeConfig + v3) = this; /*0x771ee6*/
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

  AbstractClass::AnnounceExpiredPointer(1); /*0x771f72*/
  this->Projectile = 0; /*0x771f7d*/
  this->Warhead = 0; /*0x771f83*/
  v2 = (*(int (__thiscall **)(WeaponTypeClass **, int *))&WeaponTypeClass_Array->gap0[16])(&WeaponTypeClass_Array, &this); /*0x771f99*/
  if ( v2 != -1 && v2 < g_WeaponTypePool && v2 < --g_WeaponTypePool ) /*0x771fb4*/
  {
    do /*0x771fcc*/
    {
      ++v2; /*0x771fbc*/
      *((unsigned int *)g_WeaponTypeConfig + v2 - 1) = *((unsigned int *)g_WeaponTypeConfig + v2); /*0x771fc0*/
    }
    while ( v2 < g_WeaponTypePool ); /*0x771fcc*/
  }
  v3 = *(void **)(&this->UIName8); /*0x771fce*/
  if ( v3 && this->IsHouseColor ) /*0x771fe2*/
  {
    RA2_OPDEL(v3); /*0x771feb*/
    this->Suicide = 0; /*0x771ff3*/
  }
  this->IsHouseColor = 0; /*0x771ff9*/
  this->Charges = 0; /*0x771fff*/
  v4 = *(void **)(&this->q0580); /*0x772005*/
  if ( v4 && this->Spawner ) /*0x772019*/
  {
    RA2_OPDEL(v4); /*0x772022*/
    this->q0DC = 0; /*0x77202a*/
  }
  this->Spawner = 0; /*0x772030*/
  this->DistributedWeaponFire = 0; /*0x772036*/
  v5 = *(void **)(&this->q04C2); /*0x77203c*/
  if ( v5 && this->u8_C9 ) /*0x772050*/
  {
    RA2_OPDEL(v5); /*0x772059*/
    this->Anim = 0; /*0x772061*/
  }
  this->u8_C9 = 0; /*0x772069*/
  this->OccupantAnim = 0; /*0x77206f*/
  return AbstractTypeClass::Dtor(); /*0x77207a*/
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

  AbstractTypeClass::ProcessPower(a2); /*0x772ae9*/
  Power::TimerProcess(this->AmbientDamage); /*0x772af7*/
  IDA_LOBYTE(v3) = this->q130; /*0x772afc*/
  Power::FlagProcess(a2, v3); /*0x772b05*/
  IDA_LOBYTE(v4) = this->q145; /*0x772b0a*/
  v5 = Power::FlagProcess(a2, v4); /*0x772b13*/
  IDA_LOBYTE(v5) = this->q146; /*0x772b18*/
  Power::FlagProcess(a2, v5); /*0x772b21*/
  IDA_LOBYTE(v6) = this->q147; /*0x772b26*/
  Power::FlagProcess(a2, v6); /*0x772b2f*/
  IDA_LOBYTE(v7) = this->q149; /*0x772b34*/
  v8 = Power::FlagProcess(a2, v7); /*0x772b3d*/
  IDA_LOBYTE(v8) = this->q14D; /*0x772b42*/
  Power::FlagProcess(a2, v8); /*0x772b4b*/
  Power::TimerProcess(this->Burst); /*0x772b59*/
  v9 = this->Projectile; /*0x772b5e*/
  if ( v9 ) /*0x772b66*/
  {
    v10 = (*(int (__stdcall **)(int))(*(unsigned int *)(v9 + 4) + 16))(v9 + 4); /*0x772b6f*/
    Power::TimerProcess(v10); /*0x772b75*/
  }
  Power::TimerProcess(this->Damage); /*0x772b83*/
  Power::TimerProcess(this->Speed); /*0x772b91*/
  v11 = this->Warhead; /*0x772b96*/
  if ( v11 ) /*0x772b9e*/
  {
    v12 = (*(int (__stdcall **)(int))(*(unsigned int *)(v11 + 4) + 16))(v11 + 4); /*0x772ba7*/
    Power::TimerProcess(v12); /*0x772bad*/
  }
  Power::TimerProcess(this->ROF); /*0x772bbb*/
  Power::TimerProcess(this->Range); /*0x772bc9*/
  Power::TimerProcess(this->OpenToppedAnim); /*0x772bd7*/
  Power::TimerProcess(this->CellRangefinding); /*0x772be5*/
  Power::TimerProcess(this->AreaFire); /*0x772bf3*/
  IDA_LOBYTE(v13) = this->q129; /*0x772bf8*/
  v14 = Power::FlagProcess(a2, v13); /*0x772c01*/
  IDA_LOBYTE(v14) = this->q12E; /*0x772c06*/
  Power::FlagProcess(a2, v14); /*0x772c0f*/
  IDA_LOBYTE(v15) = this->q14E; /*0x772c14*/
  Power::FinalizeDrain(a2, v15); /*0x772c1d*/
  IDA_LOBYTE(v16) = this->q14C; /*0x772c22*/
  v17 = Power::FlagProcess(a2, v16); /*0x772c2b*/
  IDA_LOBYTE(v17) = this->q12D; /*0x772c30*/
  Power::FlagProcess(a2, v17); /*0x772c39*/
  IDA_LOBYTE(v18) = this->q148; /*0x772c3e*/
  Power::FlagProcess(a2, v18); /*0x772c47*/
  IDA_LOBYTE(v19) = this->q12F; /*0x772c4c*/
  v20 = Power::FlagProcess(a2, v19); /*0x772c55*/
  IDA_LOBYTE(v20) = this->q12A; /*0x772c5a*/
  Power::FlagProcess(a2, v20); /*0x772c63*/
  IDA_LOBYTE(v21) = this->q12B; /*0x772c68*/
  Power::FlagProcess(a2, v21); /*0x772c71*/
  IDA_LOBYTE(v22) = this->q12C; /*0x772c76*/
  return Power::FlagProcess(a2, v22, unsigned int a3); /*0x772c84*/
}
} // namespace gamemd
// 0x772CD0
namespace gamemd {
void WeaponTypeClass_SaveLoad_Prefix()
{
  int *v4; // edi
  unsigned int *v5; // ebp
  int v6; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // esi

  v4 = a2; /*0x772cd3*/
  v5 = a2 + 47; /*0x772cdd*/
  (*(void (__thiscall **)(int *))(a2[47] + 12))(a2 + 47); /*0x772ce5*/
  (*(void (__thiscall **)(int *))(v4[54] + 12))(v4 + 54); /*0x772cf4*/
  v6 = a3; /*0x772cf7*/
  result = AbstractClass::SaveLoad_Prefix_0(v4, a3); /*0x772cfd*/
  if ( result >= 0 ) /*0x772d04*/
  {
    if ( v4 ) /*0x772d0c*/
      WeaponTypeClass::loadWeaponProperties(v4, (int)&a2); /*0x772d15*/
    if ( v4 != (int *)-244 ) /*0x772d23*/
    {
      DynamicVectorClass::AnimTypeConstructor(v4 + 61, 0, 0); /*0x772d2b*/
      v4[61] = (int, unsigned int a2, unsigned int a1, unsigned int a3, unsigned int a4)(void*)&TypeList_AnimTypeClass_const___vftable; /*0x772d30*/
    }
    (*(void (__stdcall **)(int, int **, int, unsigned int, int))(*(unsigned int *)v6 + 12))(v6, &a2, 4, 0, a1); /*0x772d42*/
    for ( i = 0; i < a3; ++i ) /*0x772d4d*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v6 + 12))(v6, &a4, 4, 0); /*0x772d5b*/
      DynamicVector::Add_Alt4(v4 + 61, &a4); /*0x772d69*/
    }
    if ( v5 ) /*0x772d77*/
    {
      DynamicVectorClass::Construct(v5, 0, 0, unsigned int a3, unsigned int a4); /*0x772d7f*/
    }
    (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v6 + 12))(v6, &a3, 4, 0); /*0x772d97*/
    for ( j = 0; j < a3; ++j ) /*0x772da2*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v6 + 12))(v6, &a4, 4, 0); /*0x772db0*/
      DynamicVector::Add_Alt(v5, &a4, unsigned int a3, unsigned int a2); /*0x772dba*/
    }
    if ( v4 != (int *)-216 ) /*0x772dce*/
      TypeList::Construct(v4 + 54); /*0x772dd2*/
    (*(void (__stdcall **)(int, int *, int))(*(unsigned int *)v6 + 12))(v6, &a3, 4); /*0x772de3*/
    for ( k = 0; k < (int)a2; ++k ) /*0x772dee*/
    {
      (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v6 + 12))(v6, &a3, 4, 0); /*0x772dfc*/
      DynamicVector::Add_Alt(v4 + 54, &a3); /*0x772e06*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 43); /*0x772e1e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 40); /*0x772e2f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 71); /*0x772e40*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 69); /*0x772e51*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 68); /*0x772e62*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 70); /*0x772e73*/
    for ( m = 0; m < v4[65]; ++m ) /*0x772e83*/
      ObjectPtr::RegisterForTracking((int, unsigned int a2)&SwizzleManagerClass_Instance, (int *)(v4[62] + 4 * m)); /*0x772e94*/
    return 0; /*0x772ea4*/
  }
  return result; /*0x772ea6*/
}
}
// 0x772EB0
namespace gamemd {
void WeaponTypeClass_SaveLoad_Prefix_0()
{
  int result; // eax
  int v6; // edx
  int i; // ebx
  int v8; // edx
  int j; // ebx
  int v10; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix(a2, a3, a4); /*0x772ec1*/
  if ( result >= 0 ) /*0x772ec8*/
  {
    v6 = *a3; /*0x772ed4*/
    a4 = a2[65]; /*0x772ee1*/
    (*(void (__stdcall **)(int *, int *, int, unsigned int, int))(v6 + 16))(a3, &a4, 4, 0, a1); /*0x772ee5*/
    for ( i = 0; i < a5; ++i ) /*0x772ef0*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a3 + 16))(a3, a2[62] + 4 * i, 4, 0); /*0x772f03*/
    v8 = *a3; /*0x772f13*/
    a5 = a2[51]; /*0x772f1f*/
    (*(void (__stdcall **)(int *, int *, int, unsigned int))(v8 + 16))(a3, &a5, 4, 0); /*0x772f23*/
    for ( j = 0; j < a5; ++j ) /*0x772f2e*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a3 + 16))(a3, a2[48] + 4 * j, 4, 0); /*0x772f41*/
    v10 = *a3; /*0x772f51*/
    a5 = a2[58]; /*0x772f5d*/
    (*(void (__stdcall **)(int *, int *, int))(v10 + 16))(a3, &a5, 4); /*0x772f61*/
    for ( k = 0; k < a4; ++k ) /*0x772f6c*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a3 + 16))(a3, a2[55] + 4 * k, 4, 0); /*0x772f7f*/
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
  *(&this->uniqueId0) = 0; /*0x77311d*/
  *(&this->uniqueId3) = 0; /*0x773123*/
  v3 = (*(int (__thiscall **)(WeaponTypeClass **, void ***))&WeaponTypeClass_Array->gap0[16])( /*0x773139*/
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
  v4 = *(&this->nextArrayIndex2); /*0x77316e*/
  if ( v4 && this->IsHouseColor ) /*0x773182*/
  {
    RA2_OPDEL(v4); /*0x77318b*/
    *(&this->nextArrayIndex2) = 0; /*0x773193*/
  }
  this->IsHouseColor = 0; /*0x773199*/
  *(&this->nextArrayIndex3) = 0; /*0x77319f*/
  v5 = *(&this->abstractFlags5); /*0x7731a5*/
  if ( v5 && this->Spawner ) /*0x7731b9*/
  {
    RA2_OPDEL(v5); /*0x7731c2*/
    *(&this->abstractFlags5) = 0; /*0x7731ca*/
  }
  this->Spawner = 0; /*0x7731d0*/
  *(&this->abstractFlags6) = 0; /*0x7731d6*/
  v6 = *(&this->uniqueId8); /*0x7731dc*/
  if ( v6 && this->u8_C9 ) /*0x7731f0*/
  {
    RA2_OPDEL(v6); /*0x7731f9*/
    *(&this->uniqueId8) = 0; /*0x773201*/
  }
  this->u8_C9 = 0; /*0x773209*/
  *(&this->uniqueId9) = 0; /*0x77320f*/
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
  v4 = g_TriggerClassCount; /*0x475b94*/
  if ( g_TriggerClassCount > 32 ) /*0x475b9c*/
    v4 = 32; /*0x475b9e*/
  v5 = 0; /*0x475ba3*/
  v4 = v4; /*0x475ba5*/
  if ( v4 > 0 ) /*0x475bab*/
  {
    v6 = (char *)g_TriggerTypeCount; /*0x475bb2*/
    do /*0x475c3a*/
    {
      if ( ((1 << v5) & a4) != 0 ) /*0x475bca*/
      {
        if ( Source[0] ) /*0x475bd2*/
          strcat(Source, Delimiter); /*0x475bf9*/
        strcat(Source, (const char *)(v6->q024); /*0x475c27*/
        v4 = v4; /*0x475c29*/
      }
      ++v5; /*0x475c34*/
      v6 += 4; /*0x475c35*/
    }
    while ( v5 < v4 ); /*0x475c3a*/
  }
  return INIClass::SetString(aP1, a2, Source); /*0x475c61*/
}
// 0x475C70
char WeaponTypeClass::ReadVeteranData(unsigned char * a2, char * a3, int a4, int * Block, int a6, short a7, int a8, int a9, int a10)
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
    a8 = a8; /*0x475ca9*/
    do /*0x475d17*/
    {
      if ( Source[0] ) /*0x475cb1*/
        strcat(Source, Delimiter); /*0x475cd8*/
      SampleNameByIndex = VocClass::GetSampleNameByIndex(*v10++); /*0x475ce8*/
      strcat(Source, SampleNameByIndex); /*0x475d0d*/
      --a8; /*0x475d14*/
    }
    while ( a8 ); /*0x475d17*/
  }
  v13 = INIClass::SetString(this, a2, a3, Source); /*0x475d39*/
  if ( Block && IDA_HIBYTE(a7) ) /*0x475d4f*/
    RA2_OPDEL(Block); /*0x475d52*/
  return v13; /*0x475d5c*/
}
// 0x771F00
unsigned int * WeaponTypeClass::loadWeaponProperties(AbstractTypeClass * aP1)
{
  AbstractTypeClass::Init(aP1); /*0x771f08*/
  return this; /*0x771f45*/
}
// 0x7729F0
int WeaponTypeClass::CalculateSpeed()
{
  int result; // eax
  double WeatherConBoltExplosion; // [esp+4h] [ebp-8h]

  result = this->Projectile; /*0x7729f6*/
  if ( result && !*(unsigned int *)(result + 732) ) /*0x772a00*/
  {
    WeatherConBoltExplosion = (double)g_RulesClass_Instance[1].WeatherConBoltExplosion; /*0x772a1e*/
    if ( *(unsigned char *)(result + 661) ) /*0x772a16*/
      WeatherConBoltExplosion = RulesClass::GetFiringDistance(); /*0x772a29*/
    result = TechnoClass::ComputeScanRange((void *)this->Range, WeatherConBoltExplosion); /*0x772a3d*/
    *(unsigned int *)&this->Speed = result; /*0x772a42*/
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