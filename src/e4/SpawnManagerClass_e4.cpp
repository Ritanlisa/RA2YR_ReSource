// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SpawnManagerClass_25_e4.hpp"

// 0x6B6C90
namespace ra2 {
namespace game {
int SpawnManagerClass::SpawnManagerClass(TechnoClass * aP1, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SpawnManagerClass::SpawnManagerClass(int this, TechnoClass *aP1, int a3, int a4, int a5, int a6)
{
  IUnknown *v7; // eax
  int *v8; // ebp
  IUnknown *v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  HouseClass *v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v20; // [esp+14h] [ebp-8h]
  TechnoClass *aP1a; // [esp+20h] [ebp+4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6b6c99*/
  SpawnControlVector::Constructor((_DWORD *)(this + 56), 0, 0); /*0x6b6ca7*/
  this->spawns = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6cb0*/
  *(_DWORD *)(this + 76) = 10; /*0x6b6cb6*/
  *(_DWORD *)(this + 72) = 0; /*0x6b6cbd*/
  v7 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b6cc0*/
  this->SpawnManagerClass_field_58 = 0; /*0x6b6cc5*/
  *(_DWORD *)(this + 80) = v7; /*0x6b6cc8*/
  this->SpawnManagerClass_field_5C = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b6cd5*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6cdc*/
  this->spawnOwner = a3; /*0x6b6cdf*/
  this->owner = aP1; /*0x6b6ce6*/
  *(_DWORD *)this = &SpawnManagerClass::`vftable'; /*0x6b6cef*/
  *(_DWORD *)(this + 4) = &SpawnManagerClass::`vftable'; /*0x6b6cf5*/
  *(_DWORD *)(this + 8) = &SpawnManagerClass::`vftable'; /*0x6b6cfc*/
  *(_DWORD *)(this + 12) = &SpawnManagerClass::`vftable'; /*0x6b6d03*/
  this->spawnType = a4; /*0x6b6d0a*/
  this->spawnCount = a5; /*0x6b6d0d*/
  this->SpawnManagerClass_field_34 = a6; /*0x6b6d10*/
  for ( aP1a = 0; (int)aP1a < this->spawnType; aP1a = (TechnoClass *)((char *)aP1a + 1) ) /*0x6b6d17*/
  {
    v8 = (int *)__2_YAPAXI_Z(0x18u); /*0x6b6d24*/
    if ( !v8 ) /*0x6b6d2b*/
      break; /*0x6b6d2b*/
    v9 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b6d31*/
    v8[4] = 0; /*0x6b6d36*/
    v8[2] = (int)v9; /*0x6b6d39*/
    v10 = **(_DWORD **)(this + 40); /*0x6b6d44*/
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 60))(this->owner); /*0x6b6d46*/
    v12 = (*(int (__thiscall **)(_DWORD, int))(v10 + 140))(this->spawnOwner, v11); /*0x6b6d4d*/
    *v8 = v12; /*0x6b6d55*/
    if ( v12 ) /*0x6b6d5a*/
    {
      v13 = *(HouseClass **)(this + 40); /*0x6b6d66*/
      v8[5] = v13 == *(HouseClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1248) /*0x6b6d86*/
           || v13 == *(HouseClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1300)
           || v13 == *(HouseClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1352);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 212))(v12); /*0x6b6d91*/
      *(_DWORD *)(*v8 + 724) = this->owner; /*0x6b6da1*/
      v8[1] = 0; /*0x6b6da7*/
      v8[2] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b6db1*/
      v8[3] = v20; /*0x6b6db4*/
      v8[4] = 0; /*0x6b6db7*/
      v14 = this->spawnVectorCapacity; /*0x6b6dba*/
      if ( *(_DWORD *)(this + 72) < v14 /*0x6b6dda*/
        || (*(_BYTE *)(this + 69) || !v14)
        && (v15 = *(_DWORD *)(this + 76), v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->spawns + 8))(this + 56, v14 + v15, 0) )
      {
        v16 = *(_DWORD *)(this + 72); /*0x6b6de1*/
        v17 = this->spawnVectorCount; /*0x6b6de4*/
        *(_DWORD *)(this + 72) = v16 + 1; /*0x6b6dea*/
        *(_DWORD *)(v17 + 4 * v16) = v8; /*0x6b6ded*/
      }
    }
  }
  *(_DWORD *)(this + 80) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b6e0d*/
  this->SpawnManagerClass_field_54 = v20; /*0x6b6e19*/
  this->SpawnManagerClass_field_58 = 20; /*0x6b6e1c*/
  this->SpawnManagerClass_field_68 = 0; /*0x6b6e1f*/
  this->SpawnManagerClass_field_6C = 0; /*0x6b6e22*/
  this->SpawnManagerClass_field_70 = 0; /*0x6b6e25*/
  this->SpawnManagerClass_field_5C = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b6e2f*/
  this->SpawnManagerClass_field_60 = v20; /*0x6b6e32*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6e35*/
  if ( *(int *)&MEMORY[0xB077F8].__pad_14B0[11240] < *(int *)&MEMORY[0xB077F8].__pad_14B0[11232] /*0x6b6e69*/
    || (MEMORY[0xB077F8].__pad_14B0[11237] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[11232])
    && *(int *)&MEMORY[0xB077F8].__pad_14B0[11244] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[11224] + 8))(
         &MEMORY[0xB077F8].__pad_14B0[11224],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[11232] + *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[11244],
         0) )
  {
    v18 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[11240])++; /*0x6b6e76*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[11228] + 4 * v18) = this; /*0x6b6e85*/
  }
  return this; /*0x6b6e8a*/
}
}
} // namespace game
} // namespace ra2

// 0x6B6EA0
namespace ra2 {
namespace game {
int SpawnManagerClass::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6B6EA0(int this)
{
  int v2; // eax
  int v4; // [esp+10h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6b6ea8*/
  SpawnControlVector::Constructor((_DWORD *)(this + 56), 0, 0); /*0x6b6eb6*/
  this->spawns = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6ebb*/
  *(_DWORD *)(this + 76) = 10; /*0x6b6ec1*/
  *(_DWORD *)(this + 72) = 0; /*0x6b6ec8*/
  *(_DWORD *)(this + 80) = MEMORY[0xA8ED84]; /*0x6b6ed4*/
  this->SpawnManagerClass_field_58 = 0; /*0x6b6ed7*/
  this->SpawnManagerClass_field_5C = MEMORY[0xA8ED84]; /*0x6b6ee0*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6ee3*/
  *(_DWORD *)this = &SpawnManagerClass::`vftable'; /*0x6b6ee6*/
  *(_DWORD *)(this + 4) = &SpawnManagerClass::`vftable'; /*0x6b6eec*/
  *(_DWORD *)(this + 8) = &SpawnManagerClass::`vftable'; /*0x6b6ef3*/
  *(_DWORD *)(this + 12) = &SpawnManagerClass::`vftable'; /*0x6b6efa*/
  this->owner = 0; /*0x6b6f01*/
  this->spawnOwner = 0; /*0x6b6f04*/
  this->spawnType = 0; /*0x6b6f07*/
  *(_DWORD *)(this + 80) = MEMORY[0xA8ED84]; /*0x6b6f11*/
  this->SpawnManagerClass_field_54 = v4; /*0x6b6f14*/
  this->SpawnManagerClass_field_58 = 0; /*0x6b6f17*/
  this->SpawnManagerClass_field_68 = 0; /*0x6b6f1a*/
  this->SpawnManagerClass_field_6C = 0; /*0x6b6f1d*/
  this->SpawnManagerClass_field_70 = 0; /*0x6b6f20*/
  this->SpawnManagerClass_field_5C = MEMORY[0xA8ED84]; /*0x6b6f28*/
  this->SpawnManagerClass_field_60 = v4; /*0x6b6f2f*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6f32*/
  if ( MEMORY[0xB0B890] < MEMORY[0xB0B888] /*0x6b6f69*/
    || (MEMORY[0xB0B88D] || !MEMORY[0xB0B888])
    && MEMORY[0xB0B894] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0B880] + 8))(
         &MEMORY[0xB0B880],
         MEMORY[0xB0B888] + MEMORY[0xB0B894],
         0) )
  {
    v2 = MEMORY[0xB0B890]++; /*0x6b6f76*/
    *((_DWORD *)MEMORY[0xB0B884] + v2) = this; /*0x6b6f85*/
  }
  return this; /*0x6b6f8a*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7010
namespace ra2 {
namespace game {
void SpawnManagerClass::Constructor_SpawnManagerClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_6B7010(int this)
{
  int i; // esi
  int v3; // ebp
  int v4; // eax
  void *v5; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &SpawnManagerClass::`vftable'; /*0x6b7015*/
  *(_DWORD *)(this + 4) = &SpawnManagerClass::`vftable'; /*0x6b701b*/
  *(_DWORD *)(this + 8) = &SpawnManagerClass::`vftable'; /*0x6b7022*/
  *(_DWORD *)(this + 12) = &SpawnManagerClass::`vftable'; /*0x6b7029*/
  if ( MEMORY[0xA8E9A0] ) /*0x6b7037*/
    TaskManager::Update((_DWORD *)this); /*0x6b7039*/
  for ( i = *(_DWORD *)(this + 72) - 1; i >= 0; --i ) /*0x6b7042*/
  {
    if ( *(_DWORD *)(this->spawnVectorCount + 4 * i) ) /*0x6b7047*/
      __3_YAXPAX_Z(*(void **)(this->spawnVectorCount + 4 * i)); /*0x6b704f*/
  }
  v3 = this->spawnVectorCapacity; /*0x6b7063*/
  (*(void (__thiscall **)(int))(this->spawns + 12))(this + 56); /*0x6b7066*/
  (*(void (__thiscall **)(int, int, _DWORD))(this->spawns + 8))(this + 56, v3, 0); /*0x6b7070*/
  v6 = this; /*0x6b7083*/
  v4 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0B880] + 16))(&MEMORY[0xB0B880], &v6); /*0x6b7087*/
  if ( v4 != -1 && v4 < MEMORY[0xB0B890] && v4 < --MEMORY[0xB0B890] ) /*0x6b70a3*/
  {
    do /*0x6b70bb*/
    {
      ++v4; /*0x6b70ab*/
      *((_DWORD *)MEMORY[0xB0B884] + v4 - 1) = *((_DWORD *)MEMORY[0xB0B884] + v4); /*0x6b70af*/
    }
    while ( v4 < MEMORY[0xB0B890] ); /*0x6b70bb*/
  }
  v5 = *(void **)(this + 60); /*0x6b70bd*/
  this->spawns = &VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b70c0*/
  if ( v5 && *(_BYTE *)(this + 69) ) /*0x6b70ca*/
  {
    __3_YAXPAX_Z(v5); /*0x6b70d2*/
    this->spawnVectorCount = 0; /*0x6b70da*/
  }
  *(_BYTE *)(this + 69) = 0; /*0x6b70e3*/
  this->spawnVectorCapacity = 0; /*0x6b70e7*/
  AbstractClass::DTOR((_DWORD *)this); /*0x6b70ee*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7B90
namespace ra2 {
namespace game {
int SpawnManagerClass::SetTarget(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SpawnManagerClass::SetTarget(_DWORD *this, int a2)
{
  int result; // eax

  result = a2; /*0x6b7b90*/
  if ( a2 != *(this + 26) ) /*0x6b7b99*/
    *(this + 27) = a2; /*0x6b7b9b*/
  return result; /*0x6b7b9e*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7D30
namespace ra2 {
namespace game {
int SpawnManagerClass::CountAliveSpawns()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SpawnManagerClass::CountAliveSpawns(int *this)
{
  int v1; // edx
  int result; // eax
  int v3; // ecx

  v1 = *(this + 18); /*0x6b7d30*/
  result = 0; /*0x6b7d33*/
  if ( v1 > 0 ) /*0x6b7d37*/
  {
    v3 = *(this + 15); /*0x6b7d39*/
    do /*0x6b7d4a*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v3 + 4) != 7 ) /*0x6b7d43*/
        ++result; /*0x6b7d45*/
      v3 += 4; /*0x6b7d46*/
      --v1; /*0x6b7d49*/
    }
    while ( v1 ); /*0x6b7d4a*/
  }
  return result; /*0x6b7d4d*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7D50
namespace ra2 {
namespace game {
int SpawnManagerClass::CountDockedSpawns()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SpawnManagerClass::CountDockedSpawns(int *this)
{
  int v1; // esi
  int result; // eax
  int v3; // edx
  int v4; // ecx

  v1 = *(this + 18); /*0x6b7d51*/
  result = 0; /*0x6b7d54*/
  if ( v1 > 0 ) /*0x6b7d58*/
  {
    v3 = *(this + 15); /*0x6b7d5a*/
    do /*0x6b7d70*/
    {
      v4 = *(_DWORD *)(*(_DWORD *)v3 + 4); /*0x6b7d5f*/
      if ( v4 == 6 || !v4 ) /*0x6b7d69*/
        ++result; /*0x6b7d6b*/
      v3 += 4; /*0x6b7d6c*/
      --v1; /*0x6b7d6f*/
    }
    while ( v1 ); /*0x6b7d70*/
  }
  return result; /*0x6b7d72*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7DE0
namespace ra2 {
namespace game {
int SpawnManagerClass::PowerDrainUpdate(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SpawnManagerClass::_vt13(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int result; // eax
  int v12; // eax
  int v13; // esi
  int v14; // eax

  AbstractClass::ProcessPower((#378 *)this); /*0x6b7de9*/
  Power::TimerProcess(this->SpawnManagerClass_field_70); /*0x6b7df4*/
  v3 = this->SpawnManagerClass_field_6C; /*0x6b7df9*/
  if ( v3 ) /*0x6b7dfe*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x6b7e07*/
    Power::TimerProcess(v4); /*0x6b7e0d*/
  }
  v5 = this->SpawnManagerClass_field_68; /*0x6b7e12*/
  if ( v5 ) /*0x6b7e17*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x6b7e20*/
    Power::TimerProcess(v6); /*0x6b7e26*/
  }
  v7 = this->SpawnManagerClass_field_5C; /*0x6b7e2b*/
  v8 = this->SpawnManagerClass_field_64; /*0x6b7e2e*/
  if ( v7 != -1 ) /*0x6b7e34*/
  {
    if ( (int)MEMORY[0xA8ED84] - v7 >= v8 ) /*0x6b7e40*/
      v8 = 0; /*0x6b7e46*/
    else
      v8 -= (int)MEMORY[0xA8ED84] - v7; /*0x6b7e42*/
  }
  Power::TimerProcess(v8); /*0x6b7e4b*/
  v9 = *(_DWORD *)(this + 80); /*0x6b7e50*/
  v10 = this->SpawnManagerClass_field_58; /*0x6b7e53*/
  if ( v9 != -1 ) /*0x6b7e59*/
  {
    if ( (int)MEMORY[0xA8ED84] - v9 >= v10 ) /*0x6b7e65*/
      v10 = 0; /*0x6b7e6b*/
    else
      v10 -= (int)MEMORY[0xA8ED84] - v9; /*0x6b7e67*/
  }
  Power::TimerProcess(v10); /*0x6b7e70*/
  Power::TimerProcess(*(_DWORD *)(this + 72)); /*0x6b7e7b*/
  Power::TimerProcess(this->spawnType); /*0x6b7e86*/
  result = this->spawnOwner; /*0x6b7e8b*/
  if ( result ) /*0x6b7e90*/
  {
    v12 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x6b7e99*/
    result = Power::TimerProcess(v12); /*0x6b7e9f*/
  }
  v13 = this->owner; /*0x6b7ea4*/
  if ( v13 ) /*0x6b7ea9*/
  {
    v14 = (*(int (__stdcall **)(int))(*(_DWORD *)(v13 + 4) + 16))(v13 + 4); /*0x6b7eb2*/
    return Power::TimerProcess(v14); /*0x6b7eb8*/
  }
  return result; /*0x6b7ebd*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7ED0
namespace ra2 {
namespace game {
int SpawnManagerClass::ddtor(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall SpawnManagerClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6b7ed6*/
    return -2147467261; /*0x6b7ed8*/
  *a2 = 108652929; /*0x6b7ee6*/
  a2[1] = 299085213; /*0x6b7eee*/
  a2[2] = 268441278; /*0x6b7ef7*/
  a2[3] = 1822515787; /*0x6b7f00*/
  return 0; /*0x6b7edd*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7F10
namespace ra2 {
namespace game {
int SpawnManagerClass::LoadFromStream(int aP1, AbstractClass * aP1_4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall SpawnManagerClass::LoadFromStream(int aP1, AbstractClass *aP1_4)
{
  AbstractClass *v2; // ebx
  AbstractClass *v3; // esi
  int Prefix_0; // ebp
  DynamicVector *v5; // edi
  VectorClass *v6; // esi
  int v7; // eax
  DynamicVector *v8; // eax
  IUnknown *v9; // ecx
  int referenceCount; // ecx
  int v11; // eax
  int v12; // eax
  int nextArrayIndex; // edx
  int v14; // esi
  int v16; // [esp+28h] [ebp-4h] BYREF

  v2 = (AbstractClass *)aP1; /*0x6b7f12*/
  v3 = aP1_4; /*0x6b7f18*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP1, aP1_4); /*0x6b7f24*/
  v5 = 0; /*0x6b7f26*/
  if ( Prefix_0 >= 0 ) /*0x6b7f2a*/
  {
    if ( v2 ) /*0x6b7f32*/
    {
      AbstractClass::InitVtables(v2, (IUnknown *)&aP1); /*0x6b7f3b*/
      SpawnManagerClass::Constructor_6B83A0(&v2[1].abstractFlags, 0, 0); /*0x6b7f45*/
      *(_DWORD *)&v2[2].__pad_0[8] = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6b7f51*/
      v2[2].uniqueId = 0; /*0x6b7f57*/
      Timer::Start(&v2[2].abstractFlags, 0); /*0x6b7f5a*/
      *(_DWORD *)v2->__pad_0 = &SpawnManagerClass::`vftable'; /*0x6b7f5f*/
      *(_DWORD *)&v2->__pad_0[4] = &SpawnManagerClass::`vftable'; /*0x6b7f65*/
      *(_DWORD *)&v2->__pad_0[8] = &SpawnManagerClass::`vftable'; /*0x6b7f6c*/
      *(_DWORD *)&v2->__pad_0[12] = &SpawnManagerClass::`vftable'; /*0x6b7f73*/
    }
    Prefix_0 = (*(int (__stdcall **)(AbstractClass *, int *, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))(v3, &v16, 4, 0); /*0x6b7f88*/
    if ( Prefix_0 >= 0 ) /*0x6b7f8c*/
    {
      v6 = (VectorClass *)&v2[1].abstractFlags; /*0x6b7f92*/
      if ( v2 != (AbstractClass *)-56 ) /*0x6b7f97*/
      {
        SpawnControlVector::Constructor(&v2[1].abstractFlags, 0, 0); /*0x6b7f9d*/
        *(_DWORD *)v6->__pad_0 = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b7fa2*/
        *(_DWORD *)&v2[2].__pad_0[4] = 10; /*0x6b7fa8*/
        *(_DWORD *)v2[2].__pad_0 = 0; /*0x6b7faf*/
      }
      v7 = v16; /*0x6b7fb2*/
      aP1 = 0; /*0x6b7fb6*/
      if ( v16 <= 0 ) /*0x6b7fbc*/
      {
LABEL_20:
        v14 = 0; /*0x6b804d*/
        if ( v7 > 0 ) /*0x6b8051*/
        {
          do /*0x6b8069*/
            ObjectPtr::RegisterForTracking( /*0x6b805f*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              *(MouseClass **)(v2[1].nextArrayIndex + 4 * v14++));
          while ( v14 < v16 ); /*0x6b8069*/
        }
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&v2[1]); /*0x6b8074*/
        ObjectPtr::RegisterForTracking( /*0x6b8082*/
          (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
          (MouseClass *)&v2[1].__pad_0[4]);
        ObjectPtr::RegisterForTracking( /*0x6b8090*/
          (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
          (MouseClass *)&v2[2].NeedsSaveOrLink);
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&v2[3]); /*0x6b809e*/
      }
      else
      {
        while ( 1 ) /*0x6b7fc8*/
        {
          v8 = (DynamicVector *)__2_YAPAXI_Z(0x18u); /*0x6b7fc8*/
          if ( v8 ) /*0x6b7fd2*/
          {
            v9 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x6b7fd4*/
            v8->field_10 = 0; /*0x6b7fda*/
            v8->field_8 = (int)v9; /*0x6b7fdd*/
            v5 = v8; /*0x6b7fe0*/
          }
          Prefix_0 = (*(int (__stdcall **)(AbstractClass *, DynamicVector *, int, _DWORD))(*(_DWORD *)aP1_4->__pad_0 + 12))( /*0x6b7ff1*/
                       aP1_4,
                       v5,
                       24,
                       0);
          if ( Prefix_0 < 0 ) /*0x6b7ff5*/
            break; /*0x6b7ff5*/
          referenceCount = v2[1].referenceCount; /*0x6b7ffb*/
          if ( *(_DWORD *)v2[2].__pad_0 < referenceCount /*0x6b8020*/
            || (BYTE1(v2[1].NeedsSaveOrLink) || !referenceCount)
            && (v11 = *(_DWORD *)&v2[2].__pad_0[4], v11 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(_DWORD *)v6->__pad_0 + 8))(
                 &v2[1].abstractFlags,
                 referenceCount + v11,
                 0) )
          {
            v12 = *(_DWORD *)v2[2].__pad_0; /*0x6b8027*/
            nextArrayIndex = v2[1].nextArrayIndex; /*0x6b802a*/
            *(_DWORD *)v2[2].__pad_0 = v12 + 1; /*0x6b8030*/
            *(_DWORD *)(nextArrayIndex + 4 * v12) = v5; /*0x6b8033*/
          }
          v7 = v16; /*0x6b803a*/
          if ( ++aP1 >= v16 ) /*0x6b8045*/
            goto LABEL_20; /*0x6b8045*/
          v5 = 0; /*0x6b7fc4*/
        }
      }
    }
  }
  return Prefix_0; /*0x6b80a3*/
}
}
} // namespace game
} // namespace ra2

// 0x6B80B0
namespace ra2 {
namespace game {
int SpawnManagerClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall SpawnManagerClass::SaveState(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6b80c2*/
  if ( result >= 0 ) /*0x6b80c9*/
  {
    v4 = *a1; /*0x6b80ce*/
    aP2 = *(_DWORD *)&aP0->UINameLabel[11]; /*0x6b80da*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x6b80de*/
    if ( result >= 0 ) /*0x6b80e3*/
    {
      for ( i = 0; i < aP2; ++i ) /*0x6b80ed*/
      {
        result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a1 + 16))( /*0x6b80fd*/
                   a1,
                   *(_DWORD *)(*(_DWORD *)&aP0->zero_3C + 4 * i),
                   24,
                   0);
        if ( result < 0 ) /*0x6b8102*/
          break; /*0x6b8102*/
      }
    }
  }
  return result; /*0x6b810d*/
}
}
} // namespace game
} // namespace ra2

// 0x6B8120
namespace ra2 {
namespace game {
int SpawnManagerClass::StubReturn116()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int SpawnManagerClass::_vt12()
{
  return 116; /*0x6b8125*/
}
}
} // namespace game
} // namespace ra2

// 0x6B8130
namespace ra2 {
namespace game {
int SpawnManagerClass::StubReturn65()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int SpawnManagerClass::_vt11()
{
  return 65; /*0x6b8135*/
}
}
} // namespace game
} // namespace ra2

// 0x6B8140
namespace ra2 {
namespace game {
SpawnManagerClass * SpawnManagerClass::ProcessEvent(void * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
SpawnManagerClass *__thiscall SpawnManagerClass::ProcessEvent(void *Block, char a2)
{
  SpawnManagerClass::Constructor_SpawnManagerClass((int)Block); /*0x6b8143*/
  if ( (a2 & 1) != 0 ) /*0x6b814d*/
    __3_YAXPAX_Z(Block); /*0x6b8150*/
  return (SpawnManagerClass *)Block; /*0x6b815a*/
}
}
} // namespace game
} // namespace ra2

// 0x6B83A0
namespace ra2 {
namespace game {
unsigned int * SpawnManagerClass::Constructor_6B83A0(DynamicVector * aP1, DynamicVector * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall SpawnManagerClass::Constructor_6B83A0(_DWORD *this, DynamicVector *aP1, DynamicVector *aP2)
{
  *(this + 1) = 0; /*0x6b83a9*/
  *(this + 2) = aP1; /*0x6b83b0*/
  *((_BYTE *)this + 12) = 1; /*0x6b83b3*/
  *((_BYTE *)this + 13) = 0; /*0x6b83b7*/
  *this = &VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b83bb*/
  if ( aP1 ) /*0x6b83c1*/
  {
    if ( aP2 ) /*0x6b83c9*/
    {
      *(this + 1) = aP2; /*0x6b83cb*/
    }
    else
    {
      *(this + 1) = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x6b83dc*/
      *((_BYTE *)this + 13) = 1; /*0x6b83df*/
    }
  }
  *this = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b83e3*/
  *(this + 5) = 10; /*0x6b83e9*/
  *(this + 4) = 0; /*0x6b83f0*/
  return this; /*0x6b83f9*/
}
}
} // namespace game
} // namespace ra2

// 0x6B8160
namespace gamemd {
void SpawnManagerClass_25::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall SpawnManagerClass_25_::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6b8166*/
  *(_DWORD *)(this + 16) = 0; /*0x6b8169*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6b8170*/
  {
    __3_YAXPAX_Z(v2); /*0x6b8176*/
    *(_DWORD *)(this + 4) = 0; /*0x6b817e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6b8181*/
  *(_DWORD *)(this + 8) = 0; /*0x6b8184*/
}
}
} // namespace gamemd

// 0x6B8190
namespace gamemd {
unsigned int SpawnManagerClass_25::LoadState(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall SpawnManagerClass_25_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6b8190*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6b81a5*/
  else
    return 0; /*0x6b8197*/
}
}
} // namespace gamemd

// 0x6B81B0
namespace gamemd {
int SpawnManagerClass_25::SaveState(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SpawnManagerClass_25_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x6b81ba*/
}
}
} // namespace gamemd

// 0x6B8220
namespace gamemd {
char SpawnManagerClass_25::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SpawnManagerClass_25_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x6b8222*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6b822d*/
  {
    v3 = 0; /*0x6b822f*/
    if ( v2 <= 0 ) /*0x6b8233*/
      return 1; /*0x6b8253*/
    v4 = (_DWORD *)*(this + 1); /*0x6b8235*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6b823b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6b8244*/
    {
      ++v3; /*0x6b8246*/
      ++v4; /*0x6b8247*/
      if ( v3 >= v2 ) /*0x6b824c*/
        return 1; /*0x6b824c*/
    }
  }
  return 0; /*0x6b824e*/
}
}
} // namespace gamemd

// 0x6B8400
namespace gamemd {
char SpawnManagerClass_25::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall SpawnManagerClass_25_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b840c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x6b8412*/
    if ( a3 ) /*0x6b8418*/
      v4 = a3; /*0x6b842e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6b842a*/
    *((_BYTE *)this + 12) = 1; /*0x6b8432*/
    if ( !v4 ) /*0x6b8436*/
      return 0; /*0x6b84aa*/
    if ( *((_DWORD *)this + 1) ) /*0x6b8438*/
    {
      v5 = *((_DWORD *)this + 2); /*0x6b843f*/
      if ( a2 < v5 ) /*0x6b8444*/
        v5 = a2; /*0x6b8446*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x6b844c*/
        ++i; /*0x6b8451*/
      if ( *((_BYTE *)this + 13) ) /*0x6b845e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6b8469*/
        *((_DWORD *)this + 1) = 0; /*0x6b8471*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x6b847a*/
    *((_DWORD *)this + 2) = a2; /*0x6b8482*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x6b8485*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x6b848e*/
  }
  v7 = *((_DWORD *)this + 2); /*0x6b8491*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x6b8499*/
    *((_DWORD *)this + 4) = v7; /*0x6b849b*/
  return 1; /*0x6b849e*/
}
}
} // namespace gamemd

// 0x6B84B0
namespace gamemd {
int SpawnManagerClass_25::Spawn(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall SpawnManagerClass_25_::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x6b84b0*/
  result = 0; /*0x6b84b3*/
  if ( v2 <= 0 ) /*0x6b84b8*/
    return -1; /*0x6b84cf*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x6b84be*/
  {
    if ( ++result >= v2 ) /*0x6b84cd*/
      return -1; /*0x6b84cd*/
  }
  return result; /*0x6b84d2*/
}
}
} // namespace gamemd

// 0x6B8790
namespace gamemd {
DynamicVector * SpawnManagerClass_25::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall SpawnManagerClass_25_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b8793*/
  *Block = &VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b8796*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b87a0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b87a8*/
    *(Block + 1) = 0; /*0x6b87b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b87bb*/
  *(Block + 2) = 0; /*0x6b87c1*/
  if ( (a2 & 1) != 0 ) /*0x6b87c8*/
    __3_YAXPAX_Z(Block); /*0x6b87cb*/
  return (DynamicVector *)Block; /*0x6b87d5*/
}
}
} // namespace gamemd
