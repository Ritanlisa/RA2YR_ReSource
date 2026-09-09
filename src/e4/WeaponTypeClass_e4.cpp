// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x475B70
char WeaponTypeClass::ReadTrajectoryData(WeaponTypeClass * aP1, char * a2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall WeaponTypeClass::ReadTrajectoryData(char *this, WeaponTypeClass *aP1, char *a2, int a4)
{
  BuildingTypeClass *v4; // eax
  int v5; // edx
  ObjectClass *v6; // ebx
  BuildingTypeClass *v8; // [esp+4h] [ebp-88h]
  _BYTE Source[125]; // [esp+Ch] [ebp-80h] BYREF
  __int16 v10; // [esp+89h] [ebp-3h]
  char v11; // [esp+8Bh] [ebp-1h]

  Source[0] = stru_87C374.__pad_579C[33876]; /*0x475b80*/
  memset(&Source[1], 0, 0x7Cu); /*0x475b8f*/
  v10 = 0; /*0x475b91*/
  v11 = 0; /*0x475b93*/
  v4 = g_TriggerClassCount; /*0x475b94*/
  if ( (int)g_TriggerClassCount > 32 ) /*0x475b9c*/
    v4 = (BuildingTypeClass *)32; /*0x475b9e*/
  v5 = 0; /*0x475ba3*/
  v8 = v4; /*0x475ba5*/
  if ( (int)v4 > 0 ) /*0x475bab*/
  {
    v6 = (ObjectClass *)g_TriggerTypeCount; /*0x475bb2*/
    do /*0x475c3a*/
    {
      if ( ((1 << v5) & a4) != 0 ) /*0x475bca*/
      {
        if ( Source[0] ) /*0x475bd2*/
          strcat(Source, (const char *)&stru_817F40.nextObject); /*0x475bf9*/
        strcat(Source, (const char *)(*(_DWORD *)v6->__pad_0 + 36)); /*0x475c27*/
        v4 = v8; /*0x475c29*/
      }
      ++v5; /*0x475c34*/
      v6 = (ObjectClass *)((char *)v6 + 4); /*0x475c35*/
    }
    while ( v5 < (int)v4 ); /*0x475c3a*/
  }
  return INIClass::SetString(this, (INIClass *)aP1, (INIClass *)a2, (INIClass *)Source); /*0x475c61*/
}
}

// 0x475C70
namespace gamemd {
int WeaponTypeClass_ReadVeteranData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_475C70(
        char *this,
        unsigned __int8 *a2,
        char *a3,
        int a4,
        int *Block,
        int a6,
        __int16 a7,
        int a8,
        int a9,
        int a10)
{
  int *v10; // ebx
  int v11; // ebp
  char *SampleNameByIndex; // edi
  char v13; // bl
  _BYTE Source[125]; // [esp+Ch] [ebp-80h] BYREF
  __int16 v17; // [esp+89h] [ebp-3h]
  char v18; // [esp+8Bh] [ebp-1h]

  Source[0] = MEMORY[0x889F64]; /*0x475c81*/
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
        strcat(Source, MEMORY[0x817F70]); /*0x475cd8*/
      SampleNameByIndex = VocClass::GetSampleNameByIndex(*v10++); /*0x475ce8*/
      strcat(Source, SampleNameByIndex); /*0x475d0d*/
      --v11; /*0x475d14*/
    }
    while ( v11 ); /*0x475d17*/
  }
  v13 = INIClass::SetString(this, a2, a3, Source); /*0x475d39*/
  if ( Block && HIBYTE(a7) ) /*0x475d4f*/
    __3_YAXPAX_Z(Block); /*0x475d52*/
  return v13; /*0x475d5c*/
}
}
} // namespace gamemd

// 0x512680
HouseTypeClass * WeaponTypeClass::Create(AbstractClass * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HouseTypeClass *__thiscall WeaponTypeClass::Create(AbstractClass *Source)
{
  int v2; // esi
  _BYTE *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x51269c*/
    return 0; /*0x5126ff*/
  v2 = 0; /*0x5126ad*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x5126b1*/
  {
LABEL_6:
    v3 = (_BYTE *)__2_YAPAXI_Z(0x1B0u); /*0x5126d6*/
    if ( v3 ) /*0x5126e5*/
      return (HouseTypeClass *)SuperWeaponTypeClass::Construct(v3, Source); /*0x5126f1*/
    return 0; /*0x5126e5*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)g_SuperWeaponTypeCount + v2) + 36), Source) ) /*0x5126ca*/
  {
    if ( ++v2 >= g_SuperWeaponTypeArray ) /*0x5126d4*/
      goto LABEL_6; /*0x5126d4*/
  }
  return (HouseTypeClass *)*((_DWORD *)g_SuperWeaponTypeCount + v2); /*0x5126ef*/
}
}

// 0x6CEEF0
int WeaponTypeClass::Process(ObjectClass * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WeaponTypeClass::Process(ObjectClass *Source)
{
  int v2; // esi
  int v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6cef0c*/
    return 0; /*0x6cef6f*/
  v2 = 0; /*0x6cef1d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[20620] <= 0 ) /*0x6cef21*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0x100u); /*0x6cef46*/
    if ( v3 ) /*0x6cef55*/
      return SuperWeaponTypeClass::SuperWeaponTypeClass(v3, Source); /*0x6cef61*/
    return 0; /*0x6cef55*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * v2) + 36), Source) ) /*0x6cef3a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[20620] ) /*0x6cef44*/
      goto LABEL_6; /*0x6cef44*/
  }
  return *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] + 4 * v2); /*0x6cef5f*/
}
}

// 0x771C70
unsigned int * WeaponTypeClass::Constructor(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall WeaponTypeClass::Constructor(_DWORD *this, ObjectClass *aP1)
{
  WeaponTypeClass *v3; // eax

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x771c7a*/
  *(this + 38) = 0; /*0x771c87*/
  *(this + 39) = 1; /*0x771c8d*/
  *(this + 40) = 0; /*0x771c97*/
  *(this + 41) = 0; /*0x771c9d*/
  *(this + 42) = 0; /*0x771ca3*/
  *(this + 43) = 0; /*0x771ca9*/
  *(this + 44) = 0; /*0x771caf*/
  *(this + 45) = 0; /*0x771cb6*/
  *(this + 46) = 0; /*0x771cbf*/
  VectorClass::Construct(this + 47, 0, 0); /*0x771cc5*/
  *(this + 52) = 10; /*0x771cca*/
  *(this + 51) = 0; /*0x771cd1*/
  *(this + 47) = &TypeList<int>::`vftable'; /*0x771cd4*/
  VectorClass::Construct(this + 54, 0, 0); /*0x771ce4*/
  *(this + 59) = 10; /*0x771ce9*/
  *(this + 58) = 0; /*0x771cf0*/
  *(this + 54) = &TypeList<int>::`vftable'; /*0x771cf3*/
  AnimTypeVector::Constructor(this + 61, 0, 0); /*0x771d03*/
  *(this + 66) = 10; /*0x771d08*/
  *(this + 65) = 0; /*0x771d0f*/
  *(this + 61) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x771d12*/
  *(this + 68) = 0; /*0x771d18*/
  *(this + 69) = 0; /*0x771d1e*/
  *(this + 70) = 0; /*0x771d24*/
  *(this + 71) = 0; /*0x771d2a*/
  *((_BYTE *)this + 288) = 0; /*0x771d30*/
  *((_BYTE *)this + 289) = 0; /*0x771d36*/
  *((_BYTE *)this + 290) = 0; /*0x771d3c*/
  *((_BYTE *)this + 291) = 0; /*0x771d42*/
  *(this + 73) = 0; /*0x771d48*/
  *(this + 74) = 0; /*0x771d60*/
  *(this + 75) = 0; /*0x771d78*/
  *(this + 76) = 0x1000000; /*0x771d90*/
  *((_BYTE *)this + 308) = 0; /*0x771da9*/
  *((_BYTE *)this + 309) = 0; /*0x771daf*/
  *((_BYTE *)this + 310) = 0; /*0x771db5*/
  *((_BYTE *)this + 311) = 1; /*0x771dbb*/
  *((_BYTE *)this + 312) = 0; /*0x771dc2*/
  *((_BYTE *)this + 313) = 0; /*0x771dc8*/
  *((_BYTE *)this + 314) = 0; /*0x771dce*/
  *((_BYTE *)this + 315) = 0; /*0x771dd4*/
  *(this + 79) = 0; /*0x771dda*/
  *((_BYTE *)this + 320) = 0; /*0x771de0*/
  *((_BYTE *)this + 321) = 1; /*0x771de6*/
  *((_BYTE *)this + 322) = 0; /*0x771ded*/
  *((_BYTE *)this + 323) = 1; /*0x771df3*/
  *((_BYTE *)this + 324) = 0; /*0x771dfa*/
  *((_BYTE *)this + 325) = 0; /*0x771e00*/
  *((_BYTE *)this + 326) = 0; /*0x771e06*/
  *((_BYTE *)this + 327) = 0; /*0x771e0f*/
  *((_BYTE *)this + 328) = 0; /*0x771e16*/
  *((_BYTE *)this + 329) = 0; /*0x771e1c*/
  *((_BYTE *)this + 330) = 0; /*0x771e22*/
  *((_BYTE *)this + 331) = 0; /*0x771e28*/
  *((_BYTE *)this + 332) = 0; /*0x771e2e*/
  *((_BYTE *)this + 333) = 0; /*0x771e34*/
  *((_BYTE *)this + 334) = 10; /*0x771e3a*/
  *((_BYTE *)this + 335) = 0; /*0x771e41*/
  *((_BYTE *)this + 336) = 0; /*0x771e47*/
  *((_BYTE *)this + 337) = 0; /*0x771e4d*/
  *((_BYTE *)this + 338) = 0; /*0x771e53*/
  *((_BYTE *)this + 339) = 0; /*0x771e59*/
  *((_BYTE *)this + 340) = 0; /*0x771e5f*/
  *((_BYTE *)this + 341) = 0; /*0x771e65*/
  *(this + 86) = 0; /*0x771e6b*/
  *((_BYTE *)this + 348) = 0; /*0x771e71*/
  *this = &WeaponTypeClass::`vftable'; /*0x771e77*/
  *(this + 1) = &WeaponTypeClass::`vftable'; /*0x771e7d*/
  *(this + 2) = &WeaponTypeClass::`vftable'; /*0x771e83*/
  *(this + 3) = &WeaponTypeClass::`vftable'; /*0x771e8a*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x771e91*/
  if ( *(int *)&stru_87C374.__pad_579C[23144] < *(int *)&stru_87C374.__pad_579C[23136] /*0x771eca*/
    || (stru_87C374.__pad_579C[23141] || !*(_DWORD *)&stru_87C374.__pad_579C[23136])
    && *(int *)&stru_87C374.__pad_579C[23148] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87C374.__pad_579C[23128] + 8))(
         &stru_87C374.__pad_579C[23128],
         *(_DWORD *)&stru_87C374.__pad_579C[23136] + *(_DWORD *)&stru_87C374.__pad_579C[23148],
         0) )
  {
    v3 = (WeaponTypeClass *)(*(_DWORD *)&stru_87C374.__pad_579C[23144])++; /*0x771ed7*/
    *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23132] + 4 * (_DWORD)v3) = this; /*0x771ee6*/
  }
  return this; /*0x771eeb*/
}
}

// 0x771F00
unsigned int * WeaponTypeClass::loadWeaponProperties(AbstractTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall WeaponTypeClass::loadWeaponProperties(_DWORD *this, AbstractTypeClass *aP1)
{
  AbstractTypeClass::Init((int)this, aP1); /*0x771f08*/
  *(this + 47) = &TypeList<int>::`vftable'; /*0x771f12*/
  *(this + 54) = &TypeList<int>::`vftable'; /*0x771f18*/
  *(this + 61) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x771f1e*/
  *this = &WeaponTypeClass::`vftable'; /*0x771f28*/
  *(this + 1) = &WeaponTypeClass::`vftable'; /*0x771f2e*/
  *(this + 2) = &WeaponTypeClass::`vftable'; /*0x771f35*/
  *(this + 3) = &WeaponTypeClass::`vftable'; /*0x771f3c*/
  return this; /*0x771f45*/
}
}

// 0x771F50
int WeaponTypeClass::Destructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_771F50(int this)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &WeaponTypeClass::`vftable'; /*0x771f57*/
  this->vtable1 = &WeaponTypeClass::`vftable'; /*0x771f5d*/
  this->vtable2 = &WeaponTypeClass::`vftable'; /*0x771f64*/
  this->vtable3 = &WeaponTypeClass::`vftable'; /*0x771f6b*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x771f72*/
  this->Damage = 0; /*0x771f7d*/
  this->ROF = 0; /*0x771f83*/
  v7 = this; /*0x771f95*/
  v2 = (*(int (__thiscall **)(WeaponTypeClass **, int *))&MEMORY[0x887568]->__pad_0[16])(&MEMORY[0x887568], &v7); /*0x771f99*/
  if ( v2 != -1 && v2 < MEMORY[0x887578] && v2 < --MEMORY[0x887578] ) /*0x771fb4*/
  {
    do /*0x771fcc*/
    {
      ++v2; /*0x771fbc*/
      *((_DWORD *)MEMORY[0x88756C] + v2 - 1) = *((_DWORD *)MEMORY[0x88756C] + v2); /*0x771fc0*/
    }
    while ( v2 < MEMORY[0x887578] ); /*0x771fcc*/
  }
  v3 = *(void **)(this + 248); /*0x771fce*/
  *(_DWORD *)(this + 244) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x771fd4*/
  if ( v3 && this->IsHouseColor ) /*0x771fe2*/
  {
    __3_YAXPAX_Z(v3); /*0x771feb*/
    *(_DWORD *)(this + 248) = 0; /*0x771ff3*/
  }
  this->IsHouseColor = 0; /*0x771ff9*/
  *(_DWORD *)(this + 252) = 0; /*0x771fff*/
  v4 = *(void **)(this + 220); /*0x772005*/
  *(_DWORD *)(this + 216) = &VectorClass<int>::`vftable'; /*0x77200b*/
  if ( v4 && this->Spawner ) /*0x772019*/
  {
    __3_YAXPAX_Z(v4); /*0x772022*/
    *(_DWORD *)(this + 220) = 0; /*0x77202a*/
  }
  this->Spawner = 0; /*0x772030*/
  *(_DWORD *)(this + 224) = 0; /*0x772036*/
  v5 = *(void **)(this + 192); /*0x77203c*/
  this->DownReport = &VectorClass<int>::`vftable'; /*0x772042*/
  if ( v5 && *(_BYTE *)(this + 201) ) /*0x772050*/
  {
    __3_YAXPAX_Z(v5); /*0x772059*/
    this->Anim = 0; /*0x772061*/
  }
  *(_BYTE *)(this + 201) = 0; /*0x772069*/
  this->OccupantAnim = 0; /*0x77206f*/
  return AbstractTypeClass::Dtor((_DWORD *)this); /*0x77207a*/
}
}

// 0x7729F0
int WeaponTypeClass::CalculateSpeed()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WeaponTypeClass::CalculateSpeed(_DWORD *this)
{
  int result; // eax
  double WeatherConBoltExplosion; // [esp+4h] [ebp-8h]

  result = *(this + 40); /*0x7729f6*/
  if ( result && !*(_DWORD *)(result + 732) ) /*0x772a00*/
  {
    WeatherConBoltExplosion = (double)MEMORY[0x8871E0][1].?; /*0x772a1e*/
    if ( *(_BYTE *)(result + 661) ) /*0x772a16*/
      WeatherConBoltExplosion = RulesClass::GetFiringDistance(); /*0x772a29*/
    result = TechnoClass::ComputeScanRange((void *)*(this + 45), WeatherConBoltExplosion); /*0x772a3d*/
    *(this + 42) = result; /*0x772a42*/
  }
  return result; /*0x772a48*/
}
}

// 0x772AE0
int WeaponTypeClass::ProcessPower(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WeaponTypeClass::ProcessPower(int this, int *a2)
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
  Power::TimerProcess(this->Burst); /*0x772af7*/
  LOBYTE(v3) = *(_BYTE *)(this + 304); /*0x772afc*/
  Power::FlagProcess(a2, v3); /*0x772b05*/
  LOBYTE(v4) = *(_BYTE *)(this + 325); /*0x772b0a*/
  v5 = Power::FlagProcess(a2, v4); /*0x772b13*/
  LOBYTE(v5) = *(_BYTE *)(this + 326); /*0x772b18*/
  Power::FlagProcess(a2, v5); /*0x772b21*/
  LOBYTE(v6) = *(_BYTE *)(this + 327); /*0x772b26*/
  Power::FlagProcess(a2, v6); /*0x772b2f*/
  LOBYTE(v7) = *(_BYTE *)(this + 329); /*0x772b34*/
  v8 = Power::FlagProcess(a2, v7); /*0x772b3d*/
  LOBYTE(v8) = *(_BYTE *)(this + 333); /*0x772b42*/
  Power::FlagProcess(a2, v8); /*0x772b4b*/
  Power::TimerProcess(this->Projectile); /*0x772b59*/
  v9 = this->Damage; /*0x772b5e*/
  if ( v9 ) /*0x772b66*/
  {
    v10 = (*(int (__stdcall **)(int))(*(_DWORD *)(v9 + 4) + 16))(v9 + 4); /*0x772b6f*/
    Power::TimerProcess(v10); /*0x772b75*/
  }
  Power::TimerProcess(this->Speed); /*0x772b83*/
  Power::TimerProcess(this->Warhead); /*0x772b91*/
  v11 = this->ROF; /*0x772b96*/
  if ( v11 ) /*0x772b9e*/
  {
    v12 = (*(int (__stdcall **)(int))(*(_DWORD *)(v11 + 4) + 16))(v11 + 4); /*0x772ba7*/
    Power::TimerProcess(v12); /*0x772bad*/
  }
  Power::TimerProcess(this->Range); /*0x772bbb*/
  Power::TimerProcess(this->MinimumRange); /*0x772bc9*/
  Power::TimerProcess(this->OpenToppedAnim); /*0x772bd7*/
  Power::TimerProcess(*(_DWORD *)(this + 232)); /*0x772be5*/
  Power::TimerProcess(*(_DWORD *)(this + 260)); /*0x772bf3*/
  LOBYTE(v13) = *(_BYTE *)(this + 297); /*0x772bf8*/
  v14 = Power::FlagProcess(a2, v13); /*0x772c01*/
  LOBYTE(v14) = *(_BYTE *)(this + 302); /*0x772c06*/
  Power::FlagProcess(a2, v14); /*0x772c0f*/
  LOBYTE(v15) = *(_BYTE *)(this + 334); /*0x772c14*/
  Power::FinalizeDrain(a2, v15); /*0x772c1d*/
  LOBYTE(v16) = *(_BYTE *)(this + 332); /*0x772c22*/
  v17 = Power::FlagProcess(a2, v16); /*0x772c2b*/
  LOBYTE(v17) = *(_BYTE *)(this + 301); /*0x772c30*/
  Power::FlagProcess(a2, v17); /*0x772c39*/
  LOBYTE(v18) = *(_BYTE *)(this + 328); /*0x772c3e*/
  Power::FlagProcess(a2, v18); /*0x772c47*/
  LOBYTE(v19) = *(_BYTE *)(this + 303); /*0x772c4c*/
  v20 = Power::FlagProcess(a2, v19); /*0x772c55*/
  LOBYTE(v20) = *(_BYTE *)(this + 298); /*0x772c5a*/
  Power::FlagProcess(a2, v20); /*0x772c63*/
  LOBYTE(v21) = *(_BYTE *)(this + 299); /*0x772c68*/
  Power::FlagProcess(a2, v21); /*0x772c71*/
  LOBYTE(v22) = *(_BYTE *)(this + 300); /*0x772c76*/
  return Power::FlagProcess(a2, v22); /*0x772c84*/
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

// 0x772CD0
namespace gamemd {
int WeaponTypeClass_SaveLoad_Prefix()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge WeaponTypeClass::SaveLoad_Prefix@<eax>(int a1@<ebx>, int *a2, int a3, int a4)
{
  int *v4; // edi
  _DWORD *v5; // ebp
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
      v4[61] = (int)&TypeList<AnimTypeClass const *>::`vftable'; /*0x772d30*/
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
      *v5 = &TypeList<int>::`vftable'; /*0x772d84*/
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
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 43); /*0x772e1e*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 40); /*0x772e2f*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 71); /*0x772e40*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 69); /*0x772e51*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 68); /*0x772e62*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 70); /*0x772e73*/
    for ( m = 0; m < v4[65]; ++m ) /*0x772e83*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v4[62] + 4 * m)); /*0x772e94*/
    return 0; /*0x772ea4*/
  }
  return result; /*0x772ea6*/
}
}
} // namespace gamemd

// 0x772EB0
namespace gamemd {
int WeaponTypeClass_SaveLoad_Prefix_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge WeaponTypeClass::SaveLoad_Prefix_0@<eax>(int a1@<ebx>, int *a2, int *a3, int a4, int a5)
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
    (*(void (__stdcall **)(int *, int *, int, _DWORD, int))(v6 + 16))(a3, &a4, 4, 0, a1); /*0x772ee5*/
    for ( i = 0; i < a5; ++i ) /*0x772ef0*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[62] + 4 * i, 4, 0); /*0x772f03*/
    v8 = *a3; /*0x772f13*/
    a5 = a2[51]; /*0x772f1f*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v8 + 16))(a3, &a5, 4, 0); /*0x772f23*/
    for ( j = 0; j < a5; ++j ) /*0x772f2e*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[48] + 4 * j, 4, 0); /*0x772f41*/
    v10 = *a3; /*0x772f51*/
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

// 0x7730E0
int WeaponTypeClass::GetTypeIdentifier()
{
return 49;
}

// 0x7730F0
WeaponTypeClass * WeaponTypeClass::ddtor(void ** Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
WeaponTypeClass *__thiscall WeaponTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  DynamicVector *v6; // eax
  WeaponTypeClass *v8; // [esp+8h] [ebp-4h] BYREF

  *Block = &WeaponTypeClass::`vftable'; /*0x7730f7*/
  *(Block + 1) = &WeaponTypeClass::`vftable'; /*0x7730fd*/
  *(Block + 2) = &WeaponTypeClass::`vftable'; /*0x773104*/
  *(Block + 3) = &WeaponTypeClass::`vftable'; /*0x77310b*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x773112*/
  *(Block + 40) = 0; /*0x77311d*/
  *(Block + 43) = 0; /*0x773123*/
  v8 = (WeaponTypeClass *)Block; /*0x773135*/
  v3 = ((int (__thiscall *)(WeaponTypeClass **, WeaponTypeClass **))MEMORY[0x887568]->uniqueId)(&MEMORY[0x887568], &v8); /*0x773139*/
  if ( v3 != -1 && v3 < MEMORY[0x887578] && v3 < --MEMORY[0x887578] ) /*0x773154*/
  {
    do /*0x77316c*/
    {
      ++v3; /*0x77315c*/
      *((_DWORD *)MEMORY[0x88756C] + v3 - 1) = *((_DWORD *)MEMORY[0x88756C] + v3); /*0x773160*/
    }
    while ( v3 < MEMORY[0x887578] ); /*0x77316c*/
  }
  v4 = *(Block + 62); /*0x77316e*/
  *(Block + 61) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x773174*/
  if ( v4 && *((_BYTE *)Block + 257) ) /*0x773182*/
  {
    __3_YAXPAX_Z(v4); /*0x77318b*/
    *(Block + 62) = 0; /*0x773193*/
  }
  *((_BYTE *)Block + 257) = 0; /*0x773199*/
  *(Block + 63) = 0; /*0x77319f*/
  v5 = *(Block + 55); /*0x7731a5*/
  *(Block + 54) = &VectorClass<int>::`vftable'; /*0x7731ab*/
  if ( v5 && *((_BYTE *)Block + 229) ) /*0x7731b9*/
  {
    __3_YAXPAX_Z(v5); /*0x7731c2*/
    *(Block + 55) = 0; /*0x7731ca*/
  }
  *((_BYTE *)Block + 229) = 0; /*0x7731d0*/
  *(Block + 56) = 0; /*0x7731d6*/
  v6 = (DynamicVector *)*(Block + 48); /*0x7731dc*/
  *(Block + 47) = &VectorClass<int>::`vftable'; /*0x7731e2*/
  if ( v6 && *((_BYTE *)Block + 201) ) /*0x7731f0*/
  {
    __3_YAXPAX_Z(v6); /*0x7731f9*/
    *(Block + 48) = 0; /*0x773201*/
  }
  *((_BYTE *)Block + 201) = 0; /*0x773209*/
  *(Block + 49) = 0; /*0x77320f*/
  AbstractTypeClass::Dtor(Block); /*0x773215*/
  if ( (a2 & 1) != 0 ) /*0x77321f*/
    __3_YAXPAX_Z(Block); /*0x773222*/
  return (WeaponTypeClass *)Block; /*0x77322c*/
}
}

// 0x7730D0
int WeaponTypeClass::GetObjectSize()
{
return 352;
}
